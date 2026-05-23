#include <iostream>
#include <vector>
#include <queue>
#include <random>
#include <cassert>
#include <iomanip>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vtop_accelerator.h"

#define LANES 4

// ============================================================================
// 📊 MECHANISM 1: THE C++ MATHEMATICAL REFERENCE MODEL (SCOREBOARD)
// ============================================================================
class SIMD_Reference_Model {
public:
    // Tracks the 32-bit accumulated total for each of the 4 independent lanes
    long long lane_accumulators[LANES] = {0};

    // Mimics the INT8 multiplication and INT32 saturating addition exactly
    std::vector<long long> step_calculation(const std::vector<int>& a, const std::vector<int>& b) {
        std::vector<long long> current_outputs(LANES);
        
        for(int i = 0; i < LANES; i++) {
            long long product = (long long)a[i] * (long long)b[i];
            lane_accumulators[i] += product;
            
            // Industry-standard INT32 signed saturation clipping boundaries
            if (lane_accumulators[i] > 2147483647)  lane_accumulators[i] = 2147483647;
            if (lane_accumulators[i] < -2147483648) lane_accumulators[i] = -2147483648;
            
            current_outputs[i] = lane_accumulators[i];
        }
        return current_outputs; // Returns what the hardware output should look like
    }
};

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vtop_accelerator* dut = new Vtop_accelerator;

    // Waveform Trace Generation Setup
    Verilated::traceEverOn(true);
    VerilatedVcdC* m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("sim/waveform.vcd");

    int time = 0;
    auto clock_tick = [&]() {
        dut->clk = 0; dut->eval(); m_trace->dump(time++);
        dut->clk = 1; dut->eval(); m_trace->dump(time++);
    };

    // Instantiate our software reference model
    SIMD_Reference_Model software_model;

    // ============================================================================
    // 📊 MECHANISM 2: THE TEMPORAL DELAY LINE QUEUE
    // ============================================================================
    // This software queue buffers golden results to line up with the 2-cycle RTL latency
    std::queue<std::vector<long long>> latency_tracker_queue;

    // --- System Boot & Initial Reset Sequence ---
    dut->rst_n = 0; dut->acc_clr = 1; dut->pipeline_en = 1; dut->v_in = 0;
    clock_tick();
    dut->rst_n = 1; dut->acc_clr = 0;
    clock_tick();

    // --- Constrained-Random Environment Initialization ---
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> int8_dist(-128, 127); // Standard INT8 boundaries

    std::cout << "\n==================================================" << std::endl;
    std::cout << "🚀 STARTING CO-SIMULATION REGRESSION TESTING" << std::endl;
    std::cout << "==================================================" << std::endl;

    // Run a regression sweep of 20 computational clock cycles
    for (int cycle = 0; cycle < 20; cycle++) {
        
        // Randomly simulate an upstream data presentation or an idle bus cycle
        bool stream_active = (cycle < 10); // Continuous stream for first 10 cycles, then idle

        std::vector<int> current_a(LANES), current_b(LANES);
        uint32_t packed_a = 0, packed_b = 0;

        if (stream_active && dut->r_ready) {
            dut->v_in = 1;
            
            // Generate 4 lanes of random data and pack them into 32-bit data streams
            for (int lane = 0; lane < LANES; lane++) {
                current_a[lane] = int8_dist(gen);
                current_b[lane] = int8_dist(gen);
                
                // Pack 8-bit pieces into unified 32-bit words
                packed_a |= ((uint32_t)(uint8_t)current_a[lane]) << (lane * 8);
                packed_b |= ((uint32_t)(uint8_t)current_b[lane]) << (lane * 8);
            }

            dut->vec_din_a = packed_a;
            dut->vec_din_b = packed_b;

            // Compute immediate golden software expectation
            std::vector<long long> golden_results = software_model.step_calculation(current_a, current_b);
            
            // Push it into our delay line queue. It will sit here until the hardware catches up
            latency_tracker_queue.push(golden_results);

        } else {
            dut->v_in = 0; // Simulate idle channel bubbles
        }

        // Advance the physical clock edges
        clock_tick();

        // ============================================================================
        // 📊 MECHANISM 3: INTERCEPTOR & SCOREBOARD COMPARATOR
        // ============================================================================
        // Whenever the hardware's valid flag drops to 1, we pull from our software queue
        if (dut->v_out) {
            assert(!latency_tracker_queue.empty() && "Error: RTL asserted v_out but software queue is empty!");
            
            std::vector<long long> expected = latency_tracker_queue.front();
            latency_tracker_queue.pop();

            std::cout << "[Cycle " << std::setsetw(2) << cycle << "] Checking SIMD Lanes: " << std::endl;

            for (int lane = 0; lane < LANES; lane++) {
                // Extract 32-bit signed slices out of the global wide 128-bit vector bus
                int64_t rtl_raw_slice = (dut->vec_acc_out >> (lane * 32)) & 0xFFFFFFFF;
                
                // Explicitly preserve the sign bit of the 32-bit hardware chunk
                int32_t rtl_lane_result = (int32_t)rtl_raw_slice; 

                std::cout << "  ↳ Lane " << lane << " -> Expected: " << std::setw(11) << expected[lane] 
                          << " | RTL Read: " << std::setw(11) << rtl_lane_result;

                // AUTOMATIC COMPARISON ASSERTION SIGN-OFF
                if (rtl_lane_result == expected[lane]) {
                    std::cout << " ✅ MATCH" << std::endl;
                } else {
                    std::cout << " ❌ MISMATCH!" << std::endl;
                    assert(false && "Verification Failed: Hardware calculation broke specification compliance.");
                }
            }
        }
    }

    std::cout << "==================================================" << std::endl;
    std::cout << "🏆 REGRESSION COMPLETE: 100% SPECIFICATION ALIGNED" << std::endl;
    std::cout << "==================================================" << std::endl;

    m_trace->close();
    delete dut;
    return 0;
}
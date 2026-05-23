// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtop_accelerator__Syms.h"


VL_ATTR_COLD void Vtop_accelerator___024root__trace_init_sub__TOP__0(Vtop_accelerator___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_accelerator___024root__trace_init_sub__TOP__0\n"); );
    Vtop_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+197,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+199,0,"acc_clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"pipeline_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+201,0,"v_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"r_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+203,0,"vec_din_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+204,0,"vec_din_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+205,0,"v_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+206,0,"vec_acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("top_accelerator", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+220,0,"LANES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+221,0,"IN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+222,0,"ACC_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+223,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+197,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+199,0,"acc_clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"pipeline_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+201,0,"v_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"r_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+203,0,"vec_din_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+204,0,"vec_din_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+205,0,"v_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+206,0,"vec_acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+1,0,"lane_fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2,0,"lane_fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+3,0,"all_fifos_have_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"mac_exec_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("fifo_a_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+4+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("fifo_b_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+8+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("lane_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+12+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+16,0,"valid_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("simd_lanes[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fifo_a_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+221,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+223,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+220,0,"ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+197,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+211,0,"wr_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+212,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+17,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+19,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+20+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+36,0,"wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+37,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("fifo_b_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+221,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+223,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+220,0,"ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+197,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+211,0,"wr_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+213,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+38,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+40,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+41+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+57,0,"wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+58,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("mac_core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+221,0,"IN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+222,0,"ACC_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+197,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+199,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+39,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+59,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+60,0,"mult_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+59,0,"acc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"next_acc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+224,0,"MAX_POS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+225,0,"MAX_NEG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("simd_lanes[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fifo_a_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+221,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+223,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+220,0,"ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+197,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+211,0,"wr_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+214,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+62,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+64,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+65+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+81,0,"wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+82,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("fifo_b_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+221,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+223,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+220,0,"ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+197,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+211,0,"wr_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+215,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+83,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+84,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+85,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+86+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+102,0,"wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+103,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("mac_core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+221,0,"IN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+222,0,"ACC_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+197,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+199,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+84,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+104,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"mult_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+104,0,"acc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+106,0,"next_acc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+224,0,"MAX_POS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+225,0,"MAX_NEG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("simd_lanes[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fifo_a_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+221,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+223,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+220,0,"ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+197,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+211,0,"wr_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+216,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+107,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+108,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+109,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+110+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+126,0,"wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+127,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("fifo_b_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+221,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+223,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+220,0,"ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+197,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+211,0,"wr_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+217,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+128,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+129,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+130,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+131+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+147,0,"wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+148,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("mac_core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+221,0,"IN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+222,0,"ACC_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+197,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+199,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+108,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+129,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+149,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+150,0,"mult_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+149,0,"acc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"next_acc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+224,0,"MAX_POS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+225,0,"MAX_NEG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("simd_lanes[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("fifo_a_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+221,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+223,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+220,0,"ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+197,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+211,0,"wr_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+218,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+152,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+153,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+154,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+155+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+171,0,"wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+172,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("fifo_b_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+221,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+223,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+220,0,"ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+197,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+211,0,"wr_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+219,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+173,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+174,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+175,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+176+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+192,0,"wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+193,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("mac_core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+221,0,"IN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+222,0,"ACC_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+197,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+199,0,"clr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+153,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+174,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+194,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+195,0,"mult_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+194,0,"acc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+196,0,"next_acc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+224,0,"MAX_POS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+225,0,"MAX_NEG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop_accelerator___024root__trace_init_top(Vtop_accelerator___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_accelerator___024root__trace_init_top\n"); );
    Vtop_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop_accelerator___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop_accelerator___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtop_accelerator___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop_accelerator___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop_accelerator___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop_accelerator___024root__trace_register(Vtop_accelerator___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_accelerator___024root__trace_register\n"); );
    Vtop_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtop_accelerator___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtop_accelerator___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtop_accelerator___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtop_accelerator___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop_accelerator___024root__trace_const_0_sub_0(Vtop_accelerator___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop_accelerator___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_accelerator___024root__trace_const_0\n"); );
    // Body
    Vtop_accelerator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_accelerator___024root*>(voidSelf);
    Vtop_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtop_accelerator___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop_accelerator___024root__trace_const_0_sub_0(Vtop_accelerator___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_accelerator___024root__trace_const_0_sub_0\n"); );
    Vtop_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+220,(4U),32);
    bufp->fullIData(oldp+221,(8U),32);
    bufp->fullIData(oldp+222,(0x00000020U),32);
    bufp->fullIData(oldp+223,(0x00000010U),32);
    bufp->fullIData(oldp+224,(0x7fffffffU),32);
    bufp->fullIData(oldp+225,(0x80000000U),32);
}

VL_ATTR_COLD void Vtop_accelerator___024root__trace_full_0_sub_0(Vtop_accelerator___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop_accelerator___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_accelerator___024root__trace_full_0\n"); );
    // Body
    Vtop_accelerator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_accelerator___024root*>(voidSelf);
    Vtop_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtop_accelerator___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop_accelerator___024root__trace_full_0_sub_0(Vtop_accelerator___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_accelerator___024root__trace_full_0_sub_0\n"); );
    Vtop_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullCData(oldp+1,(((((IData)(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__empty) 
                               << 3U) | ((IData)(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__empty) 
                                         << 2U)) | 
                             (((IData)(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__empty) 
                               << 1U) | (IData)(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__empty)))),4);
    bufp->fullCData(oldp+2,(((((IData)(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__full) 
                               << 3U) | ((IData)(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__full) 
                                         << 2U)) | 
                             (((IData)(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__full) 
                               << 1U) | (IData)(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__full)))),4);
    bufp->fullBit(oldp+3,((1U & (~ ((IData)(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__empty) 
                                    | ((IData)(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__empty) 
                                       | ((IData)(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__empty) 
                                          | (IData)(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__empty))))))));
    bufp->fullCData(oldp+4,(vlSelfRef.top_accelerator__DOT__fifo_a_out[0]),8);
    bufp->fullCData(oldp+5,(vlSelfRef.top_accelerator__DOT__fifo_a_out[1]),8);
    bufp->fullCData(oldp+6,(vlSelfRef.top_accelerator__DOT__fifo_a_out[2]),8);
    bufp->fullCData(oldp+7,(vlSelfRef.top_accelerator__DOT__fifo_a_out[3]),8);
    bufp->fullCData(oldp+8,(vlSelfRef.top_accelerator__DOT__fifo_b_out[0]),8);
    bufp->fullCData(oldp+9,(vlSelfRef.top_accelerator__DOT__fifo_b_out[1]),8);
    bufp->fullCData(oldp+10,(vlSelfRef.top_accelerator__DOT__fifo_b_out[2]),8);
    bufp->fullCData(oldp+11,(vlSelfRef.top_accelerator__DOT__fifo_b_out[3]),8);
    bufp->fullIData(oldp+12,(vlSelfRef.top_accelerator__DOT__lane_out[0]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.top_accelerator__DOT__lane_out[1]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.top_accelerator__DOT__lane_out[2]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.top_accelerator__DOT__lane_out[3]),32);
    bufp->fullCData(oldp+16,(vlSelfRef.top_accelerator__DOT__valid_pipe),3);
    bufp->fullBit(oldp+17,(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__full));
    bufp->fullCData(oldp+18,(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__dout),8);
    bufp->fullBit(oldp+19,(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__empty));
    bufp->fullCData(oldp+20,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__DOT__mem[0]),8);
    bufp->fullCData(oldp+21,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__DOT__mem[1]),8);
    bufp->fullCData(oldp+22,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__DOT__mem[2]),8);
    bufp->fullCData(oldp+23,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__DOT__mem[3]),8);
    bufp->fullCData(oldp+24,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__DOT__mem[4]),8);
    bufp->fullCData(oldp+25,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__DOT__mem[5]),8);
    bufp->fullCData(oldp+26,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__DOT__mem[6]),8);
    bufp->fullCData(oldp+27,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__DOT__mem[7]),8);
    bufp->fullCData(oldp+28,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__DOT__mem[8]),8);
    bufp->fullCData(oldp+29,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__DOT__mem[9]),8);
    bufp->fullCData(oldp+30,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__DOT__mem[10]),8);
    bufp->fullCData(oldp+31,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__DOT__mem[11]),8);
    bufp->fullCData(oldp+32,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__DOT__mem[12]),8);
    bufp->fullCData(oldp+33,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__DOT__mem[13]),8);
    bufp->fullCData(oldp+34,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__DOT__mem[14]),8);
    bufp->fullCData(oldp+35,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__DOT__mem[15]),8);
    bufp->fullCData(oldp+36,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__DOT__wr_ptr),5);
    bufp->fullCData(oldp+37,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__DOT__rd_ptr),5);
    bufp->fullBit(oldp+38,((((1U & ((IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__wr_ptr) 
                                    >> 4U)) != (1U 
                                                & ((IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__rd_ptr) 
                                                   >> 4U))) 
                            & ((0x0000000fU & (IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__wr_ptr)) 
                               == (0x0000000fU & (IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__rd_ptr))))));
    bufp->fullCData(oldp+39,(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__dout),8);
    bufp->fullBit(oldp+40,(((IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__rd_ptr) 
                            == (IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__wr_ptr))));
    bufp->fullCData(oldp+41,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__mem[0]),8);
    bufp->fullCData(oldp+42,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__mem[1]),8);
    bufp->fullCData(oldp+43,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__mem[2]),8);
    bufp->fullCData(oldp+44,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__mem[3]),8);
    bufp->fullCData(oldp+45,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__mem[4]),8);
    bufp->fullCData(oldp+46,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__mem[5]),8);
    bufp->fullCData(oldp+47,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__mem[6]),8);
    bufp->fullCData(oldp+48,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__mem[7]),8);
    bufp->fullCData(oldp+49,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__mem[8]),8);
    bufp->fullCData(oldp+50,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__mem[9]),8);
    bufp->fullCData(oldp+51,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__mem[10]),8);
    bufp->fullCData(oldp+52,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__mem[11]),8);
    bufp->fullCData(oldp+53,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__mem[12]),8);
    bufp->fullCData(oldp+54,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__mem[13]),8);
    bufp->fullCData(oldp+55,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__mem[14]),8);
    bufp->fullCData(oldp+56,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__mem[15]),8);
    bufp->fullCData(oldp+57,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__wr_ptr),5);
    bufp->fullCData(oldp+58,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__fifo_b_inst__DOT__rd_ptr),5);
    bufp->fullIData(oldp+59,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__mac_core__DOT__acc_reg),32);
    bufp->fullSData(oldp+60,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__mac_core__DOT__mult_reg),16);
    bufp->fullIData(oldp+61,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__0__KET____DOT__mac_core__DOT__next_acc),32);
    bufp->fullBit(oldp+62,(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__full));
    bufp->fullCData(oldp+63,(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__dout),8);
    bufp->fullBit(oldp+64,(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__empty));
    bufp->fullCData(oldp+65,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__DOT__mem[0]),8);
    bufp->fullCData(oldp+66,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__DOT__mem[1]),8);
    bufp->fullCData(oldp+67,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__DOT__mem[2]),8);
    bufp->fullCData(oldp+68,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__DOT__mem[3]),8);
    bufp->fullCData(oldp+69,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__DOT__mem[4]),8);
    bufp->fullCData(oldp+70,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__DOT__mem[5]),8);
    bufp->fullCData(oldp+71,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__DOT__mem[6]),8);
    bufp->fullCData(oldp+72,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__DOT__mem[7]),8);
    bufp->fullCData(oldp+73,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__DOT__mem[8]),8);
    bufp->fullCData(oldp+74,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__DOT__mem[9]),8);
    bufp->fullCData(oldp+75,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__DOT__mem[10]),8);
    bufp->fullCData(oldp+76,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__DOT__mem[11]),8);
    bufp->fullCData(oldp+77,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__DOT__mem[12]),8);
    bufp->fullCData(oldp+78,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__DOT__mem[13]),8);
    bufp->fullCData(oldp+79,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__DOT__mem[14]),8);
    bufp->fullCData(oldp+80,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__DOT__mem[15]),8);
    bufp->fullCData(oldp+81,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__DOT__wr_ptr),5);
    bufp->fullCData(oldp+82,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_a_inst__DOT__rd_ptr),5);
    bufp->fullBit(oldp+83,((((1U & ((IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__wr_ptr) 
                                    >> 4U)) != (1U 
                                                & ((IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__rd_ptr) 
                                                   >> 4U))) 
                            & ((0x0000000fU & (IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__wr_ptr)) 
                               == (0x0000000fU & (IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__rd_ptr))))));
    bufp->fullCData(oldp+84,(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__dout),8);
    bufp->fullBit(oldp+85,(((IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__rd_ptr) 
                            == (IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__wr_ptr))));
    bufp->fullCData(oldp+86,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__mem[0]),8);
    bufp->fullCData(oldp+87,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__mem[1]),8);
    bufp->fullCData(oldp+88,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__mem[2]),8);
    bufp->fullCData(oldp+89,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__mem[3]),8);
    bufp->fullCData(oldp+90,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__mem[4]),8);
    bufp->fullCData(oldp+91,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__mem[5]),8);
    bufp->fullCData(oldp+92,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__mem[6]),8);
    bufp->fullCData(oldp+93,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__mem[7]),8);
    bufp->fullCData(oldp+94,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__mem[8]),8);
    bufp->fullCData(oldp+95,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__mem[9]),8);
    bufp->fullCData(oldp+96,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__mem[10]),8);
    bufp->fullCData(oldp+97,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__mem[11]),8);
    bufp->fullCData(oldp+98,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__mem[12]),8);
    bufp->fullCData(oldp+99,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__mem[13]),8);
    bufp->fullCData(oldp+100,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__mem[14]),8);
    bufp->fullCData(oldp+101,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__mem[15]),8);
    bufp->fullCData(oldp+102,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__wr_ptr),5);
    bufp->fullCData(oldp+103,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__fifo_b_inst__DOT__rd_ptr),5);
    bufp->fullIData(oldp+104,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__mac_core__DOT__acc_reg),32);
    bufp->fullSData(oldp+105,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__mac_core__DOT__mult_reg),16);
    bufp->fullIData(oldp+106,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__1__KET____DOT__mac_core__DOT__next_acc),32);
    bufp->fullBit(oldp+107,(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__full));
    bufp->fullCData(oldp+108,(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__dout),8);
    bufp->fullBit(oldp+109,(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__empty));
    bufp->fullCData(oldp+110,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__DOT__mem[0]),8);
    bufp->fullCData(oldp+111,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__DOT__mem[1]),8);
    bufp->fullCData(oldp+112,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__DOT__mem[2]),8);
    bufp->fullCData(oldp+113,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__DOT__mem[3]),8);
    bufp->fullCData(oldp+114,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__DOT__mem[4]),8);
    bufp->fullCData(oldp+115,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__DOT__mem[5]),8);
    bufp->fullCData(oldp+116,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__DOT__mem[6]),8);
    bufp->fullCData(oldp+117,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__DOT__mem[7]),8);
    bufp->fullCData(oldp+118,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__DOT__mem[8]),8);
    bufp->fullCData(oldp+119,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__DOT__mem[9]),8);
    bufp->fullCData(oldp+120,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__DOT__mem[10]),8);
    bufp->fullCData(oldp+121,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__DOT__mem[11]),8);
    bufp->fullCData(oldp+122,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__DOT__mem[12]),8);
    bufp->fullCData(oldp+123,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__DOT__mem[13]),8);
    bufp->fullCData(oldp+124,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__DOT__mem[14]),8);
    bufp->fullCData(oldp+125,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__DOT__mem[15]),8);
    bufp->fullCData(oldp+126,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__DOT__wr_ptr),5);
    bufp->fullCData(oldp+127,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_a_inst__DOT__rd_ptr),5);
    bufp->fullBit(oldp+128,((((1U & ((IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__wr_ptr) 
                                     >> 4U)) != (1U 
                                                 & ((IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__rd_ptr) 
                                                    >> 4U))) 
                             & ((0x0000000fU & (IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__wr_ptr)) 
                                == (0x0000000fU & (IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__rd_ptr))))));
    bufp->fullCData(oldp+129,(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__dout),8);
    bufp->fullBit(oldp+130,(((IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__rd_ptr) 
                             == (IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__wr_ptr))));
    bufp->fullCData(oldp+131,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__mem[0]),8);
    bufp->fullCData(oldp+132,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__mem[1]),8);
    bufp->fullCData(oldp+133,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__mem[2]),8);
    bufp->fullCData(oldp+134,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__mem[3]),8);
    bufp->fullCData(oldp+135,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__mem[4]),8);
    bufp->fullCData(oldp+136,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__mem[5]),8);
    bufp->fullCData(oldp+137,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__mem[6]),8);
    bufp->fullCData(oldp+138,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__mem[7]),8);
    bufp->fullCData(oldp+139,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__mem[8]),8);
    bufp->fullCData(oldp+140,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__mem[9]),8);
    bufp->fullCData(oldp+141,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__mem[10]),8);
    bufp->fullCData(oldp+142,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__mem[11]),8);
    bufp->fullCData(oldp+143,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__mem[12]),8);
    bufp->fullCData(oldp+144,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__mem[13]),8);
    bufp->fullCData(oldp+145,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__mem[14]),8);
    bufp->fullCData(oldp+146,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__mem[15]),8);
    bufp->fullCData(oldp+147,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__wr_ptr),5);
    bufp->fullCData(oldp+148,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__fifo_b_inst__DOT__rd_ptr),5);
    bufp->fullIData(oldp+149,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__mac_core__DOT__acc_reg),32);
    bufp->fullSData(oldp+150,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__mac_core__DOT__mult_reg),16);
    bufp->fullIData(oldp+151,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__2__KET____DOT__mac_core__DOT__next_acc),32);
    bufp->fullBit(oldp+152,(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__full));
    bufp->fullCData(oldp+153,(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__dout),8);
    bufp->fullBit(oldp+154,(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__empty));
    bufp->fullCData(oldp+155,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__DOT__mem[0]),8);
    bufp->fullCData(oldp+156,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__DOT__mem[1]),8);
    bufp->fullCData(oldp+157,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__DOT__mem[2]),8);
    bufp->fullCData(oldp+158,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__DOT__mem[3]),8);
    bufp->fullCData(oldp+159,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__DOT__mem[4]),8);
    bufp->fullCData(oldp+160,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__DOT__mem[5]),8);
    bufp->fullCData(oldp+161,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__DOT__mem[6]),8);
    bufp->fullCData(oldp+162,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__DOT__mem[7]),8);
    bufp->fullCData(oldp+163,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__DOT__mem[8]),8);
    bufp->fullCData(oldp+164,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__DOT__mem[9]),8);
    bufp->fullCData(oldp+165,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__DOT__mem[10]),8);
    bufp->fullCData(oldp+166,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__DOT__mem[11]),8);
    bufp->fullCData(oldp+167,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__DOT__mem[12]),8);
    bufp->fullCData(oldp+168,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__DOT__mem[13]),8);
    bufp->fullCData(oldp+169,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__DOT__mem[14]),8);
    bufp->fullCData(oldp+170,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__DOT__mem[15]),8);
    bufp->fullCData(oldp+171,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__DOT__wr_ptr),5);
    bufp->fullCData(oldp+172,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_a_inst__DOT__rd_ptr),5);
    bufp->fullBit(oldp+173,((((1U & ((IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__wr_ptr) 
                                     >> 4U)) != (1U 
                                                 & ((IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__rd_ptr) 
                                                    >> 4U))) 
                             & ((0x0000000fU & (IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__wr_ptr)) 
                                == (0x0000000fU & (IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__rd_ptr))))));
    bufp->fullCData(oldp+174,(vlSelfRef.top_accelerator__DOT____Vcellout__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__dout),8);
    bufp->fullBit(oldp+175,(((IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__rd_ptr) 
                             == (IData)(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__wr_ptr))));
    bufp->fullCData(oldp+176,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__mem[0]),8);
    bufp->fullCData(oldp+177,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__mem[1]),8);
    bufp->fullCData(oldp+178,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__mem[2]),8);
    bufp->fullCData(oldp+179,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__mem[3]),8);
    bufp->fullCData(oldp+180,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__mem[4]),8);
    bufp->fullCData(oldp+181,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__mem[5]),8);
    bufp->fullCData(oldp+182,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__mem[6]),8);
    bufp->fullCData(oldp+183,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__mem[7]),8);
    bufp->fullCData(oldp+184,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__mem[8]),8);
    bufp->fullCData(oldp+185,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__mem[9]),8);
    bufp->fullCData(oldp+186,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__mem[10]),8);
    bufp->fullCData(oldp+187,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__mem[11]),8);
    bufp->fullCData(oldp+188,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__mem[12]),8);
    bufp->fullCData(oldp+189,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__mem[13]),8);
    bufp->fullCData(oldp+190,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__mem[14]),8);
    bufp->fullCData(oldp+191,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__mem[15]),8);
    bufp->fullCData(oldp+192,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__wr_ptr),5);
    bufp->fullCData(oldp+193,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__fifo_b_inst__DOT__rd_ptr),5);
    bufp->fullIData(oldp+194,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__mac_core__DOT__acc_reg),32);
    bufp->fullSData(oldp+195,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__mac_core__DOT__mult_reg),16);
    bufp->fullIData(oldp+196,(vlSelfRef.top_accelerator__DOT__simd_lanes__BRA__3__KET____DOT__mac_core__DOT__next_acc),32);
    bufp->fullBit(oldp+197,(vlSelfRef.clk));
    bufp->fullBit(oldp+198,(vlSelfRef.rst_n));
    bufp->fullBit(oldp+199,(vlSelfRef.acc_clr));
    bufp->fullBit(oldp+200,(vlSelfRef.pipeline_en));
    bufp->fullBit(oldp+201,(vlSelfRef.v_in));
    bufp->fullBit(oldp+202,(vlSelfRef.r_ready));
    bufp->fullIData(oldp+203,(vlSelfRef.vec_din_a),32);
    bufp->fullIData(oldp+204,(vlSelfRef.vec_din_b),32);
    bufp->fullBit(oldp+205,(vlSelfRef.v_out));
    bufp->fullWData(oldp+206,(vlSelfRef.vec_acc_out),128);
    bufp->fullBit(oldp+210,(vlSelfRef.top_accelerator__DOT__mac_exec_en));
    bufp->fullBit(oldp+211,(vlSelfRef.top_accelerator__DOT____Vcellinp__simd_lanes__BRA__0__KET____DOT__fifo_a_inst__wr_en));
    bufp->fullCData(oldp+212,((0x000000ffU & vlSelfRef.vec_din_a)),8);
    bufp->fullCData(oldp+213,((0x000000ffU & vlSelfRef.vec_din_b)),8);
    bufp->fullCData(oldp+214,((0x000000ffU & (vlSelfRef.vec_din_a 
                                              >> 8U))),8);
    bufp->fullCData(oldp+215,((0x000000ffU & (vlSelfRef.vec_din_b 
                                              >> 8U))),8);
    bufp->fullCData(oldp+216,((0x000000ffU & (vlSelfRef.vec_din_a 
                                              >> 0x00000010U))),8);
    bufp->fullCData(oldp+217,((0x000000ffU & (vlSelfRef.vec_din_b 
                                              >> 0x00000010U))),8);
    bufp->fullCData(oldp+218,((vlSelfRef.vec_din_a 
                               >> 0x00000018U)),8);
    bufp->fullCData(oldp+219,((vlSelfRef.vec_din_b 
                               >> 0x00000018U)),8);
}

`timescale 1ns/1ps

module mac_unit #(
    parameter IN_WIDTH  = 8,
    parameter ACC_WIDTH = 32
)(
    input  logic              clk,
    input  logic              rst_n,
    input  logic              en,       // Pipeline clock enable (freeze control)
    input  logic              clr,      // Synchronous accumulator clear
    input  logic signed [IN_WIDTH-1:0]  a_in,  // INT8 Activation
    input  logic signed [IN_WIDTH-1:0]  b_in,  // INT8 Weight
    output logic signed [ACC_WIDTH-1:0] out    // INT32 Accumulated Output
);

    // Pipeline Stage Registers
    // Multiplying two 8-bit signed numbers requires a 16-bit intermediate container
    logic signed [(IN_WIDTH*2)-1:0] mult_reg; 
    logic signed [ACC_WIDTH-1:0]    acc_reg;
    logic signed [ACC_WIDTH-1:0]    next_acc;

    // --- 32-BIT SIGNED SATURATION CONSTANTS ---
    localparam signed [ACC_WIDTH-1:0] MAX_POS = 32'h7FFFFFFF;
    localparam signed [ACC_WIDTH-1:0] MAX_NEG = 32'h80000000;

    // --- ARITHMETIC LOGIC (INT32 Accumulation with Saturation) ---
    always_comb begin
        // Automatically sign-extend the 16-bit multiplication product up to 32 bits before adding
        next_acc = acc_reg + signed'(mult_reg);

        // Positive Overflow Safeguard: If (Pos + Pos = Neg) -> Snap to Max Positive
        if (acc_reg > 0 && mult_reg > 0 && next_acc < 0) begin
            next_acc = MAX_POS;
        end 
        // Negative Overflow Safeguard: If (Neg + Neg = Pos) -> Snap to Max Negative
        else if (acc_reg < 0 && mult_reg < 0 && next_acc > 0) begin
            next_acc = MAX_NEG;
        end
    end

    // --- STAGE 1: INT8 Signed Multiplication ---
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            mult_reg <= '0;
        end else if (en) begin
            mult_reg <= a_in * b_in;
        end
    end

    // --- STAGE 2: INT32 Accumulation with Freeze Control ---
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            acc_reg <= '0;
        end else if (clr) begin
            acc_reg <= '0;
        end else if (en) begin
            acc_reg <= next_acc;
        end
    end

    // Continuous drive out to output port
    assign out = acc_reg;

endmodule
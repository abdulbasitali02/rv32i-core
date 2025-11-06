/*
 * Module: fetch
 *
 * Description: Fetch stage
 *
 * -------- REPLACE THIS FILE WITH THE MEMORY MODULE DEVELOPED IN PD1 -----------
 *
 * Inputs:
 * 1) clk
 * 2) rst signal
 *
 * Outputs:
 * 1) AWIDTH wide program counter pc_o
 * 2) DWIDTH wide instruction output insn_o
 */

`include "constants.svh"

module fetch #(
    parameter int DWIDTH=32,
    parameter int AWIDTH=32,
    parameter logic [AWIDTH-1:0] RESET_PC = AWIDTH'(IMEM_BASE_ADDR)
    )(
	// inputs
	input logic clk,
	input logic rst,
    input logic pcsel_i,
    input logic [AWIDTH-1:0] next_pc_i,
    input logic [DWIDTH-1:0] insn_mem_i,
    output logic [AWIDTH-1:0] pc_o,
    output logic [DWIDTH-1:0] insn_o
);

logic [AWIDTH-1:0] pc_q;
logic [DWIDTH-1:0] insn_q;

always_ff @(posedge clk) begin
    if (rst) begin
        pc_q <= RESET_PC;
        insn_q <= INSN_NOP; 
    end else begin
        pc_q <= next_pc_i;
        insn_q <= insn_mem_i;
    end

assign pc_o = pc_q;
assign insn_o = insn_q;

endmodule : fetch

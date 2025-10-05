/*
 * Module: pd1
 *
 * Description: Top level module that will contain sub-module instantiations.
 *
 * Inputs:
 * 1) clk
 * 2) reset signal
 */

module pd1 #(
    parameter int AWIDTH = 32,
    parameter int DWIDTH = 32)(
    input logic clk,
    input logic reset
);

 /*
  * Instantiate other submodules and
  * probes. To be filled by student...
  *
  */

// Fetch <-> Instruction memory nets

logic [AWIDTH-1:0] if_pc;
logic [DWIDTH-1:0] if_instr;

logic [AWIDTH-1:0] imem_addr;
logic [DWIDTH-1:0] imem_rdata, imem_wdata;
logic imem_read_en, imem_write_en;

// Program Counter (PC) register

// --------------------------
// Fetch stage
// --------------------------
fetch #(
    .DWIDTH(DWIDTH),
    .AWIDTH(AWIDTH),
    .BASEADDR(32'h01000000)
) u_fetch (
    .clk(clk),
    .rst(reset),
    .pc_o(if_pc),
    .insn_o(/*unused in PD1; instruction taken from memory below*/)
);


// --------------------------
// Instruction memory (Read-only in PD1)
// I-Mem is driven directly by fetch stage PC
// --------------------------
assign imem_addr = if_pc;
assign imem_read_en = 1'b1; // Always read in PD1
assign imem_write_en = 1'b0; // Never write in PD1
assign imem_wdata = '0; // No writes in PD1

memory #(
    .AWIDTH(AWIDTH),
    .DWIDTH(DWIDTH),
    .BASE_ADDR(32'h01000000)
) u_imem (
    .clk(clk),
    .rst(reset),
    .addr_i(imem_addr),
    .data_i(imem_wdata),
    .read_en_i(imem_read_en),
    .write_en_i(imem_write_en),
    .data_o(imem_rdata)
);


// Connect instruction memory output to fetch instruction output
assign if_instr = imem_rdata;

endmodule : pd1

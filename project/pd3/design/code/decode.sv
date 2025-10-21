/*
 * Module: decode
 *
 * Description: Decode stage
 *
 * Inputs:
 * 1) clk
 * 2) rst signal
 * 3) insn_iruction ins_i
 * 4) program counter pc_i
 * Outputs:
 * 1) AWIDTH wide program counter pc_o
 * 2) DWIDTH wide insn_iruction output insn_o
 * 3) 5-bit wide destination register ID rd_o
 * 4) 5-bit wide source 1 register ID rs1_o
 * 5) 5-bit wide source 2 register ID rs2_o
 * 6) 7-bit wide funct7 funct7_o
 * 7) 3-bit wide funct3 funct3_o
 * 8) 32-bit wide immediate imm_o
 * 9) 5-bit wide shift amount shamt_o
 * 10) 7-bit width opcode_o
 */

`include "constants.svh"

module decode #(
    parameter int DWIDTH=32,
    parameter int AWIDTH=32
)(
	// inputs
	input logic clk,
	input logic rst,
	input logic [DWIDTH - 1:0] insn_i,
	input logic [DWIDTH - 1:0] pc_i,

    // outputs
    output logic [AWIDTH-1:0] pc_o,
    output logic [DWIDTH-1:0] insn_o,
    output logic [6:0] opcode_o,
    output logic [4:0] rd_o,
    output logic [4:0] rs1_o,
    output logic [4:0] rs2_o,
    output logic [6:0] funct7_o,
    output logic [2:0] funct3_o,
    output logic [4:0] shamt_o,
    output logic [DWIDTH-1:0] imm_o
);	

    /*
     * Process definitions to be filled by
     * student below...
     */

    logic [DWIDTH-1:0] pc_q;
    logic [DWIDTH-1:0] insn_q;
    logic [DWIDTH-1:0] imm_q;

    // Register the inpurts to create decode stage pipeline registers
    always_ff @(posedge clk) begin
        if (rst) begin
            pc_q <= ZERO;
            insn_q <= INSN_NOP; // NOP instruction
        end else begin
            pc_q <= pc_i;
            insn_q <= insn_i;
        end
    end

    // Decode instruction fields from registered instruction
    assign opcode_o = insn_q[6:0];
    assign rd_o = insn_q[11:7];
    assign funct3_o = insn_q[14:12];
    assign rs1_o = insn_q[19:15];
    assign rs2_o = insn_q[24:20];
    assign shamt_o = insn_q[24:20];
    assign funct7_o = insn_q[31:25];

    // Immediate generation based on instruction type
    igen #(
        .DWIDTH(DWIDTH)
    ) u_igen (
        .insn_i(insn_q),
        .imm_o(imm_q),
        .opcode_i(opcode_o)
    );

    // Output assignments
    assign pc_o = pc_q;
    assign insn_o = insn_q;
    assign imm_o = imm_q;

endmodule : decode

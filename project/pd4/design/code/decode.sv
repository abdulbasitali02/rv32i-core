/*
 * Module: decode
 *
 * Description: Decode stage
 *
 * -------- REPLACE THIS FILE WITH THE DECODE MODULE DEVELOPED IN PD2 -----------
 */

`include "constants.svh"

module decode #(
    parameter int DWIDTH=32,
    parameter int AWIDTH=32
)(
	// inputs
	input logic clk,
	input logic rst,
	input logic [DWIDTH-1:0] insn_i,
	input logic [AWIDTH-1:0] pc_i,

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

    logic [AWIDTH-1:0] pc_q;
    logic [DWIDTH-1:0] insn_q;
    logic [DWIDTH-1:0] imm_q;

    // Register the inpurts to create decode stage pipeline registers
    always_ff @(posedge clk) begin
        if (rst) begin
            pc_q <= AWIDTH'(IMEM_BASE_ADDR);
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
        .opcode_i(opcode_o),
        .insn_i(insn_q),
        .imm_o(imm_q)
    );

    // Output assignments
    assign pc_o = pc_q;
    assign insn_o = insn_q;
    assign imm_o = imm_q;

endmodule : decode
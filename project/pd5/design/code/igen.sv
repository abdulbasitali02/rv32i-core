/*
 * Module: igen
 *
 * Description: Immediate value generator
 * -------- REPLACE THIS FILE WITH THE MEMORY MODULE DEVELOPED IN PD2 -----------
 */

`include "constants.svh"
module igen #(
    parameter int DWIDTH=32
    )(
    input logic [6:0] opcode_i,
    input logic [DWIDTH-1:0] insn_i,
    output logic [DWIDTH-1:0] imm_o
);

    /*
     * Process definitions to be filled by
     * student below...
     */

     logic [DWIDTH-1:0] imm_val;

     always_comb begin
        imm_val = '0;

        unique case (opcode_i)
            OPCODE_LUI,
            OPCODE_AUIPC: begin
                imm_val = {insn_i[31:12], 12'b0};
            end

            OPCODE_JAL: begin
                imm_val = {{11{insn_i[31]}}, insn_i[31], insn_i[19:12], insn_i[20], insn_i[30:21], 1'b0};
            end

            OPCODE_JALR,
            OPCODE_LOAD,
            OPCODE_OP_IMM,
            OPCODE_SYSTEM: begin
                imm_val = {{20{insn_i[31]}}, insn_i[31:20]};
            end

            OPCODE_STORE: begin
                imm_val = {{20{insn_i[31]}}, insn_i[31:25], insn_i[11:7]};
            end

            OPCODE_BRANCH: begin
                imm_val = {{19{insn_i[31]}}, insn_i[31], insn_i[7], insn_i[30:25], insn_i[11:8], 1'b0};
            end

            default: begin
                imm_val = '0;
            end
        endcase

        end

    assign imm_o = imm_val;

endmodule : igen
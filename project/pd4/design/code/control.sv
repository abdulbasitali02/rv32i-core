/*
 * Module: control
 *
 * Description: This module sets the control bits (control path) based on the decoded
 * instruction. Note that this is part of the decode stage but housed in a separate
 * module for better readability, debug and design purposes.
 *
 * -------- REPLACE THIS FILE WITH THE CONTROL MODULE DEVELOPED IN PD2 -----------
 */


`include "constants.svh"
module control #(
	parameter int DWIDTH=32
)(
	// inputs
    input logic [DWIDTH-1:0] insn_i,
    input logic [6:0] opcode_i,
    input logic [6:0] funct7_i,
    input logic [2:0] funct3_i,

    // outputs
    output logic pcsel_o,
    output logic immsel_o,
    output logic regwren_o,
    output logic rs1sel_o,
    output logic rs2sel_o,
    output logic memren_o,
    output logic memwren_o,
    output logic [1:0] wbsel_o,
    output logic [3:0] alusel_o
);
 

    /*
     * Process definitions to be filled by
     * student below...
     */

logic [6:0] imm_shamt_funct7;
assign imm_shamt_funct7 = insn_i[31:25];

always_comb begin
    pcsel_o = 1'b0;
    immsel_o = 1'b0;
    regwren_o = 1'b0;
    rs1sel_o = 1'b0;
    rs2sel_o = 1'b0;
    memren_o = 1'b0;
    memwren_o = 1'b0;
    wbsel_o = WBSEL_ALU;
    alusel_o = ALU_OP_ADD;

    unique case (opcode_i)
        OPCODE_LUI: begin
            regwren_o = 1'b1;
            immsel_o  = 1'b1;
            wbsel_o   = WBSEL_IMM;
            alusel_o  = ALU_OP_COPY_B;
        end

        OPCODE_AUIPC: begin
            regwren_o = 1'b1;
            immsel_o  = 1'b1;
            wbsel_o   = WBSEL_ALU;
            alusel_o  = ALU_OP_ADD;
        end

        OPCODE_JAL: begin
            pcsel_o   = 1'b1;
            regwren_o = 1'b1;
            immsel_o  = 1'b1;
            wbsel_o   = WBSEL_PC4;
            alusel_o  = ALU_OP_ADD;
        end

        OPCODE_JALR: begin
            pcsel_o   = 1'b1;
            regwren_o = 1'b1;
            immsel_o  = 1'b1;
            rs1sel_o  = 1'b1;
            wbsel_o   = WBSEL_PC4;
            alusel_o  = ALU_OP_ADD;
        end

        OPCODE_BRANCH: begin
            pcsel_o   = 1'b1; // branch target formed using PC and immediate
            immsel_o  = 1'b1;
            rs1sel_o  = 1'b1;
            rs2sel_o  = 1'b1;
            alusel_o  = ALU_OP_ADD;
        end

        OPCODE_LOAD: begin
            regwren_o = 1'b1;
            immsel_o  = 1'b1;
            rs1sel_o  = 1'b1;
            memren_o  = 1'b1;
            wbsel_o   = WBSEL_MEM;
            alusel_o  = ALU_OP_ADD;
        end

        OPCODE_STORE: begin
            immsel_o  = 1'b1;
            rs1sel_o  = 1'b1;
            rs2sel_o  = 1'b1;
            memwren_o = 1'b1;
            alusel_o  = ALU_OP_ADD;
        end

        OPCODE_OP_IMM: begin
            regwren_o = 1'b1;
            immsel_o  = 1'b1;
            rs1sel_o  = 1'b1;
            wbsel_o   = WBSEL_ALU;

            unique case (funct3_i)
                FUNCT3_ADD_SUB: alusel_o = ALU_OP_ADD;
                FUNCT3_SLL: alusel_o = ALU_OP_SLL;
                FUNCT3_SLT: alusel_o = ALU_OP_SLT;
                FUNCT3_SLTU: alusel_o = ALU_OP_SLTU;
                FUNCT3_XOR: alusel_o = ALU_OP_XOR;
                FUNCT3_OR: alusel_o = ALU_OP_OR;
                FUNCT3_AND: alusel_o = ALU_OP_AND;
                FUNCT3_SR: begin
                    if (imm_shamt_funct7 == FUNCT7_SUB_SRA) begin
                        alusel_o = ALU_OP_SRA;
                    end else begin
                        alusel_o = ALU_OP_SRL;
                    end
                end
                default: alusel_o = ALU_OP_ADD; // default
            endcase
        end

        OPCODE_OP: begin
            regwren_o = 1'b1;
            rs1sel_o  = 1'b1;
            rs2sel_o  = 1'b1;
            wbsel_o   = WBSEL_ALU;

            unique case (funct3_i)
                FUNCT3_ADD_SUB: begin
                    if (funct7_i == FUNCT7_SUB_SRA) begin
                        alusel_o = ALU_OP_SUB;
                    end else begin
                        alusel_o = ALU_OP_ADD;
                    end
                end
                FUNCT3_SLL: alusel_o = ALU_OP_SLL;
                FUNCT3_SLT: alusel_o = ALU_OP_SLT;
                FUNCT3_SLTU: alusel_o = ALU_OP_SLTU;
                FUNCT3_XOR: alusel_o = ALU_OP_XOR;
                FUNCT3_OR: alusel_o = ALU_OP_OR;
                FUNCT3_AND: alusel_o = ALU_OP_AND;
                FUNCT3_SR: begin
                    if (funct7_i == FUNCT7_SUB_SRA) begin
                        alusel_o = ALU_OP_SRA;
                    end else begin
                        alusel_o = ALU_OP_SRL;
                    end
                end
                default: alusel_o = ALU_OP_ADD; // default
            endcase
        end

        OPCODE_SYSTEM: begin
            //treat system operations as immediate baseds register writes if rd != 0
            regwren_o = (insn_i[11:7] != 5'd0);
            immsel_o  = 1'b1;
            rs1sel_o  = 1'b1;
            wbsel_o   = WBSEL_ALU;
            alusel_o  = ALU_OP_ADD;
        end

        default: begin
        end

    endcase
end

endmodule : control
/*
 * Module: branch_control
 *
 * Description: Branch control logic. Only sets the branch control bits based on the
 * branch instruction
 *
 * Inputs:
 * 1) 7-bit instruction opcode opcode_i
 * 2) 3-bit funct3 funct3_i
 * 3) 32-bit rs1 data rs1_i
 * 4) 32-bit rs2 data rs2_i
 *
 * Outputs:
 * 1) 1-bit operands are equal signal breq_o
 * 2) 1-bit rs1 < rs2 signal brlt_o
 */



 module branch_control #(
    parameter int DWIDTH=32
)(
    // inputs
    input logic [6:0] opcode_i,
    input logic [2:0] funct3_i,
    input logic [DWIDTH-1:0] rs1_i,
    input logic [DWIDTH-1:0] rs2_i,
    // outputs
    output logic breq_o,
    output logic brlt_o
);
    `include "constants.svh"

    /*
     * Process definitions to be filled by
     * student below...
     */

    logic signed [DWIDTH-1:0] rs1_signed;
    logic signed [DWIDTH-1:0] rs2_signed;

    assign rs1_signed = rs1_i;
    assign rs2_signed = rs2_i;

    always_comb begin

        //default branch values
        breq_o = 1'b0;
        brlt_o = 1'b0;

        if (opcode_i == OPCODE_BRANCH) begin
            breq_o = (rs1_i == rs2_i);

            unique case (funct3_i)
                3'b110, 3'b111: begin
                    brlt_o = rs1_i < rs2_i; //unsigned comparison for BLT and BGE
                end
                default: begin
                    brlt_o = (rs1_signed < rs2_signed); //unsigned comparison for others
                end
            endcase
        end
    end

endmodule : branch_control


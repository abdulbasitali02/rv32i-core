/*
 * Module: register_file
 *
 * Description: Branch control logic. Only sets the branch control bits based on the
 * branch instruction
 *
 * -------- REPLACE THIS FILE WITH THE MEMORY MODULE DEVELOPED IN PD4 -----------
 *
 */

`include "constants.svh"

 module register_file #(
     parameter int DWIDTH=32
 )(
     // inputs
     input logic clk,
     input logic rst,
     input logic [4:0] rs1_i,
     input logic [4:0] rs2_i,
     input logic [4:0] rd_i,
     input logic [DWIDTH-1:0] datawb_i,
     input logic regwren_i,
     // outputs
     output logic [DWIDTH-1:0] rs1data_o,
     output logic [DWIDTH-1:0] rs2data_o
 );

    /*
     * Process definitions to be filled by
     * student below...
     */

    logic [DWIDTH-1:0] registers [0:31];

     //SYNCHRONOUS write with RESET initialization of stack pointer
    always_ff @(posedge clk) begin
        if (rst) begin
            for (int i = 0; i < 32; i++) begin
                registers[i] <= ZERO;
            end
            registers[5'd2] <= STACK_POINTER_INIT; // initialize stack pointer (x2)
        end else begin
            registers[5'd0] <= ZERO; // x0 is always zero
            if (regwren_i && (rd_i != 5'd0)) begin
                registers[rd_i] <= datawb_i;
            end
        end
    end

        //combinational read ports
        assign rs1data_o = (rs1_i == 5'd0) ? ZERO : registers[rs1_i];
        assign rs2data_o = (rs2_i == 5'd0) ? ZERO : registers[rs2_i];


endmodule : register_file
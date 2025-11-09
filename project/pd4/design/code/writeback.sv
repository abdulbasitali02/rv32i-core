/*
 * Module: writeback
 *
 * Description: Write-back control stage implementation
 *
 * Inputs:
 * 1) PC pc_i
 * 2) result from alu alu_res_i
 * 3) data from memory memory_data_i
 * 4) data to select for write-back wbsel_i
 * 5) branch taken signal brtaken_i
 *
 * Outputs:
 * 1) DWIDTH wide write back data write_data_o
 * 2) AWIDTH wide next computed PC next_pc_o
 */

 `include "constants.svh"
 module writeback #(
     parameter int DWIDTH=32,
     parameter int AWIDTH=32
 )(
     input logic [AWIDTH-1:0] pc_i,
     input logic [DWIDTH-1:0] alu_res_i,
     input logic [DWIDTH-1:0] memory_data_i,
     input logic [DWIDTH-1:0] imm_i,
     input logic [1:0] wbsel_i,
     input logic brtaken_i,
     output logic [DWIDTH-1:0] writeback_data_o,
     output logic [AWIDTH-1:0] next_pc_o
 );



    /*
     * Process definitions to be filled by
     * student below...
     */

     logic [AWIDTH-1:0] pc_plus4;
     logic [AWIDTH-1:0] next_pc;

     assign pc_plus4 = pc_i + AWIDTH'(32'd4);

     always_comb begin
        unique case (wbsel_i)
            WBSEL_ALU: writeback_data_o = alu_res_i;
            WBSEL_MEM: writeback_data_o = memory_data_i;
            WBSEL_PC4: writeback_data_o = DWIDTH'(pc_plus4);
            WBSEL_IMM: writeback_data_o = imm_i;
            default: writeback_data_o = alu_res_i;
        endcase
    end

    always_comb begin
        next_pc = pc_plus4;
        if (brtaken_i) begin
            next_pc = AWIDTH'(alu_res_i);
        end
    end
    assign next_pc_o = next_pc;


endmodule : writeback

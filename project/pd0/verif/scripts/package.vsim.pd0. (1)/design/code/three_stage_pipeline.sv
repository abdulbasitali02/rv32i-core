/*
 * Module: three_stage_pipeline
 *
 * A 3-stage pipeline (TSP) where the first stage performs an addition of two
 * operands (op1_i, op2_i) and registers the output, and the second stage computes
 * the difference between the output from the first stage and op1_i and registers the
 * output. This means that the output (res_o) must be available two cycles after the
 * corresponding inputs have been observed on the rising clock edge
 *
 * Visually, the circuit should look like this:
 *               <---         Stage 1           --->
 *                                                        <---         Stage 2           --->
 *                                                                                               <--    Stage 3    -->
 *                                    |------------------>|                    |
 * -- op1_i -->|                    | --> |         |     |                    |-->|         |   |                    |
 *             | pipeline registers |     | ALU add | --> | pipeline registers |   | ALU sub |-->| pipeline register  | -- res_o -->
 * -- op2_i -->|                    | --> |         |     |                    |-->|         |   |                    |
 *
 * Inputs:
 * 1) 1-bit clock signal
 * 2) 1-bit wide synchronous reset
 * 3) DWIDTH-wide input op1_i
 * 4) DWIDTH-wide input op2_i
 *
 * Outputs:
 * 1) DWIDTH-wide result res_o
 */

import constants_pkg::*;

module three_stage_pipeline #(
parameter int DWIDTH = 8)(
        input logic clk,
        input logic rst,
        input logic [DWIDTH-1:0] op1_i,
        input logic [DWIDTH-1:0] op2_i,
        output logic [DWIDTH-1:0] res_o
    );

    /*
     * Process definitions to be filled by
     * student below...
     * [HINT] Instantiate the alu and reg_rst modules
     * and set up the necessary connections
     *
     */

		
		
		//Stage 1: Compute the SUM and register it. Then instantiate ALU for computation.
		
		logic [DWIDTH-1:0] sum_s1;
		logic [DWIDTH-1:0] sum_s1_reg;
		
		alu #(.DWIDTH(DWIDTH)) alu_add (
			.sel_i (ADD),
			.op1_i (op1_i),
			.op2_i (op2_i),
			.res_o (sum_s1),
			.zero_o(),
			.neg_o()
		);
		
		reg_rst #(.DWIDTH(DWIDTH)) reg_s1 (
			.clk	(clk),
			.rst	(rst),
			.we 	(1'b1),
			.in_i	(sum_s1),
			.out_o	(sum_s1_reg)
		);
		
		//Stage 2: subtract op1_i from the registered sum
		
		logic [DWIDTH-1:0] diff_s2;
		logic [DWIDTH-1:0] diff_s2_reg;
		
		alu #(.DWIDTH(DWIDTH)) alu_sub (
			.sel_i (SUB),
			.op1_i (sum_s1_reg),
			.op2_i (op1_i),
			.res_o (diff_s2),
			.zero_o(),
			.neg_o ()
		);
		
		reg_rst #(.DWIDTH(DWIDTH)) reg_s2 (
			.clk	(clk),
			.rst	(rst),
			.we 	(1'b1),
			.in_i	(diff_s2),
			.out_o	(dif_s2_reg)
		);
		
		//Stage 3: Final output register
		reg_rst #(.DWIDTH(DWIDTH)) reg_s3 (
			.clk	(clk),
			.rst	(rst),
			.we 	(1'b1),
			.in_i	(diff_s2_reg),
			.out_o	(res_o)
		);

endmodule: three_stage_pipeline 

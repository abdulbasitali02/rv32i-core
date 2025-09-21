/*
 * Module: pd0
 *
 * Description: Top level module that will contain sub-module instantiations.
 * An instantiation of the assign_xor module is shown as an example. The other
 * modules must be instantiated similarly. Probes are defined, which will be used
 * to test This file also defines probes that will be used to test the design. Note
 * that the top level module should have only two inputs: clk and rest signals.
 *
 * Inputs:
 * 1) clk
 * 2) reset signal
 */
 
 
import constants_pkg::*;

module pd0 #(
    parameter int DWIDTH = 32)
 (
    input logic clk,
    input logic reset
    );

 // Probes that will be defined in probes.svh
 logic assign_xor_op1;
 logic assign_xor_op2;
 logic assign_xor_res;

 assign_xor assign_xor_0 (
     .op1_i (assign_xor_op1),
     .op2_i (assign_xor_op2),
     .res_o (assign_xor_res)
 );

 /*
  * Instantiate other submodules and
  * probes. To be filled by student...
  *
  */

	logic[1:0]			alu_sel;
	logic [DWIDTH-1:0]	alu_op1, alu_op2;
	logic [DWIDTH-1:0]	alu_res;
	logic				alu_zero, alu_neg;
	
	alu #(.DWIDTH(DWIDTH)) u_alu (
		.sel_i (alu_sel),
		.op1_i (alu_op1),
		.op2_i (alu_op2),
		.res_o (alu_res),
		.zero_o (alu_zero),
		.neg_o (alu_neg)
	);
	
	// Register with Sync Reset and W.E (Write enable)
	
	logic				reg_we;
	logic [DWIDTH-1:0]	reg_in, reg_out;
	
	reg_rst #(.DWIDTH(DWIDTH)) u_reg_rst (
			.clk	(clk),
			.rst	(reset),
			.we 	(reg_we),
			.in_i	(reg_in),
			.out_o	(reg_out)
		);
		
	// Three Stage Pipeline
	
	logic [DWIDTH-1:0] pipe_op1, pipe_op2, pipe_res;
	
	three_stage_pipeline #(.DWIDTH(DWIDTH)) u_three_stage (
		.clk	(clk),
		.rst 	(reset),
		.op1_i	(pipe_op1),
		.op2_i	(pipe_op2),
		.res_o	(pipe_res)
	);
	
	 
	`include "probes.svh"


endmodule: pd0

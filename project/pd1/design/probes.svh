// ----  Probes  ----
`define PROBE_ADDR      imem_addr      
`define PROBE_DATA_IN   imem_wdata
`define PROBE_DATA_OUT  imem_rdata
`define PROBE_READ_EN   imem_read_en
`define PROBE_WRITE_EN  imem_write_en

`define PROBE_F_PC      if_pc
`define PROBE_F_INSN    if_instr
// ----  Probes  ----

//Probes from pd0:
`define PROBE_ASSIGN_XOR_OP1 assign_xor_op1
`define PROBE_ASSIGN_XOR_OP2 assign_xor_op2
`define PROBE_ASSIGN_XOR_RES assign_xor_res

// Define other probes as required....
 `define PROBE_ALU_OP1 alu_op1
 `define PROBE_ALU_OP2 alu_op2
 `define PROBE_ALU_RES alu_res
 `define PROBE_ALU_SEL alu_sel

 `define PROBE_REG_IN  reg_in
 `define PROBE_REG_OUT reg_out

 `define PROBE_TSP_OP1 pipe_op1
 `define PROBE_TSP_OP2 pipe_op2
 `define PROBE_TSP_RES pipe_res
// ----  Top module  ----
`define TOP_MODULE  pd1
// ----  Top module  ----

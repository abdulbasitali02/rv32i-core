// ----  Probes  ----
`define PROBE_F_PC  if_pc 
`define PROBE_F_INSN if_insn

`define PROBE_D_PC id_pc
`define PROBE_D_OPCODE id_opcode
`define PROBE_D_RD id_rd
`define PROBE_D_FUNCT3 id_funct3
`define PROBE_D_RS1 id_rs1
`define PROBE_D_RS2 id_rs2
`define PROBE_D_FUNCT7 id_funct7
`define PROBE_D_IMM id_imm
`define PROBE_D_SHAMT id_shamt

`define PROBE_R_WRITE_ENABLE rf_wren
`define PROBE_R_WRITE_DESTINATION id_rd
`define PROBE_R_WRITE_DATA wb_data
`define PROBE_R_READ_RS1 rf_rs1_addr
`define PROBE_R_READ_RS2 rf_rs2_addr
`define PROBE_R_READ_RS1_DATA rf_rs1_data
`define PROBE_R_READ_RS2_DATA rf_rs2_data

`define PROBE_E_PC       id_pc        
`define PROBE_E_ALU_RES   ex_alu_res    
`define PROBE_E_BR_TAKEN  ex_br_taken
// ----  Probes  ----

// ----  Top module  ----
`define TOP_MODULE  pd3
// ----  Top module  ----

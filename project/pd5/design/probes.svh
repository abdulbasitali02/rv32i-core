// ----  Probes  ----
`define PROBE_F_PC          if_pc
`define PROBE_F_INSN        if_insn

`define PROBE_D_PC          idex_pc
`define PROBE_D_OPCODE      id_opcode
`define PROBE_D_RD          id_rd
`define PROBE_D_FUNCT3      id_funct3
`define PROBE_D_RS1         id_rs1
`define PROBE_D_RS2         id_rs2
`define PROBE_D_FUNCT7      id_funct7
`define PROBE_D_IMM         id_imm
`define PROBE_D_SHAMT       id_shamt

`define PROBE_R_WRITE_ENABLE      id_regwren
`define PROBE_R_WRITE_DESTINATION id_rd
`define PROBE_R_WRITE_DATA        wb_data
`define PROBE_R_READ_RS1          rf_rs1_addr
`define PROBE_R_READ_RS2          rf_rs2_addr
`define PROBE_R_READ_RS1_DATA     rf_rs1_data
`define PROBE_R_READ_RS2_DATA     rf_rs2_data

`define PROBE_E_PC                id_pc
`define PROBE_E_ALU_RES           ex_alu_res
`define PROBE_E_BR_TAKEN          branch_taken_ex

`define PROBE_M_PC                exmem_pc
`define PROBE_M_ADDRESS           dmem_addr
`define PROBE_M_SIZE_ENCODED      exmem_funct3
`define PROBE_M_DATA              dmem_wdata

`define PROBE_W_PC                memwb_pc
`define PROBE_W_ENABLE            memwb_regwren
`define PROBE_W_DESTINATION       memwb_rd
`define PROBE_W_DATA              wb_data

// ----  Probes  ----

// ----  Top module  ----
`define TOP_MODULE  pd5 
// ----  Top module  ----

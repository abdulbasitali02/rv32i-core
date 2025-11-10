// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ top__DOT__clock;
        CData/*0:0*/ top__DOT__reset;
        CData/*0:0*/ top__DOT__genblk3__DOT__tick_check__DOT__res;
        CData/*6:0*/ top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__opcode;
        CData/*4:0*/ top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__rd;
        CData/*4:0*/ top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__rs1;
        CData/*4:0*/ top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__rs2;
        CData/*2:0*/ top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__funct3;
        CData/*6:0*/ top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__funct7;
        CData/*4:0*/ top__DOT__genblk3__DOT__genblk3__DOT__check_R__Vstatic__check_R_func__DOT__read_rs1;
        CData/*4:0*/ top__DOT__genblk3__DOT__genblk3__DOT__check_R__Vstatic__check_R_func__DOT__read_rs2;
        CData/*0:0*/ top__DOT__genblk3__DOT__genblk3__DOT__check_E__Vstatic__check_E_func__DOT__br_taken;
        CData/*1:0*/ top__DOT__genblk3__DOT__genblk3__DOT__check_M__Vstatic__check_M_func__DOT__size_encoded;
        CData/*0:0*/ top__DOT__genblk3__DOT__genblk3__DOT__check_W__Vstatic__check_W_func__DOT__enable;
        CData/*4:0*/ top__DOT__genblk3__DOT__genblk3__DOT__check_W__Vstatic__check_W_func__DOT__destination;
        CData/*0:0*/ top__DOT__dut__DOT__core__DOT__id_pcsel;
        CData/*0:0*/ top__DOT__dut__DOT__core__DOT__id_regwren;
        CData/*0:0*/ top__DOT__dut__DOT__core__DOT__id_memren;
        CData/*0:0*/ top__DOT__dut__DOT__core__DOT__id_memwren;
        CData/*1:0*/ top__DOT__dut__DOT__core__DOT__id_wbsel;
        CData/*3:0*/ top__DOT__dut__DOT__core__DOT__id_alusel;
        CData/*4:0*/ top__DOT__dut__DOT__core__DOT__rf_rs1_addr;
        CData/*4:0*/ top__DOT__dut__DOT__core__DOT__rf_rs2_addr;
        CData/*0:0*/ top__DOT__dut__DOT__core__DOT__ex_br_taken;
        CData/*3:0*/ top__DOT__dut__DOT__core__DOT__dmem_wstrb;
        CData/*0:0*/ top__DOT__dut__DOT__core__DOT__is_program;
        CData/*0:0*/ top__DOT__dut__DOT__core__DOT__u_mem__DOT__read_valid;
        CData/*0:0*/ top__DOT__dut__DOT__core__DOT__u_mem__DOT__read_en_prev;
        CData/*0:0*/ top__DOT__dut__DOT__core__DOT__u_mem__DOT__last_oob_read_valid;
        CData/*0:0*/ top__DOT__dut__DOT__core__DOT__u_fetch__DOT__pcsel_i;
        CData/*0:0*/ top__DOT__dut__DOT__core__DOT__u_dmem__DOT__read_valid;
        CData/*0:0*/ top__DOT__dut__DOT__core__DOT__u_dmem__DOT__write_valid;
        CData/*0:0*/ top__DOT__dut__DOT__core__DOT__u_dmem__DOT__read_en_prev;
        CData/*0:0*/ top__DOT__dut__DOT__core__DOT__u_dmem__DOT__last_oob_read_valid;
        CData/*0:0*/ __Vdpi_export_trigger;
        CData/*0:0*/ __Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__addr_in_range__11__Vfuncout;
        CData/*0:0*/ __Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__addr_in_range__12__Vfuncout;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__DOT__clock__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__DOT__reset__0;
        IData/*31:0*/ top__DOT__genblk3__DOT__tick;
        VlWide<128>/*4095:0*/ top__DOT__genblk3__DOT__tick_check__DOT__msg;
        IData/*31:0*/ top__DOT__genblk3__DOT__genblk3__DOT__check_F__Vstatic__check_F_func__DOT__pc;
        IData/*31:0*/ top__DOT__genblk3__DOT__genblk3__DOT__check_F__Vstatic__check_F_func__DOT__insn;
        VlWide<4>/*127:0*/ top__DOT__genblk3__DOT__genblk3__DOT__check_F__Vstatic__check_F_func__DOT__p;
        IData/*31:0*/ top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__pc;
        IData/*31:0*/ top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__imm;
        VlWide<4>/*127:0*/ top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__p;
        IData/*31:0*/ top__DOT__genblk3__DOT__genblk3__DOT__check_R__Vstatic__check_R_func__DOT__read_rs1_data;
        IData/*31:0*/ top__DOT__genblk3__DOT__genblk3__DOT__check_R__Vstatic__check_R_func__DOT__read_rs2_data;
        VlWide<4>/*127:0*/ top__DOT__genblk3__DOT__genblk3__DOT__check_R__Vstatic__check_R_func__DOT__p;
        IData/*31:0*/ top__DOT__genblk3__DOT__genblk3__DOT__check_E__Vstatic__check_E_func__DOT__pc;
        IData/*31:0*/ top__DOT__genblk3__DOT__genblk3__DOT__check_E__Vstatic__check_E_func__DOT__alu_res;
        VlWide<4>/*127:0*/ top__DOT__genblk3__DOT__genblk3__DOT__check_E__Vstatic__check_E_func__DOT__p;
        IData/*31:0*/ top__DOT__genblk3__DOT__genblk3__DOT__check_M__Vstatic__check_M_func__DOT__pc;
        IData/*31:0*/ top__DOT__genblk3__DOT__genblk3__DOT__check_M__Vstatic__check_M_func__DOT__address;
        IData/*31:0*/ top__DOT__genblk3__DOT__genblk3__DOT__check_M__Vstatic__check_M_func__DOT__data;
        VlWide<4>/*127:0*/ top__DOT__genblk3__DOT__genblk3__DOT__check_M__Vstatic__check_M_func__DOT__p;
        IData/*31:0*/ top__DOT__genblk3__DOT__genblk3__DOT__check_W__Vstatic__check_W_func__DOT__pc;
        IData/*31:0*/ top__DOT__genblk3__DOT__genblk3__DOT__check_W__Vstatic__check_W_func__DOT__data;
        VlWide<4>/*127:0*/ top__DOT__genblk3__DOT__genblk3__DOT__check_W__Vstatic__check_W_func__DOT__p;
        IData/*31:0*/ top__DOT__clkg__DOT__counter;
        IData/*31:0*/ top__DOT__dut__DOT__core__DOT__imem_data;
        IData/*31:0*/ top__DOT__dut__DOT__core__DOT__id_imm;
    };
    struct {
        IData/*31:0*/ top__DOT__dut__DOT__core__DOT__rf_rs1_data;
        IData/*31:0*/ top__DOT__dut__DOT__core__DOT__rf_rs2_data;
        IData/*31:0*/ top__DOT__dut__DOT__core__DOT__wb_data;
        IData/*31:0*/ top__DOT__dut__DOT__core__DOT__ex_alu_res;
        IData/*31:0*/ top__DOT__dut__DOT__core__DOT__dmem_wdata;
        IData/*31:0*/ top__DOT__dut__DOT__core__DOT__mem_stage_data;
        IData/*31:0*/ top__DOT__dut__DOT__core__DOT__store_data_masked;
        IData/*31:0*/ top__DOT__dut__DOT__core__DOT__u_mem__DOT__last_oob_read_addr;
        IData/*31:0*/ top__DOT__dut__DOT__core__DOT__u_mem__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__index;
        IData/*31:0*/ top__DOT__dut__DOT__core__DOT__u_fetch__DOT__pc_q;
        IData/*31:0*/ top__DOT__dut__DOT__core__DOT__u_fetch__DOT__insn_q;
        IData/*31:0*/ top__DOT__dut__DOT__core__DOT__u_decode__DOT__pc_q;
        IData/*31:0*/ top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q;
        IData/*31:0*/ top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_b;
        IData/*31:0*/ top__DOT__dut__DOT__core__DOT__u_dmem__DOT__addr_aligned;
        IData/*31:0*/ top__DOT__dut__DOT__core__DOT__u_dmem__DOT__last_oob_read_addr;
        IData/*31:0*/ top__DOT__dut__DOT__core__DOT__u_dmem__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__index;
        IData/*31:0*/ __Vfunc_top__DOT__dut__DOT__core__DOT__u_mem__DOT__addr_in_range__8__offset;
        IData/*31:0*/ __Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__addr_in_range__11__addr;
        IData/*31:0*/ __Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__addr_in_range__11__offset;
        IData/*31:0*/ __Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__addr_in_range__12__addr;
        IData/*31:0*/ __Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__addr_in_range__12__offset;
        IData/*31:0*/ __Vdly__top__DOT__dut__DOT__core__DOT__u_decode__DOT__pc_q;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<VlWide<24>/*767:0*/, 1371> top__DOT__genblk3__DOT__pattern;
        VlUnpacked<IData/*31:0*/, 154> top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory;
        VlUnpacked<CData/*7:0*/, 1048576> top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers;
        VlUnpacked<IData/*31:0*/, 154> top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory;
        VlUnpacked<CData/*7:0*/, 1048576> top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 2> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 2> __VnbaTriggered;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

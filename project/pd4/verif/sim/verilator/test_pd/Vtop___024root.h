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
    CData/*0:0*/ top__DOT__clock;
    CData/*0:0*/ top__DOT__reset;
    CData/*0:0*/ top__DOT__dut__DOT__core__DOT__id_regwren;
    CData/*0:0*/ top__DOT__dut__DOT__core__DOT__id_memren;
    CData/*0:0*/ top__DOT__dut__DOT__core__DOT__id_memwren;
    CData/*1:0*/ top__DOT__dut__DOT__core__DOT__id_wbsel;
    CData/*3:0*/ top__DOT__dut__DOT__core__DOT__dmem_wstrb;
    CData/*0:0*/ top__DOT__dut__DOT__core__DOT__is_program;
    CData/*7:0*/ top__DOT__dut__DOT__core__DOT__u_mem__DOT____Vlvbound_h820cd4c7__0;
    CData/*7:0*/ top__DOT__dut__DOT__core__DOT__u_mem__DOT____Vlvbound_hfd71850b__0;
    CData/*0:0*/ top__DOT__dut__DOT__core__DOT__u_fetch__DOT__pcsel_i;
    CData/*7:0*/ top__DOT__dut__DOT__core__DOT__u_dmem__DOT____Vlvbound_h820cd4c7__0;
    CData/*7:0*/ top__DOT__dut__DOT__core__DOT__u_dmem__DOT____Vlvbound_hfd71850b__0;
    CData/*7:0*/ top__DOT__dut__DOT__core__DOT__u_dmem__DOT____Vlvbound_h55a0027d__0;
    CData/*0:0*/ __Vdpi_export_trigger;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__top__DOT__clock__0;
    IData/*31:0*/ top__DOT__clkg__DOT__counter;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__imem_data;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__dmem_rdata;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__dmem_wdata;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__shifted_load_data;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__u_fetch__DOT__pc_q;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__u_fetch__DOT__insn_q;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__u_decode__DOT__pc_q;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__u_decode__DOT__u_igen__DOT__imm_val;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__u_alu__DOT__result;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 154> top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory;
    VlUnpacked<CData/*7:0*/, 616> top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory;
    VlUnpacked<IData/*31:0*/, 32> top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers;
    VlUnpacked<IData/*31:0*/, 154> top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory;
    VlUnpacked<CData/*7:0*/, 616> top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 2> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 2> __VnbaTriggered;

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

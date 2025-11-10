// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop___024root____Vdpiexp_top__DOT__clkg__DOT__toggleClock_TOP(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiexp_top__DOT__clkg__DOT__toggleClock_TOP\n"); );
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.top__DOT__clock = (1U & (~ (IData)(vlSymsp->TOP.top__DOT__clock)));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[1U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VactTriggered
                                      [1U]) | (IData)((IData)(vlSelfRef.__Vdpi_export_trigger)));
    vlSelfRef.__Vdpi_export_trigger = 0U;
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((IData)(vlSelfRef.top__DOT__clock) 
                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__clock__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__clock__0 
        = vlSelfRef.top__DOT__clock;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((2U > n));
    return (0U);
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ top__DOT__dut__DOT__core__DOT__id_pcsel;
    top__DOT__dut__DOT__core__DOT__id_pcsel = 0;
    CData/*0:0*/ top__DOT__dut__DOT__core__DOT__id_rs1sel;
    top__DOT__dut__DOT__core__DOT__id_rs1sel = 0;
    CData/*0:0*/ top__DOT__dut__DOT__core__DOT__id_rs2sel;
    top__DOT__dut__DOT__core__DOT__id_rs2sel = 0;
    CData/*3:0*/ top__DOT__dut__DOT__core__DOT__id_alusel;
    top__DOT__dut__DOT__core__DOT__id_alusel = 0;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__rf_rs1_data;
    top__DOT__dut__DOT__core__DOT__rf_rs1_data = 0;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__rf_rs2_data;
    top__DOT__dut__DOT__core__DOT__rf_rs2_data = 0;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__store_data_masked;
    top__DOT__dut__DOT__core__DOT__store_data_masked = 0;
    CData/*4:0*/ top__DOT__dut__DOT__core__DOT__register_file_0__DOT__rs1_i;
    top__DOT__dut__DOT__core__DOT__register_file_0__DOT__rs1_i = 0;
    CData/*4:0*/ top__DOT__dut__DOT__core__DOT__register_file_0__DOT__rs2_i;
    top__DOT__dut__DOT__core__DOT__register_file_0__DOT__rs2_i = 0;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_a;
    top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_a = 0;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_b;
    top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_b = 0;
    CData/*0:0*/ top__DOT__dut__DOT__core__DOT__u_alu__DOT__breq;
    top__DOT__dut__DOT__core__DOT__u_alu__DOT__breq = 0;
    CData/*0:0*/ top__DOT__dut__DOT__core__DOT__u_alu__DOT__brlt;
    top__DOT__dut__DOT__core__DOT__u_alu__DOT__brlt = 0;
    CData/*0:0*/ __Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__addr_in_range__4__Vfuncout;
    __Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__addr_in_range__4__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__addr_in_range__4__addr;
    __Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__addr_in_range__4__addr = 0;
    IData/*31:0*/ __Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__addr_in_range__4__offset;
    __Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__addr_in_range__4__offset = 0;
    IData/*31:0*/ __Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__to_offset__5__Vfuncout;
    __Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__to_offset__5__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__to_offset__5__addr;
    __Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__to_offset__5__addr = 0;
    IData/*31:0*/ __VdfgRegularize_hebeb780c_0_1;
    __VdfgRegularize_hebeb780c_0_1 = 0;
    IData/*31:0*/ __VdfgRegularize_hebeb780c_0_2;
    __VdfgRegularize_hebeb780c_0_2 = 0;
    IData/*31:0*/ __VdfgRegularize_hebeb780c_0_3;
    __VdfgRegularize_hebeb780c_0_3 = 0;
    IData/*31:0*/ __VdfgRegularize_hebeb780c_0_4;
    __VdfgRegularize_hebeb780c_0_4 = 0;
    IData/*31:0*/ __VdfgRegularize_hebeb780c_0_5;
    __VdfgRegularize_hebeb780c_0_5 = 0;
    IData/*31:0*/ __Vdly__top__DOT__clkg__DOT__counter;
    __Vdly__top__DOT__clkg__DOT__counter = 0;
    CData/*0:0*/ __Vdly__top__DOT__dut__DOT__core__DOT__is_program;
    __Vdly__top__DOT__dut__DOT__core__DOT__is_program = 0;
    IData/*31:0*/ __Vdly__top__DOT__dut__DOT__core__DOT__u_decode__DOT__pc_q;
    __Vdly__top__DOT__dut__DOT__core__DOT__u_decode__DOT__pc_q = 0;
    CData/*0:0*/ __VdlySet__top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers__v0;
    __VdlySet__top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers__v33;
    __VdlySet__top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers__v33 = 0;
    IData/*31:0*/ __VdlyVal__top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers__v34;
    __VdlyVal__top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers__v34 = 0;
    CData/*4:0*/ __VdlyDim0__top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers__v34;
    __VdlyDim0__top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers__v34 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers__v34;
    __VdlySet__top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers__v34 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory__v0;
    __VdlyVal__top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory__v0 = 0;
    IData/*19:0*/ __VdlyDim0__top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory__v0;
    __VdlyDim0__top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory__v0;
    __VdlySet__top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory__v0 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory__v1;
    __VdlyVal__top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory__v1 = 0;
    IData/*19:0*/ __VdlyDim0__top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory__v1;
    __VdlyDim0__top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory__v1 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory__v1;
    __VdlySet__top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory__v1 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory__v2;
    __VdlyVal__top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory__v2 = 0;
    IData/*19:0*/ __VdlyDim0__top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory__v2;
    __VdlyDim0__top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory__v2 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory__v2;
    __VdlySet__top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory__v2 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory__v3;
    __VdlyVal__top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory__v3 = 0;
    IData/*19:0*/ __VdlyDim0__top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory__v3;
    __VdlyDim0__top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory__v3 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory__v3;
    __VdlySet__top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory__v3 = 0;
    // Body
    __Vdly__top__DOT__clkg__DOT__counter = vlSelfRef.top__DOT__clkg__DOT__counter;
    __Vdly__top__DOT__dut__DOT__core__DOT__is_program 
        = vlSelfRef.top__DOT__dut__DOT__core__DOT__is_program;
    __Vdly__top__DOT__dut__DOT__core__DOT__u_decode__DOT__pc_q 
        = vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__pc_q;
    __VdlySet__top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory__v0 = 0U;
    __VdlySet__top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory__v1 = 0U;
    __VdlySet__top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory__v2 = 0U;
    __VdlySet__top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory__v3 = 0U;
    __VdlySet__top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers__v0 = 0U;
    __VdlySet__top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers__v33 = 0U;
    __VdlySet__top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers__v34 = 0U;
    if (vlSelfRef.top__DOT__reset) {
        __Vdly__top__DOT__dut__DOT__core__DOT__is_program = 0U;
    } else {
        if (VL_UNLIKELY(((0x00000073U == vlSelfRef.top__DOT__dut__DOT__core__DOT__u_fetch__DOT__insn_q)))) {
            VL_FINISH_MT("/Users/aali02/Documents/GitHub/rv32i-core/project/pd4/design/code/pd4.sv", 289, "");
        }
        if (VL_UNLIKELY((((IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__is_program) 
                          & (0x01100000U == vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers
                             [2U]))))) {
            VL_FINISH_MT("/Users/aali02/Documents/GitHub/rv32i-core/project/pd4/design/code/pd4.sv", 295, "");
        }
        if ((0x00008067U == vlSelfRef.top__DOT__dut__DOT__core__DOT__u_fetch__DOT__insn_q)) {
            __Vdly__top__DOT__dut__DOT__core__DOT__is_program = 1U;
        }
    }
    __Vdly__top__DOT__dut__DOT__core__DOT__u_decode__DOT__pc_q 
        = ((IData)(vlSelfRef.top__DOT__reset) ? 0x01000000U
            : vlSelfRef.top__DOT__dut__DOT__core__DOT__u_fetch__DOT__pc_q);
    if (VL_UNLIKELY((((IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__id_memwren) 
                      & ([&]() {
                            __Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__addr_in_range__4__addr 
                                = vlSelfRef.top__DOT__dut__DOT__core__DOT__u_alu__DOT__result;
                            __Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__addr_in_range__4__offset = 0;
                            __Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__addr_in_range__4__Vfuncout = 0U;
                            if ((0x01000000U <= __Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__addr_in_range__4__addr)) {
                                __Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__addr_in_range__4__offset 
                                    = (__Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__addr_in_range__4__addr 
                                       - (IData)(0x01000000U));
                                if ((0x000ffffcU >= __Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__addr_in_range__4__offset)) {
                                    __Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__addr_in_range__4__Vfuncout = 1U;
                                }
                            }
                        }(), (IData)(__Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__addr_in_range__4__Vfuncout)))))) {
        __Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__to_offset__5__addr 
            = vlSelfRef.top__DOT__dut__DOT__core__DOT__u_alu__DOT__result;
        __Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__to_offset__5__Vfuncout 
            = ((0x01000000U <= __Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__to_offset__5__addr)
                ? (__Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__to_offset__5__addr 
                   - (IData)(0x01000000U)) : 0U);
        VL_WRITEF_NX("MEMORY: Wrote 0x%08x to Address 0x%08x\n",0,
                     32,vlSelfRef.top__DOT__dut__DOT__core__DOT__dmem_wdata,
                     32,vlSelfRef.top__DOT__dut__DOT__core__DOT__u_alu__DOT__result);
        vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__unnamedblk7__DOT__address 
            = __Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__to_offset__5__Vfuncout;
        if ((1U & (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__dmem_wstrb))) {
            __VdlyVal__top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory__v0 
                = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__dmem_wdata);
            __VdlyDim0__top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory__v0 
                = (0x000fffffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__unnamedblk7__DOT__address);
            __VdlySet__top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__dmem_wstrb))) {
            __VdlyVal__top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory__v1 
                = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__dmem_wdata 
                                  >> 8U));
            __VdlyDim0__top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory__v1 
                = (0x000fffffU & ((IData)(1U) + vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__unnamedblk7__DOT__address));
            __VdlySet__top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory__v1 = 1U;
        }
        if ((4U & (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__dmem_wstrb))) {
            __VdlyVal__top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory__v2 
                = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__dmem_wdata 
                                  >> 0x10U));
            __VdlyDim0__top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory__v2 
                = (0x000fffffU & ((IData)(2U) + vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__unnamedblk7__DOT__address));
            __VdlySet__top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory__v2 = 1U;
        }
        if ((8U & (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__dmem_wstrb))) {
            __VdlyVal__top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory__v3 
                = (vlSelfRef.top__DOT__dut__DOT__core__DOT__dmem_wdata 
                   >> 0x18U);
            __VdlyDim0__top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory__v3 
                = (0x000fffffU & ((IData)(3U) + vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__unnamedblk7__DOT__address));
            __VdlySet__top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory__v3 = 1U;
        }
    } else if (VL_UNLIKELY((vlSelfRef.top__DOT__dut__DOT__core__DOT__id_memwren))) {
        VL_WRITEF_NX("[%0t] %%Warning: memory.sv:118: %Ntop.dut.core.u_dmem: MEMORY: Write to OOOB Address 0x%08x ignored\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                     32,vlSelfRef.top__DOT__dut__DOT__core__DOT__u_alu__DOT__result);
    }
    if (vlSelfRef.top__DOT__reset) {
        __VdlySet__top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers__v0 = 1U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__u_fetch__DOT__pc_q = 0x01000000U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q = 0x00000013U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__u_fetch__DOT__insn_q = 0x00000013U;
    } else {
        __VdlySet__top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers__v33 = 1U;
        if (((IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__id_regwren) 
             & (0U != (0x0000001fU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                                      >> 7U))))) {
            __VdlyVal__top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers__v34 
                = ((2U & (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__id_wbsel))
                    ? ((1U & (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__id_wbsel))
                        ? vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__u_igen__DOT__imm_val
                        : ((IData)(4U) + vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__pc_q))
                    : ((1U & (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__id_wbsel))
                        ? ((IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__id_memren)
                            ? ((0x00004000U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                                ? ((0x00002000U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                                    ? vlSelfRef.top__DOT__dut__DOT__core__DOT__shifted_load_data
                                    : ((0x00001000U 
                                        & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                                        ? (0x0000ffffU 
                                           & vlSelfRef.top__DOT__dut__DOT__core__DOT__shifted_load_data)
                                        : (0x000000ffU 
                                           & vlSelfRef.top__DOT__dut__DOT__core__DOT__shifted_load_data)))
                                : ((0x00002000U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                                    ? vlSelfRef.top__DOT__dut__DOT__core__DOT__shifted_load_data
                                    : ((0x00001000U 
                                        & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                                        ? (((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.top__DOT__dut__DOT__core__DOT__shifted_load_data 
                                                           >> 0x0000000fU)))) 
                                            << 0x00000010U) 
                                           | (0x0000ffffU 
                                              & vlSelfRef.top__DOT__dut__DOT__core__DOT__shifted_load_data))
                                        : (((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.top__DOT__dut__DOT__core__DOT__shifted_load_data 
                                                           >> 7U)))) 
                                            << 8U) 
                                           | (0x000000ffU 
                                              & vlSelfRef.top__DOT__dut__DOT__core__DOT__shifted_load_data)))))
                            : vlSelfRef.top__DOT__dut__DOT__core__DOT__dmem_rdata)
                        : vlSelfRef.top__DOT__dut__DOT__core__DOT__u_alu__DOT__result));
            __VdlyDim0__top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers__v34 
                = (0x0000001fU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                                  >> 7U));
            __VdlySet__top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers__v34 = 1U;
        }
        vlSelfRef.top__DOT__dut__DOT__core__DOT__u_fetch__DOT__pc_q 
            = ((IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__u_fetch__DOT__pcsel_i)
                ? vlSelfRef.top__DOT__dut__DOT__core__DOT__u_alu__DOT__result
                : ((IData)(4U) + vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__pc_q));
        vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
            = vlSelfRef.top__DOT__dut__DOT__core__DOT__u_fetch__DOT__insn_q;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__u_fetch__DOT__insn_q 
            = vlSelfRef.top__DOT__dut__DOT__core__DOT__imem_data;
    }
    vlSelfRef.top__DOT__dut__DOT__core__DOT__is_program 
        = __Vdly__top__DOT__dut__DOT__core__DOT__is_program;
    if (__VdlySet__top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory__v0) {
        vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[__VdlyDim0__top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory__v0] 
            = __VdlyVal__top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory__v0;
    }
    if (__VdlySet__top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory__v1) {
        vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[__VdlyDim0__top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory__v1] 
            = __VdlyVal__top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory__v1;
    }
    if (__VdlySet__top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory__v2) {
        vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[__VdlyDim0__top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory__v2] 
            = __VdlyVal__top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory__v2;
    }
    if (__VdlySet__top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory__v3) {
        vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[__VdlyDim0__top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory__v3] 
            = __VdlyVal__top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory__v3;
    }
    if (__VdlySet__top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers__v0) {
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers[0U] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers[1U] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers[2U] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers[3U] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers[4U] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers[5U] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers[6U] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers[7U] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers[8U] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers[9U] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers[0x0aU] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers[0x0bU] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers[0x0cU] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers[0x0dU] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers[0x0eU] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers[0x0fU] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers[0x10U] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers[0x11U] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers[0x12U] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers[0x13U] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers[0x14U] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers[0x15U] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers[0x16U] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers[0x17U] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers[0x18U] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers[0x19U] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers[0x1aU] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers[0x1bU] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers[0x1cU] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers[0x1dU] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers[0x1eU] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers[0x1fU] = 0U;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers[2U] = 0x01100000U;
    }
    if (__VdlySet__top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers__v33) {
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers[0U] = 0U;
    }
    if (__VdlySet__top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers__v34) {
        vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers[__VdlyDim0__top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers__v34] 
            = __VdlyVal__top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers__v34;
    }
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__pc_q 
        = __Vdly__top__DOT__dut__DOT__core__DOT__u_decode__DOT__pc_q;
    if ((1U & (~ VL_ONEHOT_I((((0x67U == (0x0000007fU 
                                          & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) 
                               << 2U) | (((0x6fU == 
                                           (0x0000007fU 
                                            & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) 
                                          << 1U) | 
                                         (0x63U == 
                                          (0x0000007fU 
                                           & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)))))))) {
        if ((0U != (((0x67U == (0x0000007fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) 
                     << 2U) | (((0x6fU == (0x0000007fU 
                                           & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) 
                                << 1U) | (0x63U == 
                                          (0x0000007fU 
                                           & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: alu.sv:118: Assertion failed in %Ntop.dut.core.u_alu: unique case, but multiple matches found for '7'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),7,
                             (0x0000007fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q));
                VL_STOP_MT("/Users/aali02/Documents/GitHub/rv32i-core/project/pd4/design/code/alu.sv", 118, "");
            }
        }
    }
    vlSelfRef.top__DOT__dut__DOT__core__DOT__id_regwren = 0U;
    vlSelfRef.top__DOT__dut__DOT__core__DOT__id_wbsel = 0U;
    top__DOT__dut__DOT__core__DOT__id_pcsel = 0U;
    vlSelfRef.top__DOT__dut__DOT__core__DOT__id_memwren = 0U;
    vlSelfRef.top__DOT__dut__DOT__core__DOT__id_memren = 0U;
    if ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                  >> 6U)))) {
        if ((0x00000020U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
            if ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                          >> 4U)))) {
                if ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                            if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                                vlSelfRef.top__DOT__dut__DOT__core__DOT__id_memwren = 1U;
                            }
                        }
                    }
                }
            }
        }
        if ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                      >> 5U)))) {
            if ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                          >> 4U)))) {
                if ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                            if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                                vlSelfRef.top__DOT__dut__DOT__core__DOT__id_memren = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    top__DOT__dut__DOT__core__DOT__id_alusel = 0U;
    if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
        if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
            __VdfgRegularize_hebeb780c_0_3 = (0xfffff000U 
                                              & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q);
            __VdfgRegularize_hebeb780c_0_1 = (((- (IData)(
                                                          (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                                                           >> 0x0000001fU))) 
                                               << 0x0000000cU) 
                                              | (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                                                 >> 0x00000014U));
        } else {
            __VdfgRegularize_hebeb780c_0_3 = 0U;
            __VdfgRegularize_hebeb780c_0_1 = 0U;
        }
    } else {
        __VdfgRegularize_hebeb780c_0_3 = 0U;
        __VdfgRegularize_hebeb780c_0_1 = 0U;
    }
    top__DOT__dut__DOT__core__DOT__id_rs1sel = 0U;
    top__DOT__dut__DOT__core__DOT__id_rs2sel = 0U;
    vlSelfRef.top__DOT__dut__DOT__core__DOT__imem_data = 0U;
    if ((0x00000040U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
        if ((0x00000020U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
            if ((0x00000010U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                if ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                            if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                                vlSelfRef.top__DOT__dut__DOT__core__DOT__id_regwren 
                                    = (0U != (0x0000001fU 
                                              & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                                                 >> 7U)));
                                vlSelfRef.top__DOT__dut__DOT__core__DOT__id_wbsel = 0U;
                                top__DOT__dut__DOT__core__DOT__id_alusel = 0U;
                                top__DOT__dut__DOT__core__DOT__id_rs1sel = 1U;
                            }
                        }
                    }
                }
            } else {
                if ((8U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                    if ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                        if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                            if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                                vlSelfRef.top__DOT__dut__DOT__core__DOT__id_regwren = 1U;
                                vlSelfRef.top__DOT__dut__DOT__core__DOT__id_wbsel = 2U;
                                top__DOT__dut__DOT__core__DOT__id_alusel = 0U;
                            }
                        }
                    }
                } else if ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                    if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                        if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                            vlSelfRef.top__DOT__dut__DOT__core__DOT__id_regwren = 1U;
                            vlSelfRef.top__DOT__dut__DOT__core__DOT__id_wbsel = 2U;
                            top__DOT__dut__DOT__core__DOT__id_alusel = 0U;
                        }
                    }
                } else if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                    if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                        top__DOT__dut__DOT__core__DOT__id_alusel = 0U;
                    }
                }
                if ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                              >> 3U)))) {
                    if ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                        if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                            if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                                top__DOT__dut__DOT__core__DOT__id_rs1sel = 1U;
                            }
                        }
                    } else if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                        if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                            top__DOT__dut__DOT__core__DOT__id_rs1sel = 1U;
                        }
                    }
                }
            }
            if ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                          >> 4U)))) {
                if ((8U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                    if ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                        if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                            if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                                top__DOT__dut__DOT__core__DOT__id_pcsel = 1U;
                            }
                        }
                    }
                } else if ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                    if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                        if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                            top__DOT__dut__DOT__core__DOT__id_pcsel = 1U;
                        }
                    }
                } else if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                    if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                        top__DOT__dut__DOT__core__DOT__id_pcsel = 1U;
                    }
                }
                if ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                            if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                                top__DOT__dut__DOT__core__DOT__id_rs2sel = 1U;
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x00000020U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
        if ((0x00000010U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
            if ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                          >> 3U)))) {
                if ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                    if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                        if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                            vlSelfRef.top__DOT__dut__DOT__core__DOT__id_regwren = 1U;
                            vlSelfRef.top__DOT__dut__DOT__core__DOT__id_wbsel = 3U;
                            top__DOT__dut__DOT__core__DOT__id_alusel = 0x0aU;
                        }
                    }
                } else if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                    if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                        vlSelfRef.top__DOT__dut__DOT__core__DOT__id_regwren = 1U;
                        vlSelfRef.top__DOT__dut__DOT__core__DOT__id_wbsel = 0U;
                        top__DOT__dut__DOT__core__DOT__id_alusel 
                            = ((0x00004000U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                                ? ((0x00002000U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                                    ? ((0x00001000U 
                                        & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                                        ? 9U : 8U) : 
                                   ((0x00001000U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                                     ? ((0x20U == (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                                                   >> 0x00000019U))
                                         ? 7U : 6U)
                                     : 5U)) : ((0x00002000U 
                                                & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                                                ? (
                                                   (0x00001000U 
                                                    & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                                                    ? 4U
                                                    : 3U)
                                                : (
                                                   (0x00001000U 
                                                    & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                                                    ? 2U
                                                    : 
                                                   ((0x20U 
                                                     == 
                                                     (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                                                      >> 0x00000019U))
                                                     ? 1U
                                                     : 0U))));
                    }
                }
                if ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                              >> 2U)))) {
                    if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                        if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                            top__DOT__dut__DOT__core__DOT__id_rs1sel = 1U;
                            top__DOT__dut__DOT__core__DOT__id_rs2sel = 1U;
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                             >> 3U)))) {
            if ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                          >> 2U)))) {
                if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                    if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                        top__DOT__dut__DOT__core__DOT__id_alusel = 0U;
                        top__DOT__dut__DOT__core__DOT__id_rs1sel = 1U;
                        top__DOT__dut__DOT__core__DOT__id_rs2sel = 1U;
                    }
                }
            }
        }
    } else if ((0x00000010U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
        if ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                      >> 3U)))) {
            if ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                    if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                        vlSelfRef.top__DOT__dut__DOT__core__DOT__id_regwren = 1U;
                        vlSelfRef.top__DOT__dut__DOT__core__DOT__id_wbsel = 0U;
                        top__DOT__dut__DOT__core__DOT__id_alusel = 0U;
                    }
                }
            } else if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                    vlSelfRef.top__DOT__dut__DOT__core__DOT__id_regwren = 1U;
                    vlSelfRef.top__DOT__dut__DOT__core__DOT__id_wbsel = 0U;
                    top__DOT__dut__DOT__core__DOT__id_alusel 
                        = ((0x00004000U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                            ? ((0x00002000U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                                ? ((0x00001000U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                                    ? 9U : 8U) : ((0x00001000U 
                                                   & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                                                   ? 
                                                  ((0x20U 
                                                    == 
                                                    (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                                                     >> 0x00000019U))
                                                    ? 7U
                                                    : 6U)
                                                   : 5U))
                            : ((0x00002000U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                                ? ((0x00001000U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                                    ? 4U : 3U) : ((0x00001000U 
                                                   & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                                                   ? 2U
                                                   : 0U)));
                }
            }
            if ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                          >> 2U)))) {
                if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                    if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                        top__DOT__dut__DOT__core__DOT__id_rs1sel = 1U;
                    }
                }
            }
        }
    } else if ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                         >> 3U)))) {
        if ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                      >> 2U)))) {
            if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                    vlSelfRef.top__DOT__dut__DOT__core__DOT__id_regwren = 1U;
                    vlSelfRef.top__DOT__dut__DOT__core__DOT__id_wbsel = 1U;
                    top__DOT__dut__DOT__core__DOT__id_alusel = 0U;
                    top__DOT__dut__DOT__core__DOT__id_rs1sel = 1U;
                }
            }
        }
    }
    if (VL_LIKELY((([&]() {
                        vlSelfRef.__Vfunc_top__DOT__dut__DOT__core__DOT__u_mem__DOT__addr_in_range__0__addr 
                            = vlSelfRef.top__DOT__dut__DOT__core__DOT__u_fetch__DOT__pc_q;
                        const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
                        vlSelf->__Vfunc_top__DOT__dut__DOT__core__DOT__u_mem__DOT__addr_in_range__0__offset = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13140230334090939476ull);
                        vlSelfRef.__Vfunc_top__DOT__dut__DOT__core__DOT__u_mem__DOT__addr_in_range__0__Vfuncout = 0U;
                        if ((0x01000000U <= vlSelfRef.__Vfunc_top__DOT__dut__DOT__core__DOT__u_mem__DOT__addr_in_range__0__addr)) {
                            vlSelfRef.__Vfunc_top__DOT__dut__DOT__core__DOT__u_mem__DOT__addr_in_range__0__offset 
                                = (vlSelfRef.__Vfunc_top__DOT__dut__DOT__core__DOT__u_mem__DOT__addr_in_range__0__addr 
                                   - (IData)(0x01000000U));
                            if ((0x000ffffcU >= vlSelfRef.__Vfunc_top__DOT__dut__DOT__core__DOT__u_mem__DOT__addr_in_range__0__offset)) {
                                vlSelfRef.__Vfunc_top__DOT__dut__DOT__core__DOT__u_mem__DOT__addr_in_range__0__Vfuncout = 1U;
                            }
                        }
                    }(), (IData)(vlSelfRef.__Vfunc_top__DOT__dut__DOT__core__DOT__u_mem__DOT__addr_in_range__0__Vfuncout))))) {
        vlSelfRef.__Vfunc_top__DOT__dut__DOT__core__DOT__u_mem__DOT__to_offset__1__addr 
            = vlSelfRef.top__DOT__dut__DOT__core__DOT__u_fetch__DOT__pc_q;
        vlSelfRef.__Vfunc_top__DOT__dut__DOT__core__DOT__u_mem__DOT__to_offset__1__Vfuncout 
            = ((0x01000000U <= vlSelfRef.__Vfunc_top__DOT__dut__DOT__core__DOT__u_mem__DOT__to_offset__1__addr)
                ? (vlSelfRef.__Vfunc_top__DOT__dut__DOT__core__DOT__u_mem__DOT__to_offset__1__addr 
                   - (IData)(0x01000000U)) : 0U);
        vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__unnamedblk5__DOT__address 
            = vlSelfRef.__Vfunc_top__DOT__dut__DOT__core__DOT__u_mem__DOT__to_offset__1__Vfuncout;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__imem_data 
            = ((0xffffff00U & vlSelfRef.top__DOT__dut__DOT__core__DOT__imem_data) 
               | vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory
               [(0x000fffffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__unnamedblk5__DOT__address)]);
        vlSelfRef.top__DOT__dut__DOT__core__DOT__imem_data 
            = ((0xffff00ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__imem_data) 
               | (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory
                  [(0x000fffffU & ((IData)(1U) + vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__unnamedblk5__DOT__address))] 
                  << 8U));
        vlSelfRef.top__DOT__dut__DOT__core__DOT__imem_data 
            = ((0xff00ffffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__imem_data) 
               | (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory
                  [(0x000fffffU & ((IData)(2U) + vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__unnamedblk5__DOT__address))] 
                  << 0x00000010U));
        vlSelfRef.top__DOT__dut__DOT__core__DOT__imem_data 
            = ((0x00ffffffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__imem_data) 
               | (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory
                  [(0x000fffffU & ((IData)(3U) + vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__unnamedblk5__DOT__address))] 
                  << 0x00000018U));
    } else {
        VL_WRITEF_NX("[%0t] %%Warning: memory.sv:98: %Ntop.dut.core.u_mem: MEMORY: Read from OOOB Address 0x%08x returns 0\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                     32,vlSelfRef.top__DOT__dut__DOT__core__DOT__u_fetch__DOT__pc_q);
    }
    top__DOT__dut__DOT__core__DOT__register_file_0__DOT__rs1_i 
        = ((IData)(top__DOT__dut__DOT__core__DOT__id_rs1sel)
            ? (0x0000001fU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                              >> 0x0000000fU)) : 0U);
    top__DOT__dut__DOT__core__DOT__register_file_0__DOT__rs2_i 
        = ((IData)(top__DOT__dut__DOT__core__DOT__id_rs2sel)
            ? (0x0000001fU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                              >> 0x00000014U)) : 0U);
    __VdfgRegularize_hebeb780c_0_2 = ((8U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                                       ? 0U : ((4U 
                                                & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                                                ? 0U
                                                : __VdfgRegularize_hebeb780c_0_1));
    __Vdly__top__DOT__clkg__DOT__counter = ((IData)(1U) 
                                            + vlSelfRef.top__DOT__clkg__DOT__counter);
    vlSelfRef.top__DOT__reset = VL_GTS_III(32, 5U, vlSelfRef.top__DOT__clkg__DOT__counter);
    if (VL_UNLIKELY(((0x0000c350U == vlSelfRef.top__DOT__clkg__DOT__counter)))) {
        VL_FINISH_MT("/Users/aali02/Documents/GitHub/rv32i-core/project/pd4/verif/tests/clockgen.sv", 26, "");
    }
    top__DOT__dut__DOT__core__DOT__rf_rs1_data = ((0U 
                                                   == (IData)(top__DOT__dut__DOT__core__DOT__register_file_0__DOT__rs1_i))
                                                   ? 0U
                                                   : 
                                                  vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers
                                                  [top__DOT__dut__DOT__core__DOT__register_file_0__DOT__rs1_i]);
    top__DOT__dut__DOT__core__DOT__rf_rs2_data = ((0U 
                                                   == (IData)(top__DOT__dut__DOT__core__DOT__register_file_0__DOT__rs2_i))
                                                   ? 0U
                                                   : 
                                                  vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers
                                                  [top__DOT__dut__DOT__core__DOT__register_file_0__DOT__rs2_i]);
    vlSelfRef.top__DOT__clkg__DOT__counter = __Vdly__top__DOT__clkg__DOT__counter;
    top__DOT__dut__DOT__core__DOT__store_data_masked 
        = top__DOT__dut__DOT__core__DOT__rf_rs2_data;
    if ((0x00000040U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
        if ((0x00000020U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
            if ((0x00000010U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__u_igen__DOT__imm_val 
                    = __VdfgRegularize_hebeb780c_0_2;
                top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_a 
                    = top__DOT__dut__DOT__core__DOT__rf_rs1_data;
            } else if ((8U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                if ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                    if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                        if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                            vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__u_igen__DOT__imm_val 
                                = ((((0x00000ffeU & 
                                      ((- (IData)((vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                                                   >> 0x0000001fU))) 
                                       << 1U)) | (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                                                  >> 0x0000001fU)) 
                                    << 0x00000014U) 
                                   | ((((0x000001feU 
                                         & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                                            >> 0x0000000bU)) 
                                        | (1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                                                 >> 0x00000014U))) 
                                       << 0x0000000bU) 
                                      | (0x000007feU 
                                         & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                                            >> 0x00000014U))));
                            top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_a 
                                = vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__pc_q;
                        } else {
                            vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__u_igen__DOT__imm_val = 0U;
                            top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_a 
                                = top__DOT__dut__DOT__core__DOT__rf_rs1_data;
                        }
                    } else {
                        vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__u_igen__DOT__imm_val = 0U;
                        top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_a 
                            = top__DOT__dut__DOT__core__DOT__rf_rs1_data;
                    }
                } else {
                    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__u_igen__DOT__imm_val = 0U;
                    top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_a 
                        = top__DOT__dut__DOT__core__DOT__rf_rs1_data;
                }
            } else if ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__u_igen__DOT__imm_val 
                    = __VdfgRegularize_hebeb780c_0_1;
                top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_a 
                    = top__DOT__dut__DOT__core__DOT__rf_rs1_data;
            } else if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__u_igen__DOT__imm_val 
                        = (((- (IData)((vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                                        >> 0x0000001fU))) 
                            << 0x0000000dU) | ((((2U 
                                                  & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                                                     >> 0x0000001eU)) 
                                                 | (1U 
                                                    & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                                                       >> 7U))) 
                                                << 0x0000000bU) 
                                               | ((0x000007e0U 
                                                   & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                                                      >> 0x00000014U)) 
                                                  | (0x0000001eU 
                                                     & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                                                        >> 7U)))));
                    top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_a 
                        = vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__pc_q;
                } else {
                    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__u_igen__DOT__imm_val = 0U;
                    top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_a 
                        = top__DOT__dut__DOT__core__DOT__rf_rs1_data;
                }
            } else {
                vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__u_igen__DOT__imm_val = 0U;
                top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_a 
                    = top__DOT__dut__DOT__core__DOT__rf_rs1_data;
            }
        } else {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__u_igen__DOT__imm_val = 0U;
            top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_a 
                = top__DOT__dut__DOT__core__DOT__rf_rs1_data;
        }
    } else if ((0x00000020U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
        if ((0x00000010U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
            if ((8U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__u_igen__DOT__imm_val = 0U;
                top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_a 
                    = top__DOT__dut__DOT__core__DOT__rf_rs1_data;
            } else if ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__u_igen__DOT__imm_val 
                    = __VdfgRegularize_hebeb780c_0_3;
                top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_a 
                    = ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                        ? ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                            ? 0U : top__DOT__dut__DOT__core__DOT__rf_rs1_data)
                        : top__DOT__dut__DOT__core__DOT__rf_rs1_data);
            } else {
                vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__u_igen__DOT__imm_val = 0U;
                top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_a 
                    = top__DOT__dut__DOT__core__DOT__rf_rs1_data;
            }
        } else {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__u_igen__DOT__imm_val 
                = ((8U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                    ? 0U : ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                             ? 0U : ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                                      ? ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                                          ? (((- (IData)(
                                                         (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                                                          >> 0x0000001fU))) 
                                              << 0x0000000cU) 
                                             | ((0x00000fe0U 
                                                 & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                                                    >> 0x00000014U)) 
                                                | (0x0000001fU 
                                                   & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                                                      >> 7U))))
                                          : 0U) : 0U)));
            top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_a 
                = top__DOT__dut__DOT__core__DOT__rf_rs1_data;
        }
    } else if ((0x00000010U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
        if ((8U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__u_igen__DOT__imm_val = 0U;
            top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_a 
                = top__DOT__dut__DOT__core__DOT__rf_rs1_data;
        } else if ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__u_igen__DOT__imm_val 
                = __VdfgRegularize_hebeb780c_0_3;
            top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_a 
                = ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                    ? ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                        ? vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__pc_q
                        : top__DOT__dut__DOT__core__DOT__rf_rs1_data)
                    : top__DOT__dut__DOT__core__DOT__rf_rs1_data);
        } else {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__u_igen__DOT__imm_val 
                = __VdfgRegularize_hebeb780c_0_1;
            top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_a 
                = top__DOT__dut__DOT__core__DOT__rf_rs1_data;
        }
    } else {
        vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__u_igen__DOT__imm_val 
            = __VdfgRegularize_hebeb780c_0_2;
        top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_a 
            = top__DOT__dut__DOT__core__DOT__rf_rs1_data;
    }
    if (vlSelfRef.top__DOT__dut__DOT__core__DOT__id_memwren) {
        top__DOT__dut__DOT__core__DOT__store_data_masked 
            = ((0U == (7U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                             >> 0x0000000cU))) ? (0x000000ffU 
                                                  & top__DOT__dut__DOT__core__DOT__rf_rs2_data)
                : ((1U == (7U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                                 >> 0x0000000cU))) ? 
                   (0x0000ffffU & top__DOT__dut__DOT__core__DOT__rf_rs2_data)
                    : top__DOT__dut__DOT__core__DOT__rf_rs2_data));
        if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((1U 
                                                 == 
                                                 (7U 
                                                  & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                                                     >> 0x0000000cU))) 
                                                << 1U) 
                                               | (0U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                                                      >> 0x0000000cU)))))))))) {
            if ((0U != (((1U == (7U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                                       >> 0x0000000cU))) 
                         << 1U) | (0U == (7U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                                                >> 0x0000000cU)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: pd4.sv:198: Assertion failed in %Ntop.dut.core: unique case, but multiple matches found for '3'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 3,(7U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                                          >> 0x0000000cU)));
                    VL_STOP_MT("/Users/aali02/Documents/GitHub/rv32i-core/project/pd4/design/code/pd4.sv", 198, "");
                }
            }
        }
    }
    top__DOT__dut__DOT__core__DOT__u_alu__DOT__breq = 0U;
    top__DOT__dut__DOT__core__DOT__u_alu__DOT__brlt = 0U;
    if ((0x63U == (0x0000007fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q))) {
        top__DOT__dut__DOT__core__DOT__u_alu__DOT__breq 
            = (top__DOT__dut__DOT__core__DOT__rf_rs1_data 
               == top__DOT__dut__DOT__core__DOT__rf_rs2_data);
        top__DOT__dut__DOT__core__DOT__u_alu__DOT__brlt 
            = (((6U == (7U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                              >> 0x0000000cU))) || 
                (7U == (7U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                              >> 0x0000000cU)))) ? 
               (top__DOT__dut__DOT__core__DOT__rf_rs1_data 
                < top__DOT__dut__DOT__core__DOT__rf_rs2_data)
                : VL_LTS_III(32, top__DOT__dut__DOT__core__DOT__rf_rs1_data, top__DOT__dut__DOT__core__DOT__rf_rs2_data));
        if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((7U 
                                                 == 
                                                 (7U 
                                                  & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                                                     >> 0x0000000cU))) 
                                                << 1U) 
                                               | (6U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                                                      >> 0x0000000cU)))))))))) {
            if ((0U != (((7U == (7U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                                       >> 0x0000000cU))) 
                         << 1U) | (6U == (7U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                                                >> 0x0000000cU)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: branch_control.sv:45: Assertion failed in %Ntop.dut.core.u_alu.u_branch_control: unique case, but multiple matches found for '3'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 3,(7U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                                          >> 0x0000000cU)));
                    VL_STOP_MT("/Users/aali02/Documents/GitHub/rv32i-core/project/pd4/design/code/branch_control.sv", 45, "");
                }
            }
        }
    }
    top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_b 
        = ((0x00000040U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
            ? ((0x00000020U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                ? ((0x00000010U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                    ? top__DOT__dut__DOT__core__DOT__rf_rs2_data
                    : ((8U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                        ? ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                            ? ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                                ? ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                                    ? vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__u_igen__DOT__imm_val
                                    : top__DOT__dut__DOT__core__DOT__rf_rs2_data)
                                : top__DOT__dut__DOT__core__DOT__rf_rs2_data)
                            : top__DOT__dut__DOT__core__DOT__rf_rs2_data)
                        : ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                            ? ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                                ? ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                                    ? vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__u_igen__DOT__imm_val
                                    : top__DOT__dut__DOT__core__DOT__rf_rs2_data)
                                : top__DOT__dut__DOT__core__DOT__rf_rs2_data)
                            : ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                                ? ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                                    ? vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__u_igen__DOT__imm_val
                                    : top__DOT__dut__DOT__core__DOT__rf_rs2_data)
                                : top__DOT__dut__DOT__core__DOT__rf_rs2_data))))
                : top__DOT__dut__DOT__core__DOT__rf_rs2_data)
            : ((0x00000020U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                ? ((0x00000010U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                    ? ((8U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                        ? top__DOT__dut__DOT__core__DOT__rf_rs2_data
                        : ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                            ? ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                                ? ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                                    ? vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__u_igen__DOT__imm_val
                                    : top__DOT__dut__DOT__core__DOT__rf_rs2_data)
                                : top__DOT__dut__DOT__core__DOT__rf_rs2_data)
                            : top__DOT__dut__DOT__core__DOT__rf_rs2_data))
                    : ((8U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                        ? top__DOT__dut__DOT__core__DOT__rf_rs2_data
                        : ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                            ? top__DOT__dut__DOT__core__DOT__rf_rs2_data
                            : ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                                ? ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                                    ? vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__u_igen__DOT__imm_val
                                    : top__DOT__dut__DOT__core__DOT__rf_rs2_data)
                                : top__DOT__dut__DOT__core__DOT__rf_rs2_data))))
                : ((0x00000010U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                    ? ((8U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                        ? top__DOT__dut__DOT__core__DOT__rf_rs2_data
                        : ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                            ? ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                                ? ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                                    ? vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__u_igen__DOT__imm_val
                                    : top__DOT__dut__DOT__core__DOT__rf_rs2_data)
                                : top__DOT__dut__DOT__core__DOT__rf_rs2_data)
                            : ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                                ? ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                                    ? vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__u_igen__DOT__imm_val
                                    : top__DOT__dut__DOT__core__DOT__rf_rs2_data)
                                : top__DOT__dut__DOT__core__DOT__rf_rs2_data)))
                    : ((8U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                        ? top__DOT__dut__DOT__core__DOT__rf_rs2_data
                        : ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                            ? top__DOT__dut__DOT__core__DOT__rf_rs2_data
                            : ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                                ? ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                                    ? vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__u_igen__DOT__imm_val
                                    : top__DOT__dut__DOT__core__DOT__rf_rs2_data)
                                : top__DOT__dut__DOT__core__DOT__rf_rs2_data))))));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_fetch__DOT__pcsel_i 
        = (((0x63U == (0x0000007fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q))
             ? ((0x00004000U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                 ? ((0x00001000U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                     ? (~ (IData)(top__DOT__dut__DOT__core__DOT__u_alu__DOT__brlt))
                     : (IData)(top__DOT__dut__DOT__core__DOT__u_alu__DOT__brlt))
                 : ((~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                        >> 0x0000000dU)) & ((0x00001000U 
                                             & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                                             ? (~ (IData)(top__DOT__dut__DOT__core__DOT__u_alu__DOT__breq))
                                             : (IData)(top__DOT__dut__DOT__core__DOT__u_alu__DOT__breq))))
             : ((0x6fU == (0x0000007fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) 
                | (0x67U == (0x0000007fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)))) 
           & (IData)(top__DOT__dut__DOT__core__DOT__id_pcsel));
    __VdfgRegularize_hebeb780c_0_4 = (top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_a 
                                      + top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_b);
    __VdfgRegularize_hebeb780c_0_5 = ((8U & (IData)(top__DOT__dut__DOT__core__DOT__id_alusel))
                                       ? ((4U & (IData)(top__DOT__dut__DOT__core__DOT__id_alusel))
                                           ? __VdfgRegularize_hebeb780c_0_4
                                           : ((2U & (IData)(top__DOT__dut__DOT__core__DOT__id_alusel))
                                               ? ((1U 
                                                   & (IData)(top__DOT__dut__DOT__core__DOT__id_alusel))
                                                   ? __VdfgRegularize_hebeb780c_0_4
                                                   : top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_b)
                                               : ((1U 
                                                   & (IData)(top__DOT__dut__DOT__core__DOT__id_alusel))
                                                   ? 
                                                  (top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_a 
                                                   & top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_b)
                                                   : 
                                                  (top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_a 
                                                   | top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_b))))
                                       : ((4U & (IData)(top__DOT__dut__DOT__core__DOT__id_alusel))
                                           ? ((2U & (IData)(top__DOT__dut__DOT__core__DOT__id_alusel))
                                               ? ((1U 
                                                   & (IData)(top__DOT__dut__DOT__core__DOT__id_alusel))
                                                   ? 
                                                  VL_SHIFTRS_III(32,32,5, top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_a, 
                                                                 (0x0000001fU 
                                                                  & top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_b))
                                                   : 
                                                  (top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_a 
                                                   >> 
                                                   (0x0000001fU 
                                                    & top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_b)))
                                               : ((1U 
                                                   & (IData)(top__DOT__dut__DOT__core__DOT__id_alusel))
                                                   ? 
                                                  (top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_a 
                                                   ^ top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_b)
                                                   : 
                                                  ((top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_a 
                                                    < top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_b)
                                                    ? 1U
                                                    : 0U)))
                                           : ((2U & (IData)(top__DOT__dut__DOT__core__DOT__id_alusel))
                                               ? ((1U 
                                                   & (IData)(top__DOT__dut__DOT__core__DOT__id_alusel))
                                                   ? 
                                                  (VL_LTS_III(32, top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_a, top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_b)
                                                    ? 1U
                                                    : 0U)
                                                   : 
                                                  (top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_a 
                                                   << 
                                                   (0x0000001fU 
                                                    & top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_b)))
                                               : ((1U 
                                                   & (IData)(top__DOT__dut__DOT__core__DOT__id_alusel))
                                                   ? 
                                                  (top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_a 
                                                   - top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_b)
                                                   : __VdfgRegularize_hebeb780c_0_4))));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_alu__DOT__result 
        = ((0x67U == (0x0000007fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q))
            ? (0xfffffffeU & __VdfgRegularize_hebeb780c_0_5)
            : __VdfgRegularize_hebeb780c_0_5);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__dmem_wdata 
        = (top__DOT__dut__DOT__core__DOT__store_data_masked 
           << (0x00000018U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_alu__DOT__result 
                              << 3U)));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__dmem_wstrb = 0U;
    if (vlSelfRef.top__DOT__dut__DOT__core__DOT__id_memwren) {
        vlSelfRef.top__DOT__dut__DOT__core__DOT__dmem_wstrb 
            = (0x0000000fU & ((0U == (7U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                                            >> 0x0000000cU)))
                               ? ((IData)(1U) << (3U 
                                                  & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_alu__DOT__result))
                               : ((1U == (7U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                                                >> 0x0000000cU)))
                                   ? ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_alu__DOT__result)
                                       ? 0x0cU : 3U)
                                   : ((2U == (7U & 
                                              (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                                               >> 0x0000000cU)))
                                       ? 0x0fU : 0U))));
        if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((2U 
                                                 == 
                                                 (7U 
                                                  & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                                                     >> 0x0000000cU))) 
                                                << 2U) 
                                               | (((1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                                                        >> 0x0000000cU))) 
                                                   << 1U) 
                                                  | (0U 
                                                     == 
                                                     (7U 
                                                      & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                                                         >> 0x0000000cU))))))))))) {
            if ((0U != (((2U == (7U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                                       >> 0x0000000cU))) 
                         << 2U) | (((1U == (7U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                                                  >> 0x0000000cU))) 
                                    << 1U) | (0U == 
                                              (7U & 
                                               (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                                                >> 0x0000000cU))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: pd4.sv:212: Assertion failed in %Ntop.dut.core: unique case, but multiple matches found for '3'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 3,(7U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                                          >> 0x0000000cU)));
                    VL_STOP_MT("/Users/aali02/Documents/GitHub/rv32i-core/project/pd4/design/code/pd4.sv", 212, "");
                }
            }
        }
    }
    vlSelfRef.top__DOT__dut__DOT__core__DOT__dmem_rdata = 0U;
    if (((IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__id_memren) 
         & ([&]() {
                    vlSelfRef.__Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__addr_in_range__2__addr 
                        = vlSelfRef.top__DOT__dut__DOT__core__DOT__u_alu__DOT__result;
                    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
                    vlSelf->__Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__addr_in_range__2__offset = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10639356725516175368ull);
                    vlSelfRef.__Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__addr_in_range__2__Vfuncout = 0U;
                    if ((0x01000000U <= vlSelfRef.__Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__addr_in_range__2__addr)) {
                        vlSelfRef.__Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__addr_in_range__2__offset 
                            = (vlSelfRef.__Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__addr_in_range__2__addr 
                               - (IData)(0x01000000U));
                        if ((0x000ffffcU >= vlSelfRef.__Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__addr_in_range__2__offset)) {
                            vlSelfRef.__Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__addr_in_range__2__Vfuncout = 1U;
                        }
                    }
                }(), (IData)(vlSelfRef.__Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__addr_in_range__2__Vfuncout)))) {
        vlSelfRef.__Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__to_offset__3__addr 
            = vlSelfRef.top__DOT__dut__DOT__core__DOT__u_alu__DOT__result;
        vlSelfRef.__Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__to_offset__3__Vfuncout 
            = ((0x01000000U <= vlSelfRef.__Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__to_offset__3__addr)
                ? (vlSelfRef.__Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__to_offset__3__addr 
                   - (IData)(0x01000000U)) : 0U);
        vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__unnamedblk5__DOT__address 
            = vlSelfRef.__Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__to_offset__3__Vfuncout;
        vlSelfRef.top__DOT__dut__DOT__core__DOT__dmem_rdata 
            = ((0xffffff00U & vlSelfRef.top__DOT__dut__DOT__core__DOT__dmem_rdata) 
               | vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory
               [(0x000fffffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__unnamedblk5__DOT__address)]);
        vlSelfRef.top__DOT__dut__DOT__core__DOT__dmem_rdata 
            = ((0xffff00ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__dmem_rdata) 
               | (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory
                  [(0x000fffffU & ((IData)(1U) + vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__unnamedblk5__DOT__address))] 
                  << 8U));
        vlSelfRef.top__DOT__dut__DOT__core__DOT__dmem_rdata 
            = ((0xff00ffffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__dmem_rdata) 
               | (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory
                  [(0x000fffffU & ((IData)(2U) + vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__unnamedblk5__DOT__address))] 
                  << 0x00000010U));
        vlSelfRef.top__DOT__dut__DOT__core__DOT__dmem_rdata 
            = ((0x00ffffffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__dmem_rdata) 
               | (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory
                  [(0x000fffffU & ((IData)(3U) + vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__unnamedblk5__DOT__address))] 
                  << 0x00000018U));
    } else if (VL_UNLIKELY((vlSelfRef.top__DOT__dut__DOT__core__DOT__id_memren))) {
        VL_WRITEF_NX("[%0t] %%Warning: memory.sv:98: %Ntop.dut.core.u_dmem: MEMORY: Read from OOOB Address 0x%08x returns 0\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                     32,vlSelfRef.top__DOT__dut__DOT__core__DOT__u_alu__DOT__result);
    }
    vlSelfRef.top__DOT__dut__DOT__core__DOT__shifted_load_data 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__dmem_rdata 
           >> (0x00000018U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_alu__DOT__result 
                              << 3U)));
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 2> &out, const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((2U > n));
}

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    Vtop___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vtop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 2> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((2U > n));
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtop___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        Vtop___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/Users/aali02/Documents/GitHub/rv32i-core/project/pd4/verif/tests/test_pd.sv", 4, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/Users/aali02/Documents/GitHub/rv32i-core/project/pd4/verif/tests/test_pd.sv", 4, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vtop___024root___eval_phase__act(vlSelf));
    } while (Vtop___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG

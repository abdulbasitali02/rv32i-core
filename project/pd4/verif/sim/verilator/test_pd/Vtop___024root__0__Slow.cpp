// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__clock__0 
        = vlSelfRef.top__DOT__clock;
}

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__clkg__DOT__counter = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__u_mem__DOT__unnamedblk1__DOT__i;
    top__DOT__dut__DOT__core__DOT__u_mem__DOT__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__u_mem__DOT__unnamedblk2__DOT__i;
    top__DOT__dut__DOT__core__DOT__u_mem__DOT__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__u_dmem__DOT__unnamedblk1__DOT__i;
    top__DOT__dut__DOT__core__DOT__u_dmem__DOT__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__u_dmem__DOT__unnamedblk2__DOT__i;
    top__DOT__dut__DOT__core__DOT__u_dmem__DOT__unnamedblk2__DOT__i = 0;
    // Body
    vlSelfRef.top__DOT__clock = 0U;
    vlSelfRef.top__DOT__reset = 1U;
    top__DOT__dut__DOT__core__DOT__u_mem__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000268U, top__DOT__dut__DOT__core__DOT__u_mem__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT____Vlvbound_h820cd4c7__0 = 0U;
        if (VL_LIKELY(((0x0267U >= (0x000003ffU & top__DOT__dut__DOT__core__DOT__u_mem__DOT__unnamedblk1__DOT__i))))) {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[(0x000003ffU 
                                                                              & top__DOT__dut__DOT__core__DOT__u_mem__DOT__unnamedblk1__DOT__i)] 
                = vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT____Vlvbound_h820cd4c7__0;
        }
        top__DOT__dut__DOT__core__DOT__u_mem__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + top__DOT__dut__DOT__core__DOT__u_mem__DOT__unnamedblk1__DOT__i);
    }
    VL_READMEM_N(true, 32, 154, 0, "/Users/aali02/Documents/GitHub/rv32i-core/project/pd4/verif/data/test1.x"s
                 ,  &(vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory)
                 , 0, ~0ULL);
    top__DOT__dut__DOT__core__DOT__u_mem__DOT__unnamedblk2__DOT__i = 0U;
    while (VL_GTS_III(32, 0x0000009aU, top__DOT__dut__DOT__core__DOT__u_mem__DOT__unnamedblk2__DOT__i)) {
        vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT____Vlvbound_hfd71850b__0 
            = ((0x99U >= (0x000000ffU & top__DOT__dut__DOT__core__DOT__u_mem__DOT__unnamedblk2__DOT__i))
                ? (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                   [(0x000000ffU & top__DOT__dut__DOT__core__DOT__u_mem__DOT__unnamedblk2__DOT__i)])
                : 0U);
        if (VL_LIKELY(((0x0267U >= (0x000003ffU & VL_MULS_III(32, (IData)(4U), top__DOT__dut__DOT__core__DOT__u_mem__DOT__unnamedblk2__DOT__i)))))) {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[(0x000003ffU 
                                                                              & VL_MULS_III(32, (IData)(4U), top__DOT__dut__DOT__core__DOT__u_mem__DOT__unnamedblk2__DOT__i))] 
                = vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT____Vlvbound_hfd71850b__0;
        }
        vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT____Vlvbound_hfd71850b__0 
            = (0x000000ffU & (((0x99U >= (0x000000ffU 
                                          & top__DOT__dut__DOT__core__DOT__u_mem__DOT__unnamedblk2__DOT__i))
                                ? vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                               [(0x000000ffU & top__DOT__dut__DOT__core__DOT__u_mem__DOT__unnamedblk2__DOT__i)]
                                : 0U) >> 8U));
        if (VL_LIKELY(((0x0267U >= (0x000003ffU & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(4U), top__DOT__dut__DOT__core__DOT__u_mem__DOT__unnamedblk2__DOT__i))))))) {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[(0x000003ffU 
                                                                              & ((IData)(1U) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(4U), top__DOT__dut__DOT__core__DOT__u_mem__DOT__unnamedblk2__DOT__i)))] 
                = vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT____Vlvbound_hfd71850b__0;
        }
        vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT____Vlvbound_hfd71850b__0 
            = (0x000000ffU & (((0x99U >= (0x000000ffU 
                                          & top__DOT__dut__DOT__core__DOT__u_mem__DOT__unnamedblk2__DOT__i))
                                ? vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                               [(0x000000ffU & top__DOT__dut__DOT__core__DOT__u_mem__DOT__unnamedblk2__DOT__i)]
                                : 0U) >> 0x10U));
        if (VL_LIKELY(((0x0267U >= (0x000003ffU & ((IData)(2U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(4U), top__DOT__dut__DOT__core__DOT__u_mem__DOT__unnamedblk2__DOT__i))))))) {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[(0x000003ffU 
                                                                              & ((IData)(2U) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(4U), top__DOT__dut__DOT__core__DOT__u_mem__DOT__unnamedblk2__DOT__i)))] 
                = vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT____Vlvbound_hfd71850b__0;
        }
        vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT____Vlvbound_hfd71850b__0 
            = (((0x99U >= (0x000000ffU & top__DOT__dut__DOT__core__DOT__u_mem__DOT__unnamedblk2__DOT__i))
                 ? vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                [(0x000000ffU & top__DOT__dut__DOT__core__DOT__u_mem__DOT__unnamedblk2__DOT__i)]
                 : 0U) >> 0x18U);
        if (VL_LIKELY(((0x0267U >= (0x000003ffU & ((IData)(3U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(4U), top__DOT__dut__DOT__core__DOT__u_mem__DOT__unnamedblk2__DOT__i))))))) {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[(0x000003ffU 
                                                                              & ((IData)(3U) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(4U), top__DOT__dut__DOT__core__DOT__u_mem__DOT__unnamedblk2__DOT__i)))] 
                = vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT____Vlvbound_hfd71850b__0;
        }
        top__DOT__dut__DOT__core__DOT__u_mem__DOT__unnamedblk2__DOT__i 
            = ((IData)(1U) + top__DOT__dut__DOT__core__DOT__u_mem__DOT__unnamedblk2__DOT__i);
    }
    VL_WRITEF_NX("IMEMORY: Loaded 154 32-bit words from /Users/aali02/Documents/GitHub/rv32i-core/project/pd4/verif/data/test1.x\n",0);
    top__DOT__dut__DOT__core__DOT__u_dmem__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000268U, top__DOT__dut__DOT__core__DOT__u_dmem__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT____Vlvbound_h820cd4c7__0 = 0U;
        if (VL_LIKELY(((0x0267U >= (0x000003ffU & top__DOT__dut__DOT__core__DOT__u_dmem__DOT__unnamedblk1__DOT__i))))) {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[(0x000003ffU 
                                                                               & top__DOT__dut__DOT__core__DOT__u_dmem__DOT__unnamedblk1__DOT__i)] 
                = vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT____Vlvbound_h820cd4c7__0;
        }
        top__DOT__dut__DOT__core__DOT__u_dmem__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + top__DOT__dut__DOT__core__DOT__u_dmem__DOT__unnamedblk1__DOT__i);
    }
    VL_READMEM_N(true, 32, 154, 0, "/Users/aali02/Documents/GitHub/rv32i-core/project/pd4/verif/data/test1.x"s
                 ,  &(vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory)
                 , 0, ~0ULL);
    top__DOT__dut__DOT__core__DOT__u_dmem__DOT__unnamedblk2__DOT__i = 0U;
    while (VL_GTS_III(32, 0x0000009aU, top__DOT__dut__DOT__core__DOT__u_dmem__DOT__unnamedblk2__DOT__i)) {
        vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT____Vlvbound_hfd71850b__0 
            = ((0x99U >= (0x000000ffU & top__DOT__dut__DOT__core__DOT__u_dmem__DOT__unnamedblk2__DOT__i))
                ? (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                   [(0x000000ffU & top__DOT__dut__DOT__core__DOT__u_dmem__DOT__unnamedblk2__DOT__i)])
                : 0U);
        if (VL_LIKELY(((0x0267U >= (0x000003ffU & VL_MULS_III(32, (IData)(4U), top__DOT__dut__DOT__core__DOT__u_dmem__DOT__unnamedblk2__DOT__i)))))) {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[(0x000003ffU 
                                                                               & VL_MULS_III(32, (IData)(4U), top__DOT__dut__DOT__core__DOT__u_dmem__DOT__unnamedblk2__DOT__i))] 
                = vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT____Vlvbound_hfd71850b__0;
        }
        vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT____Vlvbound_hfd71850b__0 
            = (0x000000ffU & (((0x99U >= (0x000000ffU 
                                          & top__DOT__dut__DOT__core__DOT__u_dmem__DOT__unnamedblk2__DOT__i))
                                ? vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                               [(0x000000ffU & top__DOT__dut__DOT__core__DOT__u_dmem__DOT__unnamedblk2__DOT__i)]
                                : 0U) >> 8U));
        if (VL_LIKELY(((0x0267U >= (0x000003ffU & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(4U), top__DOT__dut__DOT__core__DOT__u_dmem__DOT__unnamedblk2__DOT__i))))))) {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[(0x000003ffU 
                                                                               & ((IData)(1U) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(4U), top__DOT__dut__DOT__core__DOT__u_dmem__DOT__unnamedblk2__DOT__i)))] 
                = vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT____Vlvbound_hfd71850b__0;
        }
        vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT____Vlvbound_hfd71850b__0 
            = (0x000000ffU & (((0x99U >= (0x000000ffU 
                                          & top__DOT__dut__DOT__core__DOT__u_dmem__DOT__unnamedblk2__DOT__i))
                                ? vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                               [(0x000000ffU & top__DOT__dut__DOT__core__DOT__u_dmem__DOT__unnamedblk2__DOT__i)]
                                : 0U) >> 0x10U));
        if (VL_LIKELY(((0x0267U >= (0x000003ffU & ((IData)(2U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(4U), top__DOT__dut__DOT__core__DOT__u_dmem__DOT__unnamedblk2__DOT__i))))))) {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[(0x000003ffU 
                                                                               & ((IData)(2U) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(4U), top__DOT__dut__DOT__core__DOT__u_dmem__DOT__unnamedblk2__DOT__i)))] 
                = vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT____Vlvbound_hfd71850b__0;
        }
        vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT____Vlvbound_hfd71850b__0 
            = (((0x99U >= (0x000000ffU & top__DOT__dut__DOT__core__DOT__u_dmem__DOT__unnamedblk2__DOT__i))
                 ? vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                [(0x000000ffU & top__DOT__dut__DOT__core__DOT__u_dmem__DOT__unnamedblk2__DOT__i)]
                 : 0U) >> 0x18U);
        if (VL_LIKELY(((0x0267U >= (0x000003ffU & ((IData)(3U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(4U), top__DOT__dut__DOT__core__DOT__u_dmem__DOT__unnamedblk2__DOT__i))))))) {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[(0x000003ffU 
                                                                               & ((IData)(3U) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(4U), top__DOT__dut__DOT__core__DOT__u_dmem__DOT__unnamedblk2__DOT__i)))] 
                = vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT____Vlvbound_hfd71850b__0;
        }
        top__DOT__dut__DOT__core__DOT__u_dmem__DOT__unnamedblk2__DOT__i 
            = ((IData)(1U) + top__DOT__dut__DOT__core__DOT__u_dmem__DOT__unnamedblk2__DOT__i);
    }
    VL_WRITEF_NX("IMEMORY: Loaded 154 32-bit words from /Users/aali02/Documents/GitHub/rv32i-core/project/pd4/verif/data/test1.x\n",0);
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/Users/aali02/Documents/GitHub/rv32i-core/project/pd4/verif/tests/test_pd.sv", 4, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vtop___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
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
    // Body
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
                            }
                        }
                    }
                }
            } else if ((8U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                if ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                    if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                        if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                            vlSelfRef.top__DOT__dut__DOT__core__DOT__id_regwren = 1U;
                            vlSelfRef.top__DOT__dut__DOT__core__DOT__id_wbsel = 2U;
                        }
                    }
                }
            } else if ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                    if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                        vlSelfRef.top__DOT__dut__DOT__core__DOT__id_regwren = 1U;
                        vlSelfRef.top__DOT__dut__DOT__core__DOT__id_wbsel = 2U;
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
                        }
                    }
                } else if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                    if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                        vlSelfRef.top__DOT__dut__DOT__core__DOT__id_regwren = 1U;
                        vlSelfRef.top__DOT__dut__DOT__core__DOT__id_wbsel = 0U;
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
                    }
                }
            } else if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                    vlSelfRef.top__DOT__dut__DOT__core__DOT__id_regwren = 1U;
                    vlSelfRef.top__DOT__dut__DOT__core__DOT__id_wbsel = 0U;
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
                }
            }
        }
    }
    if (VL_LIKELY((((0x01000000U <= vlSelfRef.top__DOT__dut__DOT__core__DOT__u_fetch__DOT__pc_q) 
                    & (0x01000268U > ((IData)(3U) + vlSelfRef.top__DOT__dut__DOT__core__DOT__u_fetch__DOT__pc_q)))))) {
        vlSelfRef.top__DOT__dut__DOT__core__DOT__imem_data 
            = ((0xffffff00U & vlSelfRef.top__DOT__dut__DOT__core__DOT__imem_data) 
               | ((0x0267U >= (0x000003ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_fetch__DOT__pc_q))
                   ? vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory
                  [(0x000003ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_fetch__DOT__pc_q)]
                   : 0U));
        vlSelfRef.top__DOT__dut__DOT__core__DOT__imem_data 
            = ((0xffff00ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__imem_data) 
               | (((0x0267U >= (0x000003ffU & ((IData)(1U) 
                                               + vlSelfRef.top__DOT__dut__DOT__core__DOT__u_fetch__DOT__pc_q)))
                    ? vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory
                   [(0x000003ffU & ((IData)(1U) + vlSelfRef.top__DOT__dut__DOT__core__DOT__u_fetch__DOT__pc_q))]
                    : 0U) << 8U));
        vlSelfRef.top__DOT__dut__DOT__core__DOT__imem_data 
            = ((0xff00ffffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__imem_data) 
               | (((0x0267U >= (0x000003ffU & ((IData)(2U) 
                                               + vlSelfRef.top__DOT__dut__DOT__core__DOT__u_fetch__DOT__pc_q)))
                    ? vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory
                   [(0x000003ffU & ((IData)(2U) + vlSelfRef.top__DOT__dut__DOT__core__DOT__u_fetch__DOT__pc_q))]
                    : 0U) << 0x00000010U));
        vlSelfRef.top__DOT__dut__DOT__core__DOT__imem_data 
            = ((0x00ffffffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__imem_data) 
               | (((0x0267U >= (0x000003ffU & ((IData)(3U) 
                                               + vlSelfRef.top__DOT__dut__DOT__core__DOT__u_fetch__DOT__pc_q)))
                    ? vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory
                   [(0x000003ffU & ((IData)(3U) + vlSelfRef.top__DOT__dut__DOT__core__DOT__u_fetch__DOT__pc_q))]
                    : 0U) << 0x00000018U));
    } else {
        vlSelfRef.top__DOT__dut__DOT__core__DOT__imem_data = 0xdeadbeefU;
        VL_WRITEF_NX("MEMORY READ ERROR: Address %x out of bounds%10#\n",0,
                     32,vlSelfRef.top__DOT__dut__DOT__core__DOT__u_fetch__DOT__pc_q,
                     32,(vlSelfRef.top__DOT__dut__DOT__core__DOT__u_fetch__DOT__pc_q 
                         - (IData)(0x01000000U)));
    }
    top__DOT__dut__DOT__core__DOT__id_pcsel = 0U;
    vlSelfRef.top__DOT__dut__DOT__core__DOT__id_memren = 0U;
    vlSelfRef.top__DOT__dut__DOT__core__DOT__id_memwren = 0U;
    if ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                  >> 6U)))) {
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
    if ((0x00000040U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
        if ((0x00000020U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
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
            }
            if ((0x00000010U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                if ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                            if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
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
                                top__DOT__dut__DOT__core__DOT__id_alusel = 0U;
                            }
                        }
                    }
                } else if ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                    if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                        if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
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
        }
    } else if ((0x00000020U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
        if ((0x00000010U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
            if ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                          >> 3U)))) {
                if ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                    if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                        if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                            top__DOT__dut__DOT__core__DOT__id_alusel = 0x0aU;
                        }
                    }
                } else if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                    if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
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
                        top__DOT__dut__DOT__core__DOT__id_alusel = 0U;
                    }
                }
            } else if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
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
                    top__DOT__dut__DOT__core__DOT__id_alusel = 0U;
                    top__DOT__dut__DOT__core__DOT__id_rs1sel = 1U;
                }
            }
        }
    }
    top__DOT__dut__DOT__core__DOT__register_file_0__DOT__rs1_i 
        = ((IData)(top__DOT__dut__DOT__core__DOT__id_rs1sel)
            ? (0x0000001fU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                              >> 0x0000000fU)) : 0U);
    if ((0x00000040U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
        if ((0x00000020U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
            if ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                          >> 4U)))) {
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
                if ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                              >> 2U)))) {
                    if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                        if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
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
                        top__DOT__dut__DOT__core__DOT__id_rs2sel = 1U;
                    }
                }
            }
        }
    }
    top__DOT__dut__DOT__core__DOT__register_file_0__DOT__rs2_i 
        = ((IData)(top__DOT__dut__DOT__core__DOT__id_rs2sel)
            ? (0x0000001fU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                              >> 0x00000014U)) : 0U);
    __VdfgRegularize_hebeb780c_0_2 = ((8U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                                       ? 0U : ((4U 
                                                & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                                                ? 0U
                                                : __VdfgRegularize_hebeb780c_0_1));
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
    if (vlSelfRef.top__DOT__dut__DOT__core__DOT__id_memren) {
        if (VL_LIKELY((((0x01000000U <= vlSelfRef.top__DOT__dut__DOT__core__DOT__u_alu__DOT__result) 
                        & (0x01000268U > ((IData)(3U) 
                                          + vlSelfRef.top__DOT__dut__DOT__core__DOT__u_alu__DOT__result)))))) {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__dmem_rdata 
                = ((0xffffff00U & vlSelfRef.top__DOT__dut__DOT__core__DOT__dmem_rdata) 
                   | ((0x0267U >= (0x000003ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_alu__DOT__result))
                       ? vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory
                      [(0x000003ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_alu__DOT__result)]
                       : 0U));
            vlSelfRef.top__DOT__dut__DOT__core__DOT__dmem_rdata 
                = ((0xffff00ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__dmem_rdata) 
                   | (((0x0267U >= (0x000003ffU & ((IData)(1U) 
                                                   + vlSelfRef.top__DOT__dut__DOT__core__DOT__u_alu__DOT__result)))
                        ? vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory
                       [(0x000003ffU & ((IData)(1U) 
                                        + vlSelfRef.top__DOT__dut__DOT__core__DOT__u_alu__DOT__result))]
                        : 0U) << 8U));
            vlSelfRef.top__DOT__dut__DOT__core__DOT__dmem_rdata 
                = ((0xff00ffffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__dmem_rdata) 
                   | (((0x0267U >= (0x000003ffU & ((IData)(2U) 
                                                   + vlSelfRef.top__DOT__dut__DOT__core__DOT__u_alu__DOT__result)))
                        ? vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory
                       [(0x000003ffU & ((IData)(2U) 
                                        + vlSelfRef.top__DOT__dut__DOT__core__DOT__u_alu__DOT__result))]
                        : 0U) << 0x00000010U));
            vlSelfRef.top__DOT__dut__DOT__core__DOT__dmem_rdata 
                = ((0x00ffffffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__dmem_rdata) 
                   | (((0x0267U >= (0x000003ffU & ((IData)(3U) 
                                                   + vlSelfRef.top__DOT__dut__DOT__core__DOT__u_alu__DOT__result)))
                        ? vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory
                       [(0x000003ffU & ((IData)(3U) 
                                        + vlSelfRef.top__DOT__dut__DOT__core__DOT__u_alu__DOT__result))]
                        : 0U) << 0x00000018U));
        } else {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__dmem_rdata = 0xdeadbeefU;
            VL_WRITEF_NX("MEMORY READ ERROR: Address %x out of bounds%10#\n",0,
                         32,vlSelfRef.top__DOT__dut__DOT__core__DOT__u_alu__DOT__result,
                         32,(vlSelfRef.top__DOT__dut__DOT__core__DOT__u_alu__DOT__result 
                             - (IData)(0x01000000U)));
        }
    }
    vlSelfRef.top__DOT__dut__DOT__core__DOT__shifted_load_data 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__dmem_rdata 
           >> (0x00000018U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_alu__DOT__result 
                              << 3U)));
}

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vtop___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge top.clock)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'act' trigger - DPI export trigger\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->top__DOT__clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5844775645289313205ull);
    vlSelf->top__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4457194187413456923ull);
    vlSelf->top__DOT__clkg__DOT__counter = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7673510899991897937ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__imem_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6075064972087634282ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__id_regwren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15484336708751457232ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__id_memren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3215994018135819107ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__id_memwren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12171576079766067514ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__id_wbsel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13038840566659765705ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__dmem_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14143931503358390295ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__dmem_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1128733566571743877ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__dmem_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10539682469297880922ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__shifted_load_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7699240881927773121ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__is_program = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3526790071870633143ull);
    for (int __Vi0 = 0; __Vi0 < 154; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14173891099000035922ull);
    }
    for (int __Vi0 = 0; __Vi0 < 616; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17514311573260117284ull);
    }
    vlSelf->top__DOT__dut__DOT__core__DOT__u_mem__DOT____Vlvbound_h820cd4c7__0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5329424483882014176ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__u_mem__DOT____Vlvbound_hfd71850b__0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18180131825900187035ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__u_fetch__DOT__pcsel_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16009109960342352603ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__u_fetch__DOT__pc_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16049845647286297623ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__u_fetch__DOT__insn_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11741627438673861473ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__u_decode__DOT__pc_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13452347487433674ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15349931852729943981ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__u_decode__DOT__u_igen__DOT__imm_val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3437244270571379964ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18289671846489948390ull);
    }
    vlSelf->top__DOT__dut__DOT__core__DOT__u_alu__DOT__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 935136138302980745ull);
    for (int __Vi0 = 0; __Vi0 < 154; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10372947827196193019ull);
    }
    for (int __Vi0 = 0; __Vi0 < 616; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2549241195112519339ull);
    }
    vlSelf->top__DOT__dut__DOT__core__DOT__u_dmem__DOT____Vlvbound_h820cd4c7__0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11664094820005898917ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__u_dmem__DOT____Vlvbound_hfd71850b__0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1060000395733055151ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__u_dmem__DOT____Vlvbound_h55a0027d__0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11914937701707415484ull);
    vlSelf->__Vdpi_export_trigger = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__clock__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14234138457933551086ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}

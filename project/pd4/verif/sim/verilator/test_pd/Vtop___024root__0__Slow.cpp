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
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__reset__0 
        = vlSelfRef.top__DOT__reset;
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
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__u_dmem__DOT__unnamedblk1__DOT__i;
    top__DOT__dut__DOT__core__DOT__u_dmem__DOT__unnamedblk1__DOT__i = 0;
    // Body
    vlSelfRef.top__DOT__clock = 0U;
    vlSelfRef.top__DOT__reset = 1U;
    top__DOT__dut__DOT__core__DOT__u_mem__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00100000U, top__DOT__dut__DOT__core__DOT__u_mem__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[(0x000fffffU 
                                                                          & top__DOT__dut__DOT__core__DOT__u_mem__DOT__unnamedblk1__DOT__i)] = 0U;
        top__DOT__dut__DOT__core__DOT__u_mem__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + top__DOT__dut__DOT__core__DOT__u_mem__DOT__unnamedblk1__DOT__i);
    }
    VL_READMEM_N(true, 32, 58, 0, "/Users/aali02/Documents/GitHub/rv32i-core/project/pd4/verif/data/test2.x"s
                 ,  &(vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory)
                 , 0, ~0ULL);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[1U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[2U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[3U] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[4U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [1U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[5U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [1U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[6U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [1U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[7U] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [1U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[8U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [2U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[9U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [2U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x0000000aU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [2U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x0000000bU] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [2U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x0000000cU] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [3U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x0000000dU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [3U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x0000000eU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [3U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x0000000fU] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [3U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000010U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [4U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000011U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [4U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000012U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [4U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000013U] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [4U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000014U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [5U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000015U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [5U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000016U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [5U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000017U] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [5U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000018U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [6U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000019U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [6U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x0000001aU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [6U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x0000001bU] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [6U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x0000001cU] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [7U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x0000001dU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [7U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x0000001eU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [7U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x0000001fU] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [7U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000020U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [8U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000021U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [8U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000022U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [8U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000023U] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [8U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000024U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [9U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000025U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [9U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000026U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [9U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000027U] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [9U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000028U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x0aU]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000029U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x0aU] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x0000002aU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x0aU] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x0000002bU] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x0aU] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x0000002cU] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x0bU]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x0000002dU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x0bU] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x0000002eU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x0bU] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x0000002fU] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x0bU] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000030U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x0cU]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000031U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x0cU] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000032U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x0cU] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000033U] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x0cU] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000034U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x0dU]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000035U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x0dU] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000036U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x0dU] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000037U] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x0dU] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000038U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x0eU]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000039U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x0eU] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x0000003aU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x0eU] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x0000003bU] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x0eU] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x0000003cU] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x0fU]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x0000003dU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x0fU] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x0000003eU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x0fU] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x0000003fU] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x0fU] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000040U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x10U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000041U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x10U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000042U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x10U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000043U] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x10U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000044U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x11U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000045U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x11U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000046U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x11U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000047U] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x11U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000048U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x12U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000049U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x12U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x0000004aU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x12U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x0000004bU] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x12U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x0000004cU] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x13U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x0000004dU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x13U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x0000004eU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x13U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x0000004fU] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x13U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000050U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x14U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000051U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x14U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000052U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x14U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000053U] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x14U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000054U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x15U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000055U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x15U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000056U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x15U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000057U] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x15U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000058U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x16U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000059U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x16U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x0000005aU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x16U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x0000005bU] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x16U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x0000005cU] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x17U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x0000005dU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x17U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x0000005eU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x17U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x0000005fU] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x17U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000060U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x18U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000061U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x18U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000062U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x18U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000063U] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x18U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000064U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x19U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000065U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x19U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000066U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x19U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000067U] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x19U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000068U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x1aU]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000069U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x1aU] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x0000006aU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x1aU] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x0000006bU] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x1aU] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x0000006cU] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x1bU]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x0000006dU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x1bU] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x0000006eU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x1bU] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x0000006fU] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x1bU] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000070U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x1cU]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000071U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x1cU] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000072U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x1cU] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000073U] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x1cU] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000074U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x1dU]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000075U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x1dU] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000076U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x1dU] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000077U] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x1dU] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000078U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x1eU]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000079U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x1eU] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x0000007aU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x1eU] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x0000007bU] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x1eU] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x0000007cU] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x1fU]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x0000007dU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x1fU] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x0000007eU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x1fU] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x0000007fU] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x1fU] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000080U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x20U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000081U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x20U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000082U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x20U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000083U] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x20U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000084U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x21U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000085U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x21U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000086U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x21U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000087U] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x21U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000088U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x22U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000089U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x22U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x0000008aU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x22U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x0000008bU] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x22U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x0000008cU] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x23U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x0000008dU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x23U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x0000008eU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x23U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x0000008fU] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x23U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000090U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x24U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000091U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x24U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000092U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x24U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000093U] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x24U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000094U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x25U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000095U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x25U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000096U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x25U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000097U] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x25U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000098U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x26U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x00000099U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x26U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x0000009aU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x26U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x0000009bU] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x26U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x0000009cU] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x27U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x0000009dU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x27U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x0000009eU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x27U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x0000009fU] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x27U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000a0U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x28U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000a1U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x28U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000a2U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x28U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000a3U] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x28U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000a4U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x29U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000a5U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x29U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000a6U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x29U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000a7U] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x29U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000a8U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x2aU]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000a9U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x2aU] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000aaU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x2aU] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000abU] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x2aU] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000acU] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x2bU]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000adU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x2bU] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000aeU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x2bU] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000afU] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x2bU] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000b0U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x2cU]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000b1U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x2cU] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000b2U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x2cU] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000b3U] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x2cU] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000b4U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x2dU]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000b5U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x2dU] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000b6U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x2dU] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000b7U] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x2dU] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000b8U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x2eU]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000b9U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x2eU] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000baU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x2eU] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000bbU] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x2eU] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000bcU] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x2fU]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000bdU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x2fU] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000beU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x2fU] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000bfU] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x2fU] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000c0U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x30U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000c1U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x30U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000c2U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x30U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000c3U] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x30U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000c4U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x31U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000c5U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x31U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000c6U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x31U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000c7U] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x31U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000c8U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x32U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000c9U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x32U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000caU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x32U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000cbU] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x32U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000ccU] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x33U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000cdU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x33U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000ceU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x33U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000cfU] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x33U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000d0U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x34U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000d1U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x34U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000d2U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x34U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000d3U] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x34U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000d4U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x35U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000d5U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x35U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000d6U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x35U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000d7U] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x35U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000d8U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x36U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000d9U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x36U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000daU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x36U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000dbU] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x36U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000dcU] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x37U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000ddU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x37U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000deU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x37U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000dfU] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x37U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000e0U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x38U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000e1U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x38U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000e2U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x38U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000e3U] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x38U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000e4U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x39U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000e5U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x39U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000e6U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
                          [0x39U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[0x000000e7U] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory
           [0x39U] >> 0x18U);
    VL_WRITEF_NX("IMEMORY: Loaded 58 32-bit words from /Users/aali02/Documents/GitHub/rv32i-core/project/pd4/verif/data/test2.x\n",0);
    top__DOT__dut__DOT__core__DOT__u_dmem__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00100000U, top__DOT__dut__DOT__core__DOT__u_dmem__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[(0x000fffffU 
                                                                           & top__DOT__dut__DOT__core__DOT__u_dmem__DOT__unnamedblk1__DOT__i)] = 0U;
        top__DOT__dut__DOT__core__DOT__u_dmem__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + top__DOT__dut__DOT__core__DOT__u_dmem__DOT__unnamedblk1__DOT__i);
    }
    VL_READMEM_N(true, 32, 58, 0, "/Users/aali02/Documents/GitHub/rv32i-core/project/pd4/verif/data/test2.x"s
                 ,  &(vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory)
                 , 0, ~0ULL);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[1U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[2U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[3U] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[4U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [1U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[5U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [1U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[6U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [1U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[7U] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [1U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[8U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [2U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[9U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [2U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x0000000aU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [2U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x0000000bU] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [2U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x0000000cU] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [3U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x0000000dU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [3U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x0000000eU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [3U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x0000000fU] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [3U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000010U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [4U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000011U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [4U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000012U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [4U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000013U] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [4U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000014U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [5U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000015U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [5U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000016U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [5U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000017U] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [5U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000018U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [6U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000019U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [6U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x0000001aU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [6U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x0000001bU] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [6U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x0000001cU] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [7U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x0000001dU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [7U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x0000001eU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [7U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x0000001fU] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [7U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000020U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [8U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000021U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [8U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000022U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [8U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000023U] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [8U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000024U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [9U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000025U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [9U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000026U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [9U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000027U] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [9U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000028U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x0aU]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000029U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x0aU] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x0000002aU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x0aU] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x0000002bU] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x0aU] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x0000002cU] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x0bU]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x0000002dU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x0bU] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x0000002eU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x0bU] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x0000002fU] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x0bU] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000030U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x0cU]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000031U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x0cU] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000032U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x0cU] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000033U] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x0cU] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000034U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x0dU]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000035U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x0dU] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000036U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x0dU] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000037U] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x0dU] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000038U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x0eU]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000039U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x0eU] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x0000003aU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x0eU] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x0000003bU] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x0eU] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x0000003cU] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x0fU]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x0000003dU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x0fU] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x0000003eU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x0fU] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x0000003fU] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x0fU] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000040U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x10U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000041U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x10U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000042U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x10U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000043U] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x10U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000044U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x11U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000045U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x11U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000046U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x11U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000047U] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x11U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000048U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x12U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000049U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x12U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x0000004aU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x12U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x0000004bU] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x12U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x0000004cU] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x13U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x0000004dU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x13U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x0000004eU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x13U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x0000004fU] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x13U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000050U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x14U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000051U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x14U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000052U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x14U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000053U] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x14U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000054U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x15U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000055U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x15U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000056U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x15U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000057U] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x15U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000058U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x16U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000059U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x16U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x0000005aU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x16U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x0000005bU] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x16U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x0000005cU] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x17U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x0000005dU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x17U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x0000005eU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x17U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x0000005fU] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x17U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000060U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x18U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000061U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x18U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000062U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x18U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000063U] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x18U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000064U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x19U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000065U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x19U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000066U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x19U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000067U] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x19U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000068U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x1aU]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000069U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x1aU] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x0000006aU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x1aU] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x0000006bU] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x1aU] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x0000006cU] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x1bU]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x0000006dU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x1bU] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x0000006eU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x1bU] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x0000006fU] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x1bU] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000070U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x1cU]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000071U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x1cU] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000072U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x1cU] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000073U] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x1cU] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000074U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x1dU]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000075U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x1dU] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000076U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x1dU] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000077U] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x1dU] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000078U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x1eU]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000079U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x1eU] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x0000007aU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x1eU] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x0000007bU] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x1eU] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x0000007cU] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x1fU]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x0000007dU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x1fU] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x0000007eU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x1fU] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x0000007fU] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x1fU] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000080U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x20U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000081U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x20U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000082U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x20U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000083U] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x20U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000084U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x21U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000085U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x21U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000086U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x21U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000087U] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x21U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000088U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x22U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000089U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x22U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x0000008aU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x22U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x0000008bU] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x22U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x0000008cU] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x23U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x0000008dU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x23U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x0000008eU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x23U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x0000008fU] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x23U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000090U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x24U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000091U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x24U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000092U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x24U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000093U] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x24U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000094U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x25U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000095U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x25U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000096U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x25U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000097U] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x25U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000098U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x26U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x00000099U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x26U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x0000009aU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x26U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x0000009bU] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x26U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x0000009cU] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x27U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x0000009dU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x27U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x0000009eU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x27U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x0000009fU] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x27U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000a0U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x28U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000a1U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x28U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000a2U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x28U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000a3U] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x28U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000a4U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x29U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000a5U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x29U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000a6U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x29U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000a7U] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x29U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000a8U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x2aU]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000a9U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x2aU] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000aaU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x2aU] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000abU] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x2aU] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000acU] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x2bU]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000adU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x2bU] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000aeU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x2bU] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000afU] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x2bU] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000b0U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x2cU]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000b1U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x2cU] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000b2U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x2cU] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000b3U] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x2cU] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000b4U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x2dU]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000b5U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x2dU] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000b6U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x2dU] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000b7U] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x2dU] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000b8U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x2eU]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000b9U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x2eU] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000baU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x2eU] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000bbU] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x2eU] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000bcU] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x2fU]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000bdU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x2fU] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000beU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x2fU] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000bfU] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x2fU] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000c0U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x30U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000c1U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x30U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000c2U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x30U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000c3U] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x30U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000c4U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x31U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000c5U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x31U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000c6U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x31U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000c7U] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x31U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000c8U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x32U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000c9U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x32U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000caU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x32U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000cbU] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x32U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000ccU] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x33U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000cdU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x33U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000ceU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x33U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000cfU] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x33U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000d0U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x34U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000d1U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x34U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000d2U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x34U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000d3U] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x34U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000d4U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x35U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000d5U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x35U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000d6U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x35U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000d7U] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x35U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000d8U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x36U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000d9U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x36U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000daU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x36U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000dbU] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x36U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000dcU] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x37U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000ddU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x37U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000deU] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x37U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000dfU] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x37U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000e0U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x38U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000e1U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x38U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000e2U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x38U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000e3U] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x38U] >> 0x18U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000e4U] 
        = (0x000000ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x39U]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000e5U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x39U] >> 8U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000e6U] 
        = (0x000000ffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
                          [0x39U] >> 0x10U));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[0x000000e7U] 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory
           [0x39U] >> 0x18U);
    VL_WRITEF_NX("IMEMORY: Loaded 58 32-bit words from /Users/aali02/Documents/GitHub/rv32i-core/project/pd4/verif/data/test2.x\n",0);
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
    CData/*0:0*/ top__DOT__dut__DOT__core__DOT__id_rs1sel;
    top__DOT__dut__DOT__core__DOT__id_rs1sel = 0;
    CData/*0:0*/ top__DOT__dut__DOT__core__DOT__id_rs2sel;
    top__DOT__dut__DOT__core__DOT__id_rs2sel = 0;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__rf_rs2_data;
    top__DOT__dut__DOT__core__DOT__rf_rs2_data = 0;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__u_mem__DOT__addr_offset;
    top__DOT__dut__DOT__core__DOT__u_mem__DOT__addr_offset = 0;
    CData/*4:0*/ top__DOT__dut__DOT__core__DOT__register_file_0__DOT__rs1_i;
    top__DOT__dut__DOT__core__DOT__register_file_0__DOT__rs1_i = 0;
    CData/*4:0*/ top__DOT__dut__DOT__core__DOT__register_file_0__DOT__rs2_i;
    top__DOT__dut__DOT__core__DOT__register_file_0__DOT__rs2_i = 0;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_a;
    top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_a = 0;
    IData/*31:0*/ __Vfunc_top__DOT__dut__DOT__core__DOT__u_mem__DOT__to_offset__0__Vfuncout;
    __Vfunc_top__DOT__dut__DOT__core__DOT__u_mem__DOT__to_offset__0__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__dut__DOT__core__DOT__u_mem__DOT__to_offset__0__addr;
    __Vfunc_top__DOT__dut__DOT__core__DOT__u_mem__DOT__to_offset__0__addr = 0;
    CData/*0:0*/ __Vfunc_top__DOT__dut__DOT__core__DOT__u_mem__DOT__addr_in_range__1__Vfuncout;
    __Vfunc_top__DOT__dut__DOT__core__DOT__u_mem__DOT__addr_in_range__1__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__dut__DOT__core__DOT__u_mem__DOT__addr_in_range__1__addr;
    __Vfunc_top__DOT__dut__DOT__core__DOT__u_mem__DOT__addr_in_range__1__addr = 0;
    IData/*31:0*/ __Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__to_offset__2__Vfuncout;
    __Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__to_offset__2__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__to_offset__2__addr;
    __Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__to_offset__2__addr = 0;
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
    vlSelfRef.top__DOT__dut__DOT__core__DOT__id_pcsel = 0U;
    __Vfunc_top__DOT__dut__DOT__core__DOT__u_mem__DOT__to_offset__0__addr 
        = vlSelfRef.top__DOT__dut__DOT__core__DOT__u_fetch__DOT__pc_q;
    __Vfunc_top__DOT__dut__DOT__core__DOT__u_mem__DOT__to_offset__0__Vfuncout 
        = ((0x01000000U <= __Vfunc_top__DOT__dut__DOT__core__DOT__u_mem__DOT__to_offset__0__addr)
            ? (__Vfunc_top__DOT__dut__DOT__core__DOT__u_mem__DOT__to_offset__0__addr 
               - (IData)(0x01000000U)) : 0U);
    top__DOT__dut__DOT__core__DOT__u_mem__DOT__addr_offset 
        = __Vfunc_top__DOT__dut__DOT__core__DOT__u_mem__DOT__to_offset__0__Vfuncout;
    __Vfunc_top__DOT__dut__DOT__core__DOT__u_mem__DOT__addr_in_range__1__addr 
        = vlSelfRef.top__DOT__dut__DOT__core__DOT__u_fetch__DOT__pc_q;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_top__DOT__dut__DOT__core__DOT__u_mem__DOT__addr_in_range__1__offset = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2423149516326033521ull);
    __Vfunc_top__DOT__dut__DOT__core__DOT__u_mem__DOT__addr_in_range__1__Vfuncout = 0U;
    if ((0x01000000U <= __Vfunc_top__DOT__dut__DOT__core__DOT__u_mem__DOT__addr_in_range__1__addr)) {
        vlSelfRef.__Vfunc_top__DOT__dut__DOT__core__DOT__u_mem__DOT__addr_in_range__1__offset 
            = (__Vfunc_top__DOT__dut__DOT__core__DOT__u_mem__DOT__addr_in_range__1__addr 
               - (IData)(0x01000000U));
        if ((0x000ffffcU >= vlSelfRef.__Vfunc_top__DOT__dut__DOT__core__DOT__u_mem__DOT__addr_in_range__1__offset)) {
            __Vfunc_top__DOT__dut__DOT__core__DOT__u_mem__DOT__addr_in_range__1__Vfuncout = 1U;
        }
    }
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__read_valid 
        = __Vfunc_top__DOT__dut__DOT__core__DOT__u_mem__DOT__addr_in_range__1__Vfuncout;
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
    vlSelfRef.top__DOT__dut__DOT__core__DOT__id_alusel = 0U;
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
                                vlSelfRef.top__DOT__dut__DOT__core__DOT__id_alusel = 0U;
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
                                vlSelfRef.top__DOT__dut__DOT__core__DOT__id_alusel = 0U;
                            }
                        }
                    }
                } else if ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                    if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                        if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                            vlSelfRef.top__DOT__dut__DOT__core__DOT__id_regwren = 1U;
                            vlSelfRef.top__DOT__dut__DOT__core__DOT__id_wbsel = 2U;
                            vlSelfRef.top__DOT__dut__DOT__core__DOT__id_alusel = 0U;
                        }
                    }
                } else if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                    if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                        vlSelfRef.top__DOT__dut__DOT__core__DOT__id_alusel = 0U;
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
                                vlSelfRef.top__DOT__dut__DOT__core__DOT__id_pcsel = 1U;
                            }
                        }
                    }
                } else if ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                    if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                        if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                            vlSelfRef.top__DOT__dut__DOT__core__DOT__id_pcsel = 1U;
                        }
                    }
                } else if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                    if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                        vlSelfRef.top__DOT__dut__DOT__core__DOT__id_pcsel = 1U;
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
                            vlSelfRef.top__DOT__dut__DOT__core__DOT__id_alusel = 0x0aU;
                        }
                    }
                } else if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                    if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                        vlSelfRef.top__DOT__dut__DOT__core__DOT__id_regwren = 1U;
                        vlSelfRef.top__DOT__dut__DOT__core__DOT__id_wbsel = 0U;
                        vlSelfRef.top__DOT__dut__DOT__core__DOT__id_alusel 
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
                        vlSelfRef.top__DOT__dut__DOT__core__DOT__id_alusel = 0U;
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
                        vlSelfRef.top__DOT__dut__DOT__core__DOT__id_alusel = 0U;
                    }
                }
            } else if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                    vlSelfRef.top__DOT__dut__DOT__core__DOT__id_regwren = 1U;
                    vlSelfRef.top__DOT__dut__DOT__core__DOT__id_wbsel = 0U;
                    vlSelfRef.top__DOT__dut__DOT__core__DOT__id_alusel 
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
                    vlSelfRef.top__DOT__dut__DOT__core__DOT__id_alusel = 0U;
                    top__DOT__dut__DOT__core__DOT__id_rs1sel = 1U;
                }
            }
        }
    }
    if (VL_LIKELY((vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__read_valid))) {
        vlSelfRef.top__DOT__dut__DOT__core__DOT__imem_data 
            = ((0xffffff00U & vlSelfRef.top__DOT__dut__DOT__core__DOT__imem_data) 
               | vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory
               [(0x000fffffU & top__DOT__dut__DOT__core__DOT__u_mem__DOT__addr_offset)]);
        vlSelfRef.top__DOT__dut__DOT__core__DOT__imem_data 
            = ((0xffff00ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__imem_data) 
               | (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory
                  [(0x000fffffU & ((IData)(1U) + top__DOT__dut__DOT__core__DOT__u_mem__DOT__addr_offset))] 
                  << 8U));
        vlSelfRef.top__DOT__dut__DOT__core__DOT__imem_data 
            = ((0xff00ffffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__imem_data) 
               | (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory
                  [(0x000fffffU & ((IData)(2U) + top__DOT__dut__DOT__core__DOT__u_mem__DOT__addr_offset))] 
                  << 0x00000010U));
        vlSelfRef.top__DOT__dut__DOT__core__DOT__imem_data 
            = ((0x00ffffffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__imem_data) 
               | (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory
                  [(0x000fffffU & ((IData)(3U) + top__DOT__dut__DOT__core__DOT__u_mem__DOT__addr_offset))] 
                  << 0x00000018U));
    } else {
        VL_WRITEF_NX("[%0t] %%Warning: memory.sv:115: %Ntop.dut.core.u_mem: MEMORY: Read from OOOB Address 0x%08x returns 0\n",0,
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
    vlSelfRef.top__DOT__dut__DOT__core__DOT__rf_rs1_data 
        = ((0U == (IData)(top__DOT__dut__DOT__core__DOT__register_file_0__DOT__rs1_i))
            ? 0U : vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers
           [top__DOT__dut__DOT__core__DOT__register_file_0__DOT__rs1_i]);
    top__DOT__dut__DOT__core__DOT__rf_rs2_data = ((0U 
                                                   == (IData)(top__DOT__dut__DOT__core__DOT__register_file_0__DOT__rs2_i))
                                                   ? 0U
                                                   : 
                                                  vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers
                                                  [top__DOT__dut__DOT__core__DOT__register_file_0__DOT__rs2_i]);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__store_data_masked 
        = top__DOT__dut__DOT__core__DOT__rf_rs2_data;
    if ((0x00000040U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
        if ((0x00000020U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
            if ((0x00000010U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__u_igen__DOT__imm_val 
                    = __VdfgRegularize_hebeb780c_0_2;
                top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_a 
                    = vlSelfRef.top__DOT__dut__DOT__core__DOT__rf_rs1_data;
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
                                = vlSelfRef.top__DOT__dut__DOT__core__DOT__rf_rs1_data;
                        }
                    } else {
                        vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__u_igen__DOT__imm_val = 0U;
                        top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_a 
                            = vlSelfRef.top__DOT__dut__DOT__core__DOT__rf_rs1_data;
                    }
                } else {
                    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__u_igen__DOT__imm_val = 0U;
                    top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_a 
                        = vlSelfRef.top__DOT__dut__DOT__core__DOT__rf_rs1_data;
                }
            } else if ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__u_igen__DOT__imm_val 
                    = __VdfgRegularize_hebeb780c_0_1;
                top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_a 
                    = vlSelfRef.top__DOT__dut__DOT__core__DOT__rf_rs1_data;
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
                        = vlSelfRef.top__DOT__dut__DOT__core__DOT__rf_rs1_data;
                }
            } else {
                vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__u_igen__DOT__imm_val = 0U;
                top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_a 
                    = vlSelfRef.top__DOT__dut__DOT__core__DOT__rf_rs1_data;
            }
        } else {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__u_igen__DOT__imm_val = 0U;
            top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_a 
                = vlSelfRef.top__DOT__dut__DOT__core__DOT__rf_rs1_data;
        }
    } else if ((0x00000020U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
        if ((0x00000010U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
            if ((8U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__u_igen__DOT__imm_val = 0U;
                top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_a 
                    = vlSelfRef.top__DOT__dut__DOT__core__DOT__rf_rs1_data;
            } else if ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
                vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__u_igen__DOT__imm_val 
                    = __VdfgRegularize_hebeb780c_0_3;
                top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_a 
                    = ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                        ? ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                            ? 0U : vlSelfRef.top__DOT__dut__DOT__core__DOT__rf_rs1_data)
                        : vlSelfRef.top__DOT__dut__DOT__core__DOT__rf_rs1_data);
            } else {
                vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__u_igen__DOT__imm_val = 0U;
                top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_a 
                    = vlSelfRef.top__DOT__dut__DOT__core__DOT__rf_rs1_data;
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
                = vlSelfRef.top__DOT__dut__DOT__core__DOT__rf_rs1_data;
        }
    } else if ((0x00000010U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
        if ((8U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__u_igen__DOT__imm_val = 0U;
            top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_a 
                = vlSelfRef.top__DOT__dut__DOT__core__DOT__rf_rs1_data;
        } else if ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__u_igen__DOT__imm_val 
                = __VdfgRegularize_hebeb780c_0_3;
            top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_a 
                = ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                    ? ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                        ? vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__pc_q
                        : vlSelfRef.top__DOT__dut__DOT__core__DOT__rf_rs1_data)
                    : vlSelfRef.top__DOT__dut__DOT__core__DOT__rf_rs1_data);
        } else {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__u_igen__DOT__imm_val 
                = __VdfgRegularize_hebeb780c_0_1;
            top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_a 
                = vlSelfRef.top__DOT__dut__DOT__core__DOT__rf_rs1_data;
        }
    } else {
        vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__u_igen__DOT__imm_val 
            = __VdfgRegularize_hebeb780c_0_2;
        top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_a 
            = vlSelfRef.top__DOT__dut__DOT__core__DOT__rf_rs1_data;
    }
    if (vlSelfRef.top__DOT__dut__DOT__core__DOT__id_memwren) {
        vlSelfRef.top__DOT__dut__DOT__core__DOT__store_data_masked 
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
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_alu__DOT__breq = 0U;
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_alu__DOT__brlt = 0U;
    if ((0x63U == (0x0000007fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q))) {
        vlSelfRef.top__DOT__dut__DOT__core__DOT__u_alu__DOT__breq 
            = (vlSelfRef.top__DOT__dut__DOT__core__DOT__rf_rs1_data 
               == top__DOT__dut__DOT__core__DOT__rf_rs2_data);
        vlSelfRef.top__DOT__dut__DOT__core__DOT__u_alu__DOT__brlt 
            = (((6U == (7U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                              >> 0x0000000cU))) || 
                (7U == (7U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                              >> 0x0000000cU)))) ? 
               (vlSelfRef.top__DOT__dut__DOT__core__DOT__rf_rs1_data 
                < top__DOT__dut__DOT__core__DOT__rf_rs2_data)
                : VL_LTS_III(32, vlSelfRef.top__DOT__dut__DOT__core__DOT__rf_rs1_data, top__DOT__dut__DOT__core__DOT__rf_rs2_data));
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
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_b 
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
                     ? (~ (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__u_alu__DOT__brlt))
                     : (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__u_alu__DOT__brlt))
                 : ((~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q 
                        >> 0x0000000dU)) & ((0x00001000U 
                                             & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)
                                             ? (~ (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__u_alu__DOT__breq))
                                             : (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__u_alu__DOT__breq))))
             : ((0x6fU == (0x0000007fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)) 
                | (0x67U == (0x0000007fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q)))) 
           & (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__id_pcsel));
    __VdfgRegularize_hebeb780c_0_4 = (top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_a 
                                      + vlSelfRef.top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_b);
    __VdfgRegularize_hebeb780c_0_5 = ((8U & (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__id_alusel))
                                       ? ((4U & (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__id_alusel))
                                           ? __VdfgRegularize_hebeb780c_0_4
                                           : ((2U & (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__id_alusel))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__id_alusel))
                                                   ? __VdfgRegularize_hebeb780c_0_4
                                                   : vlSelfRef.top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_b)
                                               : ((1U 
                                                   & (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__id_alusel))
                                                   ? 
                                                  (top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_a 
                                                   & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_b)
                                                   : 
                                                  (top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_a 
                                                   | vlSelfRef.top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_b))))
                                       : ((4U & (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__id_alusel))
                                           ? ((2U & (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__id_alusel))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__id_alusel))
                                                   ? 
                                                  VL_SHIFTRS_III(32,32,5, top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_a, 
                                                                 (0x0000001fU 
                                                                  & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_b))
                                                   : 
                                                  (top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_a 
                                                   >> 
                                                   (0x0000001fU 
                                                    & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_b)))
                                               : ((1U 
                                                   & (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__id_alusel))
                                                   ? 
                                                  (top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_a 
                                                   ^ vlSelfRef.top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_b)
                                                   : 
                                                  ((top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_a 
                                                    < vlSelfRef.top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_b)
                                                    ? 1U
                                                    : 0U)))
                                           : ((2U & (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__id_alusel))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__id_alusel))
                                                   ? 
                                                  (VL_LTS_III(32, top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_a, vlSelfRef.top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_b)
                                                    ? 1U
                                                    : 0U)
                                                   : 
                                                  (top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_a 
                                                   << 
                                                   (0x0000001fU 
                                                    & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_b)))
                                               : ((1U 
                                                   & (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__id_alusel))
                                                   ? 
                                                  (top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_a 
                                                   - vlSelfRef.top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_b)
                                                   : __VdfgRegularize_hebeb780c_0_4))));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_alu__DOT__result 
        = ((0x67U == (0x0000007fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q))
            ? (0xfffffffeU & __VdfgRegularize_hebeb780c_0_5)
            : __VdfgRegularize_hebeb780c_0_5);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__dmem_wdata 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__store_data_masked 
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
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__write_valid 
        = ((IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__id_memwren) 
           & ([&]() {
                vlSelfRef.__Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__addr_in_range__4__addr 
                    = vlSelfRef.top__DOT__dut__DOT__core__DOT__u_alu__DOT__result;
                vlSelf->__Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__addr_in_range__4__offset = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5462597775913259472ull);
                vlSelfRef.__Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__addr_in_range__4__Vfuncout = 0U;
                if ((0x01000000U <= vlSelfRef.__Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__addr_in_range__4__addr)) {
                    vlSelfRef.__Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__addr_in_range__4__offset 
                        = (vlSelfRef.__Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__addr_in_range__4__addr 
                           - (IData)(0x01000000U));
                    if ((0x000ffffcU >= vlSelfRef.__Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__addr_in_range__4__offset)) {
                        vlSelfRef.__Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__addr_in_range__4__Vfuncout = 1U;
                    }
                }
            }(), (IData)(vlSelfRef.__Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__addr_in_range__4__Vfuncout)));
    __Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__to_offset__2__addr 
        = vlSelfRef.top__DOT__dut__DOT__core__DOT__u_alu__DOT__result;
    __Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__to_offset__2__Vfuncout 
        = ((0x01000000U <= __Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__to_offset__2__addr)
            ? (__Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__to_offset__2__addr 
               - (IData)(0x01000000U)) : 0U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__addr_offset 
        = __Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__to_offset__2__Vfuncout;
    vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__read_valid 
        = ((IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__id_memren) 
           & ([&]() {
                vlSelfRef.__Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__addr_in_range__3__addr 
                    = vlSelfRef.top__DOT__dut__DOT__core__DOT__u_alu__DOT__result;
                vlSelf->__Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__addr_in_range__3__offset = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4486705773839388159ull);
                vlSelfRef.__Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__addr_in_range__3__Vfuncout = 0U;
                if ((0x01000000U <= vlSelfRef.__Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__addr_in_range__3__addr)) {
                    vlSelfRef.__Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__addr_in_range__3__offset 
                        = (vlSelfRef.__Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__addr_in_range__3__addr 
                           - (IData)(0x01000000U));
                    if ((0x000ffffcU >= vlSelfRef.__Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__addr_in_range__3__offset)) {
                        vlSelfRef.__Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__addr_in_range__3__Vfuncout = 1U;
                    }
                }
            }(), (IData)(vlSelfRef.__Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__addr_in_range__3__Vfuncout)));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__dmem_rdata = 0U;
    if (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__read_valid) {
        vlSelfRef.top__DOT__dut__DOT__core__DOT__dmem_rdata 
            = ((0xffffff00U & vlSelfRef.top__DOT__dut__DOT__core__DOT__dmem_rdata) 
               | vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory
               [(0x000fffffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__addr_offset)]);
        vlSelfRef.top__DOT__dut__DOT__core__DOT__dmem_rdata 
            = ((0xffff00ffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__dmem_rdata) 
               | (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory
                  [(0x000fffffU & ((IData)(1U) + vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__addr_offset))] 
                  << 8U));
        vlSelfRef.top__DOT__dut__DOT__core__DOT__dmem_rdata 
            = ((0xff00ffffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__dmem_rdata) 
               | (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory
                  [(0x000fffffU & ((IData)(2U) + vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__addr_offset))] 
                  << 0x00000010U));
        vlSelfRef.top__DOT__dut__DOT__core__DOT__dmem_rdata 
            = ((0x00ffffffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__dmem_rdata) 
               | (vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory
                  [(0x000fffffU & ((IData)(3U) + vlSelfRef.top__DOT__dut__DOT__core__DOT__u_dmem__DOT__addr_offset))] 
                  << 0x00000018U));
    } else if (VL_UNLIKELY((vlSelfRef.top__DOT__dut__DOT__core__DOT__id_memren))) {
        VL_WRITEF_NX("[%0t] %%Warning: memory.sv:115: %Ntop.dut.core.u_dmem: MEMORY: Read from OOOB Address 0x%08x returns 0\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                     32,vlSelfRef.top__DOT__dut__DOT__core__DOT__u_alu__DOT__result);
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
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge top.reset)\n");
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
    vlSelf->top__DOT__dut__DOT__core__DOT__id_pcsel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9983671796336973260ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__id_regwren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15484336708751457232ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__id_memren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3215994018135819107ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__id_memwren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12171576079766067514ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__id_wbsel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13038840566659765705ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__id_alusel = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13649089055443690186ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__rf_rs1_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16773001872809662907ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__dmem_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14143931503358390295ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__dmem_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1128733566571743877ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__dmem_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10539682469297880922ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__store_data_masked = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9324409366739973218ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__shifted_load_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7699240881927773121ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__is_program = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3526790071870633143ull);
    for (int __Vi0 = 0; __Vi0 < 58; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__core__DOT__u_mem__DOT__temp_memory[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14173891099000035922ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1048576; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__core__DOT__u_mem__DOT__main_memory[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17514311573260117284ull);
    }
    vlSelf->top__DOT__dut__DOT__core__DOT__u_mem__DOT__read_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8329882516081014362ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__u_mem__DOT__read_en_prev = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8288091423046073012ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__u_mem__DOT__last_oob_read_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3869311991408171312ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__u_mem__DOT__last_oob_read_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14898618712737410939ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__u_fetch__DOT__pcsel_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16009109960342352603ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__u_fetch__DOT__pc_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16049845647286297623ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__u_fetch__DOT__insn_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11741627438673861473ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__u_decode__DOT__pc_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13452347487433674ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__u_decode__DOT__insn_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15349931852729943981ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__u_decode__DOT__u_igen__DOT__imm_val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3437244270571379964ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__core__DOT__register_file_0__DOT__registers[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18289671846489948390ull);
    }
    vlSelf->top__DOT__dut__DOT__core__DOT__u_alu__DOT__operand_b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1599095818002606546ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__u_alu__DOT__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 935136138302980745ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__u_alu__DOT__breq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9955576127066040076ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__u_alu__DOT__brlt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13774443796197579815ull);
    for (int __Vi0 = 0; __Vi0 < 58; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__core__DOT__u_dmem__DOT__temp_memory[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10372947827196193019ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1048576; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__core__DOT__u_dmem__DOT__main_memory[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2549241195112519339ull);
    }
    vlSelf->top__DOT__dut__DOT__core__DOT__u_dmem__DOT__addr_offset = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15860370732240657267ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__u_dmem__DOT__read_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6676230795760117886ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__u_dmem__DOT__write_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3062172868499237468ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__u_dmem__DOT__read_en_prev = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13841139585692843504ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__u_dmem__DOT__last_oob_read_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14883665438533360335ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__u_dmem__DOT__last_oob_read_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11429093782897837969ull);
    vlSelf->__Vdpi_export_trigger = 0;
    vlSelf->__Vfunc_top__DOT__dut__DOT__core__DOT__u_mem__DOT__addr_in_range__1__offset = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2423149516326033521ull);
    vlSelf->__Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__addr_in_range__3__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5877082732074294734ull);
    vlSelf->__Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__addr_in_range__3__addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6006687485332150662ull);
    vlSelf->__Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__addr_in_range__3__offset = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4486705773839388159ull);
    vlSelf->__Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__addr_in_range__4__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8244008873307708280ull);
    vlSelf->__Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__addr_in_range__4__addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5625238566680164257ull);
    vlSelf->__Vfunc_top__DOT__dut__DOT__core__DOT__u_dmem__DOT__addr_in_range__4__offset = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5462597775913259472ull);
    vlSelf->__Vdly__top__DOT__dut__DOT__core__DOT__u_decode__DOT__pc_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6881878641805066969ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__clock__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14234138457933551086ull);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__reset__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16527897109859793802ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}

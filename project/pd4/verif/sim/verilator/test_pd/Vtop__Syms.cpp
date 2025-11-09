// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"
#include "Vtop.h"
#include "Vtop___024root.h"
#include "Vtop___024unit.h"

void Vtop___024root____Vdpiexp_top__DOT__clkg__DOT__toggleClock_TOP(Vtop__Syms* __restrict vlSymsp);

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{
}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(542);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_top__clkg.configure(this, name(), "top.clkg", "clkg", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_top__dut__core.configure(this, name(), "top.dut.core", "core", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_top__dut__core__u_alu.configure(this, name(), "top.dut.core.u_alu", "u_alu", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_top__dut__core__u_alu__u_branch_control.configure(this, name(), "top.dut.core.u_alu.u_branch_control", "u_branch_control", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_top__clkg.exportInsert(__Vfinal, "toggleClock", (void*)(&Vtop___024root____Vdpiexp_top__DOT__clkg__DOT__toggleClock_TOP));
    }
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdfinal.h for the primary calling header

#include "verilated.h"

#include "Vdfinal___024root.h"

VL_INLINE_OPT void Vdfinal___024root___sequent__TOP__0(Vdfinal___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdfinal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdfinal___024root___sequent__TOP__0\n"); );
    // Init
    SData/*15:0*/ __Vdly__dfinal__DOT__ticks__DOT__count;
    // Body
    __Vdly__dfinal__DOT__ticks__DOT__count = vlSelf->dfinal__DOT__ticks__DOT__count;
    if (vlSelf->rst) {
        vlSelf->dfinal__DOT__f1__DOT__current_state = 0U;
        vlSelf->dfinal__DOT__tick = 0U;
        __Vdly__dfinal__DOT__ticks__DOT__count = vlSelf->N;
    } else {
        if (vlSelf->dfinal__DOT__tick) {
            vlSelf->dfinal__DOT__f1__DOT__current_state 
                = vlSelf->dfinal__DOT__f1__DOT__next_state;
        }
        if (vlSelf->en) {
            if ((0U == (IData)(vlSelf->dfinal__DOT__ticks__DOT__count))) {
                vlSelf->dfinal__DOT__tick = 1U;
                __Vdly__dfinal__DOT__ticks__DOT__count 
                    = vlSelf->N;
            } else {
                __Vdly__dfinal__DOT__ticks__DOT__count 
                    = (0xffffU & ((IData)(vlSelf->dfinal__DOT__ticks__DOT__count) 
                                  - (IData)(1U)));
                vlSelf->dfinal__DOT__tick = 0U;
            }
        }
    }
    if (((((((((0U == vlSelf->dfinal__DOT__f1__DOT__current_state) 
               | (1U == vlSelf->dfinal__DOT__f1__DOT__current_state)) 
              | (2U == vlSelf->dfinal__DOT__f1__DOT__current_state)) 
             | (3U == vlSelf->dfinal__DOT__f1__DOT__current_state)) 
            | (4U == vlSelf->dfinal__DOT__f1__DOT__current_state)) 
           | (5U == vlSelf->dfinal__DOT__f1__DOT__current_state)) 
          | (6U == vlSelf->dfinal__DOT__f1__DOT__current_state)) 
         | (7U == vlSelf->dfinal__DOT__f1__DOT__current_state))) {
        if ((0U == vlSelf->dfinal__DOT__f1__DOT__current_state)) {
            vlSelf->dfinal__DOT__f1__DOT__next_state = 1U;
            vlSelf->out = 0U;
        } else if ((1U == vlSelf->dfinal__DOT__f1__DOT__current_state)) {
            vlSelf->dfinal__DOT__f1__DOT__next_state = 2U;
            vlSelf->out = 1U;
        } else if ((2U == vlSelf->dfinal__DOT__f1__DOT__current_state)) {
            vlSelf->dfinal__DOT__f1__DOT__next_state = 3U;
            vlSelf->out = 3U;
        } else if ((3U == vlSelf->dfinal__DOT__f1__DOT__current_state)) {
            vlSelf->dfinal__DOT__f1__DOT__next_state = 4U;
            vlSelf->out = 7U;
        } else if ((4U == vlSelf->dfinal__DOT__f1__DOT__current_state)) {
            vlSelf->dfinal__DOT__f1__DOT__next_state = 5U;
            vlSelf->out = 0xfU;
        } else if ((5U == vlSelf->dfinal__DOT__f1__DOT__current_state)) {
            vlSelf->dfinal__DOT__f1__DOT__next_state = 6U;
            vlSelf->out = 0x1fU;
        } else if ((6U == vlSelf->dfinal__DOT__f1__DOT__current_state)) {
            vlSelf->dfinal__DOT__f1__DOT__next_state = 7U;
            vlSelf->out = 0x3fU;
        } else {
            vlSelf->dfinal__DOT__f1__DOT__next_state = 8U;
            vlSelf->out = 0x7fU;
        }
    } else {
        vlSelf->dfinal__DOT__f1__DOT__next_state = 0U;
        vlSelf->out = ((8U == vlSelf->dfinal__DOT__f1__DOT__current_state)
                        ? 0xffU : 0U);
    }
    vlSelf->dfinal__DOT__ticks__DOT__count = __Vdly__dfinal__DOT__ticks__DOT__count;
}

void Vdfinal___024root___eval(Vdfinal___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdfinal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdfinal___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vdfinal___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vdfinal___024root___eval_debug_assertions(Vdfinal___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdfinal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdfinal___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdfinal__Syms.h"


void Vdfinal___024root__trace_chg_sub_0(Vdfinal___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vdfinal___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdfinal___024root__trace_chg_top_0\n"); );
    // Init
    Vdfinal___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdfinal___024root*>(voidSelf);
    Vdfinal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vdfinal___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vdfinal___024root__trace_chg_sub_0(Vdfinal___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vdfinal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdfinal___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->dfinal__DOT__tick));
        bufp->chgIData(oldp+1,(vlSelf->dfinal__DOT__f1__DOT__current_state),32);
        bufp->chgIData(oldp+2,((((((((((0U == vlSelf->dfinal__DOT__f1__DOT__current_state) 
                                       | (1U == vlSelf->dfinal__DOT__f1__DOT__current_state)) 
                                      | (2U == vlSelf->dfinal__DOT__f1__DOT__current_state)) 
                                     | (3U == vlSelf->dfinal__DOT__f1__DOT__current_state)) 
                                    | (4U == vlSelf->dfinal__DOT__f1__DOT__current_state)) 
                                   | (5U == vlSelf->dfinal__DOT__f1__DOT__current_state)) 
                                  | (6U == vlSelf->dfinal__DOT__f1__DOT__current_state)) 
                                 | (7U == vlSelf->dfinal__DOT__f1__DOT__current_state))
                                 ? ((0U == vlSelf->dfinal__DOT__f1__DOT__current_state)
                                     ? 1U : ((1U == vlSelf->dfinal__DOT__f1__DOT__current_state)
                                              ? 2U : 
                                             ((2U == vlSelf->dfinal__DOT__f1__DOT__current_state)
                                               ? 3U
                                               : ((3U 
                                                   == vlSelf->dfinal__DOT__f1__DOT__current_state)
                                                   ? 4U
                                                   : 
                                                  ((4U 
                                                    == vlSelf->dfinal__DOT__f1__DOT__current_state)
                                                    ? 5U
                                                    : 
                                                   ((5U 
                                                     == vlSelf->dfinal__DOT__f1__DOT__current_state)
                                                     ? 6U
                                                     : 
                                                    ((6U 
                                                      == vlSelf->dfinal__DOT__f1__DOT__current_state)
                                                      ? 7U
                                                      : 8U)))))))
                                 : 0U)),32);
        bufp->chgSData(oldp+3,(vlSelf->dfinal__DOT__ticks__DOT__count),16);
    }
    bufp->chgBit(oldp+4,(vlSelf->clk));
    bufp->chgBit(oldp+5,(vlSelf->rst));
    bufp->chgSData(oldp+6,(vlSelf->N),16);
    bufp->chgBit(oldp+7,(vlSelf->en));
    bufp->chgCData(oldp+8,(vlSelf->out),8);
}

void Vdfinal___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdfinal___024root__trace_cleanup\n"); );
    // Init
    Vdfinal___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdfinal___024root*>(voidSelf);
    Vdfinal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}

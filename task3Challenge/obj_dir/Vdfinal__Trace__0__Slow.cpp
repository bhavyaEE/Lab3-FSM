// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdfinal__Syms.h"


VL_ATTR_COLD void Vdfinal___024root__trace_init_sub__TOP__0(Vdfinal___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdfinal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdfinal___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+5,"clk", false,-1);
    tracep->declBit(c+6,"rst", false,-1);
    tracep->declBus(c+7,"N", false,-1, 15,0);
    tracep->declBit(c+8,"en", false,-1);
    tracep->declBus(c+9,"out", false,-1, 7,0);
    tracep->pushNamePrefix("dfinal ");
    tracep->declBit(c+5,"clk", false,-1);
    tracep->declBit(c+6,"rst", false,-1);
    tracep->declBus(c+7,"N", false,-1, 15,0);
    tracep->declBit(c+8,"en", false,-1);
    tracep->declBus(c+9,"out", false,-1, 7,0);
    tracep->declBit(c+1,"tick", false,-1);
    tracep->pushNamePrefix("f1 ");
    tracep->declBit(c+5,"clk", false,-1);
    tracep->declBit(c+1,"en", false,-1);
    tracep->declBit(c+6,"rst", false,-1);
    tracep->declBus(c+9,"out", false,-1, 7,0);
    tracep->declBus(c+2,"current_state", false,-1, 31,0);
    tracep->declBus(c+3,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ticks ");
    tracep->declBus(c+10,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+5,"clk", false,-1);
    tracep->declBit(c+6,"rst", false,-1);
    tracep->declBit(c+8,"en", false,-1);
    tracep->declBus(c+7,"N", false,-1, 15,0);
    tracep->declBit(c+1,"tick", false,-1);
    tracep->declBus(c+4,"count", false,-1, 15,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vdfinal___024root__trace_init_top(Vdfinal___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdfinal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdfinal___024root__trace_init_top\n"); );
    // Body
    Vdfinal___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vdfinal___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdfinal___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdfinal___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vdfinal___024root__trace_register(Vdfinal___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdfinal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdfinal___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vdfinal___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vdfinal___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vdfinal___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vdfinal___024root__trace_full_sub_0(Vdfinal___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdfinal___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdfinal___024root__trace_full_top_0\n"); );
    // Init
    Vdfinal___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdfinal___024root*>(voidSelf);
    Vdfinal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vdfinal___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdfinal___024root__trace_full_sub_0(Vdfinal___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vdfinal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdfinal___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->dfinal__DOT__tick));
    bufp->fullIData(oldp+2,(vlSelf->dfinal__DOT__f1__DOT__current_state),32);
    bufp->fullIData(oldp+3,((((((((((0U == vlSelf->dfinal__DOT__f1__DOT__current_state) 
                                    | (1U == vlSelf->dfinal__DOT__f1__DOT__current_state)) 
                                   | (2U == vlSelf->dfinal__DOT__f1__DOT__current_state)) 
                                  | (3U == vlSelf->dfinal__DOT__f1__DOT__current_state)) 
                                 | (4U == vlSelf->dfinal__DOT__f1__DOT__current_state)) 
                                | (5U == vlSelf->dfinal__DOT__f1__DOT__current_state)) 
                               | (6U == vlSelf->dfinal__DOT__f1__DOT__current_state)) 
                              | (7U == vlSelf->dfinal__DOT__f1__DOT__current_state))
                              ? ((0U == vlSelf->dfinal__DOT__f1__DOT__current_state)
                                  ? 1U : ((1U == vlSelf->dfinal__DOT__f1__DOT__current_state)
                                           ? 2U : (
                                                   (2U 
                                                    == vlSelf->dfinal__DOT__f1__DOT__current_state)
                                                    ? 3U
                                                    : 
                                                   ((3U 
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
    bufp->fullSData(oldp+4,(vlSelf->dfinal__DOT__ticks__DOT__count),16);
    bufp->fullBit(oldp+5,(vlSelf->clk));
    bufp->fullBit(oldp+6,(vlSelf->rst));
    bufp->fullSData(oldp+7,(vlSelf->N),16);
    bufp->fullBit(oldp+8,(vlSelf->en));
    bufp->fullCData(oldp+9,(vlSelf->out),8);
    bufp->fullIData(oldp+10,(0x10U),32);
}

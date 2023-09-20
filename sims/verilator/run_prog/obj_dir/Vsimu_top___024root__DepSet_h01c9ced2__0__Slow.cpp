// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vsimu_top__Syms.h"
#include "Vsimu_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimu_top___024root___dump_triggers__stl(Vsimu_top___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsimu_top___024root___eval_triggers__stl(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
    vlSelf->__VstlTriggered.at(1U) = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_ready_go) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_ready_go));
    vlSelf->__VstlTriggered.at(2U) = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_ready_go) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_ready_go));
    vlSelf->__Vtrigrprev__TOP__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_ready_go 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_ready_go;
    vlSelf->__Vtrigrprev__TOP__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_ready_go 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_ready_go;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VstlDidInit))))) {
        vlSelf->__VstlDidInit = 1U;
        vlSelf->__VstlTriggered.at(1U) = 1U;
        vlSelf->__VstlTriggered.at(2U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsimu_top___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

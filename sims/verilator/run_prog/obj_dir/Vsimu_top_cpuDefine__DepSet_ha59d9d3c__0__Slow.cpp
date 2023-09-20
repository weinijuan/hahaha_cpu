// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vsimu_top_cpuDefine.h"

VL_ATTR_COLD void Vsimu_top_cpuDefine___ctor_var_reset(Vsimu_top_cpuDefine* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsimu_top_cpuDefine___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__FlushOp = VL_RAND_RESET_I(3);
    vlSelf->__PVT__ExCode = VL_RAND_RESET_I(6);
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vsimu_top___024root.h"

VL_ATTR_COLD void Vsimu_top___024root___eval_static__TOP(Vsimu_top___024root* vlSelf);

VL_ATTR_COLD void Vsimu_top___024root___eval_static(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___eval_static\n"); );
    // Body
    Vsimu_top___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[8U] = 1U;
    vlSelf->__Vm_traceActivity[7U] = 1U;
    vlSelf->__Vm_traceActivity[6U] = 1U;
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vsimu_top___024root___eval_static__TOP(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT__cancel = 0U;
}

VL_ATTR_COLD void Vsimu_top___024root___eval_initial__TOP(Vsimu_top___024root* vlSelf);

VL_ATTR_COLD void Vsimu_top___024root___eval_initial(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___eval_initial\n"); );
    // Body
    Vsimu_top___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[8U] = 1U;
    vlSelf->__Vm_traceActivity[7U] = 1U;
    vlSelf->__Vm_traceActivity[6U] = 1U;
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_ready_go 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_ready_go;
    vlSelf->__Vtrigrprev__TOP__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_ready_go 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_ready_go;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__aclk = vlSelf->aclk;
}

VL_ATTR_COLD void Vsimu_top___024root___eval_initial__TOP(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__i = 0x10U;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[0U] = 0U;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[2U] = 0U;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[3U] = 0U;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[0U] = 0U;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[2U] = 0U;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[3U] = 0U;
    vlSelf->arid = 0U;
    vlSelf->arlen = 0U;
    vlSelf->arburst = 0U;
    vlSelf->arlock = 0U;
    vlSelf->arcache = 0U;
    vlSelf->arprot = 0U;
    vlSelf->rready = 1U;
    vlSelf->awid = 0U;
    vlSelf->awlen = 0U;
    vlSelf->awburst = 0U;
    vlSelf->awlock = 0U;
    vlSelf->awcache = 0U;
    vlSelf->awprot = 0U;
    vlSelf->wid = 0U;
    vlSelf->wlast = 1U;
    vlSelf->bready = 1U;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__tag_v__DOT__j = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__tag_v__DOT__j)) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__tag_v__DOT__ram_[(0xffU 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__tag_v__DOT__j)] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__tag_v__DOT__j 
            = ((IData)(1U) + vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__tag_v__DOT__j);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__j = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__j)) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__ram_[(0xffU 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__j)] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__j 
            = ((IData)(1U) + vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__j);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__j = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__j)) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__ram_[(0xffU 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__j)] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__j 
            = ((IData)(1U) + vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__j);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__j = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__j)) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__ram_[(0xffU 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__j)] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__j 
            = ((IData)(1U) + vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__j);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__j = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__j)) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__ram_[(0xffU 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__j)] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__j 
            = ((IData)(1U) + vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__j);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__tag_v__DOT__j = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__tag_v__DOT__j)) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__tag_v__DOT__ram_[(0xffU 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__tag_v__DOT__j)] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__tag_v__DOT__j 
            = ((IData)(1U) + vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__tag_v__DOT__j);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__j = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__j)) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__ram_[(0xffU 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__j)] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__j 
            = ((IData)(1U) + vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__j);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__j = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__j)) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__ram_[(0xffU 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__j)] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__j 
            = ((IData)(1U) + vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__j);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__j = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__j)) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__ram_[(0xffU 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__j)] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__j 
            = ((IData)(1U) + vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__j);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__j = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__j)) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__ram_[(0xffU 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__j)] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__j 
            = ((IData)(1U) + vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__j);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__tag_v__DOT__j = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__tag_v__DOT__j)) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__tag_v__DOT__ram_[(0xffU 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__tag_v__DOT__j)] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__tag_v__DOT__j 
            = ((IData)(1U) + vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__tag_v__DOT__j);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__j = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__j)) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__ram_[(0xffU 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__j)] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__j 
            = ((IData)(1U) + vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__j);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__j = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__j)) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__ram_[(0xffU 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__j)] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__j 
            = ((IData)(1U) + vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__j);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__j = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__j)) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__ram_[(0xffU 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__j)] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__j 
            = ((IData)(1U) + vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__j);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__j = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__j)) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__ram_[(0xffU 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__j)] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__j 
            = ((IData)(1U) + vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__j);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__tag_v__DOT__j = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__tag_v__DOT__j)) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__tag_v__DOT__ram_[(0xffU 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__tag_v__DOT__j)] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__tag_v__DOT__j 
            = ((IData)(1U) + vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__tag_v__DOT__j);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__j = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__j)) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__ram_[(0xffU 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__j)] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__j 
            = ((IData)(1U) + vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__j);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__j = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__j)) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__ram_[(0xffU 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__j)] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__j 
            = ((IData)(1U) + vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__j);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__j = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__j)) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__ram_[(0xffU 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__j)] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__j 
            = ((IData)(1U) + vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__j);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__j = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__j)) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__ram_[(0xffU 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__j)] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__j 
            = ((IData)(1U) + vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__j);
    }
}

VL_ATTR_COLD void Vsimu_top___024root___eval_final(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vsimu_top___024root___eval_triggers__stl(Vsimu_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimu_top___024root___dump_triggers__stl(Vsimu_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vsimu_top___024root___eval_stl(Vsimu_top___024root* vlSelf);

VL_ATTR_COLD void Vsimu_top___024root___eval_settle(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vsimu_top___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vsimu_top___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/weinijuan/cpu/IP/myCPU/cpu_axi_interface.v", 28, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vsimu_top___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimu_top___024root___dump_triggers__stl(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if (vlSelf->__VstlTriggered.at(1U)) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] simu_top.soc.cpu.cpu_sram_u.id_ready_go)\n");
    }
    if (vlSelf->__VstlTriggered.at(2U)) {
        VL_DBG_MSGF("         'stl' region trigger index 2 is active: @([hybrid] simu_top.soc.cpu.cpu_sram_u.mem_ready_go)\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*7:0*/, 256> Vsimu_top__ConstPool__TABLE_ha6e7b954_0;
extern const VlUnpacked<SData/*9:0*/, 256> Vsimu_top__ConstPool__TABLE_hb86679b4_0;
extern const VlUnpacked<CData/*3:0*/, 4> Vsimu_top__ConstPool__TABLE_h7eaf993d_0;
extern const VlWide<12>/*383:0*/ Vsimu_top__ConstPool__CONST_hbc413d5a_0;
extern const VlWide<11>/*351:0*/ Vsimu_top__ConstPool__CONST_h9cb4abb4_0;
extern const VlWide<13>/*415:0*/ Vsimu_top__ConstPool__CONST_h7cfd4b27_0;
extern const VlUnpacked<CData/*2:0*/, 32> Vsimu_top__ConstPool__TABLE_hfbff4245_0;
extern const VlUnpacked<IData/*31:0*/, 32> Vsimu_top__ConstPool__TABLE_h14a2fcf8_0;
extern const VlUnpacked<CData/*3:0*/, 1024> Vsimu_top__ConstPool__TABLE_h24f8336e_0;

VL_ATTR_COLD void Vsimu_top___024root___stl_sequent__TOP__0(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ cpu_axi_interface__DOT____VdfgTmp_hf519d2e1__0;
    cpu_axi_interface__DOT____VdfgTmp_hf519d2e1__0 = 0;
    CData/*0:0*/ simu_top__DOT__uart_rx__out__strong__out3;
    simu_top__DOT__uart_rx__out__strong__out3 = 0;
    CData/*0:0*/ simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____VdfgExtracted_h8a9a0f16__0;
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____VdfgExtracted_h8a9a0f16__0 = 0;
    CData/*0:0*/ simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT____VdfgTmp_h6e355132__0;
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT____VdfgTmp_h6e355132__0 = 0;
    CData/*0:0*/ simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____VdfgTmp_h5a92f540__0;
    simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____VdfgTmp_h5a92f540__0 = 0;
    CData/*0:0*/ simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____VdfgTmp_h5966c547__0;
    simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____VdfgTmp_h5966c547__0 = 0;
    CData/*0:0*/ simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____VdfgTmp_h596acb1a__0;
    simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____VdfgTmp_h596acb1a__0 = 0;
    CData/*0:0*/ simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____VdfgTmp_h5076bac2__0;
    simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____VdfgTmp_h5076bac2__0 = 0;
    CData/*0:0*/ simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____VdfgTmp_h5a92f540__0;
    simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____VdfgTmp_h5a92f540__0 = 0;
    CData/*0:0*/ simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____VdfgTmp_h5966c547__0;
    simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____VdfgTmp_h5966c547__0 = 0;
    CData/*0:0*/ simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____VdfgTmp_h596acb1a__0;
    simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____VdfgTmp_h596acb1a__0 = 0;
    CData/*0:0*/ simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____VdfgTmp_h5076bac2__0;
    simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____VdfgTmp_h5076bac2__0 = 0;
    CData/*0:0*/ simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h34d16b8e__0;
    simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h34d16b8e__0 = 0;
    CData/*0:0*/ simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_hb251d2f0__0;
    simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_hb251d2f0__0 = 0;
    CData/*0:0*/ simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h24eed626__0;
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h24eed626__0 = 0;
    CData/*0:0*/ simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h78044575__0;
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h78044575__0 = 0;
    CData/*0:0*/ simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h4078c6a7__0;
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h4078c6a7__0 = 0;
    CData/*0:0*/ simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h7d0af1f5__0;
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h7d0af1f5__0 = 0;
    CData/*0:0*/ simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h136afa62__0;
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h136afa62__0 = 0;
    CData/*0:0*/ simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT____VdfgTmp_hf971e730__0;
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT____VdfgTmp_hf971e730__0 = 0;
    CData/*0:0*/ simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____VdfgTmp_hcfb8fec4__0;
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____VdfgTmp_hcfb8fec4__0 = 0;
    CData/*0:0*/ simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____VdfgTmp_h8af93b88__0;
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____VdfgTmp_h8af93b88__0 = 0;
    CData/*0:0*/ simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____VdfgTmp_hcb11cbc5__0;
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____VdfgTmp_hcb11cbc5__0 = 0;
    CData/*1:0*/ __Vfunc_simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__get_bank_num__7__Vfuncout;
    __Vfunc_simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__get_bank_num__7__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__get_bank_num__7__byte_offset;
    __Vfunc_simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__get_bank_num__7__byte_offset = 0;
    CData/*1:0*/ __Vfunc_simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__get_bank_num__8__Vfuncout;
    __Vfunc_simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__get_bank_num__8__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__get_bank_num__8__byte_offset;
    __Vfunc_simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__get_bank_num__8__byte_offset = 0;
    CData/*1:0*/ __Vfunc_simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__get_bank_num__9__Vfuncout;
    __Vfunc_simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__get_bank_num__9__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__get_bank_num__9__byte_offset;
    __Vfunc_simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__get_bank_num__9__byte_offset = 0;
    CData/*1:0*/ __Vfunc_simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__get_bank_num__10__Vfuncout;
    __Vfunc_simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__get_bank_num__10__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__get_bank_num__10__byte_offset;
    __Vfunc_simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__get_bank_num__10__byte_offset = 0;
    CData/*1:0*/ __Vfunc_simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__get_bank_num__11__Vfuncout;
    __Vfunc_simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__get_bank_num__11__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__get_bank_num__11__byte_offset;
    __Vfunc_simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__get_bank_num__11__byte_offset = 0;
    CData/*1:0*/ __Vfunc_simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__get_bank_num__12__Vfuncout;
    __Vfunc_simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__get_bank_num__12__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__get_bank_num__12__byte_offset;
    __Vfunc_simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__get_bank_num__12__byte_offset = 0;
    CData/*2:0*/ __Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__13__Vfuncout;
    __Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__13__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__13__valid;
    __Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__13__valid = 0;
    CData/*2:0*/ __Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__13__pre_num;
    __Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__13__pre_num = 0;
    CData/*2:0*/ __Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__14__Vfuncout;
    __Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__14__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__14__valid;
    __Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__14__valid = 0;
    CData/*2:0*/ __Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__14__pre_num;
    __Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__14__pre_num = 0;
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*4:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    SData/*9:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*1:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*7:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*7:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    VlWide<3>/*95:0*/ __Vtemp_h2196e189__0;
    VlWide<3>/*95:0*/ __Vtemp_ha76963d1__0;
    VlWide<3>/*95:0*/ __Vtemp_h9f2a52b1__0;
    VlWide<3>/*95:0*/ __Vtemp_h64550be5__0;
    VlWide<3>/*95:0*/ __Vtemp_h042604e3__0;
    VlWide<3>/*95:0*/ __Vtemp_had3b4ddc__0;
    // Body
    vlSelf->num_data = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__num_data;
    vlSelf->open_trace = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__open_trace;
    vlSelf->num_monitor = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__num_monitor;
    vlSelf->confreg_uart_data = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__confreg_uart_data;
    vlSelf->wdata = vlSelf->cpu_axi_interface__DOT__do_wdata_r;
    vlSelf->wstrb = vlSelf->cpu_axi_interface__DOT__do_wstrb_r;
    vlSelf->ram_raddr = vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_csrmsgin[0U] 
        = (((IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__csrmsg_data[2U])) 
                      << 0x26U) | (((QData)((IData)(
                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__csrmsg_data[1U])) 
                                    << 6U) | ((QData)((IData)(
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__csrmsg_data[0U])) 
                                              >> 0x1aU)))) 
            << 0x1aU) | ((0x3f00000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__csrmsg_data[0U]) 
                         | (0x7ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__csrmsg_data[0U])));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_csrmsgin[1U] 
        = (((IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__csrmsg_data[2U])) 
                      << 0x26U) | (((QData)((IData)(
                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__csrmsg_data[1U])) 
                                    << 6U) | ((QData)((IData)(
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__csrmsg_data[0U])) 
                                              >> 0x1aU)))) 
            >> 6U) | ((IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__csrmsg_data[2U])) 
                                 << 0x26U) | (((QData)((IData)(
                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__csrmsg_data[1U])) 
                                               << 6U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__csrmsg_data[0U])) 
                                                 >> 0x1aU))) 
                               >> 0x20U)) << 0x1aU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_csrmsgin[2U] 
        = ((IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__csrmsg_data[2U])) 
                      << 0x26U) | (((QData)((IData)(
                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__csrmsg_data[1U])) 
                                    << 6U) | ((QData)((IData)(
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__csrmsg_data[0U])) 
                                              >> 0x1aU))) 
                    >> 0x20U)) >> 6U);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__dividend_next 
        = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__dividend_reg 
           << 1U);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_way_gen__DOT__lfsr__DOT__lfsr_reg_next 
        = ((6U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_way_gen__DOT__lfsr__DOT__lfsr_reg) 
                  << 1U)) | (1U & VL_REDXOR_32((5U 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_way_gen__DOT__lfsr__DOT__lfsr_reg)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_way_gen__DOT__lfsr__DOT__lfsr_reg_next 
        = ((6U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_way_gen__DOT__lfsr__DOT__lfsr_reg) 
                  << 1U)) | (1U & VL_REDXOR_32((5U 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_way_gen__DOT__lfsr__DOT__lfsr_reg)))));
    vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random_next 
        = ((0x7ffffeU & (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                         << 1U)) | (1U & VL_REDXOR_32(
                                                      (0x420000U 
                                                       & vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random))));
    vlSelf->ram_waddr = vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr;
    vlSelf->ram_wdata = vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wdata;
    vlSelf->led = (0xffffU & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__led_data);
    vlSelf->led_rg0 = (3U & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__led_rg0_data);
    vlSelf->led_rg1 = (3U & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__led_rg1_data);
    if ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state))) {
        vlSelf->btn_key_col = 0U;
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__next_state 
            = ((IData)(((vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__key_count 
                         >> 0x13U) & (~ (IData)((0xfU 
                                                 == (IData)(vlSelf->btn_key_row))))))
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state))) {
        vlSelf->btn_key_col = 0xeU;
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__next_state 
            = ((0xfU == (IData)(vlSelf->btn_key_row))
                ? 2U : 7U);
    } else if ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state))) {
        vlSelf->btn_key_col = 0xdU;
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__next_state 
            = ((0xfU == (IData)(vlSelf->btn_key_row))
                ? 3U : 7U);
    } else if ((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state))) {
        vlSelf->btn_key_col = 0xbU;
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__next_state 
            = ((0xfU == (IData)(vlSelf->btn_key_row))
                ? 4U : 7U);
    } else if ((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state))) {
        vlSelf->btn_key_col = 7U;
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__next_state 
            = ((0xfU == (IData)(vlSelf->btn_key_row))
                ? 0U : 7U);
    } else {
        vlSelf->btn_key_col = 0U;
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__next_state 
            = ((7U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state))
                ? (((vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__key_count 
                     >> 0x13U) & (0xfU == (IData)(vlSelf->btn_key_row)))
                    ? 0U : 7U) : 0U);
    }
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_7 
        = (7U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1 
        = (0xfU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16) 
                   - (IData)(1U)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_0 
        = (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__r_ne 
        = (1U & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                    [(0xfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x15U])][2U] 
                    >> 0x18U)));
    if ((0x1000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
         [(0xfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x15U])][2U])) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__r_vppn 
            = (0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                            [(0xfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x15U])][2U] 
                            << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                        [(0xfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x15U])][1U] 
                                        >> 0x14U)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__r_ps 
            = (0x3fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                        [(0xfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x15U])][2U] 
                        >> 7U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__r_asid 
            = (0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                         [(0xfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x15U])][2U] 
                         >> 0xeU));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__r_phytran0 
            = (0x3ffffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                              [(0xfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x15U])][1U] 
                              << 6U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                        [(0xfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x15U])][0U] 
                                        >> 0x1aU)));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__r_phytran1 
            = (0x3ffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
               [(0xfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x15U])][0U]);
    } else {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__r_vppn = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__r_ps = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__r_asid = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__r_phytran0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__r_phytran1 = 0U;
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__r_g 
        = (IData)(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                    [(0xfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x15U])][2U] 
                    >> 0x18U) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                 [(0xfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x15U])][2U] 
                                 >> 0xdU)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h7fa9a667__0 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_cacheop)) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_uncached));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h5478a6f0__0 
        = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_cacheop)) 
                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_uncached))));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_wdata 
        = (((0U == (0x1fU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__buf_data_ptr) 
                             << 5U))) ? 0U : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__buf_data[
                                              (((IData)(0x1fU) 
                                                + (0x7fU 
                                                   & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__buf_data_ptr) 
                                                      << 5U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__buf_data_ptr) 
                                                      << 5U))))) 
           | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__buf_data[
              (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__buf_data_ptr))] 
              >> (0x1fU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__buf_data_ptr) 
                           << 5U))));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_empty 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr) 
           == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier) 
            >> 1U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5r));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NANDtag 
        = ((IData)(vlSelf->aresetn) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_cmd_valid));
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_key_tmp 
        = (((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
            & (0xeU == (IData)(vlSelf->btn_key_row)))
            ? 1U : (((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                     & (0xdU == (IData)(vlSelf->btn_key_row)))
                     ? 0x10U : (((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                 & (0xbU == (IData)(vlSelf->btn_key_row)))
                                 ? 0x100U : (((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                              & (7U 
                                                 == (IData)(vlSelf->btn_key_row)))
                                              ? 0x1000U
                                              : (((2U 
                                                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                  & (0xeU 
                                                     == (IData)(vlSelf->btn_key_row)))
                                                  ? 2U
                                                  : 
                                                 (((2U 
                                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                   & (0xdU 
                                                      == (IData)(vlSelf->btn_key_row)))
                                                   ? 0x20U
                                                   : 
                                                  (((2U 
                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                    & (0xbU 
                                                       == (IData)(vlSelf->btn_key_row)))
                                                    ? 0x200U
                                                    : 
                                                   (((2U 
                                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                     & (7U 
                                                        == (IData)(vlSelf->btn_key_row)))
                                                     ? 0x2000U
                                                     : 
                                                    (((3U 
                                                       == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                      & (0xeU 
                                                         == (IData)(vlSelf->btn_key_row)))
                                                      ? 4U
                                                      : 
                                                     (((3U 
                                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                       & (0xdU 
                                                          == (IData)(vlSelf->btn_key_row)))
                                                       ? 0x40U
                                                       : 
                                                      (((3U 
                                                         == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                        & (0xbU 
                                                           == (IData)(vlSelf->btn_key_row)))
                                                        ? 0x400U
                                                        : 
                                                       (((3U 
                                                          == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                         & (7U 
                                                            == (IData)(vlSelf->btn_key_row)))
                                                         ? 0x4000U
                                                         : 
                                                        (((4U 
                                                           == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                          & (0xeU 
                                                             == (IData)(vlSelf->btn_key_row)))
                                                          ? 8U
                                                          : 
                                                         (((4U 
                                                            == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                           & (0xdU 
                                                              == (IData)(vlSelf->btn_key_row)))
                                                           ? 0x80U
                                                           : 
                                                          (((4U 
                                                             == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                            & (0xbU 
                                                               == (IData)(vlSelf->btn_key_row)))
                                                            ? 0x800U
                                                            : 
                                                           (((4U 
                                                              == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                             & (7U 
                                                                == (IData)(vlSelf->btn_key_row)))
                                                             ? 0x8000U
                                                             : 0U))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT____VdfgTmp_h194fa2e7__0 
        = ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_number)) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT____VdfgTmp_hdb5c27a8__0 
        = ((1U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_number)) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT____VdfgTmp_hda1c3bf2__0 
        = ((2U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_number)) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT____VdfgTmp_he5337c8c__0 
        = ((3U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_number)) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7 
        = ((0U != (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                   [0U] | (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                           [1U] | (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                   [2U] | (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                           [3U] | (
                                                   vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                   [4U] 
                                                   | (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                      [5U] 
                                                      | (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                         [6U] 
                                                         | (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                            [7U] 
                                                            | (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                               [8U] 
                                                               | (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                  [9U] 
                                                                  | (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                     [0xaU] 
                                                                     | (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                        [0xbU] 
                                                                        | (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                           [0xcU] 
                                                                           | (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                              [0xdU] 
                                                                              | (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xeU] 
                                                                                | vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xfU])))))))))))))))) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_overrun));
    vlSelf->__VdfgTmp_hcd04e225__0 = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom];
    vlSelf->arvalid = ((IData)(vlSelf->cpu_axi_interface__DOT__do_req) 
                       & ((~ (IData)(vlSelf->cpu_axi_interface__DOT__do_wr_r)) 
                          & (~ (IData)(vlSelf->cpu_axi_interface__DOT__addr_rcv))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier) 
           & ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t)) 
              & (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count))));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr_next 
        = (((- (IData)((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst)))) 
            & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr) 
           | (((- (IData)((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst)))) 
               & ((((IData)(1U) + (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr 
                                   >> 2U)) << 2U) | 
                  (3U & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr))) 
              | ((- (IData)((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst)))) 
                 & ((0xffffffc0U & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr) 
                    | ((0x3cU & ((0xfffffffcU & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen)) 
                                                  << 2U) 
                                                 & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)) 
                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen) 
                                     & ((IData)(1U) 
                                        + (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr 
                                           >> 2U))) 
                                    << 2U))) | (3U 
                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr))))));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_next 
        = (((- (IData)((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst)))) 
            & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr) 
           | (((- (IData)((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst)))) 
               & ((((IData)(1U) + (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr 
                                   >> 2U)) << 2U) | 
                  (3U & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr))) 
              | ((- (IData)((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst)))) 
                 & ((0xffffffc0U & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr) 
                    | ((0x3cU & ((0xfffffffcU & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awlen)) 
                                                  << 2U) 
                                                 & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)) 
                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awlen) 
                                     & ((IData)(1U) 
                                        + (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr 
                                           >> 2U))) 
                                    << 2U))) | (3U 
                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr))))));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_next 
        = (((- (IData)((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)))) 
            & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr) 
           | (((- (IData)((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)))) 
               & ((((IData)(1U) + (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr 
                                   >> 2U)) << 2U) | 
                  (3U & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr))) 
              | ((- (IData)((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)))) 
                 & ((0xffffffc0U & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr) 
                    | ((0x3cU & ((0xfffffffcU & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen)) 
                                                  << 2U) 
                                                 & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr)) 
                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen) 
                                     & ((IData)(1U) 
                                        + (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr 
                                           >> 2U))) 
                                    << 2U))) | (3U 
                                                & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr))))));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_next 
        = (((- (IData)((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst)))) 
            & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr) 
           | (((- (IData)((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst)))) 
               & ((((IData)(1U) + (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr 
                                   >> 2U)) << 2U) | 
                  (3U & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr))) 
              | ((- (IData)((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst)))) 
                 & ((0xffffffc0U & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr) 
                    | ((0x3cU & ((0xfffffffcU & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awlen)) 
                                                  << 2U) 
                                                 & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr)) 
                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awlen) 
                                     & ((IData)(1U) 
                                        + (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr 
                                           >> 2U))) 
                                    << 2U))) | (3U 
                                                & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr))))));
    __Vtableidx5 = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value 
        = Vsimu_top__ConstPool__TABLE_ha6e7b954_0[__Vtableidx5];
    __Vtableidx8 = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value 
        = Vsimu_top__ConstPool__TABLE_hb86679b4_0[__Vtableidx8];
    vlSelf->inst_rdata = vlSelf->rdata;
    vlSelf->araddr = vlSelf->cpu_axi_interface__DOT__do_addr_r;
    vlSelf->arsize = vlSelf->cpu_axi_interface__DOT__do_size_r;
    vlSelf->data_addr_ok = (1U & (~ (IData)(vlSelf->cpu_axi_interface__DOT__do_req)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier) 
            >> 2U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr1r) 
                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr2r) 
                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr3r) 
                            | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr4r)))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_push_pulse 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push_q)) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[1U] 
        = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_bresp;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[4U] 
        = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_bresp;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[1U] 
        = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rresp;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[4U] 
        = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rresp;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_next 
        = (0x1ffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_cnt) 
                     + (0xffU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl 
                                 >> 0x10U))));
    __Vtableidx4 = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fcr;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__trigger_level 
        = Vsimu_top__ConstPool__TABLE_h7eaf993d_0[__Vtableidx4];
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[0U] 
        = vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_data;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[1U] 
        = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_bid;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[2U] 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_w_id;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[3U] 
        = vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_data;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[4U] 
        = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_bid;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[0U] 
        = vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rid;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[1U] 
        = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rid;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[2U] 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_r_id;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[3U] 
        = vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rid;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[4U] 
        = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rid;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT____VdfgTmp_hea0d93a3__0 
        = (1U & ((0x10000000U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0)
                  ? (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r1)
                  : ((0x20000000U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0)
                      ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r1) 
                         >> 1U) : ((0x40000000U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0)
                                    ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r1) 
                                       >> 2U) : ((~ 
                                                  (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0 
                                                   >> 0x1fU)) 
                                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r1) 
                                                    >> 3U))))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT____VdfgTmp_h2fe3549b__0 
        = (1U & ((0x100000U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0)
                  ? (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r1)
                  : ((0x200000U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0)
                      ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r1) 
                         >> 1U) : ((0x400000U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0)
                                    ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r1) 
                                       >> 2U) : ((~ 
                                                  (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0 
                                                   >> 0x17U)) 
                                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r1) 
                                                    >> 3U))))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT____VdfgTmp_h559fe0c2__0 
        = (1U & ((0x1000U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0)
                  ? (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r1)
                  : ((0x2000U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0)
                      ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r1) 
                         >> 1U) : ((0x4000U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0)
                                    ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r1) 
                                       >> 2U) : ((~ 
                                                  (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0 
                                                   >> 0xfU)) 
                                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r1) 
                                                    >> 3U))))));
    cpu_axi_interface__DOT____VdfgTmp_hf519d2e1__0 
        = ((IData)(vlSelf->cpu_axi_interface__DOT__do_req) 
           & (IData)(vlSelf->cpu_axi_interface__DOT__do_wr_r));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank__dout 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__ram_
        [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__addr_reg];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank__dout 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__ram_
        [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__addr_reg];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__bank__BRA__1__KET____DOT__bank__dout 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__ram_
        [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__addr_reg];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__bank__BRA__0__KET____DOT__bank__dout 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__ram_
        [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__addr_reg];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank__dout 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__ram_
        [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__addr_reg];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank__dout 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__ram_
        [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__addr_reg];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__bank__BRA__1__KET____DOT__bank__dout 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__ram_
        [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__addr_reg];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__bank__BRA__0__KET____DOT__bank__dout 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__ram_
        [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__addr_reg];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__idle_to_aw_w 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__buf_empty)) 
           & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__state)));
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____VdfgTmp_hcb11cbc5__0 
        = ((~ (IData)((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt)))) 
           & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_out 
        = ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
               >> 6U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp));
    if ((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr))) {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____VdfgTmp_h84138141__0 
            = ((0xcU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                        << 2U)) | ((2U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                          >> 1U)) | 
                                   (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                          >> 3U))));
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_in 
            = (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_out));
    } else {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____VdfgTmp_h84138141__0 
            = ((IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI) 
               << 1U);
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_in 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_pol)
                      ? (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__srx_pad))
                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__srx_pad)));
    }
    vlSelf->cpu_axi_interface__DOT__data_back = ((IData)(vlSelf->cpu_axi_interface__DOT__addr_rcv) 
                                                 & (((IData)(vlSelf->rready) 
                                                     & (IData)(vlSelf->rvalid)) 
                                                    | ((IData)(vlSelf->bready) 
                                                       & (IData)(vlSelf->bvalid))));
    __Vtemp_h2196e189__0[0U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__dividend_reg;
    __Vtemp_h2196e189__0[1U] = (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__minuend);
    __Vtemp_h2196e189__0[2U] = (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__minuend 
                                        >> 0x20U));
    VL_SHIFTL_WWI(65,65,32, __Vtemp_ha76963d1__0, __Vtemp_h2196e189__0, 1U);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__minuend_shifted 
        = (0x1ffffffffULL & (((QData)((IData)((1U & 
                                               __Vtemp_ha76963d1__0[2U]))) 
                              << 0x20U) | (QData)((IData)(
                                                          __Vtemp_ha76963d1__0[1U]))));
    vlSelf->__VdfgTmp_ha5fa42eb__0[0U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__ram_
        [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__addr_reg];
    vlSelf->__VdfgTmp_ha5fa42eb__0[1U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__ram_
        [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__addr_reg];
    vlSelf->__VdfgTmp_ha5fa42eb__0[2U] = (IData)((((QData)((IData)(
                                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__ram_
                                                                   [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__addr_reg])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__ram_
                                                                    [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__addr_reg]))));
    vlSelf->__VdfgTmp_ha5fa42eb__0[3U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__ram_
                                                                    [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__addr_reg])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__ram_
                                                                     [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__addr_reg]))) 
                                                  >> 0x20U));
    vlSelf->__VdfgTmp_hfea590d9__0[0U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__ram_
        [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__addr_reg];
    vlSelf->__VdfgTmp_hfea590d9__0[1U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__ram_
        [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__addr_reg];
    vlSelf->__VdfgTmp_hfea590d9__0[2U] = (IData)((((QData)((IData)(
                                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__ram_
                                                                   [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__addr_reg])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__ram_
                                                                    [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__addr_reg]))));
    vlSelf->__VdfgTmp_hfea590d9__0[3U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__ram_
                                                                    [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__addr_reg])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__ram_
                                                                     [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__addr_reg]))) 
                                                  >> 0x20U));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT____VdfgTmp_hd44064a5__0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time) 
           == (7U & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__repeat_reg))));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen_last 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen) 
           == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rcur));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen_last 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen) 
           == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank_out[0U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__ram_
        [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__addr_reg];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank_out[1U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__ram_
        [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__addr_reg];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank_out[2U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__ram_
        [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__addr_reg];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank_out[3U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__ram_
        [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__addr_reg];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank_out[0U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__ram_
        [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__addr_reg];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank_out[1U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__ram_
        [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__addr_reg];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank_out[2U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__ram_
        [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__addr_reg];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank_out[3U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__ram_
        [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__addr_reg];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank_out[0U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__ram_
        [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__addr_reg];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank_out[1U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__ram_
        [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__addr_reg];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank_out[2U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__ram_
        [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__addr_reg];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank_out[3U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__ram_
        [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__addr_reg];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank_out[0U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__ram_
        [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__addr_reg];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank_out[1U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__ram_
        [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__addr_reg];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank_out[2U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__ram_
        [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__addr_reg];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank_out[3U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__ram_
        [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__addr_reg];
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____VdfgTmp_h8af93b88__0 
        = ((0U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg))) 
           | (1U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg))));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_awready) 
            << 4U) | ((8U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid)) 
                             << 3U)) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_awready) 
                                         << 2U) | (
                                                   ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_awready) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid)))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[0x1fU] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf
        [0x1fU];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[0x1eU] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf
        [0x1eU];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[0x1dU] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf
        [0x1dU];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[0x1cU] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf
        [0x1cU];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[0x1bU] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf
        [0x1bU];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[0x1aU] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf
        [0x1aU];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[0x19U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf
        [0x19U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[0x18U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf
        [0x18U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[0x17U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf
        [0x17U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[0x16U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf
        [0x16U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[0x15U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf
        [0x15U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[0x14U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf
        [0x14U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[0x13U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf
        [0x13U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[0x12U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf
        [0x12U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[0x11U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf
        [0x11U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[0x10U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf
        [0x10U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[0xfU] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf
        [0xfU];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[0xeU] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf
        [0xeU];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[0xdU] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf
        [0xdU];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[0xcU] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf
        [0xcU];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[0xbU] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf
        [0xbU];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[0xaU] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf
        [0xaU];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[9U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf
        [9U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[8U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf
        [8U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[7U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf
        [7U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[6U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf
        [6U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[5U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf
        [5U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[4U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf
        [4U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[3U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf
        [3U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[2U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf
        [2U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[1U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf
        [1U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[0U] 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf
        [0U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__error_inst_in_if 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__pipeline_valid) 
            & (((IData)(4U) + (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__pipeline_data 
                                       >> 0x20U))) 
               == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__pipeline_data)) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__pipeline_valid));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__w_last 
        = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__buf_burst)) 
                 | (3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__buf_data_ptr))));
    __Vfunc_simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__get_bank_num__8__byte_offset 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_offset;
    __Vfunc_simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__get_bank_num__8__Vfuncout 
        = (3U & ((IData)(__Vfunc_simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__get_bank_num__8__byte_offset) 
                 >> 2U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_bank_num 
        = __Vfunc_simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__get_bank_num__8__Vfuncout;
    __Vfunc_simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__get_bank_num__11__byte_offset 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_offset;
    __Vfunc_simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__get_bank_num__11__Vfuncout 
        = (3U & ((IData)(__Vfunc_simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__get_bank_num__11__byte_offset) 
                 >> 2U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_bank_num 
        = __Vfunc_simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__get_bank_num__11__Vfuncout;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_he5eb326c__0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_index) 
           == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_buf_index));
    vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h765eb7cb__0 
        = (1U & ((~ (IData)(vlSelf->enable_delay)) 
                 | (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                    >> 2U)));
    vlSelf->uart_rx__en0 = ((2U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg))) 
                            | (3U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wb_way 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wb_ways) 
           & (- (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wb_ways)));
    vlSelf->simu_top__DOT__soc__DOT__cpu_wvalid = (
                                                   (1U 
                                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__state)) 
                                                   | (3U 
                                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__state)));
    vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h4bbe5f71__0 
        = (1U & ((~ (IData)(vlSelf->enable_delay)) 
                 | ((vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                     >> 4U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_w_disable))));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_dir 
        = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram
        [(1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr))];
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr) 
           == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr));
    simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_hb251d2f0__0 
        = (1U & ((~ (IData)(vlSelf->enable_delay)) 
                 | ((vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                     >> 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw_disable))));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr) 
           == ((2U & ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr) 
                          >> 1U)) << 1U)) | (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr))));
    __Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__14__pre_num 
        = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_pre_sel;
    __Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__14__valid 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_bvalid) 
            << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid));
    __Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__14__Vfuncout 
        = ((1U == (IData)(__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__14__valid))
            ? 3U : ((2U == (IData)(__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__14__valid))
                     ? 4U : ((4U == (IData)(__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__14__valid))
                              ? 5U : ((3U == (IData)(__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__14__valid))
                                       ? ((3U != (IData)(__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__14__pre_num))
                                           ? 3U : 4U)
                                       : ((6U == (IData)(__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__14__valid))
                                           ? ((4U != (IData)(__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__14__pre_num))
                                               ? 4U
                                               : 5U)
                                           : ((5U == (IData)(__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__14__valid))
                                               ? ((5U 
                                                   != (IData)(__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__14__pre_num))
                                                   ? 5U
                                                   : 3U)
                                               : ((7U 
                                                   == (IData)(__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__14__valid))
                                                   ? 
                                                  ((3U 
                                                    == (IData)(__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__14__pre_num))
                                                    ? 4U
                                                    : 
                                                   ((4U 
                                                     == (IData)(__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__14__pre_num))
                                                     ? 5U
                                                     : 3U))
                                                   : 7U)))))));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_1 
        = __Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__14__Vfuncout;
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_allow_out 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid)) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_valid));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__invalidate_ways 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_cacheop_hit)
            ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_hit_way)
            : 3U);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__invalidate_ways 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_cacheop_hit)
            ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_hit_way)
            : 3U);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_allow_out 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid)) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_valid));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__bvalid_group_0 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_bvalid) 
            << 2U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_bvalid) 
                       << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__d_index 
        = ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state))
            ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_index)
            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_index));
    __Vfunc_simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__get_bank_num__12__byte_offset 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_offset;
    __Vfunc_simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__get_bank_num__12__Vfuncout 
        = (3U & ((IData)(__Vfunc_simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__get_bank_num__12__byte_offset) 
                 >> 2U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_bank_num 
        = __Vfunc_simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__get_bank_num__12__Vfuncout;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__wr_mux__DOT__and_gates__BRA__1__KET____DOT__or_result 
        = (((- (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__buf_burst))) 
            & (0x903fULL | ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__buf_addr)) 
                            << 0x11U))) | ((- (QData)((IData)(
                                                              (1U 
                                                               & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__buf_burst)))))) 
                                           & (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__buf_addr)) 
                                               << 0x11U) 
                                              | (QData)((IData)(
                                                                (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__buf_size) 
                                                                  << 0xeU) 
                                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__buf_strb)))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__dirty_miss_to_replace 
        = ((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__buf_empty));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_he5eb326c__0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_index) 
           == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_buf_index));
    __Vfunc_simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__get_bank_num__9__byte_offset 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_offset;
    __Vfunc_simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__get_bank_num__9__Vfuncout 
        = (3U & ((IData)(__Vfunc_simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__get_bank_num__9__byte_offset) 
                 >> 2U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_bank_num 
        = __Vfunc_simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__get_bank_num__9__Vfuncout;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_arready) 
            << 4U) | ((8U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid)) 
                             << 3U)) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_arready) 
                                         << 2U) | (
                                                   ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_arready) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid)))))));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[0U] 
        = vlSelf->ram_rdata;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[1U] 
        = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rdata;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[3U] 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_rdata_reg;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[4U] 
        = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rdata;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[2U] 
        = ((0U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb)))
            ? vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32
            : ((1U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb)))
                ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                   << 8U) : ((2U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb)))
                              ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                                 << 0x10U) : ((3U == 
                                               (3U 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb)))
                                               ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                                                  << 0x18U)
                                               : 0U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_h0ea5640d__0 
        = ((5U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_cacheop));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h0ea5640d__0 
        = ((5U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_cacheop));
    simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h34d16b8e__0 
        = (1U & ((~ (IData)(vlSelf->enable_delay)) 
                 | (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_ar_disable))));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr) 
           == ((2U & ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr) 
                          >> 1U)) << 1U)) | (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_hbe37574e__0 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_cacheop)) 
           & (5U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_hbe37574e__0 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_cacheop)) 
           & (5U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wb_way 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wb_ways) 
           & (- (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wb_ways)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____Vcellout__way__BRA__0__KET____DOT__tag_v__dout 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__tag_v__DOT__ram_
        [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__tag_v__DOT__addr_reg];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__tag_v__dout 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__tag_v__DOT__ram_
        [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__tag_v__DOT__addr_reg];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__d_index 
        = ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state))
            ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_index)
            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_index));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_hbe0a95ac__0 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_cacheop)) 
           & (4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_tag_mux__DOT__and_gates__BRA__1__KET____DOT__or_result 
        = (((- (IData)((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)))) 
            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_tag) 
           | ((- (IData)((5U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)))) 
              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_tag_new));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_hbe0a95ac__0 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_cacheop)) 
           & (4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rlast) 
            << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rlast) 
                       << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_rlast) 
                                  << 2U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rlast) 
                                             << 1U) 
                                            | (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rlast)))));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rvalid) 
            << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rvalid) 
                       << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_rvalid) 
                                  << 2U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rvalid) 
                                             << 1U) 
                                            | (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rvalid)))));
    vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h76518f96__0 
        = (1U & ((~ (IData)(vlSelf->enable_delay)) 
                 | (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                    >> 3U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____Vcellout__way__BRA__0__KET____DOT__tag_v__dout 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__tag_v__DOT__ram_
        [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__tag_v__DOT__addr_reg];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__tag_v__dout 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__tag_v__DOT__ram_
        [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__tag_v__DOT__addr_reg];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_tag_mux__DOT__and_gates__BRA__1__KET____DOT__or_result 
        = (((- (IData)((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)))) 
            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_tag) 
           | ((- (IData)((5U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)))) 
              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_tag_new));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_sel 
        = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram
        [(1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr))];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__pipeline_valid)
            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__pipeline_data
            : 0x100000ULL);
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_valid) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[0U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[1U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[1U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[2U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[3U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[3U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[4U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[4U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[5U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[5U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[6U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[6U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[7U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[7U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[8U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[8U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[9U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[9U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xaU] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[0xaU];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xbU] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[0xbU];
    } else {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0U] 
            = Vsimu_top__ConstPool__CONST_hbc413d5a_0[0U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[1U] 
            = Vsimu_top__ConstPool__CONST_hbc413d5a_0[1U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U] 
            = Vsimu_top__ConstPool__CONST_hbc413d5a_0[2U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[3U] 
            = Vsimu_top__ConstPool__CONST_hbc413d5a_0[3U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[4U] 
            = Vsimu_top__ConstPool__CONST_hbc413d5a_0[4U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[5U] 
            = Vsimu_top__ConstPool__CONST_hbc413d5a_0[5U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[6U] 
            = Vsimu_top__ConstPool__CONST_hbc413d5a_0[6U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[7U] 
            = Vsimu_top__ConstPool__CONST_hbc413d5a_0[7U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[8U] 
            = Vsimu_top__ConstPool__CONST_hbc413d5a_0[8U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[9U] 
            = Vsimu_top__ConstPool__CONST_hbc413d5a_0[9U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xaU] 
            = Vsimu_top__ConstPool__CONST_hbc413d5a_0[0xaU];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xbU] 
            = Vsimu_top__ConstPool__CONST_hbc413d5a_0[0xbU];
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[0U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[1U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[1U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[2U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[3U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[3U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[4U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[4U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[5U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[6U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[6U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[7U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[8U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[8U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[9U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[9U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[0xaU];
    } else {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0U] 
            = Vsimu_top__ConstPool__CONST_h9cb4abb4_0[0U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[1U] 
            = Vsimu_top__ConstPool__CONST_h9cb4abb4_0[1U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U] 
            = Vsimu_top__ConstPool__CONST_h9cb4abb4_0[2U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[3U] 
            = Vsimu_top__ConstPool__CONST_h9cb4abb4_0[3U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[4U] 
            = Vsimu_top__ConstPool__CONST_h9cb4abb4_0[4U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
            = Vsimu_top__ConstPool__CONST_h9cb4abb4_0[5U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[6U] 
            = Vsimu_top__ConstPool__CONST_h9cb4abb4_0[6U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[7U] 
            = Vsimu_top__ConstPool__CONST_h9cb4abb4_0[7U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[8U] 
            = Vsimu_top__ConstPool__CONST_h9cb4abb4_0[8U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[9U] 
            = Vsimu_top__ConstPool__CONST_h9cb4abb4_0[9U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU] 
            = Vsimu_top__ConstPool__CONST_h9cb4abb4_0[0xaU];
    }
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_valid) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[0U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[0U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[1U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[1U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[2U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[3U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[4U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[4U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[5U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[5U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[6U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[6U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[7U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[7U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[8U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[8U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[9U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[9U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[0xaU] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[0xaU];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[0xbU] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[0xbU];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[0xcU] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[0xcU];
    } else {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[0U] 
            = Vsimu_top__ConstPool__CONST_h7cfd4b27_0[0U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[1U] 
            = Vsimu_top__ConstPool__CONST_h7cfd4b27_0[1U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U] 
            = Vsimu_top__ConstPool__CONST_h7cfd4b27_0[2U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
            = Vsimu_top__ConstPool__CONST_h7cfd4b27_0[3U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[4U] 
            = Vsimu_top__ConstPool__CONST_h7cfd4b27_0[4U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[5U] 
            = Vsimu_top__ConstPool__CONST_h7cfd4b27_0[5U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[6U] 
            = Vsimu_top__ConstPool__CONST_h7cfd4b27_0[6U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[7U] 
            = Vsimu_top__ConstPool__CONST_h7cfd4b27_0[7U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[8U] 
            = Vsimu_top__ConstPool__CONST_h7cfd4b27_0[8U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[9U] 
            = Vsimu_top__ConstPool__CONST_h7cfd4b27_0[9U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[0xaU] 
            = Vsimu_top__ConstPool__CONST_h7cfd4b27_0[0xaU];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[0xbU] 
            = Vsimu_top__ConstPool__CONST_h7cfd4b27_0[0xbU];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[0xcU] 
            = Vsimu_top__ConstPool__CONST_h7cfd4b27_0[0xcU];
    }
    vlSelf->data_rdata = vlSelf->inst_rdata;
    vlSelf->awaddr = vlSelf->araddr;
    vlSelf->awsize = vlSelf->arsize;
    vlSelf->inst_addr_ok = ((IData)(vlSelf->data_addr_ok) 
                            & (~ (IData)(vlSelf->data_req)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0 
        = ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count)) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_push_pulse));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_toggle 
        = (1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_cnt) 
                  ^ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_next)) 
                 >> 8U));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count) 
              >= (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__trigger_level)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY 
        = (1U & ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_number))
                  ? (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r1)
                  : ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_number))
                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT____VdfgTmp_h559fe0c2__0)
                      : ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_number))
                          ? (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT____VdfgTmp_h2fe3549b__0)
                          : ((3U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_number)) 
                             | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT____VdfgTmp_hea0d93a3__0))))));
    vlSelf->awvalid = ((~ (IData)(vlSelf->cpu_axi_interface__DOT__addr_rcv)) 
                       & (IData)(cpu_axi_interface__DOT____VdfgTmp_hf519d2e1__0));
    vlSelf->wvalid = ((~ (IData)(vlSelf->cpu_axi_interface__DOT__wdata_rcv)) 
                      & (IData)(cpu_axi_interface__DOT____VdfgTmp_hf519d2e1__0));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6 
        = ((IData)(simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____VdfgTmp_hcb11cbc5__0) 
           & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate)));
    vlSelf->inst_data_ok = ((IData)(vlSelf->cpu_axi_interface__DOT__do_req) 
                            & ((~ (IData)(vlSelf->cpu_axi_interface__DOT__do_req_or)) 
                               & (IData)(vlSelf->cpu_axi_interface__DOT__data_back)));
    vlSelf->data_data_ok = ((IData)(vlSelf->cpu_axi_interface__DOT__do_req) 
                            & ((IData)(vlSelf->cpu_axi_interface__DOT__do_req_or) 
                               & (IData)(vlSelf->cpu_axi_interface__DOT__data_back)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_datai 
        = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)
                     ? vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_wdata_dma
                     : (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datai_cpu)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_datai 
        = ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)
              ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_wdata_dma 
                 >> 8U) : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_high_24b_wr) 
            << 8U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_datai));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__line_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[0U] 
        = (((- (IData)((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_replace_way) 
                              >> 1U)))) & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__bank__BRA__0__KET____DOT__bank__dout) 
           | ((- (IData)((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_replace_way)))) 
              & vlSelf->__VdfgTmp_ha5fa42eb__0[0U]));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__line_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[1U] 
        = (((- (IData)((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_replace_way) 
                              >> 1U)))) & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__bank__BRA__1__KET____DOT__bank__dout) 
           | ((- (IData)((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_replace_way)))) 
              & vlSelf->__VdfgTmp_ha5fa42eb__0[1U]));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__line_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[2U] 
        = (((- (IData)((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_replace_way) 
                              >> 1U)))) & (IData)((
                                                   ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank__dout)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank__dout))))) 
           | ((- (IData)((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_replace_way)))) 
              & vlSelf->__VdfgTmp_ha5fa42eb__0[2U]));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__line_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[3U] 
        = (((- (IData)((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_replace_way) 
                              >> 1U)))) & (IData)((
                                                   (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank__dout)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank__dout))) 
                                                   >> 0x20U))) 
           | ((- (IData)((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_replace_way)))) 
              & vlSelf->__VdfgTmp_ha5fa42eb__0[3U]));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__line_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[0U] 
        = (((- (IData)((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_replace_way) 
                              >> 1U)))) & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__bank__BRA__0__KET____DOT__bank__dout) 
           | ((- (IData)((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_replace_way)))) 
              & vlSelf->__VdfgTmp_hfea590d9__0[0U]));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__line_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[1U] 
        = (((- (IData)((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_replace_way) 
                              >> 1U)))) & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__bank__BRA__1__KET____DOT__bank__dout) 
           | ((- (IData)((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_replace_way)))) 
              & vlSelf->__VdfgTmp_hfea590d9__0[1U]));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__line_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[2U] 
        = (((- (IData)((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_replace_way) 
                              >> 1U)))) & (IData)((
                                                   ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank__dout)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank__dout))))) 
           | ((- (IData)((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_replace_way)))) 
              & vlSelf->__VdfgTmp_hfea590d9__0[2U]));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__line_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[3U] 
        = (((- (IData)((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_replace_way) 
                              >> 1U)))) & (IData)((
                                                   (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank__dout)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank__dout))) 
                                                   >> 0x20U))) 
           | ((- (IData)((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_replace_way)))) 
              & vlSelf->__VdfgTmp_hfea590d9__0[3U]));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tx_en 
        = ((IData)(simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____VdfgTmp_h8af93b88__0) 
           | ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                  >> 2U)) & (IData)(vlSelf->uart_rx__en0)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5 
        = (((~ (IData)(vlSelf->uart_rx__en0)) | ((0U 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate)) 
                                                 & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error)) 
                                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error) 
                                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT____VdfgTmp_hd44064a5__0))))) 
           & (IData)(simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____VdfgTmp_hcb11cbc5__0));
    simu_top__DOT__uart_rx__out__strong__out3 = ((IData)(vlSelf->uart_rx__en0) 
                                                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_reg) 
                                                    ^ 
                                                    ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                                                     >> 3U)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__max_repeat_time 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT____VdfgTmp_hd44064a5__0) 
           & ((IData)(vlSelf->uart_rx__en0) & (2U == 
                                               (3U 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__rx_en 
        = ((IData)(simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____VdfgTmp_h8af93b88__0) 
           | ((IData)(vlSelf->uart_rx__en0) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                                               >> 2U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wr_data_cacheop_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[0U] 
        = (((- (IData)((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wb_way) 
                              >> 1U)))) & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_read_lines[4U]) 
           | ((- (IData)((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wb_way)))) 
              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_read_lines[0U]));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wr_data_cacheop_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[1U] 
        = (((- (IData)((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wb_way) 
                              >> 1U)))) & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_read_lines[5U]) 
           | ((- (IData)((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wb_way)))) 
              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_read_lines[1U]));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wr_data_cacheop_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[2U] 
        = (((- (IData)((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wb_way) 
                              >> 1U)))) & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_read_lines[6U]) 
           | ((- (IData)((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wb_way)))) 
              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_read_lines[2U]));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wr_data_cacheop_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[3U] 
        = (((- (IData)((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wb_way) 
                              >> 1U)))) & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_read_lines[7U]) 
           | ((- (IData)((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wb_way)))) 
              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_read_lines[3U]));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wr_addr_cacheop_tag_mux__DOT__and_gates__BRA__1__KET____DOT__or_result 
        = (0xfffffU & (((- (IData)((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wb_way) 
                                          >> 1U)))) 
                        & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_read_tags 
                                   >> 0x14U))) | ((- (IData)(
                                                             (1U 
                                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wb_way)))) 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_read_tags))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wb_ways_next 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wb_way)) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wb_ways));
    vlSelf->simu_top__DOT__soc__DOT__m0_wvalid = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_wvalid) 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h4bbe5f71__0));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h4078c6a7__0 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty)) 
           & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_dir)));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit)) 
           | (IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h4078c6a7__0));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h4078c6a7__0 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty)) 
           & (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_dir)));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit 
        = ((0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h4078c6a7__0) 
              << 1U));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h4078c6a7__0 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty)) 
           & (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_dir)));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit 
        = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h4078c6a7__0) 
              << 2U));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h4078c6a7__0 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty)) 
           & (3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_dir)));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h4078c6a7__0) 
              << 3U));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h4078c6a7__0 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty)) 
           & (4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_dir)));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit 
        = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h4078c6a7__0) 
              << 4U));
    vlSelf->simu_top__DOT__soc__DOT__m0_awvalid = (
                                                   ((1U 
                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__state)) 
                                                    | (2U 
                                                       == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__state))) 
                                                   & (IData)(simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_hb251d2f0__0));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wvalid) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_allow_out) 
              & (IData)(vlSelf->aresetn)));
    vlSelf->simu_top__DOT__soc__DOT__s0_wready = (1U 
                                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wvalid)) 
                                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_allow_out)));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wvalid) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_allow_out) 
              & (IData)(vlSelf->aresetn)));
    vlSelf->simu_top__DOT__soc__DOT__conf_s_wready 
        = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wvalid)) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_allow_out)));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_bvalid) 
            << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid) 
                       << 3U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__bvalid_group_0)));
    __Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__13__pre_num 
        = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_pre_sel;
    __Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__13__valid 
        = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__bvalid_group_0;
    __Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__13__Vfuncout 
        = ((1U == (IData)(__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__13__valid))
            ? 0U : ((2U == (IData)(__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__13__valid))
                     ? 1U : ((4U == (IData)(__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__13__valid))
                              ? 2U : ((3U == (IData)(__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__13__valid))
                                       ? ((0U != (IData)(__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__13__pre_num))
                                           ? 0U : 1U)
                                       : ((6U == (IData)(__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__13__valid))
                                           ? ((1U != (IData)(__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__13__pre_num))
                                               ? 1U
                                               : 2U)
                                           : ((5U == (IData)(__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__13__valid))
                                               ? ((2U 
                                                   != (IData)(__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__13__pre_num))
                                                   ? 2U
                                                   : 0U)
                                               : ((7U 
                                                   == (IData)(__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__13__valid))
                                                   ? 
                                                  ((0U 
                                                    == (IData)(__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__13__pre_num))
                                                    ? 1U
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__13__pre_num))
                                                     ? 2U
                                                     : 0U))
                                                   : 7U)))))));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_0 
        = __Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__13__Vfuncout;
    vlSelf->__VdfgTmp_h966d58da__0 = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__d[
                                            ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__d_index) 
                                             >> 5U)] 
                                            >> (0x1fU 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__d_index))));
    vlSelf->__VdfgTmp_hfd5d21d5__0 = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__d[
                                            ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__d_index) 
                                             >> 5U)] 
                                            >> (0x1fU 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__d_index))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_requested_word 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_buf_ptr) 
           == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_bank_num));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_push_data 
        = (((QData)((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__wr_mux__DOT__and_gates__BRA__1__KET____DOT__or_result 
                             >> 0x11U))) << 0xdU) | (QData)((IData)(
                                                                    ((0x1800U 
                                                                      & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__wr_mux__DOT__and_gates__BRA__1__KET____DOT__or_result 
                                                                                >> 0xcU)) 
                                                                         << 0xbU)) 
                                                                     | ((0x700U 
                                                                         & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__wr_mux__DOT__and_gates__BRA__1__KET____DOT__or_result 
                                                                                >> 0xeU)) 
                                                                            << 8U)) 
                                                                        | (0xf0U 
                                                                           & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__wr_mux__DOT__and_gates__BRA__1__KET____DOT__or_result 
                                                                                >> 4U)) 
                                                                              << 4U)))))));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____VdfgTmp_h9973e968__0 
        = ((0x1fafU == (0x1fffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__wr_mux__DOT__and_gates__BRA__1__KET____DOT__or_result 
                                           >> 0x21U)))) 
           | (0x1fd0U == (0x1fffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__wr_mux__DOT__and_gates__BRA__1__KET____DOT__or_result 
                                             >> 0x21U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__refill_requested_word 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__refill_buf_ptr) 
           == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_bank_num));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wr_data_cacheop_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[0U] 
        = (((- (IData)((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wb_way) 
                              >> 1U)))) & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_read_lines[4U]) 
           | ((- (IData)((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wb_way)))) 
              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_read_lines[0U]));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wr_data_cacheop_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[1U] 
        = (((- (IData)((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wb_way) 
                              >> 1U)))) & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_read_lines[5U]) 
           | ((- (IData)((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wb_way)))) 
              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_read_lines[1U]));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wr_data_cacheop_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[2U] 
        = (((- (IData)((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wb_way) 
                              >> 1U)))) & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_read_lines[6U]) 
           | ((- (IData)((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wb_way)))) 
              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_read_lines[2U]));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wr_data_cacheop_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[3U] 
        = (((- (IData)((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wb_way) 
                              >> 1U)))) & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_read_lines[7U]) 
           | ((- (IData)((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wb_way)))) 
              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_read_lines[3U]));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wr_addr_cacheop_tag_mux__DOT__and_gates__BRA__1__KET____DOT__or_result 
        = (0xfffffU & (((- (IData)((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wb_way) 
                                          >> 1U)))) 
                        & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_read_tags 
                                   >> 0x14U))) | ((- (IData)(
                                                             (1U 
                                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wb_way)))) 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_read_tags))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wb_ways_next 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wb_way)) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wb_ways));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__tag_mux__DOT__and_gates__BRA__1__KET____DOT__or_result 
        = (0xfffffU & (((- (IData)((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_replace_way) 
                                          >> 1U)))) 
                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__tag_v__dout 
                           >> 1U)) | ((- (IData)((1U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_replace_way)))) 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____Vcellout__way__BRA__0__KET____DOT__tag_v__dout 
                                         >> 1U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__v_ways 
        = ((2U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__tag_v__dout 
                  << 1U)) | (1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____Vcellout__way__BRA__0__KET____DOT__tag_v__dout));
    vlSelf->__VdfgTmp_h208b8f36__0 = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__d[
                                            ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__d_index) 
                                             >> 5U)] 
                                            >> (0x1fU 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__d_index))));
    vlSelf->__VdfgTmp_haa7259b7__0 = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__d[
                                            ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__d_index) 
                                             >> 5U)] 
                                            >> (0x1fU 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__d_index))));
    if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant) {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_rw 
            = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_rw_dma;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_enab 
            = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_dma;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_psel 
            = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_dma;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr 
            = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_addr_dma;
    } else {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_rw 
            = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_enab 
            = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_psel 
            = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr 
            = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr;
    }
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_word_trans_cpu 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)) 
           & (0U != (0x3fU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr 
                              >> 0xeU))));
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____VdfgTmp_hcfb8fec4__0 
        = ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
               >> 7U)) & (0U == (7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_datao 
        = (0xffU & ((4U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)
                     ? ((2U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)
                         ? ((1U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)
                             ? ((0x80U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))
                                 ? (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fi_di_reg)
                                 : (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg))
                             : (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr))
                         : ((1U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)
                             ? (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7r) 
                                 << 7U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6r) 
                                            << 6U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5r) 
                                               << 5U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr4r) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr3r) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr2r) 
                                                        << 2U) 
                                                       | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr1r) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0r))))))))
                             : 0U)) : ((2U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)
                                        ? ((1U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)
                                            ? (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr)
                                            : ((0x80U 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))
                                                ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl 
                                                   >> 0x10U)
                                                : (0xc0U 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir))))
                                        : ((1U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)
                                            ? ((0x80U 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))
                                                ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl 
                                                   >> 8U)
                                                : (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier))
                                            : ((0x80U 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))
                                                ? vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl
                                                : (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__data8_out))))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_ack 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_enab) 
           & (0U == (0xfc000U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_ack 
        = ((0U != (0x3fU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr 
                            >> 0xeU))) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_enab));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel 
        = ((0U != (0x3fU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr 
                            >> 0xeU))) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_psel));
    vlSelf->__VdfgTmp_hf20fd9bb__0 = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__tag_v__dout 
                                      & ((0xfffffU 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__tag_v__dout 
                                             >> 1U)) 
                                         == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_tag_mux__DOT__and_gates__BRA__1__KET____DOT__or_result));
    vlSelf->__VdfgTmp_hce404a6e__0 = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____Vcellout__way__BRA__0__KET____DOT__tag_v__dout 
                                      & ((0xfffffU 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____Vcellout__way__BRA__0__KET____DOT__tag_v__dout 
                                             >> 1U)) 
                                         == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_tag_mux__DOT__and_gates__BRA__1__KET____DOT__or_result));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT____Vcellinp__priority_ar__in 
        = ((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_arvalid_reg)) 
             & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_hbe0a95ac__0) 
                | (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)))) 
            << 1U) | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_arvalid_reg)) 
                      & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_hbe0a95ac__0) 
                         | (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__tag_mux__DOT__and_gates__BRA__1__KET____DOT__or_result 
        = (0xfffffU & (((- (IData)((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_replace_way) 
                                          >> 1U)))) 
                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__tag_v__dout 
                           >> 1U)) | ((- (IData)((1U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_replace_way)))) 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____Vcellout__way__BRA__0__KET____DOT__tag_v__dout 
                                         >> 1U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__v_ways 
        = ((2U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__tag_v__dout 
                  << 1U)) | (1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____Vcellout__way__BRA__0__KET____DOT__tag_v__dout));
    vlSelf->__VdfgTmp_hc4b92322__0 = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__tag_v__dout 
                                      & ((0xfffffU 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__tag_v__dout 
                                             >> 1U)) 
                                         == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_tag_mux__DOT__and_gates__BRA__1__KET____DOT__or_result));
    vlSelf->__VdfgTmp_he8917e58__0 = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____Vcellout__way__BRA__0__KET____DOT__tag_v__dout 
                                      & ((0xfffffU 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____Vcellout__way__BRA__0__KET____DOT__tag_v__dout 
                                             >> 1U)) 
                                         == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_tag_mux__DOT__and_gates__BRA__1__KET____DOT__or_result));
    vlSelf->simu_top__DOT__soc__DOT__m0_rid = 0U;
    vlSelf->simu_top__DOT__soc__DOT__m0_rresp = 0U;
    if ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_sel))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rid = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid
            [0U];
        vlSelf->simu_top__DOT__soc__DOT__m0_rresp = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp
            [0U];
    }
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
        = (0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready));
    if ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_sel))) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_hee60d8fe__1 
            = vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h76518f96__0;
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
            = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready)) 
               | (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_hee60d8fe__1));
    }
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
        = (0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready));
    if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_sel))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rid = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid
            [1U];
        vlSelf->simu_top__DOT__soc__DOT__m0_rresp = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp
            [1U];
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_hee60d8fe__1 
            = vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h76518f96__0;
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
            = ((0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready)) 
               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_hee60d8fe__1) 
                  << 1U));
    }
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
        = (0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready));
    if ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_sel))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rid = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid
            [2U];
        vlSelf->simu_top__DOT__soc__DOT__m0_rresp = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp
            [2U];
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_hee60d8fe__1 
            = vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h76518f96__0;
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
            = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready)) 
               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_hee60d8fe__1) 
                  << 2U));
    }
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
        = (0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready));
    if ((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_sel))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rid = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid
            [3U];
        vlSelf->simu_top__DOT__soc__DOT__m0_rresp = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp
            [3U];
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_hee60d8fe__1 
            = vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h76518f96__0;
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
            = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready)) 
               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_hee60d8fe__1) 
                  << 3U));
    }
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
        = (0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready));
    vlSelf->simu_top__DOT__soc__DOT__m0_rdata = 0U;
    if ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_sel))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rdata = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata
            [0U];
    }
    if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_sel))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rdata = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata
            [1U];
    }
    if ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_sel))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rdata = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata
            [2U];
    }
    vlSelf->simu_top__DOT__soc__DOT__m0_rlast = 0U;
    if ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_sel))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rlast = 
            (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast));
    }
    if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_sel))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rlast = 
            (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast) 
                   >> 1U));
    }
    if ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_sel))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rlast = 
            (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast) 
                   >> 2U));
    }
    if ((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_sel))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rdata = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata
            [3U];
        vlSelf->simu_top__DOT__soc__DOT__m0_rlast = 
            (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast) 
                   >> 3U));
    }
    vlSelf->simu_top__DOT__soc__DOT__m0_rvalid = 0U;
    if ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_sel))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rvalid 
            = (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid));
    }
    if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_sel))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rvalid 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid) 
                     >> 1U));
    }
    if ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_sel))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rvalid 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid) 
                     >> 2U));
    }
    if ((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_sel))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rvalid 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid) 
                     >> 3U));
    }
    if ((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_sel))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rid = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid
            [4U];
        vlSelf->simu_top__DOT__soc__DOT__m0_rresp = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp
            [4U];
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_hee60d8fe__1 
            = vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h76518f96__0;
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
            = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready)) 
               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_hee60d8fe__1) 
                  << 4U));
        vlSelf->simu_top__DOT__soc__DOT__m0_rdata = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata
            [4U];
        vlSelf->simu_top__DOT__soc__DOT__m0_rlast = 
            (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast) 
                   >> 4U));
        vlSelf->simu_top__DOT__soc__DOT__m0_rvalid 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid) 
                     >> 4U));
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_RDCNTVH_TYPE 
        = (IData)((0x6400ULL == (0xffffffe0ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SUB_TYPE 
        = (IData)((0x110000ULL == (0xffff8000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SLT_TYPE 
        = (IData)((0x120000ULL == (0xffff8000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SLTU_TYPE 
        = (IData)((0x128000ULL == (0xffff8000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_NOR_TYPE 
        = (IData)((0x140000ULL == (0xffff8000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_AND_TYPE 
        = (IData)((0x148000ULL == (0xffff8000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_OR_TYPE 
        = (IData)((0x150000ULL == (0xffff8000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_XOR_TYPE 
        = (IData)((0x158000ULL == (0xffff8000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SLL_TYPE 
        = (IData)((0x170000ULL == (0xffff8000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SRL_TYPE 
        = (IData)((0x178000ULL == (0xffff8000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SRA_TYPE 
        = (IData)((0x180000ULL == (0xffff8000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_MUL_TYPE 
        = (IData)((0x1c0000ULL == (0xffff8000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_MULH_TYPE 
        = (IData)((0x1c8000ULL == (0xffff8000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_MULHU_TYPE 
        = (IData)((0x1d0000ULL == (0xffff8000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_DIV_TYPE 
        = (IData)((0x200000ULL == (0xffff8000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_MOD_TYPE 
        = (IData)((0x208000ULL == (0xffff8000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_DIVU_TYPE 
        = (IData)((0x210000ULL == (0xffff8000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_MODU_TYPE 
        = (IData)((0x218000ULL == (0xffff8000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SLLI_TYPE 
        = (IData)((0x408000ULL == (0xffff8000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SRLI_TYPE 
        = (IData)((0x448000ULL == (0xffff8000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SRAI_TYPE 
        = (IData)((0x488000ULL == (0xffff8000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BRK_TYPE 
        = (IData)((0x2a0000ULL == (0xffff8000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SYSCALL_TYPE 
        = (IData)((0x2b0000ULL == (0xffff8000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_TLB_TYPEM 
        = (IData)((0x6480000ULL == (0xffff8000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ST_B_TYPE 
        = (IData)((0x29000000ULL == (0xffc00000ULL 
                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ST_H_TYPE 
        = (IData)((0x29400000ULL == (0xffc00000ULL 
                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ST_W_TYPE 
        = (IData)((0x29800000ULL == (0xffc00000ULL 
                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_B_TYPE 
        = (IData)((0x28000000ULL == (0xffc00000ULL 
                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_H_TYPE 
        = (IData)((0x28400000ULL == (0xffc00000ULL 
                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_W_TYPE 
        = (IData)((0x28800000ULL == (0xffc00000ULL 
                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_BU_TYPE 
        = (IData)((0x2a000000ULL == (0xffc00000ULL 
                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_HU_TYPE 
        = (IData)((0x2a400000ULL == (0xffc00000ULL 
                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LUI_TYPE 
        = (IData)((0x14000000ULL == (0xfe000000ULL 
                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_PCADDU12I_TYPE 
        = (IData)((0x1c000000ULL == (0xfe000000ULL 
                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SLTI_TYPE 
        = (IData)((0x2000000ULL == (0xffc00000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SLTUI_TYPE 
        = (IData)((0x2400000ULL == (0xffc00000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_TLBINV_TYPEM 
        = (IData)((0x6498000ULL == (0xffff8000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BEQ_TYPE 
        = (IData)((0x58000000ULL == (0xfc000000ULL 
                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BNE_TYPE 
        = (IData)((0x5c000000ULL == (0xfc000000ULL 
                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BLT_TYPE 
        = (IData)((0x60000000ULL == (0xfc000000ULL 
                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BGE_TYPE 
        = (IData)((0x64000000ULL == (0xfc000000ULL 
                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ANDI_TYPE 
        = (IData)((0x3400000ULL == (0xffc00000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ORI_TYPE 
        = (IData)((0x3800000ULL == (0xffc00000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_XORI_TYPE 
        = (IData)((0x3c00000ULL == (0xffc00000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_CSRWR_TYPE 
        = (IData)((0x4000020ULL == (0xff0003e0ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BLTU_TYPE 
        = (IData)((0x68000000ULL == (0xfc000000ULL 
                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BGEU_TYPE 
        = (IData)((0x6c000000ULL == (0xfc000000ULL 
                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_JIRL_TYPE 
        = (IData)((0x4c000000ULL == (0xfc000000ULL 
                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT____VdfgTmp_h6e355132__0 
        = (IData)((0x6000ULL == (0xfffffc00ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BL_TYPE 
        = (IData)((0x54000000ULL == (0xfc000000ULL 
                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT____VdfgTmp_h81692869__0 
        = ((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xaU] 
                     >> 9U)) == (0x1fU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                  >> 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__MEM_forward_valid 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xbU] 
            >> 4U) & (0U != (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xaU] 
                                      >> 9U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cacheop_wb 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[1U] 
            >> 4U) & (0U != (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U] 
                                   >> 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT____VdfgTmp_h0dac690a__0 
        = ((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[6U] 
                     >> 9U)) == (0x1fU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                  >> 0xaU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT____VdfgTmp_hf7cffa19__0 
        = ((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[6U] 
                     >> 9U)) == (0x1fU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                  >> 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellinp__sram_to_axi_u__i_cacheop 
        = (IData)((8U == (0x18U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[1U])));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divEn 
        = ((0xeU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU] 
                              >> 0x10U))) | ((0x10U 
                                              == (0x1fU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU] 
                                                     >> 0x10U))) 
                                             | ((0xfU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU] 
                                                     >> 0x10U))) 
                                                | (0x11U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU] 
                                                       >> 0x10U))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____VdfgTmp_h0da1d373__0 
        = (IData)((0U != (0xc000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU])));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellinp__sram_to_axi_u__d_cacheop 
        = (IData)((0x18U == (0x18U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[1U])));
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____VdfgExtracted_h8a9a0f16__0 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[1U] 
            >> 3U) & (0x40U == (0x60U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U])));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_cin 
        = (1U & (IData)(((0U == (0x1c0000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU])) 
                         & (0U != (0x30000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU])))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divUnsigned 
        = ((0x10U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU] 
                               >> 0x10U))) | (0x11U 
                                              == (0x1fU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU] 
                                                     >> 0x10U))));
    vlSelf->debug0_wb_pc = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[9U] 
                             << 0x13U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[8U] 
                                          >> 0xdU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_flush 
        = (1U & (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[1U] 
                   >> 2U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__csrmsg_data[0U] 
                             >> 0xaU)) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                                          >> 6U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__musk_rel 
        = ((0x20U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U])
            ? ((0U != (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U] 
                                >> 0xbU))) ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf
               [(0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U] 
                          >> 0xbU))] : 0U) : 0xffffffffU);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_flush 
        = (1U & ((((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[1U] 
                      | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[1U]) 
                     >> 2U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__csrmsg_data[0U] 
                               >> 0xaU)) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__csrmsg_data[0U] 
                                            >> 0xaU)) 
                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[3U] 
                     >> 6U)) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                                >> 6U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_flush 
        = (1U & ((((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[1U] 
                      | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[1U]) 
                     >> 2U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__csrmsg_data[0U] 
                               >> 0xaU)) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[3U] 
                                            >> 6U)) 
                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                     >> 6U)) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__csrmsg_data[0U] 
                                >> 0xaU)));
    vlSelf->debug0_wb_rf_wen = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[0xcU] 
                                      >> 4U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csrout_wb 
        = ((4U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U])
            ? 0U : ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U])
                     ? 0U : ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U])
                              ? 0U : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U] 
                                       >> 0x1fU) ? 0U
                                       : ((0x40000000U 
                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U])
                                           ? 0U : (
                                                   (0x20000000U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U])
                                                    ? 
                                                   ((0x10000000U 
                                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U])
                                                     ? 
                                                    ((0x8000000U 
                                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U])
                                                      ? 0U
                                                      : 
                                                     ((0x4000000U 
                                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U])
                                                       ? 0U
                                                       : 
                                                      ((0x2000000U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U])
                                                        ? 0U
                                                        : 
                                                       ((0x1000000U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U])
                                                         ? 0U
                                                         : 
                                                        ((0x800000U 
                                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U])
                                                          ? 0U
                                                          : 
                                                         ((0x400000U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U])
                                                           ? 0U
                                                           : 
                                                          ((0x200000U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U])
                                                            ? 
                                                           (0xee000039U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0U])
                                                            : 
                                                           (0xee000039U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[1U]))))))))
                                                     : 0U)
                                                    : 
                                                   ((0x10000000U 
                                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U])
                                                     ? 
                                                    ((0x8000000U 
                                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U])
                                                      ? 0U
                                                      : 
                                                     ((0x4000000U 
                                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U])
                                                       ? 0U
                                                       : 
                                                      ((0x2000000U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U])
                                                        ? 0U
                                                        : 
                                                       ((0x1000000U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U])
                                                         ? 
                                                        ((0x800000U 
                                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U])
                                                          ? 0U
                                                          : 
                                                         ((0x400000U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U])
                                                           ? 0U
                                                           : 
                                                          ((0x200000U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U])
                                                            ? 0U
                                                            : 
                                                           (0xffffffc0U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[3U]))))
                                                         : 0U))))
                                                     : 
                                                    ((0x8000000U 
                                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U])
                                                      ? 
                                                     ((0x4000000U 
                                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U])
                                                       ? 0U
                                                       : 
                                                      ((0x2000000U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U])
                                                        ? 0U
                                                        : 
                                                       ((0x1000000U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U])
                                                         ? 0U
                                                         : 
                                                        ((0x800000U 
                                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U])
                                                          ? 0U
                                                          : 
                                                         ((0x400000U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U])
                                                           ? 
                                                          ((0x200000U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U])
                                                            ? 0U
                                                            : 
                                                           (0xfffU 
                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[6U]))
                                                           : 
                                                          ((0x200000U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U])
                                                            ? 
                                                           (0x3fffU 
                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[7U])
                                                            : 
                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[8U]))))))
                                                      : 
                                                     ((0x4000000U 
                                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U])
                                                       ? 
                                                      ((0x2000000U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U])
                                                        ? 
                                                       ((0x1000000U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U])
                                                         ? 0U
                                                         : 
                                                        ((0x800000U 
                                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U])
                                                          ? 0U
                                                          : 
                                                         ((0x400000U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U])
                                                           ? 
                                                          ((0x200000U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U])
                                                            ? 
                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[9U]
                                                            : 
                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0xaU])
                                                           : 
                                                          ((0x200000U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U])
                                                            ? 
                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0xbU]
                                                            : 
                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0xcU]))))
                                                        : 0U)
                                                       : 
                                                      ((0x2000000U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U])
                                                        ? 
                                                       ((0x1000000U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U])
                                                         ? 
                                                        ((0x800000U 
                                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U])
                                                          ? 0U
                                                          : 
                                                         ((0x400000U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U])
                                                           ? 
                                                          ((0x200000U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U])
                                                            ? 
                                                           (0xfffff000U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0xeU])
                                                            : 
                                                           (0xfffff000U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0xfU]))
                                                           : 
                                                          ((0x200000U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U])
                                                            ? 
                                                           (0xfffff000U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x10U])
                                                            : 
                                                           (0xff03ffU 
                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x11U]))))
                                                         : 
                                                        ((0x800000U 
                                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U])
                                                          ? 0U
                                                          : 
                                                         ((0x400000U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U])
                                                           ? 
                                                          ((0x200000U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U])
                                                            ? 
                                                           (0xfffff7fU 
                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x12U])
                                                            : 
                                                           (0xfffff7fU 
                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x13U]))
                                                           : 
                                                          ((0x200000U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U])
                                                            ? 
                                                           (0xffffe000U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x14U])
                                                            : 
                                                           (0xbf00000fU 
                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x15U])))))
                                                        : 
                                                       ((0x1000000U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U])
                                                         ? 
                                                        ((0x800000U 
                                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U])
                                                          ? 
                                                         ((0x400000U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U])
                                                           ? 0U
                                                           : 
                                                          ((0x200000U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U])
                                                            ? 0U
                                                            : 
                                                           (0xffffffc0U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x16U])))
                                                          : 0U)
                                                         : 
                                                        ((0x800000U 
                                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U])
                                                          ? 
                                                         ((0x400000U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U])
                                                           ? 
                                                          ((0x200000U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U])
                                                            ? 
                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x17U]
                                                            : 
                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x18U])
                                                           : 
                                                          ((0x200000U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U])
                                                            ? 
                                                           (0x7fff1bffU 
                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x19U])
                                                            : 
                                                           (0x1bffU 
                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x1bU])))
                                                          : 
                                                         ((0x400000U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U])
                                                           ? 0U
                                                           : 
                                                          ((0x200000U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U])
                                                            ? 
                                                           (7U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x1cU])
                                                            : 
                                                           (0x1ffU 
                                                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x1dU])))))))))))))));
    vlSelf->debug0_wb_rf_wnum = (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[0xbU] 
                                          >> 0xdU));
    vlSelf->uart_rx = ((IData)(vlSelf->uart_rx__en0) 
                       & (IData)(simu_top__DOT__uart_rx__out__strong__out3));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier) 
            >> 3U) & ((2U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))
                       ? (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__max_repeat_time)
                       : (0U != (0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr)))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____Vcellinp__receiver__enable 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__enable) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__rx_en));
    vlSelf->simu_top__DOT__soc__DOT__uart0_txd_oe = 
        ((IData)(vlSelf->uart_rx__en0) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__rx_en) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__tx2rx_en)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_to_dirty_miss 
        = ((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)) 
           & ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wb_ways_next)) 
              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_cacheop)));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h7d0af1f5__0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wvalid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid)) 
           | (IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h7d0af1f5__0));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h7d0af1f5__0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wvalid) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit) 
              >> 1U));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid 
        = ((0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h7d0af1f5__0) 
              << 1U));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h7d0af1f5__0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wvalid) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit) 
              >> 2U));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid 
        = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h7d0af1f5__0) 
              << 2U));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h7d0af1f5__0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wvalid) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit) 
              >> 3U));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h7d0af1f5__0) 
              << 3U));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h7d0af1f5__0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wvalid) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit) 
              >> 4U));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid 
        = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h7d0af1f5__0) 
              << 4U));
    vlSelf->ram_wen = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wstrb) 
                       & (- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en))));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wlast));
    vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wstrb) 
           & (- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en))));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wlast));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_wready) 
            << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_wready) 
                       << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_wready) 
                                  << 2U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_wready) 
                                             << 1U) 
                                            | (IData)(vlSelf->simu_top__DOT__soc__DOT__s0_wready)))));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel 
        = (((7U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_0)) 
            & (7U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_1)))
            ? 7U : (((7U != (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_0)) 
                     & (7U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_1)))
                     ? (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_0)
                     : (((7U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_0)) 
                         & (7U != (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_1)))
                         ? (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_1)
                         : ((2U < (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_pre_sel))
                             ? (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_0)
                             : (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_1)))));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____VdfgTmp_h9973e968__0) 
            << 3U) | (((0x1fe0U == (0xffffU & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__wr_mux__DOT__and_gates__BRA__1__KET____DOT__or_result 
                                                       >> 0x21U)))) 
                       << 2U) | (1U & (~ ((0x1fe0U 
                                           == (0xffffU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__wr_mux__DOT__and_gates__BRA__1__KET____DOT__or_result 
                                                          >> 0x21U)))) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____VdfgTmp_h9973e968__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_to_dirty_miss 
        = ((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)) 
           & ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wb_ways_next)) 
              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_cacheop)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__d_way 
        = (3U & ((0U != (3U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__v_ways))))
                  ? ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__v_ways)) 
                     & (- (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__v_ways))))
                  : ((2U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_way_gen__DOT__lfsr__DOT__lfsr_reg) 
                            << 1U)) | (1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_way_gen__DOT__lfsr__DOT__lfsr_reg))))));
    vlSelf->uart_ctr_bus[0U] = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_ack;
    vlSelf->uart_ctr_bus[1U] = (IData)((((QData)((IData)(
                                                         (0xfU 
                                                          & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_rw))));
    vlSelf->uart_ctr_bus[2U] = (IData)(((((QData)((IData)(
                                                          (0xfU 
                                                           & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_rw))) 
                                        >> 0x20U));
    vlSelf->uart_ctr_bus[3U] = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_datai;
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT____VdfgTmp_hf971e730__0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_ack) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_psel) 
              & (0U == (0xfc000U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_ack 
        = ((0U == (0x3fU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr 
                            >> 0xeU))) ? (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_ack)
            : ((0U != (0x3fU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr 
                                >> 0xeU))) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_ack)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_ack) 
           & (0x40U == (0x7ffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
           & (0U == (0x7ffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT1 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
           & (4U == (0x7ffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT2 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
           & (8U == (0x7ffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT3 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
           & (0xcU == (0x7ffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT6 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
           & (0x18U == (0x7ffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT7 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
           & (0x1cU == (0x7ffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT8 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
           & (0x20U == (0x7ffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT9 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
           & (0x24U == (0x7ffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT10 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
           & (0x28U == (0x7ffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT11 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
           & (0x2cU == (0x7ffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__hit_way 
        = (((IData)(vlSelf->__VdfgTmp_hf20fd9bb__0) 
            << 1U) | (IData)(vlSelf->__VdfgTmp_hce404a6e__0));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__d_way 
        = (3U & ((0U != (3U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__v_ways))))
                  ? ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__v_ways)) 
                     & (- (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__v_ways))))
                  : ((2U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_way_gen__DOT__lfsr__DOT__lfsr_reg) 
                            << 1U)) | (1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_way_gen__DOT__lfsr__DOT__lfsr_reg))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__hit_way 
        = (((IData)(vlSelf->__VdfgTmp_hc4b92322__0) 
            << 1U) | (IData)(vlSelf->__VdfgTmp_he8917e58__0));
    vlSelf->ram_ren = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid) 
                       & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rvalid)) 
                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready)));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_valid) 
           & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rvalid)) 
              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                 >> 3U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__refill_word 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_write) 
            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__refill_requested_word))
            ? ((((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_wstrb))
                  ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_wdata 
                     >> 0x18U) : (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
                                  >> 0x18U)) << 0x18U) 
               | ((0xff0000U & (((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_wstrb))
                                  ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_wdata 
                                     >> 0x10U) : (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
                                                  >> 0x10U)) 
                                << 0x10U)) | ((0xff00U 
                                               & (((2U 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_wstrb))
                                                    ? 
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_wdata 
                                                    >> 8U)
                                                    : 
                                                   (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
                                                    >> 8U)) 
                                                  << 8U)) 
                                              | (0xffU 
                                                 & ((1U 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_wstrb))
                                                     ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_wdata
                                                     : vlSelf->simu_top__DOT__soc__DOT__m0_rdata)))))
            : vlSelf->simu_top__DOT__soc__DOT__m0_rdata);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_word 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_write) 
            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_requested_word))
            ? ((((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_wstrb))
                  ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_wdata 
                     >> 0x18U) : (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
                                  >> 0x18U)) << 0x18U) 
               | ((0xff0000U & (((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_wstrb))
                                  ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_wdata 
                                     >> 0x10U) : (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
                                                  >> 0x10U)) 
                                << 0x10U)) | ((0xff00U 
                                               & (((2U 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_wstrb))
                                                    ? 
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_wdata 
                                                    >> 8U)
                                                    : 
                                                   (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
                                                    >> 8U)) 
                                                  << 8U)) 
                                              | (0xffU 
                                                 & ((1U 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_wstrb))
                                                     ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_wdata
                                                     : vlSelf->simu_top__DOT__soc__DOT__m0_rdata)))))
            : vlSelf->simu_top__DOT__soc__DOT__m0_rdata);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache_ret_valid 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rvalid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h76518f96__0));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_reg_inst 
        = ((IData)((0x100000ULL == (0xffff8000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out))) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SUB_TYPE) 
              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SLT_TYPE) 
                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SLTU_TYPE) 
                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_NOR_TYPE) 
                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_AND_TYPE) 
                          | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_OR_TYPE) 
                             | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_XOR_TYPE) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SLL_TYPE) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SRL_TYPE) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SRA_TYPE) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_MUL_TYPE) 
                                            | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_MULH_TYPE) 
                                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_MULHU_TYPE) 
                                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_DIV_TYPE) 
                                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_MOD_TYPE) 
                                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_DIVU_TYPE) 
                                                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_MODU_TYPE))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_shamt_inst 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SLLI_TYPE) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SRLI_TYPE) 
              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SRAI_TYPE)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__is_tlb_wen_id 
        = (((0xcU == (0x1fU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                       >> 0xaU)))) 
            | (0xdU == (0x1fU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                         >> 0xaU))))) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_TLB_TYPEM));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_TLBSRCH_TYPE 
        = (IData)(((0x2800ULL == (0x7c00ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)) 
                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_TLB_TYPEM)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_TLBRD_TYPE 
        = (IData)(((0x2c00ULL == (0x7c00ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)) 
                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_TLB_TYPEM)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ERTN_TYPE 
        = (IData)(((0x3800ULL == (0x7c00ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)) 
                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_TLB_TYPEM)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_store_inst 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ST_B_TYPE) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ST_H_TYPE) 
              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ST_W_TYPE)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_load_inst 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_B_TYPE) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_H_TYPE) 
              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_W_TYPE) 
                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_BU_TYPE) 
                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_HU_TYPE)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_u_inst 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LUI_TYPE) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_PCADDU12I_TYPE));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_regimm_inst 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SLTI_TYPE) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SLTUI_TYPE) 
              | ((IData)((0x2800000ULL == (0xffc00000ULL 
                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out))) 
                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ANDI_TYPE) 
                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ORI_TYPE) 
                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_XORI_TYPE))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_CSRXCHG_TYPE 
        = ((~ (IData)((0x4000000ULL == (0xff0003e0ULL 
                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)))) 
           & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_CSRWR_TYPE)) 
              & (0x4000000ULL == (0xff000000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__unsignBranchCmp 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BLTU_TYPE) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BGEU_TYPE));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_branch_inst 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BLT_TYPE) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BGE_TYPE) 
              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BLTU_TYPE) 
                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BGEU_TYPE) 
                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BEQ_TYPE) 
                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BNE_TYPE))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_RDCNTVL_TYPE 
        = ((IData)(simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT____VdfgTmp_h6e355132__0) 
           & (0ULL == (0x3e0ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_RDCNTID_TYPE 
        = ((IData)(simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT____VdfgTmp_h6e355132__0) 
           & (0U == (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__aluctrl 
        = ((1U & VL_EXTENDS_II(5,1, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SUB_TYPE))) 
           | ((2U & (VL_EXTENDS_II(5,1, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SLT_TYPE)) 
                     | VL_EXTENDS_II(5,1, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SLTI_TYPE)))) 
              | ((3U & (VL_EXTENDS_II(5,1, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SLTU_TYPE)) 
                        | VL_EXTENDS_II(5,1, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SLTUI_TYPE)))) 
                 | ((4U & VL_EXTENDS_II(5,1, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_NOR_TYPE))) 
                    | ((5U & (VL_EXTENDS_II(5,1, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_AND_TYPE)) 
                              | VL_EXTENDS_II(5,1, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ANDI_TYPE)))) 
                       | ((6U & (VL_EXTENDS_II(5,1, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_OR_TYPE)) 
                                 | VL_EXTENDS_II(5,1, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ORI_TYPE)))) 
                          | ((7U & (VL_EXTENDS_II(5,1, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_XOR_TYPE)) 
                                    | VL_EXTENDS_II(5,1, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_XORI_TYPE)))) 
                             | ((8U & (VL_EXTENDS_II(5,1, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SLL_TYPE)) 
                                       | VL_EXTENDS_II(5,1, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SLLI_TYPE)))) 
                                | ((9U & (VL_EXTENDS_II(5,1, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SRL_TYPE)) 
                                          | VL_EXTENDS_II(5,1, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SRLI_TYPE)))) 
                                   | ((0xaU & (VL_EXTENDS_II(5,1, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SRA_TYPE)) 
                                               | VL_EXTENDS_II(5,1, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SRAI_TYPE)))) 
                                      | ((0xbU & VL_EXTENDS_II(5,1, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_MUL_TYPE))) 
                                         | ((0xcU & 
                                             VL_EXTENDS_II(5,1, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_MULH_TYPE))) 
                                            | ((0xdU 
                                                & VL_EXTENDS_II(5,1, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_MULHU_TYPE))) 
                                               | ((0xeU 
                                                   & VL_EXTENDS_II(5,1, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_DIV_TYPE))) 
                                                  | ((0xfU 
                                                      & VL_EXTENDS_II(5,1, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_MOD_TYPE))) 
                                                     | ((0x10U 
                                                         & VL_EXTENDS_II(5,1, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_DIVU_TYPE))) 
                                                        | ((0x11U 
                                                            & VL_EXTENDS_II(5,1, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_MODU_TYPE))) 
                                                           | ((0x13U 
                                                               & (VL_EXTENDS_II(5,1, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BL_TYPE)) 
                                                                  | VL_EXTENDS_II(5,1, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_JIRL_TYPE)))) 
                                                              | (0x12U 
                                                                 & VL_EXTENDS_II(5,1, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LUI_TYPE)))))))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__alusel1 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_PCADDU12I_TYPE) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BL_TYPE) 
              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_JIRL_TYPE)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_b_inst 
        = ((IData)((0x50000000ULL == (0xfc000000ULL 
                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out))) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BL_TYPE));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____VdfgExtracted_h16cb5132__0 
        = ((IData)(simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____VdfgExtracted_h8a9a0f16__0) 
           | (0U != (0xc000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU])));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellinp__addr_trans_memaddr__pg 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__pg) 
           | (IData)(simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____VdfgExtracted_h8a9a0f16__0));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb 
        = ((8U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[0xcU])
            ? ((4U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[0xcU])
                ? ((0x100U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U])
                    ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__counter_higher
                    : ((0x80U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U])
                        ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__counter_lower
                        : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tid))
                : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csrout_wb)
            : ((4U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[0xcU])
                ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[0xaU] 
                    << 0x13U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[9U] 
                                 >> 0xdU)) : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[0xbU] 
                                               << 0x13U) 
                                              | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[0xaU] 
                                                 >> 0xdU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__WB_forward_valid 
        = ((IData)(vlSelf->debug0_wb_rf_wen) & (0U 
                                                != (IData)(vlSelf->debug0_wb_rf_wnum)));
    vlSelf->uart_tx = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__uart0_txd_oe)) 
                             & (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                 >> 4U) | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__infrared) 
                                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_out)))));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_go 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
            >> 3U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_wready));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_go 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__s0_wready));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_pop 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop));
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer 
        = ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
           & (0xe000U == (0xffffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)));
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_uart_valid 
        = ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
           & (0xff10U == (0xffffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_pop 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop));
    vlSelf->simu_top__DOT__soc__DOT__m0_wready = 0U;
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_wready 
            = (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready));
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_wready 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready) 
                     >> 1U));
    }
    if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_wready 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready) 
                     >> 2U));
    }
    if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_wready 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready) 
                     >> 3U));
    }
    if ((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_wready 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready) 
                     >> 4U));
    }
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h78044575__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog)) 
            & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel))) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog) 
              & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel_reg))));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit)) 
           | (IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h78044575__0));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h78044575__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog)) 
            & (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel))) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog) 
              & (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel_reg))));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit 
        = ((0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h78044575__0) 
              << 1U));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h78044575__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog)) 
            & (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel))) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog) 
              & (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel_reg))));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit 
        = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h78044575__0) 
              << 2U));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h78044575__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog)) 
            & (3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel))) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog) 
              & (3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel_reg))));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h78044575__0) 
              << 3U));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h78044575__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog)) 
            & (4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel))) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog) 
              & (4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel_reg))));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit 
        = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h78044575__0) 
              << 4U));
    __Vtableidx1 = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir 
        = Vsimu_top__ConstPool__TABLE_hfbff4245_0[__Vtableidx1];
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int 
        = Vsimu_top__ConstPool__TABLE_h14a2fcf8_0[__Vtableidx1];
    vlSelf->simu_top__DOT__soc__DOT__m0_awready = 0U;
    if ((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
               & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit)))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_awready 
            = (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready));
    }
    if ((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit) 
                  >> 1U)))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_awready 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready) 
                     >> 1U));
    }
    if ((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit) 
                  >> 2U)))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_awready 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready) 
                     >> 2U));
    }
    if ((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit) 
                  >> 3U)))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_awready 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready) 
                     >> 3U));
    }
    if (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
         & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit) 
            >> 4U))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_awready 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready) 
                     >> 4U));
    }
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h24eed626__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
            & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit)) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awvalid));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid)) 
           | (IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h24eed626__0));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h24eed626__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit) 
               >> 1U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awvalid));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid 
        = ((0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h24eed626__0) 
              << 1U));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h24eed626__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit) 
               >> 2U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awvalid));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid 
        = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h24eed626__0) 
              << 2U));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h24eed626__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit) 
               >> 3U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awvalid));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h24eed626__0) 
              << 3U));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h24eed626__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit) 
               >> 4U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awvalid));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid 
        = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h24eed626__0) 
              << 4U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_he381076c__0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_uncached)
            ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_write)
            : (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__d_way) 
                  >> 1U) & (IData)(vlSelf->__VdfgTmp_h966d58da__0)) 
                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__d_way) 
                   & (IData)(vlSelf->__VdfgTmp_hfd5d21d5__0))) 
               | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_buf_idle)) 
                  & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__d_way) 
                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_buf_way)) 
                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_he5eb326c__0)))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we 
        = ((IData)(simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT____VdfgTmp_hf971e730__0) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_rw));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__re 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_rw)) 
           & (IData)(simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT____VdfgTmp_hf971e730__0));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_ready 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu) 
           & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)) 
              & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_ack)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__REG_DAT_T 
        = ((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_rw)) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT0)) 
            & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_ack))
            ? vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command
            : ((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_rw)) 
                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT1)) 
                & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_ack))
                ? (IData)((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_c)))
                : ((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_rw)) 
                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT2)) 
                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_ack))
                    ? vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r
                    : ((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_rw)) 
                         & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT3)) 
                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_ack))
                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)
                        : ((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_rw)) 
                             & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
                                & (0x10U == (0x7ffU 
                                             & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)))) 
                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_ack))
                            ? (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM)
                            : ((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_rw)) 
                                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
                                    & (0x14U == (0x7ffU 
                                                 & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)))) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_ack))
                                ? (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status) 
                                    << 0x10U) | (0xffffU 
                                                 & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM 
                                                            >> 0x20U))))
                                : ((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_rw)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT6)) 
                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_ack))
                                    ? vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter
                                    : ((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_rw)) 
                                         & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT7)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_ack))
                                        ? vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_op_num
                                        : ((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_rw)) 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT8)) 
                                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_ack))
                                            ? vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0
                                            : ((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_rw)) 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT9)) 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_ack))
                                                ? vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map1
                                                : (
                                                   (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_rw)) 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT10)) 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_ack))
                                                    ? vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_rdy_map0
                                                    : 
                                                   ((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_rw)) 
                                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT11)) 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_ack))
                                                     ? vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_rdy_map1
                                                     : 
                                                    ((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_rw)) 
                                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT)) 
                                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_ack))
                                                      ? vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD
                                                      : 0U)))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datao_cpu 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)
            ? 0U : (0xffU & ((0U == (0x3fU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr 
                                              >> 0xeU)))
                              ? (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_datao)
                              : ((0U == (0x3fU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr 
                                                  >> 0xeU)))
                                  ? 0U : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__REG_DAT_T))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wb_ways_init 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_cacheop_hit)
             ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__hit_way)
             : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__v_ways)) 
           & (((IData)(vlSelf->__VdfgTmp_h966d58da__0) 
               << 1U) | (IData)(vlSelf->__VdfgTmp_hfd5d21d5__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__hit 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_uncached)) 
            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_cacheop)) 
           & ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__hit_way)) 
              & (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_he381076c__0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_uncached)
            ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_write)
            : (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__d_way) 
                  >> 1U) & (IData)(vlSelf->__VdfgTmp_h208b8f36__0)) 
                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__d_way) 
                   & (IData)(vlSelf->__VdfgTmp_haa7259b7__0))) 
               | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_buf_idle)) 
                  & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__d_way) 
                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_buf_way)) 
                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_he5eb326c__0)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wb_ways_init 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_cacheop_hit)
             ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__hit_way)
             : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__v_ways)) 
           & (((IData)(vlSelf->__VdfgTmp_h208b8f36__0) 
               << 1U) | (IData)(vlSelf->__VdfgTmp_haa7259b7__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__hit 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_uncached)) 
            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_cacheop)) 
           & ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__hit_way)) 
              & (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state))));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop 
        = ((IData)(vlSelf->ram_ren) & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen_last));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen_last));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_data_ok_cached 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_hbe37574e__0) 
           & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_uncached)) 
              & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_requested_word) 
                 & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_write)) 
                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache_ret_valid)))));
    __Vtemp_h9f2a52b1__0[0U] = (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_hbe37574e__0))) 
                                 & (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_replace_way)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__refill_word)) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (0x3c800000U 
                                                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_replace_way) 
                                                                      << 0x18U) 
                                                                     | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_tag_new 
                                                                         << 3U) 
                                                                        | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_replace_way) 
                                                                            << 1U) 
                                                                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_write))))))))))) 
                                | (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_h0ea5640d__0))) 
                                    & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__invalidate_ways) 
                                        << 0x18U) | 
                                       ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__invalidate_ways) 
                                        << 1U))) | 
                                   ((- (IData)((5U 
                                                != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)))) 
                                    & (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_buf_way)) 
                                                << 0x3eU) 
                                               | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_buf_wdata)) 
                                                   << 0x1eU) 
                                                  | (QData)((IData)(
                                                                    (1U 
                                                                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_buf_wstrb) 
                                                                         << 0x1aU) 
                                                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_buf_way) 
                                                                           << 1U)))))))))));
    __Vtemp_h9f2a52b1__0[1U] = (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_hbe37574e__0))) 
                                 & (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_replace_way)) 
                                              << 0x3eU) 
                                             | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__refill_word)) 
                                                 << 0x1eU) 
                                                | (QData)((IData)(
                                                                  (0x3c800000U 
                                                                   | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_replace_way) 
                                                                       << 0x18U) 
                                                                      | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_tag_new 
                                                                          << 3U) 
                                                                         | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_replace_way) 
                                                                             << 1U) 
                                                                            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_write))))))))) 
                                            >> 0x20U))) 
                                | ((- (IData)((5U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)))) 
                                   & (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_buf_way)) 
                                                << 0x3eU) 
                                               | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_buf_wdata)) 
                                                   << 0x1eU) 
                                                  | (QData)((IData)(
                                                                    (1U 
                                                                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_buf_wstrb) 
                                                                         << 0x1aU) 
                                                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_buf_way) 
                                                                           << 1U))))))) 
                                              >> 0x20U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[0U] 
        = __Vtemp_h9f2a52b1__0[0U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[1U] 
        = __Vtemp_h9f2a52b1__0[1U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[2U] 
        = (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_hbe37574e__0))) 
            & ((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_uncached)) 
                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache_ret_valid)) 
                << 0xaU) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_index) 
                             << 2U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__refill_buf_ptr)))) 
           | (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_h0ea5640d__0))) 
               & (0x400U | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_index) 
                            << 2U))) | ((- (IData)(
                                                   (5U 
                                                    != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)))) 
                                        & ((0x400U 
                                            & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_buf_idle)) 
                                               << 0xaU)) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_buf_index) 
                                               << 2U) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_buf_bank_num))))));
    __Vtemp_h64550be5__0[0U] = (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_hbe37574e__0))) 
                                 & (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_replace_way)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_word)) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (0x3c800000U 
                                                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_replace_way) 
                                                                      << 0x18U) 
                                                                     | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_tag_new 
                                                                         << 3U) 
                                                                        | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_replace_way) 
                                                                            << 1U) 
                                                                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_write))))))))))) 
                                | (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h0ea5640d__0))) 
                                    & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__invalidate_ways) 
                                        << 0x18U) | 
                                       ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__invalidate_ways) 
                                        << 1U))) | 
                                   ((- (IData)((5U 
                                                != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)))) 
                                    & (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_buf_way)) 
                                                << 0x3eU) 
                                               | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_buf_wdata)) 
                                                   << 0x1eU) 
                                                  | (QData)((IData)(
                                                                    (1U 
                                                                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_buf_wstrb) 
                                                                         << 0x1aU) 
                                                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_buf_way) 
                                                                           << 1U)))))))))));
    __Vtemp_h64550be5__0[1U] = (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_hbe37574e__0))) 
                                 & (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_replace_way)) 
                                              << 0x3eU) 
                                             | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_word)) 
                                                 << 0x1eU) 
                                                | (QData)((IData)(
                                                                  (0x3c800000U 
                                                                   | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_replace_way) 
                                                                       << 0x18U) 
                                                                      | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_tag_new 
                                                                          << 3U) 
                                                                         | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_replace_way) 
                                                                             << 1U) 
                                                                            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_write))))))))) 
                                            >> 0x20U))) 
                                | ((- (IData)((5U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)))) 
                                   & (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_buf_way)) 
                                                << 0x3eU) 
                                               | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_buf_wdata)) 
                                                   << 0x1eU) 
                                                  | (QData)((IData)(
                                                                    (1U 
                                                                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_buf_wstrb) 
                                                                         << 0x1aU) 
                                                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_buf_way) 
                                                                           << 1U))))))) 
                                              >> 0x20U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[0U] 
        = __Vtemp_h64550be5__0[0U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[1U] 
        = __Vtemp_h64550be5__0[1U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[2U] 
        = (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_hbe37574e__0))) 
            & ((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_uncached)) 
                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache_ret_valid)) 
                << 0xaU) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_index) 
                             << 2U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_buf_ptr)))) 
           | (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h0ea5640d__0))) 
               & (0x400U | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_index) 
                            << 2U))) | ((- (IData)(
                                                   (5U 
                                                    != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)))) 
                                        & ((0x400U 
                                            & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_buf_idle)) 
                                               << 0xaU)) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_buf_index) 
                                               << 2U) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_buf_bank_num))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__refill_data_ok_cached 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_hbe37574e__0) 
           & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_uncached)) 
              & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__refill_requested_word) 
                 & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_write)) 
                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache_ret_valid)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_ha3470664__0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rlast) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache_ret_valid));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT____VdfgTmp_h9c888c86__0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_load_inst) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_store_inst));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT____VdfgTmp_hc260b695__0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_load_inst) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_store_inst) 
              | (0x18U == (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                             >> 0x16U))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT____VdfgTmp_hfa3cf28f__0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_reg_inst) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_shamt_inst) 
              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_regimm_inst)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__is_csr_wen_id 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_CSRWR_TYPE) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_CSRXCHG_TYPE));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteEn_id 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_regimm_inst) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_reg_inst) 
              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_shamt_inst) 
                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_load_inst) 
                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BL_TYPE) 
                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_JIRL_TYPE) 
                          | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_u_inst) 
                             | ((4U == (0xffU & (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0x18U)))) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_RDCNTID_TYPE) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_RDCNTVH_TYPE) 
                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_RDCNTVL_TYPE)))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_id 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BL_TYPE)
            ? 1U : (0x1fU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_RDCNTID_TYPE)
                              ? (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                         >> 5U)) : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__itype 
        = ((1U & (VL_EXTENDS_II(3,1, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_load_inst)) 
                  | (VL_EXTENDS_II(3,1, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_store_inst)) 
                     | VL_EXTENDS_II(3,1, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_regimm_inst))))) 
           | ((4U & VL_EXTENDS_II(3,1, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_u_inst))) 
              | ((3U & VL_EXTENDS_II(3,1, ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_JIRL_TYPE) 
                                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_branch_inst)))) 
                 | (6U & VL_EXTENDS_II(3,1, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_b_inst))))));
    vlSelf->debug0_wb_rf_wdata = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rk_id 
        = ((((0U != (0x1fU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                      >> 0xaU)))) & 
             ((0x1fU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                >> 0xaU))) == (IData)(vlSelf->debug0_wb_rf_wnum))) 
            & (IData)(vlSelf->debug0_wb_rf_wen)) ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb
            : ((0U != (0x1fU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                        >> 0xaU))))
                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf
               [(0x1fU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                  >> 0xaU)))] : 0U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id 
        = ((((0U != (0x1fU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                      >> 5U)))) & (
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                               >> 5U))) 
                                                   == (IData)(vlSelf->debug0_wb_rf_wnum))) 
            & (IData)(vlSelf->debug0_wb_rf_wen)) ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb
            : ((0U != (0x1fU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                        >> 5U)))) ? 
               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf
               [(0x1fU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                  >> 5U)))] : 0U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_ex_true 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__MEM_forward_valid) 
            & ((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xaU] 
                         >> 9U)) == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[6U] 
                                              >> 9U))))
            ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xaU] 
                << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[9U] 
                             >> 9U)) : (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__WB_forward_valid) 
                                         & ((IData)(vlSelf->debug0_wb_rf_wnum) 
                                            == (0x1fU 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[6U] 
                                                   >> 9U))))
                                         ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb
                                         : ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__rj_ex_true_temp_valid)
                                             ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__rd_ex_true_temp
                                             : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[7U] 
                                                 << 8U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[6U] 
                                                   >> 0x18U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_ex_true 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__MEM_forward_valid) 
            & ((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xaU] 
                         >> 9U)) == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[6U] 
                                              >> 0x13U))))
            ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xaU] 
                << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[9U] 
                             >> 9U)) : (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__WB_forward_valid) 
                                         & ((IData)(vlSelf->debug0_wb_rf_wnum) 
                                            == (0x1fU 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[6U] 
                                                   >> 0x13U))))
                                         ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb
                                         : ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__rj_ex_true_temp_valid)
                                             ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__rj_ex_true_temp
                                             : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[9U] 
                                                 << 8U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[8U] 
                                                   >> 0x18U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rk_ex_true 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__MEM_forward_valid) 
            & ((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xaU] 
                         >> 9U)) == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[6U] 
                                              >> 0xeU))))
            ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xaU] 
                << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[9U] 
                             >> 9U)) : (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__WB_forward_valid) 
                                         & ((IData)(vlSelf->debug0_wb_rf_wnum) 
                                            == (0x1fU 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[6U] 
                                                   >> 0xeU))))
                                         ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb
                                         : ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__rj_ex_true_temp_valid)
                                             ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__rk_ex_true_temp
                                             : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[8U] 
                                                 << 8U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[7U] 
                                                   >> 0x18U)))));
    vlSelf->write_uart_valid = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_uart_valid;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_dir_del 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty)) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wvalid) 
              & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__w_last) 
                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wready))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__w_handshake 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wready) 
            & (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h4bbe5f71__0)) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_wvalid));
    vlSelf->simu_top__DOT__soc__DOT__m0_bid = 0U;
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_bid = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid
            [0U];
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_bid = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid
            [1U];
    }
    vlSelf->simu_top__DOT__soc__DOT__m0_bresp = 0U;
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_bresp = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp
            [0U];
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_bresp = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp
            [1U];
    }
    if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_bid = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid
            [2U];
        vlSelf->simu_top__DOT__soc__DOT__m0_bresp = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp
            [2U];
    }
    vlSelf->simu_top__DOT__soc__DOT__m0_bvalid = 0U;
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_bvalid 
            = (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid));
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_bvalid 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid) 
                     >> 1U));
    }
    if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_bvalid 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid) 
                     >> 2U));
    }
    if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_bid = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid
            [3U];
        vlSelf->simu_top__DOT__soc__DOT__m0_bresp = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp
            [3U];
        vlSelf->simu_top__DOT__soc__DOT__m0_bvalid 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid) 
                     >> 3U));
    }
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready 
        = (0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready));
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6c6cb05b__1 
            = vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h765eb7cb__0;
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready 
            = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready)) 
               | (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6c6cb05b__1));
    }
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready 
        = (0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready));
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6c6cb05b__1 
            = vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h765eb7cb__0;
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready 
            = ((0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready)) 
               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6c6cb05b__1) 
                  << 1U));
    }
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready 
        = (0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready));
    if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6c6cb05b__1 
            = vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h765eb7cb__0;
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready 
            = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready)) 
               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6c6cb05b__1) 
                  << 2U));
    }
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready 
        = (0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready));
    if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6c6cb05b__1 
            = vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h765eb7cb__0;
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready 
            = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready)) 
               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6c6cb05b__1) 
                  << 3U));
    }
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready 
        = (0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready));
    if ((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_bid = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid
            [4U];
        vlSelf->simu_top__DOT__soc__DOT__m0_bresp = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp
            [4U];
        vlSelf->simu_top__DOT__soc__DOT__m0_bvalid 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid) 
                     >> 4U));
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6c6cb05b__1 
            = vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h765eb7cb__0;
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready 
            = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready)) 
               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6c6cb05b__1) 
                  << 4U));
    }
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_dir_ins 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awready) 
              & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awvalid)));
    vlSelf->simu_top__DOT__soc__DOT__cpu_awready = 
        ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awready) 
         & (IData)(simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_hb251d2f0__0));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_push 
        = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid)) 
                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                    >> 3U)));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_push 
        = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid)) 
                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_push 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we) 
           & (IData)(simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____VdfgTmp_hcfb8fec4__0));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fifo_read 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__re) 
           & (IData)(simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____VdfgTmp_hcfb8fec4__0));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr_read 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__re) 
           & ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                  >> 7U)) & (6U == (7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir_read 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__re) 
           & ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                  >> 7U)) & (2U == (7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask_condition 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__re) 
           & ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                  >> 7U)) & (5U == (7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_h09374013__0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_cacheop_wb) 
           & (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wb_ways_init)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__forword_byte_from_write_buffer 
        = ((- (IData)(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__hit) 
                       & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_buf_idle)) 
                          & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_he5eb326c__0) 
                             & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__hit_way) 
                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_buf_way)) 
                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_bank_num) 
                                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_buf_bank_num)))))))) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_buf_wstrb));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__lookup_data_ok 
        = ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)) 
           & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_cacheop)) 
              & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__hit) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_write))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_h1fa730de__0 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__hit)) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_cacheop_hit));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h09374013__0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_cacheop_wb) 
           & (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wb_ways_init)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__lookup_data_ok 
        = ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)) 
           & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_cacheop)) 
              & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__hit) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_write))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__forword_byte_from_write_buffer 
        = ((- (IData)(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__hit) 
                       & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_buf_idle)) 
                          & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_he5eb326c__0) 
                             & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__hit_way) 
                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_buf_way)) 
                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_bank_num) 
                                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_buf_bank_num)))))))) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_buf_wstrb));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h1fa730de__0 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__hit)) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_cacheop_hit));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_pop 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_pop 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__we 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[0U] 
            >> 0x18U) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[2U] 
                         >> 0xaU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__we 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[0U] 
            >> 0x19U) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[2U] 
                         >> 0xaU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____Vcellinp__way__BRA__0__KET____DOT__tag_v__din 
        = ((0x1ffffeU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[0U] 
                         >> 2U)) | (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[0U] 
                                          >> 0x17U)));
    simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____VdfgTmp_h5a92f540__0 
        = (IData)((0x400U == (0x403U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[2U])));
    simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____VdfgTmp_h5966c547__0 
        = (IData)((0x401U == (0x403U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[2U])));
    simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____VdfgTmp_h596acb1a__0 
        = (IData)((0x402U == (0x403U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[2U])));
    simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____VdfgTmp_h5076bac2__0 
        = (IData)((0x403U == (0x403U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[2U])));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__we 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[0U] 
            >> 0x18U) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[2U] 
                         >> 0xaU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__we 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[0U] 
            >> 0x19U) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[2U] 
                         >> 0xaU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____Vcellinp__way__BRA__0__KET____DOT__tag_v__din 
        = ((0x1ffffeU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[0U] 
                         >> 2U)) | (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[0U] 
                                          >> 0x17U)));
    simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____VdfgTmp_h5a92f540__0 
        = (IData)((0x400U == (0x403U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[2U])));
    simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____VdfgTmp_h5966c547__0 
        = (IData)((0x401U == (0x403U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[2U])));
    simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____VdfgTmp_h596acb1a__0 
        = (IData)((0x402U == (0x403U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[2U])));
    simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____VdfgTmp_h5076bac2__0 
        = (IData)((0x403U == (0x403U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[2U])));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_data_ok_uncached 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_hbe37574e__0) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_uncached) 
              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_ha3470664__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__refill_to_refill 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_ha3470664__0)) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_hbe37574e__0));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__refill_data_ok_uncached 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_hbe37574e__0) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_uncached) 
              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_ha3470664__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_to_refill 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_ha3470664__0)) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_hbe37574e__0));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT____Vcellout__priority_ar__out 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT____Vcellinp__priority_ar__in) 
           & ((- (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT____Vcellinp__priority_ar__in)) 
              & (- (IData)((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__waiting_for_rvalid)) 
                             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_ha3470664__0)) 
                            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__buf_empty) 
                               & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__state))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__alusel2 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_shamt_inst) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_regimm_inst) 
              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_u_inst) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT____VdfgTmp_hc260b695__0))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__is_ine_id 
        = (1U & (~ ((0x18U == (0x3ffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                 >> 0x16U)))) 
                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ERTN_TYPE) 
                       | ((IData)((0x6488000ULL == 
                                   (0xffff8000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out))) 
                          | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_b_inst) 
                             | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_JIRL_TYPE) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_branch_inst) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteEn_id) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_store_inst) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__is_tlb_wen_id) 
                                            | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_TLBINV_TYPEM) 
                                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_TLBSRCH_TYPE) 
                                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_TLBRD_TYPE) 
                                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__is_csr_wen_id) 
                                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SYSCALL_TYPE) 
                                                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BRK_TYPE)))))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT____VdfgTmp_h2a69b9a6__0 
        = ((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[6U] 
                     >> 9U)) == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_id));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT____VdfgTmp_h7e7f3c05__0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_id) 
           == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xaU] 
                        >> 9U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_id 
        = ((((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_id)) 
             & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_id) 
                == (IData)(vlSelf->debug0_wb_rf_wnum))) 
            & (IData)(vlSelf->debug0_wb_rf_wen)) ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb
            : ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_id))
                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf
               [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_id]
                : 0U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__immout_id 
        = (((4U == (0xffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                     >> 0x18U)))) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__is_csr_wen_id))
            ? (0x3fffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                  >> 0xaU))) : ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_TLBINV_TYPEM)
                                                 ? 
                                                (0x1fU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__itype))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__itype))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__itype))
                                                    ? 0U
                                                    : 
                                                   VL_EXTENDS_II(32,28, 
                                                                 ((0xffc0000U 
                                                                   & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out) 
                                                                      << 0x12U)) 
                                                                  | (0x3fffcU 
                                                                     & ((IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                                >> 0xaU)) 
                                                                        << 2U)))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__itype))
                                                    ? 
                                                   VL_EXTENDS_II(32,21, 
                                                                 ((0x1f0000U 
                                                                   & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out) 
                                                                      << 0x10U)) 
                                                                  | (0xffffU 
                                                                     & (IData)(
                                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                                >> 0xaU)))))
                                                    : 
                                                   ((IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 5U)) 
                                                    << 0xcU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__itype))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__itype))
                                                    ? 
                                                   VL_EXTENDS_II(32,18, 
                                                                 (0x3fffcU 
                                                                  & ((IData)(
                                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                              >> 0xaU)) 
                                                                     << 2U)))
                                                    : 
                                                   VL_EXTENDS_II(32,16, 
                                                                 (0xfffcU 
                                                                  & ((IData)(
                                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                              >> 0xaU)) 
                                                                     << 2U))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__itype))
                                                    ? 
                                                   (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ORI_TYPE) 
                                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_XORI_TYPE) 
                                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ANDI_TYPE)))
                                                     ? 
                                                    (0xfffU 
                                                     & (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                >> 0xaU)))
                                                     : 
                                                    VL_EXTENDS_II(32,12, 
                                                                  (0xfffU 
                                                                   & (IData)(
                                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                              >> 0xaU)))))
                                                    : 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                               >> 0xaU))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id_true 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__MEM_forward_valid) 
            & ((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xaU] 
                         >> 9U)) == (0x1fU & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                      >> 5U)))))
            ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xaU] 
                << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[9U] 
                             >> 9U)) : (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__WB_forward_valid) 
                                         & ((IData)(vlSelf->debug0_wb_rf_wnum) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 5U)))))
                                         ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb
                                         : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
        = ((0x400000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU])
            ? ((0x400000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU])
                ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                    << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[4U] 
                                 >> 9U)) : 0U) : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_ex_true);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex 
        = ((0x200000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU])
            ? ((0x200000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU])
                ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[6U] 
                    << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                 >> 9U)) : 0U) : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rk_ex_true);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__w_finish 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__w_last) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__w_handshake));
    vlSelf->simu_top__DOT__soc__DOT__cpu_bvalid = ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_bvalid) 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h765eb7cb__0));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
            >> 3U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_push 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_push) 
           & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_valid)) 
              | (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop)));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_push 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_push) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_valid) 
              & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop)) 
                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid)))));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_push 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_push) 
           & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_valid)) 
              | (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop)));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_push 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_push) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_valid) 
              & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop)) 
                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid)))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask_d)) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask_condition));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__lookup_rdata 
        = ((((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__forword_byte_from_write_buffer))
              ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_buf_wdata 
                 >> 0x18U) : ((((- (IData)((IData)(vlSelf->__VdfgTmp_hf20fd9bb__0))) 
                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank_out
                                [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_bank_num]) 
                               | ((- (IData)((IData)(vlSelf->__VdfgTmp_hce404a6e__0))) 
                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank_out
                                  [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_bank_num])) 
                              >> 0x18U)) << 0x18U) 
           | ((0xff0000U & (((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__forword_byte_from_write_buffer))
                              ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_buf_wdata 
                                 >> 0x10U) : ((((- (IData)((IData)(vlSelf->__VdfgTmp_hf20fd9bb__0))) 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank_out
                                                [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_bank_num]) 
                                               | ((- (IData)((IData)(vlSelf->__VdfgTmp_hce404a6e__0))) 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank_out
                                                  [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_bank_num])) 
                                              >> 0x10U)) 
                            << 0x10U)) | ((0xff00U 
                                           & (((2U 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__forword_byte_from_write_buffer))
                                                ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_buf_wdata 
                                                   >> 8U)
                                                : (
                                                   (((- (IData)((IData)(vlSelf->__VdfgTmp_hf20fd9bb__0))) 
                                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank_out
                                                     [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_bank_num]) 
                                                    | ((- (IData)((IData)(vlSelf->__VdfgTmp_hce404a6e__0))) 
                                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank_out
                                                       [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_bank_num])) 
                                                   >> 8U)) 
                                              << 8U)) 
                                          | (0xffU 
                                             & ((1U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__forword_byte_from_write_buffer))
                                                 ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_buf_wdata
                                                 : 
                                                (((- (IData)((IData)(vlSelf->__VdfgTmp_hf20fd9bb__0))) 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank_out
                                                  [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_bank_num]) 
                                                 | ((- (IData)((IData)(vlSelf->__VdfgTmp_hce404a6e__0))) 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank_out
                                                    [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_bank_num])))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT___hit 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_cacheop)) 
            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__hit)) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_cacheop) 
              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_h1fa730de__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__lookup_rdata 
        = ((((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__forword_byte_from_write_buffer))
              ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_buf_wdata 
                 >> 0x18U) : ((((- (IData)((IData)(vlSelf->__VdfgTmp_hc4b92322__0))) 
                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank_out
                                [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_bank_num]) 
                               | ((- (IData)((IData)(vlSelf->__VdfgTmp_he8917e58__0))) 
                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank_out
                                  [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_bank_num])) 
                              >> 0x18U)) << 0x18U) 
           | ((0xff0000U & (((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__forword_byte_from_write_buffer))
                              ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_buf_wdata 
                                 >> 0x10U) : ((((- (IData)((IData)(vlSelf->__VdfgTmp_hc4b92322__0))) 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank_out
                                                [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_bank_num]) 
                                               | ((- (IData)((IData)(vlSelf->__VdfgTmp_he8917e58__0))) 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank_out
                                                  [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_bank_num])) 
                                              >> 0x10U)) 
                            << 0x10U)) | ((0xff00U 
                                           & (((2U 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__forword_byte_from_write_buffer))
                                                ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_buf_wdata 
                                                   >> 8U)
                                                : (
                                                   (((- (IData)((IData)(vlSelf->__VdfgTmp_hc4b92322__0))) 
                                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank_out
                                                     [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_bank_num]) 
                                                    | ((- (IData)((IData)(vlSelf->__VdfgTmp_he8917e58__0))) 
                                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank_out
                                                       [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_bank_num])) 
                                                   >> 8U)) 
                                              << 8U)) 
                                          | (0xffU 
                                             & ((1U 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__forword_byte_from_write_buffer))
                                                 ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_buf_wdata
                                                 : 
                                                (((- (IData)((IData)(vlSelf->__VdfgTmp_hc4b92322__0))) 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank_out
                                                  [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_bank_num]) 
                                                 | ((- (IData)((IData)(vlSelf->__VdfgTmp_he8917e58__0))) 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank_out
                                                    [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_bank_num])))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT___hit 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_cacheop)) 
            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__hit)) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_cacheop) 
              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h1fa730de__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__0__KET____DOT__bank_we 
        = ((IData)(simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____VdfgTmp_h5a92f540__0) 
           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[1U] 
              >> 0x1eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__0__KET____DOT__bank_we 
        = ((IData)(simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____VdfgTmp_h5a92f540__0) 
           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[1U] 
              >> 0x1fU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__1__KET____DOT__bank_we 
        = ((IData)(simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____VdfgTmp_h5966c547__0) 
           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[1U] 
              >> 0x1eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__1__KET____DOT__bank_we 
        = ((IData)(simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____VdfgTmp_h5966c547__0) 
           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[1U] 
              >> 0x1fU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__2__KET____DOT__bank_we 
        = ((IData)(simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____VdfgTmp_h596acb1a__0) 
           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[1U] 
              >> 0x1eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank_we 
        = ((IData)(simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____VdfgTmp_h596acb1a__0) 
           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[1U] 
              >> 0x1fU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__3__KET____DOT__bank_we 
        = ((IData)(simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____VdfgTmp_h5076bac2__0) 
           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[1U] 
              >> 0x1eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank_we 
        = ((IData)(simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____VdfgTmp_h5076bac2__0) 
           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[1U] 
              >> 0x1fU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__0__KET____DOT__bank_we 
        = ((IData)(simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____VdfgTmp_h5a92f540__0) 
           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[1U] 
              >> 0x1eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__0__KET____DOT__bank_we 
        = ((IData)(simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____VdfgTmp_h5a92f540__0) 
           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[1U] 
              >> 0x1fU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__1__KET____DOT__bank_we 
        = ((IData)(simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____VdfgTmp_h5966c547__0) 
           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[1U] 
              >> 0x1eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__1__KET____DOT__bank_we 
        = ((IData)(simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____VdfgTmp_h5966c547__0) 
           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[1U] 
              >> 0x1fU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__2__KET____DOT__bank_we 
        = ((IData)(simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____VdfgTmp_h596acb1a__0) 
           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[1U] 
              >> 0x1eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank_we 
        = ((IData)(simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____VdfgTmp_h596acb1a__0) 
           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[1U] 
              >> 0x1fU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__3__KET____DOT__bank_we 
        = ((IData)(simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____VdfgTmp_h5076bac2__0) 
           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[1U] 
              >> 0x1eU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank_we 
        = ((IData)(simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____VdfgTmp_h5076bac2__0) 
           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[1U] 
              >> 0x1fU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_ready_go 
        = (1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__refill_data_ok_cached) 
                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__refill_data_ok_uncached) 
                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__lookup_data_ok))) 
                 | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__csrmsg_data[0U] 
                     >> 0xaU) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp_valid))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__ar_mux__DOT__and_gates__BRA__3__KET____DOT__or_result 
        = (((- (IData)(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_uncached) 
                        & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT____Vcellout__priority_ar__out) 
                           >> 1U)))) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_size) 
                                        << 0xaU)) | 
           ((0x903U & (- (IData)(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_uncached)) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT____Vcellout__priority_ar__out) 
                                     >> 1U))))) | (
                                                   ((- (IData)(
                                                               ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_uncached) 
                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT____Vcellout__priority_ar__out)))) 
                                                    & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_size) 
                                                       << 0xaU)) 
                                                   | (0x903U 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_uncached)) 
                                                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT____Vcellout__priority_ar__out)))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu_arvalid = (IData)(
                                                           (0U 
                                                            != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT____Vcellout__priority_ar__out)));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_araddr 
        = ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT____Vcellout__priority_ar__out))
            ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_tag_new 
                << 0xcU) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_index) 
                             << 4U) | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_uncached)
                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_offset)
                                        : 0U))) : (
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_tag_new 
                                                    << 0xcU) 
                                                   | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_index) 
                                                       << 4U) 
                                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_uncached)
                                                          ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_offset)
                                                          : 0U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__brstall 
        = ((((IData)((0U != (0x4400U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU]))) 
             & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT____VdfgTmp_hf7cffa19__0) 
                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT____VdfgTmp_h2a69b9a6__0))) 
            | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xbU] 
                >> 8U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT____VdfgTmp_h81692869__0) 
                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT____VdfgTmp_h7e7f3c05__0)))) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_branch_inst));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_id_true 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__MEM_forward_valid) 
            & ((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xaU] 
                         >> 9U)) == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_id)))
            ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xaU] 
                << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[9U] 
                             >> 9U)) : (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__WB_forward_valid) 
                                         & ((IData)(vlSelf->debug0_wb_rf_wnum) 
                                            == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_id)))
                                         ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb
                                         : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_id));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_is_exc 
        = (1U & ((0x400U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__csrmsg_data[0U])
                  ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__csrmsg_data[0U] 
                     >> 0xaU) : ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SYSCALL_TYPE) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BRK_TYPE) 
                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__is_ine_id) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_TLBINV_TYPEM) 
                                           & (IData)(
                                                     ((0U 
                                                       != 
                                                       (0x3ff8U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__immout_id)) 
                                                      | (7U 
                                                         == 
                                                         (7U 
                                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__immout_id)))))) 
                                       | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__csrmsg_data[0U] 
                                          >> 0xaU))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__branchPC 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_JIRL_TYPE)
             ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id_true
             : (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                        >> 0x20U))) + vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__immout_id);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__difference 
        = (0x1ffffffffULL & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__minuend_shifted 
                             - (QData)((IData)(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divUnsigned)
                                                 ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex
                                                 : 
                                                ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex 
                                                  >> 0x1fU)
                                                  ? 
                                                 (- vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)
                                                  : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__mul_result 
        = ((0xbU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU] 
                              >> 0x10U))) ? ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)) 
                                             * (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)))
            : ((0xcU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU] 
                                  >> 0x10U))) ? VL_MULS_QQQ(64, 
                                                            (((QData)((IData)(
                                                                              (- (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                                                                                >> 0x1fU))))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex))), 
                                                            (((QData)((IData)(
                                                                              (- (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex 
                                                                                >> 0x1fU))))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex))))
                : ((0xdU == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU] 
                                      >> 0x10U))) ? 
                   ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)) 
                    * (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)))
                    : 0ULL)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_sign 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
            ^ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex) 
           >> 0x1fU);
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divUnsigned) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__remainder 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__remainder_u;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__quotient 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_u;
    } else {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__remainder 
            = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                >> 0x1fU) ? (- vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__remainder_u)
                : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__remainder_u);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__quotient 
            = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_sign)
                ? (- vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_u)
                : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_u);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT____VdfgTmp_hb3e29d94__0 
        = ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__state)) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__w_finish));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT____VdfgTmp_ha3725e82__0 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__w_finish)) 
           & (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__state)));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_pop 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_push 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid) 
              & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop)) 
                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid)))));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_pop 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_push 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid) 
              & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop)) 
                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__rdata_mux__DOT__and_gates__BRA__2__KET____DOT__or_result 
        = (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__lookup_data_ok))) 
            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__lookup_rdata) 
           | (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__refill_data_ok_cached))) 
               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__refill_word) 
              | ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__refill_data_ok_uncached))) 
                 & vlSelf->simu_top__DOT__soc__DOT__m0_rdata)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData 
        = ((0x20000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xaU])
            ? ((0x10000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xaU])
                ? ((0x8000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xaU])
                    ? ((0x4000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xaU])
                        ? (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__lookup_data_ok))) 
                            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__lookup_rdata) 
                           | (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_data_ok_cached))) 
                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_word) 
                              | ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_data_ok_uncached))) 
                                 & vlSelf->simu_top__DOT__soc__DOT__m0_rdata)))
                        : 0U) : ((0x4000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xaU])
                                  ? 0U : ((0x20U & 
                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xbU])
                                           ? ((0x20U 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xbU])
                                               ? ((
                                                   ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__lookup_data_ok))) 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__lookup_rdata) 
                                                   | (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_data_ok_cached))) 
                                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_word) 
                                                      | ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_data_ok_uncached))) 
                                                         & vlSelf->simu_top__DOT__soc__DOT__m0_rdata))) 
                                                  >> 0x10U)
                                               : 0U)
                                           : (((- (IData)(
                                                          ((((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__lookup_data_ok))) 
                                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__lookup_rdata) 
                                                            | (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_data_ok_cached))) 
                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_word) 
                                                               | ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_data_ok_uncached))) 
                                                                  & vlSelf->simu_top__DOT__soc__DOT__m0_rdata))) 
                                                           >> 0x1fU))) 
                                               << 0x10U) 
                                              | ((((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__lookup_data_ok))) 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__lookup_rdata) 
                                                  | (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_data_ok_cached))) 
                                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_word) 
                                                     | ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_data_ok_uncached))) 
                                                        & vlSelf->simu_top__DOT__soc__DOT__m0_rdata))) 
                                                 >> 0x10U)))))
                : ((0x8000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xaU])
                    ? 0U : ((0x4000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xaU])
                             ? 0U : ((0x20U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xbU])
                                      ? ((0x20U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xbU])
                                          ? ((((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__lookup_data_ok))) 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__lookup_rdata) 
                                              | (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_data_ok_cached))) 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_word) 
                                                 | ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_data_ok_uncached))) 
                                                    & vlSelf->simu_top__DOT__soc__DOT__m0_rdata))) 
                                             >> 0x18U)
                                          : 0U) : (
                                                   ((- (IData)(
                                                               ((((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__lookup_data_ok))) 
                                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__lookup_rdata) 
                                                                 | (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_data_ok_cached))) 
                                                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_word) 
                                                                    | ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_data_ok_uncached))) 
                                                                       & vlSelf->simu_top__DOT__soc__DOT__m0_rdata))) 
                                                                >> 0x1fU))) 
                                                    << 8U) 
                                                   | ((((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__lookup_data_ok))) 
                                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__lookup_rdata) 
                                                       | (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_data_ok_cached))) 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_word) 
                                                          | ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_data_ok_uncached))) 
                                                             & vlSelf->simu_top__DOT__soc__DOT__m0_rdata))) 
                                                      >> 0x18U))))))
            : ((0x10000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xaU])
                ? ((0x8000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xaU])
                    ? 0U : ((0x4000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xaU])
                             ? 0U : ((0x20U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xbU])
                                      ? ((0x20U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xbU])
                                          ? (0xffU 
                                             & ((((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__lookup_data_ok))) 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__lookup_rdata) 
                                                 | (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_data_ok_cached))) 
                                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_word) 
                                                    | ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_data_ok_uncached))) 
                                                       & vlSelf->simu_top__DOT__soc__DOT__m0_rdata))) 
                                                >> 0x10U))
                                          : 0U) : (
                                                   ((- (IData)(
                                                               (1U 
                                                                & ((((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__lookup_data_ok))) 
                                                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__lookup_rdata) 
                                                                    | (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_data_ok_cached))) 
                                                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_word) 
                                                                       | ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_data_ok_uncached))) 
                                                                          & vlSelf->simu_top__DOT__soc__DOT__m0_rdata))) 
                                                                   >> 0x17U)))) 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & ((((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__lookup_data_ok))) 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__lookup_rdata) 
                                                          | (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_data_ok_cached))) 
                                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_word) 
                                                             | ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_data_ok_uncached))) 
                                                                & vlSelf->simu_top__DOT__soc__DOT__m0_rdata))) 
                                                         >> 0x10U))))))
                : ((0x8000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xaU])
                    ? ((0x4000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xaU])
                        ? ((0x20U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xbU])
                            ? ((0x20U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xbU])
                                ? (0xffffU & (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__lookup_data_ok))) 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__lookup_rdata) 
                                              | (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_data_ok_cached))) 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_word) 
                                                 | ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_data_ok_uncached))) 
                                                    & vlSelf->simu_top__DOT__soc__DOT__m0_rdata))))
                                : 0U) : (((- (IData)(
                                                     (1U 
                                                      & ((((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__lookup_data_ok))) 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__lookup_rdata) 
                                                          | (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_data_ok_cached))) 
                                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_word) 
                                                             | ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_data_ok_uncached))) 
                                                                & vlSelf->simu_top__DOT__soc__DOT__m0_rdata))) 
                                                         >> 0xfU)))) 
                                          << 0x10U) 
                                         | (0xffffU 
                                            & (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__lookup_data_ok))) 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__lookup_rdata) 
                                               | (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_data_ok_cached))) 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_word) 
                                                  | ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_data_ok_uncached))) 
                                                     & vlSelf->simu_top__DOT__soc__DOT__m0_rdata))))))
                        : ((0x20U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xbU])
                            ? ((0x20U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xbU])
                                ? (0xffU & ((((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__lookup_data_ok))) 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__lookup_rdata) 
                                             | (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_data_ok_cached))) 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_word) 
                                                | ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_data_ok_uncached))) 
                                                   & vlSelf->simu_top__DOT__soc__DOT__m0_rdata))) 
                                            >> 8U))
                                : 0U) : (((- (IData)(
                                                     (1U 
                                                      & ((((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__lookup_data_ok))) 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__lookup_rdata) 
                                                          | (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_data_ok_cached))) 
                                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_word) 
                                                             | ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_data_ok_uncached))) 
                                                                & vlSelf->simu_top__DOT__soc__DOT__m0_rdata))) 
                                                         >> 0xfU)))) 
                                          << 8U) | 
                                         (0xffU & (
                                                   (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__lookup_data_ok))) 
                                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__lookup_rdata) 
                                                    | (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_data_ok_cached))) 
                                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_word) 
                                                       | ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_data_ok_uncached))) 
                                                          & vlSelf->simu_top__DOT__soc__DOT__m0_rdata))) 
                                                   >> 8U)))))
                    : ((0x4000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xaU])
                        ? ((0x20U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xbU])
                            ? ((0x20U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xbU])
                                ? (0xffU & (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__lookup_data_ok))) 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__lookup_rdata) 
                                            | (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_data_ok_cached))) 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_word) 
                                               | ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_data_ok_uncached))) 
                                                  & vlSelf->simu_top__DOT__soc__DOT__m0_rdata))))
                                : 0U) : (((- (IData)(
                                                     (1U 
                                                      & ((((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__lookup_data_ok))) 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__lookup_rdata) 
                                                          | (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_data_ok_cached))) 
                                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_word) 
                                                             | ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_data_ok_uncached))) 
                                                                & vlSelf->simu_top__DOT__soc__DOT__m0_rdata))) 
                                                         >> 7U)))) 
                                          << 8U) | 
                                         (0xffU & (
                                                   ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__lookup_data_ok))) 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__lookup_rdata) 
                                                   | (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_data_ok_cached))) 
                                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_word) 
                                                      | ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_data_ok_uncached))) 
                                                         & vlSelf->simu_top__DOT__soc__DOT__m0_rdata))))))
                        : 0U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_valid_in 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__pipeline_valid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_ready_go));
    vlSelf->simu_top__DOT__soc__DOT__m0_arvalid = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_arvalid) 
                                                   & (IData)(simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h34d16b8e__0));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push_data 
        = (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_araddr)) 
            << 0xdU) | (QData)((IData)(((0x1800U & 
                                         ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__ar_mux__DOT__and_gates__BRA__3__KET____DOT__or_result) 
                                          << 3U)) | 
                                        ((0x700U & 
                                          ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__ar_mux__DOT__and_gates__BRA__3__KET____DOT__or_result) 
                                           >> 2U)) 
                                         | (0xf0U & 
                                            ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__ar_mux__DOT__and_gates__BRA__3__KET____DOT__or_result) 
                                             << 4U)))))));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____VdfgTmp_h58a8c0e9__0 
        = ((0x1fafU == (0x1fffU & (vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_araddr 
                                   >> 0x10U))) | (0x1fd0U 
                                                  == 
                                                  (0x1fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_araddr 
                                                      >> 0x10U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__eq 
        = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_id_true 
           == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id_true);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__lt 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__unsignBranchCmp) 
            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id_true 
               < vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_id_true)) 
           | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__unsignBranchCmp)) 
              & VL_LTS_III(32, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id_true, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_id_true)));
    __Vtemp_h042604e3__0[0U] = (((IData)((((QData)((IData)(
                                                           vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__csrmsg_data[2U])) 
                                           << 0x26U) 
                                          | (((QData)((IData)(
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__csrmsg_data[1U])) 
                                              << 6U) 
                                             | ((QData)((IData)(
                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__csrmsg_data[0U])) 
                                                >> 0x1aU)))) 
                                 << 0x1aU) | ((0x3f00000U 
                                               & (((0x400U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__csrmsg_data[0U])
                                                    ? 
                                                   ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__csrmsg_data[0U] 
                                                     << 0xcU) 
                                                    | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__csrmsg_data[0U] 
                                                       >> 0x14U))
                                                    : 
                                                   ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SYSCALL_TYPE)
                                                     ? 0xbU
                                                     : 
                                                    ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BRK_TYPE)
                                                      ? 0xcU
                                                      : 
                                                     (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__is_ine_id) 
                                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_TLBINV_TYPEM) 
                                                          & (IData)(
                                                                    ((0U 
                                                                      != 
                                                                      (0x3ff8U 
                                                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__immout_id)) 
                                                                     | (7U 
                                                                        == 
                                                                        (7U 
                                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__immout_id))))))
                                                       ? 0xdU
                                                       : 
                                                      ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__csrmsg_data[0U] 
                                                        << 0xcU) 
                                                       | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__csrmsg_data[0U] 
                                                          >> 0x14U)))))) 
                                                  << 0x14U)) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_is_exc) 
                                                  << 0xaU) 
                                                 | (0x3ffU 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__csrmsg_data[0U]))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_csrmsgin[0U] 
        = __Vtemp_h042604e3__0[0U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_csrmsgin[1U] 
        = (((IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__csrmsg_data[2U])) 
                      << 0x26U) | (((QData)((IData)(
                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__csrmsg_data[1U])) 
                                    << 6U) | ((QData)((IData)(
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__csrmsg_data[0U])) 
                                              >> 0x1aU)))) 
            >> 6U) | ((IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__csrmsg_data[2U])) 
                                 << 0x26U) | (((QData)((IData)(
                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__csrmsg_data[1U])) 
                                               << 6U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__csrmsg_data[0U])) 
                                                 >> 0x1aU))) 
                               >> 0x20U)) << 0x1aU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_csrmsgin[2U] 
        = ((IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__csrmsg_data[2U])) 
                      << 0x26U) | (((QData)((IData)(
                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__csrmsg_data[1U])) 
                                    << 6U) | ((QData)((IData)(
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__csrmsg_data[0U])) 
                                              >> 0x1aU))) 
                    >> 0x20U)) >> 6U);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__minuend_next 
        = ((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__difference 
                          >> 0x20U))) ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__minuend_shifted
            : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__difference);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_b 
        = ((0x100000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU])
            ? ((0x80000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU])
                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex
                : ((0x40000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU])
                    ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex
                    : ((0x20000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU])
                        ? ((0x10000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU])
                            ? 4U : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)
                        : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)))
            : ((0x80000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU])
                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex
                : ((0x40000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU])
                    ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex
                    : ((0x20000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU])
                        ? ((0x10000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU])
                            ? (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)
                            : (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex))
                        : ((0x10000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU])
                            ? (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)
                            : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_result 
        = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
           + (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_b 
              + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_cin)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluout_ex 
        = ((0x100000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU])
            ? ((0x80000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU])
                ? 0U : ((0x40000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU])
                         ? 0U : ((0x20000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU])
                                  ? ((0x10000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU])
                                      ? ((IData)(4U) 
                                         + vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)
                                      : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)
                                  : ((0x10000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU])
                                      ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__remainder
                                      : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__quotient))))
            : ((0x80000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU])
                ? ((0x40000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU])
                    ? ((0x20000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU])
                        ? ((0x10000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU])
                            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__remainder
                            : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__quotient)
                        : ((0x10000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU])
                            ? (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__mul_result 
                                       >> 0x20U)) : (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__mul_result 
                                                             >> 0x20U))))
                    : ((0x20000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU])
                        ? ((0x10000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU])
                            ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__mul_result)
                            : VL_SHIFTRS_III(32,32,5, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex, 
                                             (0x1fU 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)))
                        : ((0x10000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU])
                            ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                               >> (0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex))
                            : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                               << (0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)))))
                : ((0x40000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU])
                    ? ((0x20000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU])
                        ? ((0x10000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU])
                            ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                               ^ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)
                            : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                               | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex))
                        : ((0x10000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU])
                            ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)
                            : (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                                  | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex))))
                    : ((0x20000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU])
                        ? ((0x10000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU])
                            ? (1U & (~ (IData)((1ULL 
                                                & (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)) 
                                                    + 
                                                    ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_b)) 
                                                     + (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_cin)))) 
                                                   >> 0x20U)))))
                            : (1U & (((~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex 
                                          >> 0x1fU)) 
                                      & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                                         >> 0x1fU)) 
                                     | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_sign)) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_result 
                                           >> 0x1fU)))))
                        : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_result))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__next_mux__DOT__and_gates__BRA__3__KET____DOT__or_result 
        = ((1U & (- (IData)(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__idle_to_aw_w) 
                             | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_awready)) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT____VdfgTmp_ha3725e82__0)))))) 
           | ((2U & (- (IData)((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_awready)) 
                                 & (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__state))) 
                                | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_awready)) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT____VdfgTmp_hb3e29d94__0)))))) 
              | ((3U & (- (IData)((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT____VdfgTmp_ha3725e82__0) 
                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_awready)) 
                                   | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__w_finish)) 
                                      & (3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__state))))))) 
                 | (4U & (- (IData)((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT____VdfgTmp_hb3e29d94__0) 
                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_awready)) 
                                     | (((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__state)) 
                                         & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_awready)) 
                                        | (((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__state)) 
                                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__w_finish)) 
                                           | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_bvalid)) 
                                              & (4U 
                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__state))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____VdfgTmp_h58a8c0e9__0) 
            << 3U) | (((0x1fe0U == (vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_araddr 
                                    >> 0x10U)) << 2U) 
                      | (1U & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____VdfgTmp_h58a8c0e9__0) 
                                  | (0x1fe0U == (vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_araddr 
                                                 >> 0x10U)))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__pcsel 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BEQ_TYPE) 
            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__eq)) 
           | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__eq)) 
               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BNE_TYPE)) 
              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BLT_TYPE) 
                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__lt)) 
                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BLTU_TYPE) 
                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__lt)) 
                    | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__lt)) 
                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BGE_TYPE)) 
                       | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__lt)) 
                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BGEU_TYPE)) 
                          | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_JIRL_TYPE) 
                             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_b_inst))))))));
    __Vtableidx2 = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir 
        = Vsimu_top__ConstPool__TABLE_hfbff4245_0[__Vtableidx2];
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int 
        = Vsimu_top__ConstPool__TABLE_h14a2fcf8_0[__Vtableidx2];
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h136afa62__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
            & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit)) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arvalid));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid)) 
           | (IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h136afa62__0));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h136afa62__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit) 
               >> 1U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arvalid));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid 
        = ((0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h136afa62__0) 
              << 1U));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h136afa62__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit) 
               >> 2U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arvalid));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid 
        = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h136afa62__0) 
              << 2U));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h136afa62__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit) 
               >> 3U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arvalid));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h136afa62__0) 
              << 3U));
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h136afa62__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit) 
               >> 4U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arvalid));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid 
        = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid)) 
           | ((IData)(simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h136afa62__0) 
              << 4U));
    vlSelf->simu_top__DOT__soc__DOT__m0_arready = 0U;
    if ((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
               & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit)))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_arready 
            = (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready));
    }
    if ((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit) 
                  >> 1U)))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_arready 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready) 
                     >> 1U));
    }
    if ((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit) 
                  >> 2U)))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_arready 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready) 
                     >> 2U));
    }
    if ((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit) 
                  >> 3U)))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_arready 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready) 
                     >> 3U));
    }
    if (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
         & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit) 
            >> 4U))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_arready 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready) 
                     >> 4U));
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__branchPC_temp_valid)
            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__branchPC_temp
            : ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__exlike)
                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__exaddr
                : ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__pcsel)
                    ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__pcsel)
                        ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__branchPC
                        : 0U) : ((IData)(4U) + vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__pipeline_data))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex 
        = ((0U == (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU] 
                            >> 0x10U))) ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluout_ex
            : 0U);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_cpu 
        = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr) 
                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd) 
                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid)) 
                       >> 2U))));
    __Vtableidx3 = ((0xfffffe00U & ((((8U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm)) 
                                      << 9U) & (((IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_rlast) 
                                                 << 9U) 
                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                                   << 7U))) 
                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                        << 7U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_bvalid) 
                                                  << 9U)))) 
                    | ((0x100U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)) 
                                  << 8U)) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd) 
                                              << 7U) 
                                             | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr) 
                                                 << 6U) 
                                                | ((0x20U 
                                                    & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                                       << 3U)) 
                                                   | ((0x10U 
                                                       & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                                          << 2U)) 
                                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm)))))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm_nxt 
        = Vsimu_top__ConstPool__TABLE_h24f8336e_0[__Vtableidx3];
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push 
        = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid)) 
                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                    >> 3U)));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_push 
        = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid)) 
                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid)));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_dir_ins 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arready) 
              & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arvalid)));
    vlSelf->simu_top__DOT__soc__DOT__cpu_arready = 
        ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arready) 
         & (IData)(simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h34d16b8e__0));
    if ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
           [0U][2U] >> 0x18U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                  [0U][2U] >> 0xdU) 
                                 | ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [0U][2U] 
                                               >> 0xeU)) 
                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid)))) 
         & ((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                          [0U][2U] << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [0U][1U] 
                                               >> 0x14U))) 
            == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC 
                >> 0xdU)))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_tlb_ind = 0U;
    }
    if ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
           [1U][2U] >> 0x18U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                  [1U][2U] >> 0xdU) 
                                 | ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [1U][2U] 
                                               >> 0xeU)) 
                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid)))) 
         & ((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                          [1U][2U] << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [1U][1U] 
                                               >> 0x14U))) 
            == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC 
                >> 0xdU)))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_tlb_ind = 1U;
    }
    if ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
           [2U][2U] >> 0x18U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                  [2U][2U] >> 0xdU) 
                                 | ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [2U][2U] 
                                               >> 0xeU)) 
                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid)))) 
         & ((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                          [2U][2U] << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [2U][1U] 
                                               >> 0x14U))) 
            == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC 
                >> 0xdU)))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_tlb_ind = 2U;
    }
    if ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
           [3U][2U] >> 0x18U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                  [3U][2U] >> 0xdU) 
                                 | ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [3U][2U] 
                                               >> 0xeU)) 
                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid)))) 
         & ((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                          [3U][2U] << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [3U][1U] 
                                               >> 0x14U))) 
            == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC 
                >> 0xdU)))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_tlb_ind = 3U;
    }
    if ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
           [4U][2U] >> 0x18U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                  [4U][2U] >> 0xdU) 
                                 | ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [4U][2U] 
                                               >> 0xeU)) 
                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid)))) 
         & ((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                          [4U][2U] << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [4U][1U] 
                                               >> 0x14U))) 
            == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC 
                >> 0xdU)))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_tlb_ind = 4U;
    }
    if ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
           [5U][2U] >> 0x18U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                  [5U][2U] >> 0xdU) 
                                 | ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [5U][2U] 
                                               >> 0xeU)) 
                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid)))) 
         & ((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                          [5U][2U] << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [5U][1U] 
                                               >> 0x14U))) 
            == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC 
                >> 0xdU)))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_tlb_ind = 5U;
    }
    if ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
           [6U][2U] >> 0x18U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                  [6U][2U] >> 0xdU) 
                                 | ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [6U][2U] 
                                               >> 0xeU)) 
                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid)))) 
         & ((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                          [6U][2U] << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [6U][1U] 
                                               >> 0x14U))) 
            == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC 
                >> 0xdU)))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_tlb_ind = 6U;
    }
    if ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
           [7U][2U] >> 0x18U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                  [7U][2U] >> 0xdU) 
                                 | ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [7U][2U] 
                                               >> 0xeU)) 
                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid)))) 
         & ((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                          [7U][2U] << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [7U][1U] 
                                               >> 0x14U))) 
            == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC 
                >> 0xdU)))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_tlb_ind = 7U;
    }
    if ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
           [8U][2U] >> 0x18U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                  [8U][2U] >> 0xdU) 
                                 | ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [8U][2U] 
                                               >> 0xeU)) 
                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid)))) 
         & ((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                          [8U][2U] << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [8U][1U] 
                                               >> 0x14U))) 
            == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC 
                >> 0xdU)))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_tlb_ind = 8U;
    }
    if ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
           [9U][2U] >> 0x18U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                  [9U][2U] >> 0xdU) 
                                 | ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [9U][2U] 
                                               >> 0xeU)) 
                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid)))) 
         & ((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                          [9U][2U] << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [9U][1U] 
                                               >> 0x14U))) 
            == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC 
                >> 0xdU)))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_tlb_ind = 9U;
    }
    if ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
           [0xaU][2U] >> 0x18U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                    [0xaU][2U] >> 0xdU) 
                                   | ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                 [0xaU][2U] 
                                                 >> 0xeU)) 
                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid)))) 
         & ((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                          [0xaU][2U] << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                 [0xaU][1U] 
                                                 >> 0x14U))) 
            == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC 
                >> 0xdU)))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_tlb_ind = 0xaU;
    }
    if ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
           [0xbU][2U] >> 0x18U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                    [0xbU][2U] >> 0xdU) 
                                   | ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                 [0xbU][2U] 
                                                 >> 0xeU)) 
                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid)))) 
         & ((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                          [0xbU][2U] << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                 [0xbU][1U] 
                                                 >> 0x14U))) 
            == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC 
                >> 0xdU)))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_tlb_ind = 0xbU;
    }
    if ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
           [0xcU][2U] >> 0x18U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                    [0xcU][2U] >> 0xdU) 
                                   | ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                 [0xcU][2U] 
                                                 >> 0xeU)) 
                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid)))) 
         & ((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                          [0xcU][2U] << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                 [0xcU][1U] 
                                                 >> 0x14U))) 
            == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC 
                >> 0xdU)))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_tlb_ind = 0xcU;
    }
    if ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
           [0xdU][2U] >> 0x18U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                    [0xdU][2U] >> 0xdU) 
                                   | ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                 [0xdU][2U] 
                                                 >> 0xeU)) 
                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid)))) 
         & ((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                          [0xdU][2U] << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                 [0xdU][1U] 
                                                 >> 0x14U))) 
            == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC 
                >> 0xdU)))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_tlb_ind = 0xdU;
    }
    if ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
           [0xeU][2U] >> 0x18U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                    [0xeU][2U] >> 0xdU) 
                                   | ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                 [0xeU][2U] 
                                                 >> 0xeU)) 
                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid)))) 
         & ((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                          [0xeU][2U] << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                 [0xeU][1U] 
                                                 >> 0x14U))) 
            == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC 
                >> 0xdU)))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_tlb_ind = 0xeU;
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tmp1 = 1U;
    if ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
           [0U][2U] >> 0x18U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                  [0U][2U] >> 0xdU) 
                                 | ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [0U][2U] 
                                               >> 0xeU)) 
                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid)))) 
         & ((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                          [0U][2U] << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [0U][1U] 
                                               >> 0x14U))) 
            == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC 
                >> 0xdU)))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tmp1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_tlb_phytranitem 
            = (0x3ffffffU & ((0x1000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC)
                              ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                             [0U][0U] : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                          [0U][1U] 
                                          << 6U) | 
                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                          [0U][0U] 
                                          >> 0x1aU))));
    }
    if ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
           [1U][2U] >> 0x18U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                  [1U][2U] >> 0xdU) 
                                 | ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [1U][2U] 
                                               >> 0xeU)) 
                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid)))) 
         & ((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                          [1U][2U] << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [1U][1U] 
                                               >> 0x14U))) 
            == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC 
                >> 0xdU)))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tmp1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_tlb_phytranitem 
            = (0x3ffffffU & ((0x1000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC)
                              ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                             [1U][0U] : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                          [1U][1U] 
                                          << 6U) | 
                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                          [1U][0U] 
                                          >> 0x1aU))));
    }
    if ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
           [2U][2U] >> 0x18U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                  [2U][2U] >> 0xdU) 
                                 | ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [2U][2U] 
                                               >> 0xeU)) 
                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid)))) 
         & ((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                          [2U][2U] << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [2U][1U] 
                                               >> 0x14U))) 
            == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC 
                >> 0xdU)))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tmp1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_tlb_phytranitem 
            = (0x3ffffffU & ((0x1000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC)
                              ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                             [2U][0U] : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                          [2U][1U] 
                                          << 6U) | 
                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                          [2U][0U] 
                                          >> 0x1aU))));
    }
    if ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
           [3U][2U] >> 0x18U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                  [3U][2U] >> 0xdU) 
                                 | ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [3U][2U] 
                                               >> 0xeU)) 
                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid)))) 
         & ((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                          [3U][2U] << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [3U][1U] 
                                               >> 0x14U))) 
            == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC 
                >> 0xdU)))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tmp1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_tlb_phytranitem 
            = (0x3ffffffU & ((0x1000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC)
                              ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                             [3U][0U] : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                          [3U][1U] 
                                          << 6U) | 
                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                          [3U][0U] 
                                          >> 0x1aU))));
    }
    if ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
           [4U][2U] >> 0x18U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                  [4U][2U] >> 0xdU) 
                                 | ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [4U][2U] 
                                               >> 0xeU)) 
                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid)))) 
         & ((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                          [4U][2U] << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [4U][1U] 
                                               >> 0x14U))) 
            == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC 
                >> 0xdU)))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tmp1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_tlb_phytranitem 
            = (0x3ffffffU & ((0x1000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC)
                              ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                             [4U][0U] : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                          [4U][1U] 
                                          << 6U) | 
                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                          [4U][0U] 
                                          >> 0x1aU))));
    }
    if ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
           [5U][2U] >> 0x18U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                  [5U][2U] >> 0xdU) 
                                 | ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [5U][2U] 
                                               >> 0xeU)) 
                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid)))) 
         & ((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                          [5U][2U] << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [5U][1U] 
                                               >> 0x14U))) 
            == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC 
                >> 0xdU)))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tmp1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_tlb_phytranitem 
            = (0x3ffffffU & ((0x1000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC)
                              ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                             [5U][0U] : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                          [5U][1U] 
                                          << 6U) | 
                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                          [5U][0U] 
                                          >> 0x1aU))));
    }
    if ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
           [6U][2U] >> 0x18U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                  [6U][2U] >> 0xdU) 
                                 | ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [6U][2U] 
                                               >> 0xeU)) 
                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid)))) 
         & ((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                          [6U][2U] << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [6U][1U] 
                                               >> 0x14U))) 
            == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC 
                >> 0xdU)))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tmp1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_tlb_phytranitem 
            = (0x3ffffffU & ((0x1000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC)
                              ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                             [6U][0U] : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                          [6U][1U] 
                                          << 6U) | 
                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                          [6U][0U] 
                                          >> 0x1aU))));
    }
    if ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
           [7U][2U] >> 0x18U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                  [7U][2U] >> 0xdU) 
                                 | ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [7U][2U] 
                                               >> 0xeU)) 
                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid)))) 
         & ((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                          [7U][2U] << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [7U][1U] 
                                               >> 0x14U))) 
            == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC 
                >> 0xdU)))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tmp1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_tlb_phytranitem 
            = (0x3ffffffU & ((0x1000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC)
                              ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                             [7U][0U] : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                          [7U][1U] 
                                          << 6U) | 
                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                          [7U][0U] 
                                          >> 0x1aU))));
    }
    if ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
           [8U][2U] >> 0x18U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                  [8U][2U] >> 0xdU) 
                                 | ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [8U][2U] 
                                               >> 0xeU)) 
                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid)))) 
         & ((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                          [8U][2U] << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [8U][1U] 
                                               >> 0x14U))) 
            == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC 
                >> 0xdU)))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tmp1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_tlb_phytranitem 
            = (0x3ffffffU & ((0x1000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC)
                              ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                             [8U][0U] : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                          [8U][1U] 
                                          << 6U) | 
                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                          [8U][0U] 
                                          >> 0x1aU))));
    }
    if ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
           [9U][2U] >> 0x18U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                  [9U][2U] >> 0xdU) 
                                 | ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [9U][2U] 
                                               >> 0xeU)) 
                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid)))) 
         & ((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                          [9U][2U] << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [9U][1U] 
                                               >> 0x14U))) 
            == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC 
                >> 0xdU)))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tmp1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_tlb_phytranitem 
            = (0x3ffffffU & ((0x1000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC)
                              ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                             [9U][0U] : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                          [9U][1U] 
                                          << 6U) | 
                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                          [9U][0U] 
                                          >> 0x1aU))));
    }
    if ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
           [0xaU][2U] >> 0x18U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                    [0xaU][2U] >> 0xdU) 
                                   | ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                 [0xaU][2U] 
                                                 >> 0xeU)) 
                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid)))) 
         & ((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                          [0xaU][2U] << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                 [0xaU][1U] 
                                                 >> 0x14U))) 
            == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC 
                >> 0xdU)))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tmp1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_tlb_phytranitem 
            = (0x3ffffffU & ((0x1000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC)
                              ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                             [0xaU][0U] : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                            [0xaU][1U] 
                                            << 6U) 
                                           | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                              [0xaU][0U] 
                                              >> 0x1aU))));
    }
    if ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
           [0xbU][2U] >> 0x18U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                    [0xbU][2U] >> 0xdU) 
                                   | ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                 [0xbU][2U] 
                                                 >> 0xeU)) 
                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid)))) 
         & ((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                          [0xbU][2U] << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                 [0xbU][1U] 
                                                 >> 0x14U))) 
            == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC 
                >> 0xdU)))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tmp1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_tlb_phytranitem 
            = (0x3ffffffU & ((0x1000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC)
                              ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                             [0xbU][0U] : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                            [0xbU][1U] 
                                            << 6U) 
                                           | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                              [0xbU][0U] 
                                              >> 0x1aU))));
    }
    if ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
           [0xcU][2U] >> 0x18U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                    [0xcU][2U] >> 0xdU) 
                                   | ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                 [0xcU][2U] 
                                                 >> 0xeU)) 
                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid)))) 
         & ((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                          [0xcU][2U] << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                 [0xcU][1U] 
                                                 >> 0x14U))) 
            == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC 
                >> 0xdU)))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tmp1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_tlb_phytranitem 
            = (0x3ffffffU & ((0x1000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC)
                              ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                             [0xcU][0U] : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                            [0xcU][1U] 
                                            << 6U) 
                                           | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                              [0xcU][0U] 
                                              >> 0x1aU))));
    }
    if ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
           [0xdU][2U] >> 0x18U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                    [0xdU][2U] >> 0xdU) 
                                   | ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                 [0xdU][2U] 
                                                 >> 0xeU)) 
                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid)))) 
         & ((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                          [0xdU][2U] << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                 [0xdU][1U] 
                                                 >> 0x14U))) 
            == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC 
                >> 0xdU)))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tmp1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_tlb_phytranitem 
            = (0x3ffffffU & ((0x1000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC)
                              ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                             [0xdU][0U] : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                            [0xdU][1U] 
                                            << 6U) 
                                           | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                              [0xdU][0U] 
                                              >> 0x1aU))));
    }
    if ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
           [0xeU][2U] >> 0x18U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                    [0xeU][2U] >> 0xdU) 
                                   | ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                 [0xeU][2U] 
                                                 >> 0xeU)) 
                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid)))) 
         & ((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                          [0xeU][2U] << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                 [0xeU][1U] 
                                                 >> 0x14U))) 
            == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC 
                >> 0xdU)))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tmp1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_tlb_phytranitem 
            = (0x3ffffffU & ((0x1000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC)
                              ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                             [0xeU][0U] : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                            [0xeU][1U] 
                                            << 6U) 
                                           | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                              [0xeU][0U] 
                                              >> 0x1aU))));
    }
    if ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
           [0xfU][2U] >> 0x18U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                    [0xfU][2U] >> 0xdU) 
                                   | ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                 [0xfU][2U] 
                                                 >> 0xeU)) 
                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid)))) 
         & ((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                          [0xfU][2U] << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                 [0xfU][1U] 
                                                 >> 0x14U))) 
            == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC 
                >> 0xdU)))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_tlb_ind = 0xfU;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tmp1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_tlb_phytranitem 
            = (0x3ffffffU & ((0x1000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC)
                              ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                             [0xfU][0U] : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                            [0xfU][1U] 
                                            << 6U) 
                                           | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                              [0xfU][0U] 
                                              >> 0x1aU))));
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_tlb_ne 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tmp1;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_is_dmw 
        = ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__da) 
               & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__pg)))) 
           & ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[1U] 
                 >> 0x1dU) == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC 
                               >> 0x1dU)) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[
                                             (((IData)(0x20U) 
                                               + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__plv)) 
                                              >> 5U)] 
                                             >> (0x1fU 
                                                 & ((IData)(0x20U) 
                                                    + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__plv))))) 
              | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0U] 
                   >> 0x1dU) == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC 
                                 >> 0x1dU)) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[
                                               ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__plv) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__plv))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_is_usetlb 
        = (1U & ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__da) 
                     & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__pg)))) 
                 & ((~ (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[1U] 
                          >> 0x1dU) == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC 
                                        >> 0x1dU)) 
                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[
                           (((IData)(0x20U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__plv)) 
                            >> 5U)] >> (0x1fU & ((IData)(0x20U) 
                                                 + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__plv)))))) 
                    & (~ (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0U] 
                            >> 0x1dU) == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC 
                                          >> 0x1dU)) 
                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[
                             ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__plv) 
                              >> 5U)] >> (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__plv))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_is_dmw 
        = ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__da) 
               & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellinp__addr_trans_memaddr__pg)))) 
           & ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[1U] 
                 >> 0x1dU) == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex 
                               >> 0x1dU)) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[
                                             (((IData)(0x20U) 
                                               + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__plv)) 
                                              >> 5U)] 
                                             >> (0x1fU 
                                                 & ((IData)(0x20U) 
                                                    + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__plv))))) 
              | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0U] 
                   >> 0x1dU) == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex 
                                 >> 0x1dU)) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[
                                               ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__plv) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__plv))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_is_usetlb 
        = (1U & ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__da) 
                     & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellinp__addr_trans_memaddr__pg)))) 
                 & ((~ (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[1U] 
                          >> 0x1dU) == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex 
                                        >> 0x1dU)) 
                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[
                           (((IData)(0x20U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__plv)) 
                            >> 5U)] >> (0x1fU & ((IData)(0x20U) 
                                                 + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__plv)))))) 
                    & (~ (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0U] 
                            >> 0x1dU) == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex 
                                          >> 0x1dU)) 
                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[
                             ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__plv) 
                              >> 5U)] >> (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__plv))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellinp__tlb__s1_vppn 
        = (0x7ffffU & (((- (IData)((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U] 
                                          >> 7U)))) 
                        & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x14U] 
                            << 0x13U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x14U] 
                                         >> 0xdU))) 
                       | ((- (IData)((1U & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U] 
                                               >> 7U))))) 
                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex 
                             >> 0xdU))));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_push 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push) 
           & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_valid)) 
              | (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop)));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_push 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_valid) 
              & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop)) 
                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid)))));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_push 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_push) 
           & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid)) 
              | (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop)));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_push 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_push) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid) 
              & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop)) 
                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache_rd_rdy 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_arready) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT____Vcellout__priority_ar__out) 
              >> 1U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache_rd_rdy 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_arready) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT____Vcellout__priority_ar__out));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_is_exc 
        = (((0U != (3U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC)) 
            & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_is_dmw))) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_is_usetlb) 
              & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_tlb_ne) 
                 | ((~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_tlb_phytranitem 
                        >> 0x19U)) | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__plv) 
                                      > (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_tlb_phytranitem 
                                               >> 0x14U)))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_excode 
        = (((0U != (3U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC)) 
            & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_is_dmw)))
            ? 8U : ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_is_usetlb)
                     ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_tlb_ne)
                         ? 0x3fU : ((0x2000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_tlb_phytranitem)
                                     ? (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__plv) 
                                         > (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_tlb_phytranitem 
                                                  >> 0x14U)))
                                         ? 7U : 0U)
                                     : 3U)) : 0U));
    if ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
           [0U][2U] >> 0x18U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                  [0U][2U] >> 0xdU) 
                                 | ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [0U][2U] 
                                               >> 0xeU)) 
                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid)))) 
         & ((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                          [0U][2U] << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [0U][1U] 
                                               >> 0x14U))) 
            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellinp__tlb__s1_vppn))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_ind = 0U;
    }
    if ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
           [1U][2U] >> 0x18U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                  [1U][2U] >> 0xdU) 
                                 | ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [1U][2U] 
                                               >> 0xeU)) 
                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid)))) 
         & ((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                          [1U][2U] << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [1U][1U] 
                                               >> 0x14U))) 
            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellinp__tlb__s1_vppn))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_ind = 1U;
    }
    if ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
           [2U][2U] >> 0x18U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                  [2U][2U] >> 0xdU) 
                                 | ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [2U][2U] 
                                               >> 0xeU)) 
                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid)))) 
         & ((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                          [2U][2U] << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [2U][1U] 
                                               >> 0x14U))) 
            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellinp__tlb__s1_vppn))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_ind = 2U;
    }
    if ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
           [3U][2U] >> 0x18U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                  [3U][2U] >> 0xdU) 
                                 | ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [3U][2U] 
                                               >> 0xeU)) 
                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid)))) 
         & ((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                          [3U][2U] << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [3U][1U] 
                                               >> 0x14U))) 
            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellinp__tlb__s1_vppn))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_ind = 3U;
    }
    if ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
           [4U][2U] >> 0x18U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                  [4U][2U] >> 0xdU) 
                                 | ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [4U][2U] 
                                               >> 0xeU)) 
                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid)))) 
         & ((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                          [4U][2U] << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [4U][1U] 
                                               >> 0x14U))) 
            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellinp__tlb__s1_vppn))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_ind = 4U;
    }
    if ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
           [5U][2U] >> 0x18U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                  [5U][2U] >> 0xdU) 
                                 | ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [5U][2U] 
                                               >> 0xeU)) 
                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid)))) 
         & ((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                          [5U][2U] << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [5U][1U] 
                                               >> 0x14U))) 
            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellinp__tlb__s1_vppn))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_ind = 5U;
    }
    if ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
           [6U][2U] >> 0x18U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                  [6U][2U] >> 0xdU) 
                                 | ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [6U][2U] 
                                               >> 0xeU)) 
                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid)))) 
         & ((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                          [6U][2U] << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [6U][1U] 
                                               >> 0x14U))) 
            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellinp__tlb__s1_vppn))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_ind = 6U;
    }
    if ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
           [7U][2U] >> 0x18U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                  [7U][2U] >> 0xdU) 
                                 | ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [7U][2U] 
                                               >> 0xeU)) 
                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid)))) 
         & ((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                          [7U][2U] << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [7U][1U] 
                                               >> 0x14U))) 
            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellinp__tlb__s1_vppn))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_ind = 7U;
    }
    if ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
           [8U][2U] >> 0x18U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                  [8U][2U] >> 0xdU) 
                                 | ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [8U][2U] 
                                               >> 0xeU)) 
                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid)))) 
         & ((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                          [8U][2U] << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [8U][1U] 
                                               >> 0x14U))) 
            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellinp__tlb__s1_vppn))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_ind = 8U;
    }
    if ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
           [9U][2U] >> 0x18U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                  [9U][2U] >> 0xdU) 
                                 | ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [9U][2U] 
                                               >> 0xeU)) 
                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid)))) 
         & ((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                          [9U][2U] << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [9U][1U] 
                                               >> 0x14U))) 
            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellinp__tlb__s1_vppn))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_ind = 9U;
    }
    if ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
           [0xaU][2U] >> 0x18U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                    [0xaU][2U] >> 0xdU) 
                                   | ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                 [0xaU][2U] 
                                                 >> 0xeU)) 
                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid)))) 
         & ((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                          [0xaU][2U] << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                 [0xaU][1U] 
                                                 >> 0x14U))) 
            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellinp__tlb__s1_vppn))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_ind = 0xaU;
    }
    if ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
           [0xbU][2U] >> 0x18U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                    [0xbU][2U] >> 0xdU) 
                                   | ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                 [0xbU][2U] 
                                                 >> 0xeU)) 
                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid)))) 
         & ((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                          [0xbU][2U] << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                 [0xbU][1U] 
                                                 >> 0x14U))) 
            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellinp__tlb__s1_vppn))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_ind = 0xbU;
    }
    if ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
           [0xcU][2U] >> 0x18U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                    [0xcU][2U] >> 0xdU) 
                                   | ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                 [0xcU][2U] 
                                                 >> 0xeU)) 
                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid)))) 
         & ((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                          [0xcU][2U] << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                 [0xcU][1U] 
                                                 >> 0x14U))) 
            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellinp__tlb__s1_vppn))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_ind = 0xcU;
    }
    if ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
           [0xdU][2U] >> 0x18U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                    [0xdU][2U] >> 0xdU) 
                                   | ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                 [0xdU][2U] 
                                                 >> 0xeU)) 
                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid)))) 
         & ((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                          [0xdU][2U] << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                 [0xdU][1U] 
                                                 >> 0x14U))) 
            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellinp__tlb__s1_vppn))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_ind = 0xdU;
    }
    if ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
           [0xeU][2U] >> 0x18U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                    [0xeU][2U] >> 0xdU) 
                                   | ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                 [0xeU][2U] 
                                                 >> 0xeU)) 
                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid)))) 
         & ((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                          [0xeU][2U] << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                 [0xeU][1U] 
                                                 >> 0x14U))) 
            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellinp__tlb__s1_vppn))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_ind = 0xeU;
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tmp0 = 1U;
    if ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
           [0U][2U] >> 0x18U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                  [0U][2U] >> 0xdU) 
                                 | ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [0U][2U] 
                                               >> 0xeU)) 
                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid)))) 
         & ((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                          [0U][2U] << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [0U][1U] 
                                               >> 0x14U))) 
            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellinp__tlb__s1_vppn))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tmp0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_phytranitem 
            = (0x3ffffffU & ((0x1000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex)
                              ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                             [0U][0U] : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                          [0U][1U] 
                                          << 6U) | 
                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                          [0U][0U] 
                                          >> 0x1aU))));
    }
    if ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
           [1U][2U] >> 0x18U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                  [1U][2U] >> 0xdU) 
                                 | ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [1U][2U] 
                                               >> 0xeU)) 
                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid)))) 
         & ((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                          [1U][2U] << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [1U][1U] 
                                               >> 0x14U))) 
            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellinp__tlb__s1_vppn))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tmp0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_phytranitem 
            = (0x3ffffffU & ((0x1000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex)
                              ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                             [1U][0U] : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                          [1U][1U] 
                                          << 6U) | 
                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                          [1U][0U] 
                                          >> 0x1aU))));
    }
    if ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
           [2U][2U] >> 0x18U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                  [2U][2U] >> 0xdU) 
                                 | ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [2U][2U] 
                                               >> 0xeU)) 
                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid)))) 
         & ((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                          [2U][2U] << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [2U][1U] 
                                               >> 0x14U))) 
            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellinp__tlb__s1_vppn))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tmp0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_phytranitem 
            = (0x3ffffffU & ((0x1000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex)
                              ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                             [2U][0U] : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                          [2U][1U] 
                                          << 6U) | 
                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                          [2U][0U] 
                                          >> 0x1aU))));
    }
    if ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
           [3U][2U] >> 0x18U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                  [3U][2U] >> 0xdU) 
                                 | ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [3U][2U] 
                                               >> 0xeU)) 
                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid)))) 
         & ((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                          [3U][2U] << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [3U][1U] 
                                               >> 0x14U))) 
            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellinp__tlb__s1_vppn))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tmp0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_phytranitem 
            = (0x3ffffffU & ((0x1000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex)
                              ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                             [3U][0U] : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                          [3U][1U] 
                                          << 6U) | 
                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                          [3U][0U] 
                                          >> 0x1aU))));
    }
    if ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
           [4U][2U] >> 0x18U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                  [4U][2U] >> 0xdU) 
                                 | ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [4U][2U] 
                                               >> 0xeU)) 
                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid)))) 
         & ((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                          [4U][2U] << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [4U][1U] 
                                               >> 0x14U))) 
            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellinp__tlb__s1_vppn))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tmp0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_phytranitem 
            = (0x3ffffffU & ((0x1000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex)
                              ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                             [4U][0U] : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                          [4U][1U] 
                                          << 6U) | 
                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                          [4U][0U] 
                                          >> 0x1aU))));
    }
    if ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
           [5U][2U] >> 0x18U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                  [5U][2U] >> 0xdU) 
                                 | ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [5U][2U] 
                                               >> 0xeU)) 
                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid)))) 
         & ((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                          [5U][2U] << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [5U][1U] 
                                               >> 0x14U))) 
            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellinp__tlb__s1_vppn))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tmp0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_phytranitem 
            = (0x3ffffffU & ((0x1000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex)
                              ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                             [5U][0U] : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                          [5U][1U] 
                                          << 6U) | 
                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                          [5U][0U] 
                                          >> 0x1aU))));
    }
    if ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
           [6U][2U] >> 0x18U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                  [6U][2U] >> 0xdU) 
                                 | ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [6U][2U] 
                                               >> 0xeU)) 
                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid)))) 
         & ((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                          [6U][2U] << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [6U][1U] 
                                               >> 0x14U))) 
            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellinp__tlb__s1_vppn))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tmp0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_phytranitem 
            = (0x3ffffffU & ((0x1000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex)
                              ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                             [6U][0U] : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                          [6U][1U] 
                                          << 6U) | 
                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                          [6U][0U] 
                                          >> 0x1aU))));
    }
    if ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
           [7U][2U] >> 0x18U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                  [7U][2U] >> 0xdU) 
                                 | ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [7U][2U] 
                                               >> 0xeU)) 
                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid)))) 
         & ((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                          [7U][2U] << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [7U][1U] 
                                               >> 0x14U))) 
            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellinp__tlb__s1_vppn))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tmp0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_phytranitem 
            = (0x3ffffffU & ((0x1000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex)
                              ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                             [7U][0U] : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                          [7U][1U] 
                                          << 6U) | 
                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                          [7U][0U] 
                                          >> 0x1aU))));
    }
    if ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
           [8U][2U] >> 0x18U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                  [8U][2U] >> 0xdU) 
                                 | ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [8U][2U] 
                                               >> 0xeU)) 
                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid)))) 
         & ((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                          [8U][2U] << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [8U][1U] 
                                               >> 0x14U))) 
            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellinp__tlb__s1_vppn))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tmp0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_phytranitem 
            = (0x3ffffffU & ((0x1000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex)
                              ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                             [8U][0U] : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                          [8U][1U] 
                                          << 6U) | 
                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                          [8U][0U] 
                                          >> 0x1aU))));
    }
    if ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
           [9U][2U] >> 0x18U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                  [9U][2U] >> 0xdU) 
                                 | ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [9U][2U] 
                                               >> 0xeU)) 
                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid)))) 
         & ((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                          [9U][2U] << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                               [9U][1U] 
                                               >> 0x14U))) 
            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellinp__tlb__s1_vppn))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tmp0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_phytranitem 
            = (0x3ffffffU & ((0x1000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex)
                              ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                             [9U][0U] : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                          [9U][1U] 
                                          << 6U) | 
                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                          [9U][0U] 
                                          >> 0x1aU))));
    }
    if ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
           [0xaU][2U] >> 0x18U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                    [0xaU][2U] >> 0xdU) 
                                   | ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                 [0xaU][2U] 
                                                 >> 0xeU)) 
                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid)))) 
         & ((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                          [0xaU][2U] << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                 [0xaU][1U] 
                                                 >> 0x14U))) 
            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellinp__tlb__s1_vppn))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tmp0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_phytranitem 
            = (0x3ffffffU & ((0x1000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex)
                              ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                             [0xaU][0U] : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                            [0xaU][1U] 
                                            << 6U) 
                                           | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                              [0xaU][0U] 
                                              >> 0x1aU))));
    }
    if ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
           [0xbU][2U] >> 0x18U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                    [0xbU][2U] >> 0xdU) 
                                   | ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                 [0xbU][2U] 
                                                 >> 0xeU)) 
                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid)))) 
         & ((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                          [0xbU][2U] << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                 [0xbU][1U] 
                                                 >> 0x14U))) 
            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellinp__tlb__s1_vppn))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tmp0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_phytranitem 
            = (0x3ffffffU & ((0x1000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex)
                              ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                             [0xbU][0U] : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                            [0xbU][1U] 
                                            << 6U) 
                                           | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                              [0xbU][0U] 
                                              >> 0x1aU))));
    }
    if ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
           [0xcU][2U] >> 0x18U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                    [0xcU][2U] >> 0xdU) 
                                   | ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                 [0xcU][2U] 
                                                 >> 0xeU)) 
                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid)))) 
         & ((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                          [0xcU][2U] << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                 [0xcU][1U] 
                                                 >> 0x14U))) 
            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellinp__tlb__s1_vppn))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tmp0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_phytranitem 
            = (0x3ffffffU & ((0x1000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex)
                              ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                             [0xcU][0U] : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                            [0xcU][1U] 
                                            << 6U) 
                                           | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                              [0xcU][0U] 
                                              >> 0x1aU))));
    }
    if ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
           [0xdU][2U] >> 0x18U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                    [0xdU][2U] >> 0xdU) 
                                   | ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                 [0xdU][2U] 
                                                 >> 0xeU)) 
                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid)))) 
         & ((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                          [0xdU][2U] << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                 [0xdU][1U] 
                                                 >> 0x14U))) 
            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellinp__tlb__s1_vppn))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tmp0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_phytranitem 
            = (0x3ffffffU & ((0x1000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex)
                              ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                             [0xdU][0U] : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                            [0xdU][1U] 
                                            << 6U) 
                                           | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                              [0xdU][0U] 
                                              >> 0x1aU))));
    }
    if ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
           [0xeU][2U] >> 0x18U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                    [0xeU][2U] >> 0xdU) 
                                   | ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                 [0xeU][2U] 
                                                 >> 0xeU)) 
                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid)))) 
         & ((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                          [0xeU][2U] << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                 [0xeU][1U] 
                                                 >> 0x14U))) 
            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellinp__tlb__s1_vppn))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tmp0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_phytranitem 
            = (0x3ffffffU & ((0x1000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex)
                              ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                             [0xeU][0U] : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                            [0xeU][1U] 
                                            << 6U) 
                                           | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                              [0xeU][0U] 
                                              >> 0x1aU))));
    }
    if ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
           [0xfU][2U] >> 0x18U) & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                    [0xfU][2U] >> 0xdU) 
                                   | ((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                 [0xfU][2U] 
                                                 >> 0xeU)) 
                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid)))) 
         & ((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                          [0xfU][2U] << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                 [0xfU][1U] 
                                                 >> 0x14U))) 
            == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellinp__tlb__s1_vppn))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_ind = 0xfU;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tmp0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_phytranitem 
            = (0x3ffffffU & ((0x1000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex)
                              ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                             [0xfU][0U] : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                            [0xfU][1U] 
                                            << 6U) 
                                           | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                              [0xfU][0U] 
                                              >> 0x1aU))));
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_ne 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tmp0;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_csrmsgin[0U] 
        = (((IData)((((QData)((IData)(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_is_exc)
                                        ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC
                                        : 0U))) << 0x20U) 
                     | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC)))) 
            << 0x1aU) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_excode) 
                          << 0x14U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_is_exc) 
                                        << 0xaU) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_csrmsgin[1U] 
        = (((IData)((((QData)((IData)(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_is_exc)
                                        ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC
                                        : 0U))) << 0x20U) 
                     | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC)))) 
            >> 6U) | ((IData)(((((QData)((IData)(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_is_exc)
                                                   ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC
                                                   : 0U))) 
                                 << 0x20U) | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC))) 
                               >> 0x20U)) << 0x1aU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_csrmsgin[2U] 
        = ((IData)(((((QData)((IData)(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_is_exc)
                                        ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC
                                        : 0U))) << 0x20U) 
                     | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC))) 
                    >> 0x20U)) >> 6U);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_excode 
        = (0x3fU & ((0x400U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[0U])
                     ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[0U] 
                         << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[0U] 
                                     >> 0x14U)) : ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____VdfgExtracted_h16cb5132__0)
                                                    ? 
                                                   (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_is_dmw)) 
                                                     & ((IData)(
                                                                ((0x2000U 
                                                                  == 
                                                                  (0x3000U 
                                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU])) 
                                                                 & (0U 
                                                                    != 
                                                                    (3U 
                                                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex)))) 
                                                        | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex 
                                                           & (0x1000U 
                                                              == 
                                                              (0x3000U 
                                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU])))))
                                                     ? 9U
                                                     : 
                                                    ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_is_usetlb)
                                                      ? 
                                                     ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_ne)
                                                       ? 0x3fU
                                                       : 
                                                      ((0x2000000U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_phytranitem)
                                                        ? 
                                                       (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__plv) 
                                                         > 
                                                         (3U 
                                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_phytranitem 
                                                             >> 0x14U)))
                                                         ? 7U
                                                         : 
                                                        ((1U 
                                                          & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU] 
                                                              >> 0xfU) 
                                                             & (~ 
                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_phytranitem 
                                                                 >> 0x18U))))
                                                          ? 4U
                                                          : 
                                                         ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[0U] 
                                                           << 0xcU) 
                                                          | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[0U] 
                                                             >> 0x14U))))
                                                        : 
                                                       ((IData)(simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____VdfgExtracted_h8a9a0f16__0)
                                                         ? 
                                                        ((0x10U 
                                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[1U])
                                                          ? 1U
                                                          : 3U)
                                                         : 
                                                        ((0x8000U 
                                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU])
                                                          ? 2U
                                                          : 
                                                         ((0x4000U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU])
                                                           ? 1U
                                                           : 0U)))))
                                                      : 
                                                     ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[0U] 
                                                       << 0xcU) 
                                                      | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[0U] 
                                                         >> 0x14U))))
                                                    : 
                                                   ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[0U] 
                                                     << 0xcU) 
                                                    | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[0U] 
                                                       >> 0x14U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_is_exc 
        = (1U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[0U] 
                  >> 0xaU) | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____VdfgExtracted_h16cb5132__0)
                               ? (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_is_dmw)) 
                                   & ((IData)(((0x2000U 
                                                == 
                                                (0x3000U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU])) 
                                               & (0U 
                                                  != 
                                                  (3U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex)))) 
                                      | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex 
                                         & (0x1000U 
                                            == (0x3000U 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU]))))) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_is_usetlb)
                                      ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_ne) 
                                         | ((~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_phytranitem 
                                                >> 0x19U)) 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__plv) 
                                                > (3U 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_phytranitem 
                                                      >> 0x14U))) 
                                               | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU] 
                                                    >> 0xfU) 
                                                   & (~ 
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_phytranitem 
                                                       >> 0x18U))) 
                                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[0U] 
                                                     >> 0xaU)))))
                                      : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[0U] 
                                         >> 0xaU)))
                               : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[0U] 
                                  >> 0xaU))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_addr_phyaddr 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__da) 
            & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellinp__addr_trans_memaddr__pg)))
            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex
            : ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[1U] 
                  >> 0x1dU) == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex 
                                >> 0x1dU)) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[
                                              (((IData)(0x20U) 
                                                + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__plv)) 
                                               >> 5U)] 
                                              >> (0x1fU 
                                                  & ((IData)(0x20U) 
                                                     + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__plv)))))
                ? ((0xe0000000U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[1U] 
                                   << 4U)) | (0x1fffffffU 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex))
                : ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0U] 
                      >> 0x1dU) == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex 
                                    >> 0x1dU)) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[
                                                  ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__plv) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__plv))))
                    ? ((0xe0000000U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0U] 
                                       << 4U)) | (0x1fffffffU 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex))
                    : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_phytranitem 
                        << 0xcU) | (0xfffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex)))));
    __Vtemp_had3b4ddc__0[0U] = (((IData)((((QData)((IData)(
                                                           ((0x400U 
                                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[0U])
                                                             ? 
                                                            ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[2U] 
                                                              << 6U) 
                                                             | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[1U] 
                                                                >> 0x1aU))
                                                             : 
                                                            ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____VdfgExtracted_h16cb5132__0)
                                                              ? 
                                                             (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_is_dmw)) 
                                                               & ((IData)(
                                                                          ((0x2000U 
                                                                            == 
                                                                            (0x3000U 
                                                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU])) 
                                                                           & (0U 
                                                                              != 
                                                                              (3U 
                                                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex)))) 
                                                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex 
                                                                     & (0x1000U 
                                                                        == 
                                                                        (0x3000U 
                                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU])))))
                                                               ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex
                                                               : 
                                                              ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_is_usetlb)
                                                                ? 
                                                               ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_ne)
                                                                 ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex
                                                                 : 
                                                                ((0x2000000U 
                                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_phytranitem)
                                                                  ? 
                                                                 (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__plv) 
                                                                   > 
                                                                   (3U 
                                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_phytranitem 
                                                                       >> 0x14U)))
                                                                   ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex
                                                                   : 
                                                                  ((1U 
                                                                    & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU] 
                                                                        >> 0xfU) 
                                                                       & (~ 
                                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_phytranitem 
                                                                           >> 0x18U))))
                                                                    ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex
                                                                    : 
                                                                   ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[2U] 
                                                                     << 6U) 
                                                                    | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[1U] 
                                                                       >> 0x1aU))))
                                                                  : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex))
                                                                : 
                                                               ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[2U] 
                                                                 << 6U) 
                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[1U] 
                                                                   >> 0x1aU))))
                                                              : 
                                                             ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[2U] 
                                                               << 6U) 
                                                              | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[1U] 
                                                                 >> 0x1aU)))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[1U] 
                                                              << 6U) 
                                                             | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[0U] 
                                                                >> 0x1aU)))))) 
                                 << 0x1aU) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_excode) 
                                               << 0x14U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_is_exc) 
                                                  << 0xaU) 
                                                 | (0x3ffU 
                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[0U]))));
    __Vtemp_had3b4ddc__0[1U] = (((IData)((((QData)((IData)(
                                                           ((0x400U 
                                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[0U])
                                                             ? 
                                                            ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[2U] 
                                                              << 6U) 
                                                             | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[1U] 
                                                                >> 0x1aU))
                                                             : 
                                                            ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____VdfgExtracted_h16cb5132__0)
                                                              ? 
                                                             (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_is_dmw)) 
                                                               & ((IData)(
                                                                          ((0x2000U 
                                                                            == 
                                                                            (0x3000U 
                                                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU])) 
                                                                           & (0U 
                                                                              != 
                                                                              (3U 
                                                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex)))) 
                                                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex 
                                                                     & (0x1000U 
                                                                        == 
                                                                        (0x3000U 
                                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU])))))
                                                               ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex
                                                               : 
                                                              ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_is_usetlb)
                                                                ? 
                                                               ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_ne)
                                                                 ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex
                                                                 : 
                                                                ((0x2000000U 
                                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_phytranitem)
                                                                  ? 
                                                                 (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__plv) 
                                                                   > 
                                                                   (3U 
                                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_phytranitem 
                                                                       >> 0x14U)))
                                                                   ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex
                                                                   : 
                                                                  ((1U 
                                                                    & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU] 
                                                                        >> 0xfU) 
                                                                       & (~ 
                                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_phytranitem 
                                                                           >> 0x18U))))
                                                                    ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex
                                                                    : 
                                                                   ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[2U] 
                                                                     << 6U) 
                                                                    | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[1U] 
                                                                       >> 0x1aU))))
                                                                  : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex))
                                                                : 
                                                               ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[2U] 
                                                                 << 6U) 
                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[1U] 
                                                                   >> 0x1aU))))
                                                              : 
                                                             ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[2U] 
                                                               << 6U) 
                                                              | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[1U] 
                                                                 >> 0x1aU)))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[1U] 
                                                              << 6U) 
                                                             | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[0U] 
                                                                >> 0x1aU)))))) 
                                 >> 6U) | ((IData)(
                                                   ((((QData)((IData)(
                                                                      ((0x400U 
                                                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[0U])
                                                                        ? 
                                                                       ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[2U] 
                                                                         << 6U) 
                                                                        | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[1U] 
                                                                           >> 0x1aU))
                                                                        : 
                                                                       ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____VdfgExtracted_h16cb5132__0)
                                                                         ? 
                                                                        (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_is_dmw)) 
                                                                          & ((IData)(
                                                                                ((0x2000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU])) 
                                                                                & (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex)))) 
                                                                             | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex 
                                                                                & (0x1000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU])))))
                                                                          ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex
                                                                          : 
                                                                         ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_is_usetlb)
                                                                           ? 
                                                                          ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_ne)
                                                                            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex
                                                                            : 
                                                                           ((0x2000000U 
                                                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_phytranitem)
                                                                             ? 
                                                                            (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__plv) 
                                                                              > 
                                                                              (3U 
                                                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_phytranitem 
                                                                                >> 0x14U)))
                                                                              ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex
                                                                              : 
                                                                             ((1U 
                                                                               & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU] 
                                                                                >> 0xfU) 
                                                                                & (~ 
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_phytranitem 
                                                                                >> 0x18U))))
                                                                               ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex
                                                                               : 
                                                                              ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[2U] 
                                                                                << 6U) 
                                                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[1U] 
                                                                                >> 0x1aU))))
                                                                             : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex))
                                                                           : 
                                                                          ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[2U] 
                                                                            << 6U) 
                                                                           | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[1U] 
                                                                              >> 0x1aU))))
                                                                         : 
                                                                        ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[2U] 
                                                                          << 6U) 
                                                                         | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[1U] 
                                                                            >> 0x1aU)))))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[1U] 
                                                                         << 6U) 
                                                                        | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[0U] 
                                                                           >> 0x1aU))))) 
                                                    >> 0x20U)) 
                                           << 0x1aU));
    __Vtemp_had3b4ddc__0[2U] = ((IData)(((((QData)((IData)(
                                                           ((0x400U 
                                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[0U])
                                                             ? 
                                                            ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[2U] 
                                                              << 6U) 
                                                             | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[1U] 
                                                                >> 0x1aU))
                                                             : 
                                                            ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____VdfgExtracted_h16cb5132__0)
                                                              ? 
                                                             (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_is_dmw)) 
                                                               & ((IData)(
                                                                          ((0x2000U 
                                                                            == 
                                                                            (0x3000U 
                                                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU])) 
                                                                           & (0U 
                                                                              != 
                                                                              (3U 
                                                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex)))) 
                                                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex 
                                                                     & (0x1000U 
                                                                        == 
                                                                        (0x3000U 
                                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU])))))
                                                               ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex
                                                               : 
                                                              ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_is_usetlb)
                                                                ? 
                                                               ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_ne)
                                                                 ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex
                                                                 : 
                                                                ((0x2000000U 
                                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_phytranitem)
                                                                  ? 
                                                                 (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__plv) 
                                                                   > 
                                                                   (3U 
                                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_phytranitem 
                                                                       >> 0x14U)))
                                                                   ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex
                                                                   : 
                                                                  ((1U 
                                                                    & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU] 
                                                                        >> 0xfU) 
                                                                       & (~ 
                                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_phytranitem 
                                                                           >> 0x18U))))
                                                                    ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex
                                                                    : 
                                                                   ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[2U] 
                                                                     << 6U) 
                                                                    | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[1U] 
                                                                       >> 0x1aU))))
                                                                  : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex))
                                                                : 
                                                               ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[2U] 
                                                                 << 6U) 
                                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[1U] 
                                                                   >> 0x1aU))))
                                                              : 
                                                             ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[2U] 
                                                               << 6U) 
                                                              | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[1U] 
                                                                 >> 0x1aU)))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[1U] 
                                                              << 6U) 
                                                             | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[0U] 
                                                                >> 0x1aU))))) 
                                         >> 0x20U)) 
                                >> 6U);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_csrmsgin[0U] 
        = __Vtemp_had3b4ddc__0[0U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_csrmsgin[1U] 
        = __Vtemp_had3b4ddc__0[1U];
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_csrmsgin[2U] 
        = __Vtemp_had3b4ddc__0[2U];
    if ((0U == (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU] 
                      >> 0xcU)))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem 
            = ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_addr_phyaddr)
                ? ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_addr_phyaddr)
                    ? 8U : 4U) : ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_addr_phyaddr)
                                   ? 2U : 1U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__extend_store_u__extend_data 
            = ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem))
                ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem))
                    ? 0U : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem))
                             ? 0U : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem))
                                      ? 0U : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_ex_true 
                                              << 0x18U))))
                : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem))
                    ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem))
                        ? 0U : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem))
                                 ? 0U : (0xff0000U 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_ex_true 
                                            << 0x10U))))
                    : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem))
                        ? ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem))
                            ? 0U : (0xff00U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_ex_true 
                                               << 8U)))
                        : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem))
                            ? (0xffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_ex_true)
                            : 0U))));
    } else if ((1U == (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU] 
                             >> 0xcU)))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem 
            = ((0U == (3U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_addr_phyaddr))
                ? 3U : ((2U == (3U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_addr_phyaddr))
                         ? 0xcU : 3U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__extend_store_u__extend_data 
            = ((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem))
                ? (0xffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_ex_true)
                : ((0xcU == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem))
                    ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_ex_true 
                       << 0x10U) : 0U));
    } else {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem = 0xfU;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__extend_store_u__extend_data 
            = ((2U == (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU] 
                             >> 0xcU))) ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_ex_true
                : 0U);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cacheop_addr 
        = ((2U == (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U] 
                         >> 5U))) ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_addr_phyaddr
            : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____Vcellinp__addr_parse__addr 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellinp__sram_to_axi_u__i_cacheop)
            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cacheop_addr
            : (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__da) 
                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__pg)))
                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC
                : ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[1U] 
                      >> 0x1dU) == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC 
                                    >> 0x1dU)) & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[
                                                  (((IData)(0x20U) 
                                                    + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__plv)) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x20U) 
                                                      + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__plv)))))
                    ? ((0xe0000000U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[1U] 
                                       << 4U)) | (0x1fffffffU 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC))
                    : ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0U] 
                          >> 0x1dU) == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC 
                                        >> 0x1dU)) 
                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[
                           ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__plv) 
                            >> 5U)] >> (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__plv))))
                        ? ((0xe0000000U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0U] 
                                           << 4U)) 
                           | (0x1fffffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC))
                        : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_tlb_phytranitem 
                            << 0xcU) | (0xfffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____Vcellinp__addr_parse__addr 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellinp__sram_to_axi_u__d_cacheop)
            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cacheop_addr
            : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_addr_phyaddr);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_index_mux__DOT__and_gates__BRA__1__KET____DOT__or_result 
        = (0xffU & (((- (IData)(((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)) 
                                 | (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state))))) 
                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____Vcellinp__addr_parse__addr 
                        >> 4U)) | ((- (IData)(((3U 
                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)) 
                                               | (5U 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state))))) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_index))));
    __Vfunc_simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__get_bank_num__7__byte_offset 
        = (0xfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____Vcellinp__addr_parse__addr);
    __Vfunc_simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__get_bank_num__7__Vfuncout 
        = (3U & ((IData)(__Vfunc_simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__get_bank_num__7__byte_offset) 
                 >> 2U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__bank_num 
        = __Vfunc_simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__get_bank_num__7__Vfuncout;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_index_mux__DOT__and_gates__BRA__1__KET____DOT__or_result 
        = (0xffU & (((- (IData)(((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)) 
                                 | (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state))))) 
                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____Vcellinp__addr_parse__addr 
                        >> 4U)) | ((- (IData)(((3U 
                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)) 
                                               | (5U 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state))))) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_index))));
    __Vfunc_simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__get_bank_num__10__byte_offset 
        = (0xfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____Vcellinp__addr_parse__addr);
    __Vfunc_simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__get_bank_num__10__Vfuncout 
        = (3U & ((IData)(__Vfunc_simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__get_bank_num__10__byte_offset) 
                 >> 2U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__bank_num 
        = __Vfunc_simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__get_bank_num__10__Vfuncout;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_overlap 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_buf_idle)) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__bank_num) 
              == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_buf_bank_num)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_overlap 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_buf_idle)) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__bank_num) 
              == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_buf_bank_num)));
}

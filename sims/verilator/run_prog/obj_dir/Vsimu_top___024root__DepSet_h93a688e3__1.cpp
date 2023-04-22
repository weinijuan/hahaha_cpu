// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vsimu_top___024root.h"

VL_INLINE_OPT void Vsimu_top___024root___nba_sequent__TOP__8(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___nba_sequent__TOP__8\n"); );
    // Body
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
        vlSelf->simu_top__DOT__soc__DOT__m0_bresp = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp
            [2U];
    }
    if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_bresp = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp
            [3U];
    }
    vlSelf->simu_top__DOT__soc__DOT__m0_rresp = 0U;
    if ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_sel))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rresp = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp
            [0U];
    }
    if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_sel))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rresp = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp
            [1U];
    }
    if ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_sel))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rresp = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp
            [2U];
    }
    vlSelf->simu_top__DOT__soc__DOT__m0_bid = 0U;
    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_bid = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid
            [0U];
    }
    if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_bid = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid
            [1U];
    }
    if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_bid = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid
            [2U];
    }
    if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_bid = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid
            [3U];
    }
    if ((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_bresp = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp
            [4U];
        vlSelf->simu_top__DOT__soc__DOT__m0_bid = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid
            [4U];
    }
    vlSelf->simu_top__DOT__soc__DOT__m0_rid = 0U;
    if ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_sel))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rid = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid
            [0U];
    }
    if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_sel))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rid = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid
            [1U];
    }
    if ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_sel))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rid = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid
            [2U];
    }
    if ((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_sel))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rresp = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp
            [3U];
        vlSelf->simu_top__DOT__soc__DOT__m0_rid = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid
            [3U];
    }
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
    if ((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_sel))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rdata = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata
            [3U];
    }
    if ((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_sel))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rresp = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp
            [4U];
        vlSelf->simu_top__DOT__soc__DOT__m0_rid = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid
            [4U];
        vlSelf->simu_top__DOT__soc__DOT__m0_rdata = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata
            [4U];
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_valid_in 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__pipeline_valid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_ready_go));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData 
        = ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem))
            ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem))
                ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem))
                    ? ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem))
                        ? vlSelf->simu_top__DOT__soc__DOT__m0_rdata
                        : 0U) : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem))
                                  ? 0U : ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__is_unsign_load_mem)
                                           ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__is_unsign_load_mem)
                                               ? (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
                                                  >> 0x10U)
                                               : 0U)
                                           : (((- (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
                                                           >> 0x1fU))) 
                                               << 0x10U) 
                                              | (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
                                                 >> 0x10U)))))
                : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem))
                    ? 0U : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem))
                             ? 0U : ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__is_unsign_load_mem)
                                      ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__is_unsign_load_mem)
                                          ? (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
                                             >> 0x18U)
                                          : 0U) : (
                                                   ((- (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
                                                                >> 0x1fU))) 
                                                    << 8U) 
                                                   | (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
                                                      >> 0x18U))))))
            : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem))
                ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem))
                    ? 0U : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem))
                             ? 0U : ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__is_unsign_load_mem)
                                      ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__is_unsign_load_mem)
                                          ? (0xffU 
                                             & (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
                                                >> 0x10U))
                                          : 0U) : (
                                                   ((- (IData)(
                                                               (1U 
                                                                & (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
                                                                   >> 0x17U)))) 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
                                                         >> 0x10U))))))
                : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem))
                    ? ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem))
                        ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__is_unsign_load_mem)
                            ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__is_unsign_load_mem)
                                ? (0xffffU & vlSelf->simu_top__DOT__soc__DOT__m0_rdata)
                                : 0U) : (((- (IData)(
                                                     (1U 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
                                                         >> 0xfU)))) 
                                          << 0x10U) 
                                         | (0xffffU 
                                            & vlSelf->simu_top__DOT__soc__DOT__m0_rdata)))
                        : ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__is_unsign_load_mem)
                            ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__is_unsign_load_mem)
                                ? (0xffU & (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
                                            >> 8U))
                                : 0U) : (((- (IData)(
                                                     (1U 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
                                                         >> 0xfU)))) 
                                          << 8U) | 
                                         (0xffU & (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
                                                   >> 8U)))))
                    : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem))
                        ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__is_unsign_load_mem)
                            ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__is_unsign_load_mem)
                                ? (0xffU & vlSelf->simu_top__DOT__soc__DOT__m0_rdata)
                                : 0U) : (((- (IData)(
                                                     (1U 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
                                                         >> 7U)))) 
                                          << 8U) | 
                                         (0xffU & vlSelf->simu_top__DOT__soc__DOT__m0_rdata)))
                        : 0U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_allow_in 
        = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__pipeline_valid)) 
                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_valid_in) 
                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_allow_in))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_allow_in 
        = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__pipeline_valid)) 
                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_valid_in) 
                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_allow_in))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__req_inst 
        = ((IData)(vlSelf->aresetn) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_allow_in));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_ready_go 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_ok_inst) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__req_inst));
}

void Vsimu_top___024root___nba_sequent__TOP__0(Vsimu_top___024root* vlSelf);
void Vsimu_top___024root___nba_sequent__TOP__1(Vsimu_top___024root* vlSelf);
void Vsimu_top___024root___nba_sequent__TOP__2(Vsimu_top___024root* vlSelf);
void Vsimu_top___024root___nba_sequent__TOP__3(Vsimu_top___024root* vlSelf);
void Vsimu_top___024root___nba_sequent__TOP__4(Vsimu_top___024root* vlSelf);
void Vsimu_top___024root___nba_sequent__TOP__5(Vsimu_top___024root* vlSelf);
void Vsimu_top___024root___nba_sequent__TOP__6(Vsimu_top___024root* vlSelf);
void Vsimu_top___024root___nba_sequent__TOP__7(Vsimu_top___024root* vlSelf);

void Vsimu_top___024root___eval_nba(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(4U)) {
        Vsimu_top___024root___nba_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        Vsimu_top___024root___nba_sequent__TOP__1(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        Vsimu_top___024root___nba_sequent__TOP__2(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vsimu_top___024root___nba_sequent__TOP__3(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vsimu_top___024root___nba_sequent__TOP__4(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(5U)) {
        Vsimu_top___024root___nba_sequent__TOP__5(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(6U)) {
        Vsimu_top___024root___nba_sequent__TOP__6(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(7U)) {
        Vsimu_top___024root___nba_sequent__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        Vsimu_top___024root___nba_sequent__TOP__8(vlSelf);
    }
}

void Vsimu_top___024root___eval_triggers__ico(Vsimu_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimu_top___024root___dump_triggers__ico(Vsimu_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vsimu_top___024root___eval_ico(Vsimu_top___024root* vlSelf);
void Vsimu_top___024root___eval_triggers__act(Vsimu_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimu_top___024root___dump_triggers__act(Vsimu_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vsimu_top___024root___eval_act(Vsimu_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimu_top___024root___dump_triggers__nba(Vsimu_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vsimu_top___024root___eval(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<8> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vsimu_top___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vsimu_top___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("../testbench/difftest.v", 67, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vsimu_top___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vsimu_top___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vsimu_top___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("../testbench/difftest.v", 67, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vsimu_top___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vsimu_top___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("../testbench/difftest.v", 67, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vsimu_top___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vsimu_top___024root___eval_debug_assertions(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->DifftestInstrCommit__02Eclock 
                     & 0xfeU))) {
        Verilated::overWidthError("DifftestInstrCommit.clock");}
    if (VL_UNLIKELY((vlSelf->DifftestInstrCommit__02Evalid 
                     & 0xfeU))) {
        Verilated::overWidthError("DifftestInstrCommit.valid");}
    if (VL_UNLIKELY((vlSelf->skip & 0xfeU))) {
        Verilated::overWidthError("skip");}
    if (VL_UNLIKELY((vlSelf->is_TLBFILL & 0xfeU))) {
        Verilated::overWidthError("is_TLBFILL");}
    if (VL_UNLIKELY((vlSelf->TLBFILL_index & 0xe0U))) {
        Verilated::overWidthError("TLBFILL_index");}
    if (VL_UNLIKELY((vlSelf->is_CNTinst & 0xfeU))) {
        Verilated::overWidthError("is_CNTinst");}
    if (VL_UNLIKELY((vlSelf->wen & 0xfeU))) {
        Verilated::overWidthError("wen");}
    if (VL_UNLIKELY((vlSelf->csr_rstat & 0xfeU))) {
        Verilated::overWidthError("csr_rstat");}
    if (VL_UNLIKELY((vlSelf->DifftestExcpEvent__02Eclock 
                     & 0xfeU))) {
        Verilated::overWidthError("DifftestExcpEvent.clock");}
    if (VL_UNLIKELY((vlSelf->excp_valid & 0xfeU))) {
        Verilated::overWidthError("excp_valid");}
    if (VL_UNLIKELY((vlSelf->eret & 0xfeU))) {
        Verilated::overWidthError("eret");}
    if (VL_UNLIKELY((vlSelf->DifftestTrapEvent__02Eclock 
                     & 0xfeU))) {
        Verilated::overWidthError("DifftestTrapEvent.clock");}
    if (VL_UNLIKELY((vlSelf->DifftestTrapEvent__02Evalid 
                     & 0xfeU))) {
        Verilated::overWidthError("DifftestTrapEvent.valid");}
    if (VL_UNLIKELY((vlSelf->code & 0xf8U))) {
        Verilated::overWidthError("code");}
    if (VL_UNLIKELY((vlSelf->DifftestStoreEvent__02Eclock 
                     & 0xfeU))) {
        Verilated::overWidthError("DifftestStoreEvent.clock");}
    if (VL_UNLIKELY((vlSelf->DifftestLoadEvent__02Eclock 
                     & 0xfeU))) {
        Verilated::overWidthError("DifftestLoadEvent.clock");}
    if (VL_UNLIKELY((vlSelf->DifftestCSRRegState__02Eclock 
                     & 0xfeU))) {
        Verilated::overWidthError("DifftestCSRRegState.clock");}
    if (VL_UNLIKELY((vlSelf->DifftestGRegState__02Eclock 
                     & 0xfeU))) {
        Verilated::overWidthError("DifftestGRegState.clock");}
    if (VL_UNLIKELY((vlSelf->aclk & 0xfeU))) {
        Verilated::overWidthError("aclk");}
    if (VL_UNLIKELY((vlSelf->aresetn & 0xfeU))) {
        Verilated::overWidthError("aresetn");}
    if (VL_UNLIKELY((vlSelf->enable_delay & 0xfeU))) {
        Verilated::overWidthError("enable_delay");}
    if (VL_UNLIKELY((vlSelf->random_seed & 0xff800000U))) {
        Verilated::overWidthError("random_seed");}
    if (VL_UNLIKELY((vlSelf->uart_rx & 0xfeU))) {
        Verilated::overWidthError("uart_rx");}
    if (VL_UNLIKELY((vlSelf->uart_tx & 0xfeU))) {
        Verilated::overWidthError("uart_tx");}
    if (VL_UNLIKELY((vlSelf->btn_key_row & 0xf0U))) {
        Verilated::overWidthError("btn_key_row");}
    if (VL_UNLIKELY((vlSelf->btn_step & 0xfcU))) {
        Verilated::overWidthError("btn_step");}
}
#endif  // VL_DEBUG

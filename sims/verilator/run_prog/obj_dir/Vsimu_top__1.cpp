// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimu_top.h for the primary calling header

#include "Vsimu_top.h"
#include "Vsimu_top__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vsimu_top::_sequent__TOP__10(Vsimu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top::_sequent__TOP__10\n"); );
    Vsimu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->DifftestInstrCommit__02Evalid) {
        vlSymsp->TOP____024unit.__Vdpiimwrap_v_difftest_InstrCommit_TOP____024unit(vlTOPp->DifftestInstrCommit__02Ecoreid, (IData)(vlTOPp->DifftestInstrCommit__02Eindex), vlTOPp->DifftestInstrCommit__02Evalid, vlTOPp->DifftestInstrCommit__02Epc, vlTOPp->instr, (IData)(vlTOPp->skip), vlTOPp->is_TLBFILL, (IData)(vlTOPp->TLBFILL_index), vlTOPp->is_CNTinst, vlTOPp->timer_64_value, (IData)(vlTOPp->wen), vlTOPp->wdest, vlTOPp->wdata, (IData)(vlTOPp->csr_rstat), vlTOPp->csr_data);
    }
}

VL_INLINE_OPT void Vsimu_top::_combo__TOP__11(Vsimu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top::_combo__TOP__11\n"); );
    Vsimu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[0U] 
        = vlTOPp->ram_rdata;
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__divNeed 
        = (((IData)(vlTOPp->aclk) << 1U) | (IData)(vlTOPp->aresetn));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NANDtag 
        = ((IData)(vlTOPp->aresetn) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_cmd_valid));
    vlTOPp->simu_top__DOT__soc__DOT__m0_bready = (1U 
                                                  & ((vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                                      >> 2U) 
                                                     | (~ (IData)(vlTOPp->enable_delay))));
    vlTOPp->simu_top__DOT__soc__DOT__m0_rready = (1U 
                                                  & ((vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                                      >> 3U) 
                                                     | (~ (IData)(vlTOPp->enable_delay))));
    vlTOPp->simu_top__DOT__soc__DOT__m0_wvalid = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu_wvalid) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_w) 
                                                     | (~ (IData)(vlTOPp->enable_delay))));
    vlTOPp->simu_top__DOT__soc__DOT__m0_arvalid = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu_arvalid) 
                                                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_ar) 
                                                      | (~ (IData)(vlTOPp->enable_delay))));
    vlTOPp->simu_top__DOT__soc__DOT__m0_awvalid = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu_awvalid) 
                                                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_aw) 
                                                      | (~ (IData)(vlTOPp->enable_delay))));
    vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__btn_key_tmp 
        = (((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
            & (0xeU == (IData)(vlTOPp->btn_key_row)))
            ? 1U : (((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                     & (0xdU == (IData)(vlTOPp->btn_key_row)))
                     ? 0x10U : (((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                 & (0xbU == (IData)(vlTOPp->btn_key_row)))
                                 ? 0x100U : (((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                              & (7U 
                                                 == (IData)(vlTOPp->btn_key_row)))
                                              ? 0x1000U
                                              : (((2U 
                                                   == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                  & (0xeU 
                                                     == (IData)(vlTOPp->btn_key_row)))
                                                  ? 2U
                                                  : 
                                                 (((2U 
                                                    == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                   & (0xdU 
                                                      == (IData)(vlTOPp->btn_key_row)))
                                                   ? 0x20U
                                                   : 
                                                  (((2U 
                                                     == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                    & (0xbU 
                                                       == (IData)(vlTOPp->btn_key_row)))
                                                    ? 0x200U
                                                    : 
                                                   (((2U 
                                                      == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                     & (7U 
                                                        == (IData)(vlTOPp->btn_key_row)))
                                                     ? 0x2000U
                                                     : 
                                                    (((3U 
                                                       == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                      & (0xeU 
                                                         == (IData)(vlTOPp->btn_key_row)))
                                                      ? 4U
                                                      : 
                                                     (((3U 
                                                        == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                       & (0xdU 
                                                          == (IData)(vlTOPp->btn_key_row)))
                                                       ? 0x40U
                                                       : 
                                                      (((3U 
                                                         == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                        & (0xbU 
                                                           == (IData)(vlTOPp->btn_key_row)))
                                                        ? 0x400U
                                                        : 
                                                       (((3U 
                                                          == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                         & (7U 
                                                            == (IData)(vlTOPp->btn_key_row)))
                                                         ? 0x4000U
                                                         : 
                                                        (((4U 
                                                           == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                          & (0xeU 
                                                             == (IData)(vlTOPp->btn_key_row)))
                                                          ? 8U
                                                          : 
                                                         (((4U 
                                                            == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                           & (0xdU 
                                                              == (IData)(vlTOPp->btn_key_row)))
                                                           ? 0x80U
                                                           : 
                                                          (((4U 
                                                             == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                            & (0xbU 
                                                               == (IData)(vlTOPp->btn_key_row)))
                                                            ? 0x800U
                                                            : 
                                                           (((4U 
                                                              == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                             & (7U 
                                                                == (IData)(vlTOPp->btn_key_row)))
                                                             ? 0x8000U
                                                             : 0U))))))))))))))));
    vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__next_state 
        = ((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state))
            ? ((1U & ((vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__key_count 
                       >> 0x13U) & (~ (IData)((0xfU 
                                               == (IData)(vlTOPp->btn_key_row))))))
                ? 1U : 0U) : ((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state))
                               ? ((0xfU == (IData)(vlTOPp->btn_key_row))
                                   ? 2U : 7U) : ((2U 
                                                  == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state))
                                                  ? 
                                                 ((0xfU 
                                                   == (IData)(vlTOPp->btn_key_row))
                                                   ? 3U
                                                   : 7U)
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state))
                                                   ? 
                                                  ((0xfU 
                                                    == (IData)(vlTOPp->btn_key_row))
                                                    ? 4U
                                                    : 7U)
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state))
                                                    ? 
                                                   ((0xfU 
                                                     == (IData)(vlTOPp->btn_key_row))
                                                     ? 0U
                                                     : 7U)
                                                    : 
                                                   ((7U 
                                                     == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state))
                                                     ? 
                                                    (((vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__key_count 
                                                       >> 0x13U) 
                                                      & (0xfU 
                                                         == (IData)(vlTOPp->btn_key_row)))
                                                      ? 0U
                                                      : 7U)
                                                     : 0U))))));
    vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en 
        = (((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wvalid) 
            & (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_allow_out)) 
           & (IData)(vlTOPp->aresetn));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en 
        = (((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wvalid) 
            & (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_allow_out)) 
           & (IData)(vlTOPp->aresetn));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__data_back 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__addr_rcv) 
           & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_rvalid) 
               & ((vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                   >> 3U) | (~ (IData)(vlTOPp->enable_delay)))) 
              | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_bvalid) 
                 & ((vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                     >> 2U) | (~ (IData)(vlTOPp->enable_delay))))));
    vlTOPp->simu_top__DOT__soc__DOT__m0_rdata = 0U;
    if ((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_rdata = 
            vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata
            [0U];
    }
    if ((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_rdata = 
            vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata
            [1U];
    }
    if ((2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_rdata = 
            vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata
            [2U];
    }
    if ((3U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_rdata = 
            vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata
            [3U];
    }
    if ((4U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_rdata = 
            vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata
            [4U];
    }
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT____Vcellinp__myDiv__clk 
        = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__divNeed) 
                 >> 1U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready 
        = (0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready));
    if ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound4 
            = vlTOPp->simu_top__DOT__soc__DOT__m0_bready;
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready 
            = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready)) 
               | (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound4));
    }
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready 
        = (0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready));
    if ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound4 
            = vlTOPp->simu_top__DOT__soc__DOT__m0_bready;
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready 
            = ((0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready)) 
               | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound4) 
                  << 1U));
    }
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready 
        = (0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready));
    if ((4U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound4 
            = vlTOPp->simu_top__DOT__soc__DOT__m0_bready;
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready 
            = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready)) 
               | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound4) 
                  << 2U));
    }
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready 
        = (0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready));
    if ((8U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound4 
            = vlTOPp->simu_top__DOT__soc__DOT__m0_bready;
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready 
            = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready)) 
               | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound4) 
                  << 3U));
    }
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready 
        = (0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready));
    if ((0x10U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound4 
            = vlTOPp->simu_top__DOT__soc__DOT__m0_bready;
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready 
            = ((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready)) 
               | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound4) 
                  << 4U));
    }
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
        = (0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready));
    if ((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound9 
            = vlTOPp->simu_top__DOT__soc__DOT__m0_rready;
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
            = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready)) 
               | (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound9));
    }
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
        = (0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready));
    if ((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound9 
            = vlTOPp->simu_top__DOT__soc__DOT__m0_rready;
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
            = ((0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready)) 
               | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound9) 
                  << 1U));
    }
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
        = (0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready));
    if ((2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound9 
            = vlTOPp->simu_top__DOT__soc__DOT__m0_rready;
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
            = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready)) 
               | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound9) 
                  << 2U));
    }
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
        = (0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready));
    if ((3U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound9 
            = vlTOPp->simu_top__DOT__soc__DOT__m0_rready;
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
            = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready)) 
               | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound9) 
                  << 3U));
    }
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
        = (0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready));
    if ((4U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound9 
            = vlTOPp->simu_top__DOT__soc__DOT__m0_rready;
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
            = ((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready)) 
               | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound9) 
                  << 4U));
    }
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound6 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_wvalid) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid 
        = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid)) 
           | (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound6));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound6 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_wvalid) 
           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit) 
              >> 1U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid 
        = ((0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound6) 
              << 1U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound6 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_wvalid) 
           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit) 
              >> 2U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid 
        = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound6) 
              << 2U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound6 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_wvalid) 
           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit) 
              >> 3U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid 
        = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound6) 
              << 3U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound6 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_wvalid) 
           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit) 
              >> 4U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid 
        = ((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound6) 
              << 4U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound7 
        = (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
            & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit)) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_arvalid));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid 
        = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid)) 
           | (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound7));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound7 
        = (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
            & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit) 
               >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_arvalid));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid 
        = ((0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound7) 
              << 1U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound7 
        = (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
            & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit) 
               >> 2U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_arvalid));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid 
        = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound7) 
              << 2U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound7 
        = (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
            & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit) 
               >> 3U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_arvalid));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid 
        = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound7) 
              << 3U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound7 
        = (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
            & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit) 
               >> 4U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_arvalid));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid 
        = ((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound7) 
              << 4U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_dir_ins 
        = (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
            & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_arvalid)) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_arready));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound1 
        = (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
            & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit)) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_awvalid));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid 
        = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid)) 
           | (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound1));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound1 
        = (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
            & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit) 
               >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_awvalid));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid 
        = ((0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound1) 
              << 1U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound1 
        = (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
            & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit) 
               >> 2U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_awvalid));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid 
        = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound1) 
              << 2U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound1 
        = (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
            & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit) 
               >> 3U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_awvalid));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid 
        = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound1) 
              << 3U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound1 
        = (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
            & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit) 
               >> 4U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_awvalid));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid 
        = ((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound1) 
              << 4U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_dir_ins 
        = (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
            & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_awvalid)) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_awready));
    vlTOPp->ram_wen = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wstrb) 
                       & (- (IData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en))));
    vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wlast));
    vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wstrb) 
           & (- (IData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en))));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wlast));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_ready_go 
        = ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req) 
             & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req_or))) 
            & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__data_back)) 
           | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp_valid));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_ready_go 
        = (1U & (((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req) 
                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req_or)) 
                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__data_back)) 
                  | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid)) 
                 | (~ ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U] 
                        >> 0xeU) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U] 
                                    >> 0xfU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData 
        = ((8U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem))
            ? ((4U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem))
                ? ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem))
                    ? ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem))
                        ? vlTOPp->simu_top__DOT__soc__DOT__m0_rdata
                        : 0U) : ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem))
                                  ? 0U : ((0x800U & 
                                           vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U])
                                           ? ((0x800U 
                                               & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U])
                                               ? (0xffffU 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__m0_rdata 
                                                     >> 0x10U))
                                               : 0U)
                                           : ((0xffff0000U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & (vlTOPp->simu_top__DOT__soc__DOT__m0_rdata 
                                                                 >> 0x1fU)))) 
                                                  << 0x10U)) 
                                              | (0xffffU 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__m0_rdata 
                                                    >> 0x10U))))))
                : ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem))
                    ? 0U : ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem))
                             ? 0U : ((0x800U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U])
                                      ? ((0x800U & 
                                          vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U])
                                          ? (0xffU 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__m0_rdata 
                                                >> 0x18U))
                                          : 0U) : (
                                                   (0xffffff00U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (vlTOPp->simu_top__DOT__soc__DOT__m0_rdata 
                                                                      >> 0x1fU)))) 
                                                       << 8U)) 
                                                   | (0xffU 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__m0_rdata 
                                                         >> 0x18U)))))))
            : ((4U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem))
                ? ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem))
                    ? 0U : ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem))
                             ? 0U : ((0x800U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U])
                                      ? ((0x800U & 
                                          vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U])
                                          ? (0xffU 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__m0_rdata 
                                                >> 0x10U))
                                          : 0U) : (
                                                   (0xffffff00U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (vlTOPp->simu_top__DOT__soc__DOT__m0_rdata 
                                                                      >> 0x17U)))) 
                                                       << 8U)) 
                                                   | (0xffU 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__m0_rdata 
                                                         >> 0x10U))))))
                : ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem))
                    ? ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem))
                        ? ((0x800U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U])
                            ? ((0x800U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U])
                                ? (0xffffU & vlTOPp->simu_top__DOT__soc__DOT__m0_rdata)
                                : 0U) : ((0xffff0000U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (vlTOPp->simu_top__DOT__soc__DOT__m0_rdata 
                                                            >> 0xfU)))) 
                                             << 0x10U)) 
                                         | (0xffffU 
                                            & vlTOPp->simu_top__DOT__soc__DOT__m0_rdata)))
                        : ((0x800U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U])
                            ? ((0x800U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U])
                                ? (0xffU & (vlTOPp->simu_top__DOT__soc__DOT__m0_rdata 
                                            >> 8U))
                                : 0U) : ((0xffffff00U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (vlTOPp->simu_top__DOT__soc__DOT__m0_rdata 
                                                            >> 0xfU)))) 
                                             << 8U)) 
                                         | (0xffU & 
                                            (vlTOPp->simu_top__DOT__soc__DOT__m0_rdata 
                                             >> 8U)))))
                    : ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem))
                        ? ((0x800U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U])
                            ? ((0x800U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U])
                                ? (0xffU & vlTOPp->simu_top__DOT__soc__DOT__m0_rdata)
                                : 0U) : ((0xffffff00U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (vlTOPp->simu_top__DOT__soc__DOT__m0_rdata 
                                                            >> 7U)))) 
                                             << 8U)) 
                                         | (0xffU & vlTOPp->simu_top__DOT__soc__DOT__m0_rdata)))
                        : 0U))));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop 
        = (((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
            >> 3U) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid));
    vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_valid) 
           & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
               >> 3U) | (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rvalid))));
    vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_en 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid) 
           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
              | (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rvalid))));
    vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_go 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__s0_wready));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_go 
        = (((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
            >> 3U) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_wready));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push 
        = (1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                  >> 3U) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid))));
    vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_push 
        = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                 & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid))));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_cpu 
        = (1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr) 
                   | (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd)) 
                  | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                     >> 2U)) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                >> 2U)));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm_nxt 
        = ((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm))
            ? ((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                        | (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid)) 
                       >> 2U) & ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr) 
                                     | (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd))) 
                                 & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)))))
                ? 2U : 1U) : ((2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm))
                               ? ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr)
                                   ? 8U : ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd)
                                            ? 8U : 2U))
                               : ((8U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm))
                                   ? (((((8U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm)) 
                                         & (IData)(vlTOPp->simu_top__DOT__soc__DOT__apb_s_rlast)) 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                           >> 2U)) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__apb_s_bvalid) 
                                          & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                             >> 2U)))
                                       ? 1U : 8U) : 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_push 
        = (1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                  >> 3U) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid))));
    vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_push 
        = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                 & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid))));
    vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_pop 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid));
    vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__write_timer 
        = ((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
           & (0xe000U == (0xffffU & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)));
    vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__write_uart_valid 
        = ((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
           & (0xff10U == (0xffffU & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_pop 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_valid_in 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__pipeline_valid) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_ready_go));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_valid_in 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_valid) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_ready_go));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_pop 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_push 
        = ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) 
             & (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid)) 
            & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop))) 
           & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid)));
    vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_pop 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid));
    vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_push 
        = ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) 
             & (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid)) 
            & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop))) 
           & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid)));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen_last));
    vlTOPp->ram_ren = vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_en;
    vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_en) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen_last));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_push 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_push) 
           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) 
              | (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_valid))));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_push 
        = ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_push) 
             & (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_valid)) 
            & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop))) 
           & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid)));
    vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_push 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_push) 
           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) 
              | (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_valid))));
    vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_push 
        = ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_push) 
             & (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_valid)) 
            & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop))) 
           & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid)));
    vlTOPp->write_uart_valid = vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__write_uart_valid;
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_allow_in 
        = (1U & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_valid)) 
                 | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_valid_in) 
                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_allow_in))));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_pop 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_push 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push) 
           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop) 
              | (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_valid))));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_push 
        = ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push) 
             & (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_valid)) 
            & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop))) 
           & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid)));
    vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_pop 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid));
    vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_push 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_push) 
           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop) 
              | (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid))));
    vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_push 
        = ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_push) 
             & (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid)) 
            & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop))) 
           & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__req_mem 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_allow_in) 
           & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
               >> 0x14U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                            >> 0x15U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_ok_inst 
        = (1U & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req)) 
                 & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__req_mem))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_valid_in 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid) 
           & ((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req)) 
                & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__req_mem)) 
               & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                   >> 0x14U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                >> 0x15U))) | (~ ((
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                                   >> 0x14U) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                                     >> 0x15U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_allow_in 
        = (1U & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)) 
                 | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_valid_in) 
                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_allow_in))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_allow_in 
        = (1U & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__pipeline_valid)) 
                 | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_valid_in) 
                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_allow_in))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_allow_in 
        = (1U & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__pipeline_valid)) 
                 | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_valid_in) 
                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_allow_in))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__req_inst 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_allow_in) 
           & (IData)(vlTOPp->aresetn));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_ready_go 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_ok_inst) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__req_inst));
}

VL_INLINE_OPT void Vsimu_top::_sequent__TOP__12(Vsimu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top::_sequent__TOP__12\n"); );
    Vsimu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP____024unit.__Vdpiimwrap_v_difftest_CSRRegState_TOP____024unit(vlTOPp->DifftestCSRRegState__02Ecoreid, vlTOPp->crmd, vlTOPp->prmd, vlTOPp->euen, vlTOPp->ecfg, vlTOPp->estat, vlTOPp->era, vlTOPp->badv, vlTOPp->eentry, vlTOPp->tlbidx, vlTOPp->tlbehi, vlTOPp->tlbelo0, vlTOPp->tlbelo1, vlTOPp->asid, vlTOPp->pgdl, vlTOPp->pgdh, vlTOPp->save0, vlTOPp->save1, vlTOPp->save2, vlTOPp->save3, vlTOPp->tid, vlTOPp->tcfg, vlTOPp->tval, vlTOPp->ticlr, vlTOPp->llbctl, vlTOPp->tlbrentry, vlTOPp->dmw0, vlTOPp->dmw1);
}

VL_INLINE_OPT void Vsimu_top::_sequent__TOP__13(Vsimu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top::_sequent__TOP__13\n"); );
    Vsimu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP____024unit.__Vdpiimwrap_v_difftest_GRegState_TOP____024unit(vlTOPp->DifftestGRegState__02Ecoreid, vlTOPp->gpr_0, vlTOPp->gpr_1, vlTOPp->gpr_2, vlTOPp->gpr_3, vlTOPp->gpr_4, vlTOPp->gpr_5, vlTOPp->gpr_6, vlTOPp->gpr_7, vlTOPp->gpr_8, vlTOPp->gpr_9, vlTOPp->gpr_10, vlTOPp->gpr_11, vlTOPp->gpr_12, vlTOPp->gpr_13, vlTOPp->gpr_14, vlTOPp->gpr_15, vlTOPp->gpr_16, vlTOPp->gpr_17, vlTOPp->gpr_18, vlTOPp->gpr_19, vlTOPp->gpr_20, vlTOPp->gpr_21, vlTOPp->gpr_22, vlTOPp->gpr_23, vlTOPp->gpr_24, vlTOPp->gpr_25, vlTOPp->gpr_26, vlTOPp->gpr_27, vlTOPp->gpr_28, vlTOPp->gpr_29, vlTOPp->gpr_30, vlTOPp->gpr_31);
}

VL_INLINE_OPT void Vsimu_top::_multiclk__TOP__15(Vsimu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top::_multiclk__TOP__15\n"); );
    Vsimu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__difference 
        = (0x1ffffffffULL & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__minuend_shifted 
                             - (QData)((IData)(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divSigned)
                                                 ? 
                                                ((0x80000000U 
                                                  & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)
                                                  ? 
                                                 (- vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)
                                                  : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)
                                                 : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)))));
    if ((0x4000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U])) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluout_ex 
            = ((0x2000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U])
                ? 0U : ((0x1000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U])
                         ? 0U : ((0x800000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U])
                                  ? ((0x400000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U])
                                      ? ((IData)(4U) 
                                         + vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)
                                      : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)
                                  : ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divSigned)
                                      ? ((0x80000000U 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                                             ^ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex))
                                          ? (- vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_u)
                                          : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_u)
                                      : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_u))));
    } else {
        if ((0x2000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U])) {
            if ((0x1000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U])) {
                if ((0x800000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U])) {
                    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluout_ex 
                        = ((0x400000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U])
                            ? ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divSigned)
                                ? ((0x80000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)
                                    ? (- vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__remainder_u)
                                    : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__remainder_u)
                                : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__remainder_u)
                            : ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divSigned)
                                ? ((0x80000000U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                                                   ^ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex))
                                    ? (- vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_u)
                                    : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_u)
                                : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_u));
                } else {
                    if ((0x400000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U])) {
                        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__unnamedblk2__DOT__mul_result 
                            = ((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)) 
                               * (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)));
                        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluout_ex 
                            = (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__unnamedblk2__DOT__mul_result 
                                       >> 0x20U));
                    } else {
                        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__unnamedblk1__DOT__mul_result 
                            = VL_MULS_QQQ(64,64,64, 
                                          (((QData)((IData)(
                                                            (- (IData)(
                                                                       (1U 
                                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                                                                           >> 0x1fU)))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex))), 
                                          (((QData)((IData)(
                                                            (- (IData)(
                                                                       (1U 
                                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex 
                                                                           >> 0x1fU)))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex))));
                        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluout_ex 
                            = (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__unnamedblk1__DOT__mul_result 
                                       >> 0x20U));
                    }
                }
            } else {
                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluout_ex 
                    = ((0x800000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U])
                        ? ((0x400000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U])
                            ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                               * vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)
                            : VL_SHIFTRS_III(32,32,5, vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex, 
                                             (0x1fU 
                                              & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)))
                        : ((0x400000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U])
                            ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                               >> (0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex))
                            : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                               << (0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex))));
            }
        } else {
            vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluout_ex 
                = ((0x1000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U])
                    ? ((0x800000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U])
                        ? ((0x400000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U])
                            ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                               ^ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)
                            : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                               | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex))
                        : ((0x400000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U])
                            ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                               & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)
                            : (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                                  | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex))))
                    : ((0x800000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U])
                        ? ((0x400000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U])
                            ? (1U & (~ (IData)((1ULL 
                                                & ((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)) 
                                                     + (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_b))) 
                                                    + (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_cin))) 
                                                   >> 0x20U)))))
                            : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__slt_result)
                        : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_result));
        }
    }
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__minuend_next 
        = ((1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__difference 
                          >> 0x20U))) ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__minuend_shifted
            : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__difference);
}

void Vsimu_top::_eval(Vsimu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top::_eval\n"); );
    Vsimu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->__VinpClk__TOP__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT____Vcellinp__myDiv__clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT____Vcellinp__myDiv__clk)))) {
        vlTOPp->_sequent__TOP__3(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    if (((IData)(vlTOPp->DifftestLoadEvent__02Eclock) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__DifftestLoadEvent__02Eclock)))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    if (((IData)(vlTOPp->DifftestTrapEvent__02Eclock) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__DifftestTrapEvent__02Eclock)))) {
        vlTOPp->_sequent__TOP__5(vlSymsp);
    }
    if (((IData)(vlTOPp->DifftestStoreEvent__02Eclock) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__DifftestStoreEvent__02Eclock)))) {
        vlTOPp->_sequent__TOP__6(vlSymsp);
    }
    if (((IData)(vlTOPp->DifftestExcpEvent__02Eclock) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__DifftestExcpEvent__02Eclock)))) {
        vlTOPp->_sequent__TOP__7(vlSymsp);
    }
    if (((IData)(vlTOPp->aclk) & (~ (IData)(vlTOPp->__Vclklast__TOP__aclk)))) {
        vlTOPp->_sequent__TOP__8(vlSymsp);
        vlTOPp->__Vm_traceActivity[2U] = 1U;
        vlTOPp->_sequent__TOP__9(vlSymsp);
    }
    if (((IData)(vlTOPp->DifftestInstrCommit__02Eclock) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__DifftestInstrCommit__02Eclock)))) {
        vlTOPp->_sequent__TOP__10(vlSymsp);
    }
    vlTOPp->_combo__TOP__11(vlSymsp);
    vlTOPp->__Vm_traceActivity[3U] = 1U;
    if (((IData)(vlTOPp->DifftestCSRRegState__02Eclock) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__DifftestCSRRegState__02Eclock)))) {
        vlTOPp->_sequent__TOP__12(vlSymsp);
    }
    if (((IData)(vlTOPp->DifftestGRegState__02Eclock) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__DifftestGRegState__02Eclock)))) {
        vlTOPp->_sequent__TOP__13(vlSymsp);
    }
    if ((((IData)(vlTOPp->aclk) & (~ (IData)(vlTOPp->__Vclklast__TOP__aclk))) 
         | ((IData)(vlTOPp->__VinpClk__TOP__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT____Vcellinp__myDiv__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT____Vcellinp__myDiv__clk))))) {
        vlTOPp->_multiclk__TOP__15(vlSymsp);
        vlTOPp->__Vm_traceActivity[4U] = 1U;
    }
    // Final
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT____Vcellinp__myDiv__clk 
        = vlTOPp->__VinpClk__TOP__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT____Vcellinp__myDiv__clk;
    vlTOPp->__Vclklast__TOP__DifftestLoadEvent__02Eclock 
        = vlTOPp->DifftestLoadEvent__02Eclock;
    vlTOPp->__Vclklast__TOP__DifftestTrapEvent__02Eclock 
        = vlTOPp->DifftestTrapEvent__02Eclock;
    vlTOPp->__Vclklast__TOP__DifftestStoreEvent__02Eclock 
        = vlTOPp->DifftestStoreEvent__02Eclock;
    vlTOPp->__Vclklast__TOP__DifftestExcpEvent__02Eclock 
        = vlTOPp->DifftestExcpEvent__02Eclock;
    vlTOPp->__Vclklast__TOP__aclk = vlTOPp->aclk;
    vlTOPp->__Vclklast__TOP__DifftestInstrCommit__02Eclock 
        = vlTOPp->DifftestInstrCommit__02Eclock;
    vlTOPp->__Vclklast__TOP__DifftestCSRRegState__02Eclock 
        = vlTOPp->DifftestCSRRegState__02Eclock;
    vlTOPp->__Vclklast__TOP__DifftestGRegState__02Eclock 
        = vlTOPp->DifftestGRegState__02Eclock;
    vlTOPp->__VinpClk__TOP__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT____Vcellinp__myDiv__clk 
        = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT____Vcellinp__myDiv__clk;
}

VL_INLINE_OPT QData Vsimu_top::_change_request(Vsimu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top::_change_request\n"); );
    Vsimu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vsimu_top::_change_request_1(Vsimu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top::_change_request_1\n"); );
    Vsimu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT____Vcellinp__myDiv__clk ^ vlTOPp->__Vchglast__TOP__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT____Vcellinp__myDiv__clk));
    VL_DEBUG_IF( if(__req && ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT____Vcellinp__myDiv__clk ^ vlTOPp->__Vchglast__TOP__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT____Vcellinp__myDiv__clk))) VL_DBG_MSGF("        CHANGE: /home/weinijuan/cpu/IP/myCPU/div.v:7: simu_top.soc.cpu.cpu_sram_u.alu.__Vcellinp__myDiv__clk\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT____Vcellinp__myDiv__clk 
        = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT____Vcellinp__myDiv__clk;
    return __req;
}

#ifdef VL_DEBUG
void Vsimu_top::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((DifftestInstrCommit__02Eclock 
                     & 0xfeU))) {
        Verilated::overWidthError("DifftestInstrCommit.clock");}
    if (VL_UNLIKELY((DifftestInstrCommit__02Evalid 
                     & 0xfeU))) {
        Verilated::overWidthError("DifftestInstrCommit.valid");}
    if (VL_UNLIKELY((skip & 0xfeU))) {
        Verilated::overWidthError("skip");}
    if (VL_UNLIKELY((is_TLBFILL & 0xfeU))) {
        Verilated::overWidthError("is_TLBFILL");}
    if (VL_UNLIKELY((TLBFILL_index & 0xe0U))) {
        Verilated::overWidthError("TLBFILL_index");}
    if (VL_UNLIKELY((is_CNTinst & 0xfeU))) {
        Verilated::overWidthError("is_CNTinst");}
    if (VL_UNLIKELY((wen & 0xfeU))) {
        Verilated::overWidthError("wen");}
    if (VL_UNLIKELY((csr_rstat & 0xfeU))) {
        Verilated::overWidthError("csr_rstat");}
    if (VL_UNLIKELY((DifftestExcpEvent__02Eclock & 0xfeU))) {
        Verilated::overWidthError("DifftestExcpEvent.clock");}
    if (VL_UNLIKELY((excp_valid & 0xfeU))) {
        Verilated::overWidthError("excp_valid");}
    if (VL_UNLIKELY((eret & 0xfeU))) {
        Verilated::overWidthError("eret");}
    if (VL_UNLIKELY((DifftestTrapEvent__02Eclock & 0xfeU))) {
        Verilated::overWidthError("DifftestTrapEvent.clock");}
    if (VL_UNLIKELY((DifftestTrapEvent__02Evalid & 0xfeU))) {
        Verilated::overWidthError("DifftestTrapEvent.valid");}
    if (VL_UNLIKELY((code & 0xf8U))) {
        Verilated::overWidthError("code");}
    if (VL_UNLIKELY((DifftestStoreEvent__02Eclock & 0xfeU))) {
        Verilated::overWidthError("DifftestStoreEvent.clock");}
    if (VL_UNLIKELY((DifftestLoadEvent__02Eclock & 0xfeU))) {
        Verilated::overWidthError("DifftestLoadEvent.clock");}
    if (VL_UNLIKELY((DifftestCSRRegState__02Eclock 
                     & 0xfeU))) {
        Verilated::overWidthError("DifftestCSRRegState.clock");}
    if (VL_UNLIKELY((DifftestGRegState__02Eclock & 0xfeU))) {
        Verilated::overWidthError("DifftestGRegState.clock");}
    if (VL_UNLIKELY((aclk & 0xfeU))) {
        Verilated::overWidthError("aclk");}
    if (VL_UNLIKELY((aresetn & 0xfeU))) {
        Verilated::overWidthError("aresetn");}
    if (VL_UNLIKELY((enable_delay & 0xfeU))) {
        Verilated::overWidthError("enable_delay");}
    if (VL_UNLIKELY((random_seed & 0xff800000U))) {
        Verilated::overWidthError("random_seed");}
    if (VL_UNLIKELY((uart_rx & 0xfeU))) {
        Verilated::overWidthError("uart_rx");}
    if (VL_UNLIKELY((uart_tx & 0xfeU))) {
        Verilated::overWidthError("uart_tx");}
    if (VL_UNLIKELY((btn_key_row & 0xf0U))) {
        Verilated::overWidthError("btn_key_row");}
    if (VL_UNLIKELY((btn_step & 0xfcU))) {
        Verilated::overWidthError("btn_step");}
}
#endif  // VL_DEBUG

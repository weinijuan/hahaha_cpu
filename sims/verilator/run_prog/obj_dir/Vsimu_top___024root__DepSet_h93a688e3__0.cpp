// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vsimu_top___024root.h"

extern const VlUnpacked<CData/*3:0*/, 1024> Vsimu_top__ConstPool__TABLE_h24f8336e_0;

VL_INLINE_OPT void Vsimu_top___024root___ico_sequent__TOP__0(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___ico_sequent__TOP__0\n"); );
    // Body
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
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__next_state 
        = ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state))
            ? ((IData)(((vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__key_count 
                         >> 0x13U) & (~ (IData)((0xfU 
                                                 == (IData)(vlSelf->btn_key_row))))))
                ? 1U : 0U) : ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state))
                               ? ((0xfU == (IData)(vlSelf->btn_key_row))
                                   ? 2U : 7U) : ((2U 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state))
                                                  ? 
                                                 ((0xfU 
                                                   == (IData)(vlSelf->btn_key_row))
                                                   ? 3U
                                                   : 7U)
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state))
                                                   ? 
                                                  ((0xfU 
                                                    == (IData)(vlSelf->btn_key_row))
                                                    ? 4U
                                                    : 7U)
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state))
                                                    ? 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->btn_key_row))
                                                     ? 0U
                                                     : 7U)
                                                    : 
                                                   ((7U 
                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state))
                                                     ? 
                                                    (((vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__key_count 
                                                       >> 0x13U) 
                                                      & (0xfU 
                                                         == (IData)(vlSelf->btn_key_row)))
                                                      ? 0U
                                                      : 7U)
                                                     : 0U))))));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[0U] 
        = vlSelf->ram_rdata;
    vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h4bbe5f71__0 
        = (1U & ((~ (IData)(vlSelf->enable_delay)) 
                 | ((vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                     >> 4U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_w_disable))));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wvalid) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_allow_out) 
              & (IData)(vlSelf->aresetn)));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wvalid) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_allow_out) 
              & (IData)(vlSelf->aresetn)));
    vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h34d16b8e__0 
        = (1U & ((~ (IData)(vlSelf->enable_delay)) 
                 | (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_ar_disable))));
    vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_hb251d2f0__0 
        = (1U & ((~ (IData)(vlSelf->enable_delay)) 
                 | ((vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                     >> 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw_disable))));
    vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h765eb7cb__0 
        = (1U & ((~ (IData)(vlSelf->enable_delay)) 
                 | (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                    >> 2U)));
    vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h76518f96__0 
        = (1U & ((~ (IData)(vlSelf->enable_delay)) 
                 | (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                    >> 3U)));
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
    vlSelf->simu_top__DOT__soc__DOT__m0_wvalid = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_wvalid) 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h4bbe5f71__0));
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
    vlSelf->simu_top__DOT__soc__DOT__m0_arvalid = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_arvalid) 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h34d16b8e__0));
    vlSelf->simu_top__DOT__soc__DOT__m0_awvalid = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_awvalid) 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_hb251d2f0__0));
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
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6c6cb05b__1 
            = vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h765eb7cb__0;
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready 
            = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready)) 
               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6c6cb05b__1) 
                  << 4U));
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
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_hee60d8fe__1 
            = vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h76518f96__0;
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
            = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready)) 
               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_hee60d8fe__1) 
                  << 3U));
    }
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
        = (0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready));
    if ((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_sel))) {
        vlSelf->simu_top__DOT__soc__DOT__m0_rdata = 
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata
            [4U];
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_hee60d8fe__1 
            = vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h76518f96__0;
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
            = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready)) 
               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_hee60d8fe__1) 
                  << 4U));
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__data_back 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__addr_rcv) 
           & (((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rvalid) 
               & (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h76518f96__0)) 
              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_bvalid) 
                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h765eb7cb__0))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData 
        = ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wstrb_mem_mem))
            ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wstrb_mem_mem))
                ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wstrb_mem_mem))
                    ? ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wstrb_mem_mem))
                        ? vlSelf->simu_top__DOT__soc__DOT__m0_rdata
                        : 0U) : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wstrb_mem_mem))
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
                : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wstrb_mem_mem))
                    ? 0U : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wstrb_mem_mem))
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
            : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wstrb_mem_mem))
                ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wstrb_mem_mem))
                    ? 0U : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wstrb_mem_mem))
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
                : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wstrb_mem_mem))
                    ? ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wstrb_mem_mem))
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
                    : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wstrb_mem_mem))
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
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_dir_del 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty)) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wvalid) 
              & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wready)));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h7d0af1f5__0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wvalid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid)) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h7d0af1f5__0));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h7d0af1f5__0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wvalid) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit) 
              >> 1U));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid 
        = ((0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid)) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h7d0af1f5__0) 
              << 1U));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h7d0af1f5__0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wvalid) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit) 
              >> 2U));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid 
        = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid)) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h7d0af1f5__0) 
              << 2U));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h7d0af1f5__0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wvalid) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit) 
              >> 3U));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid)) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h7d0af1f5__0) 
              << 3U));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h7d0af1f5__0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wvalid) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit) 
              >> 4U));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid 
        = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid)) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h7d0af1f5__0) 
              << 4U));
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
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_dir_ins 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arready) 
              & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arvalid)));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h136afa62__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
            & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit)) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arvalid));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid)) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h136afa62__0));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h136afa62__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit) 
               >> 1U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arvalid));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid 
        = ((0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid)) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h136afa62__0) 
              << 1U));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h136afa62__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit) 
               >> 2U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arvalid));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid 
        = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid)) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h136afa62__0) 
              << 2U));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h136afa62__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit) 
               >> 3U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arvalid));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid)) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h136afa62__0) 
              << 3U));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h136afa62__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit) 
               >> 4U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arvalid));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid 
        = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid)) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h136afa62__0) 
              << 4U));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_dir_ins 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awready) 
              & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awvalid)));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h24eed626__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
            & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit)) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awvalid));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid)) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h24eed626__0));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h24eed626__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit) 
               >> 1U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awvalid));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid 
        = ((0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid)) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h24eed626__0) 
              << 1U));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h24eed626__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit) 
               >> 2U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awvalid));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid 
        = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid)) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h24eed626__0) 
              << 2U));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h24eed626__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit) 
               >> 3U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awvalid));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid)) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h24eed626__0) 
              << 3U));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h24eed626__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit) 
               >> 4U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awvalid));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid 
        = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid)) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h24eed626__0) 
              << 4U));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
            >> 3U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid));
    vlSelf->ram_ren = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid) 
                       & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rvalid)) 
                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready)));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_valid) 
           & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rvalid)) 
              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                 >> 3U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_ready_go 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req) 
            & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req_or)) 
               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__data_back))) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp_valid));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_ready_go 
        = (1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req) 
                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req_or) 
                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__data_back))) 
                 | ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memRead_mem) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memWriteEn_mem))) 
                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid))));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_go 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
            >> 3U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_wready));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_go 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__s0_wready));
    vlSelf->write_uart_valid = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_uart_valid;
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push 
        = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid)) 
                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                    >> 3U)));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_push 
        = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid)) 
                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_cpu 
        = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr) 
                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd) 
                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid)) 
                       >> 2U))));
    vlSelf->__Vtableidx3 = ((0xfffffe00U & ((((8U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm)) 
                                              << 9U) 
                                             & (((IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_rlast) 
                                                 << 9U) 
                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                                   << 7U))) 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                                << 7U) 
                                               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_bvalid) 
                                                  << 9U)))) 
                            | ((0x100U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)) 
                                          << 8U)) | 
                               (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd) 
                                 << 7U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr) 
                                            << 6U) 
                                           | ((0x20U 
                                               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                                  << 3U)) 
                                              | ((0x10U 
                                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                                     << 2U)) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm)))))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm_nxt 
        = Vsimu_top__ConstPool__TABLE_h24f8336e_0[vlSelf->__Vtableidx3];
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_push 
        = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid)) 
                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                    >> 3U)));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_push 
        = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid)) 
                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid)));
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
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop 
        = ((IData)(vlSelf->ram_ren) & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen_last));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen_last));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_valid_in 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__pipeline_valid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_ready_go));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_valid_in 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_valid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_ready_go));
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
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_pop 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_push 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_push) 
           & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid)) 
              | (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop)));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_push 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_push) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid) 
              & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop)) 
                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid)))));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_pop 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_push 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push) 
           & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_valid)) 
              | (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop)));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_push 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_valid) 
              & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop)) 
                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_allow_in 
        = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_valid)) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_valid_in)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__req_mem 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_allow_in) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____VdfgTmp_hb2577766__0));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_ok_inst 
        = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req)) 
                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__req_mem))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_valid_in 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid) 
           & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req)) 
               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__req_mem) 
                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____VdfgTmp_hb2577766__0))) 
              | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____VdfgTmp_hb2577766__0)) 
                 & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divEn)) 
                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divEn) 
                       & (0x21U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__count)))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_allow_in 
        = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)) 
                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_valid_in) 
                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_allow_in))));
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

void Vsimu_top___024root___eval_ico(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vsimu_top___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vsimu_top___024root___eval_act(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vsimu_top___024root___nba_sequent__TOP__1(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*0:0*/ simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT____VdfgTmp_hf971e730__0;
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT____VdfgTmp_hf971e730__0 = 0;
    // Body
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_ack 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_enab) 
           & (0U == (0xfc000U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_ack 
        = ((0U != (0x3fU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr 
                            >> 0xeU))) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_enab));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel 
        = ((0U != (0x3fU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr 
                            >> 0xeU))) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_psel));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_ok_inst 
        = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req)) 
                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__req_mem))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_valid_in 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid) 
           & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req)) 
               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__req_mem) 
                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____VdfgTmp_hb2577766__0))) 
              | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____VdfgTmp_hb2577766__0)) 
                 & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divEn)) 
                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divEn) 
                       & (0x21U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__count)))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_valid_in 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__pipeline_valid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_ready_go));
    vlSelf->uart_tx = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__uart0_txd_oe)) 
                             & (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                 >> 4U) | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__infrared) 
                                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_out)))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_in 
        = (1U & ((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr))
                  ? (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_out)
                  : ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_pol)
                      ? (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__srx_pad))
                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__srx_pad))));
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
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_allow_in 
        = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)) 
                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_valid_in) 
                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_allow_in))));
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
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_allow_in 
        = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__pipeline_valid)) 
                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_valid_in) 
                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_allow_in))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_push 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____VdfgTmp_hcfb8fec4__0));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fifo_read 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__re) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____VdfgTmp_hcfb8fec4__0));
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
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datao_cpu 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)
            ? 0U : (0xffU & ((0U == (0x3fU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr 
                                              >> 0xeU)))
                              ? (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_datao)
                              : ((0U == (0x3fU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr 
                                                  >> 0xeU)))
                                  ? 0U : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__REG_DAT_T))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_allow_in 
        = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__pipeline_valid)) 
                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_valid_in) 
                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_allow_in))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask_d)) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask_condition));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__req_inst 
        = ((IData)(vlSelf->aresetn) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_allow_in));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_ready_go 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_ok_inst) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__req_inst));
}

VL_INLINE_OPT void Vsimu_top___024root___nba_sequent__TOP__2(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___nba_sequent__TOP__2\n"); );
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
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData 
        = ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wstrb_mem_mem))
            ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wstrb_mem_mem))
                ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wstrb_mem_mem))
                    ? ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wstrb_mem_mem))
                        ? vlSelf->simu_top__DOT__soc__DOT__m0_rdata
                        : 0U) : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wstrb_mem_mem))
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
                : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wstrb_mem_mem))
                    ? 0U : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wstrb_mem_mem))
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
            : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wstrb_mem_mem))
                ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wstrb_mem_mem))
                    ? 0U : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wstrb_mem_mem))
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
                : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wstrb_mem_mem))
                    ? ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wstrb_mem_mem))
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
                    : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wstrb_mem_mem))
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
}

void Vsimu_top___024root___nba_sequent__TOP__0(Vsimu_top___024root* vlSelf);

void Vsimu_top___024root___eval_nba(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vsimu_top___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        Vsimu_top___024root___nba_sequent__TOP__1(vlSelf);
        Vsimu_top___024root___nba_sequent__TOP__2(vlSelf);
    }
}

void Vsimu_top___024root___eval_triggers__ico(Vsimu_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimu_top___024root___dump_triggers__ico(Vsimu_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vsimu_top___024root___eval_triggers__act(Vsimu_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimu_top___024root___dump_triggers__act(Vsimu_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimu_top___024root___dump_triggers__nba(Vsimu_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vsimu_top___024root___eval(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
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
                VL_FATAL_MT("../testbench/simu_top.v", 1, "", "Input combinational region did not converge.");
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
                    VL_FATAL_MT("../testbench/simu_top.v", 1, "", "Active region did not converge.");
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
                VL_FATAL_MT("../testbench/simu_top.v", 1, "", "NBA region did not converge.");
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

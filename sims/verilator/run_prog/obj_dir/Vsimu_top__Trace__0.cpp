// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vsimu_top__Syms.h"


void Vsimu_top___024root__trace_chg_sub_0(Vsimu_top___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vsimu_top___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root__trace_chg_top_0\n"); );
    // Init
    Vsimu_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsimu_top___024root*>(voidSelf);
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vsimu_top___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

extern const VlWide<8>/*255:0*/ Vsimu_top__ConstPool__CONST_h3cc724c7_0;

void Vsimu_top___024root__trace_chg_sub_0(Vsimu_top___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[0]),2);
        bufp->chgCData(oldp+1,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[1]),2);
        bufp->chgCData(oldp+2,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[2]),2);
        bufp->chgCData(oldp+3,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[3]),2);
        bufp->chgCData(oldp+4,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[4]),2);
        bufp->chgCData(oldp+5,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[0]),2);
        bufp->chgCData(oldp+6,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[1]),2);
        bufp->chgCData(oldp+7,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[2]),2);
        bufp->chgCData(oldp+8,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[3]),2);
        bufp->chgCData(oldp+9,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[4]),2);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+10,(((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awready) 
                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_hb251d2f0__0))));
        bufp->chgBit(oldp+11,(((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wready) 
                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h4bbe5f71__0))));
        bufp->chgBit(oldp+12,(((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_bvalid) 
                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h765eb7cb__0))));
        bufp->chgBit(oldp+13,(((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arready) 
                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h34d16b8e__0))));
        bufp->chgIData(oldp+14,(vlSelf->simu_top__DOT__soc__DOT__m0_rdata),32);
        bufp->chgBit(oldp+15,(((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rvalid) 
                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h76518f96__0))));
        bufp->chgBit(oldp+16,(vlSelf->simu_top__DOT__soc__DOT__m0_awvalid));
        bufp->chgBit(oldp+17,(vlSelf->simu_top__DOT__soc__DOT__m0_wvalid));
        bufp->chgBit(oldp+18,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h765eb7cb__0));
        bufp->chgBit(oldp+19,(vlSelf->simu_top__DOT__soc__DOT__m0_arvalid));
        bufp->chgBit(oldp+20,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h76518f96__0));
        bufp->chgBit(oldp+21,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid))));
        bufp->chgBit(oldp+22,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid))));
        bufp->chgBit(oldp+23,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready))));
        bufp->chgBit(oldp+24,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid))));
        bufp->chgBit(oldp+25,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready))));
        bufp->chgBit(oldp+26,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                     >> 3U))));
        bufp->chgBit(oldp+27,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
                                     >> 3U))));
        bufp->chgBit(oldp+28,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                     >> 3U))));
        bufp->chgBit(oldp+29,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                     >> 3U))));
        bufp->chgBit(oldp+30,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                     >> 3U))));
        bufp->chgBit(oldp+31,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                     >> 2U))));
        bufp->chgBit(oldp+32,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
                                     >> 2U))));
        bufp->chgBit(oldp+33,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                     >> 2U))));
        bufp->chgBit(oldp+34,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                     >> 2U))));
        bufp->chgBit(oldp+35,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                     >> 2U))));
        bufp->chgBit(oldp+36,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en));
        bufp->chgCData(oldp+37,(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen),4);
        bufp->chgBit(oldp+38,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_cpu));
        bufp->chgBit(oldp+39,((((8U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm)) 
                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_rlast) 
                                   & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                      >> 2U))) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                                   >> 2U) 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_bvalid)))));
        bufp->chgCData(oldp+40,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm_nxt),4);
        bufp->chgBit(oldp+41,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NANDtag));
        bufp->chgBit(oldp+42,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                     >> 1U))));
        bufp->chgBit(oldp+43,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
                                     >> 1U))));
        bufp->chgBit(oldp+44,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                     >> 1U))));
        bufp->chgBit(oldp+45,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                     >> 1U))));
        bufp->chgBit(oldp+46,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                     >> 1U))));
        bufp->chgBit(oldp+47,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                     >> 4U))));
        bufp->chgBit(oldp+48,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
                                     >> 4U))));
        bufp->chgBit(oldp+49,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                     >> 4U))));
        bufp->chgBit(oldp+50,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                     >> 4U))));
        bufp->chgBit(oldp+51,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                     >> 4U))));
        bufp->chgIData(oldp+52,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[0]),32);
        bufp->chgIData(oldp+53,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[1]),32);
        bufp->chgIData(oldp+54,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[2]),32);
        bufp->chgIData(oldp+55,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[3]),32);
        bufp->chgIData(oldp+56,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[4]),32);
        bufp->chgCData(oldp+57,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid),5);
        bufp->chgCData(oldp+58,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid),5);
        bufp->chgCData(oldp+59,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready),5);
        bufp->chgCData(oldp+60,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid),5);
        bufp->chgCData(oldp+61,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready),5);
        bufp->chgBit(oldp+62,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_dir_ins));
        bufp->chgBit(oldp+63,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_dir_del));
        bufp->chgBit(oldp+64,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_dir_ins));
        bufp->chgBit(oldp+65,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_empty)) 
                               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rvalid) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rlast) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h76518f96__0))))));
        bufp->chgBit(oldp+66,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen_last)) 
                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en))));
        bufp->chgBit(oldp+67,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_push));
        bufp->chgBit(oldp+68,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop));
        bufp->chgBit(oldp+69,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push));
        bufp->chgBit(oldp+70,(((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid) 
                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop))));
        bufp->chgBit(oldp+71,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_push));
        bufp->chgBit(oldp+72,((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rvalid)) 
                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                        >> 3U)))));
        bufp->chgBit(oldp+73,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wlast)) 
                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en))));
        bufp->chgBit(oldp+74,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_push));
        bufp->chgBit(oldp+75,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop));
        bufp->chgBit(oldp+76,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_push));
        bufp->chgBit(oldp+77,(((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid) 
                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop))));
        bufp->chgBit(oldp+78,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_push));
        bufp->chgBit(oldp+79,(((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) 
                               & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid)) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop)))));
        bufp->chgBit(oldp+80,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop));
        bufp->chgBit(oldp+81,(((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid) 
                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop))));
        bufp->chgBit(oldp+82,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_push));
        bufp->chgBit(oldp+83,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en));
        bufp->chgBit(oldp+84,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_go));
        bufp->chgBit(oldp+85,((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen))));
        bufp->chgBit(oldp+86,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                               & (0x8000U == (0xffffU 
                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        bufp->chgBit(oldp+87,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                               & (0x8010U == (0xffffU 
                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        bufp->chgBit(oldp+88,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                               & (0x8020U == (0xffffU 
                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        bufp->chgBit(oldp+89,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                               & (0x8030U == (0xffffU 
                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        bufp->chgBit(oldp+90,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                               & (0x8040U == (0xffffU 
                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        bufp->chgBit(oldp+91,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                               & (0x8050U == (0xffffU 
                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        bufp->chgBit(oldp+92,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                               & (0x8060U == (0xffffU 
                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        bufp->chgBit(oldp+93,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                               & (0x8070U == (0xffffU 
                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        bufp->chgBit(oldp+94,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer));
        bufp->chgBit(oldp+95,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                               & (0xff00U == (0xffffU 
                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        bufp->chgBit(oldp+96,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                               & (0xff30U == (0xffffU 
                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        bufp->chgBit(oldp+97,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                               & (0xff40U == (0xffffU 
                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        bufp->chgBit(oldp+98,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_uart_valid));
        bufp->chgBit(oldp+99,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                               & (0xf020U == (0xffffU 
                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        bufp->chgCData(oldp+100,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__next_state),3);
        bufp->chgSData(oldp+101,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_key_tmp),16);
        bufp->chgBit(oldp+102,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                & (0xf030U == (0xffffU 
                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        bufp->chgBit(oldp+103,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                & (0xf040U == (0xffffU 
                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        bufp->chgBit(oldp+104,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                & (0xf050U == (0xffffU 
                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        bufp->chgBit(oldp+105,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__req_inst));
        bufp->chgBit(oldp+106,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_ok_inst));
        bufp->chgBit(oldp+107,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req) 
                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req_or)) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__data_back)))));
        bufp->chgBit(oldp+108,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__req_mem));
        bufp->chgBit(oldp+109,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req) 
                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req_or) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__data_back)))));
        bufp->chgBit(oldp+110,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__data_back));
        bufp->chgBit(oldp+111,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_allow_in));
        bufp->chgBit(oldp+112,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_ready_go));
        bufp->chgBit(oldp+113,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_allow_in));
        bufp->chgBit(oldp+114,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_ready_go));
        bufp->chgBit(oldp+115,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_valid_in));
        bufp->chgIData(oldp+116,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp_valid)
                                   ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp_valid)
                                       ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp
                                       : 0U) : vlSelf->simu_top__DOT__soc__DOT__m0_rdata)),32);
        bufp->chgBit(oldp+117,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_allow_in));
        bufp->chgBit(oldp+118,((1U & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req)) 
                                       & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__req_mem) 
                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____VdfgTmp_hb2577766__0))) 
                                      | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____VdfgTmp_hb2577766__0)) 
                                         & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divEn)) 
                                            | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divEn) 
                                               & (0x21U 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__count)))))))));
        bufp->chgBit(oldp+119,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_allow_in));
        bufp->chgBit(oldp+120,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_valid_in));
        bufp->chgBit(oldp+121,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_ready_go));
        bufp->chgBit(oldp+122,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_valid_in));
        bufp->chgIData(oldp+123,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid)
                                   ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid)
                                       ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp
                                       : 0U) : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData)),32);
        bufp->chgIData(oldp+124,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp_valid)
                                   ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp_valid)
                                       ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp
                                       : 0U) : vlSelf->simu_top__DOT__soc__DOT__m0_rdata)),32);
        bufp->chgIData(oldp+125,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid)
                                   ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid)
                                       ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp
                                       : 0U) : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData)),32);
        bufp->chgIData(oldp+126,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData),32);
        bufp->chgBit(oldp+127,(((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arvalid) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arready))));
        bufp->chgBit(oldp+128,(((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awvalid) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awready))));
        bufp->chgBit(oldp+129,(((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wvalid) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wready))));
        bufp->chgBit(oldp+130,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_push));
        bufp->chgBit(oldp+131,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop));
        bufp->chgBit(oldp+132,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_push));
        bufp->chgBit(oldp+133,(((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop))));
        bufp->chgBit(oldp+134,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_push));
        bufp->chgBit(oldp+135,((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rvalid)) 
                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready)))));
        bufp->chgBit(oldp+136,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wlast)) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en))));
        bufp->chgBit(oldp+137,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_push));
        bufp->chgBit(oldp+138,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop));
        bufp->chgBit(oldp+139,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_push));
        bufp->chgBit(oldp+140,(((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop))));
        bufp->chgBit(oldp+141,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_push));
        bufp->chgBit(oldp+142,(((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) 
                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid)) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop)))));
        bufp->chgBit(oldp+143,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop));
        bufp->chgBit(oldp+144,(((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop))));
        bufp->chgBit(oldp+145,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_push));
        bufp->chgBit(oldp+146,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en));
        bufp->chgBit(oldp+147,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_go));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+148,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r),32);
        bufp->chgCData(oldp+149,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_size_r),3);
        bufp->chgBit(oldp+150,(vlSelf->simu_top__DOT__soc__DOT__cpu_awvalid));
        bufp->chgIData(oldp+151,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wdata_r),32);
        bufp->chgCData(oldp+152,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wstrb_r),4);
        bufp->chgBit(oldp+153,(vlSelf->simu_top__DOT__soc__DOT__cpu_wvalid));
        bufp->chgCData(oldp+154,(vlSelf->simu_top__DOT__soc__DOT__m0_bid),4);
        bufp->chgCData(oldp+155,(vlSelf->simu_top__DOT__soc__DOT__m0_bresp),2);
        bufp->chgBit(oldp+156,(vlSelf->simu_top__DOT__soc__DOT__cpu_arvalid));
        bufp->chgCData(oldp+157,(vlSelf->simu_top__DOT__soc__DOT__m0_rid),4);
        bufp->chgCData(oldp+158,(vlSelf->simu_top__DOT__soc__DOT__m0_rresp),2);
        bufp->chgBit(oldp+159,(vlSelf->simu_top__DOT__soc__DOT__m0_rlast));
        bufp->chgBit(oldp+160,(vlSelf->simu_top__DOT__soc__DOT__m0_awready));
        bufp->chgBit(oldp+161,(vlSelf->simu_top__DOT__soc__DOT__m0_wready));
        bufp->chgBit(oldp+162,(vlSelf->simu_top__DOT__soc__DOT__m0_bvalid));
        bufp->chgBit(oldp+163,(vlSelf->simu_top__DOT__soc__DOT__m0_arready));
        bufp->chgBit(oldp+164,(vlSelf->simu_top__DOT__soc__DOT__m0_rvalid));
        bufp->chgBit(oldp+165,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid)))));
        bufp->chgBit(oldp+166,(vlSelf->simu_top__DOT__soc__DOT__s0_wready));
        bufp->chgCData(oldp+167,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_data),4);
        bufp->chgBit(oldp+168,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid));
        bufp->chgBit(oldp+169,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid)))));
        bufp->chgCData(oldp+170,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rid),4);
        bufp->chgBit(oldp+171,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rlast));
        bufp->chgBit(oldp+172,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rvalid));
        bufp->chgBit(oldp+173,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid)))));
        bufp->chgBit(oldp+174,(vlSelf->simu_top__DOT__soc__DOT__conf_s_wready));
        bufp->chgCData(oldp+175,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_data),4);
        bufp->chgBit(oldp+176,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid));
        bufp->chgBit(oldp+177,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid)))));
        bufp->chgCData(oldp+178,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rid),4);
        bufp->chgIData(oldp+179,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_rdata_reg),32);
        bufp->chgBit(oldp+180,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rlast));
        bufp->chgBit(oldp+181,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rvalid));
        bufp->chgBit(oldp+182,(vlSelf->simu_top__DOT__soc__DOT__apb_s_awready));
        bufp->chgBit(oldp+183,(vlSelf->simu_top__DOT__soc__DOT__apb_s_wready));
        bufp->chgCData(oldp+184,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_w_id),4);
        bufp->chgBit(oldp+185,(vlSelf->simu_top__DOT__soc__DOT__apb_s_bvalid));
        bufp->chgBit(oldp+186,(vlSelf->simu_top__DOT__soc__DOT__apb_s_arready));
        bufp->chgCData(oldp+187,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_r_id),4);
        bufp->chgIData(oldp+188,(((0U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb)))
                                   ? vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32
                                   : ((1U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb)))
                                       ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                                          << 8U) : 
                                      ((2U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb)))
                                        ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                                           << 0x10U)
                                        : ((3U == (3U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb)))
                                            ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                                               << 0x18U)
                                            : 0U))))),32);
        bufp->chgBit(oldp+189,(vlSelf->simu_top__DOT__soc__DOT__apb_s_rlast));
        bufp->chgBit(oldp+190,(vlSelf->simu_top__DOT__soc__DOT__apb_s_rvalid));
        bufp->chgIData(oldp+191,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr),32);
        bufp->chgIData(oldp+192,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr),32);
        bufp->chgIData(oldp+193,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata),32);
        bufp->chgCData(oldp+194,(((IData)(vlSelf->simu_top__DOT__soc__DOT__uart0_int) 
                                  << 1U)),8);
        bufp->chgBit(oldp+195,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                      >> 1U))));
        bufp->chgBit(oldp+196,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr))));
        bufp->chgBit(oldp+197,(vlSelf->simu_top__DOT__soc__DOT__uart0_int));
        bufp->chgBit(oldp+198,((IData)(((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                          >> 4U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__infrared)) 
                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_out)))));
        bufp->chgBit(oldp+199,(vlSelf->simu_top__DOT__soc__DOT__uart0_txd_oe));
        bufp->chgBit(oldp+200,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_reg) 
                                      ^ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                                         >> 3U)))));
        bufp->chgBit(oldp+201,((1U & (~ (IData)(vlSelf->uart_rx__en0)))));
        bufp->chgBit(oldp+202,(((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_ack))));
        bufp->chgIData(oldp+203,(((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)
                                   ? ((((0U == (0x3fU 
                                                & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr 
                                                   >> 0xeU)))
                                         ? 0U : (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__REG_DAT_T 
                                                 >> 8U)) 
                                       << 8U) | (0xffU 
                                                 & ((0U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr 
                                                         >> 0xeU)))
                                                     ? (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_datao)
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr 
                                                          >> 0xeU)))
                                                      ? 0U
                                                      : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__REG_DAT_T))))
                                   : 0U)),32);
        bufp->chgBit(oldp+204,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant));
        bufp->chgBit(oldp+205,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ));
        bufp->chgBit(oldp+206,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_ack))));
        bufp->chgBit(oldp+207,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr));
        bufp->chgBit(oldp+208,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu));
        bufp->chgBit(oldp+209,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu));
        bufp->chgIData(oldp+210,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr),20);
        bufp->chgCData(oldp+211,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datai_cpu),8);
        bufp->chgCData(oldp+212,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datao_cpu),8);
        bufp->chgBit(oldp+213,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_word_trans_cpu));
        bufp->chgIData(oldp+214,(((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)
                                   ? 0U : ((0U == (0x3fU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr 
                                                      >> 0xeU)))
                                            ? 0U : 
                                           (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__REG_DAT_T 
                                            >> 8U)))),24);
        bufp->chgIData(oldp+215,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_high_24b_wr),24);
        bufp->chgBit(oldp+216,((0U == (0x3fU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr 
                                                >> 0xeU)))));
        bufp->chgBit(oldp+217,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_ack));
        bufp->chgBit(oldp+218,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_rw));
        bufp->chgBit(oldp+219,(((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_psel) 
                                & (0U == (0xfc000U 
                                          & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)))));
        bufp->chgIData(oldp+220,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr),20);
        bufp->chgCData(oldp+221,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_datai),8);
        bufp->chgCData(oldp+222,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_datao),8);
        bufp->chgBit(oldp+223,((0U != (0x3fU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr 
                                                >> 0xeU)))));
        bufp->chgBit(oldp+224,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_ack));
        bufp->chgBit(oldp+225,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel));
        bufp->chgIData(oldp+226,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_datai),32);
        bufp->chgIData(oldp+227,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__REG_DAT_T),32);
        bufp->chgBit(oldp+228,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_ack));
        bufp->chgBit(oldp+229,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_psel));
        bufp->chgBit(oldp+230,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_enab));
        bufp->chgIData(oldp+231,((0xffffffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)
                                                ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_wdata_dma 
                                                   >> 8U)
                                                : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_high_24b_wr))),24);
        bufp->chgIData(oldp+232,(((0U == (0x3fU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr 
                                                   >> 0xeU)))
                                   ? 0U : (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__REG_DAT_T 
                                           >> 8U))),24);
        bufp->chgCData(oldp+233,((0xffU & ((0U == (0x3fU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr 
                                                      >> 0xeU)))
                                            ? (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_datao)
                                            : ((0U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr 
                                                    >> 0xeU)))
                                                ? 0U
                                                : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__REG_DAT_T)))),8);
        bufp->chgBit(oldp+234,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)))));
        bufp->chgBit(oldp+235,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_ready));
        bufp->chgBit(oldp+236,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd));
        bufp->chgCData(oldp+237,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm),4);
        bufp->chgCData(oldp+238,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb),4);
        bufp->chgCData(oldp+239,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb),4);
        bufp->chgIData(oldp+240,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32),32);
        bufp->chgIData(oldp+241,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32),32);
        bufp->chgCData(oldp+242,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count),3);
        bufp->chgCData(oldp+243,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size),3);
        bufp->chgCData(oldp+244,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_wr_size),3);
        bufp->chgBit(oldp+245,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_int));
        bufp->chgSData(oldp+246,((0x7ffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)),11);
        bufp->chgCData(oldp+247,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r0),4);
        bufp->chgCData(oldp+248,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r1),4);
        bufp->chgCData(oldp+249,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_type_r1),2);
        bufp->chgCData(oldp+250,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_type_r2),2);
        bufp->chgSData(oldp+251,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_c),14);
        bufp->chgIData(oldp+252,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r),25);
        bufp->chgIData(oldp+253,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_op_num),32);
        bufp->chgIData(oldp+254,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter),32);
        bufp->chgIData(oldp+255,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0),32);
        bufp->chgIData(oldp+256,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map1),32);
        bufp->chgIData(oldp+257,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_rdy_map0),32);
        bufp->chgIData(oldp+258,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_rdy_map1),32);
        bufp->chgIData(oldp+259,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command),32);
        bufp->chgSData(oldp+260,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing),16);
        bufp->chgQData(oldp+261,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__addr_in_die),38);
        bufp->chgCData(oldp+263,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE),5);
        bufp->chgIData(oldp+264,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM),32);
        bufp->chgSData(oldp+265,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT),14);
        bufp->chgSData(oldp+266,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT),14);
        bufp->chgBit(oldp+267,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_clr_ack));
        bufp->chgBit(oldp+268,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE));
        bufp->chgBit(oldp+269,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_));
        bufp->chgSData(oldp+270,((0x3fffU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                             >> 0x10U))),14);
        bufp->chgCData(oldp+271,((7U & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+272,((0xfU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                          >> 8U))),4);
        bufp->chgBit(oldp+273,((1U & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                      >> 8U))));
        bufp->chgBit(oldp+274,((1U & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                      >> 9U))));
        bufp->chgBit(oldp+275,((1U & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                      >> 0xdU))));
        bufp->chgBit(oldp+276,(((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
                                & (0x40U == (0x7ffU 
                                             & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)))));
        bufp->chgBit(oldp+277,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY));
        bufp->chgBit(oldp+278,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT0));
        bufp->chgBit(oldp+279,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT1));
        bufp->chgBit(oldp+280,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT2));
        bufp->chgBit(oldp+281,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT3));
        bufp->chgBit(oldp+282,(((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
                                & (0x10U == (0x7ffU 
                                             & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)))));
        bufp->chgBit(oldp+283,(((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
                                & (0x14U == (0x7ffU 
                                             & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)))));
        bufp->chgBit(oldp+284,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT6));
        bufp->chgBit(oldp+285,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT7));
        bufp->chgBit(oldp+286,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT8));
        bufp->chgBit(oldp+287,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT9));
        bufp->chgBit(oldp+288,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT10));
        bufp->chgBit(oldp+289,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT11));
        bufp->chgBit(oldp+290,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT));
        bufp->chgBit(oldp+291,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_cmd_valid));
        bufp->chgCData(oldp+292,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status),8);
        bufp->chgCData(oldp+293,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_number),2);
        bufp->chgQData(oldp+294,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM),48);
        bufp->chgIData(oldp+296,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD),32);
        bufp->chgCData(oldp+297,((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT____VdfgTmp_he5337c8c__0) 
                                   << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT____VdfgTmp_hda1c3bf2__0) 
                                              << 2U) 
                                             | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT____VdfgTmp_hdb5c27a8__0) 
                                                 << 1U) 
                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT____VdfgTmp_h194fa2e7__0))))),4);
        bufp->chgCData(oldp+298,((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT____VdfgTmp_hea0d93a3__0) 
                                   << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT____VdfgTmp_h2fe3549b__0) 
                                              << 2U) 
                                             | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT____VdfgTmp_h559fe0c2__0) 
                                                 << 1U) 
                                                | (1U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r1)))))),4);
        bufp->chgCData(oldp+299,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer),2);
        bufp->chgCData(oldp+300,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT),3);
        bufp->chgCData(oldp+301,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM),8);
        bufp->chgCData(oldp+302,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM),8);
        bufp->chgCData(oldp+303,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND),8);
        bufp->chgCData(oldp+304,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE),5);
        bufp->chgCData(oldp+305,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM),3);
        bufp->chgSData(oldp+306,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count),14);
        bufp->chgQData(oldp+307,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR),38);
        bufp->chgIData(oldp+309,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_I_WR),32);
        bufp->chgBit(oldp+310,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO));
        bufp->chgBit(oldp+311,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ACK));
        bufp->chgBit(oldp+312,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE));
        bufp->chgBit(oldp+313,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ERASE_SERIAL));
        bufp->chgBit(oldp+314,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half));
        bufp->chgBit(oldp+315,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob));
        bufp->chgCData(oldp+316,((0xffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)),8);
        bufp->chgBit(oldp+317,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we));
        bufp->chgBit(oldp+318,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__re));
        bufp->chgBit(oldp+319,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__rx_en));
        bufp->chgBit(oldp+320,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__tx2rx_en));
        bufp->chgBit(oldp+321,(vlSelf->uart_rx__en0));
        bufp->chgCData(oldp+322,((7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)),3);
        bufp->chgBit(oldp+323,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__enable));
        bufp->chgBit(oldp+324,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__srx_pad));
        bufp->chgCData(oldp+325,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier),4);
        bufp->chgCData(oldp+326,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir),4);
        bufp->chgCData(oldp+327,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fcr),2);
        bufp->chgCData(oldp+328,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr),5);
        bufp->chgBit(oldp+329,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__infrared));
        bufp->chgBit(oldp+330,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_pol));
        bufp->chgCData(oldp+331,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr),8);
        bufp->chgCData(oldp+332,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr),8);
        bufp->chgIData(oldp+333,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl),24);
        bufp->chgBit(oldp+334,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__start_dlc));
        bufp->chgBit(oldp+335,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask_d));
        bufp->chgBit(oldp+336,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset));
        bufp->chgSData(oldp+337,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc),16);
        bufp->chgCData(oldp+338,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__trigger_level),4);
        bufp->chgBit(oldp+339,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_reset));
        bufp->chgBit(oldp+340,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tx_reset));
        bufp->chgBit(oldp+341,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                                      >> 7U))));
        bufp->chgBit(oldp+342,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                                      >> 2U))));
        bufp->chgBit(oldp+343,((1U & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                                         >> 2U)))));
        bufp->chgBit(oldp+344,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_reg));
        bufp->chgBit(oldp+345,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_en_reg));
        bufp->chgCData(oldp+346,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg),8);
        bufp->chgCData(oldp+347,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fi_di_reg),8);
        bufp->chgCData(oldp+348,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count),8);
        bufp->chgCData(oldp+349,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__repeat_reg),3);
        bufp->chgBit(oldp+350,((0U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))));
        bufp->chgBit(oldp+351,((1U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))));
        bufp->chgBit(oldp+352,((2U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))));
        bufp->chgBit(oldp+353,((3U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))));
        bufp->chgBit(oldp+354,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tx_en));
        bufp->chgBit(oldp+355,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                                      >> 3U))));
        bufp->chgBit(oldp+356,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                      >> 4U))));
        bufp->chgBit(oldp+357,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____VdfgTmp_h84138141__0) 
                                      >> 3U))));
        bufp->chgBit(oldp+358,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____VdfgTmp_h84138141__0) 
                                      >> 2U))));
        bufp->chgBit(oldp+359,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____VdfgTmp_h84138141__0) 
                                      >> 1U))));
        bufp->chgBit(oldp+360,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____VdfgTmp_h84138141__0))));
        bufp->chgCData(oldp+361,((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7r) 
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
                                                            | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0r))))))))),8);
        bufp->chgBit(oldp+362,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0));
        bufp->chgBit(oldp+363,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_overrun));
        bufp->chgBit(oldp+364,((1U & ((IData)(vlSelf->__VdfgTmp_hcd04e225__0) 
                                      >> 1U))));
        bufp->chgBit(oldp+365,((1U & (IData)(vlSelf->__VdfgTmp_hcd04e225__0))));
        bufp->chgBit(oldp+366,((1U & ((IData)(vlSelf->__VdfgTmp_hcd04e225__0) 
                                      >> 2U))));
        bufp->chgBit(oldp+367,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5));
        bufp->chgBit(oldp+368,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6));
        bufp->chgBit(oldp+369,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7));
        bufp->chgBit(oldp+370,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0r));
        bufp->chgBit(oldp+371,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr1r));
        bufp->chgBit(oldp+372,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr2r));
        bufp->chgBit(oldp+373,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr3r));
        bufp->chgBit(oldp+374,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr4r));
        bufp->chgBit(oldp+375,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5r));
        bufp->chgBit(oldp+376,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6r));
        bufp->chgBit(oldp+377,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7r));
        bufp->chgBit(oldp+378,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask));
        bufp->chgBit(oldp+379,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int));
        bufp->chgBit(oldp+380,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int));
        bufp->chgBit(oldp+381,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int));
        bufp->chgBit(oldp+382,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int));
        bufp->chgBit(oldp+383,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int));
        bufp->chgBit(oldp+384,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_push));
        bufp->chgBit(oldp+385,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop));
        bufp->chgSData(oldp+386,((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__data8_out) 
                                   << 3U) | (IData)(vlSelf->__VdfgTmp_hcd04e225__0))),11);
        bufp->chgBit(oldp+387,((0U != (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                       [0U] | (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                               [1U] 
                                               | (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                  [2U] 
                                                  | (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                     [3U] 
                                                     | (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
                                                                                [0xfU]))))))))))))))))));
        bufp->chgCData(oldp+388,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count),5);
        bufp->chgCData(oldp+389,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count),5);
        bufp->chgCData(oldp+390,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate),3);
        bufp->chgCData(oldp+391,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate),4);
        bufp->chgSData(oldp+392,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t),10);
        bufp->chgBit(oldp+393,((1U & (~ (IData)((0U 
                                                 != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt)))))));
        bufp->chgCData(oldp+394,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt),8);
        bufp->chgCData(oldp+395,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value),8);
        bufp->chgBit(oldp+396,((1U & ((~ (IData)(vlSelf->uart_rx__en0)) 
                                      | ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate)) 
                                         & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error)) 
                                            | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error) 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT____VdfgTmp_hd44064a5__0))))))));
        bufp->chgBit(oldp+397,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__max_repeat_time));
        bufp->chgBit(oldp+398,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_out));
        bufp->chgBit(oldp+399,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_in));
        bufp->chgBit(oldp+400,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_push_pulse));
        bufp->chgBit(oldp+401,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask_condition));
        bufp->chgBit(oldp+402,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir_read));
        bufp->chgBit(oldp+403,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr_read));
        bufp->chgBit(oldp+404,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fifo_read));
        bufp->chgCData(oldp+405,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__delayed_modem_signals),4);
        bufp->chgBit(oldp+406,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0_d));
        bufp->chgBit(oldp+407,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr1_d));
        bufp->chgBit(oldp+408,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr2_d));
        bufp->chgBit(oldp+409,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr3_d));
        bufp->chgBit(oldp+410,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr4_d));
        bufp->chgBit(oldp+411,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5_d));
        bufp->chgBit(oldp+412,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6_d));
        bufp->chgBit(oldp+413,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7_d));
        bufp->chgSData(oldp+414,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_cnt),9);
        bufp->chgSData(oldp+415,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_next),9);
        bufp->chgBit(oldp+416,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_cnt) 
                                       ^ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_next)) 
                                      >> 8U))));
        bufp->chgBit(oldp+417,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_d));
        bufp->chgBit(oldp+418,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_d));
        bufp->chgBit(oldp+419,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_d));
        bufp->chgBit(oldp+420,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_d));
        bufp->chgBit(oldp+421,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_d));
        bufp->chgBit(oldp+422,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_d)) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int))));
        bufp->chgBit(oldp+423,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_d)) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int))));
        bufp->chgBit(oldp+424,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_d)) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int))));
        bufp->chgBit(oldp+425,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_d)) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int))));
        bufp->chgBit(oldp+426,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_d)) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int))));
        bufp->chgBit(oldp+427,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_pnd));
        bufp->chgBit(oldp+428,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_pnd));
        bufp->chgBit(oldp+429,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_pnd));
        bufp->chgBit(oldp+430,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_pnd));
        bufp->chgBit(oldp+431,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_pnd));
        bufp->chgBit(oldp+432,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__d1_fifo_read));
        bufp->chgBit(oldp+433,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__i_uart_sync_flops__DOT__flop_0));
        bufp->chgBit(oldp+434,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____Vcellinp__receiver__enable));
        bufp->chgCData(oldp+435,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16),4);
        bufp->chgCData(oldp+436,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rbit_counter),3);
        bufp->chgCData(oldp+437,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift),8);
        bufp->chgBit(oldp+438,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity));
        bufp->chgBit(oldp+439,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_error));
        bufp->chgBit(oldp+440,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rframing_error));
        bufp->chgBit(oldp+441,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rbit_in));
        bufp->chgBit(oldp+442,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_xor));
        bufp->chgCData(oldp+443,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b),8);
        bufp->chgBit(oldp+444,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push_q));
        bufp->chgSData(oldp+445,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_data_in),11);
        bufp->chgBit(oldp+446,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push));
        bufp->chgBit(oldp+447,((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b))));
        bufp->chgBit(oldp+448,((7U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16))));
        bufp->chgBit(oldp+449,((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16))));
        bufp->chgBit(oldp+450,((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16))));
        bufp->chgCData(oldp+451,((0xfU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16) 
                                          - (IData)(1U)))),4);
        bufp->chgSData(oldp+452,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value),10);
        bufp->chgCData(oldp+453,((0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value) 
                                           >> 2U))),8);
        bufp->chgCData(oldp+454,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__data8_out),8);
        bufp->chgCData(oldp+455,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
        bufp->chgCData(oldp+456,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
        bufp->chgCData(oldp+457,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
        bufp->chgCData(oldp+458,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
        bufp->chgCData(oldp+459,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
        bufp->chgCData(oldp+460,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
        bufp->chgCData(oldp+461,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
        bufp->chgCData(oldp+462,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
        bufp->chgCData(oldp+463,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
        bufp->chgCData(oldp+464,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
        bufp->chgCData(oldp+465,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
        bufp->chgCData(oldp+466,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
        bufp->chgCData(oldp+467,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
        bufp->chgCData(oldp+468,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
        bufp->chgCData(oldp+469,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
        bufp->chgCData(oldp+470,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
        bufp->chgCData(oldp+471,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
        bufp->chgCData(oldp+472,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
        bufp->chgCData(oldp+473,((0xfU & ((IData)(1U) 
                                          + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
        bufp->chgCData(oldp+474,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0U]),3);
        bufp->chgCData(oldp+475,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [1U]),3);
        bufp->chgCData(oldp+476,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [2U]),3);
        bufp->chgCData(oldp+477,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [3U]),3);
        bufp->chgCData(oldp+478,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [4U]),3);
        bufp->chgCData(oldp+479,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [5U]),3);
        bufp->chgCData(oldp+480,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [6U]),3);
        bufp->chgCData(oldp+481,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [7U]),3);
        bufp->chgCData(oldp+482,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [8U]),3);
        bufp->chgCData(oldp+483,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [9U]),3);
        bufp->chgCData(oldp+484,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0xaU]),3);
        bufp->chgCData(oldp+485,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0xbU]),3);
        bufp->chgCData(oldp+486,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0xcU]),3);
        bufp->chgCData(oldp+487,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0xdU]),3);
        bufp->chgCData(oldp+488,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0xeU]),3);
        bufp->chgCData(oldp+489,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0xfU]),3);
        bufp->chgCData(oldp+490,((0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_data_in) 
                                           >> 3U))),8);
        bufp->chgCData(oldp+491,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
        bufp->chgCData(oldp+492,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
        bufp->chgCData(oldp+493,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
        bufp->chgCData(oldp+494,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
        bufp->chgCData(oldp+495,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
        bufp->chgCData(oldp+496,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
        bufp->chgCData(oldp+497,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
        bufp->chgCData(oldp+498,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
        bufp->chgCData(oldp+499,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
        bufp->chgCData(oldp+500,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
        bufp->chgCData(oldp+501,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
        bufp->chgCData(oldp+502,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
        bufp->chgCData(oldp+503,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
        bufp->chgCData(oldp+504,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
        bufp->chgCData(oldp+505,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
        bufp->chgCData(oldp+506,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
        bufp->chgBit(oldp+507,(((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__enable) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tx_en))));
        bufp->chgCData(oldp+508,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter),5);
        bufp->chgCData(oldp+509,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter),3);
        bufp->chgCData(oldp+510,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__shift_out),7);
        bufp->chgBit(oldp+511,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp));
        bufp->chgBit(oldp+512,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor));
        bufp->chgBit(oldp+513,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_pop));
        bufp->chgBit(oldp+514,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_out));
        bufp->chgBit(oldp+515,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error));
        bufp->chgCData(oldp+516,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time),3);
        bufp->chgCData(oldp+517,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_out),8);
        bufp->chgBit(oldp+518,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_overrun));
        bufp->chgCData(oldp+519,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_bak),8);
        bufp->chgCData(oldp+520,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
        bufp->chgCData(oldp+521,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
        bufp->chgCData(oldp+522,((0xfU & ((IData)(1U) 
                                          + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
        bufp->chgCData(oldp+523,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
        bufp->chgCData(oldp+524,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
        bufp->chgCData(oldp+525,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
        bufp->chgCData(oldp+526,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
        bufp->chgCData(oldp+527,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
        bufp->chgCData(oldp+528,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
        bufp->chgCData(oldp+529,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
        bufp->chgCData(oldp+530,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
        bufp->chgCData(oldp+531,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
        bufp->chgCData(oldp+532,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
        bufp->chgCData(oldp+533,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
        bufp->chgCData(oldp+534,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
        bufp->chgCData(oldp+535,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
        bufp->chgCData(oldp+536,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
        bufp->chgCData(oldp+537,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
        bufp->chgCData(oldp+538,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
        bufp->chgCData(oldp+539,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit),5);
        bufp->chgCData(oldp+540,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit),5);
        bufp->chgCData(oldp+541,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit),5);
        bufp->chgCData(oldp+542,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit),5);
        bufp->chgCData(oldp+543,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready),5);
        bufp->chgCData(oldp+544,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready),5);
        bufp->chgCData(oldp+545,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid),5);
        bufp->chgCData(oldp+546,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready),5);
        bufp->chgCData(oldp+547,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast),5);
        bufp->chgCData(oldp+548,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid),5);
        bufp->chgCData(oldp+549,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[0]),4);
        bufp->chgCData(oldp+550,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[1]),4);
        bufp->chgCData(oldp+551,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[2]),4);
        bufp->chgCData(oldp+552,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[3]),4);
        bufp->chgCData(oldp+553,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[4]),4);
        bufp->chgCData(oldp+554,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[0]),4);
        bufp->chgCData(oldp+555,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[1]),4);
        bufp->chgCData(oldp+556,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[2]),4);
        bufp->chgCData(oldp+557,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[3]),4);
        bufp->chgCData(oldp+558,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[4]),4);
        bufp->chgCData(oldp+559,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_0),3);
        bufp->chgCData(oldp+560,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_1),3);
        bufp->chgCData(oldp+561,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__bvalid_group_0),3);
        bufp->chgCData(oldp+562,((((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_bvalid) 
                                   << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid))),3);
        bufp->chgCData(oldp+563,((((IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_rvalid) 
                                   << 2U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rvalid) 
                                              << 1U) 
                                             | (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rvalid)))),3);
        bufp->chgCData(oldp+564,((((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rvalid) 
                                   << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rvalid))),3);
        bufp->chgBit(oldp+565,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty));
        bufp->chgBit(oldp+566,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full));
        bufp->chgBit(oldp+567,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_empty));
        bufp->chgBit(oldp+568,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full));
        bufp->chgCData(oldp+569,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_dir),3);
        bufp->chgCData(oldp+570,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir),3);
        bufp->chgCData(oldp+571,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_pre_sel),3);
        bufp->chgBit(oldp+572,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog));
        bufp->chgCData(oldp+573,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel_reg),3);
        bufp->chgCData(oldp+574,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel),3);
        bufp->chgIData(oldp+575,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int),32);
        bufp->chgBit(oldp+576,((1U & (~ ((0x1fe0U == 
                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r 
                                           >> 0x10U)) 
                                         | (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____VdfgTmp_h58a8c0e9__0))))));
        bufp->chgCData(oldp+577,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_sel),3);
        bufp->chgCData(oldp+578,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir),3);
        bufp->chgCData(oldp+579,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_pre_sel),3);
        bufp->chgBit(oldp+580,((1U & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____VdfgTmp_h58a8c0e9__0) 
                                         | (0x1fe0U 
                                            == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r 
                                                >> 0x10U)))))));
        bufp->chgIData(oldp+581,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int),32);
        bufp->chgCData(oldp+582,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram[0]),3);
        bufp->chgCData(oldp+583,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram[1]),3);
        bufp->chgCData(oldp+584,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr),2);
        bufp->chgCData(oldp+585,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr),2);
        bufp->chgBit(oldp+586,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr))));
        bufp->chgBit(oldp+587,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr))));
        bufp->chgIData(oldp+588,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__i),32);
        bufp->chgCData(oldp+589,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram[0]),3);
        bufp->chgCData(oldp+590,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram[1]),3);
        bufp->chgCData(oldp+591,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr),2);
        bufp->chgCData(oldp+592,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr),2);
        bufp->chgBit(oldp+593,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr))));
        bufp->chgBit(oldp+594,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr))));
        bufp->chgIData(oldp+595,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__i),32);
        bufp->chgQData(oldp+596,((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst)) 
                                   << 0x2bU) | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arsize)) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen)) 
                                                    << 0x24U) 
                                                   | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)) 
                                                       << 4U) 
                                                      | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arid))))))),45);
        bufp->chgIData(oldp+598,(((((IData)(1U) + (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr 
                                                   >> 2U)) 
                                   << 2U) | (3U & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr))),32);
        bufp->chgIData(oldp+599,((((- (IData)((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst)))) 
                                   & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr) 
                                  | (((- (IData)((1U 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst)))) 
                                      & ((((IData)(1U) 
                                           + (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr 
                                              >> 2U)) 
                                          << 2U) | 
                                         (3U & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr))) 
                                     | ((- (IData)(
                                                   (2U 
                                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst)))) 
                                        & ((0xffffffc0U 
                                            & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr) 
                                           | ((0x3cU 
                                               & ((0xfffffffcU 
                                                   & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen)) 
                                                       << 2U) 
                                                      & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)) 
                                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen) 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr 
                                                          >> 2U))) 
                                                     << 2U))) 
                                              | (3U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr))))))),32);
        bufp->chgIData(oldp+600,(((0xffffffc0U & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr) 
                                  | ((0x3cU & ((0xfffffffcU 
                                                & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen)) 
                                                    << 2U) 
                                                   & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)) 
                                               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen) 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr 
                                                       >> 2U))) 
                                                  << 2U))) 
                                     | (3U & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)))),32);
        bufp->chgCData(oldp+601,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst),2);
        bufp->chgBit(oldp+602,((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst))));
        bufp->chgBit(oldp+603,((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst))));
        bufp->chgBit(oldp+604,((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst))));
        bufp->chgCData(oldp+605,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arid),4);
        bufp->chgCData(oldp+606,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen),4);
        bufp->chgBit(oldp+607,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen_last));
        bufp->chgCData(oldp+608,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arsize),3);
        bufp->chgBit(oldp+609,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid));
        bufp->chgQData(oldp+610,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push_data),45);
        bufp->chgQData(oldp+612,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas),45);
        bufp->chgIData(oldp+614,((IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas 
                                          >> 0xdU))),32);
        bufp->chgCData(oldp+615,((3U & (IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas 
                                                >> 0xbU)))),2);
        bufp->chgCData(oldp+616,((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas))),4);
        bufp->chgCData(oldp+617,((0xfU & (IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas 
                                                  >> 4U)))),4);
        bufp->chgCData(oldp+618,((7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas 
                                                >> 8U)))),3);
        bufp->chgBit(oldp+619,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_valid));
        bufp->chgCData(oldp+620,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rcur),4);
        bufp->chgQData(oldp+621,((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)) 
                                   << 0xdU) | (QData)((IData)(
                                                              (((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst) 
                                                                << 0xbU) 
                                                               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awsize) 
                                                                   << 8U) 
                                                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awlen) 
                                                                      << 4U) 
                                                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awid)))))))),45);
        bufp->chgIData(oldp+623,(((((IData)(1U) + (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr 
                                                   >> 2U)) 
                                   << 2U) | (3U & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr))),32);
        bufp->chgIData(oldp+624,((((- (IData)((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst)))) 
                                   & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr) 
                                  | (((- (IData)((1U 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst)))) 
                                      & ((((IData)(1U) 
                                           + (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr 
                                              >> 2U)) 
                                          << 2U) | 
                                         (3U & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr))) 
                                     | ((- (IData)(
                                                   (2U 
                                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst)))) 
                                        & ((0xffffffc0U 
                                            & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr) 
                                           | ((0x3cU 
                                               & ((0xfffffffcU 
                                                   & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awlen)) 
                                                       << 2U) 
                                                      & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)) 
                                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awlen) 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr 
                                                          >> 2U))) 
                                                     << 2U))) 
                                              | (3U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr))))))),32);
        bufp->chgIData(oldp+625,(((0xffffffc0U & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr) 
                                  | ((0x3cU & ((0xfffffffcU 
                                                & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awlen)) 
                                                    << 2U) 
                                                   & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)) 
                                               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awlen) 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr 
                                                       >> 2U))) 
                                                  << 2U))) 
                                     | (3U & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))),32);
        bufp->chgCData(oldp+626,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst),2);
        bufp->chgBit(oldp+627,((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst))));
        bufp->chgBit(oldp+628,((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst))));
        bufp->chgBit(oldp+629,((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst))));
        bufp->chgCData(oldp+630,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awid),4);
        bufp->chgCData(oldp+631,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awlen),4);
        bufp->chgCData(oldp+632,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awsize),3);
        bufp->chgBit(oldp+633,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid));
        bufp->chgQData(oldp+634,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas),45);
        bufp->chgIData(oldp+636,((IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas 
                                          >> 0xdU))),32);
        bufp->chgCData(oldp+637,((3U & (IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas 
                                                >> 0xbU)))),2);
        bufp->chgCData(oldp+638,((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas))),4);
        bufp->chgCData(oldp+639,((0xfU & (IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas 
                                                  >> 4U)))),4);
        bufp->chgCData(oldp+640,((7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas 
                                                >> 8U)))),3);
        bufp->chgBit(oldp+641,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_valid));
        bufp->chgBit(oldp+642,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_allow_out));
        bufp->chgBit(oldp+643,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid));
        bufp->chgCData(oldp+644,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_datas),4);
        bufp->chgBit(oldp+645,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid)))));
        bufp->chgCData(oldp+646,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wstrb),4);
        bufp->chgBit(oldp+647,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wlast));
        bufp->chgBit(oldp+648,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wvalid));
        bufp->chgIData(oldp+649,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr0),32);
        bufp->chgIData(oldp+650,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr1),32);
        bufp->chgIData(oldp+651,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr2),32);
        bufp->chgIData(oldp+652,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr3),32);
        bufp->chgIData(oldp+653,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr4),32);
        bufp->chgIData(oldp+654,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr5),32);
        bufp->chgIData(oldp+655,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr6),32);
        bufp->chgIData(oldp+656,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr7),32);
        bufp->chgIData(oldp+657,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__led_data),32);
        bufp->chgIData(oldp+658,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__led_rg0_data),32);
        bufp->chgIData(oldp+659,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__led_rg1_data),32);
        bufp->chgIData(oldp+660,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__num_data),32);
        bufp->chgIData(oldp+661,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_key_r),32);
        bufp->chgIData(oldp+662,(((2U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r)) 
                                         << 1U)) | 
                                  (1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r))))),32);
        bufp->chgCData(oldp+663,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__confreg_uart_data),8);
        bufp->chgBit(oldp+664,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__confreg_uart_valid));
        bufp->chgIData(oldp+665,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__timer_r2),32);
        bufp->chgIData(oldp+666,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__simu_flag),32);
        bufp->chgIData(oldp+667,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__io_simu),32);
        bufp->chgCData(oldp+668,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__virtual_uart_data),8);
        bufp->chgBit(oldp+669,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__open_trace));
        bufp->chgBit(oldp+670,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__num_monitor));
        bufp->chgBit(oldp+671,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin));
        bufp->chgBit(oldp+672,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r1));
        bufp->chgBit(oldp+673,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r2));
        bufp->chgBit(oldp+674,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r3));
        bufp->chgBit(oldp+675,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r1));
        bufp->chgBit(oldp+676,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r2));
        bufp->chgIData(oldp+677,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r),32);
        bufp->chgIData(oldp+678,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r1),32);
        bufp->chgIData(oldp+679,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r2),32);
        bufp->chgIData(oldp+680,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__timer_r1),32);
        bufp->chgIData(oldp+681,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__timer),32);
        bufp->chgCData(oldp+682,((0xffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata)),8);
        bufp->chgSData(oldp+683,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_key_r),16);
        bufp->chgCData(oldp+684,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state),3);
        bufp->chgBit(oldp+685,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__key_flag));
        bufp->chgIData(oldp+686,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__key_count),20);
        bufp->chgCData(oldp+687,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state_count),4);
        bufp->chgBit(oldp+688,((1U & (vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__key_count 
                                      >> 0x13U))));
        bufp->chgBit(oldp+689,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r));
        bufp->chgBit(oldp+690,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r));
        bufp->chgBit(oldp+691,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step0_flag));
        bufp->chgIData(oldp+692,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step0_count),20);
        bufp->chgBit(oldp+693,((1U & (vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step0_count 
                                      >> 0x13U))));
        bufp->chgBit(oldp+694,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step1_flag));
        bufp->chgIData(oldp+695,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step1_count),20);
        bufp->chgBit(oldp+696,((1U & (vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step1_count 
                                      >> 0x13U))));
        bufp->chgIData(oldp+697,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__count),20);
        bufp->chgCData(oldp+698,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__scan_data),4);
        bufp->chgIData(oldp+699,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC),32);
        bufp->chgBit(oldp+700,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memWriteEn_ex));
        bufp->chgCData(oldp+701,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__size_mem_ex),2);
        bufp->chgIData(oldp+702,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex),32);
        bufp->chgCData(oldp+703,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem),4);
        bufp->chgIData(oldp+704,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_ex_true),32);
        bufp->chgBit(oldp+705,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req)))));
        bufp->chgBit(oldp+706,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req));
        bufp->chgBit(oldp+707,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req_or));
        bufp->chgBit(oldp+708,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wr_r));
        bufp->chgCData(oldp+709,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_size_r),2);
        bufp->chgBit(oldp+710,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__addr_rcv));
        bufp->chgBit(oldp+711,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__wdata_rcv));
        bufp->chgIData(oldp+712,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U]),32);
        bufp->chgIData(oldp+713,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__pipeline_data),32);
        bufp->chgIData(oldp+714,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__pipeline_data),32);
        bufp->chgIData(oldp+715,((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                          >> 0x20U))),32);
        bufp->chgIData(oldp+716,((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)),32);
        bufp->chgBit(oldp+717,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_ready_go));
        bufp->chgBit(oldp+718,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_flush));
        bufp->chgBit(oldp+719,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_valid_in));
        bufp->chgBit(oldp+720,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__alusel1));
        bufp->chgBit(oldp+721,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__alusel2));
        bufp->chgCData(oldp+722,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__aluctrl),5);
        bufp->chgBit(oldp+723,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_store_inst));
        bufp->chgBit(oldp+724,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__regWriteDataSel));
        bufp->chgCData(oldp+725,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_B_TYPE) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_BU_TYPE) 
                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ST_B_TYPE)))
                                   ? 0U : (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_H_TYPE) 
                                            | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_HU_TYPE) 
                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ST_H_TYPE)))
                                            ? 1U : 
                                           (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_W_TYPE) 
                                             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ST_W_TYPE))
                                             ? 2U : 0U)))),2);
        bufp->chgBit(oldp+726,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__is_unsign_load_id));
        bufp->chgBit(oldp+727,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_regimm_inst) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_reg_inst) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_shamt_inst) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__regWriteDataSel) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BL_TYPE) 
                                            | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_JIRL_TYPE) 
                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_u_inst)))))))));
        bufp->chgCData(oldp+728,((((IData)((0x20000000ULL 
                                            == (0xff000000ULL 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out))) 
                                   << 5U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_W_TYPE) 
                                              << 4U) 
                                             | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_HU_TYPE) 
                                                 << 3U) 
                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_H_TYPE) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_BU_TYPE) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_B_TYPE))))))),8);
        bufp->chgCData(oldp+729,((((IData)((0x21000000ULL 
                                            == (0xff000000ULL 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out))) 
                                   << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ST_W_TYPE) 
                                              << 2U) 
                                             | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ST_H_TYPE) 
                                                 << 1U) 
                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ST_B_TYPE))))),8);
        bufp->chgIData(oldp+730,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id),32);
        bufp->chgIData(oldp+731,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_id),32);
        bufp->chgCData(oldp+732,((0x1fU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                   >> 5U)))),5);
        bufp->chgCData(oldp+733,((0x1fU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                   >> 0xaU)))),5);
        bufp->chgCData(oldp+734,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_id),5);
        bufp->chgIData(oldp+735,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__immout_id),32);
        bufp->chgIData(oldp+736,((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                          >> 0x20U))),32);
        bufp->chgIData(oldp+737,((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)),32);
        bufp->chgBit(oldp+738,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                        ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U]
                                        : Vsimu_top__ConstPool__CONST_h3cc724c7_0[7U]) 
                                      >> 0xcU))));
        bufp->chgBit(oldp+739,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                        ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U]
                                        : Vsimu_top__ConstPool__CONST_h3cc724c7_0[7U]) 
                                      >> 0xbU))));
        bufp->chgCData(oldp+740,((0x1fU & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                             ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U]
                                             : Vsimu_top__ConstPool__CONST_h3cc724c7_0[7U]) 
                                           >> 6U))),5);
        bufp->chgBit(oldp+741,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                        ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U]
                                        : Vsimu_top__ConstPool__CONST_h3cc724c7_0[7U]) 
                                      >> 5U))));
        bufp->chgBit(oldp+742,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                        ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U]
                                        : Vsimu_top__ConstPool__CONST_h3cc724c7_0[7U]) 
                                      >> 4U))));
        bufp->chgCData(oldp+743,((3U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                          ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U]
                                          : Vsimu_top__ConstPool__CONST_h3cc724c7_0[7U]) 
                                        >> 2U))),2);
        bufp->chgBit(oldp+744,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                        ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U]
                                        : Vsimu_top__ConstPool__CONST_h3cc724c7_0[7U]) 
                                      >> 1U))));
        bufp->chgBit(oldp+745,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                       ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U]
                                       : Vsimu_top__ConstPool__CONST_h3cc724c7_0[7U]))));
        bufp->chgBit(oldp+746,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                  ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[6U]
                                  : Vsimu_top__ConstPool__CONST_h3cc724c7_0[6U]) 
                                >> 0x1fU)));
        bufp->chgCData(oldp+747,((0xffU & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                             ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[6U]
                                             : Vsimu_top__ConstPool__CONST_h3cc724c7_0[6U]) 
                                           >> 0x17U))),8);
        bufp->chgCData(oldp+748,((0xffU & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                             ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[6U]
                                             : Vsimu_top__ConstPool__CONST_h3cc724c7_0[6U]) 
                                           >> 0xfU))),8);
        bufp->chgIData(oldp+749,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                     ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[6U]
                                     : Vsimu_top__ConstPool__CONST_h3cc724c7_0[6U]) 
                                   << 0x11U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                                  ? 
                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[5U]
                                                  : 
                                                 Vsimu_top__ConstPool__CONST_h3cc724c7_0[5U]) 
                                                >> 0xfU))),32);
        bufp->chgIData(oldp+750,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                     ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[5U]
                                     : Vsimu_top__ConstPool__CONST_h3cc724c7_0[5U]) 
                                   << 0x11U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                                  ? 
                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[4U]
                                                  : 
                                                 Vsimu_top__ConstPool__CONST_h3cc724c7_0[4U]) 
                                                >> 0xfU))),32);
        bufp->chgIData(oldp+751,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                     ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[4U]
                                     : Vsimu_top__ConstPool__CONST_h3cc724c7_0[4U]) 
                                   << 0x11U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                                  ? 
                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[3U]
                                                  : 
                                                 Vsimu_top__ConstPool__CONST_h3cc724c7_0[3U]) 
                                                >> 0xfU))),32);
        bufp->chgCData(oldp+752,((0x1fU & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                             ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[3U]
                                             : Vsimu_top__ConstPool__CONST_h3cc724c7_0[3U]) 
                                           >> 0xaU))),5);
        bufp->chgCData(oldp+753,((0x1fU & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                             ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[3U]
                                             : Vsimu_top__ConstPool__CONST_h3cc724c7_0[3U]) 
                                           >> 5U))),5);
        bufp->chgCData(oldp+754,((0x1fU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[3U]
                                            : Vsimu_top__ConstPool__CONST_h3cc724c7_0[3U]))),5);
        bufp->chgIData(oldp+755,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                   ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[2U]
                                   : Vsimu_top__ConstPool__CONST_h3cc724c7_0[2U])),32);
        bufp->chgIData(oldp+756,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                   ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[1U]
                                   : Vsimu_top__ConstPool__CONST_h3cc724c7_0[1U])),32);
        bufp->chgIData(oldp+757,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                   ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[0U]
                                   : Vsimu_top__ConstPool__CONST_h3cc724c7_0[0U])),32);
        bufp->chgBit(oldp+758,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_flush));
        bufp->chgBit(oldp+759,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                        ? (0x7fffffU 
                                           & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U] 
                                               << 0x11U) 
                                              | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[6U] 
                                                 >> 0xfU)))
                                        : 0U) >> 0x16U))));
        bufp->chgBit(oldp+760,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                        ? (0x7fffffU 
                                           & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U] 
                                               << 0x11U) 
                                              | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[6U] 
                                                 >> 0xfU)))
                                        : 0U) >> 0x15U))));
        bufp->chgCData(oldp+761,((3U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                          ? (0x7fffffU 
                                             & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U] 
                                                 << 0x11U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[6U] 
                                                   >> 0xfU)))
                                          : 0U) >> 0x13U))),2);
        bufp->chgBit(oldp+762,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                        ? (0x7fffffU 
                                           & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U] 
                                               << 0x11U) 
                                              | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[6U] 
                                                 >> 0xfU)))
                                        : 0U) >> 0x12U))));
        bufp->chgBit(oldp+763,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                        ? (0x7fffffU 
                                           & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U] 
                                               << 0x11U) 
                                              | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[6U] 
                                                 >> 0xfU)))
                                        : 0U) >> 0x11U))));
        bufp->chgBit(oldp+764,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                        ? (0x7fffffU 
                                           & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U] 
                                               << 0x11U) 
                                              | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[6U] 
                                                 >> 0xfU)))
                                        : 0U) >> 0x10U))));
        bufp->chgCData(oldp+765,((0xffU & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                             ? (0x7fffffU 
                                                & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U] 
                                                    << 0x11U) 
                                                   | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[6U] 
                                                      >> 0xfU)))
                                             : 0U) 
                                           >> 8U))),8);
        bufp->chgCData(oldp+766,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                   ? (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[6U] 
                                               >> 0xfU))
                                   : 0U)),8);
        bufp->chgCData(oldp+767,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem),4);
        bufp->chgCData(oldp+768,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_ex),5);
        bufp->chgIData(oldp+769,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluout_ex),32);
        bufp->chgIData(oldp+770,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__pc_ex),32);
        bufp->chgIData(oldp+771,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                   ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[0U]
                                   : Vsimu_top__ConstPool__CONST_h3cc724c7_0[0U])),32);
        bufp->chgIData(oldp+772,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex),32);
        bufp->chgIData(oldp+773,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_ex_true),32);
        bufp->chgBit(oldp+774,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[5U] 
                                >> 0x1fU)));
        bufp->chgBit(oldp+775,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[5U] 
                                      >> 0x1eU))));
        bufp->chgCData(oldp+776,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[5U] 
                                        >> 0x1cU))),2);
        bufp->chgBit(oldp+777,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[5U] 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+778,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[5U] 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+779,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[5U] 
                                      >> 0x19U))));
        bufp->chgCData(oldp+780,((0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[5U] 
                                           >> 0x11U))),8);
        bufp->chgCData(oldp+781,((0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[5U] 
                                           >> 9U))),8);
        bufp->chgCData(oldp+782,((0xfU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[5U] 
                                          >> 5U))),4);
        bufp->chgCData(oldp+783,((0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[5U])),5);
        bufp->chgIData(oldp+784,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[4U]),32);
        bufp->chgIData(oldp+785,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[3U]),32);
        bufp->chgIData(oldp+786,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U]),32);
        bufp->chgIData(oldp+787,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[1U]),32);
        bufp->chgIData(oldp+788,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0U]),32);
        bufp->chgBit(oldp+789,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_valid)
                                        ? (0x3ffffU 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[5U] 
                                              >> 9U))
                                        : 0U) >> 0x11U))));
        bufp->chgBit(oldp+790,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_valid)
                                        ? (0x3ffffU 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[5U] 
                                              >> 9U))
                                        : 0U) >> 0x10U))));
        bufp->chgCData(oldp+791,((0xffU & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_valid)
                                             ? (0x3ffffU 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[5U] 
                                                   >> 9U))
                                             : 0U) 
                                           >> 8U))),8);
        bufp->chgCData(oldp+792,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_valid)
                                   ? (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[5U] 
                                               >> 9U))
                                   : 0U)),8);
        bufp->chgCData(oldp+793,((0x1fU & (IData)((
                                                   ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_valid)
                                                     ? 
                                                    (0x1fffffffffULL 
                                                     & (((QData)((IData)(
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[5U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[4U]))))
                                                     : 0ULL) 
                                                   >> 0x20U)))),5);
        bufp->chgIData(oldp+794,((IData)(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_valid)
                                           ? (0x1fffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[5U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[4U]))))
                                           : 0ULL))),32);
        bufp->chgIData(oldp+795,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[3U]),32);
        bufp->chgCData(oldp+796,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wstrb_mem_mem),4);
        bufp->chgIData(oldp+797,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_valid)
                                   ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[2U]
                                   : 0U)),32);
        bufp->chgIData(oldp+798,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[1U]),32);
        bufp->chgIData(oldp+799,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0U]),32);
        bufp->chgBit(oldp+800,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[6U] 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+801,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[6U] 
                                      >> 0x19U))));
        bufp->chgCData(oldp+802,((0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[6U] 
                                           >> 0x11U))),8);
        bufp->chgCData(oldp+803,((0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[6U] 
                                           >> 9U))),8);
        bufp->chgCData(oldp+804,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[6U] 
                                           >> 4U))),5);
        bufp->chgIData(oldp+805,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[6U] 
                                   << 0x1cU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[5U] 
                                                >> 4U))),32);
        bufp->chgIData(oldp+806,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[5U] 
                                   << 0x1cU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[4U] 
                                                >> 4U))),32);
        bufp->chgIData(oldp+807,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[4U] 
                                   << 0x1cU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                                                >> 4U))),32);
        bufp->chgCData(oldp+808,((0xfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U])),4);
        bufp->chgIData(oldp+809,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U]),32);
        bufp->chgIData(oldp+810,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[1U]),32);
        bufp->chgIData(oldp+811,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[0U]),32);
        bufp->chgBit(oldp+812,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_valid));
        bufp->chgCData(oldp+813,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_PC_BRANCH),2);
        bufp->chgIData(oldp+814,(((IData)(4U) + vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__pipeline_data)),32);
        bufp->chgIData(oldp+815,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__branchPC),32);
        bufp->chgIData(oldp+816,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__branchPC_temp),32);
        bufp->chgBit(oldp+817,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__branchPC_temp_valid));
        bufp->chgIData(oldp+818,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp),32);
        bufp->chgBit(oldp+819,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp_valid));
        bufp->chgIData(oldp+820,((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)),32);
        bufp->chgIData(oldp+821,((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                          >> 0x20U))),32);
        bufp->chgBit(oldp+822,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__eq));
        bufp->chgBit(oldp+823,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__lt));
        bufp->chgCData(oldp+824,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__itype),3);
        bufp->chgBit(oldp+825,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_regimm_inst) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_reg_inst) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_shamt_inst) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__regWriteDataSel) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BL_TYPE) 
                                            | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_JIRL_TYPE) 
                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_u_inst)))))))));
        bufp->chgBit(oldp+826,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_store_inst));
        bufp->chgBit(oldp+827,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__regWriteDataSel));
        bufp->chgBit(oldp+828,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__alusel1));
        bufp->chgBit(oldp+829,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__alusel2));
        bufp->chgCData(oldp+830,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__aluctrl),5);
        bufp->chgBit(oldp+831,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__unsignBranchCmp));
        bufp->chgBit(oldp+832,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BL_TYPE));
        bufp->chgBit(oldp+833,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ORI_TYPE) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_XORI_TYPE) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ANDI_TYPE)))));
        bufp->chgBit(oldp+834,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_JIRL_TYPE));
        bufp->chgBit(oldp+835,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_branch_inst));
        bufp->chgCData(oldp+836,((((IData)((0x20000000ULL 
                                            == (0xff000000ULL 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out))) 
                                   << 5U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_W_TYPE) 
                                              << 4U) 
                                             | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_HU_TYPE) 
                                                 << 3U) 
                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_H_TYPE) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_BU_TYPE) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_B_TYPE))))))),8);
        bufp->chgCData(oldp+837,((((IData)((0x21000000ULL 
                                            == (0xff000000ULL 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out))) 
                                   << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ST_W_TYPE) 
                                              << 2U) 
                                             | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ST_H_TYPE) 
                                                 << 1U) 
                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ST_B_TYPE))))),8);
        bufp->chgCData(oldp+838,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_id),5);
        bufp->chgIData(oldp+839,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id),32);
        bufp->chgIData(oldp+840,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_id),32);
        bufp->chgIData(oldp+841,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb),32);
        bufp->chgIData(oldp+842,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__immout_id),32);
        bufp->chgIData(oldp+843,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id_true),32);
        bufp->chgIData(oldp+844,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_id_true),32);
        bufp->chgCData(oldp+845,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_mem),5);
        bufp->chgBit(oldp+846,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_valid) 
                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[5U] 
                                   >> 0x1aU))));
        bufp->chgIData(oldp+847,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluout_mem),32);
        bufp->chgIData(oldp+848,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_JIRL_TYPE)
                                   ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id_true
                                   : (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                              >> 0x20U)))),32);
        bufp->chgBit(oldp+849,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memRead_ex));
        bufp->chgBit(oldp+850,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid) 
                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U])));
        bufp->chgBit(oldp+851,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                        ? (0x7fU & 
                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U] 
                                            >> 6U))
                                        : 0U) >> 6U))));
        bufp->chgBit(oldp+852,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                        ? (0x7fU & 
                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U] 
                                            >> 6U))
                                        : 0U) >> 5U))));
        bufp->chgCData(oldp+853,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                   ? (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U] 
                                               >> 6U))
                                   : 0U)),5);
        bufp->chgBit(oldp+854,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                        ? (0x1fU & 
                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U] 
                                            >> 1U))
                                        : 0U) >> 4U))));
        bufp->chgBit(oldp+855,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                        ? (0x1fU & 
                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U] 
                                            >> 1U))
                                        : 0U) >> 3U))));
        bufp->chgCData(oldp+856,((3U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                          ? (0x1fU 
                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U] 
                                                >> 1U))
                                          : 0U) >> 1U))),2);
        bufp->chgBit(oldp+857,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                 ? (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U] 
                                          >> 1U)) : 0U)));
        bufp->chgBit(oldp+858,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                        ? (0x3ffffU 
                                           & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U] 
                                               << 0x11U) 
                                              | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[6U] 
                                                 >> 0xfU)))
                                        : 0U) >> 0x11U))));
        bufp->chgBit(oldp+859,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                        ? (0x3ffffU 
                                           & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U] 
                                               << 0x11U) 
                                              | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[6U] 
                                                 >> 0xfU)))
                                        : 0U) >> 0x10U))));
        bufp->chgCData(oldp+860,((0xffU & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                             ? (0x3ffffU 
                                                & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U] 
                                                    << 0x11U) 
                                                   | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[6U] 
                                                      >> 0xfU)))
                                             : 0U) 
                                           >> 8U))),8);
        bufp->chgCData(oldp+861,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                   ? (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[6U] 
                                               >> 0xfU))
                                   : 0U)),8);
        bufp->chgBit(oldp+862,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alusel1_ex));
        bufp->chgBit(oldp+863,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alusel2_ex));
        bufp->chgCData(oldp+864,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluctrl_ex),5);
        bufp->chgIData(oldp+865,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex),32);
        bufp->chgIData(oldp+866,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex),32);
        bufp->chgIData(oldp+867,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__pc_ex),32);
        bufp->chgIData(oldp+868,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                   ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[6U] 
                                       << 0x11U) | 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[5U] 
                                       >> 0xfU)) : 0U)),32);
        bufp->chgIData(oldp+869,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                   ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[5U] 
                                       << 0x11U) | 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[4U] 
                                       >> 0xfU)) : 0U)),32);
        bufp->chgIData(oldp+870,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                   ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[4U] 
                                       << 0x11U) | 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[3U] 
                                       >> 0xfU)) : 0U)),32);
        bufp->chgCData(oldp+871,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_no_ex),5);
        bufp->chgCData(oldp+872,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rk_no_ex),5);
        bufp->chgCData(oldp+873,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_ex),5);
        bufp->chgIData(oldp+874,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                   ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[2U]
                                   : 0U)),32);
        bufp->chgBit(oldp+875,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid) 
                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U] 
                                   >> 1U))));
        bufp->chgBit(oldp+876,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid) 
                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[6U] 
                                   >> 0x1fU))));
        bufp->chgIData(oldp+877,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                   ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[0U]
                                   : Vsimu_top__ConstPool__CONST_h3cc724c7_0[0U])),32);
        bufp->chgIData(oldp+878,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluout_ex),32);
        bufp->chgBit(oldp+879,((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divEn)) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divEn) 
                                         & (0x21U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__count)))))));
        bufp->chgCData(oldp+880,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wstrb_mem_mem),4);
        bufp->chgBit(oldp+881,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__is_unsign_load_mem));
        bufp->chgBit(oldp+882,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memRead_mem));
        bufp->chgBit(oldp+883,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memWriteEn_mem));
        bufp->chgIData(oldp+884,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_valid)
                                   ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[2U]
                                   : 0U)),32);
        bufp->chgBit(oldp+885,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_valid)
                                        ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[5U] 
                                           >> 0x1bU)
                                        : 0U) >> 4U))));
        bufp->chgBit(oldp+886,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_valid)
                                        ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[5U] 
                                           >> 0x1bU)
                                        : 0U) >> 3U))));
        bufp->chgCData(oldp+887,((3U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_valid)
                                          ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[5U] 
                                             >> 0x1bU)
                                          : 0U) >> 1U))),2);
        bufp->chgBit(oldp+888,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_valid)
                                 ? (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[5U] 
                                          >> 0x1bU))
                                 : 0U)));
        bufp->chgIData(oldp+889,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[3U]),32);
        bufp->chgIData(oldp+890,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[1U]),32);
        bufp->chgIData(oldp+891,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0U]),32);
        bufp->chgIData(oldp+892,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp),32);
        bufp->chgBit(oldp+893,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid));
        bufp->chgBit(oldp+894,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_control_data_wb 
                                      >> 0x11U))));
        bufp->chgBit(oldp+895,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_control_data_wb 
                                      >> 0x10U))));
        bufp->chgCData(oldp+896,((0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_control_data_wb 
                                           >> 8U))),8);
        bufp->chgCData(oldp+897,((0xffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_control_data_wb)),8);
        bufp->chgIData(oldp+898,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_valid)
                                   ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[6U] 
                                       << 0x1cU) | 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[5U] 
                                       >> 4U)) : 0U)),32);
        bufp->chgIData(oldp+899,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_valid)
                                   ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[5U] 
                                       << 0x1cU) | 
                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[4U] 
                                       >> 4U)) : 0U)),32);
        bufp->chgBit(oldp+900,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_control_data_wb 
                                      >> 0x10U))));
        bufp->chgIData(oldp+901,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[4U] 
                                   << 0x1cU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                                                >> 4U))),32);
        bufp->chgCData(oldp+902,((0xfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U])),4);
        bufp->chgIData(oldp+903,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[1U]),32);
        bufp->chgCData(oldp+904,((0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_control_data_wb 
                                           >> 8U))),8);
        bufp->chgCData(oldp+905,((0xffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_control_data_wb)),8);
        bufp->chgIData(oldp+906,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[0U]),32);
        bufp->chgBit(oldp+907,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_valid));
        bufp->chgBit(oldp+908,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_cnt_inst));
        bufp->chgQData(oldp+909,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_timer_64),64);
        bufp->chgCData(oldp+911,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_inst_ld_en),8);
        bufp->chgIData(oldp+912,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_ld_paddr),32);
        bufp->chgIData(oldp+913,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_ld_vaddr),32);
        bufp->chgCData(oldp+914,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_inst_st_en),8);
        bufp->chgIData(oldp+915,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_st_paddr),32);
        bufp->chgIData(oldp+916,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_st_vaddr),32);
        bufp->chgIData(oldp+917,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_st_data),32);
        bufp->chgBit(oldp+918,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_csr_rstat_en));
        bufp->chgIData(oldp+919,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_csr_data),32);
        bufp->chgBit(oldp+920,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_wen));
        bufp->chgCData(oldp+921,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_wdest),8);
        bufp->chgIData(oldp+922,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_wdata),32);
        bufp->chgIData(oldp+923,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_pc),32);
        bufp->chgIData(oldp+924,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_inst),32);
        bufp->chgBit(oldp+925,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_excp_flush));
        bufp->chgBit(oldp+926,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_ertn));
        bufp->chgCData(oldp+927,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_csr_ecode),6);
        bufp->chgBit(oldp+928,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_tlbfill_en));
        bufp->chgCData(oldp+929,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_rand_index),5);
        bufp->chgBit(oldp+930,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__trap));
        bufp->chgCData(oldp+931,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__trap_code),8);
        bufp->chgQData(oldp+932,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cycleCnt),64);
        bufp->chgQData(oldp+934,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instrCnt),64);
        bufp->chgIData(oldp+936,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[0]),32);
        bufp->chgIData(oldp+937,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[1]),32);
        bufp->chgIData(oldp+938,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[2]),32);
        bufp->chgIData(oldp+939,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[3]),32);
        bufp->chgIData(oldp+940,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[4]),32);
        bufp->chgIData(oldp+941,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[5]),32);
        bufp->chgIData(oldp+942,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[6]),32);
        bufp->chgIData(oldp+943,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[7]),32);
        bufp->chgIData(oldp+944,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[8]),32);
        bufp->chgIData(oldp+945,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[9]),32);
        bufp->chgIData(oldp+946,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[10]),32);
        bufp->chgIData(oldp+947,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[11]),32);
        bufp->chgIData(oldp+948,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[12]),32);
        bufp->chgIData(oldp+949,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[13]),32);
        bufp->chgIData(oldp+950,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[14]),32);
        bufp->chgIData(oldp+951,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[15]),32);
        bufp->chgIData(oldp+952,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[16]),32);
        bufp->chgIData(oldp+953,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[17]),32);
        bufp->chgIData(oldp+954,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[18]),32);
        bufp->chgIData(oldp+955,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[19]),32);
        bufp->chgIData(oldp+956,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[20]),32);
        bufp->chgIData(oldp+957,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[21]),32);
        bufp->chgIData(oldp+958,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[22]),32);
        bufp->chgIData(oldp+959,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[23]),32);
        bufp->chgIData(oldp+960,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[24]),32);
        bufp->chgIData(oldp+961,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[25]),32);
        bufp->chgIData(oldp+962,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[26]),32);
        bufp->chgIData(oldp+963,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[27]),32);
        bufp->chgIData(oldp+964,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[28]),32);
        bufp->chgIData(oldp+965,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[29]),32);
        bufp->chgIData(oldp+966,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[30]),32);
        bufp->chgIData(oldp+967,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[31]),32);
        bufp->chgIData(oldp+968,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_csr_ecode),32);
        bufp->chgQData(oldp+969,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_pc))),64);
        bufp->chgQData(oldp+971,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                 [1U]))),64);
        bufp->chgQData(oldp+973,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                 [2U]))),64);
        bufp->chgQData(oldp+975,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                 [3U]))),64);
        bufp->chgQData(oldp+977,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                 [4U]))),64);
        bufp->chgQData(oldp+979,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                 [5U]))),64);
        bufp->chgQData(oldp+981,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                 [6U]))),64);
        bufp->chgQData(oldp+983,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                 [7U]))),64);
        bufp->chgQData(oldp+985,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                 [8U]))),64);
        bufp->chgQData(oldp+987,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                 [9U]))),64);
        bufp->chgQData(oldp+989,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                 [0xaU]))),64);
        bufp->chgQData(oldp+991,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                 [0xbU]))),64);
        bufp->chgQData(oldp+993,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                 [0xcU]))),64);
        bufp->chgQData(oldp+995,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                 [0xdU]))),64);
        bufp->chgQData(oldp+997,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                 [0xeU]))),64);
        bufp->chgQData(oldp+999,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                 [0xfU]))),64);
        bufp->chgQData(oldp+1001,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                  [0x10U]))),64);
        bufp->chgQData(oldp+1003,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                  [0x11U]))),64);
        bufp->chgQData(oldp+1005,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                  [0x12U]))),64);
        bufp->chgQData(oldp+1007,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                  [0x13U]))),64);
        bufp->chgQData(oldp+1009,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                  [0x14U]))),64);
        bufp->chgQData(oldp+1011,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                  [0x15U]))),64);
        bufp->chgQData(oldp+1013,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                  [0x16U]))),64);
        bufp->chgQData(oldp+1015,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                  [0x17U]))),64);
        bufp->chgQData(oldp+1017,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                  [0x18U]))),64);
        bufp->chgQData(oldp+1019,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                  [0x19U]))),64);
        bufp->chgQData(oldp+1021,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                  [0x1aU]))),64);
        bufp->chgQData(oldp+1023,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                  [0x1bU]))),64);
        bufp->chgQData(oldp+1025,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                  [0x1cU]))),64);
        bufp->chgQData(oldp+1027,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                  [0x1dU]))),64);
        bufp->chgQData(oldp+1029,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                  [0x1eU]))),64);
        bufp->chgQData(oldp+1031,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                  [0x1fU]))),64);
        bufp->chgQData(oldp+1033,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_wdata))),64);
        bufp->chgQData(oldp+1035,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_ld_paddr))),64);
        bufp->chgQData(oldp+1037,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_ld_vaddr))),64);
        bufp->chgQData(oldp+1039,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_st_paddr))),64);
        bufp->chgQData(oldp+1041,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_st_vaddr))),64);
        bufp->chgQData(oldp+1043,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_st_data))),64);
        bufp->chgCData(oldp+1045,((7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__trap_code))),3);
        bufp->chgBit(oldp+1046,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__pipeline_valid));
        bufp->chgBit(oldp+1047,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divUnsigned));
        bufp->chgBit(oldp+1048,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divEn));
        bufp->chgIData(oldp+1049,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__quotient),32);
        bufp->chgIData(oldp+1050,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__remainder),32);
        bufp->chgBit(oldp+1051,((0x21U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__count))));
        bufp->chgIData(oldp+1052,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_result),32);
        bufp->chgIData(oldp+1053,((1U & (((~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex 
                                              >> 0x1fU)) 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                                             >> 0x1fU)) 
                                         | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_sign)) 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_result 
                                               >> 0x1fU))))),32);
        bufp->chgIData(oldp+1054,((1U & (~ (IData)(
                                                   (1ULL 
                                                    & (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)) 
                                                        + 
                                                        ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_b)) 
                                                         + (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_cin)))) 
                                                       >> 0x20U)))))),32);
        bufp->chgIData(oldp+1055,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_b),32);
        bufp->chgBit(oldp+1056,((1U & (IData)((1ULL 
                                               & (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)) 
                                                   + 
                                                   ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_b)) 
                                                    + (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_cin)))) 
                                                  >> 0x20U))))));
        bufp->chgBit(oldp+1057,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_cin));
        bufp->chgQData(oldp+1058,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__mul_result),64);
        bufp->chgBit(oldp+1060,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divUnsigned)))));
        bufp->chgIData(oldp+1061,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_u),32);
        bufp->chgIData(oldp+1062,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__remainder_u),32);
        bufp->chgIData(oldp+1063,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                                    >> 0x1fU) ? (- vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)
                                    : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)),32);
        bufp->chgIData(oldp+1064,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex 
                                    >> 0x1fU) ? (- vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)
                                    : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)),32);
        bufp->chgBit(oldp+1065,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+1066,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+1067,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_sign));
        bufp->chgIData(oldp+1068,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_sign)
                                    ? (- vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_u)
                                    : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_u)),32);
        bufp->chgIData(oldp+1069,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                                    >> 0x1fU) ? (- vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__remainder_u)
                                    : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__remainder_u)),32);
        bufp->chgIData(oldp+1070,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divUnsigned)
                                    ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex
                                    : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                                        >> 0x1fU) ? 
                                       (- vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)
                                        : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex))),32);
        bufp->chgIData(oldp+1071,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divUnsigned)
                                    ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex
                                    : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex 
                                        >> 0x1fU) ? 
                                       (- vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)
                                        : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex))),32);
        bufp->chgIData(oldp+1072,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__dividend_reg),32);
        bufp->chgQData(oldp+1073,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__minuend),33);
        bufp->chgCData(oldp+1075,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__count),6);
        bufp->chgQData(oldp+1076,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__minuend_shifted),33);
        bufp->chgQData(oldp+1078,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__minuend_next),33);
        bufp->chgIData(oldp+1080,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__dividend_reg 
                                   << 1U)),32);
        bufp->chgQData(oldp+1081,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__difference),33);
        bufp->chgBit(oldp+1083,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__difference 
                                                  >> 0x20U))))));
        bufp->chgBit(oldp+1084,((0U == (0x3ffU & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0x16U))))));
        bufp->chgBit(oldp+1085,((1U == (0x3ffU & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0x16U))))));
        bufp->chgBit(oldp+1086,((1U == (0x7fU & (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0x19U))))));
        bufp->chgBit(oldp+1087,((1U == (0xfU & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 0x1cU))))));
        bufp->chgBit(oldp+1088,((0x10U == (0x7fU & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0x19U))))));
        bufp->chgBit(oldp+1089,((0xaU == (0x3fU & (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x1aU))))));
        bufp->chgBit(oldp+1090,((1U == (3U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                      >> 0x1eU))))));
        bufp->chgBit(oldp+1091,((IData)((0x100000ULL 
                                         == (0xffff8000ULL 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)))));
        bufp->chgBit(oldp+1092,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SUB_TYPE));
        bufp->chgBit(oldp+1093,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SLT_TYPE));
        bufp->chgBit(oldp+1094,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SLTU_TYPE));
        bufp->chgBit(oldp+1095,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_NOR_TYPE));
        bufp->chgBit(oldp+1096,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_AND_TYPE));
        bufp->chgBit(oldp+1097,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_OR_TYPE));
        bufp->chgBit(oldp+1098,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_XOR_TYPE));
        bufp->chgBit(oldp+1099,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SLL_TYPE));
        bufp->chgBit(oldp+1100,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SRL_TYPE));
        bufp->chgBit(oldp+1101,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SRA_TYPE));
        bufp->chgBit(oldp+1102,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_MUL_TYPE));
        bufp->chgBit(oldp+1103,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_MULH_TYPE));
        bufp->chgBit(oldp+1104,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_MULHU_TYPE));
        bufp->chgBit(oldp+1105,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_DIV_TYPE));
        bufp->chgBit(oldp+1106,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_MOD_TYPE));
        bufp->chgBit(oldp+1107,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_DIVU_TYPE));
        bufp->chgBit(oldp+1108,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_MODU_TYPE));
        bufp->chgBit(oldp+1109,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SLLI_TYPE));
        bufp->chgBit(oldp+1110,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SRLI_TYPE));
        bufp->chgBit(oldp+1111,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SRAI_TYPE));
        bufp->chgBit(oldp+1112,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SLTI_TYPE));
        bufp->chgBit(oldp+1113,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SLTUI_TYPE));
        bufp->chgBit(oldp+1114,((IData)((0x2800000ULL 
                                         == (0xffc00000ULL 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)))));
        bufp->chgBit(oldp+1115,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ANDI_TYPE));
        bufp->chgBit(oldp+1116,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ORI_TYPE));
        bufp->chgBit(oldp+1117,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_XORI_TYPE));
        bufp->chgCData(oldp+1118,((7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                 >> 0x19U)))),3);
        bufp->chgBit(oldp+1119,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LUI_TYPE));
        bufp->chgBit(oldp+1120,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_PCADDU12I_TYPE));
        bufp->chgBit(oldp+1121,((IData)((0x20000000ULL 
                                         == (0xff000000ULL 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)))));
        bufp->chgBit(oldp+1122,((IData)((0x21000000ULL 
                                         == (0xff000000ULL 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)))));
        bufp->chgBit(oldp+1123,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_B_TYPE));
        bufp->chgBit(oldp+1124,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_H_TYPE));
        bufp->chgBit(oldp+1125,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_W_TYPE));
        bufp->chgBit(oldp+1126,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ST_B_TYPE));
        bufp->chgBit(oldp+1127,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ST_H_TYPE));
        bufp->chgBit(oldp+1128,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ST_W_TYPE));
        bufp->chgBit(oldp+1129,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_BU_TYPE));
        bufp->chgBit(oldp+1130,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_HU_TYPE));
        bufp->chgCData(oldp+1131,((0xfU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                   >> 0x1aU)))),4);
        bufp->chgBit(oldp+1132,((IData)((0x50000000ULL 
                                         == (0xfc000000ULL 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)))));
        bufp->chgBit(oldp+1133,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BEQ_TYPE));
        bufp->chgBit(oldp+1134,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BNE_TYPE));
        bufp->chgBit(oldp+1135,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BLT_TYPE));
        bufp->chgBit(oldp+1136,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BGE_TYPE));
        bufp->chgBit(oldp+1137,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BLTU_TYPE));
        bufp->chgBit(oldp+1138,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BGEU_TYPE));
        bufp->chgBit(oldp+1139,((0x54U == (0x1ffffU 
                                           & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                      >> 0xfU))))));
        bufp->chgBit(oldp+1140,((0x56U == (0x1ffffU 
                                           & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                      >> 0xfU))))));
        bufp->chgBit(oldp+1141,((IData)((0x4000000ULL 
                                         == (0xff0003e0ULL 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)))));
        bufp->chgBit(oldp+1142,((IData)((0x4000020ULL 
                                         == (0xff0003e0ULL 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)))));
        bufp->chgBit(oldp+1143,((IData)(((0x4000000ULL 
                                          == (0xff000000ULL 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)) 
                                         & (0U != (0xfU 
                                                   & (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                              >> 6U))))))));
        bufp->chgBit(oldp+1144,(0U));
        bufp->chgBit(oldp+1145,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_reg_inst));
        bufp->chgBit(oldp+1146,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_shamt_inst));
        bufp->chgBit(oldp+1147,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_regimm_inst));
        bufp->chgBit(oldp+1148,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_u_inst));
        bufp->chgBit(oldp+1149,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_b_inst));
        bufp->chgBit(oldp+1150,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT____VdfgTmp_hfa3cf28f__0) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT____VdfgTmp_hffea2556__0))));
        bufp->chgBit(oldp+1151,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_PC_BRANCH));
        bufp->chgBit(oldp+1152,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_JIRL_TYPE) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_branch_inst))));
        bufp->chgBit(oldp+1153,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT____VdfgTmp_hfa3cf28f__0) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT____VdfgTmp_h9c888c86__0))));
        bufp->chgBit(oldp+1154,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_PCADDU12I_TYPE) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT____VdfgTmp_h9c888c86__0))));
        bufp->chgBit(oldp+1155,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid));
        bufp->chgBit(oldp+1156,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U] 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1157,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U] 
                                       >> 0xbU))));
        bufp->chgCData(oldp+1158,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U] 
                                            >> 6U))),5);
        bufp->chgBit(oldp+1159,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U] 
                                       >> 5U))));
        bufp->chgBit(oldp+1160,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U] 
                                       >> 4U))));
        bufp->chgCData(oldp+1161,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U] 
                                         >> 2U))),2);
        bufp->chgBit(oldp+1162,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U] 
                                       >> 1U))));
        bufp->chgBit(oldp+1163,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U])));
        bufp->chgBit(oldp+1164,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[6U] 
                                 >> 0x1fU)));
        bufp->chgCData(oldp+1165,((0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[6U] 
                                            >> 0x17U))),8);
        bufp->chgCData(oldp+1166,((0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[6U] 
                                            >> 0xfU))),8);
        bufp->chgIData(oldp+1167,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[6U] 
                                    << 0x11U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[5U] 
                                                 >> 0xfU))),32);
        bufp->chgIData(oldp+1168,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[5U] 
                                    << 0x11U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[4U] 
                                                 >> 0xfU))),32);
        bufp->chgIData(oldp+1169,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[4U] 
                                    << 0x11U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[3U] 
                                                 >> 0xfU))),32);
        bufp->chgCData(oldp+1170,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[3U] 
                                            >> 0xaU))),5);
        bufp->chgCData(oldp+1171,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[3U] 
                                            >> 5U))),5);
        bufp->chgCData(oldp+1172,((0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[3U])),5);
        bufp->chgIData(oldp+1173,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[2U]),32);
        bufp->chgIData(oldp+1174,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[1U]),32);
        bufp->chgIData(oldp+1175,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[0U]),32);
        bufp->chgBit(oldp+1176,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__MEM_forward_valid));
        bufp->chgBit(oldp+1177,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__WB_forward_valid));
        bufp->chgBit(oldp+1178,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT____VdfgTmp_hf7cffa19__0) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT____VdfgTmp_h2a69b9a6__0))));
        bufp->chgBit(oldp+1179,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_mem) 
                                  == (0x1fU & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                       >> 5U)))) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_id) 
                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_mem)))));
        bufp->chgBit(oldp+1180,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__alusel1)) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT____VdfgTmp_hf7cffa19__0)) 
                                 | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__alusel2)) 
                                     & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_ex) 
                                        == (0x1fU & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0xaU))))) 
                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT____VdfgTmp_h2a69b9a6__0)))));
        bufp->chgBit(oldp+1181,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT__stall));
        bufp->chgBit(oldp+1182,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__pipeline_valid));
        bufp->chgIData(oldp+1183,((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__pipeline_data 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+1184,((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__pipeline_data)),32);
        bufp->chgBit(oldp+1185,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_valid));
        bufp->chgBit(oldp+1186,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[5U] 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+1187,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[5U] 
                                       >> 0x1eU))));
        bufp->chgCData(oldp+1188,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[5U] 
                                         >> 0x1cU))),2);
        bufp->chgBit(oldp+1189,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[5U] 
                                       >> 0x1bU))));
        bufp->chgBit(oldp+1190,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[5U] 
                                       >> 0x1aU))));
        bufp->chgBit(oldp+1191,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[5U] 
                                       >> 0x19U))));
        bufp->chgCData(oldp+1192,((0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[5U] 
                                            >> 0x11U))),8);
        bufp->chgCData(oldp+1193,((0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[5U] 
                                            >> 9U))),8);
        bufp->chgCData(oldp+1194,((0xfU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[5U] 
                                           >> 5U))),4);
        bufp->chgCData(oldp+1195,((0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[5U])),5);
        bufp->chgIData(oldp+1196,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[4U]),32);
        bufp->chgIData(oldp+1197,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[3U]),32);
        bufp->chgIData(oldp+1198,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[2U]),32);
        bufp->chgIData(oldp+1199,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[1U]),32);
        bufp->chgIData(oldp+1200,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[0U]),32);
        bufp->chgIData(oldp+1201,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[0]),32);
        bufp->chgIData(oldp+1202,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[1]),32);
        bufp->chgIData(oldp+1203,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[2]),32);
        bufp->chgIData(oldp+1204,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[3]),32);
        bufp->chgIData(oldp+1205,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[4]),32);
        bufp->chgIData(oldp+1206,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[5]),32);
        bufp->chgIData(oldp+1207,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[6]),32);
        bufp->chgIData(oldp+1208,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[7]),32);
        bufp->chgIData(oldp+1209,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[8]),32);
        bufp->chgIData(oldp+1210,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[9]),32);
        bufp->chgIData(oldp+1211,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[10]),32);
        bufp->chgIData(oldp+1212,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[11]),32);
        bufp->chgIData(oldp+1213,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[12]),32);
        bufp->chgIData(oldp+1214,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[13]),32);
        bufp->chgIData(oldp+1215,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[14]),32);
        bufp->chgIData(oldp+1216,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[15]),32);
        bufp->chgIData(oldp+1217,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[16]),32);
        bufp->chgIData(oldp+1218,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[17]),32);
        bufp->chgIData(oldp+1219,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[18]),32);
        bufp->chgIData(oldp+1220,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[19]),32);
        bufp->chgIData(oldp+1221,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[20]),32);
        bufp->chgIData(oldp+1222,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[21]),32);
        bufp->chgIData(oldp+1223,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[22]),32);
        bufp->chgIData(oldp+1224,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[23]),32);
        bufp->chgIData(oldp+1225,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[24]),32);
        bufp->chgIData(oldp+1226,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[25]),32);
        bufp->chgIData(oldp+1227,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[26]),32);
        bufp->chgIData(oldp+1228,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[27]),32);
        bufp->chgIData(oldp+1229,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[28]),32);
        bufp->chgIData(oldp+1230,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[29]),32);
        bufp->chgIData(oldp+1231,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[30]),32);
        bufp->chgIData(oldp+1232,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[31]),32);
        bufp->chgBit(oldp+1233,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[6U] 
                                       >> 0x1aU))));
        bufp->chgBit(oldp+1234,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[6U] 
                                       >> 0x19U))));
        bufp->chgCData(oldp+1235,((0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[6U] 
                                            >> 0x11U))),8);
        bufp->chgCData(oldp+1236,((0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[6U] 
                                            >> 9U))),8);
        bufp->chgCData(oldp+1237,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[6U] 
                                            >> 4U))),5);
        bufp->chgIData(oldp+1238,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[6U] 
                                    << 0x1cU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[5U] 
                                                 >> 4U))),32);
        bufp->chgIData(oldp+1239,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[5U] 
                                    << 0x1cU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[4U] 
                                                 >> 4U))),32);
        bufp->chgIData(oldp+1240,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[4U] 
                                    << 0x1cU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[3U] 
                                                 >> 4U))),32);
        bufp->chgCData(oldp+1241,((0xfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[3U])),4);
        bufp->chgIData(oldp+1242,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[2U]),32);
        bufp->chgIData(oldp+1243,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[1U]),32);
        bufp->chgIData(oldp+1244,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[0U]),32);
        bufp->chgBit(oldp+1245,((1U & (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_ar_disable)))));
        bufp->chgBit(oldp+1246,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_ar_disable));
        bufp->chgBit(oldp+1247,((1U & vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random)));
        bufp->chgBit(oldp+1248,((1U & ((vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                        >> 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw_disable)))));
        bufp->chgBit(oldp+1249,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw_disable));
        bufp->chgBit(oldp+1250,((1U & (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                       >> 1U))));
        bufp->chgBit(oldp+1251,((1U & (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                       >> 2U))));
        bufp->chgBit(oldp+1252,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_no_delay));
        bufp->chgBit(oldp+1253,((1U & (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                       >> 3U))));
        bufp->chgIData(oldp+1254,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random),23);
        bufp->chgIData(oldp+1255,(((0x7ffffeU & (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                                 << 1U)) 
                                   | (1U & VL_REDXOR_32(
                                                        (0x420000U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random))))),23);
        bufp->chgBit(oldp+1256,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_short_delay));
        bufp->chgBit(oldp+1257,((1U & ((vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                        >> 4U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_w_disable)))));
        bufp->chgBit(oldp+1258,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_w_disable));
        bufp->chgBit(oldp+1259,((1U & (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                       >> 4U))));
        bufp->chgQData(oldp+1260,((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)) 
                                    << 0x2bU) | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arsize)) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen)) 
                                                     << 0x24U) 
                                                    | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr)) 
                                                        << 4U) 
                                                       | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arid))))))),45);
        bufp->chgIData(oldp+1262,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr),32);
        bufp->chgIData(oldp+1263,(((((IData)(1U) + 
                                     (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr 
                                      >> 2U)) << 2U) 
                                   | (3U & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr))),32);
        bufp->chgIData(oldp+1264,((((- (IData)((0U 
                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr) 
                                   | (((- (IData)((1U 
                                                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)))) 
                                       & ((((IData)(1U) 
                                            + (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr 
                                               >> 2U)) 
                                           << 2U) | 
                                          (3U & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr))) 
                                      | ((- (IData)(
                                                    (2U 
                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)))) 
                                         & ((0xffffffc0U 
                                             & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr) 
                                            | ((0x3cU 
                                                & ((0xfffffffcU 
                                                    & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen)) 
                                                        << 2U) 
                                                       & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr)) 
                                                   | (((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen) 
                                                       & ((IData)(1U) 
                                                          + 
                                                          (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr 
                                                           >> 2U))) 
                                                      << 2U))) 
                                               | (3U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr))))))),32);
        bufp->chgIData(oldp+1265,(((0xffffffc0U & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr) 
                                   | ((0x3cU & ((0xfffffffcU 
                                                 & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen)) 
                                                     << 2U) 
                                                    & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr)) 
                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen) 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr 
                                                        >> 2U))) 
                                                   << 2U))) 
                                      | (3U & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr)))),32);
        bufp->chgCData(oldp+1266,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst),2);
        bufp->chgBit(oldp+1267,((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst))));
        bufp->chgBit(oldp+1268,((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst))));
        bufp->chgBit(oldp+1269,((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst))));
        bufp->chgCData(oldp+1270,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arid),4);
        bufp->chgCData(oldp+1271,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen),4);
        bufp->chgBit(oldp+1272,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen_last));
        bufp->chgCData(oldp+1273,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arsize),3);
        bufp->chgBit(oldp+1274,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid));
        bufp->chgQData(oldp+1275,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas),45);
        bufp->chgIData(oldp+1277,((IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                                           >> 0xdU))),32);
        bufp->chgCData(oldp+1278,((3U & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                                                 >> 0xbU)))),2);
        bufp->chgCData(oldp+1279,((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas))),4);
        bufp->chgCData(oldp+1280,((0xfU & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                                                   >> 4U)))),4);
        bufp->chgCData(oldp+1281,((7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                                                 >> 8U)))),3);
        bufp->chgBit(oldp+1282,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid));
        bufp->chgCData(oldp+1283,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur),4);
        bufp->chgQData(oldp+1284,((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr)) 
                                    << 0xdU) | (QData)((IData)(
                                                               (((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst) 
                                                                 << 0xbU) 
                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awsize) 
                                                                    << 8U) 
                                                                   | (((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awlen) 
                                                                       << 4U) 
                                                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awid)))))))),45);
        bufp->chgIData(oldp+1286,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr),32);
        bufp->chgIData(oldp+1287,(((((IData)(1U) + 
                                     (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr 
                                      >> 2U)) << 2U) 
                                   | (3U & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr))),32);
        bufp->chgIData(oldp+1288,((((- (IData)((0U 
                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst)))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr) 
                                   | (((- (IData)((1U 
                                                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst)))) 
                                       & ((((IData)(1U) 
                                            + (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr 
                                               >> 2U)) 
                                           << 2U) | 
                                          (3U & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr))) 
                                      | ((- (IData)(
                                                    (2U 
                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst)))) 
                                         & ((0xffffffc0U 
                                             & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr) 
                                            | ((0x3cU 
                                                & ((0xfffffffcU 
                                                    & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awlen)) 
                                                        << 2U) 
                                                       & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr)) 
                                                   | (((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awlen) 
                                                       & ((IData)(1U) 
                                                          + 
                                                          (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr 
                                                           >> 2U))) 
                                                      << 2U))) 
                                               | (3U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr))))))),32);
        bufp->chgIData(oldp+1289,(((0xffffffc0U & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr) 
                                   | ((0x3cU & ((0xfffffffcU 
                                                 & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awlen)) 
                                                     << 2U) 
                                                    & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr)) 
                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awlen) 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr 
                                                        >> 2U))) 
                                                   << 2U))) 
                                      | (3U & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr)))),32);
        bufp->chgCData(oldp+1290,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst),2);
        bufp->chgBit(oldp+1291,((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst))));
        bufp->chgBit(oldp+1292,((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst))));
        bufp->chgBit(oldp+1293,((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst))));
        bufp->chgCData(oldp+1294,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awid),4);
        bufp->chgCData(oldp+1295,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awlen),4);
        bufp->chgCData(oldp+1296,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awsize),3);
        bufp->chgBit(oldp+1297,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid));
        bufp->chgQData(oldp+1298,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas),45);
        bufp->chgIData(oldp+1300,((IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                           >> 0xdU))),32);
        bufp->chgCData(oldp+1301,((3U & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                                 >> 0xbU)))),2);
        bufp->chgCData(oldp+1302,((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas))),4);
        bufp->chgCData(oldp+1303,((0xfU & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                                   >> 4U)))),4);
        bufp->chgCData(oldp+1304,((7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                                 >> 8U)))),3);
        bufp->chgBit(oldp+1305,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_valid));
        bufp->chgBit(oldp+1306,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_allow_out));
        bufp->chgBit(oldp+1307,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid));
        bufp->chgCData(oldp+1308,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_datas),4);
        bufp->chgBit(oldp+1309,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid)))));
        bufp->chgCData(oldp+1310,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wstrb),4);
        bufp->chgIData(oldp+1311,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wdata),32);
        bufp->chgBit(oldp+1312,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wlast));
        bufp->chgBit(oldp+1313,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wvalid));
    }
    bufp->chgBit(oldp+1314,(vlSelf->aclk));
    bufp->chgBit(oldp+1315,(vlSelf->aresetn));
    bufp->chgBit(oldp+1316,(vlSelf->enable_delay));
    bufp->chgIData(oldp+1317,(vlSelf->random_seed),23);
    bufp->chgBit(oldp+1318,(vlSelf->ram_ren));
    bufp->chgIData(oldp+1319,(vlSelf->ram_raddr),32);
    bufp->chgIData(oldp+1320,(vlSelf->ram_rdata),32);
    bufp->chgCData(oldp+1321,(vlSelf->ram_wen),4);
    bufp->chgIData(oldp+1322,(vlSelf->ram_waddr),32);
    bufp->chgIData(oldp+1323,(vlSelf->ram_wdata),32);
    bufp->chgIData(oldp+1324,(vlSelf->debug0_wb_pc),32);
    bufp->chgBit(oldp+1325,(vlSelf->debug0_wb_rf_wen));
    bufp->chgCData(oldp+1326,(vlSelf->debug0_wb_rf_wnum),5);
    bufp->chgIData(oldp+1327,(vlSelf->debug0_wb_rf_wdata),32);
    bufp->chgIData(oldp+1328,(vlSelf->num_data),32);
    bufp->chgBit(oldp+1329,(vlSelf->open_trace));
    bufp->chgBit(oldp+1330,(vlSelf->num_monitor));
    bufp->chgCData(oldp+1331,(vlSelf->confreg_uart_data),8);
    bufp->chgBit(oldp+1332,(vlSelf->write_uart_valid));
    bufp->chgWData(oldp+1333,(vlSelf->uart_ctr_bus),128);
    bufp->chgBit(oldp+1337,(vlSelf->uart_rx));
    bufp->chgBit(oldp+1338,(vlSelf->uart_tx));
    bufp->chgSData(oldp+1339,(vlSelf->led),16);
    bufp->chgCData(oldp+1340,(vlSelf->led_rg0),2);
    bufp->chgCData(oldp+1341,(vlSelf->led_rg1),2);
    bufp->chgCData(oldp+1342,(vlSelf->num_csn),8);
    bufp->chgCData(oldp+1343,(vlSelf->num_a_g),7);
    bufp->chgCData(oldp+1344,(vlSelf->btn_key_col),4);
    bufp->chgCData(oldp+1345,(vlSelf->btn_key_row),4);
    bufp->chgCData(oldp+1346,(vlSelf->btn_step),2);
    bufp->chgCData(oldp+1347,(vlSelf->__SYM__switch),8);
    bufp->chgBit(oldp+1348,((1U & (~ (IData)(vlSelf->aresetn)))));
    bufp->chgBit(oldp+1349,((1U & ((IData)(vlSelf->uart_rx__en0)
                                    ? ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__rx_en)) 
                                       | (IData)(vlSelf->uart_tx))
                                    : (IData)(vlSelf->uart_rx)))));
    bufp->chgBit(oldp+1350,((1U & ((~ (IData)(vlSelf->aresetn)) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop)))));
    bufp->chgIData(oldp+1351,(vlSelf->__SYM__switch),32);
    bufp->chgIData(oldp+1352,(((0x8000U & ((IData)(vlSelf->__SYM__switch) 
                                           << 8U)) 
                               | ((0x2000U & ((IData)(vlSelf->__SYM__switch) 
                                              << 7U)) 
                                  | ((0x800U & ((IData)(vlSelf->__SYM__switch) 
                                                << 6U)) 
                                     | ((0x200U & ((IData)(vlSelf->__SYM__switch) 
                                                   << 5U)) 
                                        | ((0x80U & 
                                            ((IData)(vlSelf->__SYM__switch) 
                                             << 4U)) 
                                           | ((0x20U 
                                               & ((IData)(vlSelf->__SYM__switch) 
                                                  << 3U)) 
                                              | ((8U 
                                                  & ((IData)(vlSelf->__SYM__switch) 
                                                     << 2U)) 
                                                 | (2U 
                                                    & ((IData)(vlSelf->__SYM__switch) 
                                                       << 1U)))))))))),32);
    bufp->chgBit(oldp+1353,(((~ (IData)((0xfU == (IData)(vlSelf->btn_key_row)))) 
                             & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)))));
    bufp->chgBit(oldp+1354,(((7U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                             & (0xfU == (IData)(vlSelf->btn_key_row)))));
    bufp->chgBit(oldp+1355,(((~ (IData)(vlSelf->btn_step)) 
                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r))));
    bufp->chgBit(oldp+1356,((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r)) 
                                   & (IData)(vlSelf->btn_step)))));
    bufp->chgBit(oldp+1357,(((~ ((IData)(vlSelf->btn_step) 
                                 >> 1U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r))));
    bufp->chgBit(oldp+1358,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r)) 
                             & ((IData)(vlSelf->btn_step) 
                                >> 1U))));
    bufp->chgCData(oldp+1359,((0xfU & (- (IData)((IData)(vlSelf->debug0_wb_rf_wen))))),4);
    bufp->chgIData(oldp+1360,((((0U != (0x1fU & (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0xaU)))) 
                                & ((0x1fU & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                     >> 0xaU))) 
                                   == (IData)(vlSelf->debug0_wb_rf_wnum)))
                                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb
                                : ((0U != (0x1fU & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0xaU))))
                                    ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf
                                   [(0x1fU & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                      >> 0xaU)))]
                                    : 0U))),32);
    bufp->chgIData(oldp+1361,((((0U != (0x1fU & (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0xaU)))) 
                                & ((0x1fU & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                     >> 0xaU))) 
                                   == (IData)(vlSelf->debug0_wb_rf_wnum)))
                                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb
                                : ((0U != (0x1fU & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0xaU))))
                                    ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf
                                   [(0x1fU & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                      >> 0xaU)))]
                                    : 0U))),32);
    bufp->chgIData(oldp+1362,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__MEM_forward_valid) 
                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_mem) 
                                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_no_ex)))
                                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluout_mem
                                : (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__WB_forward_valid) 
                                    & ((IData)(vlSelf->debug0_wb_rf_wnum) 
                                       == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_no_ex)))
                                    ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb
                                    : ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                        ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[6U] 
                                            << 0x11U) 
                                           | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[5U] 
                                              >> 0xfU))
                                        : 0U)))),32);
    bufp->chgIData(oldp+1363,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__MEM_forward_valid) 
                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_mem) 
                                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rk_no_ex)))
                                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluout_mem
                                : (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__WB_forward_valid) 
                                    & ((IData)(vlSelf->debug0_wb_rf_wnum) 
                                       == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rk_no_ex)))
                                    ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb
                                    : ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                        ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[5U] 
                                            << 0x11U) 
                                           | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[4U] 
                                              >> 0xfU))
                                        : 0U)))),32);
    bufp->chgBit(oldp+1364,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen_last)) 
                             & (IData)(vlSelf->ram_ren))));
    bufp->chgBit(oldp+1365,((1U & ((~ (IData)(vlSelf->aresetn)) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop)))));
}

void Vsimu_top___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root__trace_cleanup\n"); );
    // Init
    Vsimu_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsimu_top___024root*>(voidSelf);
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}

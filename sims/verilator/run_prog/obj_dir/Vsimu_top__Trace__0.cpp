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

void Vsimu_top___024root__trace_chg_sub_0(Vsimu_top___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<3>/*95:0*/ __Vtemp_h68c77d1b__0;
    VlWide<8>/*255:0*/ __Vtemp_h03351fb9__0;
    VlWide<3>/*95:0*/ __Vtemp_he34d3122__0;
    VlWide<3>/*95:0*/ __Vtemp_hae834e39__0;
    VlWide<8>/*255:0*/ __Vtemp_h2ad9822f__0;
    VlWide<3>/*95:0*/ __Vtemp_h1f138f54__0;
    VlWide<4>/*127:0*/ __Vtemp_hbf0bedd2__0;
    VlWide<4>/*127:0*/ __Vtemp_h88a17f1a__0;
    VlWide<4>/*127:0*/ __Vtemp_h0747b048__0;
    VlWide<8>/*255:0*/ __Vtemp_hdd88a34f__0;
    VlWide<4>/*127:0*/ __Vtemp_h4336fe8b__0;
    VlWide<4>/*127:0*/ __Vtemp_h51af46af__0;
    VlWide<3>/*95:0*/ __Vtemp_h7135cf86__0;
    VlWide<3>/*95:0*/ __Vtemp_h163f47e7__0;
    VlWide<3>/*95:0*/ __Vtemp_hcd850d7d__0;
    VlWide<4>/*127:0*/ __Vtemp_he0343ab4__0;
    VlWide<4>/*127:0*/ __Vtemp_h09691835__0;
    VlWide<12>/*383:0*/ __Vtemp_hb7282946__0;
    VlWide<4>/*127:0*/ __Vtemp_h6e4d052c__0;
    VlWide<4>/*127:0*/ __Vtemp_h34a05572__0;
    VlWide<4>/*127:0*/ __Vtemp_h8cf1da23__0;
    VlWide<4>/*127:0*/ __Vtemp_h1ec62bc3__0;
    VlWide<8>/*255:0*/ __Vtemp_hcf19881d__0;
    VlWide<4>/*127:0*/ __Vtemp_h7b03e3f3__0;
    VlWide<4>/*127:0*/ __Vtemp_h30db7ab2__0;
    VlWide<3>/*95:0*/ __Vtemp_heca64d66__0;
    VlWide<3>/*95:0*/ __Vtemp_h23e63428__0;
    VlWide<3>/*95:0*/ __Vtemp_hff913dfa__0;
    VlWide<4>/*127:0*/ __Vtemp_h1ee848a0__0;
    VlWide<4>/*127:0*/ __Vtemp_h266b6fbd__0;
    VlWide<12>/*383:0*/ __Vtemp_hacaa6269__0;
    VlWide<4>/*127:0*/ __Vtemp_hfcdedeeb__0;
    VlWide<4>/*127:0*/ __Vtemp_ha6f5d90a__0;
    VlWide<4>/*127:0*/ __Vtemp_hd4169019__0;
    VlWide<4>/*127:0*/ __Vtemp_h63191e3f__0;
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
        bufp->chgIData(oldp+10,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__j),32);
        bufp->chgIData(oldp+11,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__j),32);
        bufp->chgIData(oldp+12,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__j),32);
        bufp->chgIData(oldp+13,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__j),32);
        bufp->chgIData(oldp+14,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__tag_v__DOT__j),32);
        bufp->chgIData(oldp+15,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__j),32);
        bufp->chgIData(oldp+16,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__j),32);
        bufp->chgIData(oldp+17,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__j),32);
        bufp->chgIData(oldp+18,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__j),32);
        bufp->chgIData(oldp+19,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__tag_v__DOT__j),32);
        bufp->chgIData(oldp+20,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__j),32);
        bufp->chgIData(oldp+21,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__j),32);
        bufp->chgIData(oldp+22,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__j),32);
        bufp->chgIData(oldp+23,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__j),32);
        bufp->chgIData(oldp+24,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__tag_v__DOT__j),32);
        bufp->chgIData(oldp+25,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__j),32);
        bufp->chgIData(oldp+26,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__j),32);
        bufp->chgIData(oldp+27,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__j),32);
        bufp->chgIData(oldp+28,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__j),32);
        bufp->chgIData(oldp+29,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__tag_v__DOT__j),32);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[3U]) 
                     | vlSelf->__Vm_traceActivity[8U]))) {
        bufp->chgBit(oldp+30,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__req_inst));
        bufp->chgBit(oldp+31,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_allow_in));
        bufp->chgBit(oldp+32,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_ready_go));
        bufp->chgBit(oldp+33,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_allow_in));
        bufp->chgBit(oldp+34,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_ready_go));
        bufp->chgBit(oldp+35,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_flush));
        bufp->chgBit(oldp+36,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_flush));
        bufp->chgCData(oldp+37,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state_next_mux__DOT__and_gates__BRA__4__KET____DOT__or_result),3);
        bufp->chgBit(oldp+38,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req));
        bufp->chgBit(oldp+39,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__lookup_to_lookup));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgBit(oldp+40,(vlSelf->simu_top__DOT__soc__DOT__cpu_awready));
        bufp->chgBit(oldp+41,(((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wready) 
                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h4bbe5f71__0))));
        bufp->chgBit(oldp+42,(vlSelf->simu_top__DOT__soc__DOT__cpu_bvalid));
        bufp->chgIData(oldp+43,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_araddr),32);
        bufp->chgCData(oldp+44,((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__ar_mux__DOT__and_gates__BRA__3__KET____DOT__or_result))),4);
        bufp->chgCData(oldp+45,((7U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__ar_mux__DOT__and_gates__BRA__3__KET____DOT__or_result) 
                                       >> 0xaU))),3);
        bufp->chgCData(oldp+46,((3U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__ar_mux__DOT__and_gates__BRA__3__KET____DOT__or_result) 
                                       >> 8U))),2);
        bufp->chgBit(oldp+47,(vlSelf->simu_top__DOT__soc__DOT__cpu_arvalid));
        bufp->chgBit(oldp+48,(vlSelf->simu_top__DOT__soc__DOT__cpu_arready));
        bufp->chgBit(oldp+49,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache_ret_valid));
        bufp->chgBit(oldp+50,(vlSelf->simu_top__DOT__soc__DOT__m0_awvalid));
        bufp->chgBit(oldp+51,(vlSelf->simu_top__DOT__soc__DOT__m0_wvalid));
        bufp->chgBit(oldp+52,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h765eb7cb__0));
        bufp->chgBit(oldp+53,(vlSelf->simu_top__DOT__soc__DOT__m0_arvalid));
        bufp->chgBit(oldp+54,(vlSelf->simu_top__DOT__soc__DOT__m0_arready));
        bufp->chgBit(oldp+55,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h76518f96__0));
        bufp->chgBit(oldp+56,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid))));
        bufp->chgBit(oldp+57,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid))));
        bufp->chgBit(oldp+58,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready))));
        bufp->chgBit(oldp+59,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid))));
        bufp->chgBit(oldp+60,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready))));
        bufp->chgBit(oldp+61,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                     >> 3U))));
        bufp->chgBit(oldp+62,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
                                     >> 3U))));
        bufp->chgBit(oldp+63,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                     >> 3U))));
        bufp->chgBit(oldp+64,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                     >> 3U))));
        bufp->chgBit(oldp+65,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                     >> 3U))));
        bufp->chgBit(oldp+66,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                     >> 2U))));
        bufp->chgBit(oldp+67,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
                                     >> 2U))));
        bufp->chgBit(oldp+68,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                     >> 2U))));
        bufp->chgBit(oldp+69,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                     >> 2U))));
        bufp->chgBit(oldp+70,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                     >> 2U))));
        bufp->chgBit(oldp+71,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en));
        bufp->chgCData(oldp+72,(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen),4);
        bufp->chgBit(oldp+73,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_cpu));
        bufp->chgBit(oldp+74,((((8U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm)) 
                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_rlast) 
                                   & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                      >> 2U))) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                                   >> 2U) 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_bvalid)))));
        bufp->chgCData(oldp+75,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm_nxt),4);
        bufp->chgBit(oldp+76,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NANDtag));
        bufp->chgBit(oldp+77,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                     >> 1U))));
        bufp->chgBit(oldp+78,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
                                     >> 1U))));
        bufp->chgBit(oldp+79,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                     >> 1U))));
        bufp->chgBit(oldp+80,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                     >> 1U))));
        bufp->chgBit(oldp+81,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                     >> 1U))));
        bufp->chgBit(oldp+82,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                     >> 4U))));
        bufp->chgBit(oldp+83,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
                                     >> 4U))));
        bufp->chgBit(oldp+84,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                     >> 4U))));
        bufp->chgBit(oldp+85,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                     >> 4U))));
        bufp->chgBit(oldp+86,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                     >> 4U))));
        bufp->chgCData(oldp+87,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit),5);
        bufp->chgIData(oldp+88,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[0]),32);
        bufp->chgIData(oldp+89,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[1]),32);
        bufp->chgIData(oldp+90,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[2]),32);
        bufp->chgIData(oldp+91,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[3]),32);
        bufp->chgIData(oldp+92,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[4]),32);
        bufp->chgCData(oldp+93,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid),5);
        bufp->chgCData(oldp+94,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid),5);
        bufp->chgCData(oldp+95,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready),5);
        bufp->chgCData(oldp+96,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid),5);
        bufp->chgCData(oldp+97,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready),5);
        bufp->chgBit(oldp+98,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_dir_ins));
        bufp->chgBit(oldp+99,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_dir_del));
        bufp->chgBit(oldp+100,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_dir_ins));
        bufp->chgBit(oldp+101,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_empty)) 
                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rvalid) 
                                   & ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rlast) 
                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h76518f96__0))))));
        bufp->chgCData(oldp+102,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir),3);
        bufp->chgBit(oldp+103,((1U & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____VdfgTmp_h58a8c0e9__0) 
                                         | (0x1fe0U 
                                            == (vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_araddr 
                                                >> 0x10U)))))));
        bufp->chgIData(oldp+104,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int),32);
        bufp->chgBit(oldp+105,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen_last)) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en))));
        bufp->chgBit(oldp+106,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_push));
        bufp->chgBit(oldp+107,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop));
        bufp->chgBit(oldp+108,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push));
        bufp->chgQData(oldp+109,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push_data),45);
        bufp->chgBit(oldp+111,(((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop))));
        bufp->chgBit(oldp+112,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_push));
        bufp->chgBit(oldp+113,((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rvalid)) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                         >> 3U)))));
        bufp->chgBit(oldp+114,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wlast)) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en))));
        bufp->chgBit(oldp+115,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_push));
        bufp->chgBit(oldp+116,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop));
        bufp->chgBit(oldp+117,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_push));
        bufp->chgBit(oldp+118,(((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop))));
        bufp->chgBit(oldp+119,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_push));
        bufp->chgBit(oldp+120,(((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) 
                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid)) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop)))));
        bufp->chgBit(oldp+121,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop));
        bufp->chgBit(oldp+122,(((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop))));
        bufp->chgBit(oldp+123,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_push));
        bufp->chgBit(oldp+124,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en));
        bufp->chgBit(oldp+125,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_go));
        bufp->chgBit(oldp+126,((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen))));
        bufp->chgBit(oldp+127,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                & (0x8000U == (0xffffU 
                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        bufp->chgBit(oldp+128,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                & (0x8010U == (0xffffU 
                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        bufp->chgBit(oldp+129,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                & (0x8020U == (0xffffU 
                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        bufp->chgBit(oldp+130,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                & (0x8030U == (0xffffU 
                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        bufp->chgBit(oldp+131,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                & (0x8040U == (0xffffU 
                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        bufp->chgBit(oldp+132,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                & (0x8050U == (0xffffU 
                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        bufp->chgBit(oldp+133,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                & (0x8060U == (0xffffU 
                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        bufp->chgBit(oldp+134,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                & (0x8070U == (0xffffU 
                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        bufp->chgBit(oldp+135,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer));
        bufp->chgBit(oldp+136,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                & (0xff00U == (0xffffU 
                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        bufp->chgBit(oldp+137,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                & (0xff30U == (0xffffU 
                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        bufp->chgBit(oldp+138,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                & (0xff40U == (0xffffU 
                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        bufp->chgBit(oldp+139,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_uart_valid));
        bufp->chgBit(oldp+140,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                & (0xf020U == (0xffffU 
                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        bufp->chgCData(oldp+141,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__next_state),3);
        bufp->chgSData(oldp+142,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_key_tmp),16);
        bufp->chgBit(oldp+143,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                & (0xf030U == (0xffffU 
                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        bufp->chgBit(oldp+144,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                & (0xf040U == (0xffffU 
                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        bufp->chgBit(oldp+145,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                & (0xf050U == (0xffffU 
                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        bufp->chgCData(oldp+146,((0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__ar_mux__DOT__and_gates__BRA__3__KET____DOT__or_result))),8);
        bufp->chgBit(oldp+147,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__refill_data_ok_cached) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__refill_data_ok_uncached) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__lookup_data_ok)))));
        bufp->chgBit(oldp+148,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_data_ok_cached) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_data_ok_uncached) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__lookup_data_ok)))));
        bufp->chgBit(oldp+149,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_ready_go));
        bufp->chgBit(oldp+150,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_valid_in));
        bufp->chgBit(oldp+151,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT____Vcellout__priority_ar__out) 
                                      >> 1U))));
        bufp->chgBit(oldp+152,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT____Vcellout__priority_ar__out))));
        bufp->chgBit(oldp+153,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache_rd_rdy));
        bufp->chgBit(oldp+154,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache_rd_rdy));
        bufp->chgBit(oldp+155,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__waiting_for_rvalid)) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_ha3470664__0)) 
                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__buf_empty) 
                                   & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__state))))));
        bufp->chgCData(oldp+156,(((0xfffffff8U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_uncached) 
                                                   << 3U) 
                                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT____Vcellout__priority_ar__out) 
                                                     << 2U))) 
                                  | ((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_uncached)) 
                                       & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT____Vcellout__priority_ar__out) 
                                          >> 1U)) << 2U) 
                                     | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_uncached) 
                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT____Vcellout__priority_ar__out)) 
                                         << 1U) | (1U 
                                                   & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_uncached)) 
                                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT____Vcellout__priority_ar__out))))))),4);
        bufp->chgSData(oldp+157,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__ar_mux__DOT__and_gates__BRA__3__KET____DOT__or_result),13);
        bufp->chgSData(oldp+158,((0x903U & (- (IData)(
                                                      (1U 
                                                       & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_uncached)) 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT____Vcellout__priority_ar__out))))))),13);
        bufp->chgSData(oldp+159,(((- (IData)(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_uncached) 
                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT____Vcellout__priority_ar__out)))) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_size) 
                                     << 0xaU))),13);
        bufp->chgSData(oldp+160,((((- (IData)(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_uncached) 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT____Vcellout__priority_ar__out)))) 
                                   & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_size) 
                                      << 0xaU)) | (0x903U 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_uncached)) 
                                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT____Vcellout__priority_ar__out)))))))),13);
        bufp->chgSData(oldp+161,((0x903U & (- (IData)(
                                                      ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_uncached)) 
                                                       & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT____Vcellout__priority_ar__out) 
                                                          >> 1U)))))),13);
        bufp->chgSData(oldp+162,(((0x903U & (- (IData)(
                                                       ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_uncached)) 
                                                        & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT____Vcellout__priority_ar__out) 
                                                           >> 1U))))) 
                                  | (((- (IData)(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_uncached) 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT____Vcellout__priority_ar__out)))) 
                                      & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_size) 
                                         << 0xaU)) 
                                     | (0x903U & (- (IData)(
                                                            (1U 
                                                             & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_uncached)) 
                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT____Vcellout__priority_ar__out))))))))),13);
        bufp->chgSData(oldp+163,(((- (IData)(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_uncached) 
                                              & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT____Vcellout__priority_ar__out) 
                                                 >> 1U)))) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_size) 
                                     << 0xaU))),13);
        bufp->chgBit(oldp+164,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__w_handshake));
        bufp->chgBit(oldp+165,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__w_finish));
        bufp->chgBit(oldp+166,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT____VdfgTmp_hb3e29d94__0) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_awready))));
        bufp->chgBit(oldp+167,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_awready)) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT____VdfgTmp_hb3e29d94__0))));
        bufp->chgBit(oldp+168,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT____VdfgTmp_ha3725e82__0) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_awready))));
        bufp->chgBit(oldp+169,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_awready)) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT____VdfgTmp_ha3725e82__0))));
        bufp->chgBit(oldp+170,(((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__state)) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_awready))));
        bufp->chgBit(oldp+171,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_awready)) 
                                & (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__state)))));
        bufp->chgBit(oldp+172,(((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__state)) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__w_finish))));
        bufp->chgBit(oldp+173,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__w_finish)) 
                                & (3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__state)))));
        bufp->chgBit(oldp+174,(((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__state)) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_bvalid))));
        bufp->chgBit(oldp+175,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_bvalid)) 
                                & (4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__state)))));
        bufp->chgCData(oldp+176,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__next_mux__DOT__and_gates__BRA__3__KET____DOT__or_result),3);
        bufp->chgCData(oldp+177,((((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__idle_to_aw_w)) 
                                     & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__state))) 
                                    | ((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__state)) 
                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_bvalid))) 
                                   << 4U) | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__idle_to_aw_w) 
                                               | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_awready)) 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT____VdfgTmp_ha3725e82__0))) 
                                              << 3U) 
                                             | (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_awready)) 
                                                   & (2U 
                                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__state))) 
                                                  | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_awready)) 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT____VdfgTmp_hb3e29d94__0))) 
                                                 << 2U) 
                                                | (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT____VdfgTmp_ha3725e82__0) 
                                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_awready)) 
                                                     | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__w_finish)) 
                                                        & (3U 
                                                           == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__state)))) 
                                                    << 1U) 
                                                   | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT____VdfgTmp_hb3e29d94__0) 
                                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_awready)) 
                                                      | (((2U 
                                                           == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__state)) 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_awready)) 
                                                         | (((3U 
                                                              == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__state)) 
                                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__w_finish)) 
                                                            | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_bvalid)) 
                                                               & (4U 
                                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__state))))))))))),5);
        bufp->chgCData(oldp+178,((4U & (- (IData)((
                                                   ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT____VdfgTmp_hb3e29d94__0) 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_awready)) 
                                                   | (((2U 
                                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__state)) 
                                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_awready)) 
                                                      | (((3U 
                                                           == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__state)) 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__w_finish)) 
                                                         | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_bvalid)) 
                                                            & (4U 
                                                               == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__state)))))))))),3);
        bufp->chgCData(oldp+179,((3U & (- (IData)((
                                                   ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT____VdfgTmp_ha3725e82__0) 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_awready)) 
                                                   | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__w_finish)) 
                                                      & (3U 
                                                         == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__state)))))))),3);
        bufp->chgCData(oldp+180,(((3U & (- (IData)(
                                                   (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT____VdfgTmp_ha3725e82__0) 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_awready)) 
                                                    | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__w_finish)) 
                                                       & (3U 
                                                          == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__state))))))) 
                                  | (4U & (- (IData)(
                                                     (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT____VdfgTmp_hb3e29d94__0) 
                                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_awready)) 
                                                      | (((2U 
                                                           == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__state)) 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_awready)) 
                                                         | (((3U 
                                                              == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__state)) 
                                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__w_finish)) 
                                                            | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_bvalid)) 
                                                               & (4U 
                                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__state))))))))))),3);
        bufp->chgCData(oldp+181,((2U & (- (IData)((
                                                   ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_awready)) 
                                                    & (2U 
                                                       == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__state))) 
                                                   | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_awready)) 
                                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT____VdfgTmp_hb3e29d94__0))))))),3);
        bufp->chgCData(oldp+182,(((2U & (- (IData)(
                                                   (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_awready)) 
                                                     & (2U 
                                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__state))) 
                                                    | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_awready)) 
                                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT____VdfgTmp_hb3e29d94__0)))))) 
                                  | ((3U & (- (IData)(
                                                      (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT____VdfgTmp_ha3725e82__0) 
                                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_awready)) 
                                                       | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__w_finish)) 
                                                          & (3U 
                                                             == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__state))))))) 
                                     | (4U & (- (IData)(
                                                        (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT____VdfgTmp_hb3e29d94__0) 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_awready)) 
                                                         | (((2U 
                                                              == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__state)) 
                                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_awready)) 
                                                            | (((3U 
                                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__state)) 
                                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__w_finish)) 
                                                               | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_bvalid)) 
                                                                  & (4U 
                                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__state)))))))))))),3);
        bufp->chgCData(oldp+183,((1U & (- (IData)(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__idle_to_aw_w) 
                                                   | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_awready)) 
                                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT____VdfgTmp_ha3725e82__0))))))),3);
        bufp->chgBit(oldp+184,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache_rd_rdy)) 
                                & (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)))));
        bufp->chgBit(oldp+185,(((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache_rd_rdy))));
        bufp->chgBit(oldp+186,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache_rd_rdy)) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_hbe0a95ac__0))));
        bufp->chgBit(oldp+187,(((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)) 
                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_cacheop)
                                    ? (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wb_ways_next))
                                    : ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_to_dirty_miss)) 
                                       & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_uncached)) 
                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache_rd_rdy)))))));
        bufp->chgBit(oldp+188,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_to_refill));
        bufp->chgBit(oldp+189,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_to_refill)) 
                                & (5U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)))));
        bufp->chgBit(oldp+190,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_data_ok_cached));
        bufp->chgBit(oldp+191,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_data_ok_uncached));
        bufp->chgCData(oldp+192,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__lookup_data_ok) 
                                   << 2U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_data_ok_cached) 
                                              << 1U) 
                                             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_data_ok_uncached)))),3);
        bufp->chgCData(oldp+193,((5U & (- (IData)((
                                                   ((2U 
                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)) 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache_rd_rdy)) 
                                                   | (((4U 
                                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)) 
                                                       & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_cacheop)
                                                           ? 
                                                          (0U 
                                                           == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wb_ways_next))
                                                           : 
                                                          ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_to_dirty_miss)) 
                                                           & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_uncached)) 
                                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache_rd_rdy))))) 
                                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_to_refill) 
                                                         | ((1U 
                                                             == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)) 
                                                            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_cacheop) 
                                                               & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h09374013__0)) 
                                                                  & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_cacheop_hit) 
                                                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__hit)) 
                                                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_cacheop_index)))))))))))),3);
        bufp->chgCData(oldp+194,((4U & (- (IData)(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__dirty_miss_to_replace) 
                                                   | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache_rd_rdy)) 
                                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_hbe0a95ac__0))))))),3);
        bufp->chgCData(oldp+195,(((4U & (- (IData)(
                                                   ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__dirty_miss_to_replace) 
                                                    | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache_rd_rdy)) 
                                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_hbe0a95ac__0)))))) 
                                  | (5U & (- (IData)(
                                                     (((2U 
                                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)) 
                                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache_rd_rdy)) 
                                                      | (((4U 
                                                           == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)) 
                                                          & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_cacheop)
                                                              ? 
                                                             (0U 
                                                              == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wb_ways_next))
                                                              : 
                                                             ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_to_dirty_miss)) 
                                                              & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_uncached)) 
                                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache_rd_rdy))))) 
                                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_to_refill) 
                                                            | ((1U 
                                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)) 
                                                               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_cacheop) 
                                                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h09374013__0)) 
                                                                     & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_cacheop_hit) 
                                                                         & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__hit)) 
                                                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_cacheop_index))))))))))))),3);
        bufp->chgCData(oldp+196,(((3U & (- (IData)(
                                                   (((1U 
                                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)) 
                                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT___hit)) 
                                                        & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_cacheop)
                                                            ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h09374013__0)
                                                            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_he381076c__0)))) 
                                                    | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__buf_empty)) 
                                                        & (3U 
                                                           == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state))) 
                                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_to_dirty_miss)))))) 
                                  | ((4U & (- (IData)(
                                                      ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__dirty_miss_to_replace) 
                                                       | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache_rd_rdy)) 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_hbe0a95ac__0)))))) 
                                     | (5U & (- (IData)(
                                                        (((2U 
                                                           == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)) 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache_rd_rdy)) 
                                                         | (((4U 
                                                              == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)) 
                                                             & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_cacheop)
                                                                 ? 
                                                                (0U 
                                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wb_ways_next))
                                                                 : 
                                                                ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_to_dirty_miss)) 
                                                                 & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_uncached)) 
                                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache_rd_rdy))))) 
                                                            | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_to_refill) 
                                                               | ((1U 
                                                                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)) 
                                                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_cacheop) 
                                                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h09374013__0)) 
                                                                        & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_cacheop_hit) 
                                                                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__hit)) 
                                                                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_cacheop_index)))))))))))))),3);
        bufp->chgCData(oldp+197,((2U & (- (IData)((
                                                   ((1U 
                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)) 
                                                    & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT___hit)) 
                                                       & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_cacheop)) 
                                                          & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_he381076c__0))))) 
                                                   | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache_rd_rdy)) 
                                                      & (2U 
                                                         == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)))))))),3);
        bufp->chgCData(oldp+198,(((2U & (- (IData)(
                                                   (((1U 
                                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)) 
                                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT___hit)) 
                                                        & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_cacheop)) 
                                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_he381076c__0))))) 
                                                    | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache_rd_rdy)) 
                                                       & (2U 
                                                          == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state))))))) 
                                  | ((3U & (- (IData)(
                                                      (((1U 
                                                         == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)) 
                                                        & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT___hit)) 
                                                           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_cacheop)
                                                               ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h09374013__0)
                                                               : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_he381076c__0)))) 
                                                       | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__buf_empty)) 
                                                           & (3U 
                                                              == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state))) 
                                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_to_dirty_miss)))))) 
                                     | ((4U & (- (IData)(
                                                         ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__dirty_miss_to_replace) 
                                                          | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache_rd_rdy)) 
                                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_hbe0a95ac__0)))))) 
                                        | (5U & (- (IData)(
                                                           (((2U 
                                                              == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)) 
                                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache_rd_rdy)) 
                                                            | (((4U 
                                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)) 
                                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_cacheop)
                                                                    ? 
                                                                   (0U 
                                                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wb_ways_next))
                                                                    : 
                                                                   ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_to_dirty_miss)) 
                                                                    & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_uncached)) 
                                                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache_rd_rdy))))) 
                                                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_to_refill) 
                                                                  | ((1U 
                                                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)) 
                                                                     & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_cacheop) 
                                                                        & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h09374013__0)) 
                                                                           & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_cacheop_hit) 
                                                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__hit)) 
                                                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_cacheop_index))))))))))))))),3);
        bufp->chgBit(oldp+199,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache_rd_rdy)) 
                                & (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)))));
        bufp->chgBit(oldp+200,(((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache_rd_rdy))));
        bufp->chgBit(oldp+201,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache_rd_rdy)) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_hbe0a95ac__0))));
        bufp->chgBit(oldp+202,(((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)) 
                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_cacheop)
                                    ? (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wb_ways_next))
                                    : ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_to_dirty_miss)) 
                                       & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_uncached)) 
                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache_rd_rdy)))))));
        bufp->chgBit(oldp+203,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__refill_to_refill));
        bufp->chgBit(oldp+204,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__refill_to_refill)) 
                                & (5U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)))));
        bufp->chgBit(oldp+205,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__refill_data_ok_cached));
        bufp->chgBit(oldp+206,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__refill_data_ok_uncached));
        bufp->chgCData(oldp+207,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__lookup_data_ok) 
                                   << 2U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__refill_data_ok_cached) 
                                              << 1U) 
                                             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__refill_data_ok_uncached)))),3);
        bufp->chgCData(oldp+208,((5U & (- (IData)((
                                                   ((2U 
                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)) 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache_rd_rdy)) 
                                                   | (((4U 
                                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)) 
                                                       & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_cacheop)
                                                           ? 
                                                          (0U 
                                                           == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wb_ways_next))
                                                           : 
                                                          ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_to_dirty_miss)) 
                                                           & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_uncached)) 
                                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache_rd_rdy))))) 
                                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__refill_to_refill) 
                                                         | ((1U 
                                                             == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)) 
                                                            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_cacheop) 
                                                               & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_h09374013__0)) 
                                                                  & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_cacheop_hit) 
                                                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__hit)) 
                                                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_cacheop_index)))))))))))),3);
        bufp->chgCData(oldp+209,((4U & (- (IData)((
                                                   (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache_rd_rdy)) 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_hbe0a95ac__0)))))),3);
        bufp->chgCData(oldp+210,(((4U & (- (IData)(
                                                   ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache_rd_rdy)) 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_hbe0a95ac__0))))) 
                                  | (5U & (- (IData)(
                                                     (((2U 
                                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)) 
                                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache_rd_rdy)) 
                                                      | (((4U 
                                                           == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)) 
                                                          & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_cacheop)
                                                              ? 
                                                             (0U 
                                                              == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wb_ways_next))
                                                              : 
                                                             ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_to_dirty_miss)) 
                                                              & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_uncached)) 
                                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache_rd_rdy))))) 
                                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__refill_to_refill) 
                                                            | ((1U 
                                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)) 
                                                               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_cacheop) 
                                                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_h09374013__0)) 
                                                                     & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_cacheop_hit) 
                                                                         & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__hit)) 
                                                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_cacheop_index))))))))))))),3);
        bufp->chgCData(oldp+211,(((3U & (- (IData)(
                                                   (((1U 
                                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)) 
                                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT___hit)) 
                                                        & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_cacheop)
                                                            ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_h09374013__0)
                                                            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_he381076c__0)))) 
                                                    | ((3U 
                                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)) 
                                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_to_dirty_miss)))))) 
                                  | ((4U & (- (IData)(
                                                      ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache_rd_rdy)) 
                                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_hbe0a95ac__0))))) 
                                     | (5U & (- (IData)(
                                                        (((2U 
                                                           == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)) 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache_rd_rdy)) 
                                                         | (((4U 
                                                              == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)) 
                                                             & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_cacheop)
                                                                 ? 
                                                                (0U 
                                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wb_ways_next))
                                                                 : 
                                                                ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_to_dirty_miss)) 
                                                                 & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_uncached)) 
                                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache_rd_rdy))))) 
                                                            | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__refill_to_refill) 
                                                               | ((1U 
                                                                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)) 
                                                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_cacheop) 
                                                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_h09374013__0)) 
                                                                        & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_cacheop_hit) 
                                                                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__hit)) 
                                                                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_cacheop_index)))))))))))))),3);
        bufp->chgCData(oldp+212,((2U & (- (IData)((
                                                   ((1U 
                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)) 
                                                    & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT___hit)) 
                                                       & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_cacheop)) 
                                                          & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_he381076c__0))))) 
                                                   | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache_rd_rdy)) 
                                                      & (2U 
                                                         == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)))))))),3);
        bufp->chgCData(oldp+213,(((2U & (- (IData)(
                                                   (((1U 
                                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)) 
                                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT___hit)) 
                                                        & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_cacheop)) 
                                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_he381076c__0))))) 
                                                    | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache_rd_rdy)) 
                                                       & (2U 
                                                          == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state))))))) 
                                  | ((3U & (- (IData)(
                                                      (((1U 
                                                         == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)) 
                                                        & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT___hit)) 
                                                           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_cacheop)
                                                               ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_h09374013__0)
                                                               : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_he381076c__0)))) 
                                                       | ((3U 
                                                           == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)) 
                                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_to_dirty_miss)))))) 
                                     | ((4U & (- (IData)(
                                                         ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache_rd_rdy)) 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_hbe0a95ac__0))))) 
                                        | (5U & (- (IData)(
                                                           (((2U 
                                                              == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)) 
                                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache_rd_rdy)) 
                                                            | (((4U 
                                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)) 
                                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_cacheop)
                                                                    ? 
                                                                   (0U 
                                                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wb_ways_next))
                                                                    : 
                                                                   ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_to_dirty_miss)) 
                                                                    & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_uncached)) 
                                                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache_rd_rdy))))) 
                                                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__refill_to_refill) 
                                                                  | ((1U 
                                                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)) 
                                                                     & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_cacheop) 
                                                                        & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_h09374013__0)) 
                                                                           & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_cacheop_hit) 
                                                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__hit)) 
                                                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_cacheop_index))))))))))))))),3);
        bufp->chgCData(oldp+214,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT____Vcellout__priority_ar__out),2);
        bufp->chgBit(oldp+215,(((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arvalid) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arready))));
        bufp->chgBit(oldp+216,(((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awvalid) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awready))));
        bufp->chgBit(oldp+217,(((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wvalid) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wready))));
        bufp->chgBit(oldp+218,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_push));
        bufp->chgBit(oldp+219,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop));
        bufp->chgBit(oldp+220,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_push));
        bufp->chgBit(oldp+221,(((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop))));
        bufp->chgBit(oldp+222,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_push));
        bufp->chgBit(oldp+223,((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rvalid)) 
                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready)))));
        bufp->chgBit(oldp+224,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wlast)) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en))));
        bufp->chgBit(oldp+225,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_push));
        bufp->chgBit(oldp+226,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop));
        bufp->chgBit(oldp+227,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_push));
        bufp->chgBit(oldp+228,(((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop))));
        bufp->chgBit(oldp+229,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_push));
        bufp->chgBit(oldp+230,(((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) 
                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid)) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop)))));
        bufp->chgBit(oldp+231,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop));
        bufp->chgBit(oldp+232,(((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop))));
        bufp->chgBit(oldp+233,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_push));
        bufp->chgBit(oldp+234,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en));
        bufp->chgBit(oldp+235,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_go));
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[5U]) 
                     | vlSelf->__Vm_traceActivity[7U]))) {
        bufp->chgIData(oldp+236,((((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__lookup_data_ok))) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__lookup_rdata) 
                                  | (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_data_ok_cached))) 
                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_word) 
                                     | ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_data_ok_uncached))) 
                                        & vlSelf->simu_top__DOT__soc__DOT__m0_rdata)))),32);
        bufp->chgIData(oldp+237,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp_valid)
                                   ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp_valid)
                                       ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp
                                       : 0U) : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__rdata_mux__DOT__and_gates__BRA__2__KET____DOT__or_result)),32);
        bufp->chgIData(oldp+238,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid)
                                   ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid)
                                       ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp
                                       : 0U) : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData)),32);
        bufp->chgIData(oldp+239,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp_valid)
                                   ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp_valid)
                                       ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp
                                       : 0U) : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__rdata_mux__DOT__and_gates__BRA__2__KET____DOT__or_result)),32);
        bufp->chgIData(oldp+240,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid)
                                   ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid)
                                       ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp
                                       : 0U) : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData)),32);
        bufp->chgIData(oldp+241,(((((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_wstrb))
                                     ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_wdata 
                                        >> 0x18U) : 
                                    (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
                                     >> 0x18U)) << 0x18U) 
                                  | ((0xff0000U & (
                                                   ((4U 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_wstrb))
                                                     ? 
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_wdata 
                                                     >> 0x10U)
                                                     : 
                                                    (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
                                                     >> 0x10U)) 
                                                   << 0x10U)) 
                                     | ((0xff00U & 
                                         (((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_wstrb))
                                            ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_wdata 
                                               >> 8U)
                                            : (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
                                               >> 8U)) 
                                          << 8U)) | 
                                        (0xffU & ((1U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_wstrb))
                                                   ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_wdata
                                                   : vlSelf->simu_top__DOT__soc__DOT__m0_rdata)))))),32);
        bufp->chgCData(oldp+242,((0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__0__KET____DOT__bank_we)
                                            ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[2U] 
                                                << 0x1eU) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[2U] 
                                                  >> 2U))
                                            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_index_mux__DOT__and_gates__BRA__1__KET____DOT__or_result)))),8);
        bufp->chgCData(oldp+243,((0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__1__KET____DOT__bank_we)
                                            ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[2U] 
                                                << 0x1eU) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[2U] 
                                                  >> 2U))
                                            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_index_mux__DOT__and_gates__BRA__1__KET____DOT__or_result)))),8);
        bufp->chgCData(oldp+244,((0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__2__KET____DOT__bank_we)
                                            ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[2U] 
                                                << 0x1eU) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[2U] 
                                                  >> 2U))
                                            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_index_mux__DOT__and_gates__BRA__1__KET____DOT__or_result)))),8);
        bufp->chgCData(oldp+245,((0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__3__KET____DOT__bank_we)
                                            ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[2U] 
                                                << 0x1eU) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[2U] 
                                                  >> 2U))
                                            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_index_mux__DOT__and_gates__BRA__1__KET____DOT__or_result)))),8);
        bufp->chgCData(oldp+246,((0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__we)
                                            ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[2U] 
                                                << 0x1eU) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[2U] 
                                                  >> 2U))
                                            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_index_mux__DOT__and_gates__BRA__1__KET____DOT__or_result)))),8);
        bufp->chgCData(oldp+247,((0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__0__KET____DOT__bank_we)
                                            ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[2U] 
                                                << 0x1eU) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[2U] 
                                                  >> 2U))
                                            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_index_mux__DOT__and_gates__BRA__1__KET____DOT__or_result)))),8);
        bufp->chgCData(oldp+248,((0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__1__KET____DOT__bank_we)
                                            ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[2U] 
                                                << 0x1eU) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[2U] 
                                                  >> 2U))
                                            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_index_mux__DOT__and_gates__BRA__1__KET____DOT__or_result)))),8);
        bufp->chgCData(oldp+249,((0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank_we)
                                            ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[2U] 
                                                << 0x1eU) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[2U] 
                                                  >> 2U))
                                            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_index_mux__DOT__and_gates__BRA__1__KET____DOT__or_result)))),8);
        bufp->chgCData(oldp+250,((0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank_we)
                                            ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[2U] 
                                                << 0x1eU) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[2U] 
                                                  >> 2U))
                                            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_index_mux__DOT__and_gates__BRA__1__KET____DOT__or_result)))),8);
        bufp->chgCData(oldp+251,((0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__we)
                                            ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[2U] 
                                                << 0x1eU) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[2U] 
                                                  >> 2U))
                                            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_index_mux__DOT__and_gates__BRA__1__KET____DOT__or_result)))),8);
        __Vtemp_h68c77d1b__0[0U] = vlSelf->simu_top__DOT__soc__DOT__m0_rdata;
        __Vtemp_h68c77d1b__0[1U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__lookup_rdata)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_word))));
        __Vtemp_h68c77d1b__0[2U] = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__lookup_rdata)) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_word))) 
                                            >> 0x20U));
        bufp->chgWData(oldp+252,(__Vtemp_h68c77d1b__0),96);
        bufp->chgIData(oldp+255,(((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_data_ok_uncached))) 
                                  & vlSelf->simu_top__DOT__soc__DOT__m0_rdata)),32);
        bufp->chgIData(oldp+256,(((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_data_ok_cached))) 
                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_word)),32);
        bufp->chgIData(oldp+257,((((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_data_ok_cached))) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_word) 
                                  | ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_data_ok_uncached))) 
                                     & vlSelf->simu_top__DOT__soc__DOT__m0_rdata))),32);
        __Vtemp_h03351fb9__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_buf_way)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_buf_wdata)) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (1U 
                                                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_buf_wstrb) 
                                                                      << 0x1aU) 
                                                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_buf_way) 
                                                                        << 1U))))))));
        __Vtemp_h03351fb9__0[1U] = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_buf_way)) 
                                              << 0x3eU) 
                                             | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_buf_wdata)) 
                                                 << 0x1eU) 
                                                | (QData)((IData)(
                                                                  (1U 
                                                                   | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_buf_wstrb) 
                                                                       << 0x1aU) 
                                                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_buf_way) 
                                                                         << 1U))))))) 
                                            >> 0x20U));
        __Vtemp_h03351fb9__0[2U] = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__invalidate_ways) 
                                     << 0xcU) | ((0x400U 
                                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_buf_idle)) 
                                                     << 0xaU)) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_buf_index) 
                                                     << 2U) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_buf_bank_num))));
        __Vtemp_h03351fb9__0[3U] = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__invalidate_ways) 
                                    << 3U);
        __Vtemp_h03351fb9__0[4U] = (0x200000U | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_tag_new 
                                                  << 0x19U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_replace_way) 
                                                     << 0x17U) 
                                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_write) 
                                                        << 0x16U) 
                                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_index) 
                                                          << 0xdU)))));
        __Vtemp_h03351fb9__0[5U] = (0xf2000U | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_word 
                                                 << 0x14U) 
                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_replace_way) 
                                                    << 0xeU) 
                                                   | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_tag_new 
                                                      >> 7U))));
        __Vtemp_h03351fb9__0[6U] = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_index) 
                                     << 0x18U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_buf_ptr) 
                                                   << 0x16U) 
                                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_replace_way) 
                                                      << 0x14U) 
                                                     | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_word 
                                                        >> 0xcU))));
        __Vtemp_h03351fb9__0[7U] = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_uncached)) 
                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache_ret_valid));
        bufp->chgWData(oldp+258,(__Vtemp_h03351fb9__0),225);
        __Vtemp_he34d3122__0[0U] = ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_hbe37574e__0))) 
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
                                                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_write)))))))))));
        __Vtemp_he34d3122__0[1U] = ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_hbe37574e__0))) 
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
                                               >> 0x20U)));
        __Vtemp_he34d3122__0[2U] = ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_hbe37574e__0))) 
                                    & ((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_uncached)) 
                                         & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache_ret_valid)) 
                                        << 0xaU) | 
                                       (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_index) 
                                         << 2U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_buf_ptr))));
        bufp->chgWData(oldp+266,(__Vtemp_he34d3122__0),75);
        bufp->chgIData(oldp+269,(((((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_wstrb))
                                     ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_wdata 
                                        >> 0x18U) : 
                                    (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
                                     >> 0x18U)) << 0x18U) 
                                  | ((0xff0000U & (
                                                   ((4U 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_wstrb))
                                                     ? 
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_wdata 
                                                     >> 0x10U)
                                                     : 
                                                    (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
                                                     >> 0x10U)) 
                                                   << 0x10U)) 
                                     | ((0xff00U & 
                                         (((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_wstrb))
                                            ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_wdata 
                                               >> 8U)
                                            : (vlSelf->simu_top__DOT__soc__DOT__m0_rdata 
                                               >> 8U)) 
                                          << 8U)) | 
                                        (0xffU & ((1U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_wstrb))
                                                   ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_wdata
                                                   : vlSelf->simu_top__DOT__soc__DOT__m0_rdata)))))),32);
        bufp->chgCData(oldp+270,((0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__0__KET____DOT__bank_we)
                                            ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[2U] 
                                                << 0x1eU) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[2U] 
                                                  >> 2U))
                                            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_index_mux__DOT__and_gates__BRA__1__KET____DOT__or_result)))),8);
        bufp->chgCData(oldp+271,((0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__1__KET____DOT__bank_we)
                                            ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[2U] 
                                                << 0x1eU) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[2U] 
                                                  >> 2U))
                                            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_index_mux__DOT__and_gates__BRA__1__KET____DOT__or_result)))),8);
        bufp->chgCData(oldp+272,((0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__2__KET____DOT__bank_we)
                                            ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[2U] 
                                                << 0x1eU) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[2U] 
                                                  >> 2U))
                                            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_index_mux__DOT__and_gates__BRA__1__KET____DOT__or_result)))),8);
        bufp->chgCData(oldp+273,((0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__3__KET____DOT__bank_we)
                                            ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[2U] 
                                                << 0x1eU) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[2U] 
                                                  >> 2U))
                                            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_index_mux__DOT__and_gates__BRA__1__KET____DOT__or_result)))),8);
        bufp->chgCData(oldp+274,((0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__we)
                                            ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[2U] 
                                                << 0x1eU) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[2U] 
                                                  >> 2U))
                                            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_index_mux__DOT__and_gates__BRA__1__KET____DOT__or_result)))),8);
        bufp->chgCData(oldp+275,((0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__0__KET____DOT__bank_we)
                                            ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[2U] 
                                                << 0x1eU) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[2U] 
                                                  >> 2U))
                                            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_index_mux__DOT__and_gates__BRA__1__KET____DOT__or_result)))),8);
        bufp->chgCData(oldp+276,((0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__1__KET____DOT__bank_we)
                                            ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[2U] 
                                                << 0x1eU) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[2U] 
                                                  >> 2U))
                                            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_index_mux__DOT__and_gates__BRA__1__KET____DOT__or_result)))),8);
        bufp->chgCData(oldp+277,((0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank_we)
                                            ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[2U] 
                                                << 0x1eU) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[2U] 
                                                  >> 2U))
                                            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_index_mux__DOT__and_gates__BRA__1__KET____DOT__or_result)))),8);
        bufp->chgCData(oldp+278,((0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank_we)
                                            ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[2U] 
                                                << 0x1eU) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[2U] 
                                                  >> 2U))
                                            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_index_mux__DOT__and_gates__BRA__1__KET____DOT__or_result)))),8);
        bufp->chgCData(oldp+279,((0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__we)
                                            ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[2U] 
                                                << 0x1eU) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[2U] 
                                                  >> 2U))
                                            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_index_mux__DOT__and_gates__BRA__1__KET____DOT__or_result)))),8);
        __Vtemp_hae834e39__0[0U] = vlSelf->simu_top__DOT__soc__DOT__m0_rdata;
        __Vtemp_hae834e39__0[1U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__lookup_rdata)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__refill_word))));
        __Vtemp_hae834e39__0[2U] = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__lookup_rdata)) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__refill_word))) 
                                            >> 0x20U));
        bufp->chgWData(oldp+280,(__Vtemp_hae834e39__0),96);
        bufp->chgIData(oldp+283,(((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__refill_data_ok_uncached))) 
                                  & vlSelf->simu_top__DOT__soc__DOT__m0_rdata)),32);
        bufp->chgIData(oldp+284,(((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__refill_data_ok_cached))) 
                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__refill_word)),32);
        bufp->chgIData(oldp+285,((((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__refill_data_ok_cached))) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__refill_word) 
                                  | ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__refill_data_ok_uncached))) 
                                     & vlSelf->simu_top__DOT__soc__DOT__m0_rdata))),32);
        __Vtemp_h2ad9822f__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_buf_way)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_buf_wdata)) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (1U 
                                                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_buf_wstrb) 
                                                                      << 0x1aU) 
                                                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_buf_way) 
                                                                        << 1U))))))));
        __Vtemp_h2ad9822f__0[1U] = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_buf_way)) 
                                              << 0x3eU) 
                                             | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_buf_wdata)) 
                                                 << 0x1eU) 
                                                | (QData)((IData)(
                                                                  (1U 
                                                                   | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_buf_wstrb) 
                                                                       << 0x1aU) 
                                                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_buf_way) 
                                                                         << 1U))))))) 
                                            >> 0x20U));
        __Vtemp_h2ad9822f__0[2U] = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__invalidate_ways) 
                                     << 0xcU) | ((0x400U 
                                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_buf_idle)) 
                                                     << 0xaU)) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_buf_index) 
                                                     << 2U) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_buf_bank_num))));
        __Vtemp_h2ad9822f__0[3U] = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__invalidate_ways) 
                                    << 3U);
        __Vtemp_h2ad9822f__0[4U] = (0x200000U | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_tag_new 
                                                  << 0x19U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_replace_way) 
                                                     << 0x17U) 
                                                    | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_write) 
                                                        << 0x16U) 
                                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_index) 
                                                          << 0xdU)))));
        __Vtemp_h2ad9822f__0[5U] = (0xf2000U | ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__refill_word 
                                                 << 0x14U) 
                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_replace_way) 
                                                    << 0xeU) 
                                                   | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_tag_new 
                                                      >> 7U))));
        __Vtemp_h2ad9822f__0[6U] = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_index) 
                                     << 0x18U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__refill_buf_ptr) 
                                                   << 0x16U) 
                                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_replace_way) 
                                                      << 0x14U) 
                                                     | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__refill_word 
                                                        >> 0xcU))));
        __Vtemp_h2ad9822f__0[7U] = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_uncached)) 
                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache_ret_valid));
        bufp->chgWData(oldp+286,(__Vtemp_h2ad9822f__0),225);
        __Vtemp_h1f138f54__0[0U] = ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_hbe37574e__0))) 
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
                                                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_write)))))))))));
        __Vtemp_h1f138f54__0[1U] = ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_hbe37574e__0))) 
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
                                               >> 0x20U)));
        __Vtemp_h1f138f54__0[2U] = ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_hbe37574e__0))) 
                                    & ((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_uncached)) 
                                         & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache_ret_valid)) 
                                        << 0xaU) | 
                                       (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_index) 
                                         << 2U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__refill_buf_ptr))));
        bufp->chgWData(oldp+294,(__Vtemp_h1f138f54__0),75);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[7U]))) {
        bufp->chgIData(oldp+297,(vlSelf->simu_top__DOT__soc__DOT__m0_rdata),32);
        bufp->chgIData(oldp+298,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__rdata_mux__DOT__and_gates__BRA__2__KET____DOT__or_result),32);
        bufp->chgIData(oldp+299,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData),32);
        bufp->chgCData(oldp+300,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[0U] 
                                        >> 1U))),2);
        bufp->chgBit(oldp+301,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[0U])));
        bufp->chgBit(oldp+302,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[2U] 
                                      >> 0xaU))));
        bufp->chgCData(oldp+303,((0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[2U] 
                                           >> 2U))),8);
        bufp->chgCData(oldp+304,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[1U] 
                                  >> 0x1eU)),2);
        bufp->chgCData(oldp+305,((3U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[2U])),2);
        bufp->chgIData(oldp+306,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[1U] 
                                   << 2U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[0U] 
                                             >> 0x1eU))),32);
        bufp->chgCData(oldp+307,((0xfU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[0U] 
                                          >> 0x1aU))),4);
        bufp->chgCData(oldp+308,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[0U] 
                                        >> 0x18U))),2);
        bufp->chgIData(oldp+309,((0xfffffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[0U] 
                                              >> 3U))),20);
        bufp->chgBit(oldp+310,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[0U] 
                                      >> 0x17U))));
        bufp->chgIData(oldp+311,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_word),32);
        bufp->chgBit(oldp+312,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__we));
        bufp->chgBit(oldp+313,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__0__KET____DOT__bank_we));
        bufp->chgCData(oldp+314,((0xfU & ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__0__KET____DOT__bank_we))) 
                                          & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[0U] 
                                              << 6U) 
                                             | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[0U] 
                                                >> 0x1aU))))),4);
        bufp->chgBit(oldp+315,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__1__KET____DOT__bank_we));
        bufp->chgCData(oldp+316,((0xfU & ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__1__KET____DOT__bank_we))) 
                                          & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[0U] 
                                              << 6U) 
                                             | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[0U] 
                                                >> 0x1aU))))),4);
        bufp->chgBit(oldp+317,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__2__KET____DOT__bank_we));
        bufp->chgCData(oldp+318,((0xfU & ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__2__KET____DOT__bank_we))) 
                                          & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[0U] 
                                              << 6U) 
                                             | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[0U] 
                                                >> 0x1aU))))),4);
        bufp->chgBit(oldp+319,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__3__KET____DOT__bank_we));
        bufp->chgCData(oldp+320,((0xfU & ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__3__KET____DOT__bank_we))) 
                                          & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[0U] 
                                              << 6U) 
                                             | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[0U] 
                                                >> 0x1aU))))),4);
        bufp->chgIData(oldp+321,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____Vcellinp__way__BRA__0__KET____DOT__tag_v__din),21);
        bufp->chgBit(oldp+322,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__we));
        bufp->chgBit(oldp+323,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__0__KET____DOT__bank_we));
        bufp->chgCData(oldp+324,((0xfU & ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__0__KET____DOT__bank_we))) 
                                          & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[0U] 
                                              << 6U) 
                                             | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[0U] 
                                                >> 0x1aU))))),4);
        bufp->chgBit(oldp+325,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__1__KET____DOT__bank_we));
        bufp->chgCData(oldp+326,((0xfU & ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__1__KET____DOT__bank_we))) 
                                          & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[0U] 
                                              << 6U) 
                                             | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[0U] 
                                                >> 0x1aU))))),4);
        bufp->chgBit(oldp+327,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank_we));
        bufp->chgCData(oldp+328,((0xfU & ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank_we))) 
                                          & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[0U] 
                                              << 6U) 
                                             | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[0U] 
                                                >> 0x1aU))))),4);
        bufp->chgBit(oldp+329,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank_we));
        bufp->chgCData(oldp+330,((0xfU & ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank_we))) 
                                          & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[0U] 
                                              << 6U) 
                                             | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[0U] 
                                                >> 0x1aU))))),4);
        bufp->chgWData(oldp+331,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result),75);
        bufp->chgCData(oldp+334,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[0U] 
                                        >> 1U))),2);
        bufp->chgBit(oldp+335,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[0U])));
        bufp->chgBit(oldp+336,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[2U] 
                                      >> 0xaU))));
        bufp->chgCData(oldp+337,((0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[2U] 
                                           >> 2U))),8);
        bufp->chgCData(oldp+338,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[1U] 
                                  >> 0x1eU)),2);
        bufp->chgCData(oldp+339,((3U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[2U])),2);
        bufp->chgIData(oldp+340,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[1U] 
                                   << 2U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[0U] 
                                             >> 0x1eU))),32);
        bufp->chgCData(oldp+341,((0xfU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[0U] 
                                          >> 0x1aU))),4);
        bufp->chgCData(oldp+342,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[0U] 
                                        >> 0x18U))),2);
        bufp->chgIData(oldp+343,((0xfffffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[0U] 
                                              >> 3U))),20);
        bufp->chgBit(oldp+344,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[0U] 
                                      >> 0x17U))));
        bufp->chgIData(oldp+345,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__refill_word),32);
        bufp->chgBit(oldp+346,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__we));
        bufp->chgBit(oldp+347,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__0__KET____DOT__bank_we));
        bufp->chgCData(oldp+348,((0xfU & ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__0__KET____DOT__bank_we))) 
                                          & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[0U] 
                                              << 6U) 
                                             | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[0U] 
                                                >> 0x1aU))))),4);
        bufp->chgBit(oldp+349,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__1__KET____DOT__bank_we));
        bufp->chgCData(oldp+350,((0xfU & ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__1__KET____DOT__bank_we))) 
                                          & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[0U] 
                                              << 6U) 
                                             | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[0U] 
                                                >> 0x1aU))))),4);
        bufp->chgBit(oldp+351,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__2__KET____DOT__bank_we));
        bufp->chgCData(oldp+352,((0xfU & ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__2__KET____DOT__bank_we))) 
                                          & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[0U] 
                                              << 6U) 
                                             | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[0U] 
                                                >> 0x1aU))))),4);
        bufp->chgBit(oldp+353,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__3__KET____DOT__bank_we));
        bufp->chgCData(oldp+354,((0xfU & ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__3__KET____DOT__bank_we))) 
                                          & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[0U] 
                                              << 6U) 
                                             | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[0U] 
                                                >> 0x1aU))))),4);
        bufp->chgIData(oldp+355,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____Vcellinp__way__BRA__0__KET____DOT__tag_v__din),21);
        bufp->chgBit(oldp+356,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__we));
        bufp->chgBit(oldp+357,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__0__KET____DOT__bank_we));
        bufp->chgCData(oldp+358,((0xfU & ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__0__KET____DOT__bank_we))) 
                                          & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[0U] 
                                              << 6U) 
                                             | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[0U] 
                                                >> 0x1aU))))),4);
        bufp->chgBit(oldp+359,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__1__KET____DOT__bank_we));
        bufp->chgCData(oldp+360,((0xfU & ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__1__KET____DOT__bank_we))) 
                                          & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[0U] 
                                              << 6U) 
                                             | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[0U] 
                                                >> 0x1aU))))),4);
        bufp->chgBit(oldp+361,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank_we));
        bufp->chgCData(oldp+362,((0xfU & ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank_we))) 
                                          & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[0U] 
                                              << 6U) 
                                             | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[0U] 
                                                >> 0x1aU))))),4);
        bufp->chgBit(oldp+363,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank_we));
        bufp->chgCData(oldp+364,((0xfU & ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank_we))) 
                                          & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[0U] 
                                              << 6U) 
                                             | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result[0U] 
                                                >> 0x1aU))))),4);
        bufp->chgWData(oldp+365,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result),75);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgBit(oldp+368,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__req_mem));
        bufp->chgBit(oldp+369,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_allow_in));
        bufp->chgBit(oldp+370,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_valid_in));
        bufp->chgCData(oldp+371,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_excode),6);
        bufp->chgBit(oldp+372,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_is_exc));
        bufp->chgIData(oldp+373,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_csrmsgin[2U] 
                                   << 6U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_csrmsgin[1U] 
                                             >> 0x1aU))),32);
        bufp->chgIData(oldp+374,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_csrmsgin[1U] 
                                   << 6U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_csrmsgin[0U] 
                                             >> 0x1aU))),32);
        bufp->chgCData(oldp+375,((0x3fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_csrmsgin[0U] 
                                           >> 0x14U))),6);
        bufp->chgSData(oldp+376,((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_csrmsgin[0U] 
                                            >> 0xbU))),9);
        bufp->chgBit(oldp+377,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_csrmsgin[0U] 
                                      >> 0xaU))));
        bufp->chgSData(oldp+378,((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_csrmsgin[0U])),10);
        bufp->chgBit(oldp+379,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req));
        bufp->chgBit(oldp+380,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__lookup_to_lookup));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+381,(vlSelf->cpu_axi_interface__DOT__do_req));
        bufp->chgBit(oldp+382,(vlSelf->cpu_axi_interface__DOT__do_req_or));
        bufp->chgBit(oldp+383,(vlSelf->cpu_axi_interface__DOT__do_wr_r));
        bufp->chgCData(oldp+384,(vlSelf->cpu_axi_interface__DOT__do_size_r),2);
        bufp->chgIData(oldp+385,(vlSelf->cpu_axi_interface__DOT__do_addr_r),32);
        bufp->chgIData(oldp+386,(vlSelf->cpu_axi_interface__DOT__do_wdata_r),32);
        bufp->chgCData(oldp+387,(vlSelf->cpu_axi_interface__DOT__do_wstrb_r),4);
        bufp->chgBit(oldp+388,(vlSelf->cpu_axi_interface__DOT__addr_rcv));
        bufp->chgBit(oldp+389,(vlSelf->cpu_axi_interface__DOT__wdata_rcv));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgIData(oldp+390,((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__wr_mux__DOT__and_gates__BRA__1__KET____DOT__or_result 
                                          >> 0x11U))),32);
        bufp->chgCData(oldp+391,((0xfU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__wr_mux__DOT__and_gates__BRA__1__KET____DOT__or_result 
                                                  >> 4U)))),4);
        bufp->chgCData(oldp+392,((7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__wr_mux__DOT__and_gates__BRA__1__KET____DOT__or_result 
                                                >> 0xeU)))),3);
        bufp->chgCData(oldp+393,((3U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__wr_mux__DOT__and_gates__BRA__1__KET____DOT__or_result 
                                                >> 0xcU)))),2);
        bufp->chgBit(oldp+394,(((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__state)) 
                                | (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__state)))));
        bufp->chgIData(oldp+395,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_wdata),32);
        bufp->chgCData(oldp+396,((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__wr_mux__DOT__and_gates__BRA__1__KET____DOT__or_result))),4);
        bufp->chgBit(oldp+397,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__w_last));
        bufp->chgBit(oldp+398,(vlSelf->simu_top__DOT__soc__DOT__cpu_wvalid));
        bufp->chgBit(oldp+399,(vlSelf->simu_top__DOT__soc__DOT__m0_rlast));
        bufp->chgBit(oldp+400,(vlSelf->simu_top__DOT__soc__DOT__m0_awready));
        bufp->chgBit(oldp+401,(vlSelf->simu_top__DOT__soc__DOT__m0_wready));
        bufp->chgBit(oldp+402,(vlSelf->simu_top__DOT__soc__DOT__m0_bvalid));
        bufp->chgBit(oldp+403,(vlSelf->simu_top__DOT__soc__DOT__m0_rvalid));
        bufp->chgBit(oldp+404,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid)))));
        bufp->chgBit(oldp+405,(vlSelf->simu_top__DOT__soc__DOT__s0_wready));
        bufp->chgCData(oldp+406,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_data),4);
        bufp->chgBit(oldp+407,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid));
        bufp->chgBit(oldp+408,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid)))));
        bufp->chgCData(oldp+409,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rid),4);
        bufp->chgBit(oldp+410,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rlast));
        bufp->chgBit(oldp+411,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rvalid));
        bufp->chgBit(oldp+412,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid)))));
        bufp->chgBit(oldp+413,(vlSelf->simu_top__DOT__soc__DOT__conf_s_wready));
        bufp->chgCData(oldp+414,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_data),4);
        bufp->chgBit(oldp+415,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid));
        bufp->chgBit(oldp+416,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid)))));
        bufp->chgCData(oldp+417,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rid),4);
        bufp->chgIData(oldp+418,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_rdata_reg),32);
        bufp->chgBit(oldp+419,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rlast));
        bufp->chgBit(oldp+420,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rvalid));
        bufp->chgBit(oldp+421,(vlSelf->simu_top__DOT__soc__DOT__apb_s_awready));
        bufp->chgBit(oldp+422,(vlSelf->simu_top__DOT__soc__DOT__apb_s_wready));
        bufp->chgCData(oldp+423,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_w_id),4);
        bufp->chgBit(oldp+424,(vlSelf->simu_top__DOT__soc__DOT__apb_s_bvalid));
        bufp->chgBit(oldp+425,(vlSelf->simu_top__DOT__soc__DOT__apb_s_arready));
        bufp->chgCData(oldp+426,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_r_id),4);
        bufp->chgIData(oldp+427,(((0U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb)))
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
        bufp->chgBit(oldp+428,(vlSelf->simu_top__DOT__soc__DOT__apb_s_rlast));
        bufp->chgBit(oldp+429,(vlSelf->simu_top__DOT__soc__DOT__apb_s_rvalid));
        bufp->chgIData(oldp+430,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr),32);
        bufp->chgIData(oldp+431,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr),32);
        bufp->chgIData(oldp+432,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata),32);
        bufp->chgCData(oldp+433,(((IData)(vlSelf->simu_top__DOT__soc__DOT__uart0_int) 
                                  << 1U)),8);
        bufp->chgBit(oldp+434,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                      >> 1U))));
        bufp->chgBit(oldp+435,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr))));
        bufp->chgBit(oldp+436,(vlSelf->simu_top__DOT__soc__DOT__uart0_int));
        bufp->chgBit(oldp+437,((IData)(((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                          >> 4U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__infrared)) 
                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_out)))));
        bufp->chgBit(oldp+438,(vlSelf->simu_top__DOT__soc__DOT__uart0_txd_oe));
        bufp->chgBit(oldp+439,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_reg) 
                                      ^ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                                         >> 3U)))));
        bufp->chgBit(oldp+440,((1U & (~ (IData)(vlSelf->uart_rx__en0)))));
        bufp->chgBit(oldp+441,(((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_ack))));
        bufp->chgIData(oldp+442,(((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)
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
        bufp->chgBit(oldp+443,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant));
        bufp->chgBit(oldp+444,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ));
        bufp->chgBit(oldp+445,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_ack))));
        bufp->chgBit(oldp+446,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr));
        bufp->chgBit(oldp+447,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu));
        bufp->chgBit(oldp+448,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu));
        bufp->chgIData(oldp+449,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr),20);
        bufp->chgCData(oldp+450,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datai_cpu),8);
        bufp->chgCData(oldp+451,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datao_cpu),8);
        bufp->chgBit(oldp+452,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_word_trans_cpu));
        bufp->chgIData(oldp+453,(((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)
                                   ? 0U : ((0U == (0x3fU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr 
                                                      >> 0xeU)))
                                            ? 0U : 
                                           (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__REG_DAT_T 
                                            >> 8U)))),24);
        bufp->chgIData(oldp+454,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_high_24b_wr),24);
        bufp->chgBit(oldp+455,((0U == (0x3fU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr 
                                                >> 0xeU)))));
        bufp->chgBit(oldp+456,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_ack));
        bufp->chgBit(oldp+457,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_rw));
        bufp->chgBit(oldp+458,(((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_psel) 
                                & (0U == (0xfc000U 
                                          & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)))));
        bufp->chgIData(oldp+459,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr),20);
        bufp->chgCData(oldp+460,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_datai),8);
        bufp->chgCData(oldp+461,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_datao),8);
        bufp->chgBit(oldp+462,((0U != (0x3fU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr 
                                                >> 0xeU)))));
        bufp->chgBit(oldp+463,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_ack));
        bufp->chgBit(oldp+464,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel));
        bufp->chgIData(oldp+465,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_datai),32);
        bufp->chgIData(oldp+466,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__REG_DAT_T),32);
        bufp->chgBit(oldp+467,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_ack));
        bufp->chgBit(oldp+468,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_psel));
        bufp->chgBit(oldp+469,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_enab));
        bufp->chgIData(oldp+470,((0xffffffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)
                                                ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_wdata_dma 
                                                   >> 8U)
                                                : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_high_24b_wr))),24);
        bufp->chgIData(oldp+471,(((0U == (0x3fU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr 
                                                   >> 0xeU)))
                                   ? 0U : (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__REG_DAT_T 
                                           >> 8U))),24);
        bufp->chgCData(oldp+472,((0xffU & ((0U == (0x3fU 
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
        bufp->chgBit(oldp+473,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)))));
        bufp->chgBit(oldp+474,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_ready));
        bufp->chgBit(oldp+475,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd));
        bufp->chgCData(oldp+476,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm),4);
        bufp->chgCData(oldp+477,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb),4);
        bufp->chgCData(oldp+478,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb),4);
        bufp->chgIData(oldp+479,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32),32);
        bufp->chgIData(oldp+480,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32),32);
        bufp->chgCData(oldp+481,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count),3);
        bufp->chgCData(oldp+482,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size),3);
        bufp->chgCData(oldp+483,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_wr_size),3);
        bufp->chgBit(oldp+484,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_int));
        bufp->chgSData(oldp+485,((0x7ffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)),11);
        bufp->chgCData(oldp+486,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r0),4);
        bufp->chgCData(oldp+487,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r1),4);
        bufp->chgCData(oldp+488,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_type_r1),2);
        bufp->chgCData(oldp+489,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_type_r2),2);
        bufp->chgSData(oldp+490,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_c),14);
        bufp->chgIData(oldp+491,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r),25);
        bufp->chgIData(oldp+492,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_op_num),32);
        bufp->chgIData(oldp+493,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter),32);
        bufp->chgIData(oldp+494,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0),32);
        bufp->chgIData(oldp+495,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map1),32);
        bufp->chgIData(oldp+496,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_rdy_map0),32);
        bufp->chgIData(oldp+497,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_rdy_map1),32);
        bufp->chgIData(oldp+498,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command),32);
        bufp->chgSData(oldp+499,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing),16);
        bufp->chgQData(oldp+500,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__addr_in_die),38);
        bufp->chgCData(oldp+502,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE),5);
        bufp->chgIData(oldp+503,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM),32);
        bufp->chgSData(oldp+504,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT),14);
        bufp->chgSData(oldp+505,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT),14);
        bufp->chgBit(oldp+506,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_clr_ack));
        bufp->chgBit(oldp+507,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE));
        bufp->chgBit(oldp+508,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_));
        bufp->chgSData(oldp+509,((0x3fffU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                             >> 0x10U))),14);
        bufp->chgCData(oldp+510,((7U & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+511,((0xfU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                          >> 8U))),4);
        bufp->chgBit(oldp+512,((1U & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                      >> 8U))));
        bufp->chgBit(oldp+513,((1U & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                      >> 9U))));
        bufp->chgBit(oldp+514,((1U & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                      >> 0xdU))));
        bufp->chgBit(oldp+515,(((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
                                & (0x40U == (0x7ffU 
                                             & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)))));
        bufp->chgBit(oldp+516,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY));
        bufp->chgBit(oldp+517,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT0));
        bufp->chgBit(oldp+518,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT1));
        bufp->chgBit(oldp+519,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT2));
        bufp->chgBit(oldp+520,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT3));
        bufp->chgBit(oldp+521,(((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
                                & (0x10U == (0x7ffU 
                                             & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)))));
        bufp->chgBit(oldp+522,(((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
                                & (0x14U == (0x7ffU 
                                             & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)))));
        bufp->chgBit(oldp+523,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT6));
        bufp->chgBit(oldp+524,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT7));
        bufp->chgBit(oldp+525,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT8));
        bufp->chgBit(oldp+526,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT9));
        bufp->chgBit(oldp+527,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT10));
        bufp->chgBit(oldp+528,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT11));
        bufp->chgBit(oldp+529,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT));
        bufp->chgBit(oldp+530,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_cmd_valid));
        bufp->chgCData(oldp+531,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status),8);
        bufp->chgCData(oldp+532,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_number),2);
        bufp->chgQData(oldp+533,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM),48);
        bufp->chgIData(oldp+535,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD),32);
        bufp->chgCData(oldp+536,((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT____VdfgTmp_he5337c8c__0) 
                                   << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT____VdfgTmp_hda1c3bf2__0) 
                                              << 2U) 
                                             | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT____VdfgTmp_hdb5c27a8__0) 
                                                 << 1U) 
                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT____VdfgTmp_h194fa2e7__0))))),4);
        bufp->chgCData(oldp+537,((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT____VdfgTmp_hea0d93a3__0) 
                                   << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT____VdfgTmp_h2fe3549b__0) 
                                              << 2U) 
                                             | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT____VdfgTmp_h559fe0c2__0) 
                                                 << 1U) 
                                                | (1U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r1)))))),4);
        bufp->chgCData(oldp+538,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer),2);
        bufp->chgCData(oldp+539,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT),3);
        bufp->chgCData(oldp+540,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM),8);
        bufp->chgCData(oldp+541,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM),8);
        bufp->chgCData(oldp+542,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND),8);
        bufp->chgCData(oldp+543,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE),5);
        bufp->chgCData(oldp+544,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM),3);
        bufp->chgSData(oldp+545,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count),14);
        bufp->chgQData(oldp+546,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR),38);
        bufp->chgIData(oldp+548,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_I_WR),32);
        bufp->chgBit(oldp+549,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO));
        bufp->chgBit(oldp+550,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ACK));
        bufp->chgBit(oldp+551,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE));
        bufp->chgBit(oldp+552,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ERASE_SERIAL));
        bufp->chgBit(oldp+553,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half));
        bufp->chgBit(oldp+554,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob));
        bufp->chgCData(oldp+555,((0xffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)),8);
        bufp->chgBit(oldp+556,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we));
        bufp->chgBit(oldp+557,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__re));
        bufp->chgBit(oldp+558,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__rx_en));
        bufp->chgBit(oldp+559,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__tx2rx_en));
        bufp->chgBit(oldp+560,(vlSelf->uart_rx__en0));
        bufp->chgCData(oldp+561,((7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)),3);
        bufp->chgBit(oldp+562,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__enable));
        bufp->chgBit(oldp+563,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__srx_pad));
        bufp->chgCData(oldp+564,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier),4);
        bufp->chgCData(oldp+565,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir),4);
        bufp->chgCData(oldp+566,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fcr),2);
        bufp->chgCData(oldp+567,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr),5);
        bufp->chgBit(oldp+568,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__infrared));
        bufp->chgBit(oldp+569,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_pol));
        bufp->chgCData(oldp+570,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr),8);
        bufp->chgCData(oldp+571,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr),8);
        bufp->chgIData(oldp+572,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl),24);
        bufp->chgBit(oldp+573,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__start_dlc));
        bufp->chgBit(oldp+574,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask_d));
        bufp->chgBit(oldp+575,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset));
        bufp->chgSData(oldp+576,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc),16);
        bufp->chgCData(oldp+577,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__trigger_level),4);
        bufp->chgBit(oldp+578,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_reset));
        bufp->chgBit(oldp+579,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tx_reset));
        bufp->chgBit(oldp+580,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                                      >> 7U))));
        bufp->chgBit(oldp+581,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                                      >> 2U))));
        bufp->chgBit(oldp+582,((1U & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                                         >> 2U)))));
        bufp->chgBit(oldp+583,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_reg));
        bufp->chgBit(oldp+584,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_en_reg));
        bufp->chgCData(oldp+585,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg),8);
        bufp->chgCData(oldp+586,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fi_di_reg),8);
        bufp->chgCData(oldp+587,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count),8);
        bufp->chgCData(oldp+588,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__repeat_reg),3);
        bufp->chgBit(oldp+589,((0U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))));
        bufp->chgBit(oldp+590,((1U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))));
        bufp->chgBit(oldp+591,((2U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))));
        bufp->chgBit(oldp+592,((3U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))));
        bufp->chgBit(oldp+593,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tx_en));
        bufp->chgBit(oldp+594,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                                      >> 3U))));
        bufp->chgBit(oldp+595,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                      >> 4U))));
        bufp->chgBit(oldp+596,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____VdfgTmp_h84138141__0) 
                                      >> 3U))));
        bufp->chgBit(oldp+597,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____VdfgTmp_h84138141__0) 
                                      >> 2U))));
        bufp->chgBit(oldp+598,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____VdfgTmp_h84138141__0) 
                                      >> 1U))));
        bufp->chgBit(oldp+599,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____VdfgTmp_h84138141__0))));
        bufp->chgCData(oldp+600,((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7r) 
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
        bufp->chgBit(oldp+601,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0));
        bufp->chgBit(oldp+602,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_overrun));
        bufp->chgBit(oldp+603,((1U & ((IData)(vlSelf->__VdfgTmp_hcd04e225__0) 
                                      >> 1U))));
        bufp->chgBit(oldp+604,((1U & (IData)(vlSelf->__VdfgTmp_hcd04e225__0))));
        bufp->chgBit(oldp+605,((1U & ((IData)(vlSelf->__VdfgTmp_hcd04e225__0) 
                                      >> 2U))));
        bufp->chgBit(oldp+606,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5));
        bufp->chgBit(oldp+607,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6));
        bufp->chgBit(oldp+608,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7));
        bufp->chgBit(oldp+609,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0r));
        bufp->chgBit(oldp+610,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr1r));
        bufp->chgBit(oldp+611,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr2r));
        bufp->chgBit(oldp+612,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr3r));
        bufp->chgBit(oldp+613,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr4r));
        bufp->chgBit(oldp+614,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5r));
        bufp->chgBit(oldp+615,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6r));
        bufp->chgBit(oldp+616,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7r));
        bufp->chgBit(oldp+617,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask));
        bufp->chgBit(oldp+618,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int));
        bufp->chgBit(oldp+619,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int));
        bufp->chgBit(oldp+620,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int));
        bufp->chgBit(oldp+621,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int));
        bufp->chgBit(oldp+622,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int));
        bufp->chgBit(oldp+623,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_push));
        bufp->chgBit(oldp+624,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop));
        bufp->chgSData(oldp+625,((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__data8_out) 
                                   << 3U) | (IData)(vlSelf->__VdfgTmp_hcd04e225__0))),11);
        bufp->chgBit(oldp+626,((0U != (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
        bufp->chgCData(oldp+627,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count),5);
        bufp->chgCData(oldp+628,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count),5);
        bufp->chgCData(oldp+629,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate),3);
        bufp->chgCData(oldp+630,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate),4);
        bufp->chgSData(oldp+631,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t),10);
        bufp->chgBit(oldp+632,((1U & (~ (IData)((0U 
                                                 != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt)))))));
        bufp->chgCData(oldp+633,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt),8);
        bufp->chgCData(oldp+634,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value),8);
        bufp->chgBit(oldp+635,((1U & ((~ (IData)(vlSelf->uart_rx__en0)) 
                                      | ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate)) 
                                         & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error)) 
                                            | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error) 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT____VdfgTmp_hd44064a5__0))))))));
        bufp->chgBit(oldp+636,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__max_repeat_time));
        bufp->chgBit(oldp+637,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_out));
        bufp->chgBit(oldp+638,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_in));
        bufp->chgBit(oldp+639,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_push_pulse));
        bufp->chgBit(oldp+640,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask_condition));
        bufp->chgBit(oldp+641,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir_read));
        bufp->chgBit(oldp+642,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr_read));
        bufp->chgBit(oldp+643,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fifo_read));
        bufp->chgCData(oldp+644,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__delayed_modem_signals),4);
        bufp->chgBit(oldp+645,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0_d));
        bufp->chgBit(oldp+646,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr1_d));
        bufp->chgBit(oldp+647,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr2_d));
        bufp->chgBit(oldp+648,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr3_d));
        bufp->chgBit(oldp+649,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr4_d));
        bufp->chgBit(oldp+650,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5_d));
        bufp->chgBit(oldp+651,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6_d));
        bufp->chgBit(oldp+652,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7_d));
        bufp->chgSData(oldp+653,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_cnt),9);
        bufp->chgSData(oldp+654,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_next),9);
        bufp->chgBit(oldp+655,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_cnt) 
                                       ^ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_next)) 
                                      >> 8U))));
        bufp->chgBit(oldp+656,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_d));
        bufp->chgBit(oldp+657,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_d));
        bufp->chgBit(oldp+658,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_d));
        bufp->chgBit(oldp+659,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_d));
        bufp->chgBit(oldp+660,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_d));
        bufp->chgBit(oldp+661,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_d)) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int))));
        bufp->chgBit(oldp+662,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_d)) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int))));
        bufp->chgBit(oldp+663,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_d)) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int))));
        bufp->chgBit(oldp+664,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_d)) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int))));
        bufp->chgBit(oldp+665,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_d)) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int))));
        bufp->chgBit(oldp+666,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_pnd));
        bufp->chgBit(oldp+667,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_pnd));
        bufp->chgBit(oldp+668,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_pnd));
        bufp->chgBit(oldp+669,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_pnd));
        bufp->chgBit(oldp+670,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_pnd));
        bufp->chgBit(oldp+671,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__d1_fifo_read));
        bufp->chgBit(oldp+672,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__i_uart_sync_flops__DOT__flop_0));
        bufp->chgBit(oldp+673,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____Vcellinp__receiver__enable));
        bufp->chgCData(oldp+674,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16),4);
        bufp->chgCData(oldp+675,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rbit_counter),3);
        bufp->chgCData(oldp+676,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift),8);
        bufp->chgBit(oldp+677,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity));
        bufp->chgBit(oldp+678,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_error));
        bufp->chgBit(oldp+679,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rframing_error));
        bufp->chgBit(oldp+680,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rbit_in));
        bufp->chgBit(oldp+681,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_xor));
        bufp->chgCData(oldp+682,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b),8);
        bufp->chgBit(oldp+683,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push_q));
        bufp->chgSData(oldp+684,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_data_in),11);
        bufp->chgBit(oldp+685,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push));
        bufp->chgBit(oldp+686,((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b))));
        bufp->chgBit(oldp+687,((7U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16))));
        bufp->chgBit(oldp+688,((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16))));
        bufp->chgBit(oldp+689,((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16))));
        bufp->chgCData(oldp+690,((0xfU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16) 
                                          - (IData)(1U)))),4);
        bufp->chgSData(oldp+691,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value),10);
        bufp->chgCData(oldp+692,((0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value) 
                                           >> 2U))),8);
        bufp->chgCData(oldp+693,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__data8_out),8);
        bufp->chgCData(oldp+694,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
        bufp->chgCData(oldp+695,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
        bufp->chgCData(oldp+696,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
        bufp->chgCData(oldp+697,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
        bufp->chgCData(oldp+698,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
        bufp->chgCData(oldp+699,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
        bufp->chgCData(oldp+700,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
        bufp->chgCData(oldp+701,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
        bufp->chgCData(oldp+702,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
        bufp->chgCData(oldp+703,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
        bufp->chgCData(oldp+704,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
        bufp->chgCData(oldp+705,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
        bufp->chgCData(oldp+706,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
        bufp->chgCData(oldp+707,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
        bufp->chgCData(oldp+708,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
        bufp->chgCData(oldp+709,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
        bufp->chgCData(oldp+710,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
        bufp->chgCData(oldp+711,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
        bufp->chgCData(oldp+712,((0xfU & ((IData)(1U) 
                                          + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
        bufp->chgCData(oldp+713,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0U]),3);
        bufp->chgCData(oldp+714,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [1U]),3);
        bufp->chgCData(oldp+715,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [2U]),3);
        bufp->chgCData(oldp+716,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [3U]),3);
        bufp->chgCData(oldp+717,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [4U]),3);
        bufp->chgCData(oldp+718,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [5U]),3);
        bufp->chgCData(oldp+719,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [6U]),3);
        bufp->chgCData(oldp+720,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [7U]),3);
        bufp->chgCData(oldp+721,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [8U]),3);
        bufp->chgCData(oldp+722,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [9U]),3);
        bufp->chgCData(oldp+723,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0xaU]),3);
        bufp->chgCData(oldp+724,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0xbU]),3);
        bufp->chgCData(oldp+725,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0xcU]),3);
        bufp->chgCData(oldp+726,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0xdU]),3);
        bufp->chgCData(oldp+727,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0xeU]),3);
        bufp->chgCData(oldp+728,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0xfU]),3);
        bufp->chgCData(oldp+729,((0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_data_in) 
                                           >> 3U))),8);
        bufp->chgCData(oldp+730,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
        bufp->chgCData(oldp+731,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
        bufp->chgCData(oldp+732,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
        bufp->chgCData(oldp+733,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
        bufp->chgCData(oldp+734,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
        bufp->chgCData(oldp+735,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
        bufp->chgCData(oldp+736,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
        bufp->chgCData(oldp+737,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
        bufp->chgCData(oldp+738,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
        bufp->chgCData(oldp+739,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
        bufp->chgCData(oldp+740,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
        bufp->chgCData(oldp+741,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
        bufp->chgCData(oldp+742,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
        bufp->chgCData(oldp+743,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
        bufp->chgCData(oldp+744,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
        bufp->chgCData(oldp+745,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
        bufp->chgBit(oldp+746,(((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__enable) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tx_en))));
        bufp->chgCData(oldp+747,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter),5);
        bufp->chgCData(oldp+748,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter),3);
        bufp->chgCData(oldp+749,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__shift_out),7);
        bufp->chgBit(oldp+750,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp));
        bufp->chgBit(oldp+751,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor));
        bufp->chgBit(oldp+752,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_pop));
        bufp->chgBit(oldp+753,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_out));
        bufp->chgBit(oldp+754,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error));
        bufp->chgCData(oldp+755,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time),3);
        bufp->chgCData(oldp+756,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_out),8);
        bufp->chgBit(oldp+757,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_overrun));
        bufp->chgCData(oldp+758,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_bak),8);
        bufp->chgCData(oldp+759,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
        bufp->chgCData(oldp+760,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
        bufp->chgCData(oldp+761,((0xfU & ((IData)(1U) 
                                          + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
        bufp->chgCData(oldp+762,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
        bufp->chgCData(oldp+763,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
        bufp->chgCData(oldp+764,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
        bufp->chgCData(oldp+765,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
        bufp->chgCData(oldp+766,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
        bufp->chgCData(oldp+767,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
        bufp->chgCData(oldp+768,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
        bufp->chgCData(oldp+769,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
        bufp->chgCData(oldp+770,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
        bufp->chgCData(oldp+771,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
        bufp->chgCData(oldp+772,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
        bufp->chgCData(oldp+773,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
        bufp->chgCData(oldp+774,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
        bufp->chgCData(oldp+775,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
        bufp->chgCData(oldp+776,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
        bufp->chgCData(oldp+777,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
        bufp->chgCData(oldp+778,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit),5);
        bufp->chgCData(oldp+779,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit),5);
        bufp->chgCData(oldp+780,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit),5);
        bufp->chgCData(oldp+781,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready),5);
        bufp->chgCData(oldp+782,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready),5);
        bufp->chgCData(oldp+783,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid),5);
        bufp->chgCData(oldp+784,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready),5);
        bufp->chgCData(oldp+785,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast),5);
        bufp->chgCData(oldp+786,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid),5);
        bufp->chgCData(oldp+787,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[0]),4);
        bufp->chgCData(oldp+788,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[1]),4);
        bufp->chgCData(oldp+789,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[2]),4);
        bufp->chgCData(oldp+790,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[3]),4);
        bufp->chgCData(oldp+791,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[4]),4);
        bufp->chgCData(oldp+792,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[0]),4);
        bufp->chgCData(oldp+793,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[1]),4);
        bufp->chgCData(oldp+794,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[2]),4);
        bufp->chgCData(oldp+795,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[3]),4);
        bufp->chgCData(oldp+796,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[4]),4);
        bufp->chgCData(oldp+797,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_0),3);
        bufp->chgCData(oldp+798,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_1),3);
        bufp->chgCData(oldp+799,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__bvalid_group_0),3);
        bufp->chgCData(oldp+800,((((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_bvalid) 
                                   << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid))),3);
        bufp->chgCData(oldp+801,((((IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_rvalid) 
                                   << 2U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rvalid) 
                                              << 1U) 
                                             | (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rvalid)))),3);
        bufp->chgCData(oldp+802,((((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rvalid) 
                                   << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rvalid))),3);
        bufp->chgBit(oldp+803,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty));
        bufp->chgBit(oldp+804,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full));
        bufp->chgBit(oldp+805,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_empty));
        bufp->chgBit(oldp+806,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full));
        bufp->chgCData(oldp+807,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_dir),3);
        bufp->chgCData(oldp+808,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir),3);
        bufp->chgCData(oldp+809,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_pre_sel),3);
        bufp->chgBit(oldp+810,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog));
        bufp->chgCData(oldp+811,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel_reg),3);
        bufp->chgCData(oldp+812,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel),3);
        bufp->chgIData(oldp+813,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int),32);
        bufp->chgBit(oldp+814,((1U & (~ ((0x1fe0U == 
                                          (0xffffU 
                                           & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__wr_mux__DOT__and_gates__BRA__1__KET____DOT__or_result 
                                                      >> 0x21U)))) 
                                         | (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____VdfgTmp_h9973e968__0))))));
        bufp->chgCData(oldp+815,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_sel),3);
        bufp->chgCData(oldp+816,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_pre_sel),3);
        bufp->chgCData(oldp+817,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram[0]),3);
        bufp->chgCData(oldp+818,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram[1]),3);
        bufp->chgCData(oldp+819,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr),2);
        bufp->chgCData(oldp+820,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr),2);
        bufp->chgBit(oldp+821,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr))));
        bufp->chgBit(oldp+822,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr))));
        bufp->chgIData(oldp+823,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__i),32);
        bufp->chgCData(oldp+824,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram[0]),3);
        bufp->chgCData(oldp+825,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram[1]),3);
        bufp->chgCData(oldp+826,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr),2);
        bufp->chgCData(oldp+827,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr),2);
        bufp->chgBit(oldp+828,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr))));
        bufp->chgBit(oldp+829,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr))));
        bufp->chgIData(oldp+830,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__i),32);
        bufp->chgQData(oldp+831,((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst)) 
                                   << 0x2bU) | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arsize)) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen)) 
                                                    << 0x24U) 
                                                   | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)) 
                                                       << 4U) 
                                                      | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arid))))))),45);
        bufp->chgIData(oldp+833,(((((IData)(1U) + (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr 
                                                   >> 2U)) 
                                   << 2U) | (3U & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr))),32);
        bufp->chgIData(oldp+834,((((- (IData)((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst)))) 
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
        bufp->chgIData(oldp+835,(((0xffffffc0U & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr) 
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
        bufp->chgCData(oldp+836,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst),2);
        bufp->chgBit(oldp+837,((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst))));
        bufp->chgBit(oldp+838,((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst))));
        bufp->chgBit(oldp+839,((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst))));
        bufp->chgCData(oldp+840,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arid),4);
        bufp->chgCData(oldp+841,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen),4);
        bufp->chgBit(oldp+842,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen_last));
        bufp->chgCData(oldp+843,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arsize),3);
        bufp->chgBit(oldp+844,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid));
        bufp->chgQData(oldp+845,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas),45);
        bufp->chgIData(oldp+847,((IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas 
                                          >> 0xdU))),32);
        bufp->chgCData(oldp+848,((3U & (IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas 
                                                >> 0xbU)))),2);
        bufp->chgCData(oldp+849,((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas))),4);
        bufp->chgCData(oldp+850,((0xfU & (IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas 
                                                  >> 4U)))),4);
        bufp->chgCData(oldp+851,((7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas 
                                                >> 8U)))),3);
        bufp->chgBit(oldp+852,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_valid));
        bufp->chgCData(oldp+853,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rcur),4);
        bufp->chgQData(oldp+854,((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)) 
                                   << 0xdU) | (QData)((IData)(
                                                              (((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst) 
                                                                << 0xbU) 
                                                               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awsize) 
                                                                   << 8U) 
                                                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awlen) 
                                                                      << 4U) 
                                                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awid)))))))),45);
        bufp->chgIData(oldp+856,(((((IData)(1U) + (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr 
                                                   >> 2U)) 
                                   << 2U) | (3U & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr))),32);
        bufp->chgIData(oldp+857,((((- (IData)((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst)))) 
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
        bufp->chgIData(oldp+858,(((0xffffffc0U & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr) 
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
        bufp->chgCData(oldp+859,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst),2);
        bufp->chgBit(oldp+860,((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst))));
        bufp->chgBit(oldp+861,((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst))));
        bufp->chgBit(oldp+862,((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst))));
        bufp->chgCData(oldp+863,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awid),4);
        bufp->chgCData(oldp+864,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awlen),4);
        bufp->chgCData(oldp+865,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awsize),3);
        bufp->chgBit(oldp+866,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid));
        bufp->chgQData(oldp+867,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_push_data),45);
        bufp->chgQData(oldp+869,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas),45);
        bufp->chgIData(oldp+871,((IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas 
                                          >> 0xdU))),32);
        bufp->chgCData(oldp+872,((3U & (IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas 
                                                >> 0xbU)))),2);
        bufp->chgCData(oldp+873,((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas))),4);
        bufp->chgCData(oldp+874,((0xfU & (IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas 
                                                  >> 4U)))),4);
        bufp->chgCData(oldp+875,((7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas 
                                                >> 8U)))),3);
        bufp->chgBit(oldp+876,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_valid));
        bufp->chgBit(oldp+877,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_allow_out));
        bufp->chgBit(oldp+878,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid));
        bufp->chgCData(oldp+879,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_datas),4);
        bufp->chgBit(oldp+880,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid)))));
        bufp->chgCData(oldp+881,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wstrb),4);
        bufp->chgBit(oldp+882,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wlast));
        bufp->chgBit(oldp+883,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wvalid));
        bufp->chgIData(oldp+884,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr0),32);
        bufp->chgIData(oldp+885,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr1),32);
        bufp->chgIData(oldp+886,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr2),32);
        bufp->chgIData(oldp+887,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr3),32);
        bufp->chgIData(oldp+888,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr4),32);
        bufp->chgIData(oldp+889,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr5),32);
        bufp->chgIData(oldp+890,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr6),32);
        bufp->chgIData(oldp+891,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr7),32);
        bufp->chgIData(oldp+892,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__led_data),32);
        bufp->chgIData(oldp+893,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__led_rg0_data),32);
        bufp->chgIData(oldp+894,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__led_rg1_data),32);
        bufp->chgIData(oldp+895,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__num_data),32);
        bufp->chgIData(oldp+896,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_key_r),32);
        bufp->chgIData(oldp+897,(((2U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r)) 
                                         << 1U)) | 
                                  (1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r))))),32);
        bufp->chgCData(oldp+898,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__confreg_uart_data),8);
        bufp->chgBit(oldp+899,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__confreg_uart_valid));
        bufp->chgIData(oldp+900,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__timer_r2),32);
        bufp->chgIData(oldp+901,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__simu_flag),32);
        bufp->chgIData(oldp+902,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__io_simu),32);
        bufp->chgCData(oldp+903,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__virtual_uart_data),8);
        bufp->chgBit(oldp+904,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__open_trace));
        bufp->chgBit(oldp+905,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__num_monitor));
        bufp->chgBit(oldp+906,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin));
        bufp->chgBit(oldp+907,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r1));
        bufp->chgBit(oldp+908,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r2));
        bufp->chgBit(oldp+909,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r3));
        bufp->chgBit(oldp+910,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r1));
        bufp->chgBit(oldp+911,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r2));
        bufp->chgIData(oldp+912,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r),32);
        bufp->chgIData(oldp+913,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r1),32);
        bufp->chgIData(oldp+914,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r2),32);
        bufp->chgIData(oldp+915,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__timer_r1),32);
        bufp->chgIData(oldp+916,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__timer),32);
        bufp->chgCData(oldp+917,((0xffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata)),8);
        bufp->chgSData(oldp+918,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_key_r),16);
        bufp->chgCData(oldp+919,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state),3);
        bufp->chgBit(oldp+920,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__key_flag));
        bufp->chgIData(oldp+921,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__key_count),20);
        bufp->chgCData(oldp+922,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state_count),4);
        bufp->chgBit(oldp+923,((1U & (vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__key_count 
                                      >> 0x13U))));
        bufp->chgBit(oldp+924,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r));
        bufp->chgBit(oldp+925,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r));
        bufp->chgBit(oldp+926,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step0_flag));
        bufp->chgIData(oldp+927,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step0_count),20);
        bufp->chgBit(oldp+928,((1U & (vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step0_count 
                                      >> 0x13U))));
        bufp->chgBit(oldp+929,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step1_flag));
        bufp->chgIData(oldp+930,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step1_count),20);
        bufp->chgBit(oldp+931,((1U & (vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step1_count 
                                      >> 0x13U))));
        bufp->chgIData(oldp+932,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__count),20);
        bufp->chgCData(oldp+933,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__scan_data),4);
        bufp->chgCData(oldp+934,((0xffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__wr_mux__DOT__and_gates__BRA__1__KET____DOT__or_result 
                                                   >> 4U)))),8);
        bufp->chgIData(oldp+935,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__da) 
                                   & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__pg)))
                                   ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC
                                   : ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[1U] 
                                         >> 0x1dU) 
                                        == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC 
                                            >> 0x1dU)) 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[
                                          (((IData)(0x20U) 
                                            + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__plv)) 
                                           >> 5U)] 
                                          >> (0x1fU 
                                              & ((IData)(0x20U) 
                                                 + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__plv)))))
                                       ? ((0xe0000000U 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[1U] 
                                              << 4U)) 
                                          | (0x1fffffffU 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC))
                                       : ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0U] 
                                             >> 0x1dU) 
                                            == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC 
                                                >> 0x1dU)) 
                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[
                                              ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__plv) 
                                               >> 5U)] 
                                              >> (0x1fU 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__plv))))
                                           ? ((0xe0000000U 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0U] 
                                                  << 4U)) 
                                              | (0x1fffffffU 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC))
                                           : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_tlb_phytranitem 
                                               << 0xcU) 
                                              | (0xfffU 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC)))))),32);
        bufp->chgBit(oldp+936,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU] 
                                      >> 0xfU))));
        bufp->chgCData(oldp+937,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU] 
                                        >> 0xcU))),2);
        bufp->chgIData(oldp+938,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_addr_phyaddr),32);
        bufp->chgCData(oldp+939,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem),4);
        bufp->chgIData(oldp+940,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__extend_store_u__extend_data),32);
        bufp->chgBit(oldp+941,((1U & (~ (3U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__da) 
                                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__pg)))
                                                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mat_i)
                                                : (
                                                   (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[1U] 
                                                      >> 0x1dU) 
                                                     == 
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC 
                                                      >> 0x1dU)) 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[
                                                       (((IData)(0x20U) 
                                                         + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__plv)) 
                                                        >> 5U)] 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(0x20U) 
                                                           + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__plv)))))
                                                    ? 
                                                   ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[1U] 
                                                     << 0x1cU) 
                                                    | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[1U] 
                                                       >> 4U))
                                                    : 
                                                   ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0U] 
                                                       >> 0x1dU) 
                                                      == 
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC 
                                                       >> 0x1dU)) 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[
                                                        ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__plv) 
                                                         >> 5U)] 
                                                        >> 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__plv))))
                                                     ? 
                                                    ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0U] 
                                                      << 0x1cU) 
                                                     | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0U] 
                                                        >> 4U))
                                                     : 
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_tlb_phytranitem 
                                                     >> 0x16U)))))))));
        bufp->chgBit(oldp+942,((1U & (~ (3U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__da) 
                                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellinp__addr_trans_memaddr__pg)))
                                                ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mat_d)
                                                : (
                                                   (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[1U] 
                                                      >> 0x1dU) 
                                                     == 
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex 
                                                      >> 0x1dU)) 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[
                                                       (((IData)(0x20U) 
                                                         + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__plv)) 
                                                        >> 5U)] 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(0x20U) 
                                                           + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__plv)))))
                                                    ? 
                                                   ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[1U] 
                                                     << 0x1cU) 
                                                    | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[1U] 
                                                       >> 4U))
                                                    : 
                                                   ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0U] 
                                                       >> 0x1dU) 
                                                      == 
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex 
                                                       >> 0x1dU)) 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[
                                                        ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__plv) 
                                                         >> 5U)] 
                                                        >> 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__plv))))
                                                     ? 
                                                    ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0U] 
                                                      << 0x1cU) 
                                                     | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0U] 
                                                        >> 4U))
                                                     : 
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_phytranitem 
                                                     >> 0x16U)))))))));
        bufp->chgBit(oldp+943,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[1U] 
                                      >> 4U))));
        bufp->chgBit(oldp+944,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[1U] 
                                      >> 3U))));
        bufp->chgBit(oldp+945,((1U & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U] 
                                         >> 6U)))));
        bufp->chgBit(oldp+946,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U] 
                                      >> 6U))));
        bufp->chgBit(oldp+947,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cacheop_wb));
        bufp->chgIData(oldp+948,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cacheop_addr),32);
        bufp->chgBit(oldp+949,(((((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_cacheop)) 
                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_h1fa730de__0)) 
                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_h0ea5640d__0))));
        bufp->chgBit(oldp+950,(((((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_cacheop)) 
                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h1fa730de__0)) 
                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h0ea5640d__0))));
        bufp->chgBit(oldp+951,((((((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_cacheop)) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h1fa730de__0)) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h0ea5640d__0)) 
                                | ((((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_cacheop)) 
                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_h1fa730de__0)) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_h0ea5640d__0)))));
        bufp->chgIData(oldp+952,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[8U] 
                                   << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[7U] 
                                                >> 9U))),32);
        bufp->chgIData(oldp+953,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC),32);
        bufp->chgCData(oldp+954,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_excode),6);
        bufp->chgBit(oldp+955,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_is_exc));
        bufp->chgIData(oldp+956,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_csrmsgin[2U] 
                                   << 6U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_csrmsgin[1U] 
                                             >> 0x1aU))),32);
        bufp->chgIData(oldp+957,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_csrmsgin[1U] 
                                   << 6U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_csrmsgin[0U] 
                                             >> 0x1aU))),32);
        bufp->chgCData(oldp+958,((0x3fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_csrmsgin[0U] 
                                           >> 0x14U))),6);
        bufp->chgSData(oldp+959,((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_csrmsgin[0U] 
                                            >> 0xbU))),9);
        bufp->chgBit(oldp+960,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_csrmsgin[0U] 
                                      >> 0xaU))));
        bufp->chgSData(oldp+961,((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_csrmsgin[0U])),10);
        bufp->chgIData(oldp+962,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__csrmsg_data[2U] 
                                   << 6U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__csrmsg_data[1U] 
                                             >> 0x1aU))),32);
        bufp->chgIData(oldp+963,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__csrmsg_data[1U] 
                                   << 6U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__csrmsg_data[0U] 
                                             >> 0x1aU))),32);
        bufp->chgCData(oldp+964,((0x3fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__csrmsg_data[0U] 
                                           >> 0x14U))),6);
        bufp->chgSData(oldp+965,((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__csrmsg_data[0U] 
                                            >> 0xbU))),9);
        bufp->chgBit(oldp+966,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__csrmsg_data[0U] 
                                      >> 0xaU))));
        bufp->chgSData(oldp+967,((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__csrmsg_data[0U])),10);
        bufp->chgIData(oldp+968,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__pipeline_data),32);
        bufp->chgBit(oldp+969,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_flush));
        bufp->chgIData(oldp+970,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__pipeline_data),32);
        bufp->chgIData(oldp+971,((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                          >> 0x20U))),32);
        bufp->chgIData(oldp+972,((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)),32);
        bufp->chgCData(oldp+973,((0x3fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__csrmsg_data[0U] 
                                           >> 0x14U))),6);
        bufp->chgBit(oldp+974,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__csrmsg_data[0U] 
                                      >> 0xaU))));
        bufp->chgIData(oldp+975,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_csrmsgin[2U] 
                                   << 6U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_csrmsgin[1U] 
                                             >> 0x1aU))),32);
        bufp->chgIData(oldp+976,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_csrmsgin[1U] 
                                   << 6U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_csrmsgin[0U] 
                                             >> 0x1aU))),32);
        bufp->chgCData(oldp+977,((0x3fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_csrmsgin[0U] 
                                           >> 0x14U))),6);
        bufp->chgSData(oldp+978,((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_csrmsgin[0U] 
                                            >> 0xbU))),9);
        bufp->chgBit(oldp+979,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_csrmsgin[0U] 
                                      >> 0xaU))));
        bufp->chgSData(oldp+980,((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_csrmsgin[0U])),10);
        bufp->chgIData(oldp+981,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__csrmsg_data[2U] 
                                   << 6U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__csrmsg_data[1U] 
                                             >> 0x1aU))),32);
        bufp->chgIData(oldp+982,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__csrmsg_data[1U] 
                                   << 6U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__csrmsg_data[0U] 
                                             >> 0x1aU))),32);
        bufp->chgCData(oldp+983,((0x3fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__csrmsg_data[0U] 
                                           >> 0x14U))),6);
        bufp->chgSData(oldp+984,((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__csrmsg_data[0U] 
                                            >> 0xbU))),9);
        bufp->chgBit(oldp+985,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__csrmsg_data[0U] 
                                      >> 0xaU))));
        bufp->chgSData(oldp+986,((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__csrmsg_data[0U])),10);
        bufp->chgBit(oldp+987,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__alusel1));
        bufp->chgBit(oldp+988,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__alusel2));
        bufp->chgCData(oldp+989,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__aluctrl),5);
        bufp->chgBit(oldp+990,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_store_inst));
        bufp->chgBit(oldp+991,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_load_inst));
        bufp->chgCData(oldp+992,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_B_TYPE) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_BU_TYPE) 
                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ST_B_TYPE)))
                                   ? 0U : (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_H_TYPE) 
                                            | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_HU_TYPE) 
                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ST_H_TYPE)))
                                            ? 1U : 
                                           (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_W_TYPE) 
                                             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ST_W_TYPE))
                                             ? 2U : 0U)))),2);
        bufp->chgBit(oldp+993,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_BU_TYPE) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_HU_TYPE) 
                                   | (4U == (0xffU 
                                             & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 0x18U))))))));
        bufp->chgBit(oldp+994,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteEn_id));
        bufp->chgCData(oldp+995,((3U & ((((1U & ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_load_inst))) 
                                                 & (- (IData)(
                                                              (4U 
                                                               != 
                                                               (0xffU 
                                                                & (IData)(
                                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                           >> 0x18U)))))))) 
                                          | (2U & (- (IData)(
                                                             (4U 
                                                              == 
                                                              (0xffU 
                                                               & (IData)(
                                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                          >> 0x18U)))))))) 
                                         & (- (IData)(
                                                      (0U 
                                                       != 
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                   >> 0xfU))))))) 
                                        | (- (IData)(
                                                     (0U 
                                                      == 
                                                      (0x1ffffU 
                                                       & (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                  >> 0xfU))))))))),2);
        bufp->chgCData(oldp+996,((((IData)((0x20000000ULL 
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
        bufp->chgCData(oldp+997,((((IData)((0x21000000ULL 
                                            == (0xff000000ULL 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out))) 
                                   << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ST_W_TYPE) 
                                              << 2U) 
                                             | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ST_H_TYPE) 
                                                 << 1U) 
                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ST_B_TYPE))))),8);
        bufp->chgIData(oldp+998,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id),32);
        bufp->chgIData(oldp+999,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rk_id),32);
        bufp->chgIData(oldp+1000,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_id),32);
        bufp->chgCData(oldp+1001,((0x1fU & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                    >> 5U)))),5);
        bufp->chgCData(oldp+1002,((0x1fU & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                    >> 0xaU)))),5);
        bufp->chgCData(oldp+1003,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_id),5);
        bufp->chgIData(oldp+1004,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__immout_id),32);
        bufp->chgIData(oldp+1005,((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+1006,((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)),32);
        bufp->chgBit(oldp+1007,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_RDCNTVH_TYPE));
        bufp->chgBit(oldp+1008,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_RDCNTVL_TYPE));
        bufp->chgBit(oldp+1009,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ERTN_TYPE));
        bufp->chgBit(oldp+1010,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_CSRXCHG_TYPE));
        bufp->chgBit(oldp+1011,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__is_csr_wen_id));
        bufp->chgBit(oldp+1012,((4U == (0xffU & (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0x18U))))));
        bufp->chgSData(oldp+1013,((0x3fffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__immout_id)),14);
        bufp->chgBit(oldp+1014,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_TLBINV_TYPEM));
        bufp->chgBit(oldp+1015,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_TLBRD_TYPE));
        bufp->chgBit(oldp+1016,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__is_tlb_wen_id));
        bufp->chgBit(oldp+1017,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_TLBSRCH_TYPE));
        bufp->chgCData(oldp+1018,((3U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                 >> 3U)))),2);
        bufp->chgIData(oldp+1019,((IData)(((QData)((IData)(
                                                           ((0x80U 
                                                             & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out) 
                                                                << 7U)) 
                                                            | (((0x18U 
                                                                 == 
                                                                 (0x3ffU 
                                                                  & (IData)(
                                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                             >> 0x16U)))) 
                                                                << 6U) 
                                                               | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__is_csr_wen_id) 
                                                                    & ((0x18U 
                                                                        == 
                                                                        (0x3fffU 
                                                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__immout_id)) 
                                                                       | (0U 
                                                                          == 
                                                                          (0x3fffU 
                                                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__immout_id)))) 
                                                                   | ((0x18U 
                                                                       == 
                                                                       (0x3ffU 
                                                                        & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                                >> 0x16U)))) 
                                                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_RDCNTVL_TYPE) 
                                                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_RDCNTID_TYPE) 
                                                                            | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_RDCNTVH_TYPE) 
                                                                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_TLBINV_TYPEM) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_TLBRD_TYPE) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_TLBSRCH_TYPE) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__is_tlb_wen_id))))))))) 
                                                                  << 5U))))) 
                                           >> 8U))),32);
        bufp->chgBit(oldp+1020,((1U & (IData)(((QData)((IData)(
                                                               ((0x80U 
                                                                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out) 
                                                                    << 7U)) 
                                                                | (((0x18U 
                                                                     == 
                                                                     (0x3ffU 
                                                                      & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                                >> 0x16U)))) 
                                                                    << 6U) 
                                                                   | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__is_csr_wen_id) 
                                                                        & ((0x18U 
                                                                            == 
                                                                            (0x3fffU 
                                                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__immout_id)) 
                                                                           | (0U 
                                                                              == 
                                                                              (0x3fffU 
                                                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__immout_id)))) 
                                                                       | ((0x18U 
                                                                           == 
                                                                           (0x3ffU 
                                                                            & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                                >> 0x16U)))) 
                                                                          | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_RDCNTVL_TYPE) 
                                                                             | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_RDCNTID_TYPE) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_RDCNTVH_TYPE) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_TLBINV_TYPEM) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_TLBRD_TYPE) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_TLBSRCH_TYPE) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__is_tlb_wen_id))))))))) 
                                                                      << 5U))))) 
                                               >> 7U)))));
        bufp->chgBit(oldp+1021,((1U & (IData)(((QData)((IData)(
                                                               ((0x80U 
                                                                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out) 
                                                                    << 7U)) 
                                                                | (((0x18U 
                                                                     == 
                                                                     (0x3ffU 
                                                                      & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                                >> 0x16U)))) 
                                                                    << 6U) 
                                                                   | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__is_csr_wen_id) 
                                                                        & ((0x18U 
                                                                            == 
                                                                            (0x3fffU 
                                                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__immout_id)) 
                                                                           | (0U 
                                                                              == 
                                                                              (0x3fffU 
                                                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__immout_id)))) 
                                                                       | ((0x18U 
                                                                           == 
                                                                           (0x3ffU 
                                                                            & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                                >> 0x16U)))) 
                                                                          | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_RDCNTVL_TYPE) 
                                                                             | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_RDCNTID_TYPE) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_RDCNTVH_TYPE) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_TLBINV_TYPEM) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_TLBRD_TYPE) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_TLBSRCH_TYPE) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__is_tlb_wen_id))))))))) 
                                                                      << 5U))))) 
                                               >> 6U)))));
        bufp->chgBit(oldp+1022,((1U & (IData)(((QData)((IData)(
                                                               ((0x80U 
                                                                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out) 
                                                                    << 7U)) 
                                                                | (((0x18U 
                                                                     == 
                                                                     (0x3ffU 
                                                                      & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                                >> 0x16U)))) 
                                                                    << 6U) 
                                                                   | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__is_csr_wen_id) 
                                                                        & ((0x18U 
                                                                            == 
                                                                            (0x3fffU 
                                                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__immout_id)) 
                                                                           | (0U 
                                                                              == 
                                                                              (0x3fffU 
                                                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__immout_id)))) 
                                                                       | ((0x18U 
                                                                           == 
                                                                           (0x3ffU 
                                                                            & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                                >> 0x16U)))) 
                                                                          | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_RDCNTVL_TYPE) 
                                                                             | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_RDCNTID_TYPE) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_RDCNTVH_TYPE) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_TLBINV_TYPEM) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_TLBRD_TYPE) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_TLBSRCH_TYPE) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__is_tlb_wen_id))))))))) 
                                                                      << 5U))))) 
                                               >> 5U)))));
        bufp->chgBit(oldp+1023,((1U & (IData)(((QData)((IData)(
                                                               ((0x80U 
                                                                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out) 
                                                                    << 7U)) 
                                                                | (((0x18U 
                                                                     == 
                                                                     (0x3ffU 
                                                                      & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                                >> 0x16U)))) 
                                                                    << 6U) 
                                                                   | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__is_csr_wen_id) 
                                                                        & ((0x18U 
                                                                            == 
                                                                            (0x3fffU 
                                                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__immout_id)) 
                                                                           | (0U 
                                                                              == 
                                                                              (0x3fffU 
                                                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__immout_id)))) 
                                                                       | ((0x18U 
                                                                           == 
                                                                           (0x3ffU 
                                                                            & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                                >> 0x16U)))) 
                                                                          | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_RDCNTVL_TYPE) 
                                                                             | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_RDCNTID_TYPE) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_RDCNTVH_TYPE) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_TLBINV_TYPEM) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_TLBRD_TYPE) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_TLBSRCH_TYPE) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__is_tlb_wen_id))))))))) 
                                                                      << 5U))))) 
                                               >> 4U)))));
        bufp->chgCData(oldp+1024,((0xfU & (IData)((QData)((IData)(
                                                                  ((0x80U 
                                                                    & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out) 
                                                                       << 7U)) 
                                                                   | (((0x18U 
                                                                        == 
                                                                        (0x3ffU 
                                                                         & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                                >> 0x16U)))) 
                                                                       << 6U) 
                                                                      | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__is_csr_wen_id) 
                                                                           & ((0x18U 
                                                                               == 
                                                                               (0x3fffU 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__immout_id)) 
                                                                              | (0U 
                                                                                == 
                                                                                (0x3fffU 
                                                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__immout_id)))) 
                                                                          | ((0x18U 
                                                                              == 
                                                                              (0x3ffU 
                                                                               & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                                >> 0x16U)))) 
                                                                             | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_RDCNTVL_TYPE) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_RDCNTID_TYPE) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_RDCNTVH_TYPE) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_TLBINV_TYPEM) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_TLBRD_TYPE) 
                                                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_TLBSRCH_TYPE) 
                                                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__is_tlb_wen_id))))))))) 
                                                                         << 5U)))))))),4);
        bufp->chgSData(oldp+1025,((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id_true)),10);
        bufp->chgBit(oldp+1026,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU] 
                                       >> 0x16U))));
        bufp->chgBit(oldp+1027,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU] 
                                       >> 0x15U))));
        bufp->chgCData(oldp+1028,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU] 
                                            >> 0x10U))),5);
        bufp->chgBit(oldp+1029,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU] 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1030,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU] 
                                       >> 0xeU))));
        bufp->chgCData(oldp+1031,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU] 
                                         >> 0xcU))),2);
        bufp->chgBit(oldp+1032,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU] 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1033,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU] 
                                       >> 0xaU))));
        bufp->chgCData(oldp+1034,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU] 
                                         >> 8U))),2);
        bufp->chgCData(oldp+1035,((0xffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU])),8);
        bufp->chgCData(oldp+1036,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[9U] 
                                   >> 0x18U)),8);
        bufp->chgIData(oldp+1037,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[9U] 
                                    << 8U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[8U] 
                                              >> 0x18U))),32);
        bufp->chgIData(oldp+1038,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[8U] 
                                    << 8U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[7U] 
                                              >> 0x18U))),32);
        bufp->chgIData(oldp+1039,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[7U] 
                                    << 8U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[6U] 
                                              >> 0x18U))),32);
        bufp->chgCData(oldp+1040,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[6U] 
                                            >> 0x13U))),5);
        bufp->chgCData(oldp+1041,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[6U] 
                                            >> 0xeU))),5);
        bufp->chgCData(oldp+1042,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[6U] 
                                            >> 9U))),5);
        bufp->chgIData(oldp+1043,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[6U] 
                                    << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                                 >> 9U))),32);
        bufp->chgIData(oldp+1044,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                    << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[4U] 
                                                 >> 9U))),32);
        bufp->chgIData(oldp+1045,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[4U] 
                                    << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[3U] 
                                                 >> 9U))),32);
        bufp->chgBit(oldp+1046,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[3U] 
                                       >> 8U))));
        bufp->chgBit(oldp+1047,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[3U] 
                                       >> 7U))));
        bufp->chgBit(oldp+1048,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[3U] 
                                       >> 6U))));
        bufp->chgBit(oldp+1049,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[3U] 
                                       >> 5U))));
        bufp->chgBit(oldp+1050,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[3U] 
                                       >> 4U))));
        bufp->chgBit(oldp+1051,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[3U] 
                                       >> 3U))));
        bufp->chgSData(oldp+1052,((0x3fffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[3U] 
                                               << 0xbU) 
                                              | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U] 
                                                 >> 0x15U)))),14);
        bufp->chgCData(oldp+1053,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U] 
                                            >> 0x10U))),5);
        bufp->chgCData(oldp+1054,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U] 
                                            >> 0xbU))),5);
        bufp->chgBit(oldp+1055,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U] 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1056,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U] 
                                       >> 9U))));
        bufp->chgBit(oldp+1057,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U] 
                                       >> 8U))));
        bufp->chgBit(oldp+1058,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U] 
                                       >> 7U))));
        bufp->chgCData(oldp+1059,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U] 
                                         >> 5U))),2);
        bufp->chgIData(oldp+1060,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U] 
                                    << 0x1bU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[1U] 
                                                 >> 5U))),32);
        bufp->chgBit(oldp+1061,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[1U] 
                                       >> 4U))));
        bufp->chgBit(oldp+1062,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[1U] 
                                       >> 3U))));
        bufp->chgBit(oldp+1063,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[1U] 
                                       >> 2U))));
        bufp->chgBit(oldp+1064,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[1U] 
                                       >> 1U))));
        bufp->chgCData(oldp+1065,((0xfU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[1U] 
                                            << 3U) 
                                           | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0U] 
                                              >> 0x1dU)))),4);
        bufp->chgSData(oldp+1066,((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0U] 
                                             >> 0x13U))),10);
        bufp->chgIData(oldp+1067,((0x7ffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0U])),19);
        bufp->chgCData(oldp+1068,((0x3fU & ((0x400U 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__csrmsg_data[0U])
                                             ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__csrmsg_data[0U] 
                                                 << 0xcU) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__csrmsg_data[0U] 
                                                   >> 0x14U))
                                             : ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SYSCALL_TYPE)
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
                                                      >> 0x14U)))))))),6);
        bufp->chgBit(oldp+1069,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_is_exc));
        bufp->chgIData(oldp+1070,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_csrmsgin[2U] 
                                    << 6U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_csrmsgin[1U] 
                                              >> 0x1aU))),32);
        bufp->chgIData(oldp+1071,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_csrmsgin[1U] 
                                    << 6U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_csrmsgin[0U] 
                                              >> 0x1aU))),32);
        bufp->chgCData(oldp+1072,((0x3fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_csrmsgin[0U] 
                                            >> 0x14U))),6);
        bufp->chgSData(oldp+1073,((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_csrmsgin[0U] 
                                             >> 0xbU))),9);
        bufp->chgBit(oldp+1074,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_csrmsgin[0U] 
                                       >> 0xaU))));
        bufp->chgSData(oldp+1075,((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_csrmsgin[0U])),10);
        bufp->chgIData(oldp+1076,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[2U] 
                                    << 6U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[1U] 
                                              >> 0x1aU))),32);
        bufp->chgIData(oldp+1077,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[1U] 
                                    << 6U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[0U] 
                                              >> 0x1aU))),32);
        bufp->chgCData(oldp+1078,((0x3fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[0U] 
                                            >> 0x14U))),6);
        bufp->chgSData(oldp+1079,((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[0U] 
                                             >> 0xbU))),9);
        bufp->chgBit(oldp+1080,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[0U] 
                                       >> 0xaU))));
        bufp->chgSData(oldp+1081,((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[0U])),10);
        bufp->chgCData(oldp+1082,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem),4);
        bufp->chgCData(oldp+1083,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[6U] 
                                            >> 9U))),5);
        bufp->chgIData(oldp+1084,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluout_ex),32);
        bufp->chgIData(oldp+1085,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                    << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[4U] 
                                                 >> 9U))),32);
        bufp->chgIData(oldp+1086,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[4U] 
                                    << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[3U] 
                                                 >> 9U))),32);
        bufp->chgIData(oldp+1087,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex),32);
        bufp->chgIData(oldp+1088,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_addr_phyaddr),32);
        bufp->chgIData(oldp+1089,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_ex_true),32);
        bufp->chgIData(oldp+1090,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__extend_store_u__extend_data),32);
        bufp->chgIData(oldp+1091,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cacheop_addr),32);
        bufp->chgBit(oldp+1092,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_ne));
        bufp->chgCData(oldp+1093,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_ind),4);
        bufp->chgBit(oldp+1094,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xbU] 
                                       >> 9U))));
        bufp->chgBit(oldp+1095,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xbU] 
                                       >> 8U))));
        bufp->chgCData(oldp+1096,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xbU] 
                                         >> 6U))),2);
        bufp->chgBit(oldp+1097,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xbU] 
                                       >> 5U))));
        bufp->chgBit(oldp+1098,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xbU] 
                                       >> 4U))));
        bufp->chgCData(oldp+1099,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xbU] 
                                         >> 2U))),2);
        bufp->chgCData(oldp+1100,((0xffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xbU] 
                                             << 6U) 
                                            | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xaU] 
                                               >> 0x1aU)))),8);
        bufp->chgCData(oldp+1101,((0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xaU] 
                                            >> 0x12U))),8);
        bufp->chgCData(oldp+1102,((0xfU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xaU] 
                                           >> 0xeU))),4);
        bufp->chgCData(oldp+1103,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xaU] 
                                            >> 9U))),5);
        bufp->chgIData(oldp+1104,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xaU] 
                                    << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[9U] 
                                                 >> 9U))),32);
        bufp->chgIData(oldp+1105,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[9U] 
                                    << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[8U] 
                                                 >> 9U))),32);
        bufp->chgIData(oldp+1106,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[8U] 
                                    << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[7U] 
                                                 >> 9U))),32);
        bufp->chgIData(oldp+1107,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[7U] 
                                    << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[6U] 
                                                 >> 9U))),32);
        bufp->chgIData(oldp+1108,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[6U] 
                                    << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[5U] 
                                                 >> 9U))),32);
        bufp->chgIData(oldp+1109,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[5U] 
                                    << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[4U] 
                                                 >> 9U))),32);
        bufp->chgIData(oldp+1110,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[4U] 
                                    << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[3U] 
                                                 >> 9U))),32);
        bufp->chgBit(oldp+1111,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[3U] 
                                       >> 8U))));
        bufp->chgBit(oldp+1112,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[3U] 
                                       >> 7U))));
        bufp->chgBit(oldp+1113,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[3U] 
                                       >> 6U))));
        bufp->chgBit(oldp+1114,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[3U] 
                                       >> 5U))));
        bufp->chgBit(oldp+1115,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[3U] 
                                       >> 4U))));
        bufp->chgBit(oldp+1116,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[3U] 
                                       >> 3U))));
        bufp->chgSData(oldp+1117,((0x3fffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[3U] 
                                               << 0xbU) 
                                              | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U] 
                                                 >> 0x15U)))),14);
        bufp->chgCData(oldp+1118,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U] 
                                            >> 0x10U))),5);
        bufp->chgCData(oldp+1119,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U] 
                                            >> 0xbU))),5);
        bufp->chgBit(oldp+1120,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U] 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1121,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U] 
                                       >> 9U))));
        bufp->chgBit(oldp+1122,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U] 
                                       >> 8U))));
        bufp->chgBit(oldp+1123,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U] 
                                       >> 7U))));
        bufp->chgCData(oldp+1124,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U] 
                                         >> 5U))),2);
        bufp->chgIData(oldp+1125,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U] 
                                    << 0x1bU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[1U] 
                                                 >> 5U))),32);
        bufp->chgBit(oldp+1126,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[1U] 
                                       >> 4U))));
        bufp->chgBit(oldp+1127,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[1U] 
                                       >> 3U))));
        bufp->chgBit(oldp+1128,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[1U] 
                                       >> 2U))));
        bufp->chgBit(oldp+1129,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[1U] 
                                       >> 1U))));
        bufp->chgCData(oldp+1130,((0xfU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[1U] 
                                            << 3U) 
                                           | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0U] 
                                              >> 0x1dU)))),4);
        bufp->chgSData(oldp+1131,((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0U] 
                                             >> 0x13U))),10);
        bufp->chgIData(oldp+1132,((0x7ffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0U])),19);
        bufp->chgCData(oldp+1133,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_excode),6);
        bufp->chgIData(oldp+1134,(((0x400U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[0U])
                                    ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[2U] 
                                        << 6U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[1U] 
                                                  >> 0x1aU))
                                    : ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____VdfgExtracted_h16cb5132__0)
                                        ? (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_is_dmw)) 
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
                                            : ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_is_usetlb)
                                                ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_ne)
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
                                                : (
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[2U] 
                                                    << 6U) 
                                                   | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[1U] 
                                                      >> 0x1aU))))
                                        : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[2U] 
                                            << 6U) 
                                           | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data[1U] 
                                              >> 0x1aU))))),32);
        bufp->chgBit(oldp+1135,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_is_exc));
        bufp->chgBit(oldp+1136,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_flush));
        bufp->chgIData(oldp+1137,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_csrmsgin[2U] 
                                    << 6U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_csrmsgin[1U] 
                                              >> 0x1aU))),32);
        bufp->chgIData(oldp+1138,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_csrmsgin[1U] 
                                    << 6U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_csrmsgin[0U] 
                                              >> 0x1aU))),32);
        bufp->chgCData(oldp+1139,((0x3fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_csrmsgin[0U] 
                                            >> 0x14U))),6);
        bufp->chgSData(oldp+1140,((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_csrmsgin[0U] 
                                             >> 0xbU))),9);
        bufp->chgBit(oldp+1141,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_csrmsgin[0U] 
                                       >> 0xaU))));
        bufp->chgSData(oldp+1142,((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_csrmsgin[0U])),10);
        bufp->chgIData(oldp+1143,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__csrmsg_data[2U] 
                                    << 6U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__csrmsg_data[1U] 
                                              >> 0x1aU))),32);
        bufp->chgIData(oldp+1144,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__csrmsg_data[1U] 
                                    << 6U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__csrmsg_data[0U] 
                                              >> 0x1aU))),32);
        bufp->chgCData(oldp+1145,((0x3fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__csrmsg_data[0U] 
                                            >> 0x14U))),6);
        bufp->chgSData(oldp+1146,((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__csrmsg_data[0U] 
                                             >> 0xbU))),9);
        bufp->chgBit(oldp+1147,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__csrmsg_data[0U] 
                                       >> 0xaU))));
        bufp->chgSData(oldp+1148,((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__csrmsg_data[0U])),10);
        bufp->chgCData(oldp+1149,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xaU] 
                                            >> 9U))),5);
        bufp->chgIData(oldp+1150,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xaU] 
                                    << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[9U] 
                                                 >> 9U))),32);
        bufp->chgIData(oldp+1151,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[9U] 
                                    << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[8U] 
                                                 >> 9U))),32);
        bufp->chgCData(oldp+1152,((0xfU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xaU] 
                                           >> 0xeU))),4);
        bufp->chgIData(oldp+1153,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[8U] 
                                    << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[7U] 
                                                 >> 9U))),32);
        bufp->chgIData(oldp+1154,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[7U] 
                                    << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[6U] 
                                                 >> 9U))),32);
        bufp->chgIData(oldp+1155,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[6U] 
                                    << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[5U] 
                                                 >> 9U))),32);
        bufp->chgIData(oldp+1156,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[5U] 
                                    << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[4U] 
                                                 >> 9U))),32);
        bufp->chgIData(oldp+1157,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[4U] 
                                    << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[3U] 
                                                 >> 9U))),32);
        bufp->chgBit(oldp+1158,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[0xcU] 
                                       >> 4U))));
        bufp->chgCData(oldp+1159,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[0xcU] 
                                         >> 2U))),2);
        bufp->chgCData(oldp+1160,((0xffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[0xcU] 
                                             << 6U) 
                                            | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[0xbU] 
                                               >> 0x1aU)))),8);
        bufp->chgCData(oldp+1161,((0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[0xbU] 
                                            >> 0x12U))),8);
        bufp->chgCData(oldp+1162,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[0xbU] 
                                            >> 0xdU))),5);
        bufp->chgIData(oldp+1163,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[0xbU] 
                                    << 0x13U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[0xaU] 
                                                 >> 0xdU))),32);
        bufp->chgIData(oldp+1164,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[0xaU] 
                                    << 0x13U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[9U] 
                                                 >> 0xdU))),32);
        bufp->chgIData(oldp+1165,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[9U] 
                                    << 0x13U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[8U] 
                                                 >> 0xdU))),32);
        bufp->chgCData(oldp+1166,((0xfU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[8U] 
                                           >> 9U))),4);
        bufp->chgIData(oldp+1167,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[8U] 
                                    << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[7U] 
                                                 >> 9U))),32);
        bufp->chgIData(oldp+1168,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[7U] 
                                    << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[6U] 
                                                 >> 9U))),32);
        bufp->chgIData(oldp+1169,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[6U] 
                                    << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[5U] 
                                                 >> 9U))),32);
        bufp->chgIData(oldp+1170,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[5U] 
                                    << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[4U] 
                                                 >> 9U))),32);
        bufp->chgIData(oldp+1171,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[4U] 
                                    << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                                                 >> 9U))),32);
        bufp->chgBit(oldp+1172,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                                       >> 8U))));
        bufp->chgBit(oldp+1173,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                                       >> 7U))));
        bufp->chgBit(oldp+1174,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                                       >> 6U))));
        bufp->chgBit(oldp+1175,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                                       >> 5U))));
        bufp->chgBit(oldp+1176,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                                       >> 4U))));
        bufp->chgBit(oldp+1177,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                                       >> 3U))));
        bufp->chgSData(oldp+1178,((0x3fffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                                               << 0xbU) 
                                              | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U] 
                                                 >> 0x15U)))),14);
        bufp->chgCData(oldp+1179,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U] 
                                            >> 0x10U))),5);
        bufp->chgCData(oldp+1180,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U] 
                                            >> 0xbU))),5);
        bufp->chgBit(oldp+1181,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U] 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1182,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U] 
                                       >> 9U))));
        bufp->chgBit(oldp+1183,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U] 
                                       >> 8U))));
        bufp->chgBit(oldp+1184,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U] 
                                       >> 7U))));
        bufp->chgCData(oldp+1185,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U] 
                                         >> 5U))),2);
        bufp->chgIData(oldp+1186,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U] 
                                    << 0x1bU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[1U] 
                                                 >> 5U))),32);
        bufp->chgBit(oldp+1187,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[1U] 
                                       >> 4U))));
        bufp->chgBit(oldp+1188,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[1U] 
                                       >> 3U))));
        bufp->chgBit(oldp+1189,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[1U] 
                                       >> 2U))));
        bufp->chgBit(oldp+1190,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[1U] 
                                       >> 1U))));
        bufp->chgCData(oldp+1191,((0xfU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[1U] 
                                            << 3U) 
                                           | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[0U] 
                                              >> 0x1dU)))),4);
        bufp->chgSData(oldp+1192,((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[0U] 
                                             >> 0x13U))),10);
        bufp->chgIData(oldp+1193,((0x7ffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[0U])),19);
        bufp->chgBit(oldp+1194,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_flush));
        bufp->chgBit(oldp+1195,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_valid));
        bufp->chgIData(oldp+1196,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__csrmsg_data[2U] 
                                    << 6U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__csrmsg_data[1U] 
                                              >> 0x1aU))),32);
        bufp->chgIData(oldp+1197,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__csrmsg_data[1U] 
                                    << 6U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__csrmsg_data[0U] 
                                              >> 0x1aU))),32);
        bufp->chgCData(oldp+1198,((0x3fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__csrmsg_data[0U] 
                                            >> 0x14U))),6);
        bufp->chgSData(oldp+1199,((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__csrmsg_data[0U] 
                                             >> 0xbU))),9);
        bufp->chgBit(oldp+1200,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__csrmsg_data[0U] 
                                       >> 0xaU))));
        bufp->chgSData(oldp+1201,((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__csrmsg_data[0U])),10);
        bufp->chgIData(oldp+1202,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csrout_wb),32);
        bufp->chgIData(oldp+1203,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__exaddr),32);
        bufp->chgBit(oldp+1204,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__exlike));
        bufp->chgCData(oldp+1205,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__plv),2);
        bufp->chgSData(oldp+1206,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid),10);
        bufp->chgBit(oldp+1207,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__da));
        bufp->chgBit(oldp+1208,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__pg));
        bufp->chgBit(oldp+1209,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__exlike)))));
        bufp->chgSData(oldp+1210,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__lie),12);
        bufp->chgSData(oldp+1211,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__is),12);
        bufp->chgBit(oldp+1212,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ie));
        bufp->chgCData(oldp+1213,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_tlb_ind),4);
        bufp->chgBit(oldp+1214,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_tlb_phytranitem 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1215,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_tlb_phytranitem 
                                       >> 0x18U))));
        bufp->chgCData(oldp+1216,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_tlb_phytranitem 
                                         >> 0x16U))),2);
        bufp->chgCData(oldp+1217,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_tlb_phytranitem 
                                         >> 0x14U))),2);
        bufp->chgIData(oldp+1218,((0xfffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_tlb_phytranitem)),20);
        bufp->chgBit(oldp+1219,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_tlb_ne));
        bufp->chgBit(oldp+1220,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_is_usetlb));
        bufp->chgCData(oldp+1221,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_ind),4);
        bufp->chgBit(oldp+1222,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_phytranitem 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1223,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_phytranitem 
                                       >> 0x18U))));
        bufp->chgCData(oldp+1224,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_phytranitem 
                                         >> 0x16U))),2);
        bufp->chgCData(oldp+1225,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_phytranitem 
                                         >> 0x14U))),2);
        bufp->chgIData(oldp+1226,((0xfffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_phytranitem)),20);
        bufp->chgBit(oldp+1227,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_is_usetlb));
        bufp->chgCData(oldp+1228,((0xfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x15U])),4);
        bufp->chgCData(oldp+1229,(((0x1000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                    [(0xfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x15U])][2U])
                                    ? (0x3fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                [(0xfU 
                                                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x15U])][2U] 
                                                >> 7U))
                                    : 0U)),6);
        bufp->chgSData(oldp+1230,(((0x1000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                    [(0xfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x15U])][2U])
                                    ? (0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                 [(0xfU 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x15U])][2U] 
                                                 >> 0xeU))
                                    : 0U)),10);
        bufp->chgBit(oldp+1231,((1U & (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                          [(0xfU & 
                                            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x15U])][2U] 
                                          >> 0x18U)))));
        bufp->chgBit(oldp+1232,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__r_phytran0 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1233,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__r_phytran0 
                                       >> 0x18U))));
        bufp->chgCData(oldp+1234,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__r_phytran0 
                                         >> 0x16U))),2);
        bufp->chgCData(oldp+1235,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__r_phytran0 
                                         >> 0x14U))),2);
        bufp->chgIData(oldp+1236,((0xfffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__r_phytran0)),20);
        bufp->chgBit(oldp+1237,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__r_phytran1 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1238,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__r_phytran1 
                                       >> 0x18U))));
        bufp->chgCData(oldp+1239,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__r_phytran1 
                                         >> 0x16U))),2);
        bufp->chgCData(oldp+1240,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__r_phytran1 
                                         >> 0x14U))),2);
        bufp->chgIData(oldp+1241,((0xfffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__r_phytran1)),20);
        bufp->chgBit(oldp+1242,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__r_g));
        bufp->chgIData(oldp+1243,(((0x1000000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                    [(0xfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x15U])][2U])
                                    ? (0x7ffffU & (
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                    [
                                                    (0xfU 
                                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x15U])][2U] 
                                                    << 0xcU) 
                                                   | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                      [
                                                      (0xfU 
                                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x15U])][1U] 
                                                      >> 0x14U)))
                                    : 0U)),19);
        bufp->chgBit(oldp+1244,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x13U])));
        bufp->chgBit(oldp+1245,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x13U] 
                                       >> 1U))));
        bufp->chgCData(oldp+1246,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x13U] 
                                         >> 4U))),2);
        bufp->chgCData(oldp+1247,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x13U] 
                                         >> 2U))),2);
        bufp->chgIData(oldp+1248,((0xfffffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x13U] 
                                               >> 8U))),20);
        bufp->chgBit(oldp+1249,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x12U])));
        bufp->chgBit(oldp+1250,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x12U] 
                                       >> 1U))));
        bufp->chgCData(oldp+1251,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x12U] 
                                         >> 4U))),2);
        bufp->chgCData(oldp+1252,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x12U] 
                                         >> 2U))),2);
        bufp->chgIData(oldp+1253,((0xfffffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x12U] 
                                               >> 8U))),20);
        bufp->chgBit(oldp+1254,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x15U] 
                                 >> 0x1fU)));
        bufp->chgCData(oldp+1255,((0x3fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x15U] 
                                            >> 0x18U))),6);
        bufp->chgSData(oldp+1256,((0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__csrmsg_data[0U])),10);
        bufp->chgIData(oldp+1257,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x14U] 
                                   >> 0xdU)),19);
        bufp->chgBit(oldp+1258,((1U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x13U] 
                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x12U]) 
                                       >> 6U))));
        bufp->chgSData(oldp+1259,((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[0U] 
                                             >> 0x13U))),10);
        bufp->chgIData(oldp+1260,((0x7ffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[0U])),19);
        bufp->chgIData(oldp+1261,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__counter_lower),32);
        bufp->chgIData(oldp+1262,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__counter_higher),32);
        bufp->chgCData(oldp+1263,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mat_i),2);
        bufp->chgCData(oldp+1264,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mat_d),2);
        bufp->chgCData(oldp+1265,((3U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__da) 
                                          & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__pg)))
                                          ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mat_i)
                                          : ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[1U] 
                                                >> 0x1dU) 
                                               == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC 
                                                   >> 0x1dU)) 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[
                                                 (((IData)(0x20U) 
                                                   + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__plv)) 
                                                  >> 5U)] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(0x20U) 
                                                     + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__plv)))))
                                              ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[1U] 
                                                  << 0x1cU) 
                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[1U] 
                                                    >> 4U))
                                              : (((
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0U] 
                                                    >> 0x1dU) 
                                                   == 
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC 
                                                    >> 0x1dU)) 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[
                                                     ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__plv) 
                                                      >> 5U)] 
                                                     >> 
                                                     (0x1fU 
                                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__plv))))
                                                  ? 
                                                 ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0U] 
                                                     >> 4U))
                                                  : 
                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_tlb_phytranitem 
                                                  >> 0x16U)))))),2);
        bufp->chgCData(oldp+1266,((3U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__da) 
                                          & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellinp__addr_trans_memaddr__pg)))
                                          ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mat_d)
                                          : ((((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[1U] 
                                                >> 0x1dU) 
                                               == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex 
                                                   >> 0x1dU)) 
                                              & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[
                                                 (((IData)(0x20U) 
                                                   + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__plv)) 
                                                  >> 5U)] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(0x20U) 
                                                     + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__plv)))))
                                              ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[1U] 
                                                  << 0x1cU) 
                                                 | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[1U] 
                                                    >> 4U))
                                              : (((
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0U] 
                                                    >> 0x1dU) 
                                                   == 
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex 
                                                    >> 0x1dU)) 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[
                                                     ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__plv) 
                                                      >> 5U)] 
                                                     >> 
                                                     (0x1fU 
                                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__plv))))
                                                  ? 
                                                 ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0U] 
                                                     >> 4U))
                                                  : 
                                                 (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_phytranitem 
                                                  >> 0x16U)))))),2);
        bufp->chgIData(oldp+1267,(((0U != (0x1fU & 
                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U] 
                                            >> 0x10U)))
                                    ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf
                                   [(0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U] 
                                              >> 0x10U))]
                                    : 0U)),32);
        bufp->chgIData(oldp+1268,(((0U != (0x1fU & 
                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U] 
                                            >> 0xbU)))
                                    ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf
                                   [(0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U] 
                                              >> 0xbU))]
                                    : 0U)),32);
        bufp->chgIData(oldp+1269,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tid),32);
        bufp->chgIData(oldp+1270,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__pipeline_data),32);
        bufp->chgIData(oldp+1271,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC),32);
        bufp->chgBit(oldp+1272,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__pcsel));
        bufp->chgIData(oldp+1273,(((IData)(4U) + vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__pipeline_data)),32);
        bufp->chgIData(oldp+1274,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__branchPC),32);
        bufp->chgIData(oldp+1275,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__branchPC_temp),32);
        bufp->chgBit(oldp+1276,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__branchPC_temp_valid));
        bufp->chgIData(oldp+1277,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp),32);
        bufp->chgBit(oldp+1278,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp_valid));
        bufp->chgBit(oldp+1279,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_is_dmw));
        bufp->chgBit(oldp+1280,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__pc_have_exc));
        bufp->chgIData(oldp+1281,((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)),32);
        bufp->chgIData(oldp+1282,((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                           >> 0x20U))),32);
        bufp->chgBit(oldp+1283,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__eq));
        bufp->chgBit(oldp+1284,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__lt));
        bufp->chgBit(oldp+1285,((1U & (IData)((1ULL 
                                               & (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)) 
                                                   + 
                                                   ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_b)) 
                                                    + (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_cin)))) 
                                                  >> 0x20U))))));
        bufp->chgCData(oldp+1286,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__itype),3);
        bufp->chgBit(oldp+1287,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_store_inst));
        bufp->chgBit(oldp+1288,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_load_inst));
        bufp->chgBit(oldp+1289,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__alusel1));
        bufp->chgBit(oldp+1290,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__alusel2));
        bufp->chgCData(oldp+1291,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__aluctrl),5);
        bufp->chgCData(oldp+1292,((3U & ((((1U & ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_load_inst))) 
                                                  & (- (IData)(
                                                               (4U 
                                                                != 
                                                                (0xffU 
                                                                 & (IData)(
                                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                            >> 0x18U)))))))) 
                                           | (2U & 
                                              (- (IData)(
                                                         (4U 
                                                          == 
                                                          (0xffU 
                                                           & (IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                      >> 0x18U)))))))) 
                                          & (- (IData)(
                                                       (0U 
                                                        != 
                                                        (0x1ffffU 
                                                         & (IData)(
                                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                    >> 0xfU))))))) 
                                         | (- (IData)(
                                                      (0U 
                                                       == 
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                   >> 0xfU))))))))),2);
        bufp->chgBit(oldp+1293,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__unsignBranchCmp));
        bufp->chgBit(oldp+1294,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BL_TYPE));
        bufp->chgBit(oldp+1295,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ORI_TYPE) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_XORI_TYPE) 
                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ANDI_TYPE)))));
        bufp->chgBit(oldp+1296,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_JIRL_TYPE));
        bufp->chgBit(oldp+1297,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_branch_inst));
        bufp->chgCData(oldp+1298,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_B_TYPE) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_BU_TYPE) 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ST_B_TYPE)))
                                    ? 0U : (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_H_TYPE) 
                                             | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_HU_TYPE) 
                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ST_H_TYPE)))
                                             ? 1U : 
                                            (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_W_TYPE) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ST_W_TYPE))
                                              ? 2U : 0U)))),2);
        bufp->chgBit(oldp+1299,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_BU_TYPE) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_HU_TYPE) 
                                    | (4U == (0xffU 
                                              & (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0x18U))))))));
        bufp->chgCData(oldp+1300,((((IData)((0x20000000ULL 
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
        bufp->chgCData(oldp+1301,((((IData)((0x21000000ULL 
                                             == (0xff000000ULL 
                                                 & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out))) 
                                    << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ST_W_TYPE) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ST_H_TYPE) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ST_B_TYPE))))),8);
        bufp->chgBit(oldp+1302,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_TLB_TYPEM) 
                                 | ((4U == (0xffU & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x18U)))) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ERTN_TYPE) 
                                       | (IData)((0x6488000ULL 
                                                  == 
                                                  (0xffff8000ULL 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out))))))));
        bufp->chgBit(oldp+1303,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ERTN_TYPE));
        bufp->chgBit(oldp+1304,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SYSCALL_TYPE));
        bufp->chgBit(oldp+1305,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BRK_TYPE));
        bufp->chgBit(oldp+1306,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__is_ine_id));
        bufp->chgBit(oldp+1307,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_TLBINV_TYPEM));
        bufp->chgBit(oldp+1308,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_TLBSRCH_TYPE));
        bufp->chgBit(oldp+1309,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_TLBRD_TYPE));
        bufp->chgBit(oldp+1310,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_CSRXCHG_TYPE));
        bufp->chgBit(oldp+1311,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_RDCNTVH_TYPE));
        bufp->chgBit(oldp+1312,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_RDCNTVL_TYPE));
        bufp->chgBit(oldp+1313,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_RDCNTID_TYPE));
        bufp->chgBit(oldp+1314,((0x18U == (0x3ffU & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x16U))))));
        bufp->chgBit(oldp+1315,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out))));
        bufp->chgCData(oldp+1316,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_id),5);
        bufp->chgIData(oldp+1317,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id),32);
        bufp->chgIData(oldp+1318,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rk_id),32);
        bufp->chgIData(oldp+1319,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_id),32);
        bufp->chgIData(oldp+1320,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb),32);
        bufp->chgIData(oldp+1321,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__immout_id),32);
        bufp->chgIData(oldp+1322,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id_true),32);
        bufp->chgIData(oldp+1323,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_id_true),32);
        bufp->chgIData(oldp+1324,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_ex_true),32);
        bufp->chgIData(oldp+1325,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rk_ex_true),32);
        bufp->chgIData(oldp+1326,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_ex_true),32);
        bufp->chgCData(oldp+1327,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xaU] 
                                            >> 9U))),5);
        bufp->chgBit(oldp+1328,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xbU] 
                                       >> 4U))));
        bufp->chgIData(oldp+1329,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xaU] 
                                    << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[9U] 
                                                 >> 9U))),32);
        bufp->chgIData(oldp+1330,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_JIRL_TYPE)
                                    ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id_true
                                    : (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                               >> 0x20U)))),32);
        bufp->chgBit(oldp+1331,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU] 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1332,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU] 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1333,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__brstall));
        bufp->chgIData(oldp+1334,(((IData)(4U) + (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__pipeline_data 
                                                          >> 0x20U)))),32);
        bufp->chgBit(oldp+1335,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__error_inst_in_if));
        bufp->chgBit(oldp+1336,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__is_csr_wen_id) 
                                 & ((0x18U == (0x3fffU 
                                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__immout_id)) 
                                    | (0U == (0x3fffU 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__immout_id))))));
        bufp->chgBit(oldp+1337,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU] 
                                       >> 0x16U))));
        bufp->chgBit(oldp+1338,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU] 
                                       >> 0x15U))));
        bufp->chgCData(oldp+1339,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU] 
                                            >> 0x10U))),5);
        bufp->chgIData(oldp+1340,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex),32);
        bufp->chgIData(oldp+1341,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex),32);
        bufp->chgIData(oldp+1342,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                    << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[4U] 
                                                 >> 9U))),32);
        bufp->chgIData(oldp+1343,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[9U] 
                                    << 8U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[8U] 
                                              >> 0x18U))),32);
        bufp->chgIData(oldp+1344,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[8U] 
                                    << 8U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[7U] 
                                              >> 0x18U))),32);
        bufp->chgIData(oldp+1345,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[7U] 
                                    << 8U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[6U] 
                                              >> 0x18U))),32);
        bufp->chgCData(oldp+1346,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[6U] 
                                            >> 0x13U))),5);
        bufp->chgCData(oldp+1347,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[6U] 
                                            >> 0xeU))),5);
        bufp->chgCData(oldp+1348,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[6U] 
                                            >> 9U))),5);
        bufp->chgIData(oldp+1349,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[6U] 
                                    << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                                 >> 9U))),32);
        bufp->chgBit(oldp+1350,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU] 
                                       >> 0xbU))));
        bufp->chgCData(oldp+1351,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU] 
                                         >> 8U))),2);
        bufp->chgIData(oldp+1352,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[4U] 
                                    << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[3U] 
                                                 >> 9U))),32);
        bufp->chgIData(oldp+1353,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex),32);
        bufp->chgIData(oldp+1354,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluout_ex),32);
        bufp->chgBit(oldp+1355,((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divEn)) 
                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divEn) 
                                          & (0x21U 
                                             == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__count)))))));
        bufp->chgBit(oldp+1356,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_is_dmw));
        bufp->chgBit(oldp+1357,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[1U] 
                                  >> 3U) & (((((1U 
                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)) 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_cacheop)) 
                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h1fa730de__0)) 
                                             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h0ea5640d__0)) 
                                            | ((((1U 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)) 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_cacheop)) 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_h1fa730de__0)) 
                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_h0ea5640d__0))))));
        bufp->chgCData(oldp+1358,((0xfU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xaU] 
                                           >> 0xeU))),4);
        bufp->chgBit(oldp+1359,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xbU] 
                                       >> 5U))));
        bufp->chgBit(oldp+1360,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xbU] 
                                       >> 8U))));
        bufp->chgBit(oldp+1361,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xbU] 
                                       >> 9U))));
        bufp->chgIData(oldp+1362,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[8U] 
                                    << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[7U] 
                                                 >> 9U))),32);
        bufp->chgIData(oldp+1363,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[9U] 
                                    << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[8U] 
                                                 >> 9U))),32);
        bufp->chgIData(oldp+1364,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[7U] 
                                    << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[6U] 
                                                 >> 9U))),32);
        bufp->chgIData(oldp+1365,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[6U] 
                                    << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[5U] 
                                                 >> 9U))),32);
        bufp->chgIData(oldp+1366,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[5U] 
                                    << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[4U] 
                                                 >> 9U))),32);
        bufp->chgIData(oldp+1367,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[4U] 
                                    << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[3U] 
                                                 >> 9U))),32);
        bufp->chgIData(oldp+1368,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp),32);
        bufp->chgBit(oldp+1369,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid));
        bufp->chgCData(oldp+1370,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_excode_tmp),6);
        bufp->chgBit(oldp+1371,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_tmp_valid));
        bufp->chgBit(oldp+1372,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_is_exc_last));
        bufp->chgIData(oldp+1373,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[0xbU] 
                                    << 0x13U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[0xaU] 
                                                 >> 0xdU))),32);
        bufp->chgIData(oldp+1374,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[0xaU] 
                                    << 0x13U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[9U] 
                                                 >> 0xdU))),32);
        bufp->chgCData(oldp+1375,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[0xcU] 
                                         >> 2U))),2);
        bufp->chgIData(oldp+1376,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[9U] 
                                    << 0x13U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[8U] 
                                                 >> 0xdU))),32);
        bufp->chgCData(oldp+1377,((0xfU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[8U] 
                                           >> 9U))),4);
        bufp->chgIData(oldp+1378,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[7U] 
                                    << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[6U] 
                                                 >> 9U))),32);
        bufp->chgIData(oldp+1379,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[6U] 
                                    << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[5U] 
                                                 >> 9U))),32);
        bufp->chgCData(oldp+1380,((0xffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[0xcU] 
                                             << 6U) 
                                            | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[0xbU] 
                                               >> 0x1aU)))),8);
        bufp->chgCData(oldp+1381,((0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[0xbU] 
                                            >> 0x12U))),8);
        bufp->chgIData(oldp+1382,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[5U] 
                                    << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[4U] 
                                                 >> 9U))),32);
        bufp->chgIData(oldp+1383,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[4U] 
                                    << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                                                 >> 9U))),32);
        bufp->chgBit(oldp+1384,((IData)((0U != (0x18U 
                                                & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U])))));
        bufp->chgBit(oldp+1385,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_valid));
        bufp->chgBit(oldp+1386,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_cnt_inst));
        bufp->chgQData(oldp+1387,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_timer_64),64);
        bufp->chgCData(oldp+1389,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_inst_ld_en),8);
        bufp->chgIData(oldp+1390,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_ld_paddr),32);
        bufp->chgIData(oldp+1391,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_ld_vaddr),32);
        bufp->chgCData(oldp+1392,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_inst_st_en),8);
        bufp->chgIData(oldp+1393,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_st_paddr),32);
        bufp->chgIData(oldp+1394,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_st_vaddr),32);
        bufp->chgIData(oldp+1395,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_st_data),32);
        bufp->chgBit(oldp+1396,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_csr_rstat_en));
        bufp->chgIData(oldp+1397,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_csr_data),32);
        bufp->chgBit(oldp+1398,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_wen));
        bufp->chgCData(oldp+1399,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_wdest),8);
        bufp->chgIData(oldp+1400,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_wdata),32);
        bufp->chgIData(oldp+1401,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_pc),32);
        bufp->chgIData(oldp+1402,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_inst),32);
        bufp->chgBit(oldp+1403,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_excp_flush));
        bufp->chgBit(oldp+1404,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_ertn));
        bufp->chgCData(oldp+1405,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_csr_ecode),6);
        bufp->chgBit(oldp+1406,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_tlbfill_en));
        bufp->chgCData(oldp+1407,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_rand_index),5);
        bufp->chgBit(oldp+1408,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__trap));
        bufp->chgCData(oldp+1409,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__trap_code),8);
        bufp->chgQData(oldp+1410,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cycleCnt),64);
        bufp->chgQData(oldp+1412,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instrCnt),64);
        bufp->chgIData(oldp+1414,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[0]),32);
        bufp->chgIData(oldp+1415,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[1]),32);
        bufp->chgIData(oldp+1416,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[2]),32);
        bufp->chgIData(oldp+1417,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[3]),32);
        bufp->chgIData(oldp+1418,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[4]),32);
        bufp->chgIData(oldp+1419,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[5]),32);
        bufp->chgIData(oldp+1420,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[6]),32);
        bufp->chgIData(oldp+1421,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[7]),32);
        bufp->chgIData(oldp+1422,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[8]),32);
        bufp->chgIData(oldp+1423,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[9]),32);
        bufp->chgIData(oldp+1424,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[10]),32);
        bufp->chgIData(oldp+1425,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[11]),32);
        bufp->chgIData(oldp+1426,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[12]),32);
        bufp->chgIData(oldp+1427,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[13]),32);
        bufp->chgIData(oldp+1428,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[14]),32);
        bufp->chgIData(oldp+1429,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[15]),32);
        bufp->chgIData(oldp+1430,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[16]),32);
        bufp->chgIData(oldp+1431,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[17]),32);
        bufp->chgIData(oldp+1432,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[18]),32);
        bufp->chgIData(oldp+1433,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[19]),32);
        bufp->chgIData(oldp+1434,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[20]),32);
        bufp->chgIData(oldp+1435,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[21]),32);
        bufp->chgIData(oldp+1436,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[22]),32);
        bufp->chgIData(oldp+1437,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[23]),32);
        bufp->chgIData(oldp+1438,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[24]),32);
        bufp->chgIData(oldp+1439,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[25]),32);
        bufp->chgIData(oldp+1440,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[26]),32);
        bufp->chgIData(oldp+1441,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[27]),32);
        bufp->chgIData(oldp+1442,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[28]),32);
        bufp->chgIData(oldp+1443,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[29]),32);
        bufp->chgIData(oldp+1444,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[30]),32);
        bufp->chgIData(oldp+1445,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[31]),32);
        bufp->chgIData(oldp+1446,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x1dU]),32);
        bufp->chgIData(oldp+1447,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x1cU]),32);
        bufp->chgIData(oldp+1448,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x1bU]),32);
        bufp->chgIData(oldp+1449,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x19U]),32);
        bufp->chgIData(oldp+1450,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x18U]),32);
        bufp->chgIData(oldp+1451,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x17U]),32);
        bufp->chgIData(oldp+1452,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x16U]),32);
        bufp->chgIData(oldp+1453,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x15U]),32);
        bufp->chgIData(oldp+1454,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x14U]),32);
        bufp->chgIData(oldp+1455,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x13U]),32);
        bufp->chgIData(oldp+1456,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x11U]),32);
        bufp->chgIData(oldp+1457,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0xcU]),32);
        bufp->chgIData(oldp+1458,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0xbU]),32);
        bufp->chgIData(oldp+1459,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0xaU]),32);
        bufp->chgIData(oldp+1460,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[9U]),32);
        bufp->chgIData(oldp+1461,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[8U]),32);
        bufp->chgIData(oldp+1462,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[7U]),32);
        bufp->chgIData(oldp+1463,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[6U]),32);
        bufp->chgIData(oldp+1464,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[5U]),32);
        bufp->chgIData(oldp+1465,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[4U]),32);
        bufp->chgIData(oldp+1466,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[3U]),32);
        bufp->chgIData(oldp+1467,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[1U]),32);
        bufp->chgIData(oldp+1468,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0U]),32);
        bufp->chgIData(oldp+1469,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x10U]),32);
        bufp->chgIData(oldp+1470,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0xfU]),32);
        bufp->chgQData(oldp+1471,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x1dU]))),64);
        bufp->chgQData(oldp+1473,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x1cU]))),64);
        bufp->chgQData(oldp+1475,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x1bU]))),64);
        bufp->chgQData(oldp+1477,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x19U]))),64);
        bufp->chgQData(oldp+1479,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x18U]))),64);
        bufp->chgQData(oldp+1481,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x17U]))),64);
        bufp->chgQData(oldp+1483,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x16U]))),64);
        bufp->chgQData(oldp+1485,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x15U]))),64);
        bufp->chgQData(oldp+1487,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x14U]))),64);
        bufp->chgQData(oldp+1489,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x13U]))),64);
        bufp->chgQData(oldp+1491,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x11U]))),64);
        bufp->chgQData(oldp+1493,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x10U]))),64);
        bufp->chgQData(oldp+1495,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0xfU]))),64);
        bufp->chgQData(oldp+1497,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0xcU]))),64);
        bufp->chgQData(oldp+1499,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0xbU]))),64);
        bufp->chgQData(oldp+1501,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0xaU]))),64);
        bufp->chgQData(oldp+1503,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[9U]))),64);
        bufp->chgQData(oldp+1505,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[8U]))),64);
        bufp->chgQData(oldp+1507,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[7U]))),64);
        bufp->chgQData(oldp+1509,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[6U]))),64);
        bufp->chgQData(oldp+1511,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[5U]))),64);
        bufp->chgQData(oldp+1513,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[4U]))),64);
        bufp->chgQData(oldp+1515,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[3U]))),64);
        bufp->chgQData(oldp+1517,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[1U]))),64);
        bufp->chgQData(oldp+1519,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0U]))),64);
        bufp->chgIData(oldp+1521,((0x7ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x19U] 
                                             >> 2U))),32);
        bufp->chgIData(oldp+1522,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_csr_ecode),32);
        bufp->chgQData(oldp+1523,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_pc))),64);
        bufp->chgQData(oldp+1525,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                  [1U]))),64);
        bufp->chgQData(oldp+1527,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                  [2U]))),64);
        bufp->chgQData(oldp+1529,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                  [3U]))),64);
        bufp->chgQData(oldp+1531,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                  [4U]))),64);
        bufp->chgQData(oldp+1533,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                  [5U]))),64);
        bufp->chgQData(oldp+1535,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                  [6U]))),64);
        bufp->chgQData(oldp+1537,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                  [7U]))),64);
        bufp->chgQData(oldp+1539,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                  [8U]))),64);
        bufp->chgQData(oldp+1541,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                  [9U]))),64);
        bufp->chgQData(oldp+1543,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                  [0xaU]))),64);
        bufp->chgQData(oldp+1545,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                  [0xbU]))),64);
        bufp->chgQData(oldp+1547,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                  [0xcU]))),64);
        bufp->chgQData(oldp+1549,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                  [0xdU]))),64);
        bufp->chgQData(oldp+1551,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                  [0xeU]))),64);
        bufp->chgQData(oldp+1553,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                  [0xfU]))),64);
        bufp->chgQData(oldp+1555,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                  [0x10U]))),64);
        bufp->chgQData(oldp+1557,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                  [0x11U]))),64);
        bufp->chgQData(oldp+1559,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                  [0x12U]))),64);
        bufp->chgQData(oldp+1561,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                  [0x13U]))),64);
        bufp->chgQData(oldp+1563,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                  [0x14U]))),64);
        bufp->chgQData(oldp+1565,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                  [0x15U]))),64);
        bufp->chgQData(oldp+1567,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                  [0x16U]))),64);
        bufp->chgQData(oldp+1569,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                  [0x17U]))),64);
        bufp->chgQData(oldp+1571,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                  [0x18U]))),64);
        bufp->chgQData(oldp+1573,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                  [0x19U]))),64);
        bufp->chgQData(oldp+1575,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                  [0x1aU]))),64);
        bufp->chgQData(oldp+1577,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                  [0x1bU]))),64);
        bufp->chgQData(oldp+1579,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                  [0x1cU]))),64);
        bufp->chgQData(oldp+1581,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                  [0x1dU]))),64);
        bufp->chgQData(oldp+1583,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                  [0x1eU]))),64);
        bufp->chgQData(oldp+1585,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                  [0x1fU]))),64);
        bufp->chgQData(oldp+1587,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_wdata))),64);
        bufp->chgQData(oldp+1589,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_ld_paddr))),64);
        bufp->chgQData(oldp+1591,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_ld_vaddr))),64);
        bufp->chgQData(oldp+1593,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_st_paddr))),64);
        bufp->chgQData(oldp+1595,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_st_vaddr))),64);
        bufp->chgQData(oldp+1597,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_st_data))),64);
        bufp->chgCData(oldp+1599,((7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__trap_code))),3);
        bufp->chgQData(oldp+1600,((QData)((IData)((
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__csrmsg_data[1U] 
                                                    << 6U) 
                                                   | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__csrmsg_data[0U] 
                                                      >> 0x1aU))))),64);
        bufp->chgBit(oldp+1602,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__pipeline_valid));
        bufp->chgBit(oldp+1603,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellinp__addr_trans_memaddr__pg));
        bufp->chgCData(oldp+1604,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_phytranitem 
                                         >> 0x16U))),2);
        bufp->chgIData(oldp+1605,((0xfffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_phytranitem)),20);
        bufp->chgCData(oldp+1606,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_tlb_phytranitem 
                                         >> 0x16U))),2);
        bufp->chgIData(oldp+1607,((0xfffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_tlb_phytranitem)),20);
        bufp->chgBit(oldp+1608,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divUnsigned));
        bufp->chgBit(oldp+1609,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divEn));
        bufp->chgIData(oldp+1610,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__quotient),32);
        bufp->chgIData(oldp+1611,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__remainder),32);
        bufp->chgBit(oldp+1612,((0x21U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__count))));
        bufp->chgIData(oldp+1613,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_result),32);
        bufp->chgIData(oldp+1614,((1U & (((~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex 
                                              >> 0x1fU)) 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                                             >> 0x1fU)) 
                                         | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_sign)) 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_result 
                                               >> 0x1fU))))),32);
        bufp->chgIData(oldp+1615,((1U & (~ (IData)(
                                                   (1ULL 
                                                    & (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)) 
                                                        + 
                                                        ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_b)) 
                                                         + (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_cin)))) 
                                                       >> 0x20U)))))),32);
        bufp->chgIData(oldp+1616,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_b),32);
        bufp->chgBit(oldp+1617,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_cin));
        bufp->chgQData(oldp+1618,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__mul_result),64);
        bufp->chgBit(oldp+1620,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divUnsigned)))));
        bufp->chgIData(oldp+1621,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_u),32);
        bufp->chgIData(oldp+1622,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__remainder_u),32);
        bufp->chgIData(oldp+1623,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                                    >> 0x1fU) ? (- vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)
                                    : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)),32);
        bufp->chgIData(oldp+1624,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex 
                                    >> 0x1fU) ? (- vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)
                                    : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)),32);
        bufp->chgBit(oldp+1625,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+1626,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+1627,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_sign));
        bufp->chgIData(oldp+1628,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_sign)
                                    ? (- vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_u)
                                    : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_u)),32);
        bufp->chgIData(oldp+1629,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                                    >> 0x1fU) ? (- vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__remainder_u)
                                    : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__remainder_u)),32);
        bufp->chgIData(oldp+1630,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divUnsigned)
                                    ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex
                                    : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                                        >> 0x1fU) ? 
                                       (- vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)
                                        : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex))),32);
        bufp->chgIData(oldp+1631,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divUnsigned)
                                    ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex
                                    : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex 
                                        >> 0x1fU) ? 
                                       (- vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)
                                        : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex))),32);
        bufp->chgIData(oldp+1632,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__dividend_reg),32);
        bufp->chgQData(oldp+1633,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__minuend),33);
        bufp->chgCData(oldp+1635,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__count),6);
        bufp->chgQData(oldp+1636,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__minuend_shifted),33);
        bufp->chgQData(oldp+1638,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__minuend_next),33);
        bufp->chgIData(oldp+1640,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__dividend_reg 
                                   << 1U)),32);
        bufp->chgQData(oldp+1641,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__difference),33);
        bufp->chgBit(oldp+1643,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__difference 
                                                  >> 0x20U))))));
        bufp->chgBit(oldp+1644,((0U == (0x3ffU & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0x16U))))));
        bufp->chgBit(oldp+1645,((1U == (0x3ffU & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0x16U))))));
        bufp->chgBit(oldp+1646,((1U == (0x7fU & (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0x19U))))));
        bufp->chgBit(oldp+1647,((1U == (0xfU & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 0x1cU))))));
        bufp->chgBit(oldp+1648,((0x10U == (0x7fU & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0x19U))))));
        bufp->chgBit(oldp+1649,((0xaU == (0x3fU & (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x1aU))))));
        bufp->chgBit(oldp+1650,((1U == (3U & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                      >> 0x1eU))))));
        bufp->chgBit(oldp+1651,((0x64U == (0xfffU & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x14U))))));
        bufp->chgBit(oldp+1652,((0U == (0x1ffffU & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0xfU))))));
        bufp->chgBit(oldp+1653,((IData)((0x100000ULL 
                                         == (0xffff8000ULL 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)))));
        bufp->chgBit(oldp+1654,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SUB_TYPE));
        bufp->chgBit(oldp+1655,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SLT_TYPE));
        bufp->chgBit(oldp+1656,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SLTU_TYPE));
        bufp->chgBit(oldp+1657,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_NOR_TYPE));
        bufp->chgBit(oldp+1658,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_AND_TYPE));
        bufp->chgBit(oldp+1659,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_OR_TYPE));
        bufp->chgBit(oldp+1660,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_XOR_TYPE));
        bufp->chgBit(oldp+1661,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SLL_TYPE));
        bufp->chgBit(oldp+1662,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SRL_TYPE));
        bufp->chgBit(oldp+1663,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SRA_TYPE));
        bufp->chgBit(oldp+1664,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_MUL_TYPE));
        bufp->chgBit(oldp+1665,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_MULH_TYPE));
        bufp->chgBit(oldp+1666,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_MULHU_TYPE));
        bufp->chgBit(oldp+1667,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_DIV_TYPE));
        bufp->chgBit(oldp+1668,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_MOD_TYPE));
        bufp->chgBit(oldp+1669,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_DIVU_TYPE));
        bufp->chgBit(oldp+1670,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_MODU_TYPE));
        bufp->chgBit(oldp+1671,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SLLI_TYPE));
        bufp->chgBit(oldp+1672,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SRLI_TYPE));
        bufp->chgBit(oldp+1673,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SRAI_TYPE));
        bufp->chgBit(oldp+1674,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SLTI_TYPE));
        bufp->chgBit(oldp+1675,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SLTUI_TYPE));
        bufp->chgBit(oldp+1676,((IData)((0x2800000ULL 
                                         == (0xffc00000ULL 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)))));
        bufp->chgBit(oldp+1677,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ANDI_TYPE));
        bufp->chgBit(oldp+1678,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ORI_TYPE));
        bufp->chgBit(oldp+1679,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_XORI_TYPE));
        bufp->chgCData(oldp+1680,((7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                 >> 0x19U)))),3);
        bufp->chgBit(oldp+1681,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LUI_TYPE));
        bufp->chgBit(oldp+1682,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_PCADDU12I_TYPE));
        bufp->chgBit(oldp+1683,((IData)((0x20000000ULL 
                                         == (0xff000000ULL 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)))));
        bufp->chgBit(oldp+1684,((IData)((0x21000000ULL 
                                         == (0xff000000ULL 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)))));
        bufp->chgBit(oldp+1685,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_B_TYPE));
        bufp->chgBit(oldp+1686,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_H_TYPE));
        bufp->chgBit(oldp+1687,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_W_TYPE));
        bufp->chgBit(oldp+1688,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ST_B_TYPE));
        bufp->chgBit(oldp+1689,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ST_H_TYPE));
        bufp->chgBit(oldp+1690,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ST_W_TYPE));
        bufp->chgBit(oldp+1691,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_BU_TYPE));
        bufp->chgBit(oldp+1692,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_HU_TYPE));
        bufp->chgCData(oldp+1693,((0xfU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                   >> 0x1aU)))),4);
        bufp->chgBit(oldp+1694,((IData)((0x50000000ULL 
                                         == (0xfc000000ULL 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)))));
        bufp->chgBit(oldp+1695,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BEQ_TYPE));
        bufp->chgBit(oldp+1696,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BNE_TYPE));
        bufp->chgBit(oldp+1697,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BLT_TYPE));
        bufp->chgBit(oldp+1698,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BGE_TYPE));
        bufp->chgBit(oldp+1699,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BLTU_TYPE));
        bufp->chgBit(oldp+1700,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BGEU_TYPE));
        bufp->chgBit(oldp+1701,((IData)((0x4000000ULL 
                                         == (0xff0003e0ULL 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)))));
        bufp->chgBit(oldp+1702,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_CSRWR_TYPE));
        bufp->chgBit(oldp+1703,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_TLB_TYPEM));
        bufp->chgBit(oldp+1704,((IData)(((0x3000ULL 
                                          == (0x7c00ULL 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)) 
                                         & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_TLB_TYPEM)))));
        bufp->chgBit(oldp+1705,((IData)(((0x3400ULL 
                                          == (0x7c00ULL 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)) 
                                         & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_TLB_TYPEM)))));
        bufp->chgBit(oldp+1706,((IData)((0x6488000ULL 
                                         == (0xffff8000ULL 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)))));
        bufp->chgCData(oldp+1707,((0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out))),5);
        bufp->chgBit(oldp+1708,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_reg_inst));
        bufp->chgBit(oldp+1709,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_shamt_inst));
        bufp->chgBit(oldp+1710,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_regimm_inst));
        bufp->chgBit(oldp+1711,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_u_inst));
        bufp->chgBit(oldp+1712,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_b_inst));
        bufp->chgBit(oldp+1713,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT____VdfgTmp_hfa3cf28f__0) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_u_inst) 
                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT____VdfgTmp_h9c888c86__0)))));
        bufp->chgBit(oldp+1714,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_JIRL_TYPE) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_branch_inst))));
        bufp->chgBit(oldp+1715,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT____VdfgTmp_hfa3cf28f__0) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT____VdfgTmp_hc260b695__0))));
        bufp->chgBit(oldp+1716,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_PCADDU12I_TYPE) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT____VdfgTmp_h9c888c86__0))));
        bufp->chgSData(oldp+1717,((0x3fffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                                               << 0xbU) 
                                              | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U] 
                                                 >> 0x15U)))),14);
        bufp->chgBit(oldp+1718,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                                       >> 4U))));
        bufp->chgBit(oldp+1719,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                                       >> 5U))));
        bufp->chgBit(oldp+1720,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                                       >> 6U))));
        bufp->chgBit(oldp+1721,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[1U] 
                                       >> 2U))));
        bufp->chgCData(oldp+1722,((0x3fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__csrmsg_data[0U] 
                                            >> 0x14U))),6);
        bufp->chgSData(oldp+1723,((0x1ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__csrmsg_data[0U] 
                                             >> 0xbU))),9);
        bufp->chgIData(oldp+1724,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__csrmsg_data[2U] 
                                    << 6U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__csrmsg_data[1U] 
                                              >> 0x1aU))),32);
        bufp->chgIData(oldp+1725,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__csrmsg_data[1U] 
                                    << 6U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__csrmsg_data[0U] 
                                              >> 0x1aU))),32);
        bufp->chgBit(oldp+1726,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__csrmsg_data[0U] 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1727,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U] 
                                       >> 7U))));
        bufp->chgBit(oldp+1728,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U] 
                                       >> 9U))));
        bufp->chgIData(oldp+1729,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x1dU]),32);
        bufp->chgIData(oldp+1730,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x1cU]),32);
        bufp->chgIData(oldp+1731,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x1bU]),32);
        bufp->chgIData(oldp+1732,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x1aU]),32);
        bufp->chgIData(oldp+1733,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x19U]),32);
        bufp->chgIData(oldp+1734,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x18U]),32);
        bufp->chgIData(oldp+1735,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x17U]),32);
        bufp->chgIData(oldp+1736,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x16U]),32);
        bufp->chgIData(oldp+1737,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x15U]),32);
        bufp->chgIData(oldp+1738,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x14U]),32);
        bufp->chgIData(oldp+1739,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x13U]),32);
        bufp->chgIData(oldp+1740,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x12U]),32);
        bufp->chgIData(oldp+1741,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x11U]),32);
        bufp->chgIData(oldp+1742,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0x10U]),32);
        bufp->chgIData(oldp+1743,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0xfU]),32);
        bufp->chgIData(oldp+1744,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0xeU]),32);
        bufp->chgIData(oldp+1745,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0xdU]),32);
        bufp->chgIData(oldp+1746,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0xcU]),32);
        bufp->chgIData(oldp+1747,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0xbU]),32);
        bufp->chgIData(oldp+1748,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0xaU]),32);
        bufp->chgIData(oldp+1749,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[9U]),32);
        bufp->chgIData(oldp+1750,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[8U]),32);
        bufp->chgIData(oldp+1751,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[7U]),32);
        bufp->chgIData(oldp+1752,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[6U]),32);
        bufp->chgIData(oldp+1753,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[5U]),32);
        bufp->chgIData(oldp+1754,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[4U]),32);
        bufp->chgIData(oldp+1755,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[3U]),32);
        bufp->chgIData(oldp+1756,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[2U]),32);
        bufp->chgIData(oldp+1757,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[1U]),32);
        bufp->chgIData(oldp+1758,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr[0U]),32);
        bufp->chgBit(oldp+1759,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__inter_ti));
        bufp->chgIData(oldp+1760,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__pc_tmp),32);
        bufp->chgQData(oldp+1761,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__stable_counter),64);
        bufp->chgIData(oldp+1763,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__musk_rel),32);
        bufp->chgBit(oldp+1764,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid));
        bufp->chgBit(oldp+1765,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[0xaU] 
                                       >> 0x16U))));
        bufp->chgBit(oldp+1766,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[0xaU] 
                                       >> 0x15U))));
        bufp->chgCData(oldp+1767,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[0xaU] 
                                            >> 0x10U))),5);
        bufp->chgBit(oldp+1768,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[0xaU] 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1769,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[0xaU] 
                                       >> 0xeU))));
        bufp->chgCData(oldp+1770,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[0xaU] 
                                         >> 0xcU))),2);
        bufp->chgBit(oldp+1771,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[0xaU] 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1772,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[0xaU] 
                                       >> 0xaU))));
        bufp->chgCData(oldp+1773,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[0xaU] 
                                         >> 8U))),2);
        bufp->chgCData(oldp+1774,((0xffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[0xaU])),8);
        bufp->chgCData(oldp+1775,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[9U] 
                                   >> 0x18U)),8);
        bufp->chgIData(oldp+1776,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[9U] 
                                    << 8U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[8U] 
                                              >> 0x18U))),32);
        bufp->chgIData(oldp+1777,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[8U] 
                                    << 8U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U] 
                                              >> 0x18U))),32);
        bufp->chgIData(oldp+1778,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U] 
                                    << 8U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[6U] 
                                              >> 0x18U))),32);
        bufp->chgCData(oldp+1779,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[6U] 
                                            >> 0x13U))),5);
        bufp->chgCData(oldp+1780,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[6U] 
                                            >> 0xeU))),5);
        bufp->chgCData(oldp+1781,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[6U] 
                                            >> 9U))),5);
        bufp->chgIData(oldp+1782,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[6U] 
                                    << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[5U] 
                                                 >> 9U))),32);
        bufp->chgIData(oldp+1783,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[5U] 
                                    << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[4U] 
                                                 >> 9U))),32);
        bufp->chgIData(oldp+1784,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[4U] 
                                    << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[3U] 
                                                 >> 9U))),32);
        bufp->chgBit(oldp+1785,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[3U] 
                                       >> 8U))));
        bufp->chgBit(oldp+1786,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[3U] 
                                       >> 7U))));
        bufp->chgBit(oldp+1787,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[3U] 
                                       >> 6U))));
        bufp->chgBit(oldp+1788,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[3U] 
                                       >> 5U))));
        bufp->chgBit(oldp+1789,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[3U] 
                                       >> 4U))));
        bufp->chgBit(oldp+1790,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[3U] 
                                       >> 3U))));
        bufp->chgSData(oldp+1791,((0x3fffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[3U] 
                                               << 0xbU) 
                                              | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[2U] 
                                                 >> 0x15U)))),14);
        bufp->chgCData(oldp+1792,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[2U] 
                                            >> 0x10U))),5);
        bufp->chgCData(oldp+1793,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[2U] 
                                            >> 0xbU))),5);
        bufp->chgBit(oldp+1794,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[2U] 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1795,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[2U] 
                                       >> 9U))));
        bufp->chgBit(oldp+1796,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[2U] 
                                       >> 8U))));
        bufp->chgBit(oldp+1797,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[2U] 
                                       >> 7U))));
        bufp->chgCData(oldp+1798,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[2U] 
                                         >> 5U))),2);
        bufp->chgIData(oldp+1799,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[2U] 
                                    << 0x1bU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[1U] 
                                                 >> 5U))),32);
        bufp->chgBit(oldp+1800,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[1U] 
                                       >> 4U))));
        bufp->chgBit(oldp+1801,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[1U] 
                                       >> 3U))));
        bufp->chgBit(oldp+1802,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[1U] 
                                       >> 2U))));
        bufp->chgBit(oldp+1803,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[1U] 
                                       >> 1U))));
        bufp->chgCData(oldp+1804,((0xfU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[1U] 
                                            << 3U) 
                                           | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[0U] 
                                              >> 0x1dU)))),4);
        bufp->chgSData(oldp+1805,((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[0U] 
                                             >> 0x13U))),10);
        bufp->chgIData(oldp+1806,((0x7ffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[0U])),19);
        bufp->chgBit(oldp+1807,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__MEM_forward_valid));
        bufp->chgBit(oldp+1808,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__WB_forward_valid));
        bufp->chgIData(oldp+1809,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__rj_ex_true_temp),32);
        bufp->chgBit(oldp+1810,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__rj_ex_true_temp_valid));
        bufp->chgIData(oldp+1811,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__rk_ex_true_temp),32);
        bufp->chgBit(oldp+1812,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__rk_ex_true_temp_valid));
        bufp->chgIData(oldp+1813,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__rd_ex_true_temp),32);
        bufp->chgBit(oldp+1814,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__rd_ex_true_temp_valid));
        bufp->chgBit(oldp+1815,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__csrmsg_data[0U] 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1816,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[3U] 
                                       >> 3U))));
        bufp->chgBit(oldp+1817,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[3U] 
                                       >> 3U))));
        bufp->chgBit(oldp+1818,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[3U] 
                                       >> 6U))));
        bufp->chgBit(oldp+1819,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[1U] 
                                       >> 2U))));
        bufp->chgBit(oldp+1820,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT__cancel));
        bufp->chgBit(oldp+1821,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT____VdfgTmp_hf7cffa19__0) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT____VdfgTmp_h2a69b9a6__0))));
        bufp->chgBit(oldp+1822,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT____VdfgTmp_h81692869__0) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT____VdfgTmp_h7e7f3c05__0))));
        bufp->chgBit(oldp+1823,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__alusel1)) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT____VdfgTmp_hf7cffa19__0)) 
                                 | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__alusel2)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT____VdfgTmp_h0dac690a__0)) 
                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT____VdfgTmp_h2a69b9a6__0)))));
        bufp->chgBit(oldp+1824,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT____VdfgTmp_hf7cffa19__0) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT____VdfgTmp_h0dac690a__0) 
                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT____VdfgTmp_h2a69b9a6__0)))));
        bufp->chgBit(oldp+1825,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT____VdfgTmp_h81692869__0) 
                                 | (((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xaU] 
                                               >> 9U)) 
                                     == (0x1fU & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0xaU)))) 
                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT____VdfgTmp_h7e7f3c05__0)))));
        bufp->chgBit(oldp+1826,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__brstall) 
                                 | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0xaU] 
                                      >> 0xeU) & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_branch_inst)) 
                                                  & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__alusel1)) 
                                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT____VdfgTmp_hf7cffa19__0)) 
                                                     | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__alusel2)) 
                                                         & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT____VdfgTmp_h0dac690a__0)) 
                                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT____VdfgTmp_h2a69b9a6__0))))) 
                                    | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT____VdfgTmp_hf7cffa19__0) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT____VdfgTmp_h0dac690a__0) 
                                            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT____VdfgTmp_h2a69b9a6__0))) 
                                        & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[3U] 
                                           >> 3U)) 
                                       | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT____VdfgTmp_h81692869__0) 
                                           | (((0x1fU 
                                                & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xaU] 
                                                   >> 9U)) 
                                               == (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                              >> 0xaU)))) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT____VdfgTmp_h7e7f3c05__0))) 
                                          & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[3U] 
                                             >> 3U)))))));
        bufp->chgBit(oldp+1827,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__pipeline_valid));
        bufp->chgIData(oldp+1828,((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__pipeline_data 
                                           >> 0x20U))),32);
        bufp->chgIData(oldp+1829,((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__pipeline_data)),32);
        bufp->chgBit(oldp+1830,(((4U == (0xffU & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0x18U)))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__is_csr_wen_id))));
        bufp->chgBit(oldp+1831,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_valid));
        bufp->chgBit(oldp+1832,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[0xbU] 
                                       >> 9U))));
        bufp->chgBit(oldp+1833,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[0xbU] 
                                       >> 8U))));
        bufp->chgCData(oldp+1834,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[0xbU] 
                                         >> 6U))),2);
        bufp->chgBit(oldp+1835,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[0xbU] 
                                       >> 5U))));
        bufp->chgBit(oldp+1836,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[0xbU] 
                                       >> 4U))));
        bufp->chgCData(oldp+1837,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[0xbU] 
                                         >> 2U))),2);
        bufp->chgCData(oldp+1838,((0xffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[0xbU] 
                                             << 6U) 
                                            | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[0xaU] 
                                               >> 0x1aU)))),8);
        bufp->chgCData(oldp+1839,((0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[0xaU] 
                                            >> 0x12U))),8);
        bufp->chgCData(oldp+1840,((0xfU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[0xaU] 
                                           >> 0xeU))),4);
        bufp->chgCData(oldp+1841,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[0xaU] 
                                            >> 9U))),5);
        bufp->chgIData(oldp+1842,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[0xaU] 
                                    << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[9U] 
                                                 >> 9U))),32);
        bufp->chgIData(oldp+1843,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[9U] 
                                    << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[8U] 
                                                 >> 9U))),32);
        bufp->chgIData(oldp+1844,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[8U] 
                                    << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[7U] 
                                                 >> 9U))),32);
        bufp->chgIData(oldp+1845,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[7U] 
                                    << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[6U] 
                                                 >> 9U))),32);
        bufp->chgIData(oldp+1846,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[6U] 
                                    << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[5U] 
                                                 >> 9U))),32);
        bufp->chgIData(oldp+1847,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[5U] 
                                    << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[4U] 
                                                 >> 9U))),32);
        bufp->chgIData(oldp+1848,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[4U] 
                                    << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[3U] 
                                                 >> 9U))),32);
        bufp->chgBit(oldp+1849,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[3U] 
                                       >> 8U))));
        bufp->chgBit(oldp+1850,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[3U] 
                                       >> 7U))));
        bufp->chgBit(oldp+1851,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[3U] 
                                       >> 6U))));
        bufp->chgBit(oldp+1852,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[3U] 
                                       >> 5U))));
        bufp->chgBit(oldp+1853,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[3U] 
                                       >> 4U))));
        bufp->chgBit(oldp+1854,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[3U] 
                                       >> 3U))));
        bufp->chgSData(oldp+1855,((0x3fffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[3U] 
                                               << 0xbU) 
                                              | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[2U] 
                                                 >> 0x15U)))),14);
        bufp->chgCData(oldp+1856,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[2U] 
                                            >> 0x10U))),5);
        bufp->chgCData(oldp+1857,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[2U] 
                                            >> 0xbU))),5);
        bufp->chgBit(oldp+1858,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[2U] 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1859,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[2U] 
                                       >> 9U))));
        bufp->chgBit(oldp+1860,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[2U] 
                                       >> 8U))));
        bufp->chgBit(oldp+1861,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[2U] 
                                       >> 7U))));
        bufp->chgCData(oldp+1862,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[2U] 
                                         >> 5U))),2);
        bufp->chgIData(oldp+1863,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[2U] 
                                    << 0x1bU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[1U] 
                                                 >> 5U))),32);
        bufp->chgBit(oldp+1864,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[1U] 
                                       >> 4U))));
        bufp->chgBit(oldp+1865,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[1U] 
                                       >> 3U))));
        bufp->chgBit(oldp+1866,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[1U] 
                                       >> 2U))));
        bufp->chgBit(oldp+1867,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[1U] 
                                       >> 1U))));
        bufp->chgCData(oldp+1868,((0xfU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[1U] 
                                            << 3U) 
                                           | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[0U] 
                                              >> 0x1dU)))),4);
        bufp->chgSData(oldp+1869,((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[0U] 
                                             >> 0x13U))),10);
        bufp->chgIData(oldp+1870,((0x7ffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[0U])),19);
        bufp->chgCData(oldp+1871,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U] 
                                            >> 0x10U))),5);
        bufp->chgCData(oldp+1872,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U] 
                                            >> 0xbU))),5);
        bufp->chgIData(oldp+1873,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[0]),32);
        bufp->chgIData(oldp+1874,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[1]),32);
        bufp->chgIData(oldp+1875,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[2]),32);
        bufp->chgIData(oldp+1876,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[3]),32);
        bufp->chgIData(oldp+1877,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[4]),32);
        bufp->chgIData(oldp+1878,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[5]),32);
        bufp->chgIData(oldp+1879,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[6]),32);
        bufp->chgIData(oldp+1880,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[7]),32);
        bufp->chgIData(oldp+1881,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[8]),32);
        bufp->chgIData(oldp+1882,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[9]),32);
        bufp->chgIData(oldp+1883,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[10]),32);
        bufp->chgIData(oldp+1884,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[11]),32);
        bufp->chgIData(oldp+1885,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[12]),32);
        bufp->chgIData(oldp+1886,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[13]),32);
        bufp->chgIData(oldp+1887,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[14]),32);
        bufp->chgIData(oldp+1888,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[15]),32);
        bufp->chgIData(oldp+1889,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[16]),32);
        bufp->chgIData(oldp+1890,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[17]),32);
        bufp->chgIData(oldp+1891,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[18]),32);
        bufp->chgIData(oldp+1892,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[19]),32);
        bufp->chgIData(oldp+1893,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[20]),32);
        bufp->chgIData(oldp+1894,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[21]),32);
        bufp->chgIData(oldp+1895,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[22]),32);
        bufp->chgIData(oldp+1896,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[23]),32);
        bufp->chgIData(oldp+1897,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[24]),32);
        bufp->chgIData(oldp+1898,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[25]),32);
        bufp->chgIData(oldp+1899,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[26]),32);
        bufp->chgIData(oldp+1900,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[27]),32);
        bufp->chgIData(oldp+1901,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[28]),32);
        bufp->chgIData(oldp+1902,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[29]),32);
        bufp->chgIData(oldp+1903,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[30]),32);
        bufp->chgIData(oldp+1904,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[31]),32);
        bufp->chgIData(oldp+1905,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC 
                                   >> 0xdU)),19);
        bufp->chgBit(oldp+1906,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC 
                                       >> 0xcU))));
        bufp->chgIData(oldp+1907,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellinp__tlb__s1_vppn),19);
        bufp->chgBit(oldp+1908,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1909,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U] 
                                       >> 8U))));
        bufp->chgBit(oldp+1910,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U] 
                                       >> 0xaU))));
        bufp->chgCData(oldp+1911,((7U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U] 
                                         >> 0x15U))),3);
        bufp->chgBit(oldp+1912,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [0U][2U] >> 0x18U))));
        bufp->chgSData(oldp+1913,((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                             [0U][2U] 
                                             >> 0xeU))),10);
        bufp->chgBit(oldp+1914,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [0U][2U] >> 0xdU))));
        bufp->chgCData(oldp+1915,((0x3fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                            [0U][2U] 
                                            >> 7U))),6);
        bufp->chgIData(oldp+1916,((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                [0U][2U] 
                                                << 0xcU) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                  [0U][1U] 
                                                  >> 0x14U)))),19);
        bufp->chgBit(oldp+1917,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [0U][1U] >> 0x13U))));
        bufp->chgBit(oldp+1918,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [0U][1U] >> 0x12U))));
        bufp->chgCData(oldp+1919,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [0U][1U] >> 0x10U))),2);
        bufp->chgCData(oldp+1920,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [0U][1U] >> 0xeU))),2);
        bufp->chgIData(oldp+1921,((0xfffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                [0U][1U] 
                                                << 6U) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                  [0U][0U] 
                                                  >> 0x1aU)))),20);
        bufp->chgBit(oldp+1922,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [0U][0U] >> 0x19U))));
        bufp->chgBit(oldp+1923,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [0U][0U] >> 0x18U))));
        bufp->chgCData(oldp+1924,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [0U][0U] >> 0x16U))),2);
        bufp->chgCData(oldp+1925,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [0U][0U] >> 0x14U))),2);
        bufp->chgIData(oldp+1926,((0xfffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                   [0U][0U])),20);
        bufp->chgBit(oldp+1927,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [1U][2U] >> 0x18U))));
        bufp->chgSData(oldp+1928,((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                             [1U][2U] 
                                             >> 0xeU))),10);
        bufp->chgBit(oldp+1929,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [1U][2U] >> 0xdU))));
        bufp->chgCData(oldp+1930,((0x3fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                            [1U][2U] 
                                            >> 7U))),6);
        bufp->chgIData(oldp+1931,((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                [1U][2U] 
                                                << 0xcU) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                  [1U][1U] 
                                                  >> 0x14U)))),19);
        bufp->chgBit(oldp+1932,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [1U][1U] >> 0x13U))));
        bufp->chgBit(oldp+1933,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [1U][1U] >> 0x12U))));
        bufp->chgCData(oldp+1934,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [1U][1U] >> 0x10U))),2);
        bufp->chgCData(oldp+1935,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [1U][1U] >> 0xeU))),2);
        bufp->chgIData(oldp+1936,((0xfffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                [1U][1U] 
                                                << 6U) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                  [1U][0U] 
                                                  >> 0x1aU)))),20);
        bufp->chgBit(oldp+1937,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [1U][0U] >> 0x19U))));
        bufp->chgBit(oldp+1938,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [1U][0U] >> 0x18U))));
        bufp->chgCData(oldp+1939,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [1U][0U] >> 0x16U))),2);
        bufp->chgCData(oldp+1940,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [1U][0U] >> 0x14U))),2);
        bufp->chgIData(oldp+1941,((0xfffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                   [1U][0U])),20);
        bufp->chgBit(oldp+1942,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [2U][2U] >> 0x18U))));
        bufp->chgSData(oldp+1943,((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                             [2U][2U] 
                                             >> 0xeU))),10);
        bufp->chgBit(oldp+1944,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [2U][2U] >> 0xdU))));
        bufp->chgCData(oldp+1945,((0x3fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                            [2U][2U] 
                                            >> 7U))),6);
        bufp->chgIData(oldp+1946,((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                [2U][2U] 
                                                << 0xcU) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                  [2U][1U] 
                                                  >> 0x14U)))),19);
        bufp->chgBit(oldp+1947,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [2U][1U] >> 0x13U))));
        bufp->chgBit(oldp+1948,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [2U][1U] >> 0x12U))));
        bufp->chgCData(oldp+1949,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [2U][1U] >> 0x10U))),2);
        bufp->chgCData(oldp+1950,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [2U][1U] >> 0xeU))),2);
        bufp->chgIData(oldp+1951,((0xfffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                [2U][1U] 
                                                << 6U) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                  [2U][0U] 
                                                  >> 0x1aU)))),20);
        bufp->chgBit(oldp+1952,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [2U][0U] >> 0x19U))));
        bufp->chgBit(oldp+1953,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [2U][0U] >> 0x18U))));
        bufp->chgCData(oldp+1954,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [2U][0U] >> 0x16U))),2);
        bufp->chgCData(oldp+1955,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [2U][0U] >> 0x14U))),2);
        bufp->chgIData(oldp+1956,((0xfffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                   [2U][0U])),20);
        bufp->chgBit(oldp+1957,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [3U][2U] >> 0x18U))));
        bufp->chgSData(oldp+1958,((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                             [3U][2U] 
                                             >> 0xeU))),10);
        bufp->chgBit(oldp+1959,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [3U][2U] >> 0xdU))));
        bufp->chgCData(oldp+1960,((0x3fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                            [3U][2U] 
                                            >> 7U))),6);
        bufp->chgIData(oldp+1961,((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                [3U][2U] 
                                                << 0xcU) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                  [3U][1U] 
                                                  >> 0x14U)))),19);
        bufp->chgBit(oldp+1962,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [3U][1U] >> 0x13U))));
        bufp->chgBit(oldp+1963,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [3U][1U] >> 0x12U))));
        bufp->chgCData(oldp+1964,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [3U][1U] >> 0x10U))),2);
        bufp->chgCData(oldp+1965,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [3U][1U] >> 0xeU))),2);
        bufp->chgIData(oldp+1966,((0xfffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                [3U][1U] 
                                                << 6U) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                  [3U][0U] 
                                                  >> 0x1aU)))),20);
        bufp->chgBit(oldp+1967,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [3U][0U] >> 0x19U))));
        bufp->chgBit(oldp+1968,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [3U][0U] >> 0x18U))));
        bufp->chgCData(oldp+1969,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [3U][0U] >> 0x16U))),2);
        bufp->chgCData(oldp+1970,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [3U][0U] >> 0x14U))),2);
        bufp->chgIData(oldp+1971,((0xfffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                   [3U][0U])),20);
        bufp->chgBit(oldp+1972,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [4U][2U] >> 0x18U))));
        bufp->chgSData(oldp+1973,((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                             [4U][2U] 
                                             >> 0xeU))),10);
        bufp->chgBit(oldp+1974,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [4U][2U] >> 0xdU))));
        bufp->chgCData(oldp+1975,((0x3fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                            [4U][2U] 
                                            >> 7U))),6);
        bufp->chgIData(oldp+1976,((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                [4U][2U] 
                                                << 0xcU) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                  [4U][1U] 
                                                  >> 0x14U)))),19);
        bufp->chgBit(oldp+1977,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [4U][1U] >> 0x13U))));
        bufp->chgBit(oldp+1978,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [4U][1U] >> 0x12U))));
        bufp->chgCData(oldp+1979,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [4U][1U] >> 0x10U))),2);
        bufp->chgCData(oldp+1980,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [4U][1U] >> 0xeU))),2);
        bufp->chgIData(oldp+1981,((0xfffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                [4U][1U] 
                                                << 6U) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                  [4U][0U] 
                                                  >> 0x1aU)))),20);
        bufp->chgBit(oldp+1982,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [4U][0U] >> 0x19U))));
        bufp->chgBit(oldp+1983,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [4U][0U] >> 0x18U))));
        bufp->chgCData(oldp+1984,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [4U][0U] >> 0x16U))),2);
        bufp->chgCData(oldp+1985,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [4U][0U] >> 0x14U))),2);
        bufp->chgIData(oldp+1986,((0xfffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                   [4U][0U])),20);
        bufp->chgBit(oldp+1987,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [5U][2U] >> 0x18U))));
        bufp->chgSData(oldp+1988,((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                             [5U][2U] 
                                             >> 0xeU))),10);
        bufp->chgBit(oldp+1989,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [5U][2U] >> 0xdU))));
        bufp->chgCData(oldp+1990,((0x3fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                            [5U][2U] 
                                            >> 7U))),6);
        bufp->chgIData(oldp+1991,((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                [5U][2U] 
                                                << 0xcU) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                  [5U][1U] 
                                                  >> 0x14U)))),19);
        bufp->chgBit(oldp+1992,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [5U][1U] >> 0x13U))));
        bufp->chgBit(oldp+1993,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [5U][1U] >> 0x12U))));
        bufp->chgCData(oldp+1994,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [5U][1U] >> 0x10U))),2);
        bufp->chgCData(oldp+1995,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [5U][1U] >> 0xeU))),2);
        bufp->chgIData(oldp+1996,((0xfffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                [5U][1U] 
                                                << 6U) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                  [5U][0U] 
                                                  >> 0x1aU)))),20);
        bufp->chgBit(oldp+1997,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [5U][0U] >> 0x19U))));
        bufp->chgBit(oldp+1998,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [5U][0U] >> 0x18U))));
        bufp->chgCData(oldp+1999,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [5U][0U] >> 0x16U))),2);
        bufp->chgCData(oldp+2000,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [5U][0U] >> 0x14U))),2);
        bufp->chgIData(oldp+2001,((0xfffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                   [5U][0U])),20);
        bufp->chgBit(oldp+2002,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [6U][2U] >> 0x18U))));
        bufp->chgSData(oldp+2003,((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                             [6U][2U] 
                                             >> 0xeU))),10);
        bufp->chgBit(oldp+2004,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [6U][2U] >> 0xdU))));
        bufp->chgCData(oldp+2005,((0x3fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                            [6U][2U] 
                                            >> 7U))),6);
        bufp->chgIData(oldp+2006,((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                [6U][2U] 
                                                << 0xcU) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                  [6U][1U] 
                                                  >> 0x14U)))),19);
        bufp->chgBit(oldp+2007,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [6U][1U] >> 0x13U))));
        bufp->chgBit(oldp+2008,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [6U][1U] >> 0x12U))));
        bufp->chgCData(oldp+2009,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [6U][1U] >> 0x10U))),2);
        bufp->chgCData(oldp+2010,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [6U][1U] >> 0xeU))),2);
        bufp->chgIData(oldp+2011,((0xfffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                [6U][1U] 
                                                << 6U) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                  [6U][0U] 
                                                  >> 0x1aU)))),20);
        bufp->chgBit(oldp+2012,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [6U][0U] >> 0x19U))));
        bufp->chgBit(oldp+2013,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [6U][0U] >> 0x18U))));
        bufp->chgCData(oldp+2014,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [6U][0U] >> 0x16U))),2);
        bufp->chgCData(oldp+2015,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [6U][0U] >> 0x14U))),2);
        bufp->chgIData(oldp+2016,((0xfffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                   [6U][0U])),20);
        bufp->chgBit(oldp+2017,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [7U][2U] >> 0x18U))));
        bufp->chgSData(oldp+2018,((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                             [7U][2U] 
                                             >> 0xeU))),10);
        bufp->chgBit(oldp+2019,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [7U][2U] >> 0xdU))));
        bufp->chgCData(oldp+2020,((0x3fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                            [7U][2U] 
                                            >> 7U))),6);
        bufp->chgIData(oldp+2021,((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                [7U][2U] 
                                                << 0xcU) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                  [7U][1U] 
                                                  >> 0x14U)))),19);
        bufp->chgBit(oldp+2022,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [7U][1U] >> 0x13U))));
        bufp->chgBit(oldp+2023,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [7U][1U] >> 0x12U))));
        bufp->chgCData(oldp+2024,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [7U][1U] >> 0x10U))),2);
        bufp->chgCData(oldp+2025,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [7U][1U] >> 0xeU))),2);
        bufp->chgIData(oldp+2026,((0xfffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                [7U][1U] 
                                                << 6U) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                  [7U][0U] 
                                                  >> 0x1aU)))),20);
        bufp->chgBit(oldp+2027,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [7U][0U] >> 0x19U))));
        bufp->chgBit(oldp+2028,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [7U][0U] >> 0x18U))));
        bufp->chgCData(oldp+2029,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [7U][0U] >> 0x16U))),2);
        bufp->chgCData(oldp+2030,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [7U][0U] >> 0x14U))),2);
        bufp->chgIData(oldp+2031,((0xfffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                   [7U][0U])),20);
        bufp->chgBit(oldp+2032,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [8U][2U] >> 0x18U))));
        bufp->chgSData(oldp+2033,((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                             [8U][2U] 
                                             >> 0xeU))),10);
        bufp->chgBit(oldp+2034,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [8U][2U] >> 0xdU))));
        bufp->chgCData(oldp+2035,((0x3fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                            [8U][2U] 
                                            >> 7U))),6);
        bufp->chgIData(oldp+2036,((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                [8U][2U] 
                                                << 0xcU) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                  [8U][1U] 
                                                  >> 0x14U)))),19);
        bufp->chgBit(oldp+2037,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [8U][1U] >> 0x13U))));
        bufp->chgBit(oldp+2038,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [8U][1U] >> 0x12U))));
        bufp->chgCData(oldp+2039,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [8U][1U] >> 0x10U))),2);
        bufp->chgCData(oldp+2040,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [8U][1U] >> 0xeU))),2);
        bufp->chgIData(oldp+2041,((0xfffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                [8U][1U] 
                                                << 6U) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                  [8U][0U] 
                                                  >> 0x1aU)))),20);
        bufp->chgBit(oldp+2042,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [8U][0U] >> 0x19U))));
        bufp->chgBit(oldp+2043,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [8U][0U] >> 0x18U))));
        bufp->chgCData(oldp+2044,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [8U][0U] >> 0x16U))),2);
        bufp->chgCData(oldp+2045,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [8U][0U] >> 0x14U))),2);
        bufp->chgIData(oldp+2046,((0xfffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                   [8U][0U])),20);
        bufp->chgBit(oldp+2047,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [9U][2U] >> 0x18U))));
        bufp->chgSData(oldp+2048,((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                             [9U][2U] 
                                             >> 0xeU))),10);
        bufp->chgBit(oldp+2049,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [9U][2U] >> 0xdU))));
        bufp->chgCData(oldp+2050,((0x3fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                            [9U][2U] 
                                            >> 7U))),6);
        bufp->chgIData(oldp+2051,((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                [9U][2U] 
                                                << 0xcU) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                  [9U][1U] 
                                                  >> 0x14U)))),19);
        bufp->chgBit(oldp+2052,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [9U][1U] >> 0x13U))));
        bufp->chgBit(oldp+2053,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [9U][1U] >> 0x12U))));
        bufp->chgCData(oldp+2054,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [9U][1U] >> 0x10U))),2);
        bufp->chgCData(oldp+2055,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [9U][1U] >> 0xeU))),2);
        bufp->chgIData(oldp+2056,((0xfffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                [9U][1U] 
                                                << 6U) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                  [9U][0U] 
                                                  >> 0x1aU)))),20);
        bufp->chgBit(oldp+2057,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [9U][0U] >> 0x19U))));
        bufp->chgBit(oldp+2058,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [9U][0U] >> 0x18U))));
        bufp->chgCData(oldp+2059,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [9U][0U] >> 0x16U))),2);
        bufp->chgCData(oldp+2060,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [9U][0U] >> 0x14U))),2);
        bufp->chgIData(oldp+2061,((0xfffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                   [9U][0U])),20);
        bufp->chgBit(oldp+2062,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [0xaU][2U] >> 0x18U))));
        bufp->chgSData(oldp+2063,((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                             [0xaU][2U] 
                                             >> 0xeU))),10);
        bufp->chgBit(oldp+2064,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [0xaU][2U] >> 0xdU))));
        bufp->chgCData(oldp+2065,((0x3fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                            [0xaU][2U] 
                                            >> 7U))),6);
        bufp->chgIData(oldp+2066,((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                [0xaU][2U] 
                                                << 0xcU) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                  [0xaU][1U] 
                                                  >> 0x14U)))),19);
        bufp->chgBit(oldp+2067,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [0xaU][1U] >> 0x13U))));
        bufp->chgBit(oldp+2068,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [0xaU][1U] >> 0x12U))));
        bufp->chgCData(oldp+2069,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [0xaU][1U] 
                                         >> 0x10U))),2);
        bufp->chgCData(oldp+2070,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [0xaU][1U] 
                                         >> 0xeU))),2);
        bufp->chgIData(oldp+2071,((0xfffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                [0xaU][1U] 
                                                << 6U) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                  [0xaU][0U] 
                                                  >> 0x1aU)))),20);
        bufp->chgBit(oldp+2072,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [0xaU][0U] >> 0x19U))));
        bufp->chgBit(oldp+2073,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [0xaU][0U] >> 0x18U))));
        bufp->chgCData(oldp+2074,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [0xaU][0U] 
                                         >> 0x16U))),2);
        bufp->chgCData(oldp+2075,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [0xaU][0U] 
                                         >> 0x14U))),2);
        bufp->chgIData(oldp+2076,((0xfffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                   [0xaU][0U])),20);
        bufp->chgBit(oldp+2077,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [0xbU][2U] >> 0x18U))));
        bufp->chgSData(oldp+2078,((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                             [0xbU][2U] 
                                             >> 0xeU))),10);
        bufp->chgBit(oldp+2079,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [0xbU][2U] >> 0xdU))));
        bufp->chgCData(oldp+2080,((0x3fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                            [0xbU][2U] 
                                            >> 7U))),6);
        bufp->chgIData(oldp+2081,((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                [0xbU][2U] 
                                                << 0xcU) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                  [0xbU][1U] 
                                                  >> 0x14U)))),19);
        bufp->chgBit(oldp+2082,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [0xbU][1U] >> 0x13U))));
        bufp->chgBit(oldp+2083,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [0xbU][1U] >> 0x12U))));
        bufp->chgCData(oldp+2084,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [0xbU][1U] 
                                         >> 0x10U))),2);
        bufp->chgCData(oldp+2085,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [0xbU][1U] 
                                         >> 0xeU))),2);
        bufp->chgIData(oldp+2086,((0xfffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                [0xbU][1U] 
                                                << 6U) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                  [0xbU][0U] 
                                                  >> 0x1aU)))),20);
        bufp->chgBit(oldp+2087,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [0xbU][0U] >> 0x19U))));
        bufp->chgBit(oldp+2088,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [0xbU][0U] >> 0x18U))));
        bufp->chgCData(oldp+2089,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [0xbU][0U] 
                                         >> 0x16U))),2);
        bufp->chgCData(oldp+2090,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [0xbU][0U] 
                                         >> 0x14U))),2);
        bufp->chgIData(oldp+2091,((0xfffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                   [0xbU][0U])),20);
        bufp->chgBit(oldp+2092,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [0xcU][2U] >> 0x18U))));
        bufp->chgSData(oldp+2093,((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                             [0xcU][2U] 
                                             >> 0xeU))),10);
        bufp->chgBit(oldp+2094,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [0xcU][2U] >> 0xdU))));
        bufp->chgCData(oldp+2095,((0x3fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                            [0xcU][2U] 
                                            >> 7U))),6);
        bufp->chgIData(oldp+2096,((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                [0xcU][2U] 
                                                << 0xcU) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                  [0xcU][1U] 
                                                  >> 0x14U)))),19);
        bufp->chgBit(oldp+2097,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [0xcU][1U] >> 0x13U))));
        bufp->chgBit(oldp+2098,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [0xcU][1U] >> 0x12U))));
        bufp->chgCData(oldp+2099,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [0xcU][1U] 
                                         >> 0x10U))),2);
        bufp->chgCData(oldp+2100,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [0xcU][1U] 
                                         >> 0xeU))),2);
        bufp->chgIData(oldp+2101,((0xfffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                [0xcU][1U] 
                                                << 6U) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                  [0xcU][0U] 
                                                  >> 0x1aU)))),20);
        bufp->chgBit(oldp+2102,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [0xcU][0U] >> 0x19U))));
        bufp->chgBit(oldp+2103,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [0xcU][0U] >> 0x18U))));
        bufp->chgCData(oldp+2104,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [0xcU][0U] 
                                         >> 0x16U))),2);
        bufp->chgCData(oldp+2105,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [0xcU][0U] 
                                         >> 0x14U))),2);
        bufp->chgIData(oldp+2106,((0xfffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                   [0xcU][0U])),20);
        bufp->chgBit(oldp+2107,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [0xdU][2U] >> 0x18U))));
        bufp->chgSData(oldp+2108,((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                             [0xdU][2U] 
                                             >> 0xeU))),10);
        bufp->chgBit(oldp+2109,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [0xdU][2U] >> 0xdU))));
        bufp->chgCData(oldp+2110,((0x3fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                            [0xdU][2U] 
                                            >> 7U))),6);
        bufp->chgIData(oldp+2111,((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                [0xdU][2U] 
                                                << 0xcU) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                  [0xdU][1U] 
                                                  >> 0x14U)))),19);
        bufp->chgBit(oldp+2112,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [0xdU][1U] >> 0x13U))));
        bufp->chgBit(oldp+2113,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [0xdU][1U] >> 0x12U))));
        bufp->chgCData(oldp+2114,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [0xdU][1U] 
                                         >> 0x10U))),2);
        bufp->chgCData(oldp+2115,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [0xdU][1U] 
                                         >> 0xeU))),2);
        bufp->chgIData(oldp+2116,((0xfffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                [0xdU][1U] 
                                                << 6U) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                  [0xdU][0U] 
                                                  >> 0x1aU)))),20);
        bufp->chgBit(oldp+2117,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [0xdU][0U] >> 0x19U))));
        bufp->chgBit(oldp+2118,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [0xdU][0U] >> 0x18U))));
        bufp->chgCData(oldp+2119,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [0xdU][0U] 
                                         >> 0x16U))),2);
        bufp->chgCData(oldp+2120,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [0xdU][0U] 
                                         >> 0x14U))),2);
        bufp->chgIData(oldp+2121,((0xfffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                   [0xdU][0U])),20);
        bufp->chgBit(oldp+2122,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [0xeU][2U] >> 0x18U))));
        bufp->chgSData(oldp+2123,((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                             [0xeU][2U] 
                                             >> 0xeU))),10);
        bufp->chgBit(oldp+2124,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [0xeU][2U] >> 0xdU))));
        bufp->chgCData(oldp+2125,((0x3fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                            [0xeU][2U] 
                                            >> 7U))),6);
        bufp->chgIData(oldp+2126,((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                [0xeU][2U] 
                                                << 0xcU) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                  [0xeU][1U] 
                                                  >> 0x14U)))),19);
        bufp->chgBit(oldp+2127,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [0xeU][1U] >> 0x13U))));
        bufp->chgBit(oldp+2128,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [0xeU][1U] >> 0x12U))));
        bufp->chgCData(oldp+2129,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [0xeU][1U] 
                                         >> 0x10U))),2);
        bufp->chgCData(oldp+2130,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [0xeU][1U] 
                                         >> 0xeU))),2);
        bufp->chgIData(oldp+2131,((0xfffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                [0xeU][1U] 
                                                << 6U) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                  [0xeU][0U] 
                                                  >> 0x1aU)))),20);
        bufp->chgBit(oldp+2132,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [0xeU][0U] >> 0x19U))));
        bufp->chgBit(oldp+2133,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [0xeU][0U] >> 0x18U))));
        bufp->chgCData(oldp+2134,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [0xeU][0U] 
                                         >> 0x16U))),2);
        bufp->chgCData(oldp+2135,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [0xeU][0U] 
                                         >> 0x14U))),2);
        bufp->chgIData(oldp+2136,((0xfffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                   [0xeU][0U])),20);
        bufp->chgBit(oldp+2137,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [0xfU][2U] >> 0x18U))));
        bufp->chgSData(oldp+2138,((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                             [0xfU][2U] 
                                             >> 0xeU))),10);
        bufp->chgBit(oldp+2139,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [0xfU][2U] >> 0xdU))));
        bufp->chgCData(oldp+2140,((0x3fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                            [0xfU][2U] 
                                            >> 7U))),6);
        bufp->chgIData(oldp+2141,((0x7ffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                [0xfU][2U] 
                                                << 0xcU) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                  [0xfU][1U] 
                                                  >> 0x14U)))),19);
        bufp->chgBit(oldp+2142,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [0xfU][1U] >> 0x13U))));
        bufp->chgBit(oldp+2143,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [0xfU][1U] >> 0x12U))));
        bufp->chgCData(oldp+2144,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [0xfU][1U] 
                                         >> 0x10U))),2);
        bufp->chgCData(oldp+2145,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [0xfU][1U] 
                                         >> 0xeU))),2);
        bufp->chgIData(oldp+2146,((0xfffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                [0xfU][1U] 
                                                << 6U) 
                                               | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                                  [0xfU][0U] 
                                                  >> 0x1aU)))),20);
        bufp->chgBit(oldp+2147,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [0xfU][0U] >> 0x19U))));
        bufp->chgBit(oldp+2148,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                       [0xfU][0U] >> 0x18U))));
        bufp->chgCData(oldp+2149,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [0xfU][0U] 
                                         >> 0x16U))),2);
        bufp->chgCData(oldp+2150,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                         [0xfU][0U] 
                                         >> 0x14U))),2);
        bufp->chgIData(oldp+2151,((0xfffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb
                                   [0xfU][0U])),20);
        bufp->chgIData(oldp+2152,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__i),32);
        bufp->chgBit(oldp+2153,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tmp0));
        bufp->chgBit(oldp+2154,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tmp1));
        bufp->chgBit(oldp+2155,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[0xcU] 
                                       >> 4U))));
        bufp->chgCData(oldp+2156,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[0xcU] 
                                         >> 2U))),2);
        bufp->chgCData(oldp+2157,((0xffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[0xcU] 
                                             << 6U) 
                                            | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[0xbU] 
                                               >> 0x1aU)))),8);
        bufp->chgCData(oldp+2158,((0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[0xbU] 
                                            >> 0x12U))),8);
        bufp->chgCData(oldp+2159,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[0xbU] 
                                            >> 0xdU))),5);
        bufp->chgIData(oldp+2160,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[0xbU] 
                                    << 0x13U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[0xaU] 
                                                 >> 0xdU))),32);
        bufp->chgIData(oldp+2161,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[0xaU] 
                                    << 0x13U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[9U] 
                                                 >> 0xdU))),32);
        bufp->chgIData(oldp+2162,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[9U] 
                                    << 0x13U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[8U] 
                                                 >> 0xdU))),32);
        bufp->chgCData(oldp+2163,((0xfU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[8U] 
                                           >> 9U))),4);
        bufp->chgIData(oldp+2164,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[8U] 
                                    << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[7U] 
                                                 >> 9U))),32);
        bufp->chgIData(oldp+2165,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[7U] 
                                    << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[6U] 
                                                 >> 9U))),32);
        bufp->chgIData(oldp+2166,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[6U] 
                                    << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[5U] 
                                                 >> 9U))),32);
        bufp->chgIData(oldp+2167,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[5U] 
                                    << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[4U] 
                                                 >> 9U))),32);
        bufp->chgIData(oldp+2168,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[4U] 
                                    << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[3U] 
                                                 >> 9U))),32);
        bufp->chgBit(oldp+2169,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[3U] 
                                       >> 8U))));
        bufp->chgBit(oldp+2170,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[3U] 
                                       >> 7U))));
        bufp->chgBit(oldp+2171,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[3U] 
                                       >> 6U))));
        bufp->chgBit(oldp+2172,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[3U] 
                                       >> 5U))));
        bufp->chgBit(oldp+2173,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[3U] 
                                       >> 4U))));
        bufp->chgBit(oldp+2174,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[3U] 
                                       >> 3U))));
        bufp->chgSData(oldp+2175,((0x3fffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[3U] 
                                               << 0xbU) 
                                              | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[2U] 
                                                 >> 0x15U)))),14);
        bufp->chgCData(oldp+2176,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[2U] 
                                            >> 0x10U))),5);
        bufp->chgCData(oldp+2177,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[2U] 
                                            >> 0xbU))),5);
        bufp->chgBit(oldp+2178,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[2U] 
                                       >> 0xaU))));
        bufp->chgBit(oldp+2179,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[2U] 
                                       >> 9U))));
        bufp->chgBit(oldp+2180,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[2U] 
                                       >> 8U))));
        bufp->chgBit(oldp+2181,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[2U] 
                                       >> 7U))));
        bufp->chgCData(oldp+2182,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[2U] 
                                         >> 5U))),2);
        bufp->chgIData(oldp+2183,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[2U] 
                                    << 0x1bU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[1U] 
                                                 >> 5U))),32);
        bufp->chgBit(oldp+2184,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[1U] 
                                       >> 4U))));
        bufp->chgBit(oldp+2185,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[1U] 
                                       >> 3U))));
        bufp->chgBit(oldp+2186,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[1U] 
                                       >> 2U))));
        bufp->chgBit(oldp+2187,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[1U] 
                                       >> 1U))));
        bufp->chgCData(oldp+2188,((0xfU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[1U] 
                                            << 3U) 
                                           | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[0U] 
                                              >> 0x1dU)))),4);
        bufp->chgSData(oldp+2189,((0x3ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[0U] 
                                             >> 0x13U))),10);
        bufp->chgIData(oldp+2190,((0x7ffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[0U])),19);
        bufp->chgBit(oldp+2191,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellinp__sram_to_axi_u__i_cacheop));
        bufp->chgBit(oldp+2192,(((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)) 
                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_cacheop))));
        bufp->chgBit(oldp+2193,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellinp__sram_to_axi_u__d_cacheop));
        bufp->chgBit(oldp+2194,(((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)) 
                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_cacheop))));
        bufp->chgBit(oldp+2195,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__buf_empty) 
                                 & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__state)))));
        bufp->chgBit(oldp+2196,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_uncached)))));
        bufp->chgBit(oldp+2197,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_hbe0a95ac__0) 
                                 | (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)))));
        bufp->chgIData(oldp+2198,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_tag_new 
                                    << 0xcU) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_index) 
                                                 << 4U) 
                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_uncached)
                                                    ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_offset)
                                                    : 0U)))),32);
        bufp->chgCData(oldp+2199,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_size),2);
        bufp->chgBit(oldp+2200,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__first_cycle_of_REPLACE));
        bufp->chgIData(oldp+2201,((((((- (IData)(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_cacheop)) 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_uncached)))) 
                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_tag_new) 
                                     | (((- (IData)(
                                                    (1U 
                                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_cacheop)) 
                                                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_uncached)))))) 
                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__tag_mux__DOT__and_gates__BRA__1__KET____DOT__or_result) 
                                        | ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_cacheop))) 
                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wr_addr_cacheop_tag_mux__DOT__and_gates__BRA__1__KET____DOT__or_result))) 
                                    << 0xcU) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_index) 
                                                 << 4U) 
                                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_cacheop)) 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_uncached))
                                                    ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_offset)
                                                    : 0U)))),32);
        __Vtemp_hbf0bedd2__0[0U] = (((- (IData)((1U 
                                                 & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_cacheop)) 
                                                    & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_uncached)))))) 
                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__line_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[0U]) 
                                    | (((- (IData)(
                                                   ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_cacheop)) 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_uncached)))) 
                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_wdata) 
                                       | ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_cacheop))) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wr_data_cacheop_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[0U])));
        __Vtemp_hbf0bedd2__0[1U] = (((- (IData)((1U 
                                                 & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_cacheop)) 
                                                    & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_uncached)))))) 
                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__line_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[1U]) 
                                    | ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_cacheop))) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wr_data_cacheop_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[1U]));
        __Vtemp_hbf0bedd2__0[2U] = (((- (IData)((1U 
                                                 & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_cacheop)) 
                                                    & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_uncached)))))) 
                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__line_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[2U]) 
                                    | ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_cacheop))) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wr_data_cacheop_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[2U]));
        __Vtemp_hbf0bedd2__0[3U] = (((- (IData)((1U 
                                                 & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_cacheop)) 
                                                    & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_uncached)))))) 
                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__line_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[3U]) 
                                    | ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_cacheop))) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wr_data_cacheop_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[3U]));
        bufp->chgWData(oldp+2202,(__Vtemp_hbf0bedd2__0),128);
        bufp->chgCData(oldp+2206,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_cacheop)
                                    ? 0xfU : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_wstrb))),4);
        bufp->chgBit(oldp+2207,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_uncached)))));
        bufp->chgBit(oldp+2208,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_hbe0a95ac__0) 
                                 | (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)))));
        bufp->chgIData(oldp+2209,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_tag_new 
                                    << 0xcU) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_index) 
                                                 << 4U) 
                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_uncached)
                                                    ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_offset)
                                                    : 0U)))),32);
        bufp->chgCData(oldp+2210,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_size),2);
        bufp->chgBit(oldp+2211,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__first_cycle_of_REPLACE));
        bufp->chgIData(oldp+2212,((((((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h7fa9a667__0))) 
                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_tag_new) 
                                     | (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h5478a6f0__0))) 
                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__tag_mux__DOT__and_gates__BRA__1__KET____DOT__or_result) 
                                        | ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_cacheop))) 
                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wr_addr_cacheop_tag_mux__DOT__and_gates__BRA__1__KET____DOT__or_result))) 
                                    << 0xcU) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_index) 
                                                 << 4U) 
                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h7fa9a667__0)
                                                    ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_offset)
                                                    : 0U)))),32);
        __Vtemp_h88a17f1a__0[0U] = (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h5478a6f0__0))) 
                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__line_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[0U]) 
                                    | (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h7fa9a667__0))) 
                                        & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_wdata) 
                                       | ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_cacheop))) 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wr_data_cacheop_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[0U])));
        __Vtemp_h88a17f1a__0[1U] = (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h5478a6f0__0))) 
                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__line_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[1U]) 
                                    | ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_cacheop))) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wr_data_cacheop_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[1U]));
        __Vtemp_h88a17f1a__0[2U] = (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h5478a6f0__0))) 
                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__line_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[2U]) 
                                    | ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_cacheop))) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wr_data_cacheop_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[2U]));
        __Vtemp_h88a17f1a__0[3U] = (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h5478a6f0__0))) 
                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__line_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[3U]) 
                                    | ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_cacheop))) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wr_data_cacheop_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[3U]));
        bufp->chgWData(oldp+2213,(__Vtemp_h88a17f1a__0),128);
        bufp->chgBit(oldp+2217,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__buf_empty));
        bufp->chgCData(oldp+2218,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_cacheop)
                                    ? 0xfU : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_wstrb))),4);
        bufp->chgBit(oldp+2219,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__waiting_for_rvalid));
        bufp->chgBit(oldp+2220,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_arvalid_reg));
        bufp->chgBit(oldp+2221,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_arvalid_reg));
        bufp->chgQData(oldp+2222,((0x240c000000ULL 
                                   | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_size)) 
                                       << 0x31U) | (QData)((IData)(
                                                                   (0x903U 
                                                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_size) 
                                                                       << 0x17U))))))),52);
        bufp->chgWData(oldp+2224,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__buf_data),128);
        bufp->chgCData(oldp+2228,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__buf_data_ptr),2);
        bufp->chgIData(oldp+2229,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__buf_addr),32);
        bufp->chgBit(oldp+2230,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__buf_burst));
        bufp->chgCData(oldp+2231,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__buf_size),2);
        bufp->chgCData(oldp+2232,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__buf_strb),4);
        bufp->chgCData(oldp+2233,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__state),3);
        bufp->chgBit(oldp+2234,((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__state))));
        bufp->chgBit(oldp+2235,((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__state))));
        bufp->chgBit(oldp+2236,((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__state))));
        bufp->chgBit(oldp+2237,((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__state))));
        bufp->chgBit(oldp+2238,((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__state))));
        bufp->chgBit(oldp+2239,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__idle_to_aw_w));
        bufp->chgBit(oldp+2240,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__idle_to_aw_w)) 
                                 & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__state)))));
        bufp->chgCData(oldp+2241,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__buf_burst) 
                                    << 1U) | (1U & 
                                              (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__buf_burst))))),2);
        __Vtemp_h0747b048__0[0U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__buf_addr)) 
                                             << 0x11U) 
                                            | (QData)((IData)(
                                                              (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__buf_size) 
                                                                << 0xeU) 
                                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__buf_strb))))));
        __Vtemp_h0747b048__0[1U] = (0x207e0000U | (IData)(
                                                          ((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__buf_addr)) 
                                                             << 0x11U) 
                                                            | (QData)((IData)(
                                                                              (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__buf_size) 
                                                                                << 0xeU) 
                                                                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__buf_strb))))) 
                                                           >> 0x20U)));
        __Vtemp_h0747b048__0[2U] = (1U | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__buf_addr 
                                          << 2U));
        __Vtemp_h0747b048__0[3U] = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__buf_addr 
                                    >> 0x1eU);
        bufp->chgWData(oldp+2242,(__Vtemp_h0747b048__0),98);
        bufp->chgQData(oldp+2246,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__wr_mux__DOT__and_gates__BRA__1__KET____DOT__or_result),49);
        bufp->chgQData(oldp+2248,(((- (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__buf_burst)))))) 
                                   & (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__buf_addr)) 
                                       << 0x11U) | (QData)((IData)(
                                                                   (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__buf_size) 
                                                                     << 0xeU) 
                                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__buf_strb))))))),49);
        bufp->chgQData(oldp+2250,(((- (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__buf_burst))) 
                                   & (0x903fULL | ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__buf_addr)) 
                                                   << 0x11U)))),49);
        bufp->chgQData(oldp+2252,((((QData)((IData)(
                                                    (0xfffffU 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__tag_v__dout 
                                                        >> 1U)))) 
                                    << 0x14U) | (QData)((IData)(
                                                                (0xfffffU 
                                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____Vcellout__way__BRA__0__KET____DOT__tag_v__dout 
                                                                    >> 1U)))))),40);
        __Vtemp_hdd88a34f__0[0U] = vlSelf->__VdfgTmp_hfea590d9__0[0U];
        __Vtemp_hdd88a34f__0[1U] = vlSelf->__VdfgTmp_hfea590d9__0[1U];
        __Vtemp_hdd88a34f__0[2U] = vlSelf->__VdfgTmp_hfea590d9__0[2U];
        __Vtemp_hdd88a34f__0[3U] = vlSelf->__VdfgTmp_hfea590d9__0[3U];
        __Vtemp_hdd88a34f__0[4U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__bank__BRA__0__KET____DOT__bank__dout;
        __Vtemp_hdd88a34f__0[5U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__bank__BRA__1__KET____DOT__bank__dout;
        __Vtemp_hdd88a34f__0[6U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank__dout)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank__dout))));
        __Vtemp_hdd88a34f__0[7U] = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank__dout)) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank__dout))) 
                                            >> 0x20U));
        bufp->chgWData(oldp+2254,(__Vtemp_hdd88a34f__0),256);
        bufp->chgCData(oldp+2262,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__hit_way),2);
        bufp->chgCData(oldp+2263,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__v_ways),2);
        bufp->chgCData(oldp+2264,((((IData)(vlSelf->__VdfgTmp_h208b8f36__0) 
                                    << 1U) | (IData)(vlSelf->__VdfgTmp_haa7259b7__0))),2);
        bufp->chgCData(oldp+2265,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__d_index),8);
        bufp->chgCData(oldp+2266,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__d_way),2);
        bufp->chgBit(oldp+2267,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__d_way) 
                                   >> 1U) & (IData)(vlSelf->__VdfgTmp_h208b8f36__0)) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__d_way) 
                                    & (IData)(vlSelf->__VdfgTmp_haa7259b7__0)))));
        bufp->chgIData(oldp+2268,((((- (IData)((IData)(vlSelf->__VdfgTmp_hc4b92322__0))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank_out
                                    [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_bank_num]) 
                                   | ((- (IData)((IData)(vlSelf->__VdfgTmp_he8917e58__0))) 
                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank_out
                                      [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_bank_num]))),32);
        bufp->chgCData(oldp+2269,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_index_mux__DOT__and_gates__BRA__1__KET____DOT__or_result),8);
        bufp->chgIData(oldp+2270,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_tag_mux__DOT__and_gates__BRA__1__KET____DOT__or_result),20);
        bufp->chgCData(oldp+2271,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_bank_num),2);
        bufp->chgCData(oldp+2272,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_replace_way),2);
        bufp->chgWData(oldp+2273,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__line_mux__DOT__and_gates__BRA__1__KET____DOT__or_result),128);
        bufp->chgIData(oldp+2277,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__tag_mux__DOT__and_gates__BRA__1__KET____DOT__or_result),20);
        bufp->chgCData(oldp+2278,((0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____Vcellinp__addr_parse__addr 
                                            >> 4U))),8);
        bufp->chgIData(oldp+2279,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____Vcellinp__addr_parse__addr 
                                   >> 0xcU)),20);
        bufp->chgCData(oldp+2280,((0xfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____Vcellinp__addr_parse__addr)),4);
        bufp->chgCData(oldp+2281,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state),3);
        bufp->chgCData(oldp+2282,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__bank_num),2);
        bufp->chgCData(oldp+2283,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_index),8);
        bufp->chgCData(oldp+2284,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_offset),4);
        bufp->chgBit(oldp+2285,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_write));
        bufp->chgIData(oldp+2286,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_tag),20);
        bufp->chgCData(oldp+2287,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_wstrb),4);
        bufp->chgCData(oldp+2288,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_size),2);
        bufp->chgIData(oldp+2289,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_wdata),32);
        bufp->chgBit(oldp+2290,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_uncached));
        bufp->chgBit(oldp+2291,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_cacheop));
        bufp->chgBit(oldp+2292,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_cacheop_index));
        bufp->chgBit(oldp+2293,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_cacheop_hit));
        bufp->chgBit(oldp+2294,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_cacheop_wb));
        bufp->chgCData(oldp+2295,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_index),8);
        bufp->chgIData(oldp+2296,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_tag_new),20);
        bufp->chgCData(oldp+2297,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_hit_way),2);
        bufp->chgCData(oldp+2298,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_offset),4);
        bufp->chgBit(oldp+2299,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_write));
        bufp->chgIData(oldp+2300,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_wdata),32);
        bufp->chgCData(oldp+2301,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_wstrb),4);
        bufp->chgCData(oldp+2302,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_bank_num),2);
        bufp->chgBit(oldp+2303,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_uncached));
        bufp->chgBit(oldp+2304,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_cacheop));
        bufp->chgBit(oldp+2305,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_cacheop_hit));
        bufp->chgWData(oldp+2306,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_read_lines),256);
        bufp->chgQData(oldp+2314,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_read_tags),40);
        bufp->chgCData(oldp+2316,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wb_ways),2);
        bufp->chgCData(oldp+2317,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wb_ways_init),2);
        bufp->chgCData(oldp+2318,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wb_way),2);
        bufp->chgCData(oldp+2319,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wb_ways_next),2);
        bufp->chgBit(oldp+2320,((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wb_ways_next))));
        bufp->chgBit(oldp+2321,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_to_dirty_miss));
        bufp->chgBit(oldp+2322,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__hit));
        bufp->chgBit(oldp+2323,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__hit) 
                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_write))));
        bufp->chgCData(oldp+2324,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_buf_way),2);
        bufp->chgCData(oldp+2325,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_buf_index),8);
        bufp->chgCData(oldp+2326,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_buf_wstrb),4);
        bufp->chgIData(oldp+2327,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_buf_wdata),32);
        bufp->chgCData(oldp+2328,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_buf_bank_num),2);
        bufp->chgBit(oldp+2329,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_buf_idle));
        bufp->chgBit(oldp+2330,((1U & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__hit) 
                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_write))))));
        bufp->chgBit(oldp+2331,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_overlap));
        bufp->chgCData(oldp+2332,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__forword_byte_from_write_buffer),4);
        bufp->chgBit(oldp+2333,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__d_way) 
                                    >> 1U) & (IData)(vlSelf->__VdfgTmp_h208b8f36__0)) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__d_way) 
                                     & (IData)(vlSelf->__VdfgTmp_haa7259b7__0))) 
                                 | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_buf_idle)) 
                                    & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__d_way) 
                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_buf_way)) 
                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_he5eb326c__0))))));
        bufp->chgBit(oldp+2334,(((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)) 
                                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_cacheop) 
                                    & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h09374013__0)) 
                                       & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_cacheop_hit) 
                                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__hit)) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_cacheop_index)))))));
        bufp->chgBit(oldp+2335,(((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)) 
                                 & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT___hit)) 
                                    & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_cacheop)) 
                                       & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_he381076c__0)))))));
        bufp->chgBit(oldp+2336,(((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)) 
                                 & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT___hit)) 
                                    & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_cacheop)
                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h09374013__0)
                                        : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_he381076c__0))))));
        bufp->chgBit(oldp+2337,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__buf_empty)) 
                                 & (3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)))));
        bufp->chgBit(oldp+2338,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__dirty_miss_to_replace));
        bufp->chgBit(oldp+2339,(((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)) 
                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h7fa9a667__0))));
        bufp->chgIData(oldp+2340,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__lookup_rdata),32);
        bufp->chgWData(oldp+2341,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wr_data_cacheop_mux__DOT__and_gates__BRA__1__KET____DOT__or_result),128);
        bufp->chgIData(oldp+2345,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wr_addr_cacheop_tag_mux__DOT__and_gates__BRA__1__KET____DOT__or_result),20);
        bufp->chgIData(oldp+2346,((((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h7fa9a667__0))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_tag_new) 
                                   | (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h5478a6f0__0))) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__tag_mux__DOT__and_gates__BRA__1__KET____DOT__or_result) 
                                      | ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_cacheop))) 
                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wr_addr_cacheop_tag_mux__DOT__and_gates__BRA__1__KET____DOT__or_result)))),20);
        bufp->chgCData(oldp+2347,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_buf_ptr),2);
        bufp->chgBit(oldp+2348,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_requested_word));
        bufp->chgCData(oldp+2349,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__invalidate_ways),2);
        bufp->chgBit(oldp+2350,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__lookup_data_ok));
        bufp->chgIData(oldp+2351,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____Vcellinp__addr_parse__addr),32);
        bufp->chgQData(oldp+2352,((((QData)((IData)(
                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank_out
                                                    [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_bank_num])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank_out
                                                                [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_bank_num])))),64);
        bufp->chgBit(oldp+2354,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__d_way) 
                                 & (IData)(vlSelf->__VdfgTmp_haa7259b7__0))));
        bufp->chgBit(oldp+2355,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__d_way) 
                                  >> 1U) & (IData)(vlSelf->__VdfgTmp_h208b8f36__0))));
        __Vtemp_h4336fe8b__0[0U] = ((- (IData)((1U 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_replace_way)))) 
                                    & vlSelf->__VdfgTmp_hfea590d9__0[0U]);
        __Vtemp_h4336fe8b__0[1U] = ((- (IData)((1U 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_replace_way)))) 
                                    & vlSelf->__VdfgTmp_hfea590d9__0[1U]);
        __Vtemp_h4336fe8b__0[2U] = ((- (IData)((1U 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_replace_way)))) 
                                    & vlSelf->__VdfgTmp_hfea590d9__0[2U]);
        __Vtemp_h4336fe8b__0[3U] = ((- (IData)((1U 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_replace_way)))) 
                                    & vlSelf->__VdfgTmp_hfea590d9__0[3U]);
        bufp->chgWData(oldp+2356,(__Vtemp_h4336fe8b__0),128);
        __Vtemp_h51af46af__0[0U] = ((- (IData)((1U 
                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_replace_way) 
                                                   >> 1U)))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__bank__BRA__0__KET____DOT__bank__dout);
        __Vtemp_h51af46af__0[1U] = ((- (IData)((1U 
                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_replace_way) 
                                                   >> 1U)))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__bank__BRA__1__KET____DOT__bank__dout);
        __Vtemp_h51af46af__0[2U] = ((- (IData)((1U 
                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_replace_way) 
                                                   >> 1U)))) 
                                    & (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank__dout)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank__dout)))));
        __Vtemp_h51af46af__0[3U] = ((- (IData)((1U 
                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_replace_way) 
                                                   >> 1U)))) 
                                    & (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank__dout)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank__dout))) 
                                               >> 0x20U)));
        bufp->chgWData(oldp+2360,(__Vtemp_h51af46af__0),128);
        bufp->chgIData(oldp+2364,(((- (IData)((IData)(vlSelf->__VdfgTmp_he8917e58__0))) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank_out
                                   [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_bank_num])),32);
        bufp->chgIData(oldp+2365,(((- (IData)((IData)(vlSelf->__VdfgTmp_hc4b92322__0))) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank_out
                                   [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_bank_num])),32);
        bufp->chgIData(oldp+2366,((0xfffffU & ((- (IData)(
                                                          (1U 
                                                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_replace_way)))) 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____Vcellout__way__BRA__0__KET____DOT__tag_v__dout 
                                                  >> 1U)))),20);
        bufp->chgIData(oldp+2367,((0xfffffU & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_replace_way) 
                                                              >> 1U)))) 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__tag_v__dout 
                                                  >> 1U)))),20);
        bufp->chgIData(oldp+2368,((0xfffffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____Vcellout__way__BRA__0__KET____DOT__tag_v__dout 
                                               >> 1U))),20);
        bufp->chgBit(oldp+2369,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____Vcellout__way__BRA__0__KET____DOT__tag_v__dout)));
        bufp->chgWData(oldp+2370,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__d),256);
        bufp->chgIData(oldp+2378,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank_out[0]),32);
        bufp->chgIData(oldp+2379,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank_out[1]),32);
        bufp->chgIData(oldp+2380,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank_out[2]),32);
        bufp->chgIData(oldp+2381,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank_out[3]),32);
        bufp->chgIData(oldp+2382,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__ram_
                                  [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__addr_reg]),32);
        bufp->chgIData(oldp+2383,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__din_reg),32);
        bufp->chgCData(oldp+2384,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__addr_reg),8);
        bufp->chgCData(oldp+2385,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__we_reg),4);
        bufp->chgIData(oldp+2386,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__ram_
                                  [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__addr_reg]),32);
        bufp->chgIData(oldp+2387,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__din_reg),32);
        bufp->chgCData(oldp+2388,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__addr_reg),8);
        bufp->chgCData(oldp+2389,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__we_reg),4);
        bufp->chgIData(oldp+2390,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__ram_
                                  [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__addr_reg]),32);
        bufp->chgIData(oldp+2391,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__din_reg),32);
        bufp->chgCData(oldp+2392,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__addr_reg),8);
        bufp->chgCData(oldp+2393,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__we_reg),4);
        bufp->chgIData(oldp+2394,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__ram_
                                  [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__addr_reg]),32);
        bufp->chgIData(oldp+2395,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__din_reg),32);
        bufp->chgCData(oldp+2396,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__addr_reg),8);
        bufp->chgCData(oldp+2397,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__we_reg),4);
        bufp->chgIData(oldp+2398,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____Vcellout__way__BRA__0__KET____DOT__tag_v__dout),21);
        bufp->chgIData(oldp+2399,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__tag_v__DOT__din_reg),21);
        bufp->chgCData(oldp+2400,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__tag_v__DOT__addr_reg),8);
        bufp->chgBit(oldp+2401,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__tag_v__DOT__we_reg));
        bufp->chgIData(oldp+2402,((0xfffffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__tag_v__dout 
                                               >> 1U))),20);
        bufp->chgBit(oldp+2403,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__tag_v__dout)));
        bufp->chgWData(oldp+2404,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__d),256);
        bufp->chgIData(oldp+2412,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank_out[0]),32);
        bufp->chgIData(oldp+2413,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank_out[1]),32);
        bufp->chgIData(oldp+2414,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank_out[2]),32);
        bufp->chgIData(oldp+2415,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank_out[3]),32);
        bufp->chgIData(oldp+2416,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__bank__BRA__0__KET____DOT__bank__dout),32);
        bufp->chgIData(oldp+2417,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__din_reg),32);
        bufp->chgCData(oldp+2418,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__addr_reg),8);
        bufp->chgCData(oldp+2419,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__we_reg),4);
        bufp->chgIData(oldp+2420,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__bank__BRA__1__KET____DOT__bank__dout),32);
        bufp->chgIData(oldp+2421,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__din_reg),32);
        bufp->chgCData(oldp+2422,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__addr_reg),8);
        bufp->chgCData(oldp+2423,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__we_reg),4);
        bufp->chgIData(oldp+2424,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank__dout),32);
        bufp->chgIData(oldp+2425,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__din_reg),32);
        bufp->chgCData(oldp+2426,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__addr_reg),8);
        bufp->chgCData(oldp+2427,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__we_reg),4);
        bufp->chgIData(oldp+2428,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank__dout),32);
        bufp->chgIData(oldp+2429,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__din_reg),32);
        bufp->chgCData(oldp+2430,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__addr_reg),8);
        bufp->chgCData(oldp+2431,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__we_reg),4);
        bufp->chgIData(oldp+2432,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__tag_v__dout),21);
        bufp->chgIData(oldp+2433,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__tag_v__DOT__din_reg),21);
        bufp->chgCData(oldp+2434,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__tag_v__DOT__addr_reg),8);
        bufp->chgBit(oldp+2435,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__tag_v__DOT__we_reg));
        bufp->chgIData(oldp+2436,(((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__lookup_data_ok))) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__lookup_rdata)),32);
        bufp->chgBit(oldp+2437,((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state))));
        bufp->chgCData(oldp+2438,((3U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__v_ways)))),2);
        bufp->chgBit(oldp+2439,((1U & (~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__v_ways)))))))));
        bufp->chgCData(oldp+2440,((3U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__v_ways)) 
                                         & (- (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__v_ways)))))),2);
        bufp->chgCData(oldp+2441,(((2U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_way_gen__DOT__lfsr__DOT__lfsr_reg) 
                                          << 1U)) | 
                                   (1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_way_gen__DOT__lfsr__DOT__lfsr_reg))))),2);
        bufp->chgCData(oldp+2442,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_way_gen__DOT__lfsr__DOT__lfsr_reg),3);
        bufp->chgBit(oldp+2443,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_way_gen__DOT__lfsr__DOT__lfsr_reg))));
        bufp->chgBit(oldp+2444,(((~ (IData)((0U != 
                                             (3U & 
                                              (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__v_ways)))))) 
                                 & (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)))));
        bufp->chgCData(oldp+2445,(((6U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_way_gen__DOT__lfsr__DOT__lfsr_reg) 
                                          << 1U)) | 
                                   (1U & VL_REDXOR_32(
                                                      (5U 
                                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_way_gen__DOT__lfsr__DOT__lfsr_reg)))))),3);
        bufp->chgBit(oldp+2446,((1U & VL_REDXOR_32(
                                                   (5U 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_way_gen__DOT__lfsr__DOT__lfsr_reg))))));
        bufp->chgCData(oldp+2447,((3U & (- (IData)(
                                                   (((1U 
                                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)) 
                                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT___hit)) 
                                                        & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_cacheop)
                                                            ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h09374013__0)
                                                            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_he381076c__0)))) 
                                                    | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__buf_empty)) 
                                                        & (3U 
                                                           == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state))) 
                                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_to_dirty_miss))))))),3);
        bufp->chgCData(oldp+2448,(((((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)) 
                                     | (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state))) 
                                    << 1U) | ((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)) 
                                              | (5U 
                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state))))),2);
        bufp->chgSData(oldp+2449,(((0xff00U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____Vcellinp__addr_parse__addr 
                                               << 4U)) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_index))),16);
        bufp->chgCData(oldp+2450,(((- (IData)(((3U 
                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)) 
                                               | (5U 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state))))) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_index))),8);
        bufp->chgCData(oldp+2451,((0xffU & ((- (IData)(
                                                       ((0U 
                                                         == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)) 
                                                        | (1U 
                                                           == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state))))) 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____Vcellinp__addr_parse__addr 
                                               >> 4U)))),8);
        bufp->chgCData(oldp+2452,((((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)) 
                                    << 1U) | (5U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)))),2);
        bufp->chgQData(oldp+2453,((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_tag)) 
                                    << 0x14U) | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_tag_new)))),40);
        bufp->chgIData(oldp+2455,(((- (IData)((5U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)))) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_tag_new)),20);
        bufp->chgIData(oldp+2456,(((- (IData)((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)))) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_tag)),20);
        bufp->chgCData(oldp+2457,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_hbe37574e__0) 
                                    << 2U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h0ea5640d__0) 
                                               << 1U) 
                                              | (5U 
                                                 != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state))))),3);
        __Vtemp_h7135cf86__0[0U] = ((- (IData)((5U 
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
                                                                           << 1U)))))))));
        __Vtemp_h7135cf86__0[1U] = ((- (IData)((5U 
                                                != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)))) 
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
                                               >> 0x20U)));
        __Vtemp_h7135cf86__0[2U] = ((- (IData)((5U 
                                                != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)))) 
                                    & ((0x400U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_buf_idle)) 
                                                  << 0xaU)) 
                                       | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_buf_index) 
                                           << 2U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_buf_bank_num))));
        bufp->chgWData(oldp+2458,(__Vtemp_h7135cf86__0),75);
        __Vtemp_h163f47e7__0[0U] = ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h0ea5640d__0))) 
                                    & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__invalidate_ways) 
                                        << 0x18U) | 
                                       ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__invalidate_ways) 
                                        << 1U)));
        __Vtemp_h163f47e7__0[1U] = 0U;
        __Vtemp_h163f47e7__0[2U] = ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h0ea5640d__0))) 
                                    & (0x400U | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_index) 
                                                 << 2U)));
        bufp->chgWData(oldp+2461,(__Vtemp_h163f47e7__0),75);
        __Vtemp_hcd850d7d__0[0U] = (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h0ea5640d__0))) 
                                     & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__invalidate_ways) 
                                         << 0x18U) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__invalidate_ways) 
                                           << 1U))) 
                                    | ((- (IData)((5U 
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
                                                                              << 1U))))))))));
        __Vtemp_hcd850d7d__0[1U] = ((- (IData)((5U 
                                                != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)))) 
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
                                               >> 0x20U)));
        __Vtemp_hcd850d7d__0[2U] = (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h0ea5640d__0))) 
                                     & (0x400U | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_index) 
                                                  << 2U))) 
                                    | ((- (IData)((5U 
                                                   != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)))) 
                                       & ((0x400U & 
                                           ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_buf_idle)) 
                                            << 0xaU)) 
                                          | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_buf_index) 
                                              << 2U) 
                                             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_buf_bank_num)))));
        bufp->chgWData(oldp+2464,(__Vtemp_hcd850d7d__0),75);
        bufp->chgIData(oldp+2467,((0xfffffU & ((- (IData)(
                                                          (1U 
                                                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wb_way)))) 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_read_tags)))),20);
        bufp->chgIData(oldp+2468,((0xfffffU & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wb_way) 
                                                              >> 1U)))) 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_read_tags 
                                                          >> 0x14U))))),20);
        bufp->chgCData(oldp+2469,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h7fa9a667__0) 
                                    << 2U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h5478a6f0__0) 
                                               << 1U) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_cacheop)))),3);
        bufp->chgQData(oldp+2470,((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_tag_new)) 
                                    << 0x28U) | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__tag_mux__DOT__and_gates__BRA__1__KET____DOT__or_result)) 
                                                  << 0x14U) 
                                                 | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wr_addr_cacheop_tag_mux__DOT__and_gates__BRA__1__KET____DOT__or_result))))),60);
        bufp->chgIData(oldp+2472,(((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_cacheop))) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wr_addr_cacheop_tag_mux__DOT__and_gates__BRA__1__KET____DOT__or_result)),20);
        bufp->chgIData(oldp+2473,(((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h5478a6f0__0))) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__tag_mux__DOT__and_gates__BRA__1__KET____DOT__or_result)),20);
        bufp->chgIData(oldp+2474,((((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h5478a6f0__0))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__tag_mux__DOT__and_gates__BRA__1__KET____DOT__or_result) 
                                   | ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_cacheop))) 
                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wr_addr_cacheop_tag_mux__DOT__and_gates__BRA__1__KET____DOT__or_result))),20);
        bufp->chgIData(oldp+2475,(((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h7fa9a667__0))) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_tag_new)),20);
        __Vtemp_he0343ab4__0[0U] = ((- (IData)((1U 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wb_way)))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_read_lines[0U]);
        __Vtemp_he0343ab4__0[1U] = ((- (IData)((1U 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wb_way)))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_read_lines[1U]);
        __Vtemp_he0343ab4__0[2U] = ((- (IData)((1U 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wb_way)))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_read_lines[2U]);
        __Vtemp_he0343ab4__0[3U] = ((- (IData)((1U 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wb_way)))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_read_lines[3U]);
        bufp->chgWData(oldp+2476,(__Vtemp_he0343ab4__0),128);
        __Vtemp_h09691835__0[0U] = ((- (IData)((1U 
                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wb_way) 
                                                   >> 1U)))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_read_lines[4U]);
        __Vtemp_h09691835__0[1U] = ((- (IData)((1U 
                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wb_way) 
                                                   >> 1U)))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_read_lines[5U]);
        __Vtemp_h09691835__0[2U] = ((- (IData)((1U 
                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wb_way) 
                                                   >> 1U)))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_read_lines[6U]);
        __Vtemp_h09691835__0[3U] = ((- (IData)((1U 
                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wb_way) 
                                                   >> 1U)))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_read_lines[7U]);
        bufp->chgWData(oldp+2480,(__Vtemp_h09691835__0),128);
        bufp->chgCData(oldp+2484,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h5478a6f0__0) 
                                    << 2U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h7fa9a667__0) 
                                               << 1U) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_cacheop)))),3);
        __Vtemp_hb7282946__0[0U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wr_data_cacheop_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[0U];
        __Vtemp_hb7282946__0[1U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wr_data_cacheop_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[1U];
        __Vtemp_hb7282946__0[2U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wr_data_cacheop_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[2U];
        __Vtemp_hb7282946__0[3U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wr_data_cacheop_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[3U];
        __Vtemp_hb7282946__0[4U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_wdata;
        __Vtemp_hb7282946__0[5U] = 0U;
        __Vtemp_hb7282946__0[6U] = 0U;
        __Vtemp_hb7282946__0[7U] = 0U;
        __Vtemp_hb7282946__0[8U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__line_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[0U];
        __Vtemp_hb7282946__0[9U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__line_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[1U];
        __Vtemp_hb7282946__0[0xaU] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__line_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[2U];
        __Vtemp_hb7282946__0[0xbU] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__line_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[3U];
        bufp->chgWData(oldp+2485,(__Vtemp_hb7282946__0),384);
        __Vtemp_h6e4d052c__0[0U] = ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_cacheop))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wr_data_cacheop_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[0U]);
        __Vtemp_h6e4d052c__0[1U] = ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_cacheop))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wr_data_cacheop_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[1U]);
        __Vtemp_h6e4d052c__0[2U] = ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_cacheop))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wr_data_cacheop_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[2U]);
        __Vtemp_h6e4d052c__0[3U] = ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_cacheop))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wr_data_cacheop_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[3U]);
        bufp->chgWData(oldp+2497,(__Vtemp_h6e4d052c__0),128);
        __Vtemp_h34a05572__0[0U] = ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h7fa9a667__0))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_wdata);
        __Vtemp_h34a05572__0[1U] = 0U;
        __Vtemp_h34a05572__0[2U] = 0U;
        __Vtemp_h34a05572__0[3U] = 0U;
        bufp->chgWData(oldp+2501,(__Vtemp_h34a05572__0),128);
        __Vtemp_h8cf1da23__0[0U] = (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h7fa9a667__0))) 
                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_wdata) 
                                    | ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_cacheop))) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wr_data_cacheop_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[0U]));
        __Vtemp_h8cf1da23__0[1U] = ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_cacheop))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wr_data_cacheop_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[1U]);
        __Vtemp_h8cf1da23__0[2U] = ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_cacheop))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wr_data_cacheop_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[2U]);
        __Vtemp_h8cf1da23__0[3U] = ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_cacheop))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wr_data_cacheop_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[3U]);
        bufp->chgWData(oldp+2505,(__Vtemp_h8cf1da23__0),128);
        __Vtemp_h1ec62bc3__0[0U] = ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h5478a6f0__0))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__line_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[0U]);
        __Vtemp_h1ec62bc3__0[1U] = ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h5478a6f0__0))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__line_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[1U]);
        __Vtemp_h1ec62bc3__0[2U] = ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h5478a6f0__0))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__line_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[2U]);
        __Vtemp_h1ec62bc3__0[3U] = ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h5478a6f0__0))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__line_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[3U]);
        bufp->chgWData(oldp+2509,(__Vtemp_h1ec62bc3__0),128);
        bufp->chgQData(oldp+2513,((((QData)((IData)(
                                                    (0xfffffU 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__tag_v__dout 
                                                        >> 1U)))) 
                                    << 0x14U) | (QData)((IData)(
                                                                (0xfffffU 
                                                                 & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____Vcellout__way__BRA__0__KET____DOT__tag_v__dout 
                                                                    >> 1U)))))),40);
        __Vtemp_hcf19881d__0[0U] = vlSelf->__VdfgTmp_ha5fa42eb__0[0U];
        __Vtemp_hcf19881d__0[1U] = vlSelf->__VdfgTmp_ha5fa42eb__0[1U];
        __Vtemp_hcf19881d__0[2U] = vlSelf->__VdfgTmp_ha5fa42eb__0[2U];
        __Vtemp_hcf19881d__0[3U] = vlSelf->__VdfgTmp_ha5fa42eb__0[3U];
        __Vtemp_hcf19881d__0[4U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__bank__BRA__0__KET____DOT__bank__dout;
        __Vtemp_hcf19881d__0[5U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__bank__BRA__1__KET____DOT__bank__dout;
        __Vtemp_hcf19881d__0[6U] = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank__dout)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank__dout))));
        __Vtemp_hcf19881d__0[7U] = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank__dout)) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank__dout))) 
                                            >> 0x20U));
        bufp->chgWData(oldp+2515,(__Vtemp_hcf19881d__0),256);
        bufp->chgCData(oldp+2523,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__hit_way),2);
        bufp->chgCData(oldp+2524,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__v_ways),2);
        bufp->chgCData(oldp+2525,((((IData)(vlSelf->__VdfgTmp_h966d58da__0) 
                                    << 1U) | (IData)(vlSelf->__VdfgTmp_hfd5d21d5__0))),2);
        bufp->chgCData(oldp+2526,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__d_index),8);
        bufp->chgCData(oldp+2527,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__d_way),2);
        bufp->chgBit(oldp+2528,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__d_way) 
                                   >> 1U) & (IData)(vlSelf->__VdfgTmp_h966d58da__0)) 
                                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__d_way) 
                                    & (IData)(vlSelf->__VdfgTmp_hfd5d21d5__0)))));
        bufp->chgIData(oldp+2529,((((- (IData)((IData)(vlSelf->__VdfgTmp_hf20fd9bb__0))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank_out
                                    [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_bank_num]) 
                                   | ((- (IData)((IData)(vlSelf->__VdfgTmp_hce404a6e__0))) 
                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank_out
                                      [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_bank_num]))),32);
        bufp->chgCData(oldp+2530,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_index_mux__DOT__and_gates__BRA__1__KET____DOT__or_result),8);
        bufp->chgIData(oldp+2531,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_tag_mux__DOT__and_gates__BRA__1__KET____DOT__or_result),20);
        bufp->chgCData(oldp+2532,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_bank_num),2);
        bufp->chgCData(oldp+2533,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_replace_way),2);
        bufp->chgWData(oldp+2534,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__line_mux__DOT__and_gates__BRA__1__KET____DOT__or_result),128);
        bufp->chgIData(oldp+2538,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__tag_mux__DOT__and_gates__BRA__1__KET____DOT__or_result),20);
        bufp->chgCData(oldp+2539,((0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____Vcellinp__addr_parse__addr 
                                            >> 4U))),8);
        bufp->chgIData(oldp+2540,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____Vcellinp__addr_parse__addr 
                                   >> 0xcU)),20);
        bufp->chgCData(oldp+2541,((0xfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____Vcellinp__addr_parse__addr)),4);
        bufp->chgCData(oldp+2542,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state),3);
        bufp->chgCData(oldp+2543,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__bank_num),2);
        bufp->chgCData(oldp+2544,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_index),8);
        bufp->chgCData(oldp+2545,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_offset),4);
        bufp->chgBit(oldp+2546,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_write));
        bufp->chgIData(oldp+2547,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_tag),20);
        bufp->chgCData(oldp+2548,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_wstrb),4);
        bufp->chgCData(oldp+2549,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_size),2);
        bufp->chgIData(oldp+2550,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_wdata),32);
        bufp->chgBit(oldp+2551,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_uncached));
        bufp->chgBit(oldp+2552,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_cacheop));
        bufp->chgBit(oldp+2553,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_cacheop_index));
        bufp->chgBit(oldp+2554,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_cacheop_hit));
        bufp->chgBit(oldp+2555,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_cacheop_wb));
        bufp->chgCData(oldp+2556,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_index),8);
        bufp->chgIData(oldp+2557,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_tag_new),20);
        bufp->chgCData(oldp+2558,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_hit_way),2);
        bufp->chgCData(oldp+2559,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_offset),4);
        bufp->chgBit(oldp+2560,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_write));
        bufp->chgIData(oldp+2561,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_wdata),32);
        bufp->chgCData(oldp+2562,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_wstrb),4);
        bufp->chgCData(oldp+2563,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_bank_num),2);
        bufp->chgBit(oldp+2564,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_uncached));
        bufp->chgBit(oldp+2565,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_cacheop));
        bufp->chgBit(oldp+2566,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_cacheop_hit));
        bufp->chgWData(oldp+2567,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_read_lines),256);
        bufp->chgQData(oldp+2575,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_read_tags),40);
        bufp->chgCData(oldp+2577,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wb_ways),2);
        bufp->chgCData(oldp+2578,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wb_ways_init),2);
        bufp->chgCData(oldp+2579,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wb_way),2);
        bufp->chgCData(oldp+2580,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wb_ways_next),2);
        bufp->chgBit(oldp+2581,((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wb_ways_next))));
        bufp->chgBit(oldp+2582,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_to_dirty_miss));
        bufp->chgBit(oldp+2583,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__hit));
        bufp->chgBit(oldp+2584,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__hit) 
                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_write))));
        bufp->chgCData(oldp+2585,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_buf_way),2);
        bufp->chgCData(oldp+2586,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_buf_index),8);
        bufp->chgCData(oldp+2587,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_buf_wstrb),4);
        bufp->chgIData(oldp+2588,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_buf_wdata),32);
        bufp->chgCData(oldp+2589,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_buf_bank_num),2);
        bufp->chgBit(oldp+2590,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_buf_idle));
        bufp->chgBit(oldp+2591,((1U & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__hit) 
                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_write))))));
        bufp->chgBit(oldp+2592,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_overlap));
        bufp->chgCData(oldp+2593,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__forword_byte_from_write_buffer),4);
        bufp->chgBit(oldp+2594,((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__d_way) 
                                    >> 1U) & (IData)(vlSelf->__VdfgTmp_h966d58da__0)) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__d_way) 
                                     & (IData)(vlSelf->__VdfgTmp_hfd5d21d5__0))) 
                                 | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_buf_idle)) 
                                    & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__d_way) 
                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_buf_way)) 
                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_he5eb326c__0))))));
        bufp->chgBit(oldp+2595,(((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)) 
                                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_cacheop) 
                                    & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_h09374013__0)) 
                                       & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_cacheop_hit) 
                                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__hit)) 
                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_cacheop_index)))))));
        bufp->chgBit(oldp+2596,(((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)) 
                                 & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT___hit)) 
                                    & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_cacheop)) 
                                       & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_he381076c__0)))))));
        bufp->chgBit(oldp+2597,(((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)) 
                                 & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT___hit)) 
                                    & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_cacheop)
                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_h09374013__0)
                                        : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_he381076c__0))))));
        bufp->chgBit(oldp+2598,((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state))));
        bufp->chgBit(oldp+2599,(((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)) 
                                 & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_cacheop)) 
                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_uncached)))));
        bufp->chgIData(oldp+2600,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__lookup_rdata),32);
        bufp->chgWData(oldp+2601,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wr_data_cacheop_mux__DOT__and_gates__BRA__1__KET____DOT__or_result),128);
        bufp->chgIData(oldp+2605,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wr_addr_cacheop_tag_mux__DOT__and_gates__BRA__1__KET____DOT__or_result),20);
        bufp->chgIData(oldp+2606,((((- (IData)(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_cacheop)) 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_uncached)))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_tag_new) 
                                   | (((- (IData)((1U 
                                                   & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_cacheop)) 
                                                      & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_uncached)))))) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__tag_mux__DOT__and_gates__BRA__1__KET____DOT__or_result) 
                                      | ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_cacheop))) 
                                         & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wr_addr_cacheop_tag_mux__DOT__and_gates__BRA__1__KET____DOT__or_result)))),20);
        bufp->chgCData(oldp+2607,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__refill_buf_ptr),2);
        bufp->chgBit(oldp+2608,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__refill_requested_word));
        bufp->chgCData(oldp+2609,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__invalidate_ways),2);
        bufp->chgBit(oldp+2610,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__lookup_data_ok));
        bufp->chgIData(oldp+2611,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____Vcellinp__addr_parse__addr),32);
        bufp->chgQData(oldp+2612,((((QData)((IData)(
                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank_out
                                                    [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_bank_num])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank_out
                                                                [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_bank_num])))),64);
        bufp->chgBit(oldp+2614,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__d_way) 
                                 & (IData)(vlSelf->__VdfgTmp_hfd5d21d5__0))));
        bufp->chgBit(oldp+2615,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__d_way) 
                                  >> 1U) & (IData)(vlSelf->__VdfgTmp_h966d58da__0))));
        __Vtemp_h7b03e3f3__0[0U] = ((- (IData)((1U 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_replace_way)))) 
                                    & vlSelf->__VdfgTmp_ha5fa42eb__0[0U]);
        __Vtemp_h7b03e3f3__0[1U] = ((- (IData)((1U 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_replace_way)))) 
                                    & vlSelf->__VdfgTmp_ha5fa42eb__0[1U]);
        __Vtemp_h7b03e3f3__0[2U] = ((- (IData)((1U 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_replace_way)))) 
                                    & vlSelf->__VdfgTmp_ha5fa42eb__0[2U]);
        __Vtemp_h7b03e3f3__0[3U] = ((- (IData)((1U 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_replace_way)))) 
                                    & vlSelf->__VdfgTmp_ha5fa42eb__0[3U]);
        bufp->chgWData(oldp+2616,(__Vtemp_h7b03e3f3__0),128);
        __Vtemp_h30db7ab2__0[0U] = ((- (IData)((1U 
                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_replace_way) 
                                                   >> 1U)))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__bank__BRA__0__KET____DOT__bank__dout);
        __Vtemp_h30db7ab2__0[1U] = ((- (IData)((1U 
                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_replace_way) 
                                                   >> 1U)))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__bank__BRA__1__KET____DOT__bank__dout);
        __Vtemp_h30db7ab2__0[2U] = ((- (IData)((1U 
                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_replace_way) 
                                                   >> 1U)))) 
                                    & (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank__dout)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank__dout)))));
        __Vtemp_h30db7ab2__0[3U] = ((- (IData)((1U 
                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_replace_way) 
                                                   >> 1U)))) 
                                    & (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank__dout)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank__dout))) 
                                               >> 0x20U)));
        bufp->chgWData(oldp+2620,(__Vtemp_h30db7ab2__0),128);
        bufp->chgIData(oldp+2624,(((- (IData)((IData)(vlSelf->__VdfgTmp_hce404a6e__0))) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank_out
                                   [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_bank_num])),32);
        bufp->chgIData(oldp+2625,(((- (IData)((IData)(vlSelf->__VdfgTmp_hf20fd9bb__0))) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank_out
                                   [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_bank_num])),32);
        bufp->chgIData(oldp+2626,((0xfffffU & ((- (IData)(
                                                          (1U 
                                                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_replace_way)))) 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____Vcellout__way__BRA__0__KET____DOT__tag_v__dout 
                                                  >> 1U)))),20);
        bufp->chgIData(oldp+2627,((0xfffffU & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_replace_way) 
                                                              >> 1U)))) 
                                               & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__tag_v__dout 
                                                  >> 1U)))),20);
        bufp->chgIData(oldp+2628,((0xfffffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____Vcellout__way__BRA__0__KET____DOT__tag_v__dout 
                                               >> 1U))),20);
        bufp->chgBit(oldp+2629,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____Vcellout__way__BRA__0__KET____DOT__tag_v__dout)));
        bufp->chgWData(oldp+2630,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__d),256);
        bufp->chgIData(oldp+2638,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank_out[0]),32);
        bufp->chgIData(oldp+2639,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank_out[1]),32);
        bufp->chgIData(oldp+2640,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank_out[2]),32);
        bufp->chgIData(oldp+2641,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank_out[3]),32);
        bufp->chgIData(oldp+2642,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__ram_
                                  [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__addr_reg]),32);
        bufp->chgIData(oldp+2643,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__din_reg),32);
        bufp->chgCData(oldp+2644,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__addr_reg),8);
        bufp->chgCData(oldp+2645,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__we_reg),4);
        bufp->chgIData(oldp+2646,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__ram_
                                  [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__addr_reg]),32);
        bufp->chgIData(oldp+2647,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__din_reg),32);
        bufp->chgCData(oldp+2648,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__addr_reg),8);
        bufp->chgCData(oldp+2649,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__we_reg),4);
        bufp->chgIData(oldp+2650,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__ram_
                                  [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__addr_reg]),32);
        bufp->chgIData(oldp+2651,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__din_reg),32);
        bufp->chgCData(oldp+2652,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__addr_reg),8);
        bufp->chgCData(oldp+2653,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__we_reg),4);
        bufp->chgIData(oldp+2654,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__ram_
                                  [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__addr_reg]),32);
        bufp->chgIData(oldp+2655,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__din_reg),32);
        bufp->chgCData(oldp+2656,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__addr_reg),8);
        bufp->chgCData(oldp+2657,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__we_reg),4);
        bufp->chgIData(oldp+2658,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____Vcellout__way__BRA__0__KET____DOT__tag_v__dout),21);
        bufp->chgIData(oldp+2659,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__tag_v__DOT__din_reg),21);
        bufp->chgCData(oldp+2660,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__tag_v__DOT__addr_reg),8);
        bufp->chgBit(oldp+2661,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__tag_v__DOT__we_reg));
        bufp->chgIData(oldp+2662,((0xfffffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__tag_v__dout 
                                               >> 1U))),20);
        bufp->chgBit(oldp+2663,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__tag_v__dout)));
        bufp->chgWData(oldp+2664,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__d),256);
        bufp->chgIData(oldp+2672,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank_out[0]),32);
        bufp->chgIData(oldp+2673,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank_out[1]),32);
        bufp->chgIData(oldp+2674,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank_out[2]),32);
        bufp->chgIData(oldp+2675,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank_out[3]),32);
        bufp->chgIData(oldp+2676,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__bank__BRA__0__KET____DOT__bank__dout),32);
        bufp->chgIData(oldp+2677,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__din_reg),32);
        bufp->chgCData(oldp+2678,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__addr_reg),8);
        bufp->chgCData(oldp+2679,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__we_reg),4);
        bufp->chgIData(oldp+2680,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__bank__BRA__1__KET____DOT__bank__dout),32);
        bufp->chgIData(oldp+2681,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__din_reg),32);
        bufp->chgCData(oldp+2682,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__addr_reg),8);
        bufp->chgCData(oldp+2683,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__we_reg),4);
        bufp->chgIData(oldp+2684,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank__dout),32);
        bufp->chgIData(oldp+2685,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__din_reg),32);
        bufp->chgCData(oldp+2686,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__addr_reg),8);
        bufp->chgCData(oldp+2687,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__we_reg),4);
        bufp->chgIData(oldp+2688,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank__dout),32);
        bufp->chgIData(oldp+2689,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__din_reg),32);
        bufp->chgCData(oldp+2690,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__addr_reg),8);
        bufp->chgCData(oldp+2691,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__we_reg),4);
        bufp->chgIData(oldp+2692,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__tag_v__dout),21);
        bufp->chgIData(oldp+2693,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__tag_v__DOT__din_reg),21);
        bufp->chgCData(oldp+2694,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__tag_v__DOT__addr_reg),8);
        bufp->chgBit(oldp+2695,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__tag_v__DOT__we_reg));
        bufp->chgIData(oldp+2696,(((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__lookup_data_ok))) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__lookup_rdata)),32);
        bufp->chgBit(oldp+2697,((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state))));
        bufp->chgCData(oldp+2698,((3U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__v_ways)))),2);
        bufp->chgBit(oldp+2699,((1U & (~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__v_ways)))))))));
        bufp->chgCData(oldp+2700,((3U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__v_ways)) 
                                         & (- (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__v_ways)))))),2);
        bufp->chgCData(oldp+2701,(((2U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_way_gen__DOT__lfsr__DOT__lfsr_reg) 
                                          << 1U)) | 
                                   (1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_way_gen__DOT__lfsr__DOT__lfsr_reg))))),2);
        bufp->chgCData(oldp+2702,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_way_gen__DOT__lfsr__DOT__lfsr_reg),3);
        bufp->chgBit(oldp+2703,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_way_gen__DOT__lfsr__DOT__lfsr_reg))));
        bufp->chgBit(oldp+2704,(((~ (IData)((0U != 
                                             (3U & 
                                              (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__v_ways)))))) 
                                 & (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)))));
        bufp->chgCData(oldp+2705,(((6U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_way_gen__DOT__lfsr__DOT__lfsr_reg) 
                                          << 1U)) | 
                                   (1U & VL_REDXOR_32(
                                                      (5U 
                                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_way_gen__DOT__lfsr__DOT__lfsr_reg)))))),3);
        bufp->chgBit(oldp+2706,((1U & VL_REDXOR_32(
                                                   (5U 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_way_gen__DOT__lfsr__DOT__lfsr_reg))))));
        bufp->chgCData(oldp+2707,((3U & (- (IData)(
                                                   (((1U 
                                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)) 
                                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT___hit)) 
                                                        & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_cacheop)
                                                            ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_h09374013__0)
                                                            : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_he381076c__0)))) 
                                                    | ((3U 
                                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)) 
                                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_to_dirty_miss))))))),3);
        bufp->chgCData(oldp+2708,(((((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)) 
                                     | (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state))) 
                                    << 1U) | ((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)) 
                                              | (5U 
                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state))))),2);
        bufp->chgSData(oldp+2709,(((0xff00U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____Vcellinp__addr_parse__addr 
                                               << 4U)) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_index))),16);
        bufp->chgCData(oldp+2710,(((- (IData)(((3U 
                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)) 
                                               | (5U 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state))))) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_index))),8);
        bufp->chgCData(oldp+2711,((0xffU & ((- (IData)(
                                                       ((0U 
                                                         == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)) 
                                                        | (1U 
                                                           == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state))))) 
                                            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____Vcellinp__addr_parse__addr 
                                               >> 4U)))),8);
        bufp->chgCData(oldp+2712,((((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)) 
                                    << 1U) | (5U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)))),2);
        bufp->chgQData(oldp+2713,((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_tag)) 
                                    << 0x14U) | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_tag_new)))),40);
        bufp->chgIData(oldp+2715,(((- (IData)((5U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)))) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_tag_new)),20);
        bufp->chgIData(oldp+2716,(((- (IData)((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)))) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_tag)),20);
        bufp->chgCData(oldp+2717,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_hbe37574e__0) 
                                    << 2U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_h0ea5640d__0) 
                                               << 1U) 
                                              | (5U 
                                                 != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state))))),3);
        __Vtemp_heca64d66__0[0U] = ((- (IData)((5U 
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
                                                                           << 1U)))))))));
        __Vtemp_heca64d66__0[1U] = ((- (IData)((5U 
                                                != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)))) 
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
                                               >> 0x20U)));
        __Vtemp_heca64d66__0[2U] = ((- (IData)((5U 
                                                != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)))) 
                                    & ((0x400U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_buf_idle)) 
                                                  << 0xaU)) 
                                       | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_buf_index) 
                                           << 2U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_buf_bank_num))));
        bufp->chgWData(oldp+2718,(__Vtemp_heca64d66__0),75);
        __Vtemp_h23e63428__0[0U] = ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_h0ea5640d__0))) 
                                    & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__invalidate_ways) 
                                        << 0x18U) | 
                                       ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__invalidate_ways) 
                                        << 1U)));
        __Vtemp_h23e63428__0[1U] = 0U;
        __Vtemp_h23e63428__0[2U] = ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_h0ea5640d__0))) 
                                    & (0x400U | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_index) 
                                                 << 2U)));
        bufp->chgWData(oldp+2721,(__Vtemp_h23e63428__0),75);
        __Vtemp_hff913dfa__0[0U] = (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_h0ea5640d__0))) 
                                     & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__invalidate_ways) 
                                         << 0x18U) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__invalidate_ways) 
                                           << 1U))) 
                                    | ((- (IData)((5U 
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
                                                                              << 1U))))))))));
        __Vtemp_hff913dfa__0[1U] = ((- (IData)((5U 
                                                != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)))) 
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
                                               >> 0x20U)));
        __Vtemp_hff913dfa__0[2U] = (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_h0ea5640d__0))) 
                                     & (0x400U | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_index) 
                                                  << 2U))) 
                                    | ((- (IData)((5U 
                                                   != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)))) 
                                       & ((0x400U & 
                                           ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_buf_idle)) 
                                            << 0xaU)) 
                                          | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_buf_index) 
                                              << 2U) 
                                             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_buf_bank_num)))));
        bufp->chgWData(oldp+2724,(__Vtemp_hff913dfa__0),75);
        bufp->chgIData(oldp+2727,((0xfffffU & ((- (IData)(
                                                          (1U 
                                                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wb_way)))) 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_read_tags)))),20);
        bufp->chgIData(oldp+2728,((0xfffffU & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wb_way) 
                                                              >> 1U)))) 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_read_tags 
                                                          >> 0x14U))))),20);
        bufp->chgCData(oldp+2729,(((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_cacheop)) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_uncached)) 
                                    << 2U) | ((2U & 
                                               (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_cacheop)) 
                                                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_uncached))) 
                                                << 1U)) 
                                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_cacheop)))),3);
        bufp->chgQData(oldp+2730,((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_tag_new)) 
                                    << 0x28U) | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__tag_mux__DOT__and_gates__BRA__1__KET____DOT__or_result)) 
                                                  << 0x14U) 
                                                 | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wr_addr_cacheop_tag_mux__DOT__and_gates__BRA__1__KET____DOT__or_result))))),60);
        bufp->chgIData(oldp+2732,(((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_cacheop))) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wr_addr_cacheop_tag_mux__DOT__and_gates__BRA__1__KET____DOT__or_result)),20);
        bufp->chgIData(oldp+2733,(((- (IData)((1U & 
                                               ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_cacheop)) 
                                                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_uncached)))))) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__tag_mux__DOT__and_gates__BRA__1__KET____DOT__or_result)),20);
        bufp->chgIData(oldp+2734,((((- (IData)((1U 
                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_cacheop)) 
                                                   & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_uncached)))))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__tag_mux__DOT__and_gates__BRA__1__KET____DOT__or_result) 
                                   | ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_cacheop))) 
                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wr_addr_cacheop_tag_mux__DOT__and_gates__BRA__1__KET____DOT__or_result))),20);
        bufp->chgIData(oldp+2735,(((- (IData)(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_cacheop)) 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_uncached)))) 
                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_tag_new)),20);
        __Vtemp_h1ee848a0__0[0U] = ((- (IData)((1U 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wb_way)))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_read_lines[0U]);
        __Vtemp_h1ee848a0__0[1U] = ((- (IData)((1U 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wb_way)))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_read_lines[1U]);
        __Vtemp_h1ee848a0__0[2U] = ((- (IData)((1U 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wb_way)))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_read_lines[2U]);
        __Vtemp_h1ee848a0__0[3U] = ((- (IData)((1U 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wb_way)))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_read_lines[3U]);
        bufp->chgWData(oldp+2736,(__Vtemp_h1ee848a0__0),128);
        __Vtemp_h266b6fbd__0[0U] = ((- (IData)((1U 
                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wb_way) 
                                                   >> 1U)))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_read_lines[4U]);
        __Vtemp_h266b6fbd__0[1U] = ((- (IData)((1U 
                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wb_way) 
                                                   >> 1U)))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_read_lines[5U]);
        __Vtemp_h266b6fbd__0[2U] = ((- (IData)((1U 
                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wb_way) 
                                                   >> 1U)))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_read_lines[6U]);
        __Vtemp_h266b6fbd__0[3U] = ((- (IData)((1U 
                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wb_way) 
                                                   >> 1U)))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_read_lines[7U]);
        bufp->chgWData(oldp+2740,(__Vtemp_h266b6fbd__0),128);
        bufp->chgCData(oldp+2744,(((4U & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_cacheop)) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_uncached))) 
                                          << 2U)) | 
                                   ((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_cacheop)) 
                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_uncached)) 
                                     << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_cacheop)))),3);
        __Vtemp_hacaa6269__0[0U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wr_data_cacheop_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[0U];
        __Vtemp_hacaa6269__0[1U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wr_data_cacheop_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[1U];
        __Vtemp_hacaa6269__0[2U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wr_data_cacheop_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[2U];
        __Vtemp_hacaa6269__0[3U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wr_data_cacheop_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[3U];
        __Vtemp_hacaa6269__0[4U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_wdata;
        __Vtemp_hacaa6269__0[5U] = 0U;
        __Vtemp_hacaa6269__0[6U] = 0U;
        __Vtemp_hacaa6269__0[7U] = 0U;
        __Vtemp_hacaa6269__0[8U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__line_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[0U];
        __Vtemp_hacaa6269__0[9U] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__line_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[1U];
        __Vtemp_hacaa6269__0[0xaU] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__line_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[2U];
        __Vtemp_hacaa6269__0[0xbU] = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__line_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[3U];
        bufp->chgWData(oldp+2745,(__Vtemp_hacaa6269__0),384);
        __Vtemp_hfcdedeeb__0[0U] = ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_cacheop))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wr_data_cacheop_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[0U]);
        __Vtemp_hfcdedeeb__0[1U] = ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_cacheop))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wr_data_cacheop_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[1U]);
        __Vtemp_hfcdedeeb__0[2U] = ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_cacheop))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wr_data_cacheop_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[2U]);
        __Vtemp_hfcdedeeb__0[3U] = ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_cacheop))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wr_data_cacheop_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[3U]);
        bufp->chgWData(oldp+2757,(__Vtemp_hfcdedeeb__0),128);
        __Vtemp_ha6f5d90a__0[0U] = ((- (IData)(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_cacheop)) 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_uncached)))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_wdata);
        __Vtemp_ha6f5d90a__0[1U] = 0U;
        __Vtemp_ha6f5d90a__0[2U] = 0U;
        __Vtemp_ha6f5d90a__0[3U] = 0U;
        bufp->chgWData(oldp+2761,(__Vtemp_ha6f5d90a__0),128);
        __Vtemp_hd4169019__0[0U] = (((- (IData)(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_cacheop)) 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_uncached)))) 
                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_wdata) 
                                    | ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_cacheop))) 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wr_data_cacheop_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[0U]));
        __Vtemp_hd4169019__0[1U] = ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_cacheop))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wr_data_cacheop_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[1U]);
        __Vtemp_hd4169019__0[2U] = ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_cacheop))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wr_data_cacheop_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[2U]);
        __Vtemp_hd4169019__0[3U] = ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_cacheop))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wr_data_cacheop_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[3U]);
        bufp->chgWData(oldp+2765,(__Vtemp_hd4169019__0),128);
        __Vtemp_h63191e3f__0[0U] = ((- (IData)((1U 
                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_cacheop)) 
                                                   & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_uncached)))))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__line_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[0U]);
        __Vtemp_h63191e3f__0[1U] = ((- (IData)((1U 
                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_cacheop)) 
                                                   & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_uncached)))))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__line_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[1U]);
        __Vtemp_h63191e3f__0[2U] = ((- (IData)((1U 
                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_cacheop)) 
                                                   & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_uncached)))))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__line_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[2U]);
        __Vtemp_h63191e3f__0[3U] = ((- (IData)((1U 
                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_cacheop)) 
                                                   & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_uncached)))))) 
                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__line_mux__DOT__and_gates__BRA__1__KET____DOT__or_result[3U]);
        bufp->chgWData(oldp+2769,(__Vtemp_h63191e3f__0),128);
        bufp->chgCData(oldp+2773,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT____Vcellinp__priority_ar__in),2);
        bufp->chgBit(oldp+2774,((1U & (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_ar_disable)))));
        bufp->chgBit(oldp+2775,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_ar_disable));
        bufp->chgBit(oldp+2776,((1U & vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random)));
        bufp->chgBit(oldp+2777,((1U & ((vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                        >> 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw_disable)))));
        bufp->chgBit(oldp+2778,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw_disable));
        bufp->chgBit(oldp+2779,((1U & (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                       >> 1U))));
        bufp->chgBit(oldp+2780,((1U & (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                       >> 2U))));
        bufp->chgBit(oldp+2781,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_no_delay));
        bufp->chgBit(oldp+2782,((1U & (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                       >> 3U))));
        bufp->chgIData(oldp+2783,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random),23);
        bufp->chgIData(oldp+2784,(((0x7ffffeU & (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                                 << 1U)) 
                                   | (1U & VL_REDXOR_32(
                                                        (0x420000U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random))))),23);
        bufp->chgBit(oldp+2785,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_short_delay));
        bufp->chgBit(oldp+2786,((1U & ((vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                        >> 4U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_w_disable)))));
        bufp->chgBit(oldp+2787,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_w_disable));
        bufp->chgBit(oldp+2788,((1U & (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                       >> 4U))));
        bufp->chgQData(oldp+2789,((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)) 
                                    << 0x2bU) | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arsize)) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen)) 
                                                     << 0x24U) 
                                                    | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr)) 
                                                        << 4U) 
                                                       | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arid))))))),45);
        bufp->chgIData(oldp+2791,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr),32);
        bufp->chgIData(oldp+2792,(((((IData)(1U) + 
                                     (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr 
                                      >> 2U)) << 2U) 
                                   | (3U & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr))),32);
        bufp->chgIData(oldp+2793,((((- (IData)((0U 
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
        bufp->chgIData(oldp+2794,(((0xffffffc0U & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr) 
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
        bufp->chgCData(oldp+2795,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst),2);
        bufp->chgBit(oldp+2796,((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst))));
        bufp->chgBit(oldp+2797,((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst))));
        bufp->chgBit(oldp+2798,((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst))));
        bufp->chgCData(oldp+2799,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arid),4);
        bufp->chgCData(oldp+2800,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen),4);
        bufp->chgBit(oldp+2801,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen_last));
        bufp->chgCData(oldp+2802,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arsize),3);
        bufp->chgBit(oldp+2803,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid));
        bufp->chgQData(oldp+2804,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas),45);
        bufp->chgIData(oldp+2806,((IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                                           >> 0xdU))),32);
        bufp->chgCData(oldp+2807,((3U & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                                                 >> 0xbU)))),2);
        bufp->chgCData(oldp+2808,((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas))),4);
        bufp->chgCData(oldp+2809,((0xfU & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                                                   >> 4U)))),4);
        bufp->chgCData(oldp+2810,((7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                                                 >> 8U)))),3);
        bufp->chgBit(oldp+2811,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid));
        bufp->chgCData(oldp+2812,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur),4);
        bufp->chgQData(oldp+2813,((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr)) 
                                    << 0xdU) | (QData)((IData)(
                                                               (((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst) 
                                                                 << 0xbU) 
                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awsize) 
                                                                    << 8U) 
                                                                   | (((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awlen) 
                                                                       << 4U) 
                                                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awid)))))))),45);
        bufp->chgIData(oldp+2815,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr),32);
        bufp->chgIData(oldp+2816,(((((IData)(1U) + 
                                     (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr 
                                      >> 2U)) << 2U) 
                                   | (3U & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr))),32);
        bufp->chgIData(oldp+2817,((((- (IData)((0U 
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
        bufp->chgIData(oldp+2818,(((0xffffffc0U & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr) 
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
        bufp->chgCData(oldp+2819,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst),2);
        bufp->chgBit(oldp+2820,((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst))));
        bufp->chgBit(oldp+2821,((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst))));
        bufp->chgBit(oldp+2822,((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst))));
        bufp->chgCData(oldp+2823,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awid),4);
        bufp->chgCData(oldp+2824,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awlen),4);
        bufp->chgCData(oldp+2825,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awsize),3);
        bufp->chgBit(oldp+2826,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid));
        bufp->chgQData(oldp+2827,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas),45);
        bufp->chgIData(oldp+2829,((IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                           >> 0xdU))),32);
        bufp->chgCData(oldp+2830,((3U & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                                 >> 0xbU)))),2);
        bufp->chgCData(oldp+2831,((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas))),4);
        bufp->chgCData(oldp+2832,((0xfU & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                                   >> 4U)))),4);
        bufp->chgCData(oldp+2833,((7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                                 >> 8U)))),3);
        bufp->chgBit(oldp+2834,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_valid));
        bufp->chgBit(oldp+2835,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_allow_out));
        bufp->chgBit(oldp+2836,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid));
        bufp->chgCData(oldp+2837,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_datas),4);
        bufp->chgBit(oldp+2838,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid)))));
        bufp->chgCData(oldp+2839,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wstrb),4);
        bufp->chgIData(oldp+2840,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wdata),32);
        bufp->chgBit(oldp+2841,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wlast));
        bufp->chgBit(oldp+2842,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wvalid));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
        bufp->chgCData(oldp+2843,(vlSelf->simu_top__DOT__soc__DOT__m0_bid),4);
        bufp->chgCData(oldp+2844,(vlSelf->simu_top__DOT__soc__DOT__m0_bresp),2);
        bufp->chgCData(oldp+2845,(vlSelf->simu_top__DOT__soc__DOT__m0_rid),4);
        bufp->chgCData(oldp+2846,(vlSelf->simu_top__DOT__soc__DOT__m0_rresp),2);
    }
    bufp->chgBit(oldp+2847,(vlSelf->aclk));
    bufp->chgBit(oldp+2848,(vlSelf->aresetn));
    bufp->chgBit(oldp+2849,(vlSelf->enable_delay));
    bufp->chgIData(oldp+2850,(vlSelf->random_seed),23);
    bufp->chgBit(oldp+2851,(vlSelf->ram_ren));
    bufp->chgIData(oldp+2852,(vlSelf->ram_raddr),32);
    bufp->chgIData(oldp+2853,(vlSelf->ram_rdata),32);
    bufp->chgCData(oldp+2854,(vlSelf->ram_wen),4);
    bufp->chgIData(oldp+2855,(vlSelf->ram_waddr),32);
    bufp->chgIData(oldp+2856,(vlSelf->ram_wdata),32);
    bufp->chgIData(oldp+2857,(vlSelf->debug0_wb_pc),32);
    bufp->chgBit(oldp+2858,(vlSelf->debug0_wb_rf_wen));
    bufp->chgCData(oldp+2859,(vlSelf->debug0_wb_rf_wnum),5);
    bufp->chgIData(oldp+2860,(vlSelf->debug0_wb_rf_wdata),32);
    bufp->chgIData(oldp+2861,(vlSelf->num_data),32);
    bufp->chgBit(oldp+2862,(vlSelf->open_trace));
    bufp->chgBit(oldp+2863,(vlSelf->num_monitor));
    bufp->chgCData(oldp+2864,(vlSelf->confreg_uart_data),8);
    bufp->chgBit(oldp+2865,(vlSelf->write_uart_valid));
    bufp->chgWData(oldp+2866,(vlSelf->uart_ctr_bus),128);
    bufp->chgBit(oldp+2870,(vlSelf->uart_rx));
    bufp->chgBit(oldp+2871,(vlSelf->uart_tx));
    bufp->chgSData(oldp+2872,(vlSelf->led),16);
    bufp->chgCData(oldp+2873,(vlSelf->led_rg0),2);
    bufp->chgCData(oldp+2874,(vlSelf->led_rg1),2);
    bufp->chgCData(oldp+2875,(vlSelf->num_csn),8);
    bufp->chgCData(oldp+2876,(vlSelf->num_a_g),7);
    bufp->chgCData(oldp+2877,(vlSelf->btn_key_col),4);
    bufp->chgCData(oldp+2878,(vlSelf->btn_key_row),4);
    bufp->chgCData(oldp+2879,(vlSelf->btn_step),2);
    bufp->chgBit(oldp+2880,(vlSelf->clk));
    bufp->chgBit(oldp+2881,(vlSelf->resetn));
    bufp->chgBit(oldp+2882,(vlSelf->inst_req));
    bufp->chgBit(oldp+2883,(vlSelf->inst_wr));
    bufp->chgCData(oldp+2884,(vlSelf->inst_size),2);
    bufp->chgIData(oldp+2885,(vlSelf->inst_addr),32);
    bufp->chgIData(oldp+2886,(vlSelf->inst_wdata),32);
    bufp->chgCData(oldp+2887,(vlSelf->inst_wstrb),4);
    bufp->chgIData(oldp+2888,(vlSelf->inst_rdata),32);
    bufp->chgBit(oldp+2889,(vlSelf->inst_addr_ok));
    bufp->chgBit(oldp+2890,(vlSelf->inst_data_ok));
    bufp->chgBit(oldp+2891,(vlSelf->data_req));
    bufp->chgBit(oldp+2892,(vlSelf->data_wr));
    bufp->chgCData(oldp+2893,(vlSelf->data_size),2);
    bufp->chgCData(oldp+2894,(vlSelf->data_wstrb),4);
    bufp->chgIData(oldp+2895,(vlSelf->data_addr),32);
    bufp->chgIData(oldp+2896,(vlSelf->data_wdata),32);
    bufp->chgIData(oldp+2897,(vlSelf->data_rdata),32);
    bufp->chgBit(oldp+2898,(vlSelf->data_addr_ok));
    bufp->chgBit(oldp+2899,(vlSelf->data_data_ok));
    bufp->chgCData(oldp+2900,(vlSelf->arid),4);
    bufp->chgIData(oldp+2901,(vlSelf->araddr),32);
    bufp->chgCData(oldp+2902,(vlSelf->arlen),8);
    bufp->chgCData(oldp+2903,(vlSelf->arsize),3);
    bufp->chgCData(oldp+2904,(vlSelf->arburst),2);
    bufp->chgCData(oldp+2905,(vlSelf->arlock),2);
    bufp->chgCData(oldp+2906,(vlSelf->arcache),4);
    bufp->chgCData(oldp+2907,(vlSelf->arprot),3);
    bufp->chgBit(oldp+2908,(vlSelf->arvalid));
    bufp->chgBit(oldp+2909,(vlSelf->arready));
    bufp->chgCData(oldp+2910,(vlSelf->rid),4);
    bufp->chgIData(oldp+2911,(vlSelf->rdata),32);
    bufp->chgCData(oldp+2912,(vlSelf->rresp),2);
    bufp->chgBit(oldp+2913,(vlSelf->rlast));
    bufp->chgBit(oldp+2914,(vlSelf->rvalid));
    bufp->chgBit(oldp+2915,(vlSelf->rready));
    bufp->chgCData(oldp+2916,(vlSelf->awid),4);
    bufp->chgIData(oldp+2917,(vlSelf->awaddr),32);
    bufp->chgCData(oldp+2918,(vlSelf->awlen),8);
    bufp->chgCData(oldp+2919,(vlSelf->awsize),3);
    bufp->chgCData(oldp+2920,(vlSelf->awburst),2);
    bufp->chgCData(oldp+2921,(vlSelf->awlock),2);
    bufp->chgCData(oldp+2922,(vlSelf->awcache),4);
    bufp->chgCData(oldp+2923,(vlSelf->awprot),3);
    bufp->chgBit(oldp+2924,(vlSelf->awvalid));
    bufp->chgBit(oldp+2925,(vlSelf->awready));
    bufp->chgCData(oldp+2926,(vlSelf->wid),4);
    bufp->chgIData(oldp+2927,(vlSelf->wdata),32);
    bufp->chgCData(oldp+2928,(vlSelf->wstrb),4);
    bufp->chgBit(oldp+2929,(vlSelf->wlast));
    bufp->chgBit(oldp+2930,(vlSelf->wvalid));
    bufp->chgBit(oldp+2931,(vlSelf->wready));
    bufp->chgCData(oldp+2932,(vlSelf->bid),4);
    bufp->chgCData(oldp+2933,(vlSelf->bresp),2);
    bufp->chgBit(oldp+2934,(vlSelf->bvalid));
    bufp->chgBit(oldp+2935,(vlSelf->bready));
    bufp->chgBit(oldp+2936,(vlSelf->cpu_axi_interface__DOT__data_back));
    bufp->chgCData(oldp+2937,(vlSelf->__SYM__switch),8);
    bufp->chgBit(oldp+2938,((1U & (~ (IData)(vlSelf->aresetn)))));
    bufp->chgBit(oldp+2939,((1U & ((IData)(vlSelf->uart_rx__en0)
                                    ? ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__rx_en)) 
                                       | (IData)(vlSelf->uart_tx))
                                    : (IData)(vlSelf->uart_rx)))));
    bufp->chgBit(oldp+2940,((1U & ((~ (IData)(vlSelf->aresetn)) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop)))));
    bufp->chgIData(oldp+2941,(vlSelf->__SYM__switch),32);
    bufp->chgIData(oldp+2942,(((0x8000U & ((IData)(vlSelf->__SYM__switch) 
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
    bufp->chgBit(oldp+2943,(((~ (IData)((0xfU == (IData)(vlSelf->btn_key_row)))) 
                             & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)))));
    bufp->chgBit(oldp+2944,(((7U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                             & (0xfU == (IData)(vlSelf->btn_key_row)))));
    bufp->chgBit(oldp+2945,(((~ (IData)(vlSelf->btn_step)) 
                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r))));
    bufp->chgBit(oldp+2946,((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r)) 
                                   & (IData)(vlSelf->btn_step)))));
    bufp->chgBit(oldp+2947,(((~ ((IData)(vlSelf->btn_step) 
                                 >> 1U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r))));
    bufp->chgBit(oldp+2948,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r)) 
                             & ((IData)(vlSelf->btn_step) 
                                >> 1U))));
    bufp->chgCData(oldp+2949,((0xfU & (- (IData)((IData)(vlSelf->debug0_wb_rf_wen))))),4);
    bufp->chgBit(oldp+2950,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellinp__sram_to_axi_u__i_cacheop)) 
                             & (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state_next_mux__DOT__and_gates__BRA__4__KET____DOT__or_result)))));
    bufp->chgBit(oldp+2951,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellinp__sram_to_axi_u__d_cacheop)) 
                             & (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state_next_mux__DOT__and_gates__BRA__4__KET____DOT__or_result)))));
    bufp->chgBit(oldp+2952,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_allow_in));
    bufp->chgBit(oldp+2953,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_valid_in));
    bufp->chgIData(oldp+2954,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__MEM_forward_valid) 
                                 & ((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xaU] 
                                              >> 9U)) 
                                    == (0x1fU & (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0xaU)))))
                                 ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xaU] 
                                     << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[9U] 
                                                  >> 9U))
                                 : (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__WB_forward_valid) 
                                     & ((IData)(vlSelf->debug0_wb_rf_wnum) 
                                        == (0x1fU & (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0xaU)))))
                                     ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb
                                     : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rk_id)) 
                               >> 0xdU)),19);
    bufp->chgBit(oldp+2955,((1U & (((~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[1U] 
                                        >> 3U)) & (
                                                   (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellinp__sram_to_axi_u__d_cacheop)) 
                                                     & (1U 
                                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state_next_mux__DOT__and_gates__BRA__4__KET____DOT__or_result))) 
                                                    & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__req_mem) 
                                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____VdfgTmp_h0da1d373__0))) 
                                                   | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____VdfgTmp_h0da1d373__0)) 
                                                      & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divEn)) 
                                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divEn) 
                                                            & (0x21U 
                                                               == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__count))))))) 
                                   | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[1U] 
                                        >> 3U) & ((
                                                   (((1U 
                                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)) 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_cacheop)) 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h1fa730de__0)) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h0ea5640d__0)) 
                                                  | ((((1U 
                                                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)) 
                                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_cacheop)) 
                                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_h1fa730de__0)) 
                                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_h0ea5640d__0)))) 
                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_is_exc))))));
    bufp->chgBit(oldp+2956,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_valid_in));
    bufp->chgBit(oldp+2957,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_ready_go));
    bufp->chgIData(oldp+2958,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__MEM_forward_valid) 
                                & ((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xaU] 
                                             >> 9U)) 
                                   == (0x1fU & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 0xaU)))))
                                ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xaU] 
                                    << 0x17U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[9U] 
                                                 >> 9U))
                                : (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__WB_forward_valid) 
                                    & ((IData)(vlSelf->debug0_wb_rf_wnum) 
                                       == (0x1fU & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0xaU)))))
                                    ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb
                                    : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rk_id))),32);
    bufp->chgBit(oldp+2959,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_is_exc) 
                             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_ready_go))));
    bufp->chgCData(oldp+2960,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state_next_mux__DOT__and_gates__BRA__4__KET____DOT__or_result),3);
    bufp->chgBit(oldp+2961,(((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)) 
                             & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req)) 
                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_overlap)))));
    bufp->chgBit(oldp+2962,(((~ ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)) 
                                 & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req)) 
                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_overlap)))) 
                             & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)))));
    bufp->chgBit(oldp+2963,(((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)) 
                             & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__lookup_to_lookup)) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT___hit)))));
    bufp->chgCData(oldp+2964,((((((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req)) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_overlap))) 
                                 | (((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)) 
                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__lookup_to_lookup)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT___hit))) 
                                    | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_to_refill)) 
                                        & (5U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state))) 
                                       | ((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)) 
                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h7fa9a667__0))))) 
                                << 5U) | (((((~ ((0U 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)) 
                                                 & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req)) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_overlap)))) 
                                             & (0U 
                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state))) 
                                            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__lookup_to_lookup)) 
                                           << 4U) | 
                                          (((((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)) 
                                              & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT___hit)) 
                                                 & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_cacheop)) 
                                                    & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_he381076c__0))))) 
                                             | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache_rd_rdy)) 
                                                & (2U 
                                                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)))) 
                                            << 3U) 
                                           | (((((1U 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)) 
                                                 & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT___hit)) 
                                                    & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_cacheop)
                                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h09374013__0)
                                                        : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_he381076c__0)))) 
                                                | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__buf_empty)) 
                                                    & (3U 
                                                       == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state))) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_to_dirty_miss))) 
                                               << 2U) 
                                              | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__dirty_miss_to_replace) 
                                                   | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache_rd_rdy)) 
                                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_hbe0a95ac__0))) 
                                                  << 1U) 
                                                 | (((2U 
                                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)) 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache_rd_rdy)) 
                                                    | (((4U 
                                                         == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)) 
                                                        & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_cacheop)
                                                            ? 
                                                           (0U 
                                                            == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wb_ways_next))
                                                            : 
                                                           ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_to_dirty_miss)) 
                                                            & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_uncached)) 
                                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache_rd_rdy))))) 
                                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_to_refill) 
                                                          | ((1U 
                                                              == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)) 
                                                             & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_cacheop) 
                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h09374013__0)) 
                                                                   & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_cacheop_hit) 
                                                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__hit)) 
                                                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_cacheop_index)))))))))))))),6);
    bufp->chgCData(oldp+2965,((1U & (- (IData)((((~ 
                                                  ((0U 
                                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)) 
                                                   & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req)) 
                                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_overlap)))) 
                                                 & (0U 
                                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state))) 
                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__lookup_to_lookup)))))),3);
    bufp->chgBit(oldp+2966,(((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)) 
                             & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req)) 
                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_overlap)))));
    bufp->chgBit(oldp+2967,(((~ ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)) 
                                 & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req)) 
                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_overlap)))) 
                             & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)))));
    bufp->chgBit(oldp+2968,(((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)) 
                             & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__lookup_to_lookup)) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT___hit)))));
    bufp->chgCData(oldp+2969,((((((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req)) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_overlap))) 
                                 | (((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)) 
                                     & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__lookup_to_lookup)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT___hit))) 
                                    | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__refill_to_refill)) 
                                        & (5U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state))) 
                                       | ((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)) 
                                          & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_cacheop)) 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_uncached)))))) 
                                << 5U) | (((((~ ((0U 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)) 
                                                 & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req)) 
                                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_overlap)))) 
                                             & (0U 
                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state))) 
                                            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__lookup_to_lookup)) 
                                           << 4U) | 
                                          (((((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)) 
                                              & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT___hit)) 
                                                 & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_cacheop)) 
                                                    & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_he381076c__0))))) 
                                             | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache_rd_rdy)) 
                                                & (2U 
                                                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)))) 
                                            << 3U) 
                                           | (((((1U 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)) 
                                                 & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT___hit)) 
                                                    & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_cacheop)
                                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_h09374013__0)
                                                        : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_he381076c__0)))) 
                                                | ((3U 
                                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_to_dirty_miss))) 
                                               << 2U) 
                                              | ((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache_rd_rdy)) 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_hbe0a95ac__0)) 
                                                  << 1U) 
                                                 | (((2U 
                                                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)) 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache_rd_rdy)) 
                                                    | (((4U 
                                                         == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)) 
                                                        & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_cacheop)
                                                            ? 
                                                           (0U 
                                                            == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wb_ways_next))
                                                            : 
                                                           ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_to_dirty_miss)) 
                                                            & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_uncached)) 
                                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache_rd_rdy))))) 
                                                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__refill_to_refill) 
                                                          | ((1U 
                                                              == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)) 
                                                             & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_cacheop) 
                                                                & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_h09374013__0)) 
                                                                   & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_cacheop_hit) 
                                                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__hit)) 
                                                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_cacheop_index)))))))))))))),6);
    bufp->chgCData(oldp+2970,((1U & (- (IData)((((~ 
                                                  ((0U 
                                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)) 
                                                   & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req)) 
                                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_overlap)))) 
                                                 & (0U 
                                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state))) 
                                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__lookup_to_lookup)))))),3);
    bufp->chgBit(oldp+2971,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen_last)) 
                             & (IData)(vlSelf->ram_ren))));
    bufp->chgBit(oldp+2972,((1U & ((~ (IData)(vlSelf->aresetn)) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop)))));
}

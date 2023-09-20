// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vsimu_top___024root.h"

VL_INLINE_OPT void Vsimu_top___024root___nba_comb__TOP__0(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_valid_in 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_valid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_ready_go));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_allow_in 
        = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_valid)) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_valid_in)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_excode 
        = (0x3fU & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_tmp_valid) 
                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_valid_in))
                     ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_excode_tmp)
                     : ((0x400U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__csrmsg_data[0U])
                         ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__csrmsg_data[0U] 
                             << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__csrmsg_data[0U] 
                                         >> 0x14U))
                         : ((0U != (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ie))) 
                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__is)) 
                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__lie)))
                             ? 0U : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__csrmsg_data[0U] 
                                      << 0xcU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__csrmsg_data[0U] 
                                                  >> 0x14U))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_is_exc 
        = (1U & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__csrmsg_data[0U] 
                  >> 0xaU) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_tmp_valid) 
                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_valid_in)) 
                              | (0U != (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ie))) 
                                         & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__is)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__lie))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_csrmsgin[0U] 
        = (((IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__csrmsg_data[2U])) 
                      << 0x26U) | (((QData)((IData)(
                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__csrmsg_data[1U])) 
                                    << 6U) | ((QData)((IData)(
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__csrmsg_data[0U])) 
                                              >> 0x1aU)))) 
            << 0x1aU) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_excode) 
                          << 0x14U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_is_exc) 
                                        << 0xaU) | 
                                       (0x3ffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__csrmsg_data[0U]))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_csrmsgin[1U] 
        = (((IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__csrmsg_data[2U])) 
                      << 0x26U) | (((QData)((IData)(
                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__csrmsg_data[1U])) 
                                    << 6U) | ((QData)((IData)(
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__csrmsg_data[0U])) 
                                              >> 0x1aU)))) 
            >> 6U) | ((IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__csrmsg_data[2U])) 
                                 << 0x26U) | (((QData)((IData)(
                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__csrmsg_data[1U])) 
                                               << 6U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__csrmsg_data[0U])) 
                                                 >> 0x1aU))) 
                               >> 0x20U)) << 0x1aU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_csrmsgin[2U] 
        = ((IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__csrmsg_data[2U])) 
                      << 0x26U) | (((QData)((IData)(
                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__csrmsg_data[1U])) 
                                    << 6U) | ((QData)((IData)(
                                                              vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__csrmsg_data[0U])) 
                                              >> 0x1aU))) 
                    >> 0x20U)) >> 6U);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_ready_go 
        = (1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_data_ok_cached) 
                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_data_ok_uncached) 
                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__lookup_data_ok))) 
                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid) 
                    | ((~ (IData)((0U != (0x300U & 
                                          vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0xbU])))) 
                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_is_exc)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__req_mem 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_allow_in) 
           & ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_is_exc) 
                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_is_exc))) 
              & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____VdfgTmp_h0da1d373__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellinp__sram_to_axi_u__d_cacheop) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__req_mem));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__lookup_to_lookup 
        = ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req) 
              & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_overlap)) 
                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT___hit))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state_next_mux__DOT__and_gates__BRA__4__KET____DOT__or_result 
        = ((1U & (- (IData)((((~ ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)) 
                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req)) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_overlap)))) 
                              & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state))) 
                             | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__lookup_to_lookup))))) 
           | ((2U & (- (IData)((((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)) 
                                 & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT___hit)) 
                                    & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_cacheop)) 
                                       & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_he381076c__0))))) 
                                | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache_rd_rdy)) 
                                   & (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state))))))) 
              | ((3U & (- (IData)((((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)) 
                                    & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT___hit)) 
                                       & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_cacheop)
                                           ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h09374013__0)
                                           : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_he381076c__0)))) 
                                   | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__buf_empty)) 
                                       & (3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state))) 
                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_to_dirty_miss)))))) 
                 | ((4U & (- (IData)(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__dirty_miss_to_replace) 
                                      | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache_rd_rdy)) 
                                         & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_hbe0a95ac__0)))))) 
                    | (5U & (- (IData)((((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)) 
                                         & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache_rd_rdy)) 
                                        | (((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)) 
                                            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_cacheop)
                                                ? (0U 
                                                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wb_ways_next))
                                                : (
                                                   (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_to_dirty_miss)) 
                                                   & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_uncached)) 
                                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache_rd_rdy))))) 
                                           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_to_refill) 
                                              | ((1U 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)) 
                                                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_cacheop) 
                                                    & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h09374013__0)) 
                                                       & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_cacheop_hit) 
                                                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__hit)) 
                                                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_cacheop_index)))))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_valid_in 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid) 
           & (((~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[1U] 
                   >> 3U)) & ((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellinp__sram_to_axi_u__d_cacheop)) 
                                & (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state_next_mux__DOT__and_gates__BRA__4__KET____DOT__or_result))) 
                               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__req_mem) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____VdfgTmp_h0da1d373__0))) 
                              | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____VdfgTmp_h0da1d373__0)) 
                                 & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divEn)) 
                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divEn) 
                                       & (0x21U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__count))))))) 
              | (((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[1U] 
                   >> 3U) & (((((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state)) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_cacheop)) 
                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h1fa730de__0)) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h0ea5640d__0)) 
                             | ((((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state)) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_cacheop)) 
                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_h1fa730de__0)) 
                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_h0ea5640d__0)))) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_is_exc))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_allow_in 
        = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)) 
                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_valid_in) 
                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_allow_in))));
}

VL_INLINE_OPT void Vsimu_top___024root___nba_sequent__TOP__3(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___nba_sequent__TOP__3\n"); );
    // Init
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
    VlWide<3>/*95:0*/ __Vtemp_h9f2a52b1__0;
    VlWide<3>/*95:0*/ __Vtemp_h64550be5__0;
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
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__rdata_mux__DOT__and_gates__BRA__2__KET____DOT__or_result 
        = (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__lookup_data_ok))) 
            & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__lookup_rdata) 
           | (((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__refill_data_ok_cached))) 
               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__refill_word) 
              | ((- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__refill_data_ok_uncached))) 
                 & vlSelf->simu_top__DOT__soc__DOT__m0_rdata)));
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
}

void Vsimu_top___024root___nba_sequent__TOP__0(Vsimu_top___024root* vlSelf);
void Vsimu_top___024root___nba_sequent__TOP__1(Vsimu_top___024root* vlSelf);
void Vsimu_top___024root___nba_sequent__TOP__2(Vsimu_top___024root* vlSelf);
void Vsimu_top___024root___act_sequent__TOP__1(Vsimu_top___024root* vlSelf);
void Vsimu_top___024root___act_comb__TOP__0(Vsimu_top___024root* vlSelf);

void Vsimu_top___024root___eval_nba(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(2U)) {
        Vsimu_top___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        Vsimu_top___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
        Vsimu_top___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(3U))) {
        Vsimu_top___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(3U))) {
        Vsimu_top___024root___act_sequent__TOP__1(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        Vsimu_top___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if (((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U)) 
         | vlSelf->__VnbaTriggered.at(3U))) {
        Vsimu_top___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
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
    VlTriggerVec<4> __VpreTriggered;
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
                VL_FATAL_MT("/home/weinijuan/cpu/IP/myCPU/cpu_axi_interface.v", 28, "", "Input combinational region did not converge.");
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
                    VL_FATAL_MT("/home/weinijuan/cpu/IP/myCPU/cpu_axi_interface.v", 28, "", "Active region did not converge.");
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
                VL_FATAL_MT("/home/weinijuan/cpu/IP/myCPU/cpu_axi_interface.v", 28, "", "NBA region did not converge.");
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
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->resetn & 0xfeU))) {
        Verilated::overWidthError("resetn");}
    if (VL_UNLIKELY((vlSelf->inst_req & 0xfeU))) {
        Verilated::overWidthError("inst_req");}
    if (VL_UNLIKELY((vlSelf->inst_wr & 0xfeU))) {
        Verilated::overWidthError("inst_wr");}
    if (VL_UNLIKELY((vlSelf->inst_size & 0xfcU))) {
        Verilated::overWidthError("inst_size");}
    if (VL_UNLIKELY((vlSelf->inst_wstrb & 0xf0U))) {
        Verilated::overWidthError("inst_wstrb");}
    if (VL_UNLIKELY((vlSelf->data_req & 0xfeU))) {
        Verilated::overWidthError("data_req");}
    if (VL_UNLIKELY((vlSelf->data_wr & 0xfeU))) {
        Verilated::overWidthError("data_wr");}
    if (VL_UNLIKELY((vlSelf->data_size & 0xfcU))) {
        Verilated::overWidthError("data_size");}
    if (VL_UNLIKELY((vlSelf->data_wstrb & 0xf0U))) {
        Verilated::overWidthError("data_wstrb");}
    if (VL_UNLIKELY((vlSelf->arready & 0xfeU))) {
        Verilated::overWidthError("arready");}
    if (VL_UNLIKELY((vlSelf->rid & 0xf0U))) {
        Verilated::overWidthError("rid");}
    if (VL_UNLIKELY((vlSelf->rresp & 0xfcU))) {
        Verilated::overWidthError("rresp");}
    if (VL_UNLIKELY((vlSelf->rlast & 0xfeU))) {
        Verilated::overWidthError("rlast");}
    if (VL_UNLIKELY((vlSelf->rvalid & 0xfeU))) {
        Verilated::overWidthError("rvalid");}
    if (VL_UNLIKELY((vlSelf->awready & 0xfeU))) {
        Verilated::overWidthError("awready");}
    if (VL_UNLIKELY((vlSelf->wready & 0xfeU))) {
        Verilated::overWidthError("wready");}
    if (VL_UNLIKELY((vlSelf->bid & 0xf0U))) {
        Verilated::overWidthError("bid");}
    if (VL_UNLIKELY((vlSelf->bresp & 0xfcU))) {
        Verilated::overWidthError("bresp");}
    if (VL_UNLIKELY((vlSelf->bvalid & 0xfeU))) {
        Verilated::overWidthError("bvalid");}
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

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vsimu_top___024root.h"

VL_ATTR_COLD void Vsimu_top___024root___stl_sequent__TOP__0(Vsimu_top___024root* vlSelf);
void Vsimu_top___024root___act_sequent__TOP__0(Vsimu_top___024root* vlSelf);
void Vsimu_top___024root___act_sequent__TOP__1(Vsimu_top___024root* vlSelf);
void Vsimu_top___024root___act_comb__TOP__0(Vsimu_top___024root* vlSelf);

VL_ATTR_COLD void Vsimu_top___024root___eval_stl(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vsimu_top___024root___stl_sequent__TOP__0(vlSelf);
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
    if ((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(2U))) {
        Vsimu_top___024root___act_sequent__TOP__0(vlSelf);
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
    if ((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(1U))) {
        Vsimu_top___024root___act_sequent__TOP__1(vlSelf);
    }
    if (((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(1U)) 
         | vlSelf->__VstlTriggered.at(2U))) {
        Vsimu_top___024root___act_comb__TOP__0(vlSelf);
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
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimu_top___024root___dump_triggers__ico(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimu_top___024root___dump_triggers__act(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] simu_top.soc.cpu.cpu_sram_u.id_ready_go)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([hybrid] simu_top.soc.cpu.cpu_sram_u.mem_ready_go)\n");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VactTriggered.at(3U)) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge aclk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimu_top___024root___dump_triggers__nba(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] simu_top.soc.cpu.cpu_sram_u.id_ready_go)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([hybrid] simu_top.soc.cpu.cpu_sram_u.mem_ready_go)\n");
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge aclk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsimu_top___024root___ctor_var_reset(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->resetn = VL_RAND_RESET_I(1);
    vlSelf->inst_req = VL_RAND_RESET_I(1);
    vlSelf->inst_wr = VL_RAND_RESET_I(1);
    vlSelf->inst_size = VL_RAND_RESET_I(2);
    vlSelf->inst_addr = VL_RAND_RESET_I(32);
    vlSelf->inst_wdata = VL_RAND_RESET_I(32);
    vlSelf->inst_wstrb = VL_RAND_RESET_I(4);
    vlSelf->inst_rdata = VL_RAND_RESET_I(32);
    vlSelf->inst_addr_ok = VL_RAND_RESET_I(1);
    vlSelf->inst_data_ok = VL_RAND_RESET_I(1);
    vlSelf->data_req = VL_RAND_RESET_I(1);
    vlSelf->data_wr = VL_RAND_RESET_I(1);
    vlSelf->data_size = VL_RAND_RESET_I(2);
    vlSelf->data_wstrb = VL_RAND_RESET_I(4);
    vlSelf->data_addr = VL_RAND_RESET_I(32);
    vlSelf->data_wdata = VL_RAND_RESET_I(32);
    vlSelf->data_rdata = VL_RAND_RESET_I(32);
    vlSelf->data_addr_ok = VL_RAND_RESET_I(1);
    vlSelf->data_data_ok = VL_RAND_RESET_I(1);
    vlSelf->arid = VL_RAND_RESET_I(4);
    vlSelf->araddr = VL_RAND_RESET_I(32);
    vlSelf->arlen = VL_RAND_RESET_I(8);
    vlSelf->arsize = VL_RAND_RESET_I(3);
    vlSelf->arburst = VL_RAND_RESET_I(2);
    vlSelf->arlock = VL_RAND_RESET_I(2);
    vlSelf->arcache = VL_RAND_RESET_I(4);
    vlSelf->arprot = VL_RAND_RESET_I(3);
    vlSelf->arvalid = VL_RAND_RESET_I(1);
    vlSelf->arready = VL_RAND_RESET_I(1);
    vlSelf->rid = VL_RAND_RESET_I(4);
    vlSelf->rdata = VL_RAND_RESET_I(32);
    vlSelf->rresp = VL_RAND_RESET_I(2);
    vlSelf->rlast = VL_RAND_RESET_I(1);
    vlSelf->rvalid = VL_RAND_RESET_I(1);
    vlSelf->rready = VL_RAND_RESET_I(1);
    vlSelf->awid = VL_RAND_RESET_I(4);
    vlSelf->awaddr = VL_RAND_RESET_I(32);
    vlSelf->awlen = VL_RAND_RESET_I(8);
    vlSelf->awsize = VL_RAND_RESET_I(3);
    vlSelf->awburst = VL_RAND_RESET_I(2);
    vlSelf->awlock = VL_RAND_RESET_I(2);
    vlSelf->awcache = VL_RAND_RESET_I(4);
    vlSelf->awprot = VL_RAND_RESET_I(3);
    vlSelf->awvalid = VL_RAND_RESET_I(1);
    vlSelf->awready = VL_RAND_RESET_I(1);
    vlSelf->wid = VL_RAND_RESET_I(4);
    vlSelf->wdata = VL_RAND_RESET_I(32);
    vlSelf->wstrb = VL_RAND_RESET_I(4);
    vlSelf->wlast = VL_RAND_RESET_I(1);
    vlSelf->wvalid = VL_RAND_RESET_I(1);
    vlSelf->wready = VL_RAND_RESET_I(1);
    vlSelf->bid = VL_RAND_RESET_I(4);
    vlSelf->bresp = VL_RAND_RESET_I(2);
    vlSelf->bvalid = VL_RAND_RESET_I(1);
    vlSelf->bready = VL_RAND_RESET_I(1);
    vlSelf->aclk = VL_RAND_RESET_I(1);
    vlSelf->aresetn = VL_RAND_RESET_I(1);
    vlSelf->enable_delay = VL_RAND_RESET_I(1);
    vlSelf->random_seed = VL_RAND_RESET_I(23);
    vlSelf->ram_ren = VL_RAND_RESET_I(1);
    vlSelf->ram_raddr = VL_RAND_RESET_I(32);
    vlSelf->ram_rdata = VL_RAND_RESET_I(32);
    vlSelf->ram_wen = VL_RAND_RESET_I(4);
    vlSelf->ram_waddr = VL_RAND_RESET_I(32);
    vlSelf->ram_wdata = VL_RAND_RESET_I(32);
    vlSelf->debug0_wb_pc = VL_RAND_RESET_I(32);
    vlSelf->debug0_wb_rf_wen = VL_RAND_RESET_I(1);
    vlSelf->debug0_wb_rf_wnum = VL_RAND_RESET_I(5);
    vlSelf->debug0_wb_rf_wdata = VL_RAND_RESET_I(32);
    vlSelf->num_data = VL_RAND_RESET_I(32);
    vlSelf->open_trace = VL_RAND_RESET_I(1);
    vlSelf->num_monitor = VL_RAND_RESET_I(1);
    vlSelf->confreg_uart_data = VL_RAND_RESET_I(8);
    vlSelf->write_uart_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->uart_ctr_bus);
    vlSelf->uart_rx = VL_RAND_RESET_I(1);
    vlSelf->uart_tx = VL_RAND_RESET_I(1);
    vlSelf->led = VL_RAND_RESET_I(16);
    vlSelf->led_rg0 = VL_RAND_RESET_I(2);
    vlSelf->led_rg1 = VL_RAND_RESET_I(2);
    vlSelf->num_csn = VL_RAND_RESET_I(8);
    vlSelf->num_a_g = VL_RAND_RESET_I(7);
    vlSelf->__SYM__switch = VL_RAND_RESET_I(8);
    vlSelf->btn_key_col = VL_RAND_RESET_I(4);
    vlSelf->btn_key_row = VL_RAND_RESET_I(4);
    vlSelf->btn_step = VL_RAND_RESET_I(2);
    vlSelf->uart_rx__en0 = 0;
    vlSelf->cpu_axi_interface__DOT__do_req = VL_RAND_RESET_I(1);
    vlSelf->cpu_axi_interface__DOT__do_req_or = VL_RAND_RESET_I(1);
    vlSelf->cpu_axi_interface__DOT__do_wr_r = VL_RAND_RESET_I(1);
    vlSelf->cpu_axi_interface__DOT__do_size_r = VL_RAND_RESET_I(2);
    vlSelf->cpu_axi_interface__DOT__do_addr_r = VL_RAND_RESET_I(32);
    vlSelf->cpu_axi_interface__DOT__do_wdata_r = VL_RAND_RESET_I(32);
    vlSelf->cpu_axi_interface__DOT__do_wstrb_r = VL_RAND_RESET_I(4);
    vlSelf->cpu_axi_interface__DOT__data_back = VL_RAND_RESET_I(1);
    vlSelf->cpu_axi_interface__DOT__addr_rcv = VL_RAND_RESET_I(1);
    vlSelf->cpu_axi_interface__DOT__wdata_rcv = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu_awready = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu_wvalid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu_bvalid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu_arvalid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu_arready = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__m0_awvalid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__m0_awready = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__m0_wvalid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__m0_wready = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__m0_bid = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__m0_bresp = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__m0_bvalid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__m0_arvalid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__m0_arready = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__m0_rid = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__m0_rdata = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__m0_rresp = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__m0_rlast = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__m0_rvalid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__s0_wready = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_s_wready = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__apb_s_awready = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__apb_s_wready = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__apb_s_bvalid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__apb_s_arready = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__apb_s_rlast = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__apb_s_rvalid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__UART_RI = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__uart0_int = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__uart0_txd_oe = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__debug1_wb_pc = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__debug1_wb_rf_wen = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__debug1_wb_rf_wnum = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__debug1_wb_rf_wdata = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__req_inst = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_inst = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wdata_inst = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__req_mem = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cacheop_wb = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cacheop_addr = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellinp__sram_to_axi_u__d_cacheop = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT____Vcellinp__sram_to_axi_u__i_cacheop = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_allow_in = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_data_in = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_data_out = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_ready_go = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_flush = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_nop = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_allow_in = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_excode = VL_RAND_RESET_I(6);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_is_exc = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(90, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_csrmsgin);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_ready_go = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_flush = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_valid_in = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_ready_go = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_allow_in = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_flush = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(90, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_csrmsgin);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_valid_in = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_is_exc = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_allow_in = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_flush = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(90, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_csrmsgin);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_valid_in = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_excode = VL_RAND_RESET_I(6);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_is_exc = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_ready_go = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_flush = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(90, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_csrmsgin);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_valid_in = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_excode = VL_RAND_RESET_I(6);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_intercode = VL_RAND_RESET_I(12);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_is_exc = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_flush = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_allow_out = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(90, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_csrmsgin);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csrout_wb = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__exaddr = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__exlike = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__plv = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__asid = VL_RAND_RESET_I(10);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__da = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__pg = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__lie = VL_RAND_RESET_I(12);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__is = VL_RAND_RESET_I(12);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ie = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_tlb_ind = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_tlb_phytranitem = VL_RAND_RESET_I(26);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_tlb_ne = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_is_usetlb = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_ind = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_phytranitem = VL_RAND_RESET_I(26);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_tlb_ne = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_is_usetlb = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__r_ps = VL_RAND_RESET_I(6);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__r_asid = VL_RAND_RESET_I(10);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__r_ne = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__r_phytran0 = VL_RAND_RESET_I(26);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__r_phytran1 = VL_RAND_RESET_I(26);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__r_g = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__r_vppn = VL_RAND_RESET_I(19);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__counter_lower = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__counter_higher = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mat_i = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mat_d = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tid = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellinp__tlb__s1_vppn = VL_RAND_RESET_I(19);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__branchPC = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__branchPC_temp = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__branchPC_temp_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC_is_dmw = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__pc_have_exc = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__eq = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__lt = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteEn_id = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__unsignBranchCmp = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__is_ine_id = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__is_tlb_wen_id = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__is_csr_wen_id = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__aluctrl = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__alusel2 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__alusel1 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__itype = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__pcsel = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_id = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rk_id = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_id = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__immout_id = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id_true = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_id_true = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_ex_true = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rk_ex_true = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_ex_true = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__brstall = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__error_inst_in_if = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(343, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluout_ex = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_addr_phyaddr = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_is_dmw = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellinp__addr_trans_memaddr__pg = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__extend_store_u__extend_data = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(362, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_excode_tmp = VL_RAND_RESET_I(6);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_tmp_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_is_exc_last = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(389, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlbfill_en = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rand_index = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cnt_inst_diff = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__timer_64_diff = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_cnt_inst = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_timer_64 = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_inst_ld_en = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_ld_paddr = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_ld_vaddr = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_inst_st_en = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_st_paddr = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_st_vaddr = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_st_data = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_csr_rstat_en = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_csr_data = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_wen = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_wdest = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_wdata = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_pc = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_inst = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_excp_flush = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_ertn = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_csr_ecode = VL_RAND_RESET_I(6);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_tlbfill_en = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_rand_index = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__trap = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__trap_code = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cycleCnt = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instrCnt = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_tlbelo1_diff_0 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____VdfgExtracted_h16cb5132__0 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____VdfgTmp_h0da1d373__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_RAND_RESET_W(89, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tlb[__Vi0]);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tmp0 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlb__DOT__tmp1 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(960, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__inter_ti = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__pc_tmp = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__stable_counter = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__musk_rel = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__pipeline_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(90, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__csrmsg_data);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__pipeline_data = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__pipeline_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(90, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__csrmsg_data);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__pipeline_data = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SUB_TYPE = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SLT_TYPE = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SLTU_TYPE = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_NOR_TYPE = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_AND_TYPE = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_OR_TYPE = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_XOR_TYPE = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SLL_TYPE = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SRL_TYPE = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SRA_TYPE = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_MUL_TYPE = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_MULH_TYPE = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_MULHU_TYPE = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_DIV_TYPE = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_MOD_TYPE = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_DIVU_TYPE = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_MODU_TYPE = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BRK_TYPE = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SYSCALL_TYPE = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SLLI_TYPE = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SRLI_TYPE = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SRAI_TYPE = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SLTI_TYPE = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SLTUI_TYPE = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ANDI_TYPE = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ORI_TYPE = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_XORI_TYPE = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LUI_TYPE = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_PCADDU12I_TYPE = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_B_TYPE = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_H_TYPE = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_W_TYPE = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ST_B_TYPE = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ST_H_TYPE = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ST_W_TYPE = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_BU_TYPE = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_HU_TYPE = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_JIRL_TYPE = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BL_TYPE = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BEQ_TYPE = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BNE_TYPE = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BLT_TYPE = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BGE_TYPE = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BLTU_TYPE = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BGEU_TYPE = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_CSRWR_TYPE = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_CSRXCHG_TYPE = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_TLB_TYPEM = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_TLBSRCH_TYPE = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_TLBRD_TYPE = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ERTN_TYPE = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_TLBINV_TYPEM = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_RDCNTID_TYPE = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_RDCNTVL_TYPE = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_RDCNTVH_TYPE = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_reg_inst = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_shamt_inst = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_regimm_inst = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_u_inst = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_load_inst = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_store_inst = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_b_inst = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_branch_inst = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT____VdfgTmp_hc260b695__0 = 0;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT____VdfgTmp_hfa3cf28f__0 = 0;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT____VdfgTmp_h9c888c86__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__MEM_forward_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__WB_forward_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__rj_ex_true_temp = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__rj_ex_true_temp_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__rk_ex_true_temp = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__rk_ex_true_temp_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__rd_ex_true_temp = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__rd_ex_true_temp_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT__cancel = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT____VdfgTmp_hf7cffa19__0 = 0;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT____VdfgTmp_h2a69b9a6__0 = 0;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT____VdfgTmp_h81692869__0 = 0;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT____VdfgTmp_h7e7f3c05__0 = 0;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT____VdfgTmp_h0dac690a__0 = 0;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(90, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__csrmsg_data);
    VL_RAND_RESET_W(343, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divUnsigned = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divEn = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__quotient = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__remainder = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_result = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_b = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_cin = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__mul_result = VL_RAND_RESET_Q(64);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_u = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__remainder_u = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_sign = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__dividend_reg = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__minuend = VL_RAND_RESET_Q(33);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__count = VL_RAND_RESET_I(6);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__minuend_shifted = VL_RAND_RESET_Q(33);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__minuend_next = VL_RAND_RESET_Q(33);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__dividend_next = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__difference = VL_RAND_RESET_Q(33);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(90, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__csrmsg_data);
    VL_RAND_RESET_W(362, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(90, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__csrmsg_data);
    VL_RAND_RESET_W(389, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache_rd_rdy = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache_ret_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache_rd_rdy = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__waiting_for_rvalid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_arvalid_reg = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_arvalid_reg = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT____Vcellout__priority_ar__out = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT____Vcellinp__priority_ar__in = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__hit_way = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__v_ways = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__d_index = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__d_way = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____Vcellinp__addr_parse__addr = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__bank_num = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_index = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_offset = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_bank_num = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_write = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_tag = VL_RAND_RESET_I(20);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_wstrb = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_size = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_wdata = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_uncached = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_cacheop = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_cacheop_index = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_cacheop_hit = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req_buf_cacheop_wb = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_index = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_tag_new = VL_RAND_RESET_I(20);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_replace_way = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_hit_way = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_offset = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_write = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_wdata = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_wstrb = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_size = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_bank_num = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_uncached = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_cacheop = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_cacheop_hit = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_read_lines);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_buf_read_tags = VL_RAND_RESET_Q(40);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wb_ways = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wb_ways_init = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wb_way = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wb_ways_next = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_to_dirty_miss = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT___hit = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_buf_way = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_buf_index = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_buf_wstrb = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_buf_wdata = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_buf_bank_num = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_buf_idle = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__write_overlap = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__forword_byte_from_write_buffer = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__req = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__lookup_to_lookup = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__refill_to_refill = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__lookup_rdata = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__first_cycle_of_REPLACE = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__refill_buf_ptr = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__refill_requested_word = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__refill_word = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__invalidate_ways = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__lookup_data_ok = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__refill_data_ok_cached = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__refill_data_ok_uncached = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_hbe0a95ac__0 = 0;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_h1fa730de__0 = 0;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_h0ea5640d__0 = 0;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_he5eb326c__0 = 0;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_h09374013__0 = 0;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_he381076c__0 = 0;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT____VdfgTmp_hbe37574e__0 = 0;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__we = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____Vcellout__way__BRA__0__KET____DOT__tag_v__dout = VL_RAND_RESET_I(21);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____Vcellinp__way__BRA__0__KET____DOT__tag_v__din = VL_RAND_RESET_I(21);
    VL_RAND_RESET_W(256, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__d);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank_out[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__0__KET____DOT__bank_we = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__1__KET____DOT__bank_we = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__2__KET____DOT__bank_we = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__3__KET____DOT__bank_we = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__we = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__tag_v__dout = VL_RAND_RESET_I(21);
    VL_RAND_RESET_W(256, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__d);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank_out[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__0__KET____DOT__bank_we = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__bank__BRA__0__KET____DOT__bank__dout = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__1__KET____DOT__bank_we = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__bank__BRA__1__KET____DOT__bank__dout = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank_we = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank__dout = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank_we = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank__dout = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__line_mux__DOT__and_gates__BRA__1__KET____DOT__or_result);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__tag_mux__DOT__and_gates__BRA__1__KET____DOT__or_result = VL_RAND_RESET_I(20);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__tag_v__DOT__ram_[__Vi0] = VL_RAND_RESET_I(21);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__tag_v__DOT__din_reg = VL_RAND_RESET_I(21);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__tag_v__DOT__addr_reg = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__tag_v__DOT__we_reg = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__tag_v__DOT__j = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__ram_[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__din_reg = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__addr_reg = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__we_reg = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__j = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__ram_[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__din_reg = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__addr_reg = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__we_reg = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__j = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__ram_[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__din_reg = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__addr_reg = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__we_reg = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__j = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__ram_[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__din_reg = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__addr_reg = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__we_reg = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__j = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__tag_v__DOT__ram_[__Vi0] = VL_RAND_RESET_I(21);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__tag_v__DOT__din_reg = VL_RAND_RESET_I(21);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__tag_v__DOT__addr_reg = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__tag_v__DOT__we_reg = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__tag_v__DOT__j = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__ram_[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__din_reg = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__addr_reg = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__we_reg = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__j = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__ram_[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__din_reg = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__addr_reg = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__we_reg = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__j = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__ram_[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__din_reg = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__addr_reg = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__we_reg = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__j = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__ram_[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__din_reg = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__addr_reg = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__we_reg = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__state_next_mux__DOT__and_gates__BRA__4__KET____DOT__or_result = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_way_gen__DOT__lfsr__DOT__lfsr_reg = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__replace_way_gen__DOT__lfsr__DOT__lfsr_reg_next = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(128, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wr_data_cacheop_mux__DOT__and_gates__BRA__1__KET____DOT__or_result);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__wr_addr_cacheop_tag_mux__DOT__and_gates__BRA__1__KET____DOT__or_result = VL_RAND_RESET_I(20);
    VL_RAND_RESET_W(75, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_index_mux__DOT__and_gates__BRA__1__KET____DOT__or_result = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__table_tag_mux__DOT__and_gates__BRA__1__KET____DOT__or_result = VL_RAND_RESET_I(20);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__i_cache__DOT__rdata_mux__DOT__and_gates__BRA__2__KET____DOT__or_result = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__hit_way = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__v_ways = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__d_index = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__d_way = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____Vcellinp__addr_parse__addr = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__bank_num = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_index = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_offset = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_bank_num = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_write = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_tag = VL_RAND_RESET_I(20);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_wstrb = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_size = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_wdata = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_uncached = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_cacheop = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_cacheop_index = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_cacheop_hit = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req_buf_cacheop_wb = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_index = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_tag_new = VL_RAND_RESET_I(20);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_replace_way = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_hit_way = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_offset = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_write = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_wdata = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_wstrb = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_size = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_bank_num = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_uncached = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_cacheop = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_cacheop_hit = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_read_lines);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_buf_read_tags = VL_RAND_RESET_Q(40);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wb_ways = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wb_ways_init = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wb_way = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wb_ways_next = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_to_dirty_miss = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT___hit = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_buf_way = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_buf_index = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_buf_wstrb = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_buf_wdata = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_buf_bank_num = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_buf_idle = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__write_overlap = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__forword_byte_from_write_buffer = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__req = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__lookup_to_lookup = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__dirty_miss_to_replace = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_to_refill = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__lookup_rdata = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__first_cycle_of_REPLACE = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_buf_ptr = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_requested_word = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_word = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__invalidate_ways = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__lookup_data_ok = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_data_ok_cached = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__refill_data_ok_uncached = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_hbe0a95ac__0 = 0;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h7fa9a667__0 = 0;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h1fa730de__0 = 0;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h0ea5640d__0 = 0;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_he5eb326c__0 = 0;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h09374013__0 = 0;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_he381076c__0 = 0;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_ha3470664__0 = 0;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_hbe37574e__0 = 0;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT____VdfgTmp_h5478a6f0__0 = 0;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__we = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____Vcellout__way__BRA__0__KET____DOT__tag_v__dout = VL_RAND_RESET_I(21);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____Vcellinp__way__BRA__0__KET____DOT__tag_v__din = VL_RAND_RESET_I(21);
    VL_RAND_RESET_W(256, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__d);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank_out[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__0__KET____DOT__bank_we = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__1__KET____DOT__bank_we = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__2__KET____DOT__bank_we = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__3__KET____DOT__bank_we = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__we = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__tag_v__dout = VL_RAND_RESET_I(21);
    VL_RAND_RESET_W(256, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__d);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank_out[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__0__KET____DOT__bank_we = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__bank__BRA__0__KET____DOT__bank__dout = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__1__KET____DOT__bank_we = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__bank__BRA__1__KET____DOT__bank__dout = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank_we = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank__dout = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank_we = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT____Vcellout__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank__dout = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__line_mux__DOT__and_gates__BRA__1__KET____DOT__or_result);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__tag_mux__DOT__and_gates__BRA__1__KET____DOT__or_result = VL_RAND_RESET_I(20);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__tag_v__DOT__ram_[__Vi0] = VL_RAND_RESET_I(21);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__tag_v__DOT__din_reg = VL_RAND_RESET_I(21);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__tag_v__DOT__addr_reg = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__tag_v__DOT__we_reg = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__tag_v__DOT__j = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__ram_[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__din_reg = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__addr_reg = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__we_reg = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__j = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__ram_[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__din_reg = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__addr_reg = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__we_reg = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__j = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__ram_[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__din_reg = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__addr_reg = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__we_reg = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__j = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__ram_[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__din_reg = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__addr_reg = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__we_reg = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__0__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__j = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__tag_v__DOT__ram_[__Vi0] = VL_RAND_RESET_I(21);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__tag_v__DOT__din_reg = VL_RAND_RESET_I(21);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__tag_v__DOT__addr_reg = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__tag_v__DOT__we_reg = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__tag_v__DOT__j = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__ram_[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__din_reg = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__addr_reg = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__we_reg = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__0__KET____DOT__bank__DOT__j = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__ram_[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__din_reg = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__addr_reg = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__we_reg = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__1__KET____DOT__bank__DOT__j = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__ram_[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__din_reg = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__addr_reg = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__we_reg = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__2__KET____DOT__bank__DOT__j = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__ram_[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__din_reg = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__addr_reg = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__we_reg = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__cache_table__DOT__way__BRA__1__KET____DOT__bank__BRA__3__KET____DOT__bank__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__state_next_mux__DOT__and_gates__BRA__4__KET____DOT__or_result = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_way_gen__DOT__lfsr__DOT__lfsr_reg = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__replace_way_gen__DOT__lfsr__DOT__lfsr_reg_next = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(128, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wr_data_cacheop_mux__DOT__and_gates__BRA__1__KET____DOT__or_result);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__wr_addr_cacheop_tag_mux__DOT__and_gates__BRA__1__KET____DOT__or_result = VL_RAND_RESET_I(20);
    VL_RAND_RESET_W(75, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_write_mux__DOT__and_gates__BRA__2__KET____DOT__or_result);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_index_mux__DOT__and_gates__BRA__1__KET____DOT__or_result = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__d_cache__DOT__table_tag_mux__DOT__and_gates__BRA__1__KET____DOT__or_result = VL_RAND_RESET_I(20);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__ar_mux__DOT__and_gates__BRA__3__KET____DOT__or_result = VL_RAND_RESET_I(13);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__buf_empty = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__buf_data);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__buf_data_ptr = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__buf_addr = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__buf_burst = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__buf_size = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__buf_strb = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__w_last = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__w_handshake = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__w_finish = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__idle_to_aw_w = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT____VdfgTmp_hb3e29d94__0 = 0;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT____VdfgTmp_ha3725e82__0 = 0;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__next_mux__DOT__and_gates__BRA__3__KET____DOT__or_result = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__sram_to_axi_u__DOT__axi_wr__DOT__wr_mux__DOT__and_gates__BRA__1__KET____DOT__or_result = VL_RAND_RESET_Q(49);
    vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_ar_disable = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw_disable = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_no_delay = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random = VL_RAND_RESET_I(23);
    vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random_next = VL_RAND_RESET_I(23);
    vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_short_delay = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_w_disable = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h765eb7cb__0 = 0;
    vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h76518f96__0 = 0;
    vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h4bbe5f71__0 = 0;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_awready = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_wdata = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_wready = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_bid = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_bresp = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_bvalid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_araddr = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_arready = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rid = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rdata = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rresp = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rlast = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rvalid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_awready = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_wready = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_bid = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_bresp = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_bvalid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_arready = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rid = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rdata = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rresp = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rlast = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rvalid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__BASE_ADDR[__Vi0] = VL_RAND_RESET_I(5);
    }
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_0 = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_1 = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__bvalid_group_0 = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_sel_group_0 = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_sel_group_1 = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_empty = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_dir_ins = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_dir_del = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_dir = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_pre_sel = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel_reg = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_sel = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_dir_ins = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_pre_sel = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit_int = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6c6cb05b__1 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_hee60d8fe__1 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____VdfgTmp_h9973e968__0 = 0;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____VdfgTmp_h58a8c0e9__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_rw_dma = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_dma = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_dma = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_addr_dma = VL_RAND_RESET_I(20);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_dma = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_wdata_dma = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_ack_i = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datai_cpu = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datao_cpu = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_word_trans_cpu = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_cpu = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_high_24b_wr = VL_RAND_RESET_I(24);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_clk_dma = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_reset_n_dma = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_ack = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_rw = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr = VL_RAND_RESET_I(20);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_datai = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_datao = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_ack = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_datai = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_ready = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm_nxt = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr = VL_RAND_RESET_I(20);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_w_id = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_r_id = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_wr_size = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_ack = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_psel = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_enab = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__re = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__rx_en = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__tx2rx_en = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__enable = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__srx_pad = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fcr = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__infrared = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_pol = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl = VL_RAND_RESET_I(24);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__start_dlc = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask_d = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc = VL_RAND_RESET_I(16);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__trigger_level = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_reset = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tx_reset = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_reg = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_en_reg = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fi_di_reg = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__repeat_reg = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tx_en = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0r = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr1r = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr2r = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr3r = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr4r = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5r = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6r = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7r = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_push = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t = VL_RAND_RESET_I(10);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__max_repeat_time = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_out = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_in = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_overrun = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_push_pulse = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____Vcellinp__receiver__enable = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask_condition = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir_read = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr_read = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fifo_read = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__delayed_modem_signals = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0_d = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr1_d = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr2_d = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr3_d = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr4_d = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5_d = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6_d = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7_d = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_cnt = VL_RAND_RESET_I(9);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_next = VL_RAND_RESET_I(9);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_toggle = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_d = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_d = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_d = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_d = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_d = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_pnd = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_pnd = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_pnd = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_pnd = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_pnd = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__d1_fifo_read = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____VdfgTmp_h84138141__0 = 0;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__shift_out = VL_RAND_RESET_I(7);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_pop = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_out = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_out = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_overrun = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_bak = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT____VdfgTmp_hd44064a5__0 = 0;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__i_uart_sync_flops__DOT__flop_0 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16 = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rbit_counter = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_error = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rframing_error = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rbit_in = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_xor = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push_q = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_data_in = VL_RAND_RESET_I(11);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_7 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_0 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1 = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value = VL_RAND_RESET_I(10);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__data8_out = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1 = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_int = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r0 = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r1 = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_type_r1 = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_type_r2 = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__REG_DAT_T = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_c = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r = VL_RAND_RESET_I(25);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_op_num = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map1 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_rdy_map0 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_rdy_map1 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing = VL_RAND_RESET_I(16);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__addr_in_die = VL_RAND_RESET_Q(38);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_clr_ack = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NANDtag = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT0 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT1 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT2 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT3 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT6 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT7 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT8 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT9 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT10 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT11 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_cmd_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_number = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM = VL_RAND_RESET_Q(48);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = VL_RAND_RESET_I(5);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count = VL_RAND_RESET_I(14);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR = VL_RAND_RESET_Q(38);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_I_WR = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ACK = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ERASE_SERIAL = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT____VdfgTmp_h194fa2e7__0 = 0;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT____VdfgTmp_hdb5c27a8__0 = 0;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT____VdfgTmp_hda1c3bf2__0 = 0;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT____VdfgTmp_he5337c8c__0 = 0;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT____VdfgTmp_hea0d93a3__0 = 0;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT____VdfgTmp_h2fe3549b__0 = 0;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT____VdfgTmp_h559fe0c2__0 = 0;
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr_next = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arid = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen_last = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arsize = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_push = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push_data = VL_RAND_RESET_Q(45);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas = VL_RAND_RESET_Q(45);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_pop = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_push = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rcur = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rid = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rlast = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rvalid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_next = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awid = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awlen = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awsize = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_push = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_push = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_push_data = VL_RAND_RESET_Q(45);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas = VL_RAND_RESET_Q(45);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_pop = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_push = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_allow_out = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_data = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_datas = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_pop = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_push = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_go = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wlast = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wstrb = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wvalid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_next = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arid = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen_last = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arsize = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_push = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_push = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas = VL_RAND_RESET_Q(45);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_pop = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_push = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rid = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rlast = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rvalid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_next = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst = VL_RAND_RESET_I(2);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awid = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awlen = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awsize = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_push = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_push = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas = VL_RAND_RESET_Q(45);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_pop = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_push = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_allow_out = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_data = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_datas = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_pop = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_push = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_go = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wdata = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wlast = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wstrb = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wvalid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr0 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr1 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr2 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr3 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr4 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr5 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr6 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr7 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__led_data = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__led_rg0_data = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__led_rg1_data = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__num_data = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__confreg_uart_data = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__confreg_uart_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__timer_r2 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__simu_flag = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__io_simu = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__virtual_uart_data = VL_RAND_RESET_I(8);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__open_trace = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__num_monitor = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_rdata_reg = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r1 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r2 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r3 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r1 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r2 = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r1 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r2 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__timer_r1 = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__timer = VL_RAND_RESET_I(32);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_uart_valid = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_key_r = VL_RAND_RESET_I(16);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__key_flag = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__key_count = VL_RAND_RESET_I(20);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state_count = VL_RAND_RESET_I(4);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_key_tmp = VL_RAND_RESET_I(16);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step0_flag = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step0_count = VL_RAND_RESET_I(20);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step1_flag = VL_RAND_RESET_I(1);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step1_count = VL_RAND_RESET_I(20);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__count = VL_RAND_RESET_I(20);
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__scan_data = VL_RAND_RESET_I(4);
    vlSelf->__VdfgTmp_hf20fd9bb__0 = 0;
    vlSelf->__VdfgTmp_hce404a6e__0 = 0;
    VL_ZERO_RESET_W(128, vlSelf->__VdfgTmp_ha5fa42eb__0);
    vlSelf->__VdfgTmp_h966d58da__0 = 0;
    vlSelf->__VdfgTmp_hfd5d21d5__0 = 0;
    vlSelf->__VdfgTmp_hc4b92322__0 = 0;
    vlSelf->__VdfgTmp_he8917e58__0 = 0;
    VL_ZERO_RESET_W(128, vlSelf->__VdfgTmp_hfea590d9__0);
    vlSelf->__VdfgTmp_h208b8f36__0 = 0;
    vlSelf->__VdfgTmp_haa7259b7__0 = 0;
    vlSelf->__VdfgTmp_hcd04e225__0 = 0;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(960, vlSelf->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr__DOT__csr);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc = VL_RAND_RESET_I(16);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_pnd = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_pnd = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_pnd = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_pnd = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_pnd = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__shift_out = VL_RAND_RESET_I(7);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_out = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count = VL_RAND_RESET_I(5);
    vlSelf->__Vdlyvdim0__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0;
    vlSelf->__Vdlyvval__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0;
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_xor = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r1 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__key_count = VL_RAND_RESET_I(20);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__state_count = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__step0_count = VL_RAND_RESET_I(20);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__step1_count = VL_RAND_RESET_I(20);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__count = VL_RAND_RESET_I(20);
    vlSelf->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__timer = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigrprev__TOP__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_ready_go = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_ready_go = VL_RAND_RESET_I(1);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__aclk = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

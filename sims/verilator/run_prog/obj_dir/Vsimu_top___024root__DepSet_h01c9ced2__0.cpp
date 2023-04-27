// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vsimu_top__Syms.h"
#include "Vsimu_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimu_top___024root___dump_triggers__ico(Vsimu_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vsimu_top___024root___eval_triggers__ico(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsimu_top___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimu_top___024root___dump_triggers__act(Vsimu_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vsimu_top___024root___eval_triggers__act(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->aclk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__aclk)));
    vlSelf->__Vtrigrprev__TOP__aclk = vlSelf->aclk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsimu_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vsimu_top___024unit____Vdpiimwrap_v_difftest_CSRRegState_TOP____024unit(CData/*7:0*/ coreid, QData/*63:0*/ crmd, QData/*63:0*/ prmd, QData/*63:0*/ euen, QData/*63:0*/ ecfg, QData/*63:0*/ estat, QData/*63:0*/ era, QData/*63:0*/ badv, QData/*63:0*/ eentry, QData/*63:0*/ tlbidx, QData/*63:0*/ tlbehi, QData/*63:0*/ tlbelo0, QData/*63:0*/ tlbelo1, QData/*63:0*/ asid, QData/*63:0*/ pgdl, QData/*63:0*/ pgdh, QData/*63:0*/ save0, QData/*63:0*/ save1, QData/*63:0*/ save2, QData/*63:0*/ save3, QData/*63:0*/ tid, QData/*63:0*/ tcfg, QData/*63:0*/ tval, QData/*63:0*/ ticlr, QData/*63:0*/ llbctl, QData/*63:0*/ tlbrentry, QData/*63:0*/ dmw0, QData/*63:0*/ dmw1);
void Vsimu_top___024unit____Vdpiimwrap_v_difftest_GRegState_TOP____024unit(CData/*7:0*/ coreid, QData/*63:0*/ gpr_0, QData/*63:0*/ gpr_1, QData/*63:0*/ gpr_2, QData/*63:0*/ gpr_3, QData/*63:0*/ gpr_4, QData/*63:0*/ gpr_5, QData/*63:0*/ gpr_6, QData/*63:0*/ gpr_7, QData/*63:0*/ gpr_8, QData/*63:0*/ gpr_9, QData/*63:0*/ gpr_10, QData/*63:0*/ gpr_11, QData/*63:0*/ gpr_12, QData/*63:0*/ gpr_13, QData/*63:0*/ gpr_14, QData/*63:0*/ gpr_15, QData/*63:0*/ gpr_16, QData/*63:0*/ gpr_17, QData/*63:0*/ gpr_18, QData/*63:0*/ gpr_19, QData/*63:0*/ gpr_20, QData/*63:0*/ gpr_21, QData/*63:0*/ gpr_22, QData/*63:0*/ gpr_23, QData/*63:0*/ gpr_24, QData/*63:0*/ gpr_25, QData/*63:0*/ gpr_26, QData/*63:0*/ gpr_27, QData/*63:0*/ gpr_28, QData/*63:0*/ gpr_29, QData/*63:0*/ gpr_30, QData/*63:0*/ gpr_31);
void Vsimu_top___024unit____Vdpiimwrap_v_difftest_TrapEvent_TOP____024unit(CData/*7:0*/ coreid, CData/*0:0*/ valid, CData/*7:0*/ code, QData/*63:0*/ pc, QData/*63:0*/ cycleCnt, QData/*63:0*/ instrCnt);
void Vsimu_top___024unit____Vdpiimwrap_v_difftest_LoadEvent_TOP____024unit(CData/*7:0*/ coreid, CData/*7:0*/ index, CData/*7:0*/ valid, QData/*63:0*/ paddr, QData/*63:0*/ vaddr);
void Vsimu_top___024unit____Vdpiimwrap_v_difftest_StoreEvent_TOP____024unit(CData/*7:0*/ coreid, CData/*7:0*/ index, CData/*7:0*/ valid, QData/*63:0*/ storePAddr, QData/*63:0*/ storeVAddr, QData/*63:0*/ storeData);
void Vsimu_top___024unit____Vdpiimwrap_v_difftest_ExcpEvent_TOP____024unit(CData/*7:0*/ coreid, CData/*7:0*/ excp_valid, CData/*0:0*/ eret, IData/*31:0*/ intrNo, IData/*31:0*/ cause, QData/*63:0*/ exceptionPC, IData/*31:0*/ exceptionInst);
void Vsimu_top___024unit____Vdpiimwrap_v_difftest_InstrCommit_TOP____024unit(CData/*7:0*/ coreid, CData/*7:0*/ index, CData/*0:0*/ valid, QData/*63:0*/ pc, IData/*31:0*/ instr, CData/*0:0*/ skip, CData/*0:0*/ is_TLBFILL, CData/*7:0*/ TLBFILL_index, CData/*0:0*/ is_CNTinst, QData/*63:0*/ timer_64_value, CData/*0:0*/ wen, CData/*7:0*/ wdest, QData/*63:0*/ wdata, CData/*0:0*/ csr_rstat, IData/*31:0*/ csr_data);
extern const VlUnpacked<CData/*0:0*/, 2048> Vsimu_top__ConstPool__TABLE_h64fffa2f_0;
extern const VlUnpacked<CData/*6:0*/, 32> Vsimu_top__ConstPool__TABLE_hfafeda1e_0;
extern const VlUnpacked<CData/*3:0*/, 64> Vsimu_top__ConstPool__TABLE_h8018663f_0;
extern const VlUnpacked<CData/*3:0*/, 4> Vsimu_top__ConstPool__TABLE_h7eaf993d_0;
extern const VlWide<8>/*255:0*/ Vsimu_top__ConstPool__CONST_h3cc724c7_0;
extern const VlUnpacked<CData/*2:0*/, 32> Vsimu_top__ConstPool__TABLE_hfbff4245_0;
extern const VlUnpacked<IData/*31:0*/, 32> Vsimu_top__ConstPool__TABLE_h14a2fcf8_0;
extern const VlUnpacked<CData/*3:0*/, 1024> Vsimu_top__ConstPool__TABLE_h24f8336e_0;
extern const VlUnpacked<CData/*7:0*/, 256> Vsimu_top__ConstPool__TABLE_ha6e7b954_0;
extern const VlUnpacked<SData/*9:0*/, 256> Vsimu_top__ConstPool__TABLE_hb86679b4_0;

VL_INLINE_OPT void Vsimu_top___024root___nba_sequent__TOP__0(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___nba_sequent__TOP__0\n"); );
    // Init
    SData/*10:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*5:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*4:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    CData/*0:0*/ __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__branchPC_temp_valid;
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__branchPC_temp_valid = 0;
    CData/*0:0*/ __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp_valid;
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp_valid = 0;
    CData/*0:0*/ __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid;
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid = 0;
    CData/*4:0*/ __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf__v0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf__v0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf__v0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req;
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req = 0;
    CData/*1:0*/ __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_size_r;
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_size_r = 0;
    IData/*31:0*/ __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r;
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r = 0;
    IData/*31:0*/ __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wdata_r;
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wdata_r = 0;
    CData/*3:0*/ __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wstrb_r;
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wstrb_r = 0;
    IData/*19:0*/ __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr = 0;
    CData/*0:0*/ __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr = 0;
    CData/*0:0*/ __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 0;
    CData/*3:0*/ __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb = 0;
    IData/*31:0*/ __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 = 0;
    CData/*0:0*/ __Vdly__simu_top__DOT__soc__DOT__apb_s_bvalid;
    __Vdly__simu_top__DOT__soc__DOT__apb_s_bvalid = 0;
    CData/*0:0*/ __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd = 0;
    CData/*2:0*/ __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size = 0;
    CData/*2:0*/ __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count = 0;
    CData/*0:0*/ __Vdly__simu_top__DOT__soc__DOT__apb_s_rvalid;
    __Vdly__simu_top__DOT__soc__DOT__apb_s_rvalid = 0;
    CData/*0:0*/ __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant = 0;
    CData/*7:0*/ __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count = 0;
    CData/*0:0*/ __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop = 0;
    CData/*0:0*/ __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset = 0;
    CData/*3:0*/ __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier = 0;
    CData/*0:0*/ __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5r;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5r = 0;
    SData/*15:0*/ __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc = 0;
    CData/*7:0*/ __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt = 0;
    CData/*0:0*/ __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_pnd;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_pnd = 0;
    CData/*0:0*/ __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_pnd;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_pnd = 0;
    CData/*0:0*/ __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_pnd;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_pnd = 0;
    CData/*0:0*/ __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_pnd;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_pnd = 0;
    CData/*0:0*/ __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_pnd;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_pnd = 0;
    CData/*2:0*/ __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate = 0;
    CData/*2:0*/ __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time = 0;
    CData/*4:0*/ __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter = 0;
    CData/*0:0*/ __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error = 0;
    CData/*2:0*/ __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter = 0;
    CData/*0:0*/ __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor = 0;
    CData/*6:0*/ __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__shift_out;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__shift_out = 0;
    CData/*0:0*/ __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_out;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_out = 0;
    CData/*3:0*/ __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0;
    CData/*4:0*/ __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count = 0;
    CData/*3:0*/ __Vdlyvdim0__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0;
    CData/*7:0*/ __Vdlyvval__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    __Vdlyvval__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    __Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0;
    CData/*3:0*/ __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate = 0;
    CData/*0:0*/ __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_xor;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_xor = 0;
    CData/*7:0*/ __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift = 0;
    CData/*7:0*/ __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b = 0;
    SData/*9:0*/ __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t = 0;
    CData/*3:0*/ __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top = 0;
    CData/*3:0*/ __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0;
    CData/*4:0*/ __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count = 0;
    CData/*0:0*/ __Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0;
    __Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 0;
    CData/*3:0*/ __Vdlyvdim0__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 0;
    CData/*2:0*/ __Vdlyvval__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16;
    __Vdlyvval__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 0;
    CData/*0:0*/ __Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16;
    __Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 0;
    CData/*3:0*/ __Vdlyvdim0__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17 = 0;
    CData/*0:0*/ __Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17;
    __Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17 = 0;
    CData/*3:0*/ __Vdlyvdim0__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 = 0;
    CData/*2:0*/ __Vdlyvval__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18;
    __Vdlyvval__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 = 0;
    CData/*0:0*/ __Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18;
    __Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 = 0;
    CData/*0:0*/ __Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v19;
    __Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v19 = 0;
    CData/*3:0*/ __Vdlyvdim0__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0;
    CData/*7:0*/ __Vdlyvval__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    __Vdlyvval__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    __Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0;
    IData/*31:0*/ __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command = 0;
    CData/*0:0*/ __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half = 0;
    CData/*0:0*/ __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob = 0;
    CData/*0:0*/ __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0;
    CData/*7:0*/ __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0;
    SData/*13:0*/ __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count = 0;
    QData/*37:0*/ __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR = 0;
    CData/*0:0*/ __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0;
    CData/*0:0*/ __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0;
    CData/*7:0*/ __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status = 0;
    CData/*7:0*/ __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM = 0;
    CData/*7:0*/ __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM = 0;
    CData/*4:0*/ __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0;
    CData/*1:0*/ __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer = 0;
    CData/*0:0*/ __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0;
    CData/*0:0*/ __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ERASE_SERIAL;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ERASE_SERIAL = 0;
    IData/*31:0*/ __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM = 0;
    CData/*2:0*/ __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT = 0;
    SData/*13:0*/ __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT = 0;
    SData/*13:0*/ __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT = 0;
    CData/*0:0*/ __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE = 0;
    CData/*2:0*/ __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM = 0;
    CData/*4:0*/ __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0;
    CData/*3:0*/ __Vdly__simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rcur;
    __Vdly__simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rcur = 0;
    CData/*3:0*/ __Vdly__simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur;
    __Vdly__simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur = 0;
    IData/*31:0*/ __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr0;
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr0 = 0;
    IData/*31:0*/ __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr6;
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr6 = 0;
    IData/*31:0*/ __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr1;
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr1 = 0;
    IData/*31:0*/ __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr2;
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr2 = 0;
    IData/*31:0*/ __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr3;
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr3 = 0;
    IData/*31:0*/ __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr4;
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr4 = 0;
    IData/*31:0*/ __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr5;
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr5 = 0;
    IData/*31:0*/ __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr7;
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr7 = 0;
    CData/*0:0*/ __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r1;
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r1 = 0;
    IData/*19:0*/ __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__key_count;
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__key_count = 0;
    CData/*3:0*/ __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__state_count;
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__state_count = 0;
    IData/*19:0*/ __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__step0_count;
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__step0_count = 0;
    IData/*19:0*/ __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__step1_count;
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__step1_count = 0;
    IData/*19:0*/ __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__count;
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__count = 0;
    CData/*5:0*/ __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__count;
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__count = 0;
    CData/*0:0*/ __Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog;
    __Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog = 0;
    CData/*0:0*/ __Vdlyvdim0__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v0 = 0;
    CData/*2:0*/ __Vdlyvval__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v0;
    __Vdlyvval__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v0;
    __Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v1;
    __Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v1 = 0;
    CData/*1:0*/ __Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr;
    __Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr = 0;
    CData/*0:0*/ __Vdlyvdim0__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram__v0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram__v0 = 0;
    CData/*2:0*/ __Vdlyvval__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram__v0;
    __Vdlyvval__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram__v0;
    __Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram__v1;
    __Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram__v1 = 0;
    IData/*31:0*/ __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__timer;
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__timer = 0;
    VlWide<3>/*95:0*/ __Vtemp_h2196e189__0;
    VlWide<3>/*95:0*/ __Vtemp_ha76963d1__0;
    VlWide<7>/*223:0*/ __Vtemp_h513edced__0;
    VlWide<8>/*255:0*/ __Vtemp_hf3c74c74__0;
    // Body
    Vsimu_top___024unit____Vdpiimwrap_v_difftest_CSRRegState_TOP____024unit(0U, (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_crmd_diff_0)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_prmd_diff_0)), 0ULL, (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_ectl_diff_0)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_estat_diff_0)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_era_diff_0)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_badv_diff_0)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_eentry_diff_0)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_tlbidx_diff_0)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_tlbehi_diff_0)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_tlbelo0_diff_0)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_tlbelo1_diff_0)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_asid_diff_0)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_pgdl_diff_0)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_pgdh_diff_0)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_save0_diff_0)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_save1_diff_0)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_save2_diff_0)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_save3_diff_0)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_tid_diff_0)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_tcfg_diff_0)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_tval_diff_0)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_ticlr_diff_0)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_llbctl_diff_0)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_tlbrentry_diff_0)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_dmw0_diff_0)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_dmw1_diff_0)));
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__branchPC_temp_valid 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__branchPC_temp_valid;
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp_valid 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp_valid;
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__count 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__count;
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__state_count 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state_count;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b;
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r1 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r1;
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wstrb_r 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wstrb_r;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t;
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wdata_r 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wdata_r;
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_size_r 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_size_r;
    __Vdly__simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur 
        = vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur;
    __Vdly__simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rcur 
        = vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rcur;
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__count 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__count;
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid;
    __Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr 
        = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr;
    __Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v0 = 0U;
    __Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v1 = 0U;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_pnd 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_pnd;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_pnd 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_pnd;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_pnd 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_pnd;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5r 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5r;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_pnd 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_pnd;
    Vsimu_top___024unit____Vdpiimwrap_v_difftest_GRegState_TOP____024unit(0U, 0ULL, (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                                                [1U])), (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                                                [2U])), (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                                                [3U])), (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                                                [4U])), (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                                                [5U])), (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                                                [6U])), (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                                                [7U])), (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                                                [8U])), (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                                                [9U])), (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                                                [0xaU])), (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                                                [0xbU])), (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                                                [0xcU])), (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                                                [0xdU])), (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                                                [0xeU])), (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                                                [0xfU])), (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                                                [0x10U])), (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                                                [0x11U])), (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                                                [0x12U])), (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                                                [0x13U])), (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                                                [0x14U])), (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                                                [0x15U])), (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                                                [0x16U])), (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                                                [0x17U])), (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                                                [0x18U])), (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                                                [0x19U])), (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                                                [0x1aU])), (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                                                [0x1bU])), (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                                                [0x1cU])), (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                                                [0x1dU])), (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                                                [0x1eU])), (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                                                                [0x1fU])));
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__step1_count 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step1_count;
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__step0_count 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step0_count;
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr7 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr7;
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr5 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr5;
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr4 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr4;
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr3 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr3;
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr2 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr2;
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr1 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr1;
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr6 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr6;
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr0 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr0;
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__key_count 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__key_count;
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__timer 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__timer;
    __Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog 
        = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_pnd 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_pnd;
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r;
    __Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram__v0 = 0U;
    __Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram__v1 = 0U;
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_xor 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_xor;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate;
    __Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0U;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count;
    __Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 0U;
    __Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 0U;
    __Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17 = 0U;
    __Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 = 0U;
    __Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v19 = 0U;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf__v0 = 0U;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ERASE_SERIAL 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ERASE_SERIAL;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr;
    __Vdly__simu_top__DOT__soc__DOT__apb_s_rvalid = vlSelf->simu_top__DOT__soc__DOT__apb_s_rvalid;
    __Vdly__simu_top__DOT__soc__DOT__apb_s_bvalid = vlSelf->simu_top__DOT__soc__DOT__apb_s_bvalid;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count;
    Vsimu_top___024unit____Vdpiimwrap_v_difftest_TrapEvent_TOP____024unit(0U, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__trap), 
                                                                          (7U 
                                                                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__trap_code)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_pc)), vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cycleCnt, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instrCnt);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_out 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_out;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__shift_out 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__shift_out;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count;
    Vsimu_top___024unit____Vdpiimwrap_v_difftest_LoadEvent_TOP____024unit(0U, 0U, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_inst_ld_en), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_ld_paddr)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_ld_vaddr)));
    __Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0U;
    Vsimu_top___024unit____Vdpiimwrap_v_difftest_StoreEvent_TOP____024unit(0U, 0U, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_inst_st_en), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_st_paddr)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_st_vaddr)), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_st_data)));
    Vsimu_top___024unit____Vdpiimwrap_v_difftest_ExcpEvent_TOP____024unit(0U, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_excp_flush), vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_ertn, 
                                                                          (0x7ffU 
                                                                           & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_estat_diff_0 
                                                                              >> 2U)), (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_csr_ecode), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_pc)), vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_inst);
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_valid) {
        Vsimu_top___024unit____Vdpiimwrap_v_difftest_InstrCommit_TOP____024unit(0U, 0U, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_valid), (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_pc)), vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_inst, 0U, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_tlbfill_en), vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_rand_index, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_cnt_inst), vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_timer_64, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_wen), vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_wdest, (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_wdata)), vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_csr_rstat_en, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_csr_data);
    }
    if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_PC_BRANCH) 
          & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_ready_go)) 
             | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_allow_in)))) 
         & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_flush)))) {
        __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__branchPC_temp_valid = 1U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__branchPC_temp 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__branchPC;
    } else if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__branchPC_temp_valid) 
                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_allow_in)) 
                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_ready_go))) {
        __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__branchPC_temp_valid = 0U;
    }
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__state_count 
        = ((1U & ((~ (IData)(vlSelf->aresetn)) | ((IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state_count) 
                                                  >> 3U)))
            ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state_count))));
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r1 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r2;
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__req_mem) 
         & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req)))) {
        __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wstrb_r 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem;
        __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wdata_r 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_ex_true;
        __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_size_r 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__size_mem_ex;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wr_r 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memWriteEn_ex;
        __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex;
    } else {
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__req_inst) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_ok_inst))) {
            __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wstrb_r 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_inst;
            __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wdata_r 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wdata_inst;
            __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_size_r = 2U;
            __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC;
        } else {
            __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wstrb_r 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wstrb_r;
            __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wdata_r 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wdata_r;
            __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_size_r 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_size_r;
            __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r;
        }
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wr_r 
            = ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__req_inst) 
                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_ok_inst))) 
               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wr_r));
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop)))) {
        __Vdly__simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur = 0U;
    } else if (vlSelf->ram_ren) {
        __Vdly__simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur)));
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop)))) {
        __Vdly__simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rcur = 0U;
    } else if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en) {
        __Vdly__simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rcur 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rcur)));
    }
    if (((IData)(vlSelf->aresetn) & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divEn))) {
        __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__count 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__count)));
        if ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__count))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__minuend = 0ULL;
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_u = 0U;
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__dividend_reg 
                = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divUnsigned)
                    ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex
                    : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                        >> 0x1fU) ? (- vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)
                        : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex));
        } else {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__minuend 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__minuend_next;
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_u 
                = (((~ ((IData)(1U) << (0x1fU & (- (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__count))))) 
                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_u) 
                   | (0xffffffffULL & ((1U & (~ (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__difference 
                                                         >> 0x20U)))) 
                                       << (0x1fU & 
                                           (- (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__count))))));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__dividend_reg 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__dividend_next;
        }
        if ((0x20U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__count))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__remainder_u 
                = (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__minuend_next);
        }
    } else {
        __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__count = 0U;
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__wdata_rcv 
        = ((IData)(vlSelf->aresetn) & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_wvalid) 
                                        & ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wready) 
                                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h4bbe5f71__0))) 
                                       | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__data_back)) 
                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__wdata_rcv))));
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_pnd 
        = ((IData)(vlSelf->aresetn) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fifo_read)
                                        ? 0U : (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_d)) 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int))
                                                 ? 1U
                                                 : 
                                                ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_pnd) 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier)))));
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_pnd 
        = ((IData)(vlSelf->aresetn) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr_read)
                                        ? 0U : (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_d)) 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int))
                                                 ? 1U
                                                 : 
                                                ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_pnd) 
                                                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier) 
                                                    >> 3U)))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6r 
        = (1U & ((~ (IData)(vlSelf->aresetn)) | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_push)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6r) 
                                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6) 
                                                     & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6_d)))))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7r 
        = ((IData)(vlSelf->aresetn) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask)
                                        ? 0U : ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7r) 
                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7) 
                                                   & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7_d))))));
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_pnd 
        = ((IData)(vlSelf->aresetn) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask)
                                        ? 0U : (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_d)) 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int))
                                                 ? 1U
                                                 : 
                                                ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_pnd) 
                                                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier) 
                                                    >> 2U)))));
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5r 
        = (1U & ((~ (IData)(vlSelf->aresetn)) | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_push)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5r) 
                                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5) 
                                                     & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5_d)))))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr4r 
        = ((IData)(vlSelf->aresetn) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask)
                                        ? 0U : (1U 
                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr4r) 
                                                   | (((IData)(vlSelf->__VdfgTmp_hcd04e225__0) 
                                                       >> 2U) 
                                                      & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr4_d)))))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr3r 
        = ((IData)(vlSelf->aresetn) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask)
                                        ? 0U : (1U 
                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr3r) 
                                                   | ((IData)(vlSelf->__VdfgTmp_hcd04e225__0) 
                                                      & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr3_d)))))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr2r 
        = ((IData)(vlSelf->aresetn) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask)
                                        ? 0U : (1U 
                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr2r) 
                                                   | (((IData)(vlSelf->__VdfgTmp_hcd04e225__0) 
                                                       >> 1U) 
                                                      & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr2_d)))))));
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_pnd 
        = ((IData)(vlSelf->aresetn) & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count) 
                                         == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__trigger_level)) 
                                        & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__d1_fifo_read))
                                        ? 0U : (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_d)) 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int))
                                                 ? 1U
                                                 : 
                                                ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_pnd) 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier)))));
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__step1_count 
        = ((1U & ((~ (IData)(vlSelf->aresetn)) | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step1_flag))))
            ? 0U : (0xfffffU & ((IData)(1U) + vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step1_count)));
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__step0_count 
        = ((1U & ((~ (IData)(vlSelf->aresetn)) | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step0_flag))))
            ? 0U : (0xfffffU & ((IData)(1U) + vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step0_count)));
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__key_count 
        = ((1U & ((~ (IData)(vlSelf->aresetn)) | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__key_flag))))
            ? 0U : (0xfffffU & ((IData)(1U) + vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__key_count)));
    if (vlSelf->aresetn) {
        __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__count 
            = (0xfffffU & ((IData)(1U) + vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__count));
        if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset) {
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset = 0U;
        } else if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr_read) {
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset = 1U;
        }
        if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_in) {
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b 
                = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value) 
                            >> 2U));
        } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____Vcellinp__receiver__enable) 
                    & (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b)))) {
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b 
                = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b) 
                            - (IData)(1U)));
        }
        if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_push_pulse) 
              | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop)) 
             | (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count)))) {
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t 
                = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value;
        } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____Vcellinp__receiver__enable) 
                    & (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t)))) {
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t 
                = (0x3ffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t) 
                             - (IData)(1U)));
        }
        if (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_dir_ins))) {
            __Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr)));
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_dir_ins) 
             & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)))) {
            __Vdlyvval__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v0 
                = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir;
            __Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v0 = 1U;
            __Vdlyvdim0__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v0 
                = (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr));
        }
        if (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_dir_ins))) {
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr)));
        }
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr 
            = ((0xf0U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr)) 
               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset)
                   ? 0U : (0xfU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr) 
                                   | ((0xbU | (4U & 
                                               ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI)) 
                                                << 2U))) 
                                      ^ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__delayed_modem_signals))))));
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr 
            = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr)) 
               | ((0x80U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____VdfgTmp_h84138141__0) 
                            << 7U)) | ((0x40U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____VdfgTmp_h84138141__0) 
                                                 << 5U)) 
                                       | ((0x20U & 
                                           ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____VdfgTmp_h84138141__0) 
                                            << 3U)) 
                                          | (0x10U 
                                             & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____VdfgTmp_h84138141__0) 
                                                << 1U))))));
        if (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty)) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_dir_del))) {
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr)));
        }
        __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr7 
            = (((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                & (0x8070U == (0xffffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))
                ? vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata
                : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr7);
        __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr5 
            = (((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                & (0x8050U == (0xffffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))
                ? vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata
                : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr5);
        __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr4 
            = (((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                & (0x8040U == (0xffffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))
                ? vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata
                : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr4);
        __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr3 
            = (((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                & (0x8030U == (0xffffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))
                ? vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata
                : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr3);
        __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr2 
            = (((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                & (0x8020U == (0xffffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))
                ? vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata
                : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr2);
        __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr1 
            = (((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                & (0x8010U == (0xffffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))
                ? vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata
                : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr1);
        __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr6 
            = (((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                & (0x8060U == (0xffffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))
                ? vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata
                : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr6);
        __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr0 
            = (((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                & (0x8000U == (0xffffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))
                ? vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata
                : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr0);
        __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__timer 
            = (((IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r2) 
                & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r3)))
                ? vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r2
                : ((IData)(1U) + vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__timer));
    } else {
        __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__count = 0U;
        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset = 1U;
        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b = 0x9fU;
        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t = 0x27fU;
        __Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr = 0U;
        __Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v1 = 1U;
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr = 0U;
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr = 0U;
        __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr7 = 0U;
        __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr5 = 0U;
        __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr4 = 0U;
        __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr3 = 0U;
        __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr2 = 0U;
        __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr1 = 0U;
        __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr6 = 0U;
        __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr0 = 0U;
        __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__timer = 0U;
    }
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r3 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r2;
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_bvalid) 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h765eb7cb__0))))) {
        __Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog = 0U;
    } else if (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog)) 
                & (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid)))) {
        __Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog = 1U;
    }
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_pnd 
        = ((IData)(vlSelf->aresetn) & (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_push) 
                                        | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir_read) 
                                           & (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir))))
                                        ? 0U : (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_d)) 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int))
                                                 ? 1U
                                                 : 
                                                ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_pnd) 
                                                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier) 
                                                    >> 1U)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__addr_rcv 
        = ((IData)(vlSelf->aresetn) & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_arvalid) 
                                        & ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arready) 
                                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h34d16b8e__0))) 
                                       | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_awvalid) 
                                           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awready) 
                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_hb251d2f0__0))) 
                                          | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__data_back)) 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__addr_rcv)))));
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req 
        = ((IData)(vlSelf->aresetn) & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__req_inst) 
                                         | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__req_mem)) 
                                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req))) 
                                       | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__data_back)) 
                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req_or 
        = ((IData)(vlSelf->aresetn) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req)
                                        ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req_or)
                                        : (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__req_mem)));
    if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_push_pulse) {
        __Vdlyvval__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 
            = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_data_in) 
                        >> 3U));
        __Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 1U;
        __Vdlyvdim0__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 
            = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top;
    }
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0r 
        = ((IData)(vlSelf->aresetn) & (((((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count)) 
                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop)) 
                                         & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_push_pulse))) 
                                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_reset))
                                        ? 0U : ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0r) 
                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0) 
                                                   & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0_d))))));
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant 
        = ((IData)(vlSelf->aresetn) & ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_cpu) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_dma)))) 
                                       & (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_dma) 
                                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_cpu))) 
                                          | ((~ (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_cpu) 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_dma)) 
                                                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)))) 
                                             & (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_cpu) 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_dma)) 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant))))));
    if (vlSelf->debug0_wb_rf_wen) {
        if ((0U != (IData)(vlSelf->debug0_wb_rf_wnum))) {
            __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf__v0 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb;
            __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf__v0 = 1U;
            __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf__v0 
                = vlSelf->debug0_wb_rf_wnum;
        }
    }
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr1r 
        = ((IData)(vlSelf->aresetn) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask)
                                        ? 0U : ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr1r) 
                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_overrun) 
                                                   & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr1_d))))));
    if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_push) {
        __Vdlyvval__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 
            = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_datai;
        __Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 1U;
        __Vdlyvdim0__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 
            = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top;
    }
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__data8_out 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
        [vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom];
    if (vlSelf->ram_ren) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rlast 
            = vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen_last;
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rid 
            = vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arid;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rlast 
            = vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen_last;
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rid 
            = vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arid;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_push) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst = 0U;
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arsize 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_size_r;
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen = 0U;
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r;
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arid = 0U;
    } else if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst 
            = (3U & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                             >> 0xbU)));
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arsize 
            = (7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                             >> 8U)));
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen 
            = (0xfU & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                               >> 4U)));
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr 
            = (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                       >> 0xdU));
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arid 
            = (0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas));
    } else if (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen_last)) 
                & (IData)(vlSelf->ram_ren))) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr 
            = vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_next;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_go) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wdata 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wdata_r;
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wstrb 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wstrb_r;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_push) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awlen = 0U;
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst = 0U;
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awsize 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_size_r;
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r;
    } else if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awlen 
            = (0xfU & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                               >> 4U)));
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst 
            = (3U & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                             >> 0xbU)));
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awsize 
            = (7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                             >> 8U)));
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr 
            = (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                       >> 0xdU));
    } else if (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wlast)) 
                & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en))) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr 
            = vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_next;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_go) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wlast = 1U;
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NANDtag))))) {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ACK = 0U;
        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half = 0U;
        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob = 0U;
        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x55U;
        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count = 0U;
        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR = 0ULL;
        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
        if ((1U & (~ (IData)(vlSelf->aresetn)))) {
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status = 0U;
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM = 0ULL;
        }
        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM = 0x14U;
        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM = 4U;
        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0U;
        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer = 0U;
        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ERASE_SERIAL = 0U;
        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM = 0U;
        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT = 0U;
        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT = 0U;
        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT = 0U;
        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_I_WR = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD = 0x12345678U;
        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM = 4U;
        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
    } else if ((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
        if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
            if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
            } else if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                    if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY) {
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x1bU;
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                    } else {
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x1bU;
                    }
                } else if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY) {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x1aU;
                } else {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x1bU;
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x1aU;
                }
            } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
            } else if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY) {
                if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY) 
                      & (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE))) 
                     & (0x60U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x17U;
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x18U;
                } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY) 
                            & (0xd0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                        = (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                           - (IData)(1U));
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 1U;
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x18U;
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x70U;
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                } else if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY) 
                             & (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE))) 
                            & (0x70U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x15U;
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x18U;
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & ((IData)(3U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)));
                } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY) 
                            & (0x15U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)))) {
                    if ((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status)) 
                               & ((0U == vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM) 
                                  | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ERASE_SERIAL)))))) {
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR = 0ULL;
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ERASE_SERIAL = 0U;
                    } else if (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status)) 
                                & (0U != vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))) {
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                            = ((0x800U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                                ? ((0x3ff0003fffULL 
                                    & __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                                   | ((QData)((IData)(
                                                      (0x3fffU 
                                                       & ((IData)(1U) 
                                                          + (IData)(
                                                                    (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                     >> 0xeU)))))) 
                                      << 0xeU)) : (
                                                   (((1U 
                                                      == 
                                                      (0xfU 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                          >> 8U))) 
                                                     | (2U 
                                                        == 
                                                        (0xfU 
                                                         & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                            >> 8U)))) 
                                                    | (3U 
                                                       == 
                                                       (0xfU 
                                                        & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                           >> 8U))))
                                                    ? 
                                                   ((0x30003fffffULL 
                                                     & __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                                                    | ((QData)((IData)(
                                                                       (0x3fffU 
                                                                        & ((IData)(1U) 
                                                                           + (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                                >> 0x16U)))))) 
                                                       << 0x16U))
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0xfU 
                                                      & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                         >> 8U)))
                                                     ? 
                                                    ((0x3c003fffffULL 
                                                      & __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                                                     | ((QData)((IData)(
                                                                        (0xfffU 
                                                                         & ((IData)(1U) 
                                                                            + (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                                >> 0x16U)))))) 
                                                        << 0x16U))
                                                     : 
                                                    ((5U 
                                                      == 
                                                      (0xfU 
                                                       & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                          >> 8U)))
                                                      ? 
                                                     ((0x3c00ffffffULL 
                                                       & __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                                                      | ((QData)((IData)(
                                                                         (0x3ffU 
                                                                          & ((IData)(1U) 
                                                                             + (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                                >> 0x18U)))))) 
                                                         << 0x18U))
                                                      : 
                                                     ((0x3001ffffffULL 
                                                       & __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                                                      | ((QData)((IData)(
                                                                         (0x7ffU 
                                                                          & ((IData)(1U) 
                                                                             + (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                                >> 0x19U)))))) 
                                                         << 0x19U))))));
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 1U;
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x18U;
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x60U;
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                            = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                    } else {
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x19U;
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
                    }
                } else {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
                }
            } else {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x18U;
            }
        } else if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
            if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                    if (((0xaU != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)) 
                         & (0x60U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0xaU;
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x17U;
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                            = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT 
                            = (((((9U == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 8U))) 
                                  | (0xaU == (0xfU 
                                              & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                 >> 8U)))) 
                                 | (0xbU == (0xfU & 
                                             (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                              >> 8U)))) 
                                | (0U == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 8U))))
                                ? 2U : 3U);
                    } else if (((1U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)) 
                                & (0x60U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 1U;
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x17U;
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0xd0U;
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                            = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                    } else if (((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)) 
                                & (0xd0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE 
                            = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY)
                                ? 0x17U : 0x18U);
                    }
                } else if ((0x15U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE))) {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x15U;
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x16U;
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & ((IData)(3U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)));
                } else {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
                }
            } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                     >= (0xffU & ((IData)(1U) + ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing) 
                                                 - (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM)))))) {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                    - (IData)(1U)));
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x15U;
                } else if (((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM)) 
                            & (1U < (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM)))) {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                    - (IData)(1U)));
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x15U;
                } else if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM))) {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                    - (IData)(1U)));
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x15U;
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status = 0U;
                } else if ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM))) {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE 
                        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE;
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                    if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE))) {
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
                    }
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x15U;
                } else {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                    - (IData)(1U)));
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x15U;
                }
            } else if (((0xaU != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)) 
                        & (0x90U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0xaU;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x14U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)));
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM 
                    = (7U & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                             >> 0xcU));
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT = 1U;
            } else if ((0x70U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) {
                if ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM))) {
                    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                         > (0xffU & (((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)) 
                                     - (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM))))) {
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                            = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                        - (IData)(1U)));
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x14U;
                    } else if ((1U < (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM))) {
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                            = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                        - (IData)(1U)));
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x14U;
                    } else if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM))) {
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM 
                            = (7U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM) 
                                     - (IData)(1U)));
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x14U;
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                            = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                        if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM))) {
                            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM 
                                = (0xffffffffff00ULL 
                                   & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM);
                        } else if ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM))) {
                            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM 
                                = (0xffffffff00ffULL 
                                   & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM);
                        } else if ((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM))) {
                            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM 
                                = (0xffffff00ffffULL 
                                   & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM);
                        } else if ((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM))) {
                            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM 
                                = (0xffff00ffffffULL 
                                   & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM);
                        } else if ((5U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM))) {
                            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM 
                                = (0xff00ffffffffULL 
                                   & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM);
                        } else if ((6U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM))) {
                            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM 
                                = (0xffffffffffULL 
                                   & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM);
                        }
                    }
                } else {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 1U;
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x14U;
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x70U;
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                }
            } else {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x16U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x14U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x70U;
            }
        } else if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
            } else if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY) {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x12U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x11U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE = 0U;
            } else {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x12U;
            }
        } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
            if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count) 
                 != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT))) {
                if ((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE)) 
                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT))))) {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 1U;
                } else if ((((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE) 
                               & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT))) 
                              & (3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer))) 
                             & (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM))) 
                            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count) 
                               < (0x3fffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT) 
                                             - (IData)(4U)))))) {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 1U;
                } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ) 
                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT))) {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer = 0U;
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE = 1U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_I_WR 
                        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_datai;
                }
                if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                      > (0xffU & ((IData)(1U) + ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing) 
                                                 - (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM))))) 
                     & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT)))) {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                    - (IData)(1U)));
                } else if (((1U < (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM)) 
                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE))) {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                    - (IData)(1U)));
                } else if (((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM)) 
                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE))) {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer 
                        = (3U & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer)));
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                    if ((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer))) {
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                            = ((4U <= vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                   - (IData)(4U)) : 0U);
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count 
                            = (0x3fffU & ((4U == vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                           ? (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT)
                                           : ((IData)(4U) 
                                              + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count))));
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE = 0U;
                    }
                }
            } else if (((1U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)) 
                        & (0x80U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 1U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x11U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x10U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE = 0U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
            } else if (((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)) 
                        & (0x10U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE 
                    = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY)
                        ? 0x11U : 0x12U);
            } else if (((0x12U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)) 
                        & (0x10U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 1U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x11U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x70U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
            } else if (((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)) 
                        & (0x70U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x15U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x11U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & ((IData)(3U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)));
            } else if ((0x15U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE))) {
                if (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status)) 
                     & (0U == vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))) {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
                } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status))) {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x13U;
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
                } else {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
                }
            } else {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
            }
        } else if (((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)) 
                    & (0x80U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x10U;
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 1U;
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x80U;
        } else if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE))) {
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x10U;
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 2U;
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT 
                = ((((9U == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                     >> 8U))) | (0xaU 
                                                 == 
                                                 (0xfU 
                                                  & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                     >> 8U)))) 
                    | (0xbU == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                        >> 8U)))) ? 3U
                    : ((((0U == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                         >> 8U))) | 
                         (0xcU == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                           >> 8U)))) 
                        | (0xdU == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                            >> 8U))))
                        ? 4U : 5U));
        } else if ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE))) {
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer = 0U;
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count = 0U;
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x11U;
            if ((0x800U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                if ((0x400U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                    if ((1U & (~ (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                  >> 9U)))) {
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                            = (0x3fffffff00ULL & __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR);
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                            = ((0x3f800000ffULL & __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                               | ((QData)((IData)((0x7fffffU 
                                                   & ((IData)(
                                                              (0x200U 
                                                               == 
                                                               (0x300U 
                                                                & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)))
                                                       ? 
                                                      ((IData)(2U) 
                                                       + (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                  >> 8U)))
                                                       : 
                                                      ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half)
                                                        ? (IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                   >> 8U))
                                                        : 
                                                       ((IData)(1U) 
                                                        + (IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                   >> 8U)))))))) 
                                  << 8U));
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT 
                            = (0x3fffU & ((IData)((
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)) 
                                                   & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob))))
                                           ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((IData)(0x100U) 
                                                  - 
                                                  (0xffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((IData)(0x100U) 
                                                  - 
                                                  (0xffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                           : ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob)
                                               ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                   > 
                                                   ((IData)(0x10U) 
                                                    - 
                                                    (0xfU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                   ? 
                                                  ((IData)(0x10U) 
                                                   - 
                                                   (0xfU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                   : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                               : ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                   > 
                                                   ((IData)(0x100U) 
                                                    - 
                                                    (0xffU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                   ? 
                                                  ((IData)(0x100U) 
                                                   - 
                                                   (0xffU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                   : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                    }
                } else if ((0x200U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                        = (0x3fffffff00ULL & __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR);
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                        = ((0x3f800000ffULL & __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                           | ((QData)((IData)((0x7fffffU 
                                               & ((IData)(
                                                          (0x200U 
                                                           == 
                                                           (0x300U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)))
                                                   ? 
                                                  ((IData)(2U) 
                                                   + (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                              >> 8U)))
                                                   : 
                                                  ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half)
                                                    ? (IData)(
                                                              (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                               >> 8U))
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(
                                                              (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                               >> 8U)))))))) 
                              << 8U));
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT 
                        = (0x3fffU & ((IData)(((0x300U 
                                                == 
                                                (0x300U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)) 
                                               & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob))))
                                       ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                           > ((IData)(0x100U) 
                                              - (0xffU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                           ? ((IData)(0x100U) 
                                              - (0xffU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                           : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                       : ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob)
                                           ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((IData)(0x10U) 
                                                  - 
                                                  (0xfU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((IData)(0x10U) 
                                                  - 
                                                  (0xfU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                           : ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((IData)(0x100U) 
                                                  - 
                                                  (0xffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((IData)(0x100U) 
                                                  - 
                                                  (0xffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                } else if ((0x100U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                        = (0x3fffffff00ULL & __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR);
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                        = ((0x3f800000ffULL & __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                           | ((QData)((IData)((0x7fffffU 
                                               & ((IData)(
                                                          (0x200U 
                                                           == 
                                                           (0x300U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)))
                                                   ? 
                                                  ((IData)(2U) 
                                                   + (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                              >> 8U)))
                                                   : 
                                                  ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half)
                                                    ? (IData)(
                                                              (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                               >> 8U))
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(
                                                              (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                               >> 8U)))))))) 
                              << 8U));
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT 
                        = (0x3fffU & ((IData)(((0x300U 
                                                == 
                                                (0x300U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)) 
                                               & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob))))
                                       ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                           > ((IData)(0x100U) 
                                              - (0xffU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                           ? ((IData)(0x100U) 
                                              - (0xffU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                           : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                       : ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob)
                                           ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((IData)(0x10U) 
                                                  - 
                                                  (0xfU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((IData)(0x10U) 
                                                  - 
                                                  (0xfU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                           : ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((IData)(0x100U) 
                                                  - 
                                                  (0xffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((IData)(0x100U) 
                                                  - 
                                                  (0xffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                }
            } else if ((0x400U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                if ((0x200U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                        = ((0x3fffffc000ULL & __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                           | (IData)((IData)(((IData)(
                                                      (0x200U 
                                                       == 
                                                       (0x300U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command))) 
                                              << 0xdU))));
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                        = ((0x300000ffffULL & __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                           | ((QData)((IData)((0xfffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                             >> 0x10U)))))) 
                              << 0x10U));
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT 
                        = (0x3fffU & ((IData)((0x300U 
                                               == (0x300U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)))
                                       ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                           > ((0x3fffU 
                                               & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 0x10U)) 
                                              - (0x3fffU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                           ? ((0x3fffU 
                                               & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 0x10U)) 
                                              - (0x3fffU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                           : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                       : ((0x200U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)
                                           ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0xffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0xffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                           : ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x1fffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x1fffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                } else if ((0x100U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                        = ((0x3fffffc000ULL & __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                           | (IData)((IData)(((IData)(
                                                      (0x200U 
                                                       == 
                                                       (0x300U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command))) 
                                              << 0xdU))));
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                        = ((0x300000ffffULL & __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                           | ((QData)((IData)((0xfffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                             >> 0x10U)))))) 
                              << 0x10U));
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT 
                        = (0x3fffU & ((IData)((0x300U 
                                               == (0x300U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)))
                                       ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                           > ((0x3fffU 
                                               & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 0x10U)) 
                                              - (0x3fffU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                           ? ((0x3fffU 
                                               & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 0x10U)) 
                                              - (0x3fffU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                           : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                       : ((0x200U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)
                                           ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0xffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0xffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                           : ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x1fffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x1fffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                } else {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                        = ((0x3fffffe000ULL & __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                           | (IData)((IData)(((IData)(
                                                      (0x200U 
                                                       == 
                                                       (0x300U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command))) 
                                              << 0xcU))));
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                        = ((0x300000ffffULL & __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                           | ((QData)((IData)((0xfffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                             >> 0x10U)))))) 
                              << 0x10U));
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT 
                        = (0x3fffU & ((IData)((0x300U 
                                               == (0x300U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)))
                                       ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                           > ((0x3fffU 
                                               & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 0x10U)) 
                                              - (0x1fffU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                           ? ((0x3fffU 
                                               & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 0x10U)) 
                                              - (0x1fffU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                           : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                       : ((0x200U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)
                                           ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x7fU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x7fU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                           : ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0xfffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0xfffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                }
            } else {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                    = ((0x3ffffff000ULL & __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                       | (IData)((IData)(((IData)((0x200U 
                                                   == 
                                                   (0x300U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command))) 
                                          << 0xbU))));
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                    = ((0x300000ffffULL & __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                       | ((QData)((IData)((0xfffffU 
                                           & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                         >> 0x10U)))))) 
                          << 0x10U));
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT 
                    = (0x3fffU & ((IData)((0x300U == 
                                           (0x300U 
                                            & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)))
                                   ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                       > ((0x3fffU 
                                           & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                              >> 0x10U)) 
                                          - (0xfffU 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                       ? ((0x3fffU 
                                           & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                              >> 0x10U)) 
                                          - (0xfffU 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                       : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                   : ((0x200U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)
                                       ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                           > ((0x3fffU 
                                               & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 0x10U)) 
                                              - (0x3fU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                           ? ((0x3fffU 
                                               & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 0x10U)) 
                                              - (0x3fU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                           : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                       : ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                           > ((0x3fffU 
                                               & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 0x10U)) 
                                              - (0x7ffU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                           ? ((0x3fffU 
                                               & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 0x10U)) 
                                              - (0x7ffU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                           : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
            }
        }
    } else if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
        if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
        } else if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
            } else if ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT))) {
                if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                     > (0xffU & ((IData)(1U) + ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing) 
                                                - (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM)))))) {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                    - (IData)(1U)));
                } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                            > (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing) 
                                        - (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM))))) {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                    - (IData)(1U)));
                } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                            >= (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM))) {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                    - (IData)(1U)));
                } else if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                             < (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM)) 
                            & (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM)))) {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                    - (IData)(1U)));
                } else {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT 
                        = (7U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT) 
                                 - (IData)(1U)));
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & ((IData)(2U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)));
                }
            } else {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE 
                    = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)));
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0xaU;
            }
        } else {
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
        }
    } else if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
        if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY) {
                    if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count) 
                          != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT)) 
                         & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_)))) {
                        if ((1U & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE)) 
                                    | ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE) 
                                         & (3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer))) 
                                        & (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM))) 
                                       & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count) 
                                          < (0x3fffU 
                                             & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT) 
                                                - (IData)(4U)))))) 
                                   & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT))))) {
                            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 1U;
                        } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT) 
                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ))) {
                            if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count) 
                                 == (0x3fffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT) 
                                                - (IData)(1U))))) {
                                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count 
                                    = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT;
                            }
                            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
                            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE = 1U;
                        }
                        if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                              > (0xffU & ((IData)(1U) 
                                          + ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing) 
                                             - (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM))))) 
                             & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE) 
                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT)))) {
                            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                            - (IData)(1U)));
                        } else if (((1U < (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM)) 
                                    & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE) 
                                       & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ))))) {
                            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                            - (IData)(1U)));
                        } else if (((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM)) 
                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE))) {
                            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer 
                                = (3U & ((IData)(1U) 
                                         + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer)));
                            if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count) 
                                 != (0x3fffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT) 
                                                - (IData)(1U))))) {
                                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count 
                                    = (0x3fffU & ((IData)(1U) 
                                                  + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count)));
                            }
                            if ((0U != vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)) {
                                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                    = (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                       - (IData)(1U));
                            }
                            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                            if ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer))) {
                                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD 
                                    = (0xffffff00U 
                                       & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD);
                            } else if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer))) {
                                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD 
                                    = (0xffff00ffU 
                                       & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD);
                            } else if ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer))) {
                                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD 
                                    = (0xff00ffffU 
                                       & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD);
                            } else if ((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer))) {
                                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD 
                                    = (0xffffffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD);
                                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE = 0U;
                            }
                        }
                    } else {
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count = 0U;
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                            = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                        if ((0U == vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)) {
                            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
                            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
                        } else {
                            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 1U;
                            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
                            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                        }
                    }
                } else if ((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE)) 
                                  & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT))))) {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 1U;
                } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ) 
                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT))) {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE = 1U;
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer = 0U;
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                        = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                }
            } else {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count = 0U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer = 0U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE = 1U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 7U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                if ((0x800U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                    if ((0x400U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                        if ((1U & (~ (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                      >> 9U)))) {
                            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                = (0x3fffffff00ULL 
                                   & __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR);
                            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                = ((0x3f800000ffULL 
                                    & __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                                   | ((QData)((IData)(
                                                      (0x7fffffU 
                                                       & ((IData)(
                                                                  (0x200U 
                                                                   == 
                                                                   (0x300U 
                                                                    & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)))
                                                           ? 
                                                          ((IData)(2U) 
                                                           + (IData)(
                                                                     (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                      >> 8U)))
                                                           : 
                                                          ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half)
                                                            ? (IData)(
                                                                      (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                       >> 8U))
                                                            : 
                                                           ((IData)(1U) 
                                                            + (IData)(
                                                                      (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                       >> 8U)))))))) 
                                      << 8U));
                            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT 
                                = (0x3fffU & ((IData)(
                                                      ((0x300U 
                                                        == 
                                                        (0x300U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)) 
                                                       & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob))))
                                               ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                   > 
                                                   ((IData)(0x100U) 
                                                    - 
                                                    (0xffU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                   ? 
                                                  ((IData)(0x100U) 
                                                   - 
                                                   (0xffU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                   : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                               : ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob)
                                                   ? 
                                                  ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                    > 
                                                    ((IData)(0x10U) 
                                                     - 
                                                     (0xfU 
                                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                    ? 
                                                   ((IData)(0x10U) 
                                                    - 
                                                    (0xfU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                    : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                                   : 
                                                  ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                    > 
                                                    ((IData)(0x100U) 
                                                     - 
                                                     (0xffU 
                                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                    ? 
                                                   ((IData)(0x100U) 
                                                    - 
                                                    (0xffU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                    : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                        }
                    } else if ((0x200U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                            = (0x3fffffff00ULL & __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR);
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                            = ((0x3f800000ffULL & __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                               | ((QData)((IData)((0x7fffffU 
                                                   & ((IData)(
                                                              (0x200U 
                                                               == 
                                                               (0x300U 
                                                                & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)))
                                                       ? 
                                                      ((IData)(2U) 
                                                       + (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                  >> 8U)))
                                                       : 
                                                      ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half)
                                                        ? (IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                   >> 8U))
                                                        : 
                                                       ((IData)(1U) 
                                                        + (IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                   >> 8U)))))))) 
                                  << 8U));
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT 
                            = (0x3fffU & ((IData)((
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)) 
                                                   & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob))))
                                           ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((IData)(0x100U) 
                                                  - 
                                                  (0xffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((IData)(0x100U) 
                                                  - 
                                                  (0xffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                           : ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob)
                                               ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                   > 
                                                   ((IData)(0x10U) 
                                                    - 
                                                    (0xfU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                   ? 
                                                  ((IData)(0x10U) 
                                                   - 
                                                   (0xfU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                   : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                               : ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                   > 
                                                   ((IData)(0x100U) 
                                                    - 
                                                    (0xffU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                   ? 
                                                  ((IData)(0x100U) 
                                                   - 
                                                   (0xffU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                   : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                    } else if ((0x100U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                            = (0x3fffffff00ULL & __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR);
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                            = ((0x3f800000ffULL & __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                               | ((QData)((IData)((0x7fffffU 
                                                   & ((IData)(
                                                              (0x200U 
                                                               == 
                                                               (0x300U 
                                                                & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)))
                                                       ? 
                                                      ((IData)(2U) 
                                                       + (IData)(
                                                                 (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                  >> 8U)))
                                                       : 
                                                      ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half)
                                                        ? (IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                   >> 8U))
                                                        : 
                                                       ((IData)(1U) 
                                                        + (IData)(
                                                                  (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                   >> 8U)))))))) 
                                  << 8U));
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT 
                            = (0x3fffU & ((IData)((
                                                   (0x300U 
                                                    == 
                                                    (0x300U 
                                                     & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)) 
                                                   & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob))))
                                           ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((IData)(0x100U) 
                                                  - 
                                                  (0xffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((IData)(0x100U) 
                                                  - 
                                                  (0xffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                           : ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob)
                                               ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                   > 
                                                   ((IData)(0x10U) 
                                                    - 
                                                    (0xfU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                   ? 
                                                  ((IData)(0x10U) 
                                                   - 
                                                   (0xfU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                   : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                               : ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                   > 
                                                   ((IData)(0x100U) 
                                                    - 
                                                    (0xffU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                   ? 
                                                  ((IData)(0x100U) 
                                                   - 
                                                   (0xffU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                   : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                    }
                } else if ((0x400U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                    if ((0x200U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                            = ((0x3fffffc000ULL & __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                               | (IData)((IData)(((IData)(
                                                          (0x200U 
                                                           == 
                                                           (0x300U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command))) 
                                                  << 0xdU))));
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                            = ((0x300000ffffULL & __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                               | ((QData)((IData)((0xfffffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(
                                                                (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                 >> 0x10U)))))) 
                                  << 0x10U));
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT 
                            = (0x3fffU & ((IData)((0x300U 
                                                   == 
                                                   (0x300U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)))
                                           ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x3fffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x3fffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                           : ((0x200U 
                                               & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)
                                               ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                   > 
                                                   ((0x3fffU 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                        >> 0x10U)) 
                                                    - 
                                                    (0xffU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                   ? 
                                                  ((0x3fffU 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                       >> 0x10U)) 
                                                   - 
                                                   (0xffU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                   : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                               : ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                   > 
                                                   ((0x3fffU 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                        >> 0x10U)) 
                                                    - 
                                                    (0x1fffU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                   ? 
                                                  ((0x3fffU 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                       >> 0x10U)) 
                                                   - 
                                                   (0x1fffU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                   : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                    } else if ((0x100U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                            = ((0x3fffffc000ULL & __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                               | (IData)((IData)(((IData)(
                                                          (0x200U 
                                                           == 
                                                           (0x300U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command))) 
                                                  << 0xdU))));
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                            = ((0x300000ffffULL & __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                               | ((QData)((IData)((0xfffffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(
                                                                (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                 >> 0x10U)))))) 
                                  << 0x10U));
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT 
                            = (0x3fffU & ((IData)((0x300U 
                                                   == 
                                                   (0x300U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)))
                                           ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x3fffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x3fffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                           : ((0x200U 
                                               & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)
                                               ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                   > 
                                                   ((0x3fffU 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                        >> 0x10U)) 
                                                    - 
                                                    (0xffU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                   ? 
                                                  ((0x3fffU 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                       >> 0x10U)) 
                                                   - 
                                                   (0xffU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                   : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                               : ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                   > 
                                                   ((0x3fffU 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                        >> 0x10U)) 
                                                    - 
                                                    (0x1fffU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                   ? 
                                                  ((0x3fffU 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                       >> 0x10U)) 
                                                   - 
                                                   (0x1fffU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                   : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                    } else {
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                            = ((0x3fffffe000ULL & __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                               | (IData)((IData)(((IData)(
                                                          (0x200U 
                                                           == 
                                                           (0x300U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command))) 
                                                  << 0xcU))));
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                            = ((0x300000ffffULL & __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                               | ((QData)((IData)((0xfffffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(
                                                                (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                 >> 0x10U)))))) 
                                  << 0x10U));
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT 
                            = (0x3fffU & ((IData)((0x300U 
                                                   == 
                                                   (0x300U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)))
                                           ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x1fffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x1fffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                           : ((0x200U 
                                               & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)
                                               ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                   > 
                                                   ((0x3fffU 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                        >> 0x10U)) 
                                                    - 
                                                    (0x7fU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                   ? 
                                                  ((0x3fffU 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                       >> 0x10U)) 
                                                   - 
                                                   (0x7fU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                   : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                               : ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                   > 
                                                   ((0x3fffU 
                                                     & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                        >> 0x10U)) 
                                                    - 
                                                    (0xfffU 
                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                   ? 
                                                  ((0x3fffU 
                                                    & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                       >> 0x10U)) 
                                                   - 
                                                   (0xfffU 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                   : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                    }
                } else {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                        = ((0x3ffffff000ULL & __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                           | (IData)((IData)(((IData)(
                                                      (0x200U 
                                                       == 
                                                       (0x300U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command))) 
                                              << 0xbU))));
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                        = ((0x300000ffffULL & __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                           | ((QData)((IData)((0xfffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                             >> 0x10U)))))) 
                              << 0x10U));
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT 
                        = (0x3fffU & ((IData)((0x300U 
                                               == (0x300U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)))
                                       ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                           > ((0x3fffU 
                                               & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 0x10U)) 
                                              - (0xfffU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                           ? ((0x3fffU 
                                               & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 0x10U)) 
                                              - (0xfffU 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                           : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                       : ((0x200U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)
                                           ? ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x3fU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x3fU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                           : ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               > ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x7ffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                               ? ((0x3fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0x10U)) 
                                                  - 
                                                  (0x7ffU 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                               : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                }
            }
        } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
        } else {
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE 
                = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY)
                    ? 6U : 4U);
        }
    } else if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
        if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
            if ((((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)) 
                  & (0x30U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) 
                 | ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)) 
                    & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                       >> 0xbU)))) {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE 
                    = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY)
                        ? 3U : 4U);
            } else if (((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)) 
                        & (0x30U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 3U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 1U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x30U;
            } else {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 3U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 2U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT 
                    = ((((9U == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                         >> 8U))) | 
                         (0xaU == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                           >> 8U)))) 
                        | (0xbU == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                            >> 8U))))
                        ? 3U : ((((0U == (0xfU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 8U))) 
                                  | (0xcU == (0xfU 
                                              & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                 >> 8U)))) 
                                 | (0xdU == (0xfU & 
                                             (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                              >> 8U))))
                                 ? 4U : 5U));
            }
        } else if ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT))) {
            if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                 > (0xffU & ((IData)(1U) + ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing) 
                                            - (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM)))))) {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                - (IData)(1U)));
            } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                        > (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing) 
                                    - (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM))))) {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                - (IData)(1U)));
            } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                        >= (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM))) {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                - (IData)(1U)));
            } else if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                         < (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM)) 
                        & (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM)))) {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                - (IData)(1U)));
            } else {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT 
                    = (7U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT) 
                             - (IData)(1U)));
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & ((IData)(2U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)));
            }
        } else {
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE 
                = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE;
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)));
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 2U;
        }
    } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
             == (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)))) {
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                            - (IData)(1U)));
        } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                    == ((0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)) 
                        - (IData)(1U)))) {
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                            - (IData)(1U)));
        } else if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                     < (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing))) 
                    & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                       > (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM)))) {
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                            - (IData)(1U)));
        } else if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                     <= (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM)) 
                    & (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM)))) {
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                            - (IData)(1U)));
        } else if ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE))) {
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 1U;
            if (((IData)((0U != (6U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command))) 
                 & (((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)) 
                     | (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) 
                    | (0x50U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))))) {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE 
                    = ((2U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)
                        ? 3U : 0x10U);
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
            } else if (((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                         >> 2U) & (0x80U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x10U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
            } else if ((0x60U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x17U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 1U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & ((IData)(3U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)));
            } else if ((0x70U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x15U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & ((IData)(3U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)));
            } else if ((0x90U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x14U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & ((IData)(3U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)));
            } else if ((0xffU == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x1aU;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & ((IData)(3U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)));
            } else {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM = 0U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
            }
        } else {
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 1U;
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE 
                = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE;
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 1U;
        }
    } else {
        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM 
            = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing) 
                        >> 8U));
        if ((1U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)) {
            if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_clr_ack) {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
            }
            if ((0U == vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)) {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                    = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__addr_in_die;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                    = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_op_num;
            }
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE = 0U;
            if ((IData)((((((0x202U == (0x202U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)) 
                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO)) 
                           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE))) 
                          & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                             >> 0xbU)) & ((~ (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                              >> 8U)) 
                                          | (((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                               >> 8U) 
                                              & (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                         >> 8U))) 
                                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half)))))) {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x50U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob = 1U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half = 0U;
            } else if ((((((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                            >> 1U) & (IData)((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                              >> 8U))) 
                          & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                             >> 0xbU)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO)) 
                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE)))) {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 1U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob = 0U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half 
                    = (IData)((0x300U == (0x300U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)));
            } else if ((((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                          >> 1U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO)) 
                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE)))) {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob = 0U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half = 0U;
            } else if ((IData)((((((0x204U == (0x204U 
                                               & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)) 
                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO)) 
                                  & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE))) 
                                 & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                    >> 0xbU)) & ((~ 
                                                  (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                   >> 8U)) 
                                                 | (((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                      >> 8U) 
                                                     & (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                >> 8U))) 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half)))))) {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x50U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob = 1U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half = 0U;
            } else if ((((((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                            >> 2U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO)) 
                          & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE))) 
                         & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                            >> 0xbU)) & (IData)((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                 >> 8U)))) {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 1U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob = 0U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half 
                    = (IData)((0x300U == (0x300U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)));
            } else if ((((((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                            >> 2U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO)) 
                          & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE))) 
                         & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                            >> 0xbU)) & (~ (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                    >> 8U))))) {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob = 0U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half = 0U;
            } else if ((((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                          >> 2U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO)) 
                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE)))) {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x80U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
            } else if ((((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                          >> 3U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO)) 
                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE)))) {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x60U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ERASE_SERIAL 
                    = (1U & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                             >> 4U));
            } else if ((((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                          >> 5U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO)) 
                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE)))) {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x90U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
            } else if ((((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                          >> 6U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO)) 
                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE)))) {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0xffU;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
            } else if ((((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                          >> 7U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO)) 
                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE)))) {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x70U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
            } else if ((((((((((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)) 
                               | (0x70U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) 
                              | (0x80U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) 
                             | (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) 
                            | (0x50U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) 
                           | (0x60U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) 
                          | (0x90U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) 
                         | (0xffU == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) 
                        & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE)))) {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 1U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                    = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
            } else {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x55U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO 
                    = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE)) 
                             & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command));
                if ((1U & (~ vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command))) {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
                }
            }
        } else {
            if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_clr_ack) {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
            }
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x55U;
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
            if ((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO)))) {
                if ((1U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)) {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__addr_in_die;
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_op_num;
                } else {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR = 0x3fffffffffULL;
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM = 0U;
                }
            }
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO 
                = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE)) 
                         & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command));
        }
    }
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask_d 
        = ((IData)(vlSelf->aresetn) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask_condition));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_int 
        = ((IData)(vlSelf->aresetn) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE) 
                                       & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                          >> 0xdU)));
    __Vtableidx6 = (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr_read) 
                     << 0xaU) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_pnd) 
                                  << 9U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir_read) 
                                             << 8U) 
                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_push) 
                                                << 7U) 
                                               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_pnd) 
                                                   << 6U) 
                                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fifo_read) 
                                                      << 5U) 
                                                     | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_pnd) 
                                                         << 4U) 
                                                        | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_pnd) 
                                                            << 3U) 
                                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask) 
                                                               << 2U) 
                                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_pnd) 
                                                                  << 1U) 
                                                                 | (1U 
                                                                    & (~ (IData)(vlSelf->aresetn)))))))))))));
    vlSelf->simu_top__DOT__soc__DOT__uart0_int = Vsimu_top__ConstPool__TABLE_h64fffa2f_0
        [__Vtableidx6];
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__srx_pad 
        = (1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__i_uart_sync_flops__DOT__flop_0)));
    __Vtableidx9 = (((IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__scan_data) 
                     << 1U) | (IData)(vlSelf->aresetn));
    vlSelf->num_a_g = Vsimu_top__ConstPool__TABLE_hfafeda1e_0
        [__Vtableidx9];
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) 
         & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid)) 
            | (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop)))) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_data 
            = vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awid;
    } else if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_data 
            = vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_datas;
    }
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) 
         & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid)) 
            | (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop)))) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_data 
            = vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awid;
    } else if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_data 
            = vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_datas;
    }
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push_q 
        = ((IData)(vlSelf->aresetn) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push));
    if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_push) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst = 0U;
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arsize 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_size_r;
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen = 0U;
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arid = 0U;
    } else if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst 
            = (3U & (IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas 
                             >> 0xbU)));
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arsize 
            = (7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas 
                             >> 8U)));
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen 
            = (0xfU & (IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas 
                               >> 4U)));
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arid 
            = (0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas));
    }
    if (vlSelf->aresetn) {
        if (((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_empty)) 
               & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rvalid)) 
              & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rlast)) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h76518f96__0))) {
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr)));
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_dir_ins) 
             & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)))) {
            __Vdlyvval__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram__v0 
                = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir;
            __Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram__v0 = 1U;
            __Vdlyvdim0__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram__v0 
                = (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr));
        }
        if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop) {
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop = 0U;
        } else if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__re) 
                     & (0U == (7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr))) 
                    & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                          >> 7U)))) {
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop = 1U;
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we) 
             & (1U == (7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)))) {
            if ((1U & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                          >> 7U)))) {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier 
                    = (0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_datai));
            }
        } else {
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier 
                = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier;
        }
        if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_reset) {
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top = 0U;
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count = 0U;
            __Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 1U;
        } else if ((2U == (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_push_pulse) 
                            << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop)))) {
            if ((0x10U > (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count))) {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count)));
                __Vdlyvval__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 
                    = (7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_data_in));
                __Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 1U;
                __Vdlyvdim0__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 
                    = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top 
                    = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1;
            }
        } else if ((1U == (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_push_pulse) 
                            << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop)))) {
            if ((0U < (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count))) {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count 
                    = (0x1fU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count) 
                                - (IData)(1U)));
                __Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17 = 1U;
                __Vdlyvdim0__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17 
                    = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom)));
            }
        } else if ((3U == (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_push_pulse) 
                            << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop)))) {
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom)));
            __Vdlyvval__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 
                = (7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_data_in));
            __Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 = 1U;
            __Vdlyvdim0__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 
                = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top;
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top 
                = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1;
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5r) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_push))) {
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt 
                = (0xffU & ((2U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))
                             ? ((IData)(0x16U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value))
                             : (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value)));
        } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__enable) 
                    & (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt)))) {
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt 
                = (0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt) 
                            - (IData)(1U)));
        }
        vlSelf->num_csn = ((0x80000U & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__count)
                            ? ((0x40000U & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__count)
                                ? ((0x20000U & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__count)
                                    ? 0xfeU : 0xfdU)
                                : ((0x20000U & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__count)
                                    ? 0xfbU : 0xf7U))
                            : ((0x40000U & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__count)
                                ? ((0x20000U & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__count)
                                    ? 0xefU : 0xdfU)
                                : ((0x20000U & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__count)
                                    ? 0xbfU : 0x7fU)));
        if (vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_uart_valid) {
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__confreg_uart_valid 
                = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_uart_valid;
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__confreg_uart_data 
                = (0xffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata);
        }
        if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_allow_in) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__pipeline_valid 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_ready_go;
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wvalid) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wready))) {
            vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_w_disable = 0U;
        } else if (vlSelf->simu_top__DOT__soc__DOT__m0_wvalid) {
            vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_w_disable = 1U;
        }
        if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_go) {
            vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wvalid = 1U;
        } else if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en) {
            vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wvalid = 0U;
        }
        if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_go) {
            vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wvalid = 1U;
        } else if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en) {
            vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wvalid = 0U;
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awvalid) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awready))) {
            vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw_disable = 0U;
        } else if (vlSelf->simu_top__DOT__soc__DOT__m0_awvalid) {
            vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw_disable = 1U;
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arvalid) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arready))) {
            vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_ar_disable = 0U;
        } else if (vlSelf->simu_top__DOT__soc__DOT__m0_arvalid) {
            vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_ar_disable = 1U;
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_rw) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT10))) {
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_rdy_map0 
                = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_datai;
        }
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_rdy_map1 
            = (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_rw) 
                & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT11))
                ? vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_datai
                : (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT) 
                    << 0x10U) | (0xffffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)));
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map1 
            = (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_rw) 
                & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT9))
                ? vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_datai
                : (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT) 
                    << 0x10U) | (0xffffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)));
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_rw) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT8))) {
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0 
                = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_datai;
        }
        if (vlSelf->ram_ren) {
            vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rvalid = 1U;
        } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready))) {
            vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rvalid = 0U;
        }
        if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en) {
            vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rvalid = 1U;
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_rdata_reg 
                = ((0x1fd0U == (0x1fffU & (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr 
                                           >> 0x10U)))
                    ? ((0xf030U == (0xffffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr))
                        ? 0x1f78a40U : 0U) : ((0x8000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                               ? ((0x4000U 
                                                   & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                   ? 
                                                  ((0x2000U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                    ? 
                                                   ((0x1000U 
                                                     & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                     ? 
                                                    ((0x800U 
                                                      & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                      ? 
                                                     ((0x400U 
                                                       & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                       ? 
                                                      ((0x200U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                        ? 
                                                       ((0x100U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                         ? 
                                                        ((0x80U 
                                                          & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                          ? 0U
                                                          : 
                                                         ((0x40U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                           ? 
                                                          ((0x20U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                            ? 0U
                                                            : 
                                                           ((0x10U 
                                                             & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                             ? 0U
                                                             : 
                                                            ((8U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                              ? 0U
                                                              : 
                                                             ((4U 
                                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                               ? 0U
                                                               : 
                                                              ((2U 
                                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                ? 0U
                                                                : 
                                                               ((1U 
                                                                 & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                 ? 0U
                                                                 : (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__num_monitor)))))))
                                                           : 
                                                          ((0x20U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                            ? 
                                                           ((0x10U 
                                                             & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                             ? 
                                                            ((8U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                              ? 0U
                                                              : 
                                                             ((4U 
                                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                               ? 0U
                                                               : 
                                                              ((2U 
                                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                ? 0U
                                                                : 
                                                               ((1U 
                                                                 & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                 ? 0U
                                                                 : (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__open_trace)))))
                                                             : 
                                                            ((8U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                              ? 0U
                                                              : 
                                                             ((4U 
                                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                               ? 0U
                                                               : 
                                                              ((2U 
                                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                ? 0U
                                                                : 
                                                               ((1U 
                                                                 & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                 ? 0U
                                                                 : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__simu_flag)))))
                                                            : 
                                                           ((0x10U 
                                                             & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                             ? 
                                                            ((8U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                              ? 0U
                                                              : 
                                                             ((4U 
                                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                               ? 0U
                                                               : 
                                                              ((2U 
                                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                ? 0U
                                                                : 
                                                               ((1U 
                                                                 & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                 ? 0U
                                                                 : (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__virtual_uart_data)))))
                                                             : 
                                                            ((8U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                              ? 0U
                                                              : 
                                                             ((4U 
                                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                               ? 0U
                                                               : 
                                                              ((2U 
                                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                ? 0U
                                                                : 
                                                               ((1U 
                                                                 & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                 ? 0U
                                                                 : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__io_simu))))))))
                                                         : 0U)
                                                        : 0U)
                                                       : 0U)
                                                      : 
                                                     ((0x400U 
                                                       & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                       ? 0U
                                                       : 
                                                      ((0x200U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                        ? 0U
                                                        : 
                                                       ((0x100U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                         ? 0U
                                                         : 
                                                        ((0x80U 
                                                          & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                          ? 
                                                         ((0x40U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                           ? 0U
                                                           : 
                                                          ((0x20U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                            ? 0U
                                                            : 
                                                           ((0x10U 
                                                             & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                             ? 
                                                            ((8U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                              ? 0U
                                                              : 
                                                             ((4U 
                                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                               ? 0U
                                                               : 
                                                              ((2U 
                                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                ? 0U
                                                                : 
                                                               ((1U 
                                                                 & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                 ? 0U
                                                                 : 
                                                                ((0x8000U 
                                                                  & ((IData)(vlSelf->__SYM__switch) 
                                                                     << 8U)) 
                                                                 | ((0x2000U 
                                                                     & ((IData)(vlSelf->__SYM__switch) 
                                                                        << 7U)) 
                                                                    | ((0x800U 
                                                                        & ((IData)(vlSelf->__SYM__switch) 
                                                                           << 6U)) 
                                                                       | ((0x200U 
                                                                           & ((IData)(vlSelf->__SYM__switch) 
                                                                              << 5U)) 
                                                                          | ((0x80U 
                                                                              & ((IData)(vlSelf->__SYM__switch) 
                                                                                << 4U)) 
                                                                             | ((0x20U 
                                                                                & ((IData)(vlSelf->__SYM__switch) 
                                                                                << 3U)) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->__SYM__switch) 
                                                                                << 2U)) 
                                                                                | (2U 
                                                                                & ((IData)(vlSelf->__SYM__switch) 
                                                                                << 1U)))))))))))))
                                                             : 
                                                            ((8U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                              ? 0U
                                                              : 
                                                             ((4U 
                                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                               ? 0U
                                                               : 
                                                              ((2U 
                                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                ? 0U
                                                                : 
                                                               ((1U 
                                                                 & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                 ? 0U
                                                                 : 
                                                                ((2U 
                                                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r)) 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r)))))))))))
                                                          : 
                                                         ((0x40U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                           ? 
                                                          ((0x20U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                            ? 
                                                           ((0x10U 
                                                             & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                             ? 
                                                            ((8U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                              ? 0U
                                                              : 
                                                             ((4U 
                                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                               ? 0U
                                                               : 
                                                              ((2U 
                                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                ? 0U
                                                                : 
                                                               ((1U 
                                                                 & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                 ? 0U
                                                                 : (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_key_r)))))
                                                             : 
                                                            ((8U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                              ? 0U
                                                              : 
                                                             ((4U 
                                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                               ? 0U
                                                               : 
                                                              ((2U 
                                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                ? 0U
                                                                : 
                                                               ((1U 
                                                                 & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                 ? 0U
                                                                 : (IData)(vlSelf->__SYM__switch))))))
                                                            : 
                                                           ((0x10U 
                                                             & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                             ? 
                                                            ((8U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                              ? 0U
                                                              : 
                                                             ((4U 
                                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                               ? 0U
                                                               : 
                                                              ((2U 
                                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                ? 0U
                                                                : 
                                                               ((1U 
                                                                 & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                 ? 0U
                                                                 : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__num_data))))
                                                             : 
                                                            ((8U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                              ? 0U
                                                              : 
                                                             ((4U 
                                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                               ? 0U
                                                               : 
                                                              ((2U 
                                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                ? 0U
                                                                : 
                                                               ((1U 
                                                                 & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                 ? 0U
                                                                 : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__led_rg1_data))))))
                                                           : 
                                                          ((0x20U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                            ? 
                                                           ((0x10U 
                                                             & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                             ? 
                                                            ((8U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                              ? 0U
                                                              : 
                                                             ((4U 
                                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                               ? 0U
                                                               : 
                                                              ((2U 
                                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                ? 0U
                                                                : 
                                                               ((1U 
                                                                 & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                 ? 0U
                                                                 : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__led_rg0_data))))
                                                             : 
                                                            ((8U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                              ? 0U
                                                              : 
                                                             ((4U 
                                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                               ? 0U
                                                               : 
                                                              ((2U 
                                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                ? 0U
                                                                : 
                                                               ((1U 
                                                                 & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                 ? 0U
                                                                 : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__led_data)))))
                                                            : 0U)))))))
                                                     : 
                                                    ((0x800U 
                                                      & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                      ? 0U
                                                      : 
                                                     ((0x400U 
                                                       & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                       ? 0U
                                                       : 
                                                      ((0x200U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                        ? 0U
                                                        : 
                                                       ((0x100U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                         ? 0U
                                                         : 
                                                        ((0x80U 
                                                          & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                          ? 0U
                                                          : 
                                                         ((0x40U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                           ? 0U
                                                           : 
                                                          ((0x20U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                            ? 0U
                                                            : 
                                                           ((0x10U 
                                                             & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                             ? 0U
                                                             : 
                                                            ((8U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                              ? 0U
                                                              : 
                                                             ((4U 
                                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                               ? 0U
                                                               : 
                                                              ((2U 
                                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                ? 0U
                                                                : 
                                                               ((1U 
                                                                 & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                 ? 0U
                                                                 : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__timer_r2)))))))))))))
                                                    : 0U)
                                                   : 
                                                  ((0x2000U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                    ? 0U
                                                    : 
                                                   ((0x1000U 
                                                     & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                     ? 0U
                                                     : 
                                                    ((0x800U 
                                                      & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                      ? 0U
                                                      : 
                                                     ((0x400U 
                                                       & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                       ? 0U
                                                       : 
                                                      ((0x200U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                        ? 0U
                                                        : 
                                                       ((0x100U 
                                                         & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                         ? 0U
                                                         : 
                                                        ((0x80U 
                                                          & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                          ? 0U
                                                          : 
                                                         ((0x40U 
                                                           & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                           ? 
                                                          ((0x20U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                            ? 
                                                           ((0x10U 
                                                             & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                             ? 
                                                            ((8U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                              ? 0U
                                                              : 
                                                             ((4U 
                                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                               ? 0U
                                                               : 
                                                              ((2U 
                                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                ? 0U
                                                                : 
                                                               ((1U 
                                                                 & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                 ? 0U
                                                                 : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr7))))
                                                             : 
                                                            ((8U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                              ? 0U
                                                              : 
                                                             ((4U 
                                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                               ? 0U
                                                               : 
                                                              ((2U 
                                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                ? 0U
                                                                : 
                                                               ((1U 
                                                                 & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                 ? 0U
                                                                 : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr6)))))
                                                            : 
                                                           ((0x10U 
                                                             & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                             ? 
                                                            ((8U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                              ? 0U
                                                              : 
                                                             ((4U 
                                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                               ? 0U
                                                               : 
                                                              ((2U 
                                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                ? 0U
                                                                : 
                                                               ((1U 
                                                                 & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                 ? 0U
                                                                 : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr5))))
                                                             : 
                                                            ((8U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                              ? 0U
                                                              : 
                                                             ((4U 
                                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                               ? 0U
                                                               : 
                                                              ((2U 
                                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                ? 0U
                                                                : 
                                                               ((1U 
                                                                 & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                 ? 0U
                                                                 : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr4))))))
                                                           : 
                                                          ((0x20U 
                                                            & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                            ? 
                                                           ((0x10U 
                                                             & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                             ? 
                                                            ((8U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                              ? 0U
                                                              : 
                                                             ((4U 
                                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                               ? 0U
                                                               : 
                                                              ((2U 
                                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                ? 0U
                                                                : 
                                                               ((1U 
                                                                 & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                 ? 0U
                                                                 : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr3))))
                                                             : 
                                                            ((8U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                              ? 0U
                                                              : 
                                                             ((4U 
                                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                               ? 0U
                                                               : 
                                                              ((2U 
                                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                ? 0U
                                                                : 
                                                               ((1U 
                                                                 & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                 ? 0U
                                                                 : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr2)))))
                                                            : 
                                                           ((0x10U 
                                                             & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                             ? 
                                                            ((8U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                              ? 0U
                                                              : 
                                                             ((4U 
                                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                               ? 0U
                                                               : 
                                                              ((2U 
                                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                ? 0U
                                                                : 
                                                               ((1U 
                                                                 & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                 ? 0U
                                                                 : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr1))))
                                                             : 
                                                            ((8U 
                                                              & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                              ? 0U
                                                              : 
                                                             ((4U 
                                                               & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                               ? 0U
                                                               : 
                                                              ((2U 
                                                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                ? 0U
                                                                : 
                                                               ((1U 
                                                                 & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                                 ? 0U
                                                                 : vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr0)))))))))))))))
                                               : 0U));
        } else if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready))) {
            vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rvalid = 0U;
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rvalid) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h76518f96__0))) {
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_pre_sel 
                = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_sel;
        }
        if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_push) {
            vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid = 1U;
        } else if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop) {
            vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid 
                = vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid;
        }
        if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push) {
            vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_valid = 1U;
        } else if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop) {
            vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_valid 
                = vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid;
        }
        if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_push) {
            vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_valid = 1U;
        } else if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) {
            vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_valid 
                = vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid;
        }
        if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_push) {
            vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_valid = 1U;
        } else if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) {
            vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_valid 
                = vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid;
        }
        if (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog)) 
             & (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid)))) {
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel_reg 
                = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel;
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we) 
             & (4U == (7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)))) {
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_pol 
                = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_datai) 
                         >> 6U));
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__infrared 
                = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_datai) 
                         >> 7U));
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr 
                = (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_datai));
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_bvalid) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h765eb7cb__0))) {
            vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_pre_sel 
                = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel;
        }
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_number 
            = (3U & ((0x800U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                      ? ((0x400U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                          ? ((0x200U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                              ? 0U : ((0x100U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                                       ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                          >> 0x12U)
                                       : (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                          >> 0x11U)))
                          : ((0x200U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                              ? ((0x100U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                                  ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                     >> 0x10U) : (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                                  >> 0xfU))
                              : ((0x100U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                                  ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                     >> 0xeU) : 0U)))
                      : ((0x400U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                          ? ((0x200U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                              ? ((0x100U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                                  ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                     >> 0x15U) : (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                                  >> 0x14U))
                              : ((0x100U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                                  ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                     >> 0x13U) : (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                                  >> 0x13U)))
                          : ((0x200U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                              ? ((0x100U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                                  ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                     >> 0x13U) : (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                                  >> 0x12U))
                              : ((0x100U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                                  ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                     >> 0x11U) : (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                                  >> 0x10U))))));
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we) 
             & (2U == (7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)))) {
            if ((1U & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                          >> 7U)))) {
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fcr 
                    = (3U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_datai) 
                             >> 6U));
            }
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tx_reset) 
             | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask))) {
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_overrun = 0U;
        } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_push) 
                    & (0x10U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count)))) {
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_overrun = 1U;
        }
        if (((((((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                 >> 2U) & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_bvalid))) 
               & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd))) 
              & (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm))) 
             & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)))) {
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr 
                = (0xfffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r);
            vlSelf->simu_top__DOT__soc__DOT__apb_s_awready = 1U;
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr = 1U;
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_wr_size 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_size_r;
        } else if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr) {
            vlSelf->simu_top__DOT__soc__DOT__apb_s_awready = 0U;
            if ((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
                        >> 2U) & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_wready))))) {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr 
                    = (0xfffffU & (((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wstrb_r)) 
                                    & (0U == (3U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr)))
                                    ? ((IData)(1U) 
                                       + vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr)
                                    : (((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wstrb_r)) 
                                        & (0U == (3U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr)))
                                        ? ((IData)(2U) 
                                           + vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr)
                                        : (((8U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wstrb_r)) 
                                            & (0U == 
                                               (3U 
                                                & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr)))
                                            ? ((IData)(3U) 
                                               + vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr)
                                            : (((6U 
                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wstrb_r)) 
                                                & (0U 
                                                   == 
                                                   (3U 
                                                    & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr)))
                                                ? ((IData)(1U) 
                                                   + vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr)
                                                : (
                                                   ((0xcU 
                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wstrb_r)) 
                                                    & (0U 
                                                       == 
                                                       (3U 
                                                        & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr)))
                                                    ? 
                                                   ((IData)(2U) 
                                                    + vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr)
                                                    : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr))))));
                vlSelf->simu_top__DOT__soc__DOT__apb_s_wready = 1U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 0U;
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_w_id = 0U;
                if ((2U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr)) {
                    if ((1U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr)) {
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb 
                            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wstrb_r) 
                                     >> 3U));
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 
                            = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wdata_r 
                               >> 0x18U);
                    } else {
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb 
                            = (3U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wstrb_r) 
                                     >> 2U));
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 
                            = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wdata_r 
                               >> 0x10U);
                    }
                } else if ((1U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr)) {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb 
                        = (7U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wstrb_r) 
                                 >> 1U));
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 
                        = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wdata_r 
                           >> 8U);
                } else {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb 
                        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wstrb_r;
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 
                        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wdata_r;
                }
            } else if (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu)) 
                        & (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb)))) {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datai_cpu 
                    = (0xffU & ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb))
                                 ? vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32
                                 : ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb))
                                     ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 
                                        >> 8U) : ((6U 
                                                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb))
                                                   ? 
                                                  (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 
                                                   >> 8U)
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb))
                                                    ? 
                                                   (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 
                                                    >> 0x10U)
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb))
                                                     ? 
                                                    (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 
                                                     >> 0x18U)
                                                     : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32))))));
                if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready))) {
                    __Vdly__simu_top__DOT__soc__DOT__apb_s_bvalid = 0U;
                }
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_high_24b_wr 
                    = (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 
                       >> 8U);
            } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_word_trans_cpu) 
                        & (0xfU == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb)))) {
                if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_ready) {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 0U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr = 0U;
                    __Vdly__simu_top__DOT__soc__DOT__apb_s_bvalid = 1U;
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb = 0U;
                } else {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 1U;
                }
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datai_cpu 
                    = (0xffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32);
                vlSelf->simu_top__DOT__soc__DOT__apb_s_wready = 0U;
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_high_24b_wr 
                    = (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 
                       >> 8U);
            } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb))) {
                if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_ready) {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr 
                        = (0xfffffU & ((IData)(1U) 
                                       + vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr));
                    if ((0U == (7U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb) 
                                      >> 1U)))) {
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 0U;
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr = 0U;
                        __Vdly__simu_top__DOT__soc__DOT__apb_s_bvalid = 1U;
                    } else {
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                    }
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datai_cpu 
                        = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 
                                    >> 8U));
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb 
                        = (0xeU & (IData)(__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb));
                } else {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 1U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datai_cpu 
                        = (0xffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32);
                }
                vlSelf->simu_top__DOT__soc__DOT__apb_s_wready = 0U;
            } else if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb))) {
                if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_ready) {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr 
                        = (0xfffffU & ((IData)(1U) 
                                       + vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr));
                    if ((0U == (3U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb) 
                                      >> 2U)))) {
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 0U;
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr = 0U;
                        __Vdly__simu_top__DOT__soc__DOT__apb_s_bvalid = 1U;
                    } else {
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                    }
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datai_cpu 
                        = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 
                                    >> 0x10U));
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb 
                        = (0xdU & (IData)(__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb));
                } else {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 1U;
                }
                vlSelf->simu_top__DOT__soc__DOT__apb_s_wready = 0U;
            } else if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb))) {
                if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_ready) {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr 
                        = (0xfffffU & ((IData)(1U) 
                                       + vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr));
                    if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb))) {
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                    } else {
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 0U;
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr = 0U;
                        __Vdly__simu_top__DOT__soc__DOT__apb_s_bvalid = 1U;
                    }
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datai_cpu 
                        = (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 
                           >> 0x18U);
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb 
                        = (0xbU & (IData)(__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb));
                } else {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 1U;
                }
                vlSelf->simu_top__DOT__soc__DOT__apb_s_wready = 0U;
            } else if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb))) {
                if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_ready) {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 0U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr = 0U;
                    __Vdly__simu_top__DOT__soc__DOT__apb_s_bvalid = 1U;
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb 
                        = (7U & (IData)(__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb));
                } else {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 1U;
                }
                vlSelf->simu_top__DOT__soc__DOT__apb_s_wready = 0U;
            } else {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 0U;
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datai_cpu = 0U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb = 0U;
                vlSelf->simu_top__DOT__soc__DOT__apb_s_wready = 0U;
                if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm))) {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr = 0U;
                }
            }
        } else if (((((((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                        >> 2U) & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_arready))) 
                      & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_bvalid))) 
                     & (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm))) 
                    & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)))) {
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
            vlSelf->simu_top__DOT__soc__DOT__apb_s_arready = 1U;
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd = 1U;
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_r_id = 0U;
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_size_r;
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr 
                = (0xfffffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r);
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb 
                = (0xfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r);
            if ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_size_r))) {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count = 4U;
            } else if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_size_r))) {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count = 2U;
            } else if ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_size_r))) {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count = 1U;
            }
        } else if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd) {
            vlSelf->simu_top__DOT__soc__DOT__apb_s_arready = 0U;
            if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_word_trans_cpu) {
                if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_ready) {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu 
                        = (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count));
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                        = ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)
                              ? 0U : ((0U == (0x3fU 
                                              & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr 
                                                 >> 0xeU)))
                                       ? 0U : (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__REG_DAT_T 
                                               >> 8U))) 
                            << 8U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datao_cpu));
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count 
                        = (7U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count) 
                                 - (IData)(1U)));
                    vlSelf->simu_top__DOT__soc__DOT__apb_s_rlast 
                        = ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size)) 
                           | (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count)));
                    __Vdly__simu_top__DOT__soc__DOT__apb_s_rvalid 
                        = ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size)) 
                           | (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count)));
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd 
                        = (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count));
                } else {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 1U;
                }
            } else if ((4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count))) {
                if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_ready) {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count 
                        = (7U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count) 
                                 - (IData)(1U)));
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr 
                        = (0xfffffU & ((IData)(1U) 
                                       + vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr));
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                        = ((0xffffff00U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32) 
                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datao_cpu));
                } else {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 1U;
                }
            } else if ((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count))) {
                if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_ready) {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count 
                        = (7U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count) 
                                 - (IData)(1U)));
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr 
                        = (0xfffffU & ((IData)(1U) 
                                       + vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr));
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                        = ((0xffff00ffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32) 
                           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datao_cpu) 
                              << 8U));
                } else {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 1U;
                }
            } else if ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count))) {
                if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_ready) {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count 
                        = (7U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count) 
                                 - (IData)(1U)));
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr 
                        = (0xfffffU & ((IData)(1U) 
                                       + vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr));
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
                    if ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size))) {
                        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                            = ((0xff00ffffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datao_cpu) 
                                  << 0x10U));
                    } else if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size))) {
                        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                            = ((0xffffff00U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32) 
                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datao_cpu));
                    }
                } else {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 1U;
                }
            } else if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count))) {
                if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_ready) {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 0U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
                    vlSelf->simu_top__DOT__soc__DOT__apb_s_rlast = 1U;
                    __Vdly__simu_top__DOT__soc__DOT__apb_s_rvalid = 1U;
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd = 0U;
                    if ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size))) {
                        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                            = ((0xffffffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datao_cpu) 
                                  << 0x18U));
                    } else if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size))) {
                        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                            = ((0xffff00ffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32) 
                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datao_cpu) 
                                  << 8U));
                    } else if ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size))) {
                        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                            = ((0xffffff00U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32) 
                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datao_cpu));
                    }
                } else {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 1U;
                }
            } else {
                vlSelf->simu_top__DOT__soc__DOT__apb_s_arready = 0U;
                vlSelf->simu_top__DOT__soc__DOT__apb_s_rlast = 1U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 0U;
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
                if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm))) {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd = 0U;
                }
                if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready))) {
                    __Vdly__simu_top__DOT__soc__DOT__apb_s_bvalid = 0U;
                }
                __Vdly__simu_top__DOT__soc__DOT__apb_s_rvalid = 1U;
                if (((IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_rvalid) 
                     & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                        >> 2U))) {
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 = 0U;
                    vlSelf->simu_top__DOT__soc__DOT__apb_s_rlast = 0U;
                    __Vdly__simu_top__DOT__soc__DOT__apb_s_rvalid = 0U;
                }
            }
        } else {
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 0U;
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr = 0U;
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd = 0U;
            vlSelf->simu_top__DOT__soc__DOT__apb_s_wready = 0U;
            vlSelf->simu_top__DOT__soc__DOT__apb_s_arready = 0U;
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr = 0U;
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 = 0U;
            if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready))) {
                __Vdly__simu_top__DOT__soc__DOT__apb_s_bvalid = 0U;
            }
            if (((IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_rvalid) 
                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                    >> 2U))) {
                __Vdly__simu_top__DOT__soc__DOT__apb_s_rvalid = 0U;
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 = 0U;
                vlSelf->simu_top__DOT__soc__DOT__apb_s_rlast = 0U;
            }
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr = 0U;
        __Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram__v1 = 1U;
        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop = 0U;
        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier = 0U;
        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top = 0U;
        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count = 0U;
        __Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v19 = 1U;
        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt = 0U;
        vlSelf->num_csn = 0xffU;
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__confreg_uart_valid = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__pipeline_valid = 0U;
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__confreg_uart_data = 0U;
        vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_w_disable = 0U;
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wvalid = 0U;
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wvalid = 0U;
        vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw_disable = 0U;
        vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_ar_disable = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_rdy_map0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_rdy_map1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map1 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rvalid = 0U;
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rvalid = 0U;
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_pre_sel = 0U;
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid = 0U;
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_valid = 0U;
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_valid = 0U;
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_valid = 0U;
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel_reg = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_pol = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__infrared = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr = 0U;
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_pre_sel = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_number = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fcr = 3U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_overrun = 0U;
        __Vdly__simu_top__DOT__soc__DOT__apb_s_rvalid = 0U;
        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 = 0U;
        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr = 0U;
        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb = 0U;
        vlSelf->simu_top__DOT__soc__DOT__apb_s_wready = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 0U;
        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count = 0U;
        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_wr_size = 0U;
        vlSelf->simu_top__DOT__soc__DOT__apb_s_rlast = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datai_cpu = 0U;
        vlSelf->simu_top__DOT__soc__DOT__apb_s_awready = 0U;
        vlSelf->simu_top__DOT__soc__DOT__apb_s_arready = 0U;
        __Vdly__simu_top__DOT__soc__DOT__apb_s_bvalid = 0U;
        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr = 0U;
        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_w_id = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_r_id = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_high_24b_wr = 0U;
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_rdata_reg = 0U;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_push) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r;
    } else if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr 
            = (IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas 
                       >> 0xdU));
    } else if (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen_last)) 
                & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en))) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr 
            = vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr_next;
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_flush)))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__pipeline_valid = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__pipeline_data = 0ULL;
    } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_allow_in) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__pipeline_valid 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_valid_in;
    }
    if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_allow_in) 
          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_valid_in)) 
         & (IData)(vlSelf->aresetn))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__pipeline_data 
            = (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__pipeline_data)) 
                << 0x20U) | (QData)((IData)(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp_valid)
                                              ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp_valid)
                                                  ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp
                                                  : 0U)
                                              : vlSelf->simu_top__DOT__soc__DOT__m0_rdata))));
    }
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_ready_go) 
         & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_allow_in)))) {
        __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp_valid = 1U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp 
            = vlSelf->simu_top__DOT__soc__DOT__m0_rdata;
    } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp_valid) 
                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_allow_in))) {
        __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp_valid = 0U;
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_flush)))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[0U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[1U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[2U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[3U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[4U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[5U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[6U] = 0U;
    }
    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_valid_in) 
         & (IData)(vlSelf->aresetn))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[0U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[1U] 
            = (IData)((((QData)((IData)(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_valid)
                                          ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[2U]
                                          : 0U))) << 0x20U) 
                       | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[1U]))));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[2U] 
            = (IData)(((((QData)((IData)(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_valid)
                                           ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[2U]
                                           : 0U))) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[1U]))) 
                       >> 0x20U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[3U] 
            = (((IData)((((QData)((IData)(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid)
                                            ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid)
                                                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp
                                                : 0U)
                                            : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData))) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[3U])))) 
                << 4U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wstrb_mem_mem));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[4U] 
            = (((IData)((((QData)((IData)(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid)
                                            ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid)
                                                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp
                                                : 0U)
                                            : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData))) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[3U])))) 
                >> 0x1cU) | ((IData)(((((QData)((IData)(
                                                        ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid)
                                                          ? 
                                                         ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid)
                                                           ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp
                                                           : 0U)
                                                          : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[3U]))) 
                                      >> 0x20U)) << 4U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[5U] 
            = (((IData)(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_valid)
                          ? (0x1fffffffffULL & (((QData)((IData)(
                                                                 vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[5U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[4U]))))
                          : 0ULL)) << 4U) | ((IData)(
                                                     ((((QData)((IData)(
                                                                        ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid)
                                                                          ? 
                                                                         ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid)
                                                                           ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp
                                                                           : 0U)
                                                                          : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[3U]))) 
                                                      >> 0x20U)) 
                                             >> 0x1cU));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[6U] 
            = ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_valid)
                  ? (0x3ffffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[5U] 
                                 >> 9U)) : 0U) << 9U) 
               | (((IData)(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_valid)
                             ? (0x1fffffffffULL & (
                                                   ((QData)((IData)(
                                                                    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[5U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[4U]))))
                             : 0ULL)) >> 0x1cU) | ((IData)(
                                                           (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_valid)
                                                              ? 
                                                             (0x1fffffffffULL 
                                                              & (((QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[5U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[4U]))))
                                                              : 0ULL) 
                                                            >> 0x20U)) 
                                                   << 4U)));
    }
    if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_ready_go) 
          & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_allow_in))) 
         & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memRead_mem) 
            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memWriteEn_mem)))) {
        __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid = 1U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData;
    } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid) 
                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_allow_in))) {
        __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid = 0U;
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__branchPC_temp_valid 
        = __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__branchPC_temp_valid;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t 
        = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t;
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur 
        = __Vdly__simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur;
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rcur 
        = __Vdly__simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rcur;
    if (__Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v0) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram[__Vdlyvdim0__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v0] 
            = __Vdlyvval__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v0;
    }
    if (__Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v1) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram[0U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram[1U] = 0U;
    }
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset 
        = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr 
        = __Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr;
    if (__Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram__v0) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram[__Vdlyvdim0__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram__v0] 
            = __Vdlyvval__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram__v0;
    }
    if (__Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram__v1) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram[0U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram[1U] = 0U;
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req 
        = __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier 
        = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top 
        = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top;
    if (__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0) {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xaU] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xbU] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xcU] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xdU] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xeU] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xfU] = 0U;
    }
    if (__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16) {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vdlyvdim0__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16] 
            = __Vdlyvval__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16;
    }
    if (__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17) {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vdlyvdim0__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17] = 0U;
    }
    if (__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18) {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vdlyvdim0__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18] 
            = __Vdlyvval__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18;
    }
    if (__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v19) {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xaU] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xbU] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xcU] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xdU] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xeU] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xfU] = 0U;
    }
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt 
        = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5r 
        = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5r;
    if (__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0) {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[__Vdlyvdim0__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0] 
            = __Vdlyvval__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    }
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
        = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__count 
        = __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__count;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog 
        = __Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half 
        = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob 
        = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND 
        = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count 
        = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
        = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO 
        = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
        = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM 
        = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE 
        = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer 
        = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ERASE_SERIAL 
        = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ERASE_SERIAL;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT 
        = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE 
        = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM 
        = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT 
        = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT 
        = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
        = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ 
        = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status 
        = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb 
        = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 
        = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size 
        = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count 
        = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count;
    if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_go) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wstrb 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wstrb_r;
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wstrb_r 
        = __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wstrb_r;
    if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_push) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awlen = 0U;
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst = 0U;
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awsize 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_size_r;
    } else if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awlen 
            = (0xfU & (IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas 
                               >> 4U)));
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst 
            = (3U & (IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas 
                             >> 0xbU)));
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awsize 
            = (7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas 
                             >> 8U)));
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_size_r 
        = __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_size_r;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd 
        = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr 
        = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr;
    vlSelf->simu_top__DOT__soc__DOT__apb_s_rvalid = __Vdly__simu_top__DOT__soc__DOT__apb_s_rvalid;
    vlSelf->simu_top__DOT__soc__DOT__apb_s_bvalid = __Vdly__simu_top__DOT__soc__DOT__apb_s_bvalid;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu 
        = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr 
        = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant 
        = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp_valid 
        = __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp_valid;
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr7 
        = __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr7;
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr6 
        = __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr6;
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr5 
        = __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr5;
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr4 
        = __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr4;
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr3 
        = __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr3;
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr2 
        = __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr2;
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr1 
        = __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr1;
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr0 
        = __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr0;
    if (vlSelf->aresetn) {
        if ((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__start_dlc) 
                   | (~ (IData)((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc))))))) {
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc 
                = (0xffffU & ((vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl 
                               - (IData)(1U)) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_toggle)));
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_cnt 
                = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_next;
        } else {
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc 
                = (0xffffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc) 
                              - (IData)(1U)));
        }
        if ((((IData)(vlSelf->uart_rx__en0) & (1U < (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fi_di_reg))) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_en_reg))) {
            if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count) 
                 == (0x7fU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fi_di_reg) 
                              >> 1U)))) {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count)));
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_reg = 1U;
            } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count) 
                        == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fi_di_reg))) {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count = 0U;
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_reg = 0U;
            } else {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count)));
            }
        } else {
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count = 0U;
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_reg = 0U;
        }
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count 
            = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid 
            = __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_d 
            = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_d 
            = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int;
    } else {
        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_cnt = 0U;
        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_reg = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count 
            = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid 
            = __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_d = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_d = 0U;
    }
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6_d 
        = (1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7_d 
        = ((IData)(vlSelf->aresetn) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_d 
        = ((IData)(vlSelf->aresetn) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_dir 
        = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram
        [(1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr))];
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr) 
           == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr) 
           == ((2U & ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr) 
                          >> 1U)) << 1U)) | (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5_d 
        = (1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr4_d 
        = ((IData)(vlSelf->aresetn) & ((IData)(vlSelf->__VdfgTmp_hcd04e225__0) 
                                       >> 2U));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr3_d 
        = ((IData)(vlSelf->aresetn) & (IData)(vlSelf->__VdfgTmp_hcd04e225__0));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr2_d 
        = ((IData)(vlSelf->aresetn) & ((IData)(vlSelf->__VdfgTmp_hcd04e225__0) 
                                       >> 1U));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__d1_fifo_read 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fifo_read;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_d 
        = ((IData)(vlSelf->aresetn) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int));
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r2 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r1;
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r2 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r1;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_d 
        = ((IData)(vlSelf->aresetn) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int));
    __Vtableidx7 = (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_pnd) 
                     << 5U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_pnd) 
                                << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_pnd) 
                                           << 3U) | 
                                          (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_pnd) 
                                            << 2U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_pnd) 
                                               << 1U) 
                                              | (1U 
                                                 & (~ (IData)(vlSelf->aresetn))))))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir 
        = Vsimu_top__ConstPool__TABLE_h8018663f_0[__Vtableidx7];
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_empty 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr) 
           == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr) 
           == ((2U & ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr) 
                          >> 1U)) << 1U)) | (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr))));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_sel 
        = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram
        [(1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr))];
    vlSelf->simu_top__DOT__soc__DOT__cpu_arvalid = 
        ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req) 
         & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wr_r)) 
            & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__addr_rcv))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT____VdfgTmp_hf519d2e1__0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wr_r));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0_d 
        = ((IData)(vlSelf->aresetn) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr1_d 
        = ((IData)(vlSelf->aresetn) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_overrun));
    vlSelf->ram_wdata = vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wdata;
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen_last 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen) 
           == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[0U] 
        = vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rid;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[3U] 
        = vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rid;
    vlSelf->confreg_uart_data = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__confreg_uart_data;
    vlSelf->ram_raddr = vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr;
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
    vlSelf->ram_waddr = vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr;
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
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__dividend_next 
        = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__dividend_reg 
           << 1U);
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
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__i_uart_sync_flops__DOT__flop_0 
        = (1U & ((~ (IData)(vlSelf->aresetn)) | ((IData)(vlSelf->uart_rx__en0)
                                                  ? 
                                                 ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__rx_en)) 
                                                  | (IData)(vlSelf->uart_tx))
                                                  : (IData)(vlSelf->uart_rx))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____VdfgTmp_h84138141__0 
        = ((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr))
            ? ((0xcU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                        << 2U)) | ((2U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                          >> 1U)) | 
                                   (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                          >> 3U))))
            : ((IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI) 
               << 1U));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[0U] 
        = vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_data;
    if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_push) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_datas 
            = vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awid;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_push) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awid = 0U;
    } else if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awid 
            = (0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas));
    }
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[3U] 
        = vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_data;
    if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_push) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_datas 
            = vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awid;
    }
    vlSelf->__Vtableidx4 = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fcr;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__trigger_level 
        = Vsimu_top__ConstPool__TABLE_h7eaf993d_0[vlSelf->__Vtableidx4];
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
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[2U] 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_w_id;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[2U] 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_r_id;
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
    if ((1U & (~ (IData)(vlSelf->aresetn)))) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__i = 2U;
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__i = 2U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rbit_in = 0U;
        vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_no_delay 
            = (0xffU == (0xffffU & vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random));
        vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_short_delay 
            = (0xffU == (0xffU & vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random));
    }
    if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_push) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awid = 0U;
    } else if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awid 
            = (0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas));
    }
    if (vlSelf->aresetn) {
        if ((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__trap)))) {
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cycleCnt 
                = (1ULL + vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cycleCnt);
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instrCnt 
                = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instrCnt 
                   + (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_valid)));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_valid 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_valid;
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_cnt_inst 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cnt_inst_diff;
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_timer_64 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__timer_64_diff;
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_inst_ld_en 
                = (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_control_data_wb 
                            >> 8U));
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_ld_paddr 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[1U];
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_ld_vaddr 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[1U];
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_inst_st_en 
                = (0xffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_control_data_wb);
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_st_paddr 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[1U];
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_st_vaddr 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[1U];
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_st_data 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[0U];
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_csr_rstat_en 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_rstat_en_diff;
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_csr_data 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_data_diff;
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_wen 
                = vlSelf->debug0_wb_rf_wen;
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_wdest 
                = vlSelf->debug0_wb_rf_wnum;
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_wdata 
                = vlSelf->debug0_wb_rf_wdata;
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_pc 
                = vlSelf->debug0_wb_pc;
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_inst 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U];
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_excp_flush 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__excp_flush;
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_ertn 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ertn_flush;
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_csr_ecode 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ws_csr_ecode;
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_tlbfill_en 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlbfill_en;
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_rand_index 
                = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rand_index;
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__trap = 0U;
            vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__trap_code 
                = (0xffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                   [0xaU]);
        }
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__delayed_modem_signals 
            = (0xbU | (4U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI)) 
                             << 2U)));
        if ((0x80000U & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step1_count)) {
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step1_flag = 0U;
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r 
                = (1U & ((IData)(vlSelf->btn_step) 
                         >> 1U));
        } else if ((1U & (((~ ((IData)(vlSelf->btn_step) 
                               >> 1U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r)) 
                          | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r)) 
                             & ((IData)(vlSelf->btn_step) 
                                >> 1U))))) {
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step1_flag = 1U;
        }
        if ((0x80000U & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step0_count)) {
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step0_flag = 0U;
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r 
                = (1U & (IData)(vlSelf->btn_step));
        } else if ((1U & (((~ (IData)(vlSelf->btn_step)) 
                           & (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r)) 
                          | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r)) 
                             & (IData)(vlSelf->btn_step))))) {
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step0_flag = 1U;
        }
        if ((IData)(((vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__key_count 
                      >> 0x13U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state_count) 
                                   >> 3U)))) {
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__key_flag = 0U;
        } else if ((((~ (IData)((0xfU == (IData)(vlSelf->btn_key_row)))) 
                     & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state))) 
                    | ((7U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                       & (0xfU == (IData)(vlSelf->btn_key_row))))) {
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__key_flag = 1U;
        }
        if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tx_reset) {
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top = 0U;
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0U;
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count = 0U;
        } else if ((2U == (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_push) 
                            << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_pop)))) {
            if ((0x10U > (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count))) {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count)));
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top 
                    = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1;
            }
        } else if ((1U == (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_push) 
                            << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_pop)))) {
            if ((0U < (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count))) {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom)));
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count 
                    = (0x1fU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count) 
                                - (IData)(1U)));
            }
        } else if ((3U == (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_push) 
                            << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_pop)))) {
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom)));
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top 
                = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1;
        }
        if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_push) {
            vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid = 1U;
        } else if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_pop) {
            vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid = 0U;
        }
        if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_push) {
            vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid = 1U;
        } else if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_pop) {
            vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid = 0U;
        }
        if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_push) {
            vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid = 1U;
        } else if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_pop) {
            vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid = 0U;
        }
        if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_push) {
            vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid = 1U;
        } else if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_pop) {
            vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid = 0U;
        }
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__scan_data 
            = (0xfU & ((0x80000U & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__count)
                        ? ((0x40000U & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__count)
                            ? ((0x20000U & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__count)
                                ? vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__num_data
                                : (vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__num_data 
                                   >> 4U)) : ((0x20000U 
                                               & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__count)
                                               ? (vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__num_data 
                                                  >> 8U)
                                               : (vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__num_data 
                                                  >> 0xcU)))
                        : ((0x40000U & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__count)
                            ? ((0x20000U & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__count)
                                ? (vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__num_data 
                                   >> 0x10U) : (vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__num_data 
                                                >> 0x14U))
                            : ((0x20000U & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__count)
                                ? (vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__num_data 
                                   >> 0x18U) : (vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__num_data 
                                                >> 0x1cU)))));
        vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
            = vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random_next;
        if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) {
            vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid = 1U;
        } else if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop) {
            vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid 
                = vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid;
        }
        if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) {
            vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid = 1U;
        } else if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop) {
            vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid 
                = vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid;
        }
        if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____Vcellinp__receiver__enable) {
            if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate))) {
                if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate))) {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate = 0U;
                } else if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate))) {
                    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate))) {
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate = 0U;
                    } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_in) 
                                | (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b)))) {
                        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_data_in 
                            = ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b))
                                ? 4U : (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift) 
                                         << 3U) | (
                                                   ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_error) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rframing_error))));
                        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push = 1U;
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate = 0U;
                    } else if ((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rframing_error)))) {
                        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_data_in 
                            = (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift) 
                                << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_error) 
                                           << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rframing_error)));
                        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push = 1U;
                        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16 = 0xeU;
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate = 1U;
                    }
                } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate))) {
                    if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_0) {
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate = 4U;
                        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16 = 0xeU;
                    } else {
                        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16 
                            = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1;
                    }
                } else {
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1;
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_xor 
                        = (1U & (VL_REDXOR_8(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift) 
                                 ^ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity)));
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate = 5U;
                }
            } else if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate))) {
                if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate))) {
                    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate))) {
                        if ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rbit_counter))) {
                            if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))) {
                                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate = 3U;
                            } else {
                                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate = 4U;
                                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_error = 0U;
                            }
                        } else {
                            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rbit_counter 
                                = (7U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rbit_counter) 
                                         - (IData)(1U)));
                            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate = 2U;
                        }
                        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16 = 0xeU;
                    } else {
                        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rbit_counter 
                            = ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))
                                ? ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))
                                    ? 7U : 6U) : ((1U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))
                                                   ? 5U
                                                   : 4U));
                        if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_0) {
                            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate = 2U;
                            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16 = 0xeU;
                            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift = 0U;
                        } else {
                            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate = 6U;
                        }
                        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16 
                            = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1;
                    }
                } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate))) {
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_error 
                        = (1U & ((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))
                                  ? ((0x20U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))
                                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity)
                                      : (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_xor))
                                  : ((0x20U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))
                                      ? (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity))
                                      : (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_xor)))));
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1;
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate = 9U;
                } else {
                    if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_7) {
                        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rframing_error 
                            = (1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_in)));
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate = 0xaU;
                    }
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1;
                }
            } else if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate))) {
                if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate))) {
                    if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_7) {
                        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity 
                            = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_in;
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate = 8U;
                    }
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1;
                } else {
                    if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_7) {
                        if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))) {
                            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))) {
                                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift 
                                    = (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_in) 
                                        << 7U) | (0x7fU 
                                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift) 
                                                     >> 1U)));
                            } else {
                                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift 
                                    = ((0x80U & (IData)(__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift)) 
                                       | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_in) 
                                           << 6U) | 
                                          (0x3fU & 
                                           ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift) 
                                            >> 1U))));
                            }
                        } else {
                            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift 
                                = ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))
                                    ? ((0xc0U & (IData)(__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift)) 
                                       | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_in) 
                                           << 5U) | 
                                          (0x1fU & 
                                           ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift) 
                                            >> 1U))))
                                    : ((0xe0U & (IData)(__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift)) 
                                       | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_in) 
                                           << 4U) | 
                                          (0xfU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift) 
                                                   >> 1U)))));
                        }
                    }
                    if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_0) {
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate = 7U;
                    }
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1;
                }
            } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate))) {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate 
                    = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_7)
                        ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_in)
                            ? 0U : 6U) : (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate));
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push = 0U;
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16 
                    = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1;
            } else {
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push = 0U;
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_data_in = 0U;
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16 = 0xeU;
                if (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_in)) 
                     & (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b)))) {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate = 1U;
                }
            }
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_rw) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT3))) {
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing 
                = ((0xff00U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)) 
                   | ((5U > (0xffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_datai))
                       ? 5U : (0xffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_datai)));
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing 
                = ((0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)) 
                   | (((2U > (0xffU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_datai 
                                       >> 8U))) ? 2U
                        : (0xffU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_datai 
                                    >> 8U))) << 8U));
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_rw) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT7))) {
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_op_num 
                = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_datai;
        }
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_cmd_valid 
            = (1U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command);
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_rw) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT0))) {
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                = ((0xffff0000U & __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command) 
                   | (0xffffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_datai));
        } else if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE) 
                    & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)) {
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                = (0xfffffffeU & __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command);
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_clr_ack = 1U;
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                = (0x400U | __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command);
        } else {
            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                = ((0xffffU & __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command) 
                   | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ) 
                       << 0x1fU) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE) 
                                     << 0x18U) | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r1) 
                                                  << 0x10U))));
            if ((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE)))) {
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_clr_ack = 0U;
            }
        }
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__addr_in_die 
            = ((0x800U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                ? ((0x400U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                    ? ((0x200U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                        ? 0ULL : ((0x100U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                                   ? (((QData)((IData)(
                                                       (0x3ffffU 
                                                        & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r))) 
                                       << 9U) | (QData)((IData)(
                                                                (0x1ffU 
                                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_c)))))
                                   : (((QData)((IData)(
                                                       (0x1ffffU 
                                                        & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r))) 
                                       << 9U) | (QData)((IData)(
                                                                (0x1ffU 
                                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_c)))))))
                    : ((0x200U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                        ? ((0x100U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                            ? (((QData)((IData)((0xffffU 
                                                 & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r))) 
                                << 9U) | (QData)((IData)(
                                                         (0x1ffU 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_c)))))
                            : (((QData)((IData)((0x7fffU 
                                                 & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r))) 
                                << 9U) | (QData)((IData)(
                                                         (0x1ffU 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_c))))))
                        : ((0x100U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                            ? (((QData)((IData)((0x3fffU 
                                                 & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r))) 
                                << 9U) | (QData)((IData)(
                                                         (0x1ffU 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_c)))))
                            : 0ULL))) : ((0x400U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                                          ? ((0x200U 
                                              & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                                              ? ((0x100U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   (0x1fffffU 
                                                                    & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r))) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_c)))
                                                  : 
                                                 (((QData)((IData)(
                                                                   (0xfffffU 
                                                                    & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r))) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_c))))
                                              : ((0x100U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   (0x7ffffU 
                                                                    & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r))) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_c)))
                                                  : 
                                                 (((QData)((IData)(
                                                                   (0x7ffffU 
                                                                    & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r))) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    (0x1fffU 
                                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_c)))))))
                                          : ((0x200U 
                                              & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                                              ? ((0x100U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   (0x7ffffU 
                                                                    & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r))) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    (0xfffU 
                                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_c)))))
                                                  : 
                                                 (((QData)((IData)(
                                                                   (0x3ffffU 
                                                                    & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r))) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    (0xfffU 
                                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_c))))))
                                              : ((0x100U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   (0x1ffffU 
                                                                    & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r))) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    (0xfffU 
                                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_c)))))
                                                  : 
                                                 (((QData)((IData)(
                                                                   (0xffffU 
                                                                    & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r))) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    (0xfffU 
                                                                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_c)))))))));
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm 
            = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm_nxt;
        if (vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_uart_valid) {
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__virtual_uart_data 
                = (0xffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata);
        }
        if ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__next_state))) {
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_key_r = 0U;
        } else if ((((7U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__next_state)) 
                     & (7U != (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state))) 
                    & ((IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state_count) 
                       >> 3U))) {
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_key_r 
                = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_key_tmp;
        }
        if (((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
             & (0xff00U == (0xffffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))) {
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__io_simu 
                = ((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata 
                    << 0x10U) | (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata 
                                 >> 0x10U));
        }
        if (((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
             & (0xff40U == (0xffffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))) {
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__num_monitor 
                = (1U & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata);
        }
        if (((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
             & (0xff30U == (0xffffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))) {
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__open_trace 
                = (0U != vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata);
        }
        if (((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
             & (0xf040U == (0xffffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))) {
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__led_rg1_data 
                = vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata;
        }
        if (((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
             & (0xf030U == (0xffffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))) {
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__led_rg0_data 
                = vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata;
        }
        if (((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
             & (0xf020U == (0xffffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))) {
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__led_data 
                = vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata;
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we) 
             & (7U == (7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)))) {
            if ((0x80U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))) {
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fi_di_reg 
                    = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_datai;
            }
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_reset) 
             | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask))) {
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_overrun = 0U;
        } else if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_push_pulse) 
                     & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop))) 
                    & (0x10U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count)))) {
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_overrun = 1U;
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we) 
             & (2U == (7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)))) {
            if ((1U & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                          >> 7U)))) {
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tx_reset 
                    = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_datai) 
                             >> 2U));
            }
        } else {
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tx_reset = 0U;
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__enable) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tx_en))) {
            if ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate))) {
                if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate))) {
                    if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate))) {
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate = 0U;
                    } else {
                        if ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter))) {
                            if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter))) {
                                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time 
                                    = (7U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time) 
                                             + (1U 
                                                & (~ (IData)(vlSelf->uart_tx)))));
                                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter = 0U;
                                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error 
                                    = (1U & (~ (IData)(vlSelf->uart_tx)));
                                if ((2U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))) {
                                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__tx2rx_en = 1U;
                                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate = 4U;
                                } else {
                                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__tx2rx_en = 0U;
                                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate = 0U;
                                }
                            } else {
                                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter 
                                    = (0x1fU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter) 
                                                - (IData)(1U)));
                            }
                        } else {
                            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__tx2rx_en = 1U;
                            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter 
                                = ((2U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))
                                    ? 0xfU : 0xdU);
                        }
                        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp = 1U;
                    }
                } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate))) {
                    if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error) 
                         & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time) 
                            != (7U & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__repeat_reg)))))) {
                        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_pop = 0U;
                        if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))) {
                            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))) {
                                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter = 7U;
                                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor 
                                    = (1U & VL_REDXOR_8(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_bak));
                            } else {
                                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter = 6U;
                                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor 
                                    = (1U & VL_REDXOR_32(
                                                         (0x7fU 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_bak))));
                            }
                        } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))) {
                            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter = 5U;
                            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor 
                                = (1U & VL_REDXOR_32(
                                                     (0x3fU 
                                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_bak))));
                        } else {
                            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter = 4U;
                            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor 
                                = (1U & VL_REDXOR_32(
                                                     (0x1fU 
                                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_bak))));
                        }
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__shift_out 
                            = (0x7fU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_bak) 
                                        >> 1U));
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_out 
                            = (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_bak));
                    } else {
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time = 0U;
                        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_pop = 1U;
                        if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))) {
                            if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))) {
                                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter = 7U;
                                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor 
                                    = (1U & VL_REDXOR_8(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_out));
                            } else {
                                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter = 6U;
                                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor 
                                    = (1U & VL_REDXOR_32(
                                                         (0x7fU 
                                                          & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_out))));
                            }
                        } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))) {
                            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter = 5U;
                            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor 
                                = (1U & VL_REDXOR_32(
                                                     (0x3fU 
                                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_out))));
                        } else {
                            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter = 4U;
                            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor 
                                = (1U & VL_REDXOR_32(
                                                     (0x1fU 
                                                      & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_out))));
                        }
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__shift_out 
                            = (0x7fU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_out) 
                                        >> 1U));
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_out 
                            = (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_out));
                        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_bak 
                            = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_out;
                    }
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate = 1U;
                } else {
                    if ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter))) {
                        if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter))) {
                            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter = 0U;
                            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__tx2rx_en = 0U;
                            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate = 0U;
                        } else {
                            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter 
                                = (0x1fU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter) 
                                            - (IData)(1U)));
                        }
                    } else {
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter 
                            = ((2U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))
                                ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error)
                                    ? 0x1dU : 0xdU)
                                : ((0U == (4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr)))
                                    ? 0xdU : ((4U == 
                                               (7U 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr)))
                                               ? 0x15U
                                               : 0x1dU)));
                    }
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp = 1U;
                }
            } else if ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate))) {
                if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate))) {
                    if ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter))) {
                        if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter))) {
                            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter = 0U;
                            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate 
                                = ((IData)(vlSelf->uart_rx__en0)
                                    ? 6U : 4U);
                        } else {
                            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter 
                                = (0x1fU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter) 
                                            - (IData)(1U)));
                        }
                    } else {
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter = 0xfU;
                    }
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp 
                        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_out;
                } else {
                    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp 
                        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_out;
                    if ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter))) {
                        if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter))) {
                            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter = 0U;
                            if ((0U < (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter))) {
                                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter 
                                    = (7U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter) 
                                             - (IData)(1U)));
                                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__shift_out 
                                    = ((0x40U & (IData)(__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__shift_out)) 
                                       | (0x3fU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__shift_out) 
                                                   >> 1U)));
                                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_out 
                                    = (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__shift_out));
                                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate = 2U;
                            } else if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))) {
                                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_out 
                                    = (1U & ((0x10U 
                                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))
                                              ? ((~ 
                                                  ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                                                   >> 5U)) 
                                                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor))
                                              : (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                                                  >> 5U) 
                                                 | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor)))));
                                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate = 3U;
                            } else {
                                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate = 4U;
                            }
                        } else {
                            __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter 
                                = (0x1fU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter) 
                                            - (IData)(1U)));
                        }
                    } else {
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter = 0xfU;
                    }
                }
            } else if ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate))) {
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_pop = 0U;
                if ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter))) {
                    if ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter))) {
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter = 0U;
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate = 2U;
                    } else {
                        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter 
                            = (0x1fU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter) 
                                        - (IData)(1U)));
                    }
                } else {
                    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter = 0xfU;
                }
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp = 0U;
            } else if ((1U & ((~ (IData)((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count)))) 
                              & ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time) 
                                   == (7U & ((IData)(1U) 
                                             + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__repeat_reg)))) 
                                  | (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error))) 
                                 | (~ (IData)(vlSelf->uart_rx__en0)))))) {
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate = 0U;
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp = 1U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error = 0U;
            } else {
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_pop = 0U;
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp = 1U;
                __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate = 5U;
            }
        } else {
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_pop = 0U;
        }
        if (((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
             & (0xf050U == (0xffffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))) {
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__num_data 
                = vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata;
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cycleCnt = 0ULL;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instrCnt = 0ULL;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_valid = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_cnt_inst = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_timer_64 = 0ULL;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_inst_ld_en = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_ld_paddr = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_ld_vaddr = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_inst_st_en = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_st_paddr = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_st_vaddr = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_st_data = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_csr_rstat_en = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_csr_data = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_wen = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_wdest = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_wdata = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_pc = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_inst = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__trap = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__trap_code = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__delayed_modem_signals = 0U;
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step1_flag = 0U;
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step0_flag = 0U;
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__key_flag = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top = 0U;
        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0U;
        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count = 0U;
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid = 0U;
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid = 0U;
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid = 0U;
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid = 0U;
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__scan_data = 0U;
        vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
            = vlSelf->random_seed;
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid = 0U;
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rbit_counter = 0U;
        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16 = 0U;
        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_xor = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rframing_error = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_error = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity = 0U;
        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_data_in = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing = 0x412U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_op_num = 0x800U;
        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
            = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NANDtag;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_clr_ack = 1U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_cmd_valid 
            = (1U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command);
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__addr_in_die = 0ULL;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm = 1U;
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__virtual_uart_data = 0U;
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_key_r = 0U;
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__io_simu = 0U;
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__num_monitor = 1U;
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__open_trace = 1U;
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__led_rg1_data = 0U;
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__led_rg0_data = 0U;
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__led_data = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fi_di_reg = 0U;
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r = 1U;
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r = 1U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_overrun = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tx_reset = 0U;
        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time = 0U;
        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_bak = 0U;
        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error = 0U;
        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp = 1U;
        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__shift_out = 0U;
        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_out = 0U;
        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_pop = 0U;
        __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__tx2rx_en = 0U;
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__num_data = 0U;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_push) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r;
    } else if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr 
            = (IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas 
                       >> 0xdU));
    } else if (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wlast)) 
                & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en))) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr 
            = vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_next;
    }
    if ((1U & (~ (IData)(vlSelf->aresetn)))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__pipeline_data = 0x1bfffffcU;
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__simu_flag = 0U;
    }
    if (vlSelf->aresetn) {
        if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_push) {
            vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid = 1U;
        } else if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_pop) {
            vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid = 0U;
        }
        if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_push) {
            vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid = 1U;
        } else if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_pop) {
            vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid = 0U;
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_rw) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT1))) {
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_c 
                = (0x3fffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_datai);
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_rw) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT2))) {
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                = (0x1ffffffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_datai);
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_rw) 
             & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT6))) {
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_datai;
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid = 0U;
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_c = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
            = ((3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_type_r2))
                ? 0x8005100U : ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_type_r2))
                                 ? 0x8005000U : ((1U 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_type_r2))
                                                  ? 0x2004b00U
                                                  : 0x2004c00U)));
    }
    if ((1U & (~ (IData)(vlSelf->aresetn)))) {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_type_r2 
            = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_type_r1;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_type_r1 = 0U;
    }
    if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_allow_in) 
          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_ready_go)) 
         & (IData)(vlSelf->aresetn))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__pipeline_data 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC;
    }
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[3U] 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_rdata_reg;
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__timer_r2 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__timer_r1;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__start_dlc 
        = ((IData)(vlSelf->aresetn) & (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we) 
                                        & (0U == (7U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr))) 
                                       & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                                          >> 7U)));
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_flush)))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_valid = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[0U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[1U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[2U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[3U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[4U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[5U] = 0U;
    } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_allow_in) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_valid 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_valid_in;
    }
    if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_allow_in) 
          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_valid_in)) 
         & (IData)(vlSelf->aresetn))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[0U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_ex_true;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[1U] 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[2U] 
            = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[0U]
                : Vsimu_top__ConstPool__CONST_h3cc724c7_0[0U]);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[3U] 
            = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluout_ex)) 
                        << 0x20U) | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__pc_ex))));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[4U] 
            = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluout_ex)) 
                         << 0x20U) | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__pc_ex))) 
                       >> 0x20U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[5U] 
            = ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                  ? (0x7fffffU & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U] 
                                   << 0x11U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[6U] 
                                                >> 0xfU)))
                  : 0U) << 9U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem) 
                                   << 5U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_ex)));
    }
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier) 
            >> 2U) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr1r) 
                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr2r) 
                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr3r) 
                            | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr4r)))));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h4078c6a7__0 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty)) 
           & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_dir)));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit)) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h4078c6a7__0));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h4078c6a7__0 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty)) 
           & (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_dir)));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit 
        = ((0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit)) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h4078c6a7__0) 
              << 1U));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h4078c6a7__0 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty)) 
           & (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_dir)));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit 
        = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit)) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h4078c6a7__0) 
              << 2U));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h4078c6a7__0 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty)) 
           & (3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_dir)));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit)) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h4078c6a7__0) 
              << 3U));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h4078c6a7__0 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty)) 
           & (4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_dir)));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit 
        = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit)) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h4078c6a7__0) 
              << 4U));
    vlSelf->__VdfgTmp_hcd04e225__0 = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom];
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__key_count 
        = __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__key_count;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier) 
            >> 1U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5r));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_pnd 
        = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_pnd;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_pnd 
        = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_pnd;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_pnd 
        = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_pnd;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_pnd 
        = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_pnd;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_pnd 
        = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_pnd;
    vlSelf->simu_top__DOT__soc__DOT__cpu_wvalid = (
                                                   (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__wdata_rcv)) 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT____VdfgTmp_hf519d2e1__0));
    vlSelf->simu_top__DOT__soc__DOT__cpu_awvalid = 
        ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__addr_rcv)) 
         & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT____VdfgTmp_hf519d2e1__0));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_valid 
        = ((~ ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_flush))) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_valid_in));
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__count 
        = __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__count;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate 
        = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b 
        = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_xor 
        = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_xor;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift 
        = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ 
        = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE 
        = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE 
        = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
        = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command;
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
        vlSelf->simu_top__DOT__soc__DOT__m0_rlast = 
            (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast) 
                   >> 3U));
        vlSelf->simu_top__DOT__soc__DOT__m0_rvalid 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid) 
                     >> 3U));
    }
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen_last 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen) 
           == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rcur));
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r1 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin;
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r1 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r;
    if (vlSelf->aresetn) {
        if ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state_count))) {
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state 
                = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__next_state;
        }
        if (vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer) {
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin = 1U;
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r 
                = vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata;
        } else if (vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r2) {
            vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin = 0U;
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state = 0U;
        vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin = 0U;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_go) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wdata_r;
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wlast = 1U;
    }
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top)));
    if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_push) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
            = vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push_data;
    }
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_arready) 
            << 4U) | ((8U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid)) 
                             << 3U)) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_arready) 
                                         << 2U) | (
                                                   ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_arready) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid)))))));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_awready) 
            << 4U) | ((8U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid)) 
                             << 3U)) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_awready) 
                                         << 2U) | (
                                                   ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_awready) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid)))))));
    vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random_next 
        = ((0x7ffffeU & (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                         << 1U)) | (1U & VL_REDXOR_32(
                                                      (0x420000U 
                                                       & vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random))));
    vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h4bbe5f71__0 
        = (1U & ((~ (IData)(vlSelf->enable_delay)) 
                 | ((vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                     >> 4U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_w_disable))));
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
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__bvalid_group_0 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_bvalid) 
            << 2U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_bvalid) 
                       << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid)));
    vlSelf->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__pre_num 
        = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_pre_sel;
    vlSelf->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__valid 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_bvalid) 
            << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid));
    vlSelf->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__Vfuncout 
        = ((1U == (IData)(vlSelf->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__valid))
            ? 3U : ((2U == (IData)(vlSelf->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__valid))
                     ? 4U : ((4U == (IData)(vlSelf->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__valid))
                              ? 5U : ((3U == (IData)(vlSelf->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__valid))
                                       ? ((3U != (IData)(vlSelf->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__pre_num))
                                           ? 3U : 4U)
                                       : ((6U == (IData)(vlSelf->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__valid))
                                           ? ((4U != (IData)(vlSelf->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__pre_num))
                                               ? 4U
                                               : 5U)
                                           : ((5U == (IData)(vlSelf->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__valid))
                                               ? ((5U 
                                                   != (IData)(vlSelf->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__pre_num))
                                                   ? 5U
                                                   : 3U)
                                               : ((7U 
                                                   == (IData)(vlSelf->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__valid))
                                                   ? 
                                                  ((3U 
                                                    == (IData)(vlSelf->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__pre_num))
                                                    ? 4U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__pre_num))
                                                     ? 5U
                                                     : 3U))
                                                   : 7U)))))));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_1 
        = vlSelf->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__Vfuncout;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_7 
        = (7U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1 
        = (0xfU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16) 
                   - (IData)(1U)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_0 
        = (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NANDtag 
        = ((IData)(vlSelf->aresetn) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_cmd_valid));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r1 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r0;
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__timer_r1 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__timer;
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
    if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_push) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas 
            = vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push_data;
    }
    vlSelf->num_monitor = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__num_monitor;
    vlSelf->open_trace = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__open_trace;
    vlSelf->led_rg1 = (3U & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__led_rg1_data);
    vlSelf->led_rg0 = (3U & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__led_rg0_data);
    vlSelf->led = (0xffffU & vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__led_data);
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
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wstrb_mem_mem 
            = (0xfU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[5U] 
                       >> 5U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluout_mem 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[4U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_mem 
            = (0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[5U]);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__is_unsign_load_mem 
            = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[5U] 
                     >> 0x1bU));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memWriteEn_mem 
            = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[5U] 
               >> 0x1fU);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memRead_mem 
            = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[5U] 
                     >> 0x1eU));
    } else {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[1U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[3U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[4U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[5U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wstrb_mem_mem = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluout_mem = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_mem = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__is_unsign_load_mem = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memWriteEn_mem = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memRead_mem = 0U;
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_flush)))) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[0U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[1U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[2U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[3U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[4U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[5U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[6U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U] = 0U;
    } else if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_allow_in) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_valid_in;
    }
    if ((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_allow_in) 
          & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_valid_in)) 
         & (IData)(vlSelf->aresetn))) {
        __Vtemp_h513edced__0[5U] = (((IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id)) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                (((0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & (IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                               >> 0xaU)))) 
                                                                  & ((0x1fU 
                                                                      & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                                >> 0xaU))) 
                                                                     == (IData)(vlSelf->debug0_wb_rf_wnum)))
                                                                  ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb
                                                                  : 
                                                                 ((0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & (IData)(
                                                                              (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                               >> 0xaU))))
                                                                   ? 
                                                                  vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf
                                                                  [
                                                                  (0x1fU 
                                                                   & (IData)(
                                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                              >> 0xaU)))]
                                                                   : 0U)))))) 
                                     >> 0x11U) | ((IData)(
                                                          ((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              (((0U 
                                                                                != 
                                                                                (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                                >> 0xaU)))) 
                                                                                & ((0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                                >> 0xaU))) 
                                                                                == (IData)(vlSelf->debug0_wb_rf_wnum)))
                                                                                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb
                                                                                : 
                                                                               ((0U 
                                                                                != 
                                                                                (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                                >> 0xaU))))
                                                                                 ? 
                                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf
                                                                                [
                                                                                (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                                >> 0xaU)))]
                                                                                 : 0U))))) 
                                                           >> 0x20U)) 
                                                  << 0xfU));
        __Vtemp_hf3c74c74__0[6U] = ((0xffff8000U & 
                                     (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__regWriteDataSel) 
                                       << 0x1fU) | 
                                      ((((IData)((0x20000000ULL 
                                                  == 
                                                  (0xff000000ULL 
                                                   & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out))) 
                                         << 0x1cU) 
                                        | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_W_TYPE) 
                                            << 0x1bU) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_HU_TYPE) 
                                               << 0x1aU) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_H_TYPE) 
                                                  << 0x19U) 
                                                 | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_BU_TYPE) 
                                                     << 0x18U) 
                                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_B_TYPE) 
                                                       << 0x17U)))))) 
                                       | (((IData)(
                                                   (0x21000000ULL 
                                                    == 
                                                    (0xff000000ULL 
                                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out))) 
                                           << 0x12U) 
                                          | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ST_W_TYPE) 
                                              << 0x11U) 
                                             | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ST_H_TYPE) 
                                                 << 0x10U) 
                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ST_B_TYPE) 
                                                   << 0xfU))))))) 
                                    | ((IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   (((0U 
                                                                      != 
                                                                      (0x1fU 
                                                                       & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                                >> 0xaU)))) 
                                                                     & ((0x1fU 
                                                                         & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                                >> 0xaU))) 
                                                                        == (IData)(vlSelf->debug0_wb_rf_wnum)))
                                                                     ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb
                                                                     : 
                                                                    ((0U 
                                                                      != 
                                                                      (0x1fU 
                                                                       & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                                >> 0xaU))))
                                                                      ? 
                                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf
                                                                     [
                                                                     (0x1fU 
                                                                      & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                                >> 0xaU)))]
                                                                      : 0U))))) 
                                                >> 0x20U)) 
                                       >> 0x11U));
        __Vtemp_hf3c74c74__0[7U] = (0x7fffU & ((0x7fffU 
                                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_regimm_inst) 
                                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_reg_inst) 
                                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_shamt_inst) 
                                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__regWriteDataSel) 
                                                            | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BL_TYPE) 
                                                               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_JIRL_TYPE) 
                                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_u_inst)))))))) 
                                               | ((0x7fffU 
                                                   & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__regWriteDataSel) 
                                                      >> 1U)) 
                                                  | ((0x7fffU 
                                                      & (((IData)(
                                                                  (0x20000000ULL 
                                                                   == 
                                                                   (0xff000000ULL 
                                                                    & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out))) 
                                                          >> 4U) 
                                                         | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_W_TYPE) 
                                                             >> 5U) 
                                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_HU_TYPE) 
                                                                >> 6U) 
                                                               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_H_TYPE) 
                                                                   >> 7U) 
                                                                  | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_BU_TYPE) 
                                                                      >> 8U) 
                                                                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_B_TYPE) 
                                                                        >> 9U))))))) 
                                                     | ((0x7fffU 
                                                         & ((IData)(
                                                                    (0x21000000ULL 
                                                                     == 
                                                                     (0xff000000ULL 
                                                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out))) 
                                                            >> 0xeU)) 
                                                        | ((0x7fffU 
                                                            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ST_W_TYPE) 
                                                               >> 0xfU)) 
                                                           | ((0x7fffU 
                                                               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ST_H_TYPE) 
                                                                  >> 0x10U)) 
                                                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ST_B_TYPE) 
                                                                 >> 0x11U))))))));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[0U] 
            = (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[1U] 
            = (IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__immout_id)) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                     >> 0x20U)))));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[2U] 
            = (IData)(((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__immout_id)) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                      >> 0x20U)))) 
                       >> 0x20U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[3U] 
            = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_id 
                << 0xfU) | ((0x7c00U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                 >> 5U)) 
                                        << 0xaU)) | 
                            ((0x3e0U & ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                 >> 0xaU)) 
                                        << 5U)) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_id))));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[4U] 
            = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_id 
                >> 0x11U) | ((IData)((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id)) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (((0U 
                                                                      != 
                                                                      (0x1fU 
                                                                       & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                                >> 0xaU)))) 
                                                                     & ((0x1fU 
                                                                         & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                                >> 0xaU))) 
                                                                        == (IData)(vlSelf->debug0_wb_rf_wnum)))
                                                                     ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb
                                                                     : 
                                                                    ((0U 
                                                                      != 
                                                                      (0x1fU 
                                                                       & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                                >> 0xaU))))
                                                                      ? 
                                                                     vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf
                                                                     [
                                                                     (0x1fU 
                                                                      & (IData)(
                                                                                (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                                >> 0xaU)))]
                                                                      : 0U)))))) 
                             << 0xfU));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[5U] 
            = __Vtemp_h513edced__0[5U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[6U] 
            = __Vtemp_hf3c74c74__0[6U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U] 
            = ((0xffffffc0U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__alusel1) 
                                << 0xcU) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__alusel2) 
                                             << 0xbU) 
                                            | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__aluctrl) 
                                               << 6U)))) 
               | ((0xfffffffeU & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_store_inst) 
                                   << 5U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__regWriteDataSel) 
                                              << 4U) 
                                             | (((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_B_TYPE) 
                                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_BU_TYPE) 
                                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ST_B_TYPE)))
                                                   ? 0U
                                                   : 
                                                  (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_H_TYPE) 
                                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_HU_TYPE) 
                                                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ST_H_TYPE)))
                                                    ? 1U
                                                    : 
                                                   (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_W_TYPE) 
                                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ST_W_TYPE))
                                                     ? 2U
                                                     : 0U))) 
                                                 << 2U) 
                                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__is_unsign_load_id) 
                                                   << 1U))))) 
                  | __Vtemp_hf3c74c74__0[7U]));
    }
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step1_count 
        = __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__step1_count;
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step0_count 
        = __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__step0_count;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop 
        = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_push_pulse 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push_q)) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count 
        = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter 
        = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter 
        = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor 
        = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__shift_out 
        = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__shift_out;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_out 
        = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_out;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error 
        = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate 
        = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count 
        = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time 
        = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time;
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
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_control_data_wb 
            = (0x3ffffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[6U] 
                           >> 9U));
        vlSelf->debug0_wb_rf_wnum = (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[6U] 
                                              >> 4U));
        vlSelf->debug0_wb_rf_wen = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[6U] 
                                          >> 0x1aU));
    } else {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[0U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[1U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[4U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[5U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[6U] = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_control_data_wb = 0U;
        vlSelf->debug0_wb_rf_wnum = 0U;
        vlSelf->debug0_wb_rf_wen = 0U;
    }
    vlSelf->simu_top__DOT__soc__DOT__m0_wvalid = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_wvalid) 
                                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h4bbe5f71__0));
    vlSelf->simu_top__DOT__soc__DOT__m0_arvalid = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_arvalid) 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h34d16b8e__0));
    vlSelf->simu_top__DOT__soc__DOT__m0_awvalid = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu_awvalid) 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_hb251d2f0__0));
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
        vlSelf->simu_top__DOT__soc__DOT__m0_rlast = 
            (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast) 
                   >> 4U));
        vlSelf->simu_top__DOT__soc__DOT__m0_rvalid 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid) 
                     >> 4U));
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_hee60d8fe__1 
            = vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h76518f96__0;
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
            = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready)) 
               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_hee60d8fe__1) 
                  << 4U));
    }
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_bvalid) 
            << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid) 
                       << 3U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__bvalid_group_0)));
    vlSelf->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__pre_num 
        = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_pre_sel;
    vlSelf->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__valid 
        = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__bvalid_group_0;
    vlSelf->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__Vfuncout 
        = ((1U == (IData)(vlSelf->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__valid))
            ? 0U : ((2U == (IData)(vlSelf->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__valid))
                     ? 1U : ((4U == (IData)(vlSelf->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__valid))
                              ? 2U : ((3U == (IData)(vlSelf->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__valid))
                                       ? ((0U != (IData)(vlSelf->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__pre_num))
                                           ? 0U : 1U)
                                       : ((6U == (IData)(vlSelf->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__valid))
                                           ? ((1U != (IData)(vlSelf->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__pre_num))
                                               ? 1U
                                               : 2U)
                                           : ((5U == (IData)(vlSelf->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__valid))
                                               ? ((2U 
                                                   != (IData)(vlSelf->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__pre_num))
                                                   ? 2U
                                                   : 0U)
                                               : ((7U 
                                                   == (IData)(vlSelf->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__valid))
                                                   ? 
                                                  ((0U 
                                                    == (IData)(vlSelf->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__pre_num))
                                                    ? 1U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__pre_num))
                                                     ? 2U
                                                     : 0U))
                                                   : 7U)))))));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_0 
        = vlSelf->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__Vfuncout;
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__timer 
        = __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__timer;
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state_count 
        = __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__state_count;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__MEM_forward_valid 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_valid) 
            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[5U] 
               >> 0x1aU)) & (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_mem)));
    if (__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf__v0) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf__v0] 
            = __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf__v0;
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__pipeline_valid)
            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__pipeline_data
            : 0x100000ULL);
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
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0 
        = ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count)) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_push_pulse));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count) 
              >= (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__trigger_level)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier) 
           & ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t)) 
              & (0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____VdfgTmp_hcb11cbc5__0 
        = ((~ (IData)((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt)))) 
           & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_out 
        = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram
        [vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom];
    vlSelf->debug0_wb_pc = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[4U] 
                             << 0x1cU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                                          >> 4U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb 
        = ((0x10000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_control_data_wb)
            ? ((0x10000U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_control_data_wb)
                ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_valid)
                    ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[5U] 
                        << 0x1cU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[4U] 
                                     >> 4U)) : 0U) : 0U)
            : ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_valid)
                ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[6U] 
                    << 0x1cU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[5U] 
                                 >> 4U)) : 0U));
    vlSelf->num_data = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__num_data;
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
    vlSelf->ram_ren = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid) 
                       & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rvalid)) 
                          | (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready)));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_valid) 
           & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rvalid)) 
              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                 >> 3U)));
    if (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_push) {
        vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
            = vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push_data;
    }
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
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_allow_out 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid)) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_valid));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_allow_out 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid)) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_valid));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r0 = 0U;
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
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__WB_forward_valid 
        = ((IData)(vlSelf->debug0_wb_rf_wen) & (0U 
                                                != (IData)(vlSelf->debug0_wb_rf_wnum)));
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
    if (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid) {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__size_mem_ex 
            = (3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U] 
                     >> 2U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__pc_ex 
            = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[1U];
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_no_ex 
            = (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[3U] 
                        >> 0xaU));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_ex 
            = (0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[3U]);
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rk_no_ex 
            = (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[3U] 
                        >> 5U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluctrl_ex 
            = (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U] 
                        >> 6U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memWriteEn_ex 
            = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U] 
                     >> 5U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memRead_ex 
            = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U] 
                     >> 4U));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alusel1_ex 
            = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U] 
                     >> 0xcU));
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alusel2_ex 
            = (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U] 
                     >> 0xbU));
    } else {
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__size_mem_ex = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__pc_ex = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_no_ex = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_ex = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rk_no_ex = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluctrl_ex = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memWriteEn_ex = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memRead_ex = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alusel1_ex = 0U;
        vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alusel2_ex = 0U;
    }
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
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BLT_TYPE 
        = (IData)((0x60000000ULL == (0xfc000000ULL 
                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BGE_TYPE 
        = (IData)((0x64000000ULL == (0xfc000000ULL 
                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BEQ_TYPE 
        = (IData)((0x58000000ULL == (0xfc000000ULL 
                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BNE_TYPE 
        = (IData)((0x5c000000ULL == (0xfc000000ULL 
                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LUI_TYPE 
        = (IData)((0x14000000ULL == (0xfe000000ULL 
                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SLTI_TYPE 
        = (IData)((0x2000000ULL == (0xffc00000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SLTUI_TYPE 
        = (IData)((0x2400000ULL == (0xffc00000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_PCADDU12I_TYPE 
        = (IData)((0x1c000000ULL == (0xfe000000ULL 
                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BLTU_TYPE 
        = (IData)((0x68000000ULL == (0xfc000000ULL 
                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BGEU_TYPE 
        = (IData)((0x6c000000ULL == (0xfc000000ULL 
                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ANDI_TYPE 
        = (IData)((0x3400000ULL == (0xffc00000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ORI_TYPE 
        = (IData)((0x3800000ULL == (0xffc00000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_XORI_TYPE 
        = (IData)((0x3c00000ULL == (0xffc00000ULL & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_JIRL_TYPE 
        = (IData)((0x4c000000ULL == (0xfc000000ULL 
                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BL_TYPE 
        = (IData)((0x54000000ULL == (0xfc000000ULL 
                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____VdfgTmp_hcb11cbc5__0) 
           & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
        = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    if (__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0) {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[__Vdlyvdim0__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0] 
            = __Vdlyvval__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    }
    vlSelf->debug0_wb_rf_wdata = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id 
        = (((0U != (0x1fU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                     >> 5U)))) & ((0x1fU 
                                                   & (IData)(
                                                             (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                              >> 5U))) 
                                                  == (IData)(vlSelf->debug0_wb_rf_wnum)))
            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb
            : ((0U != (0x1fU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                        >> 5U)))) ? 
               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf
               [(0x1fU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                  >> 5U)))] : 0U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r 
        = __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r;
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop 
        = ((IData)(vlSelf->ram_ren) & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen_last));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen_last));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h78044575__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog)) 
            & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel))) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog) 
              & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel_reg))));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit 
        = ((0x1eU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit)) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h78044575__0));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h78044575__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog)) 
            & (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel))) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog) 
              & (1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel_reg))));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit 
        = ((0x1dU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit)) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h78044575__0) 
              << 1U));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h78044575__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog)) 
            & (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel))) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog) 
              & (2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel_reg))));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit 
        = ((0x1bU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit)) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h78044575__0) 
              << 2U));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h78044575__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog)) 
            & (3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel))) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog) 
              & (3U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel_reg))));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit 
        = ((0x17U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit)) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h78044575__0) 
              << 3U));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h78044575__0 
        = (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog)) 
            & (4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel))) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog) 
              & (4U == (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel_reg))));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit 
        = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit)) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h78044575__0) 
              << 4U));
    vlSelf->simu_top__DOT__soc__DOT__s0_wready = (1U 
                                                  & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wvalid)) 
                                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_allow_out)));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wvalid) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_allow_out) 
              & (IData)(vlSelf->aresetn)));
    vlSelf->simu_top__DOT__soc__DOT__conf_s_wready 
        = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wvalid)) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_allow_out)));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wvalid) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_allow_out) 
              & (IData)(vlSelf->aresetn)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY 
        = (1U & ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_number))
                  ? (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r1)
                  : ((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_number))
                      ? (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT____VdfgTmp_h559fe0c2__0)
                      : ((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_number))
                          ? (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT____VdfgTmp_h2fe3549b__0)
                          : ((3U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_number)) 
                             | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT____VdfgTmp_hea0d93a3__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____VdfgTmp_hb2577766__0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memRead_ex) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memWriteEn_ex));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alusel1_ex)
            ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alusel1_ex)
                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__pc_ex
                : 0U) : (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__MEM_forward_valid) 
                          & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_mem) 
                             == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_no_ex)))
                          ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluout_mem
                          : (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__WB_forward_valid) 
                              & ((IData)(vlSelf->debug0_wb_rf_wnum) 
                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_no_ex)))
                              ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb
                              : ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                  ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[6U] 
                                      << 0x11U) | (
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[5U] 
                                                   >> 0xfU))
                                  : 0U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_ex_true 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__MEM_forward_valid) 
            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_mem) 
               == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_ex)))
            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluout_mem
            : (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__WB_forward_valid) 
                & ((IData)(vlSelf->debug0_wb_rf_wnum) 
                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_ex)))
                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb
                : ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                    ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[4U] 
                        << 0x11U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[3U] 
                                     >> 0xfU)) : 0U)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT____VdfgTmp_hf7cffa19__0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_ex) 
           == (0x1fU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                >> 5U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alusel2_ex)
            ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alusel2_ex)
                ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                    ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[2U]
                    : 0U) : 0U) : (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__MEM_forward_valid) 
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
                                            : 0U))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divEn 
        = ((0xeU == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluctrl_ex)) 
           | ((0x10U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluctrl_ex)) 
              | ((0xfU == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluctrl_ex)) 
                 | (0x11U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluctrl_ex)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_cin 
        = (1U & (IData)(((0U == (0x1cU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluctrl_ex))) 
                         & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluctrl_ex) 
                             >> 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluctrl_ex)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divUnsigned 
        = ((0x10U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluctrl_ex)) 
           | (0x11U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluctrl_ex)));
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
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_store_inst 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ST_B_TYPE) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ST_H_TYPE) 
              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ST_W_TYPE)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__is_unsign_load_id 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_BU_TYPE) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_HU_TYPE));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_u_inst 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LUI_TYPE) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_PCADDU12I_TYPE));
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
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_regimm_inst 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SLTI_TYPE) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SLTUI_TYPE) 
              | ((IData)((0x2800000ULL == (0xffc00000ULL 
                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out))) 
                 | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ANDI_TYPE) 
                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ORI_TYPE) 
                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_XORI_TYPE))))));
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
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_id 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BL_TYPE)
            ? 1U : (0x1fU & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r2 
        = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r1;
    if (vlSelf->aresetn) {
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we) 
             & (2U == (7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)))) {
            if ((1U & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                          >> 7U)))) {
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_reset 
                    = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_datai) 
                             >> 1U));
            }
        } else {
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_reset = 0U;
        }
        if ((1U & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we) 
                      & (7U == (7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)))))) {
            if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__enable) {
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_en_reg 
                    = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                             >> 4U));
            }
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__repeat_reg 
                = (7U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                         >> 5U));
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_reset = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__repeat_reg = 4U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_en_reg = 0U;
    }
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT____VdfgTmp_hd44064a5__0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time) 
           == (7U & ((IData)(1U) + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__repeat_reg))));
    if (vlSelf->aresetn) {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__enable 
            = ((0U != vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl) 
               & (~ (IData)((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc)))));
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we) 
             & (7U == (7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)))) {
            if ((1U & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                          >> 7U)))) {
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg 
                    = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_datai;
            }
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we) 
             & (1U == (7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)))) {
            if ((0x80U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))) {
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl 
                    = ((0xff00ffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl) 
                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_datai) 
                          << 8U));
            }
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we) 
             & (2U == (7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)))) {
            if ((0x80U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))) {
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl 
                    = ((0xffffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl) 
                       | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_datai) 
                          << 0x10U));
            }
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we) 
             & (0U == (7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)))) {
            if ((0x80U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))) {
                vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl 
                    = ((0xffff00U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl) 
                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_datai));
            }
        }
        if (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we) 
             & (3U == (7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)))) {
            vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr 
                = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_datai;
        }
    } else {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__enable = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg = 0U;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl 
            = (0xff00ffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl);
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl 
            = (0xffffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl);
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl 
            = (0xffff00U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl);
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr = 3U;
    }
    if (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant) {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_enab 
            = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_dma;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_psel 
            = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_dma;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_rw 
            = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_rw_dma;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_datai 
            = (0xffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_wdata_dma);
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr 
            = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_addr_dma;
    } else {
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_enab 
            = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_psel 
            = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_rw 
            = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr;
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_datai 
            = (0xffU & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datai_cpu));
        vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr 
            = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr;
    }
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id_true 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__MEM_forward_valid) 
            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_mem) 
               == (0x1fU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                    >> 5U))))) ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluout_mem
            : (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__WB_forward_valid) 
                & ((IData)(vlSelf->debug0_wb_rf_wnum) 
                   == (0x1fU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                        >> 5U))))) ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb
                : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id));
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
    if (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_push) {
        vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas 
            = vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push_data;
    }
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____VdfgTmp_h58a8c0e9__0 
        = ((0x1fafU == (0x1fffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r 
                                   >> 0x10U))) | (0x1fd0U 
                                                  == 
                                                  (0x1fffU 
                                                   & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r 
                                                      >> 0x10U))));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_pop 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_pop 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop));
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
        vlSelf->simu_top__DOT__soc__DOT__m0_bvalid 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid) 
                     >> 3U));
    }
    if ((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6c6cb05b__1 
            = vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h765eb7cb__0;
        vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready 
            = ((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready)) 
               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound_h6c6cb05b__1) 
                  << 4U));
        vlSelf->simu_top__DOT__soc__DOT__m0_bvalid 
            = (1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid) 
                     >> 4U));
    }
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_go 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__s0_wready));
    vlSelf->ram_wen = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wstrb) 
                       & (- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en))));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wlast));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_wready) 
            << 4U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_wready) 
                       << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_wready) 
                                  << 2U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_wready) 
                                             << 1U) 
                                            | (IData)(vlSelf->simu_top__DOT__soc__DOT__s0_wready)))));
    vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wstrb) 
           & (- (IData)((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__mul_result 
        = ((0xbU == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluctrl_ex))
            ? ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)) 
               * (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)))
            : ((0xcU == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluctrl_ex))
                ? VL_MULS_QQQ(64, (((QData)((IData)(
                                                    (- (IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                                                                >> 0x1fU))))) 
                                    << 0x20U) | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex))), 
                              (((QData)((IData)((- (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex 
                                                            >> 0x1fU))))) 
                                << 0x20U) | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex))))
                : ((0xdU == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluctrl_ex))
                    ? ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)) 
                       * (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)))
                    : 0ULL)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_sign 
        = ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
            ^ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex) 
           >> 0x1fU);
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
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__regWriteDataSel 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_B_TYPE) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_H_TYPE) 
              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_W_TYPE) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__is_unsign_load_id))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT____VdfgTmp_hfa3cf28f__0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_reg_inst) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_shamt_inst) 
              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_regimm_inst)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT____VdfgTmp_h2a69b9a6__0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_ex) 
           == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_id));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_id 
        = (((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_id)) 
            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_id) 
               == (IData)(vlSelf->debug0_wb_rf_wnum)))
            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb
            : ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_id))
                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf
               [vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_id]
                : 0U));
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r1 
        = __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r1;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wdata_r 
        = __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wdata_r;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc 
        = __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc;
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push_data 
        = (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r)) 
            << 0xdU) | (QData)((IData)(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_size_r) 
                                        << 8U))));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_go 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
            >> 3U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_wready));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____VdfgTmp_h58a8c0e9__0) 
            << 3U) | (((0x1fe0U == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r 
                                    >> 0x10U)) << 2U) 
                      | (1U & (~ ((0x1fe0U == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r 
                                               >> 0x10U)) 
                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____VdfgTmp_h58a8c0e9__0))))));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____VdfgTmp_h58a8c0e9__0) 
            << 3U) | (((0x1fe0U == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r 
                                    >> 0x10U)) << 2U) 
                      | (1U & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____VdfgTmp_h58a8c0e9__0) 
                                  | (0x1fe0U == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r 
                                                 >> 0x10U)))))));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
            >> 3U) & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__data_back 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__addr_rcv) 
           & (((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rvalid) 
               & (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h76518f96__0)) 
              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_bvalid) 
                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h765eb7cb__0))));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_pop 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop));
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
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer 
        = ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
           & (0xe000U == (0xffffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)));
    vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_uart_valid 
        = ((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
           & (0xff10U == (0xffffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_b 
        = ((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluctrl_ex))
            ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluctrl_ex))
                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex
                : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluctrl_ex))
                    ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex
                    : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluctrl_ex))
                        ? ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluctrl_ex))
                            ? 4U : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)
                        : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)))
            : ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluctrl_ex))
                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex
                : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluctrl_ex))
                    ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex
                    : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluctrl_ex))
                        ? ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluctrl_ex))
                            ? (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)
                            : (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex))
                        : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluctrl_ex))
                            ? (~ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)
                            : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_result 
        = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
           + (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_b 
              + (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_cin)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluout_ex 
        = ((0x10U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluctrl_ex))
            ? ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluctrl_ex))
                ? 0U : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluctrl_ex))
                         ? 0U : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluctrl_ex))
                                  ? ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluctrl_ex))
                                      ? ((IData)(4U) 
                                         + vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)
                                      : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)
                                  : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluctrl_ex))
                                      ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__remainder
                                      : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__quotient))))
            : ((8U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluctrl_ex))
                ? ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluctrl_ex))
                    ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluctrl_ex))
                        ? ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluctrl_ex))
                            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__remainder
                            : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__quotient)
                        : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluctrl_ex))
                            ? (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__mul_result 
                                       >> 0x20U)) : (IData)(
                                                            (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__mul_result 
                                                             >> 0x20U))))
                    : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluctrl_ex))
                        ? ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluctrl_ex))
                            ? (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__mul_result)
                            : VL_SHIFTRS_III(32,32,5, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex, 
                                             (0x1fU 
                                              & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)))
                        : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluctrl_ex))
                            ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                               >> (0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex))
                            : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                               << (0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)))))
                : ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluctrl_ex))
                    ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluctrl_ex))
                        ? ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluctrl_ex))
                            ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                               ^ vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)
                            : (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                               | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex))
                        : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluctrl_ex))
                            ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                               & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)
                            : (~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                                  | vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex))))
                    : ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluctrl_ex))
                        ? ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluctrl_ex))
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
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__minuend_next 
        = ((1U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__difference 
                          >> 0x20U))) ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__minuend_shifted
            : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__difference);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__itype 
        = ((1U & (VL_EXTENDS_II(3,1, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__regWriteDataSel)) 
                  | (VL_EXTENDS_II(3,1, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_store_inst)) 
                     | VL_EXTENDS_II(3,1, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_regimm_inst))))) 
           | ((4U & VL_EXTENDS_II(3,1, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_u_inst))) 
              | ((3U & VL_EXTENDS_II(3,1, ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_JIRL_TYPE) 
                                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_branch_inst)))) 
                 | (6U & VL_EXTENDS_II(3,1, (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_b_inst))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT____VdfgTmp_h9c888c86__0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__regWriteDataSel) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_store_inst));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_id_true 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__MEM_forward_valid) 
            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_mem) 
               == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_id)))
            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluout_mem
            : (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__WB_forward_valid) 
                & ((IData)(vlSelf->debug0_wb_rf_wnum) 
                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_id)))
                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb
                : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_id));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____VdfgTmp_h8af93b88__0 
        = ((0U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg))) 
           | (1U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg))));
    vlSelf->uart_rx__en0 = ((2U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg))) 
                            | (3U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg))));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wlast));
    vlSelf->__Vtableidx1 = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir 
        = Vsimu_top__ConstPool__TABLE_hfbff4245_0[vlSelf->__Vtableidx1];
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int 
        = Vsimu_top__ConstPool__TABLE_h14a2fcf8_0[vlSelf->__Vtableidx1];
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
    vlSelf->__Vtableidx2 = vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit;
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir 
        = Vsimu_top__ConstPool__TABLE_hfbff4245_0[vlSelf->__Vtableidx2];
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int 
        = Vsimu_top__ConstPool__TABLE_h14a2fcf8_0[vlSelf->__Vtableidx2];
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
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_pop 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_pop 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_push 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid) 
              & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop)) 
                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid)))));
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
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_dir_del 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty)) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wvalid) 
              & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wready)));
    vlSelf->write_uart_valid = vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_uart_valid;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__immout_id 
        = ((4U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__itype))
            ? ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__itype))
                ? ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__itype))
                    ? 0U : VL_EXTENDS_II(32,28, ((0xffc0000U 
                                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out) 
                                                     << 0x12U)) 
                                                 | (0x3fffcU 
                                                    & ((IData)(
                                                               (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                >> 0xaU)) 
                                                       << 2U)))))
                : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__itype))
                    ? VL_EXTENDS_II(32,21, ((0x1f0000U 
                                             & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out) 
                                                << 0x10U)) 
                                            | (0xffffU 
                                               & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0xaU)))))
                    : ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                >> 5U)) << 0xcU))) : 
           ((2U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__itype))
             ? ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__itype))
                 ? VL_EXTENDS_II(32,18, (0x3fffcU & 
                                         ((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                   >> 0xaU)) 
                                          << 2U))) : 
                VL_EXTENDS_II(32,16, (0xfffcU & ((IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0xaU)) 
                                                 << 2U))))
             : ((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__itype))
                 ? (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ORI_TYPE) 
                     | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_XORI_TYPE) 
                        | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ANDI_TYPE)))
                     ? (0xfffU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                          >> 0xaU)))
                     : VL_EXTENDS_II(32,12, (0xfffU 
                                             & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 0xaU)))))
                 : (0x1fU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                     >> 0xaU))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT____VdfgTmp_hffea2556__0 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_u_inst) 
           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT____VdfgTmp_h9c888c86__0));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__eq 
        = (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_id_true 
           == vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id_true);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__lt 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__unsignBranchCmp) 
            & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id_true 
               < vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_id_true)) 
           | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__unsignBranchCmp)) 
              & VL_LTS_III(32, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id_true, vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_id_true)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tx_en 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____VdfgTmp_h8af93b88__0) 
           | ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                  >> 2U)) & (IData)(vlSelf->uart_rx__en0)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5 
        = (((~ (IData)(vlSelf->uart_rx__en0)) | ((0U 
                                                  == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate)) 
                                                 & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error)) 
                                                    | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error) 
                                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT____VdfgTmp_hd44064a5__0))))) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____VdfgTmp_hcb11cbc5__0));
    vlSelf->simu_top__DOT__uart_rx__out__strong__out3 
        = ((IData)(vlSelf->uart_rx__en0) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_reg) 
                                            ^ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                                               >> 3U)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__max_repeat_time 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT____VdfgTmp_hd44064a5__0) 
           & ((IData)(vlSelf->uart_rx__en0) & (2U == 
                                               (3U 
                                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__rx_en 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____VdfgTmp_h8af93b88__0) 
           | ((IData)(vlSelf->uart_rx__en0) & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                                               >> 2U)));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_pop 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_push 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid) 
              & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop)) 
                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid)))));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_dir_ins 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awready) 
              & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awvalid)));
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_push 
        = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid)) 
                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                    >> 3U)));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_push 
        = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid)) 
                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid)));
    vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_dir_ins 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
           & ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arready) 
              & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arvalid)));
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
    vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push 
        = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid)) 
                 & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                    >> 3U)));
    vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_push 
        = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid)) 
                 & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_valid_in 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__pipeline_valid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_ready_go));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_valid_in 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_valid) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_ready_go));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex 
        = ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluctrl_ex))
            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluout_ex
            : 0U);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__branchPC 
        = (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_JIRL_TYPE)
             ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id_true
             : (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                        >> 0x20U))) + vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__immout_id);
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__alusel2 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_shamt_inst) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_regimm_inst) 
              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT____VdfgTmp_hffea2556__0)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_PC_BRANCH 
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
    vlSelf->uart_rx = ((IData)(vlSelf->uart_rx__en0) 
                       & (IData)(vlSelf->simu_top__DOT__uart_rx__out__strong__out3));
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
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_next 
        = (0x1ffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_cnt) 
                     + (0xffU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl 
                                 >> 0x10U))));
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
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_allow_in 
        = (1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_valid)) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_valid_in)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem 
        = ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__size_mem_ex))
            ? ((2U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex)
                ? ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex)
                    ? 8U : 4U) : ((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex)
                                   ? 2U : 1U)) : ((1U 
                                                   == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__size_mem_ex))
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex))
                                                    ? 3U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex))
                                                     ? 0xcU
                                                     : 3U))
                                                   : 0xfU));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT__stall 
        = ((((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memRead_ex) 
               | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid) 
                  & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U])) 
              & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT____VdfgTmp_hf7cffa19__0) 
                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT____VdfgTmp_h2a69b9a6__0))) 
             | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memRead_mem) 
                & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_mem) 
                    == (0x1fU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                         >> 5U)))) 
                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_id) 
                      == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_mem))))) 
            & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_branch_inst)) 
           | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memRead_ex) 
              & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_branch_inst)) 
                 & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__alusel1)) 
                     & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT____VdfgTmp_hf7cffa19__0)) 
                    | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__alusel2)) 
                        & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_ex) 
                           == (0x1fU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                >> 0xaU))))) 
                       | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT____VdfgTmp_h2a69b9a6__0))))));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__branchPC_temp_valid)
            ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__branchPC_temp
            : ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_PC_BRANCH)
                ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_PC_BRANCH)
                    ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__branchPC
                    : 0U) : ((IData)(4U) + vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__pipeline_data)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_toggle 
        = (1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_cnt) 
                  ^ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_next)) 
                 >> 8U));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__req_mem 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_allow_in) 
           & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____VdfgTmp_hb2577766__0));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_flush 
        = vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT__stall;
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_flush 
        = ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_PC_BRANCH) 
           & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_flush)));
    vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_ready_go 
        = (1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT__stall)));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_datai 
        = ((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)
              ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_wdata_dma 
                 >> 8U) : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_high_24b_wr) 
            << 8U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_datai));
    vlSelf->__Vtableidx5 = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value 
        = Vsimu_top__ConstPool__TABLE_ha6e7b954_0[vlSelf->__Vtableidx5];
    vlSelf->__Vtableidx8 = vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr;
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value 
        = Vsimu_top__ConstPool__TABLE_hb86679b4_0[vlSelf->__Vtableidx8];
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_out 
        = ((~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
               >> 6U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_word_trans_cpu 
        = ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)) 
           & (0U != (0x3fU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr 
                              >> 0xeU))));
    vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____VdfgTmp_hcfb8fec4__0 
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
}

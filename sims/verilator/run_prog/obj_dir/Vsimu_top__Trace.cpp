// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vsimu_top__Syms.h"


//======================

void Vsimu_top::traceChg(VerilatedFst* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vsimu_top* t = (Vsimu_top*)userthis;
    Vsimu_top__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void Vsimu_top::traceChgThis(Vsimu_top__Syms* __restrict vlSymsp, VerilatedFst* vcdp, uint32_t code) {
    Vsimu_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 1U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 1U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 2U))))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 2U))))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 2U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 3U))))) {
            vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 2U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 4U))))) {
            vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 3U))))) {
            vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 4U))))) {
            vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__10(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__11(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__12(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vsimu_top::traceChgThis__2(Vsimu_top__Syms* __restrict vlSymsp, VerilatedFst* vcdp, uint32_t code) {
    Vsimu_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_ready_go));
        vcdp->chgBit(c+9,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_PC_BRANCH));
        vcdp->chgBit(c+17,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LOAD_TYPE));
        vcdp->chgBit(c+25,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_BU_TYPE) 
                            | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_HU_TYPE))));
        vcdp->chgBit(c+33,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_flush));
        vcdp->chgBit(c+41,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LOAD_TYPE));
        vcdp->chgBit(c+49,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LOAD_TYPE));
        vcdp->chgBit(c+57,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BL_TYPE));
        vcdp->chgBit(c+65,((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ORI_TYPE) 
                             | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_XORI_TYPE)) 
                            | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ANDI_TYPE))));
        vcdp->chgBit(c+73,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_JIRL_TYPE));
        vcdp->chgBit(c+81,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_PC_BRANCH));
        vcdp->chgBit(c+89,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ANDI_TYPE));
        vcdp->chgBit(c+97,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ORI_TYPE));
        vcdp->chgBit(c+105,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_XORI_TYPE));
        vcdp->chgBit(c+113,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_BU_TYPE));
        vcdp->chgBit(c+121,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_HU_TYPE));
        vcdp->chgBit(c+129,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__MEM_forward_valid));
        vcdp->chgBit(c+137,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__WB_forward_valid));
        vcdp->chgBit(c+145,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT__stall));
        vcdp->chgBit(c+153,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divSigned));
        vcdp->chgBit(c+161,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divEn));
        vcdp->chgBus(c+169,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[0]),2);
        vcdp->chgBus(c+170,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[1]),2);
        vcdp->chgBus(c+171,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[2]),2);
        vcdp->chgBus(c+172,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[3]),2);
        vcdp->chgBus(c+173,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[4]),2);
        vcdp->chgBus(c+209,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[0]),2);
        vcdp->chgBus(c+210,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[1]),2);
        vcdp->chgBus(c+211,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[2]),2);
        vcdp->chgBus(c+212,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[3]),2);
        vcdp->chgBus(c+213,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[4]),2);
    }
}

void Vsimu_top::traceChgThis__3(Vsimu_top__Syms* __restrict vlSymsp, VerilatedFst* vcdp, uint32_t code) {
    Vsimu_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgQuad(c+249,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__minuend_shifted),33);
    }
}

void Vsimu_top::traceChgThis__4(Vsimu_top__Syms* __restrict vlSymsp, VerilatedFst* vcdp, uint32_t code) {
    Vsimu_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+265,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divSigned)
                              ? ((0x80000000U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                                                 ^ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex))
                                  ? VL_NEGATE_I(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_u)
                                  : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_u)
                              : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_u)),32);
        vcdp->chgBus(c+273,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divSigned)
                              ? ((0x80000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)
                                  ? VL_NEGATE_I(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__remainder_u)
                                  : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__remainder_u)
                              : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__remainder_u)),32);
        vcdp->chgBus(c+281,(((0x80000000U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                                             ^ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex))
                              ? VL_NEGATE_I(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_u)
                              : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_u)),32);
        vcdp->chgBus(c+289,(((0x80000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)
                              ? VL_NEGATE_I(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__remainder_u)
                              : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__remainder_u)),32);
    }
}

void Vsimu_top::traceChgThis__5(Vsimu_top__Syms* __restrict vlSymsp, VerilatedFst* vcdp, uint32_t code) {
    Vsimu_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*191:0*/ __Vtemp94[6];
    WData/*191:0*/ __Vtemp95[6];
    WData/*191:0*/ __Vtemp96[6];
    // Body
    {
        vcdp->chgBit(c+297,(vlTOPp->simu_top__DOT__soc__DOT__cpu_awvalid));
        vcdp->chgBit(c+305,(vlTOPp->simu_top__DOT__soc__DOT__cpu_wvalid));
        vcdp->chgBus(c+313,(vlTOPp->simu_top__DOT__soc__DOT__m0_bid),4);
        vcdp->chgBus(c+321,(vlTOPp->simu_top__DOT__soc__DOT__m0_bresp),2);
        vcdp->chgBit(c+329,(vlTOPp->simu_top__DOT__soc__DOT__cpu_arvalid));
        vcdp->chgBus(c+337,(vlTOPp->simu_top__DOT__soc__DOT__m0_rid),4);
        vcdp->chgBus(c+345,(vlTOPp->simu_top__DOT__soc__DOT__m0_rresp),2);
        vcdp->chgBit(c+353,(vlTOPp->simu_top__DOT__soc__DOT__m0_rlast));
        vcdp->chgBit(c+361,(vlTOPp->simu_top__DOT__soc__DOT__m0_awready));
        vcdp->chgBit(c+369,(vlTOPp->simu_top__DOT__soc__DOT__m0_wready));
        vcdp->chgBit(c+377,(vlTOPp->simu_top__DOT__soc__DOT__m0_bvalid));
        vcdp->chgBit(c+385,(vlTOPp->simu_top__DOT__soc__DOT__m0_arready));
        vcdp->chgBit(c+393,(vlTOPp->simu_top__DOT__soc__DOT__m0_rvalid));
        vcdp->chgBit(c+401,(vlTOPp->simu_top__DOT__soc__DOT__s0_wready));
        vcdp->chgBit(c+409,(vlTOPp->simu_top__DOT__soc__DOT__conf_s_wready));
        vcdp->chgBit(c+417,((1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                    >> 4U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__infrared) 
                                              | (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_out))))));
        vcdp->chgBit(c+425,(vlTOPp->simu_top__DOT__soc__DOT__uart0_txd_oe));
        vcdp->chgBit(c+433,((1U & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode)))));
        vcdp->chgBus(c+441,((0xfU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[0U])),4);
        vcdp->chgBus(c+449,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC),32);
        vcdp->chgBit(c+457,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_ok_inst));
        vcdp->chgBit(c+465,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__req_mem));
        vcdp->chgBit(c+473,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                   >> 0x15U))));
        vcdp->chgBus(c+481,((3U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                   >> 0x12U))),2);
        vcdp->chgBus(c+489,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem),4);
        vcdp->chgBus(c+497,((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__MEM_forward_valid) 
                              & ((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U]) 
                                 == (0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U])))
                              ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[1U]
                              : (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__WB_forward_valid) 
                                  & ((0x1fU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                                               >> 4U)) 
                                     == (0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U])))
                                  ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb
                                  : ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[3U] 
                                      << 0x11U) | (
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U] 
                                                   >> 0xfU))))),32);
        vcdp->chgBus(c+505,((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                     >> 0x20U))),32);
        vcdp->chgBus(c+513,((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)),32);
        vcdp->chgBit(c+521,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_valid_in));
        vcdp->chgBit(c+529,(((((6U == (7U & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                     >> 0x19U)))) 
                               & (1U == (0xfU & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0x1cU))))) 
                              | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BL_TYPE)) 
                             | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_JIRL_TYPE))));
        vcdp->chgBit(c+537,(((((1U == (0x3ffU & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0x16U)))) 
                               | (1U == (0x7fU & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0x19U))))) 
                              | (1U == (0xfU & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 0x1cU))))) 
                             | (0xaU == (0x3fU & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0x1aU)))))));
        vcdp->chgBus(c+545,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluctrl_id),5);
        vcdp->chgBit(c+553,(((((4U == (0xfU & (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                       >> 0x16U)))) 
                               & (0xaU == (0x3fU & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0x1aU))))) 
                              | ((5U == (0xfU & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0x16U)))) 
                                 & (0xaU == (0x3fU 
                                             & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 0x1aU)))))) 
                             | ((6U == (0xfU & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 0x16U)))) 
                                & (0xaU == (0x3fU & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x1aU))))))));
        vcdp->chgBus(c+561,((((((0U == (0xfU & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 0x16U)))) 
                                & (0xaU == (0x3fU & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x1aU))))) 
                               | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_BU_TYPE)) 
                              | ((4U == (0xfU & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0x16U)))) 
                                 & (0xaU == (0x3fU 
                                             & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 0x1aU))))))
                              ? 0U : (((((1U == (0xfU 
                                                 & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0x16U)))) 
                                         & (0xaU == 
                                            (0x3fU 
                                             & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 0x1aU))))) 
                                        | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_HU_TYPE)) 
                                       | ((5U == (0xfU 
                                                  & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x16U)))) 
                                          & (0xaU == 
                                             (0x3fU 
                                              & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0x1aU))))))
                                       ? 1U : ((((2U 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(
                                                             (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                              >> 0x16U)))) 
                                                 & (0xaU 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                >> 0x1aU))))) 
                                                | ((6U 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(
                                                               (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                >> 0x16U)))) 
                                                   & (0xaU 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                  >> 0x1aU))))))
                                                ? 2U
                                                : 0U)))),2);
        vcdp->chgBit(c+569,((((((((0U == (0x3ffU & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0x16U)))) 
                                  | (1U == (0x3ffU 
                                            & (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                       >> 0x16U))))) 
                                 | (1U == (0x7fU & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0x19U))))) 
                                | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LOAD_TYPE)) 
                               | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BL_TYPE)) 
                              | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_JIRL_TYPE)) 
                             | (1U == (0xfU & (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                       >> 0x1cU)))))));
        vcdp->chgBus(c+577,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id),32);
        vcdp->chgBus(c+585,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rk_id),32);
        vcdp->chgBus(c+593,((0x1fU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                              >> 5U)))),5);
        vcdp->chgBus(c+601,((0x1fU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                              >> 0xaU)))),5);
        vcdp->chgBus(c+609,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_id),5);
        vcdp->chgBus(c+617,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__immout_id),32);
        vcdp->chgBus(c+625,((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                     >> 0x20U))),32);
        vcdp->chgBit(c+633,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                   >> 0x1cU))));
        vcdp->chgBit(c+641,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                   >> 0x1bU))));
        vcdp->chgBus(c+649,((0x1fU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                      >> 0x16U))),5);
        vcdp->chgBit(c+657,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                   >> 0x15U))));
        vcdp->chgBit(c+665,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                   >> 0x14U))));
        vcdp->chgBus(c+673,((3U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                   >> 0x12U))),2);
        vcdp->chgBit(c+681,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                   >> 0x11U))));
        vcdp->chgBit(c+689,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                   >> 0x10U))));
        vcdp->chgBit(c+697,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                   >> 0xfU))));
        vcdp->chgBus(c+705,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                              << 0x11U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[4U] 
                                           >> 0xfU))),32);
        vcdp->chgBus(c+713,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[4U] 
                              << 0x11U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[3U] 
                                           >> 0xfU))),32);
        vcdp->chgBus(c+721,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[3U] 
                              << 0x11U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U] 
                                           >> 0xfU))),32);
        vcdp->chgBus(c+729,((0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[3U] 
                                       << 0x16U) | 
                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U] 
                                       >> 0xaU)))),5);
        vcdp->chgBus(c+737,((0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[3U] 
                                       << 0x1bU) | 
                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U] 
                                       >> 5U)))),5);
        vcdp->chgBus(c+745,((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U])),5);
        vcdp->chgBus(c+753,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[1U]),32);
        vcdp->chgBus(c+761,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0U]),32);
        vcdp->chgBit(c+769,((1U & ((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req)) 
                                     & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__req_mem)) 
                                    & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                        >> 0x14U) | 
                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                        >> 0x15U))) 
                                   | (~ ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                          >> 0x14U) 
                                         | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                            >> 0x15U)))))));
        vcdp->chgBit(c+777,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_valid_in));
        vcdp->chgBus(c+785,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem),4);
        vcdp->chgBus(c+793,((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U])),5);
        vcdp->chgBus(c+801,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0U]),32);
        vcdp->chgBit(c+809,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U] 
                                   >> 0xfU))));
        vcdp->chgBit(c+817,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U] 
                                   >> 0xeU))));
        vcdp->chgBus(c+825,((3U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U] 
                                   >> 0xcU))),2);
        vcdp->chgBit(c+833,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U] 
                                   >> 0xbU))));
        vcdp->chgBit(c+841,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U] 
                                   >> 0xaU))));
        vcdp->chgBit(c+849,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U] 
                                   >> 9U))));
        vcdp->chgBus(c+857,((0xfU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U] 
                                     >> 5U))),4);
        vcdp->chgBus(c+865,((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U])),5);
        vcdp->chgBus(c+873,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[1U]),32);
        vcdp->chgBus(c+881,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0U]),32);
        vcdp->chgBit(c+889,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_allow_in));
        vcdp->chgBus(c+897,((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U])),5);
        vcdp->chgBus(c+905,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[1U]),32);
        vcdp->chgBus(c+913,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0U]),32);
        vcdp->chgBit(c+921,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                                   >> 0xaU))));
        vcdp->chgBit(c+929,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                                   >> 9U))));
        vcdp->chgBus(c+937,((0x1fU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                                      >> 4U))),5);
        vcdp->chgBus(c+945,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                              << 0x1cU) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U] 
                                           >> 4U))),32);
        vcdp->chgBus(c+953,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U] 
                              << 0x1cU) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[1U] 
                                           >> 4U))),32);
        vcdp->chgBus(c+961,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[1U] 
                              << 0x1cU) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[0U] 
                                           >> 4U))),32);
        vcdp->chgBus(c+969,((0xfU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[0U])),4);
        vcdp->chgBus(c+977,((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_JIRL_TYPE)
                               ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id_true
                               : (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                          >> 0x20U))) 
                             + vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__immout_id)),32);
        vcdp->chgBus(c+985,((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)),32);
        vcdp->chgBus(c+993,((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                     >> 0x20U))),32);
        vcdp->chgBit(c+1001,((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id_true 
                              == (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__MEM_forward_valid) 
                                   & ((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U]) 
                                      == (0x1fU & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0xaU)))))
                                   ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[1U]
                                   : (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__WB_forward_valid) 
                                       & ((0x1fU & 
                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                                            >> 4U)) 
                                          == (0x1fU 
                                              & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0xaU)))))
                                       ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb
                                       : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rk_id)))));
        vcdp->chgBit(c+1009,((((((0xaU == (0xfU & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x1cU)))) 
                                 & (1U == (3U & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0x1eU))))) 
                                | ((0xbU == (0xfU & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x1cU)))) 
                                   & (1U == (3U & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x1eU)))))) 
                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id_true 
                                  < (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__MEM_forward_valid) 
                                      & ((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U]) 
                                         == (0x1fU 
                                             & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 0xaU)))))
                                      ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[1U]
                                      : (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__WB_forward_valid) 
                                          & ((0x1fU 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                                                 >> 4U)) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0xaU)))))
                                          ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb
                                          : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rk_id)))) 
                              | ((~ (((0xaU == (0xfU 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x1cU)))) 
                                      & (1U == (3U 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x1eU))))) 
                                     | ((0xbU == (0xfU 
                                                  & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x1cU)))) 
                                        & (1U == (3U 
                                                  & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x1eU))))))) 
                                 & VL_LTS_III(1,32,32, vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id_true, 
                                              (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__MEM_forward_valid) 
                                                & ((0x1fU 
                                                    & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U]) 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                               >> 0xaU)))))
                                                ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[1U]
                                                : (
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__WB_forward_valid) 
                                                    & ((0x1fU 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                                                           >> 4U)) 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                   >> 0xaU)))))
                                                    ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb
                                                    : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rk_id)))))));
        vcdp->chgBus(c+1017,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__itype),3);
        vcdp->chgBit(c+1025,((((((((0U == (0x3ffU & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x16U)))) 
                                   | (1U == (0x3ffU 
                                             & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 0x16U))))) 
                                  | (1U == (0x7fU & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x19U))))) 
                                 | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LOAD_TYPE)) 
                                | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BL_TYPE)) 
                               | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_JIRL_TYPE)) 
                              | (1U == (0xfU & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 0x1cU)))))));
        vcdp->chgBus(c+1033,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluctrl_id),5);
        vcdp->chgBit(c+1041,((((0xaU == (0xfU & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0x1cU)))) 
                               & (1U == (3U & (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                       >> 0x1eU))))) 
                              | ((0xbU == (0xfU & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x1cU)))) 
                                 & (1U == (3U & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0x1eU))))))));
        vcdp->chgBit(c+1049,((((((((6U == (0xfU & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x1cU)))) 
                                   & (1U == (3U & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x1eU))))) 
                                  | ((7U == (0xfU & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x1cU)))) 
                                     & (1U == (3U & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x1eU)))))) 
                                 | ((8U == (0xfU & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0x1cU)))) 
                                    & (1U == (3U & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0x1eU)))))) 
                                | ((0xaU == (0xfU & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x1cU)))) 
                                   & (1U == (3U & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x1eU)))))) 
                               | ((9U == (0xfU & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0x1cU)))) 
                                  & (1U == (3U & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0x1eU)))))) 
                              | ((0xbU == (0xfU & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x1cU)))) 
                                 & (1U == (3U & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0x1eU))))))));
        vcdp->chgBus(c+1057,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_id),5);
        vcdp->chgBus(c+1065,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id),32);
        vcdp->chgBus(c+1073,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rk_id),32);
        vcdp->chgBit(c+1081,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                                    >> 0xaU))));
        vcdp->chgBus(c+1089,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb),32);
        vcdp->chgBus(c+1097,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__immout_id),32);
        vcdp->chgBus(c+1105,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id_true),32);
        vcdp->chgBus(c+1113,((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__MEM_forward_valid) 
                               & ((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U]) 
                                  == (0x1fU & (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                       >> 0xaU)))))
                               ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[1U]
                               : (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__WB_forward_valid) 
                                   & ((0x1fU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                                                >> 4U)) 
                                      == (0x1fU & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0xaU)))))
                                   ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb
                                   : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rk_id))),32);
        vcdp->chgBus(c+1121,((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__MEM_forward_valid) 
                               & ((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U]) 
                                  == (0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[3U] 
                                                << 0x16U) 
                                               | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U] 
                                                  >> 0xaU)))))
                               ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[1U]
                               : (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__WB_forward_valid) 
                                   & ((0x1fU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                                                >> 4U)) 
                                      == (0x1fU & (
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[3U] 
                                                    << 0x16U) 
                                                   | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U] 
                                                      >> 0xaU)))))
                                   ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb
                                   : ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                       << 0x11U) | 
                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[4U] 
                                       >> 0xfU))))),32);
        vcdp->chgBus(c+1129,((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__MEM_forward_valid) 
                               & ((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U]) 
                                  == (0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[3U] 
                                                << 0x1bU) 
                                               | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U] 
                                                  >> 5U)))))
                               ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[1U]
                               : (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__WB_forward_valid) 
                                   & ((0x1fU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                                                >> 4U)) 
                                      == (0x1fU & (
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[3U] 
                                                    << 0x1bU) 
                                                   | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U] 
                                                      >> 5U)))))
                                   ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb
                                   : ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[4U] 
                                       << 0x11U) | 
                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[3U] 
                                       >> 0xfU))))),32);
        vcdp->chgBus(c+1137,((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U])),5);
        vcdp->chgBus(c+1145,((0x1fU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                                       >> 4U))),5);
        vcdp->chgBit(c+1153,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U] 
                                    >> 0xaU))));
        vcdp->chgBus(c+1161,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[1U]),32);
        vcdp->chgBus(c+1169,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_JIRL_TYPE)
                               ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id_true
                               : (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                          >> 0x20U)))),32);
        vcdp->chgBit(c+1177,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                    >> 0x14U))));
        vcdp->chgBit(c+1185,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                    >> 0x10U))));
        vcdp->chgBit(c+1193,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                    >> 0x1cU))));
        vcdp->chgBit(c+1201,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                    >> 0x1bU))));
        vcdp->chgBus(c+1209,((0x1fU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                       >> 0x16U))),5);
        vcdp->chgBus(c+1217,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex),32);
        vcdp->chgBus(c+1225,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex),32);
        vcdp->chgBus(c+1233,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0U]),32);
        vcdp->chgBus(c+1241,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                               << 0x11U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[4U] 
                                            >> 0xfU))),32);
        vcdp->chgBus(c+1249,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[4U] 
                               << 0x11U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[3U] 
                                            >> 0xfU))),32);
        vcdp->chgBus(c+1257,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[3U] 
                               << 0x11U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U] 
                                            >> 0xfU))),32);
        vcdp->chgBus(c+1265,((0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[3U] 
                                        << 0x16U) | 
                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U] 
                                        >> 0xaU)))),5);
        vcdp->chgBus(c+1273,((0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[3U] 
                                        << 0x1bU) | 
                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U] 
                                        >> 5U)))),5);
        vcdp->chgBus(c+1281,((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U])),5);
        vcdp->chgBus(c+1289,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[1U]),32);
        vcdp->chgBit(c+1297,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                    >> 0x11U))));
        vcdp->chgBit(c+1305,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                    >> 0xfU))));
        vcdp->chgBus(c+1313,((0xfU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U] 
                                      >> 5U))),4);
        vcdp->chgBit(c+1321,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U] 
                                    >> 0xbU))));
        vcdp->chgBit(c+1329,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U] 
                                    >> 0xeU))));
        vcdp->chgBit(c+1337,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U] 
                                    >> 0xfU))));
        vcdp->chgBus(c+1345,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0U]),32);
        vcdp->chgBus(c+1353,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                               << 0x1cU) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U] 
                                            >> 4U))),32);
        vcdp->chgBus(c+1361,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U] 
                               << 0x1cU) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[1U] 
                                            >> 4U))),32);
        vcdp->chgBit(c+1369,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                                    >> 9U))));
        vcdp->chgBus(c+1377,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[1U] 
                               << 0x1cU) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[0U] 
                                            >> 4U))),32);
        vcdp->chgQuad(c+1385,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out),64);
        vcdp->chgBit(c+1401,((((((0U == (0x3ffU & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x16U)))) 
                                 | (1U == (0x3ffU & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x16U))))) 
                                | (1U == (0x7fU & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x19U))))) 
                               | (1U == (0xfU & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0x1cU))))) 
                              | (0xaU == (0x3fU & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x1aU)))))));
        vcdp->chgBit(c+1409,((((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_JIRL_TYPE) 
                                   | ((6U == (0xfU 
                                              & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0x1cU)))) 
                                      & (1U == (3U 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x1eU)))))) 
                                  | ((7U == (0xfU & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x1cU)))) 
                                     & (1U == (3U & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x1eU)))))) 
                                 | ((8U == (0xfU & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0x1cU)))) 
                                    & (1U == (3U & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0x1eU)))))) 
                                | ((9U == (0xfU & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x1cU)))) 
                                   & (1U == (3U & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x1eU)))))) 
                               | ((0xaU == (0xfU & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0x1cU)))) 
                                  & (1U == (3U & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0x1eU)))))) 
                              | ((0xbU == (0xfU & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x1cU)))) 
                                 & (1U == (3U & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0x1eU))))))));
        vcdp->chgBit(c+1417,((((4U == (0xfU & (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                       >> 0x1cU)))) 
                               & (1U == (3U & (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                       >> 0x1eU))))) 
                              | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BL_TYPE))));
        vcdp->chgBit(c+1425,(((((0U == (0x3ffU & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0x16U)))) 
                                | (1U == (0x3ffU & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0x16U))))) 
                               | (1U == (0x7fU & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0x19U))))) 
                              | (0xaU == (0x3fU & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x1aU)))))));
        vcdp->chgBit(c+1433,((0U == (0x3ffU & (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                       >> 0x16U))))));
        vcdp->chgBit(c+1441,(((((6U == (7U & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                      >> 0x19U)))) 
                                & (1U == (0xfU & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0x1cU))))) 
                               | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LOAD_TYPE)) 
                              | ((((4U == (0xfU & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x16U)))) 
                                   & (0xaU == (0x3fU 
                                               & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0x1aU))))) 
                                  | ((5U == (0xfU & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x16U)))) 
                                     & (0xaU == (0x3fU 
                                                 & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0x1aU)))))) 
                                 | ((6U == (0xfU & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0x16U)))) 
                                    & (0xaU == (0x3fU 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x1aU)))))))));
        vcdp->chgBit(c+1449,((1U == (0x3ffU & (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                       >> 0x16U))))));
        vcdp->chgBit(c+1457,((1U == (0x7fU & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                      >> 0x19U))))));
        vcdp->chgBit(c+1465,((1U == (0xfU & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                     >> 0x1cU))))));
        vcdp->chgBit(c+1473,((0x10U == (0x7fU & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0x19U))))));
        vcdp->chgBit(c+1481,((0xaU == (0x3fU & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 0x1aU))))));
        vcdp->chgBit(c+1489,((1U == (3U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                   >> 0x1eU))))));
        vcdp->chgBit(c+1497,(((0x20U == (0x7fU & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0xfU)))) 
                              & (0U == (0x3ffU & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0x16U)))))));
        vcdp->chgBit(c+1505,(((0x22U == (0x7fU & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0xfU)))) 
                              & (0U == (0x3ffU & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0x16U)))))));
        vcdp->chgBit(c+1513,(((0x24U == (0x7fU & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0xfU)))) 
                              & (0U == (0x3ffU & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0x16U)))))));
        vcdp->chgBit(c+1521,(((0x25U == (0x7fU & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0xfU)))) 
                              & (0U == (0x3ffU & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0x16U)))))));
        vcdp->chgBit(c+1529,(((0x28U == (0x7fU & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0xfU)))) 
                              & (0U == (0x3ffU & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0x16U)))))));
        vcdp->chgBit(c+1537,(((0x29U == (0x7fU & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0xfU)))) 
                              & (0U == (0x3ffU & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0x16U)))))));
        vcdp->chgBit(c+1545,(((0x2aU == (0x7fU & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0xfU)))) 
                              & (0U == (0x3ffU & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0x16U)))))));
        vcdp->chgBit(c+1553,(((0x2bU == (0x7fU & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0xfU)))) 
                              & (0U == (0x3ffU & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0x16U)))))));
        vcdp->chgBit(c+1561,(((0x2eU == (0x7fU & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0xfU)))) 
                              & (0U == (0x3ffU & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0x16U)))))));
        vcdp->chgBit(c+1569,(((0x2fU == (0x7fU & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0xfU)))) 
                              & (0U == (0x3ffU & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0x16U)))))));
        vcdp->chgBit(c+1577,(((0x30U == (0x7fU & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0xfU)))) 
                              & (0U == (0x3ffU & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0x16U)))))));
        vcdp->chgBit(c+1585,(((0x38U == (0x7fU & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0xfU)))) 
                              & (0U == (0x3ffU & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0x16U)))))));
        vcdp->chgBit(c+1593,(((0x39U == (0x7fU & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0xfU)))) 
                              & (0U == (0x3ffU & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0x16U)))))));
        vcdp->chgBit(c+1601,(((0x3aU == (0x7fU & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0xfU)))) 
                              & (0U == (0x3ffU & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0x16U)))))));
        vcdp->chgBit(c+1609,(((0x40U == (0x7fU & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0xfU)))) 
                              & (0U == (0x3ffU & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0x16U)))))));
        vcdp->chgBit(c+1617,(((0x41U == (0x7fU & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0xfU)))) 
                              & (0U == (0x3ffU & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0x16U)))))));
        vcdp->chgBit(c+1625,(((0x42U == (0x7fU & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0xfU)))) 
                              & (0U == (0x3ffU & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0x16U)))))));
        vcdp->chgBit(c+1633,(((0x43U == (0x7fU & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0xfU)))) 
                              & (0U == (0x3ffU & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0x16U)))))));
        vcdp->chgBit(c+1641,(((1U == (0x7fU & (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                       >> 0xfU)))) 
                              & (1U == (0x3ffU & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0x16U)))))));
        vcdp->chgBit(c+1649,(((9U == (0x7fU & (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                       >> 0xfU)))) 
                              & (1U == (0x3ffU & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0x16U)))))));
        vcdp->chgBit(c+1657,(((0x11U == (0x7fU & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0xfU)))) 
                              & (1U == (0x3ffU & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0x16U)))))));
        vcdp->chgBit(c+1665,(((0U == (7U & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                    >> 0x16U)))) 
                              & (1U == (0x7fU & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0x19U)))))));
        vcdp->chgBit(c+1673,(((1U == (7U & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                    >> 0x16U)))) 
                              & (1U == (0x7fU & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0x19U)))))));
        vcdp->chgBit(c+1681,(((2U == (7U & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                    >> 0x16U)))) 
                              & (1U == (0x7fU & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0x19U)))))));
        vcdp->chgBus(c+1689,((7U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                            >> 0x19U)))),3);
        vcdp->chgBit(c+1697,(((2U == (7U & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                    >> 0x19U)))) 
                              & (1U == (0xfU & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 0x1cU)))))));
        vcdp->chgBit(c+1705,(((6U == (7U & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                    >> 0x19U)))) 
                              & (1U == (0xfU & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 0x1cU)))))));
        vcdp->chgBit(c+1713,(((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                          >> 0x18U))) 
                              & (0x10U == (0x7fU & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0x19U)))))));
        vcdp->chgBit(c+1721,(((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                       >> 0x18U)) & 
                              (0x10U == (0x7fU & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0x19U)))))));
        vcdp->chgBit(c+1729,(((0U == (0xfU & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                      >> 0x16U)))) 
                              & (0xaU == (0x3fU & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x1aU)))))));
        vcdp->chgBit(c+1737,(((1U == (0xfU & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                      >> 0x16U)))) 
                              & (0xaU == (0x3fU & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x1aU)))))));
        vcdp->chgBit(c+1745,(((2U == (0xfU & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                      >> 0x16U)))) 
                              & (0xaU == (0x3fU & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x1aU)))))));
        vcdp->chgBit(c+1753,(((4U == (0xfU & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                      >> 0x16U)))) 
                              & (0xaU == (0x3fU & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x1aU)))))));
        vcdp->chgBit(c+1761,(((5U == (0xfU & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                      >> 0x16U)))) 
                              & (0xaU == (0x3fU & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x1aU)))))));
        vcdp->chgBit(c+1769,(((6U == (0xfU & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                      >> 0x16U)))) 
                              & (0xaU == (0x3fU & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x1aU)))))));
        vcdp->chgBus(c+1777,((0xfU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                              >> 0x1cU)))),4);
        vcdp->chgBit(c+1785,(((4U == (0xfU & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                      >> 0x1cU)))) 
                              & (1U == (3U & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                      >> 0x1eU)))))));
        vcdp->chgBit(c+1793,(((6U == (0xfU & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                      >> 0x1cU)))) 
                              & (1U == (3U & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                      >> 0x1eU)))))));
        vcdp->chgBit(c+1801,(((7U == (0xfU & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                      >> 0x1cU)))) 
                              & (1U == (3U & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                      >> 0x1eU)))))));
        vcdp->chgBit(c+1809,(((8U == (0xfU & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                      >> 0x1cU)))) 
                              & (1U == (3U & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                      >> 0x1eU)))))));
        vcdp->chgBit(c+1817,(((9U == (0xfU & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                      >> 0x1cU)))) 
                              & (1U == (3U & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                      >> 0x1eU)))))));
        vcdp->chgBit(c+1825,(((0xaU == (0xfU & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 0x1cU)))) 
                              & (1U == (3U & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                      >> 0x1eU)))))));
        vcdp->chgBit(c+1833,(((0xbU == (0xfU & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 0x1cU)))) 
                              & (1U == (3U & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                      >> 0x1eU)))))));
        vcdp->chgBit(c+1841,((((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U]) 
                               == (0x1fU & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                    >> 5U)))) 
                              | ((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U]) 
                                 == (0x1fU & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                      >> 0xaU)))))));
        vcdp->chgBit(c+1849,((((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U]) 
                               == (0x1fU & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                    >> 5U)))) 
                              | ((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U]) 
                                 == (0x1fU & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                      >> 0xaU)))))));
        vcdp->chgBit(c+1857,(((((~ ((((6U == (7U & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0x19U)))) 
                                      & (1U == (0xfU 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x1cU))))) 
                                     | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BL_TYPE)) 
                                    | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_JIRL_TYPE))) 
                                & ((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U]) 
                                   == (0x1fU & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 5U))))) 
                               | ((~ ((((1U == (0x3ffU 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x16U)))) 
                                        | (1U == (0x7fU 
                                                  & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x19U))))) 
                                       | (1U == (0xfU 
                                                 & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0x1cU))))) 
                                      | (0xaU == (0x3fU 
                                                  & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x1aU)))))) 
                                  & ((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U]) 
                                     == (0x1fU & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0xaU)))))) 
                              | ((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U]) 
                                 == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_id)))));
        __Vtemp94[5U] = ((0xffff8000U & (((((((((0U 
                                                 == 
                                                 (0x3ffU 
                                                  & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x16U)))) 
                                                | (1U 
                                                   == 
                                                   (0x3ffU 
                                                    & (IData)(
                                                              (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                               >> 0x16U))))) 
                                               | (1U 
                                                  == 
                                                  (0x7fU 
                                                   & (IData)(
                                                             (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                              >> 0x19U))))) 
                                              | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LOAD_TYPE)) 
                                             | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BL_TYPE)) 
                                            | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_JIRL_TYPE)) 
                                           | (1U == 
                                              (0xfU 
                                               & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0x1cU))))) 
                                          << 0x10U) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LOAD_TYPE) 
                                            << 0xfU))) 
                         | (0x7fffU & ((IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rk_id))) 
                                                >> 0x20U)) 
                                       >> 0x11U)));
        __Vtemp95[5U] = ((0xfffe0000U & ((((((4U == 
                                              (0xfU 
                                               & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0x16U)))) 
                                             & (0xaU 
                                                == 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0x1aU))))) 
                                            | ((5U 
                                                == 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0x16U)))) 
                                               & (0xaU 
                                                  == 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                              >> 0x1aU)))))) 
                                           | ((6U == 
                                               (0xfU 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x16U)))) 
                                              & (0xaU 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x1aU)))))) 
                                          << 0x15U) 
                                         | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LOAD_TYPE) 
                                             << 0x14U) 
                                            | (((((((0U 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(
                                                                (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                 >> 0x16U)))) 
                                                    & (0xaU 
                                                       == 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                   >> 0x1aU))))) 
                                                   | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_BU_TYPE)) 
                                                  | ((4U 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(
                                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                  >> 0x16U)))) 
                                                     & (0xaU 
                                                        == 
                                                        (0x3fU 
                                                         & (IData)(
                                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                    >> 0x1aU))))))
                                                  ? 0U
                                                  : 
                                                 (((((1U 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(
                                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                  >> 0x16U)))) 
                                                     & (0xaU 
                                                        == 
                                                        (0x3fU 
                                                         & (IData)(
                                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                    >> 0x1aU))))) 
                                                    | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_HU_TYPE)) 
                                                   | ((5U 
                                                       == 
                                                       (0xfU 
                                                        & (IData)(
                                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                   >> 0x16U)))) 
                                                      & (0xaU 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                     >> 0x1aU))))))
                                                   ? 1U
                                                   : 
                                                  ((((2U 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(
                                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                  >> 0x16U)))) 
                                                     & (0xaU 
                                                        == 
                                                        (0x3fU 
                                                         & (IData)(
                                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                    >> 0x1aU))))) 
                                                    | ((6U 
                                                        == 
                                                        (0xfU 
                                                         & (IData)(
                                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                    >> 0x16U)))) 
                                                       & (0xaU 
                                                          == 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                      >> 0x1aU))))))
                                                    ? 2U
                                                    : 0U))) 
                                                << 0x12U) 
                                               | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_BU_TYPE) 
                                                   | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_HU_TYPE)) 
                                                  << 0x11U))))) 
                         | __Vtemp94[5U]);
        __Vtemp96[0U] = (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__immout_id)) 
                                  << 0x20U) | (QData)((IData)(
                                                              (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                               >> 0x20U)))));
        __Vtemp96[1U] = (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__immout_id)) 
                                   << 0x20U) | (QData)((IData)(
                                                               (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                >> 0x20U)))) 
                                 >> 0x20U));
        __Vtemp96[2U] = ((0xffff8000U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_id 
                                         << 0xfU)) 
                         | ((0x7c00U & ((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                 >> 5U)) 
                                        << 0xaU)) | 
                            ((0x3e0U & ((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                 >> 0xaU)) 
                                        << 5U)) | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_id))));
        __Vtemp96[3U] = ((0x7fffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_id 
                                     >> 0x11U)) | (0xffff8000U 
                                                   & ((IData)(
                                                              (((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id)) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rk_id)))) 
                                                      << 0xfU)));
        __Vtemp96[4U] = ((0x7fffU & ((IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rk_id)))) 
                                     >> 0x11U)) | (0xffff8000U 
                                                   & ((IData)(
                                                              ((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id)) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rk_id))) 
                                                               >> 0x20U)) 
                                                      << 0xfU)));
        __Vtemp96[5U] = ((0xffc00000U & ((((((6U == 
                                              (7U & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x19U)))) 
                                             & (1U 
                                                == 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0x1cU))))) 
                                            | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BL_TYPE)) 
                                           | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_JIRL_TYPE)) 
                                          << 0x1cU) 
                                         | ((((((1U 
                                                 == 
                                                 (0x3ffU 
                                                  & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x16U)))) 
                                                | (1U 
                                                   == 
                                                   (0x7fU 
                                                    & (IData)(
                                                              (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                               >> 0x19U))))) 
                                               | (1U 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(
                                                             (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                              >> 0x1cU))))) 
                                              | (0xaU 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x1aU))))) 
                                             << 0x1bU) 
                                            | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluctrl_id) 
                                               << 0x16U)))) 
                         | __Vtemp95[5U]);
        vcdp->chgArray(c+1865,(__Vtemp96),189);
        vcdp->chgArray(c+1913,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out),189);
        vcdp->chgBus(c+1961,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_result),32);
        vcdp->chgBus(c+1969,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__slt_result),32);
        vcdp->chgBus(c+1977,((1U & (~ (IData)((VL_ULL(1) 
                                               & ((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)) 
                                                    + (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_b))) 
                                                   + (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_cin))) 
                                                  >> 0x20U)))))),32);
        vcdp->chgBus(c+1985,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex),32);
        vcdp->chgBus(c+1993,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_b),32);
        vcdp->chgBit(c+2001,((1U & (IData)((VL_ULL(1) 
                                            & ((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)) 
                                                 + (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_b))) 
                                                + (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_cin))) 
                                               >> 0x20U))))));
        vcdp->chgBit(c+2009,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_cin));
        vcdp->chgBus(c+2017,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex),32);
        vcdp->chgBus(c+2025,(((0x80000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)
                               ? VL_NEGATE_I(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)
                               : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)),32);
        vcdp->chgBus(c+2033,(((0x80000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)
                               ? VL_NEGATE_I(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)
                               : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)),32);
        vcdp->chgBit(c+2041,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                                    >> 0x1fU))));
        vcdp->chgBit(c+2049,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex 
                                    >> 0x1fU))));
        vcdp->chgBit(c+2057,((1U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                                     ^ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex) 
                                    >> 0x1fU))));
        vcdp->chgBus(c+2065,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divSigned)
                               ? ((0x80000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)
                                   ? VL_NEGATE_I(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)
                                   : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)
                               : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)),32);
        vcdp->chgBus(c+2073,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divSigned)
                               ? ((0x80000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)
                                   ? VL_NEGATE_I(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)
                                   : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)
                               : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)),32);
        vcdp->chgArray(c+2081,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out),80);
        vcdp->chgArray(c+2105,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out),107);
        vcdp->chgBit(c+2137,(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_ar));
        vcdp->chgBit(c+2145,(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_aw));
        vcdp->chgBus(c+2153,(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_random_next),23);
        vcdp->chgBit(c+2161,(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_w));
        vcdp->chgBus(c+2169,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit),5);
        vcdp->chgBus(c+2177,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit),5);
        vcdp->chgBus(c+2185,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit),5);
        vcdp->chgBus(c+2193,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit),5);
        vcdp->chgBus(c+2201,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready),5);
        vcdp->chgBus(c+2209,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready),5);
        vcdp->chgBus(c+2217,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid),5);
        vcdp->chgBus(c+2225,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready),5);
        vcdp->chgBus(c+2233,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast),5);
        vcdp->chgBus(c+2241,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid),5);
        vcdp->chgBus(c+2249,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[0]),4);
        vcdp->chgBus(c+2250,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[1]),4);
        vcdp->chgBus(c+2251,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[2]),4);
        vcdp->chgBus(c+2252,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[3]),4);
        vcdp->chgBus(c+2253,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[4]),4);
        vcdp->chgBus(c+2289,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[0]),4);
        vcdp->chgBus(c+2290,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[1]),4);
        vcdp->chgBus(c+2291,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[2]),4);
        vcdp->chgBus(c+2292,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[3]),4);
        vcdp->chgBus(c+2293,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[4]),4);
        vcdp->chgBus(c+2329,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_0),3);
        vcdp->chgBus(c+2337,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_1),3);
        vcdp->chgBus(c+2345,((7U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid))),3);
        vcdp->chgBus(c+2353,((3U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid) 
                                    >> 3U))),3);
        vcdp->chgBus(c+2361,((7U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid))),3);
        vcdp->chgBus(c+2369,((3U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid) 
                                    >> 3U))),3);
        vcdp->chgBit(c+2377,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty));
        vcdp->chgBit(c+2385,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full));
        vcdp->chgBit(c+2393,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_empty));
        vcdp->chgBit(c+2401,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full));
        vcdp->chgBus(c+2409,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_dir),3);
        vcdp->chgBus(c+2417,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir),3);
        vcdp->chgBus(c+2425,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel),3);
        vcdp->chgBus(c+2433,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int),32);
        vcdp->chgBus(c+2441,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir),3);
        vcdp->chgBus(c+2449,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir),3);
        vcdp->chgBus(c+2457,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int),32);
        vcdp->chgBit(c+2465,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant) 
                              & ((0U == (0x3fU & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                                  >> 0xeU)))
                                  ? (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_enab)
                                  : ((0U != (0x3fU 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                                >> 0xeU))) 
                                     & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab))))));
        vcdp->chgBus(c+2473,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)
                               ? ((((0U != (0x3fU & 
                                            (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                             >> 0xeU)))
                                     ? (0xffffffU & 
                                        (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__REG_DAT_T 
                                         >> 8U)) : 0U) 
                                   << 8U) | (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datao))
                               : 0U)),32);
        vcdp->chgBit(c+2481,(((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)) 
                              & ((0U == (0x3fU & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                                  >> 0xeU)))
                                  ? (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_enab)
                                  : ((0U != (0x3fU 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                                >> 0xeU))) 
                                     & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab))))));
        vcdp->chgBus(c+2489,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datao_cpu),8);
        vcdp->chgBit(c+2497,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_word_trans_cpu));
        vcdp->chgBus(c+2505,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)
                               ? 0U : ((0U != (0x3fU 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                                  >> 0xeU)))
                                        ? (0xffffffU 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__REG_DAT_T 
                                              >> 8U))
                                        : 0U))),24);
        vcdp->chgBit(c+2513,((0U == (0x3fU & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                              >> 0xeU)))));
        vcdp->chgBit(c+2521,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_enab));
        vcdp->chgBit(c+2529,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw));
        vcdp->chgBit(c+2537,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_psel));
        vcdp->chgBus(c+2545,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr),20);
        vcdp->chgBus(c+2553,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai),8);
        vcdp->chgBus(c+2561,((0xffU & ((4U & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)
                                        ? ((2U & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)
                                            ? ((1U 
                                                & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)
                                                ? (
                                                   (0x80U 
                                                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))
                                                    ? (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fi_di_reg)
                                                    : (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg))
                                                : (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr))
                                            : ((1U 
                                                & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)
                                                ? (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr)
                                                : 0U))
                                        : ((2U & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)
                                            ? ((1U 
                                                & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)
                                                ? (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr)
                                                : (
                                                   (0x80U 
                                                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))
                                                    ? 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl 
                                                    >> 0x10U)
                                                    : 
                                                   (0xc0U 
                                                    | (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir))))
                                            : ((1U 
                                                & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)
                                                ? (
                                                   (0x80U 
                                                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))
                                                    ? 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl 
                                                    >> 8U)
                                                    : (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier))
                                                : (
                                                   (0x80U 
                                                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))
                                                    ? vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl
                                                    : 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_data_out) 
                                                    >> 3U))))))),8);
        vcdp->chgBit(c+2569,((0U != (0x3fU & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                              >> 0xeU)))));
        vcdp->chgBit(c+2577,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab));
        vcdp->chgBit(c+2585,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel));
        vcdp->chgBus(c+2593,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_datai),32);
        vcdp->chgBus(c+2601,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__REG_DAT_T),32);
        vcdp->chgBit(c+2609,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_ready));
        vcdp->chgBit(c+2617,(((0U == (0x3fU & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                               >> 0xeU)))
                               ? (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_enab)
                               : ((0U != (0x3fU & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                                   >> 0xeU))) 
                                  & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab)))));
        vcdp->chgBit(c+2625,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_psel));
        vcdp->chgBit(c+2633,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_enab));
        vcdp->chgBus(c+2641,(((0U != (0x3fU & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                               >> 0xeU)))
                               ? (0xffffffU & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__REG_DAT_T 
                                               >> 8U))
                               : 0U)),24);
        vcdp->chgBus(c+2649,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datao),8);
        vcdp->chgBus(c+2657,((0xffU & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)),8);
        vcdp->chgBit(c+2665,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we));
        vcdp->chgBit(c+2673,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__re));
        vcdp->chgBit(c+2681,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__rx_en));
        vcdp->chgBit(c+2689,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode));
        vcdp->chgBus(c+2697,((7U & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)),3);
        vcdp->chgBus(c+2705,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__trigger_level),4);
        vcdp->chgBit(c+2713,((((0U == (3U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg))) 
                               | (1U == (3U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))) 
                              | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode) 
                                 & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                                       >> 2U))))));
        vcdp->chgBus(c+2721,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr),8);
        vcdp->chgBit(c+2729,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0));
        vcdp->chgBit(c+2737,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_data_out) 
                                    >> 1U))));
        vcdp->chgBit(c+2745,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_data_out))));
        vcdp->chgBit(c+2753,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_data_out) 
                                    >> 2U))));
        vcdp->chgBit(c+2761,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5));
        vcdp->chgBit(c+2769,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6));
        vcdp->chgBit(c+2777,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7));
        vcdp->chgBit(c+2785,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask));
        vcdp->chgBit(c+2793,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int));
        vcdp->chgBit(c+2801,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int));
        vcdp->chgBit(c+2809,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int));
        vcdp->chgBit(c+2817,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int));
        vcdp->chgBit(c+2825,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int));
        vcdp->chgBit(c+2833,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_push));
        vcdp->chgBus(c+2841,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_data_out),11);
        vcdp->chgBus(c+2849,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value),8);
        vcdp->chgBit(c+2857,((1U & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode)) 
                                    | ((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate)) 
                                       & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error) 
                                           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time) 
                                              == (7U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__repeat_reg))))) 
                                          | (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error))))))));
        vcdp->chgBit(c+2865,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time) 
                                == (7U & ((IData)(1U) 
                                          + (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__repeat_reg)))) 
                               & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode)) 
                              & (2U == (3U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg))))));
        vcdp->chgBit(c+2873,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_out));
        vcdp->chgBit(c+2881,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_in));
        vcdp->chgBit(c+2889,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_push_pulse));
        vcdp->chgBit(c+2897,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask_condition));
        vcdp->chgBit(c+2905,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir_read));
        vcdp->chgBit(c+2913,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr_read));
        vcdp->chgBit(c+2921,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fifo_read));
        vcdp->chgBit(c+2929,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fifo_write));
        vcdp->chgBus(c+2937,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_next),9);
        vcdp->chgBit(c+2945,((1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_cnt) 
                                     ^ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_next)) 
                                    >> 8U))));
        vcdp->chgBit(c+2953,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int) 
                              & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_d)))));
        vcdp->chgBit(c+2961,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int) 
                              & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_d)))));
        vcdp->chgBit(c+2969,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int) 
                              & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_d)))));
        vcdp->chgBit(c+2977,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int) 
                              & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_d)))));
        vcdp->chgBit(c+2985,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int) 
                              & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_d)))));
        vcdp->chgBit(c+2993,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__enable) 
                              & (((0U == (3U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg))) 
                                  | (1U == (3U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))) 
                                 | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode) 
                                    & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                                          >> 2U)))))));
        vcdp->chgBit(c+3001,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____Vcellinp__receiver__enable));
        vcdp->chgBus(c+3009,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value),10);
        vcdp->chgBus(c+3017,((0xffU & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value) 
                                       >> 2U))),8);
        vcdp->chgBus(c+3025,((0x7ffU & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)),11);
        vcdp->chgBit(c+3033,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
                              & (0x40U == (0x7ffU & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)))));
        vcdp->chgBit(c+3041,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY));
        vcdp->chgBit(c+3049,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT0));
        vcdp->chgBit(c+3057,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT1));
        vcdp->chgBit(c+3065,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT2));
        vcdp->chgBit(c+3073,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT3));
        vcdp->chgBit(c+3081,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
                              & (0x10U == (0x7ffU & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)))));
        vcdp->chgBit(c+3089,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
                              & (0x14U == (0x7ffU & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)))));
        vcdp->chgBit(c+3097,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT6));
        vcdp->chgBit(c+3105,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT7));
        vcdp->chgBit(c+3113,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT8));
        vcdp->chgBit(c+3121,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT9));
        vcdp->chgBit(c+3129,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT10));
        vcdp->chgBit(c+3137,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT11));
        vcdp->chgBit(c+3145,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT));
        vcdp->chgBus(c+3153,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_pre_o),4);
        vcdp->chgBus(c+3161,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY_post_i),4);
        vcdp->chgBus(c+3169,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr_incr),32);
        vcdp->chgBus(c+3177,((((VL_NEGATE_I((IData)(
                                                    (0U 
                                                     == (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst)))) 
                                & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr) 
                               | (VL_NEGATE_I((IData)(
                                                      (1U 
                                                       == (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst)))) 
                                  & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr_incr)) 
                              | (VL_NEGATE_I((IData)(
                                                     (2U 
                                                      == (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst)))) 
                                 & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr_wrap))),32);
        vcdp->chgBus(c+3185,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr_wrap),32);
        vcdp->chgBit(c+3193,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen_last));
        vcdp->chgBus(c+3201,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_incr),32);
        vcdp->chgBus(c+3209,((((VL_NEGATE_I((IData)(
                                                    (0U 
                                                     == (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst)))) 
                                & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr) 
                               | (VL_NEGATE_I((IData)(
                                                      (1U 
                                                       == (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst)))) 
                                  & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_incr)) 
                              | (VL_NEGATE_I((IData)(
                                                     (2U 
                                                      == (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst)))) 
                                 & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_wrap))),32);
        vcdp->chgBus(c+3217,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_wrap),32);
        vcdp->chgBit(c+3225,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_allow_out));
        vcdp->chgBus(c+3233,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_incr),32);
        vcdp->chgBus(c+3241,((((VL_NEGATE_I((IData)(
                                                    (0U 
                                                     == (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)))) 
                                & vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr) 
                               | (VL_NEGATE_I((IData)(
                                                      (1U 
                                                       == (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)))) 
                                  & vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_incr)) 
                              | (VL_NEGATE_I((IData)(
                                                     (2U 
                                                      == (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)))) 
                                 & vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_wrap))),32);
        vcdp->chgBus(c+3249,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_wrap),32);
        vcdp->chgBit(c+3257,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen_last));
        vcdp->chgBus(c+3265,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_incr),32);
        vcdp->chgBus(c+3273,((((VL_NEGATE_I((IData)(
                                                    (0U 
                                                     == (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst)))) 
                                & vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr) 
                               | (VL_NEGATE_I((IData)(
                                                      (1U 
                                                       == (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst)))) 
                                  & vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_incr)) 
                              | (VL_NEGATE_I((IData)(
                                                     (2U 
                                                      == (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst)))) 
                                 & vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_wrap))),32);
        vcdp->chgBus(c+3281,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_wrap),32);
        vcdp->chgBit(c+3289,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_allow_out));
    }
}

void Vsimu_top::traceChgThis__6(Vsimu_top__Syms* __restrict vlSymsp, VerilatedFst* vcdp, uint32_t code) {
    Vsimu_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*127:0*/ __Vtemp100[4];
    // Body
    {
        vcdp->chgBit(c+3297,((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req) 
                               & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req_or))) 
                              & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__data_back))));
        vcdp->chgBit(c+3305,((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req) 
                               & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req_or)) 
                              & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__data_back))));
        vcdp->chgBus(c+3313,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp_valid)
                               ? ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp_valid)
                                   ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp
                                   : 0U) : vlTOPp->simu_top__DOT__soc__DOT__m0_rdata)),32);
        vcdp->chgBus(c+3321,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid)
                               ? ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid)
                                   ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp
                                   : 0U) : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData)),32);
        vcdp->chgBus(c+3329,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp_valid)
                               ? ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp_valid)
                                   ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp
                                   : 0U) : vlTOPp->simu_top__DOT__soc__DOT__m0_rdata)),32);
        vcdp->chgBus(c+3337,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid)
                               ? ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid)
                                   ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp
                                   : 0U) : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData)),32);
        vcdp->chgQuad(c+3345,((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__pipeline_data)) 
                                << 0x20U) | (QData)((IData)(
                                                            ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp_valid)
                                                              ? 
                                                             ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp_valid)
                                                               ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp
                                                               : 0U)
                                                              : vlTOPp->simu_top__DOT__soc__DOT__m0_rdata))))),64);
        __Vtemp100[0U] = ((0xfffffff0U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0U] 
                                          << 4U)) | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem));
        __Vtemp100[1U] = ((0xfU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0U] 
                                   >> 0x1cU)) | (0xfffffff0U 
                                                 & ((IData)(
                                                            (((QData)((IData)(
                                                                              vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid)
                                                                                 ? 
                                                                                ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid)
                                                                                 ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp
                                                                                 : 0U)
                                                                                 : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData))))) 
                                                    << 4U)));
        __Vtemp100[2U] = ((0xfU & ((IData)((((QData)((IData)(
                                                             vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid)
                                                                ? 
                                                               ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid)
                                                                 ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp
                                                                 : 0U)
                                                                : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData))))) 
                                   >> 0x1cU)) | (0xfffffff0U 
                                                 & ((IData)(
                                                            ((((QData)((IData)(
                                                                               vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid)
                                                                                 ? 
                                                                                ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid)
                                                                                 ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp
                                                                                 : 0U)
                                                                                 : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData)))) 
                                                             >> 0x20U)) 
                                                    << 4U)));
        __Vtemp100[3U] = ((0x600U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U]) 
                          | ((0x1f0U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U] 
                                        << 4U)) | (0xfU 
                                                   & ((IData)(
                                                              ((((QData)((IData)(
                                                                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[1U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid)
                                                                                 ? 
                                                                                ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid)
                                                                                 ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp
                                                                                 : 0U)
                                                                                 : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData)))) 
                                                               >> 0x20U)) 
                                                      >> 0x1cU))));
        vcdp->chgArray(c+3361,(__Vtemp100),107);
        vcdp->chgBit(c+3393,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_arvalid) 
                              & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_arready))));
        vcdp->chgBit(c+3401,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_awvalid) 
                              & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_awready))));
        vcdp->chgBit(c+3409,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_wvalid) 
                              & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_wready))));
        vcdp->chgBus(c+3417,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[0]),32);
        vcdp->chgBus(c+3418,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[1]),32);
        vcdp->chgBus(c+3419,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[2]),32);
        vcdp->chgBus(c+3420,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[3]),32);
        vcdp->chgBus(c+3421,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[4]),32);
        vcdp->chgBit(c+3457,((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty)) 
                               & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_wvalid)) 
                              & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_wready))));
        vcdp->chgBit(c+3465,(((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_empty)) 
                                & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_rvalid)) 
                               & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_rready)) 
                              & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_rlast))));
        vcdp->chgBit(c+3473,(((((8U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm)) 
                                & (IData)(vlTOPp->simu_top__DOT__soc__DOT__apb_s_rlast)) 
                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                  >> 2U)) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__apb_s_bvalid) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                                >> 2U)))));
        vcdp->chgBus(c+3481,(((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm))
                               ? ((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                           | (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid)) 
                                          >> 2U) & 
                                         ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr) 
                                              | (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd))) 
                                          & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)))))
                                   ? 2U : 1U) : ((2U 
                                                  == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm))
                                                  ? 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr)
                                                   ? 8U
                                                   : 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd)
                                                    ? 8U
                                                    : 2U))
                                                  : 
                                                 ((8U 
                                                   == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm))
                                                   ? 
                                                  (((((8U 
                                                       == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm)) 
                                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__apb_s_rlast)) 
                                                     & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                                        >> 2U)) 
                                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__apb_s_bvalid) 
                                                       & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                                          >> 2U)))
                                                    ? 1U
                                                    : 8U)
                                                   : 1U)))),4);
        vcdp->chgBit(c+3489,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en) 
                              & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen_last)))));
        vcdp->chgBit(c+3497,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop) 
                              & (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid))));
        vcdp->chgBit(c+3505,((1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                     >> 3U) | (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rvalid))))));
        vcdp->chgBit(c+3513,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en) 
                              & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wlast)))));
        vcdp->chgBit(c+3521,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) 
                              & (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid))));
        vcdp->chgBit(c+3529,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) 
                              & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop) 
                                 | (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid))))));
        vcdp->chgBit(c+3537,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop) 
                              & (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid))));
        vcdp->chgBit(c+3545,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_en) 
                              & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen_last)))));
        vcdp->chgBit(c+3553,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop) 
                              & (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid))));
        vcdp->chgBit(c+3561,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                    | (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rvalid))))));
        vcdp->chgBit(c+3569,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en) 
                              & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wlast)))));
        vcdp->chgBit(c+3577,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) 
                              & (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid))));
        vcdp->chgBit(c+3585,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) 
                              & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop) 
                                 | (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid))))));
        vcdp->chgBit(c+3593,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop) 
                              & (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid))));
        vcdp->chgBit(c+3601,(((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                              & (0x8000U == (0xffffU 
                                             & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        vcdp->chgBit(c+3609,(((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                              & (0x8010U == (0xffffU 
                                             & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        vcdp->chgBit(c+3617,(((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                              & (0x8020U == (0xffffU 
                                             & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        vcdp->chgBit(c+3625,(((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                              & (0x8030U == (0xffffU 
                                             & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        vcdp->chgBit(c+3633,(((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                              & (0x8040U == (0xffffU 
                                             & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        vcdp->chgBit(c+3641,(((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                              & (0x8050U == (0xffffU 
                                             & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        vcdp->chgBit(c+3649,(((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                              & (0x8060U == (0xffffU 
                                             & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        vcdp->chgBit(c+3657,(((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                              & (0x8070U == (0xffffU 
                                             & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        vcdp->chgBit(c+3665,(((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                              & (0xff00U == (0xffffU 
                                             & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        vcdp->chgBit(c+3673,(((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                              & (0xff30U == (0xffffU 
                                             & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        vcdp->chgBit(c+3681,(((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                              & (0xff40U == (0xffffU 
                                             & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        vcdp->chgBit(c+3689,(((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                              & (0xf020U == (0xffffU 
                                             & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        vcdp->chgBit(c+3697,(((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                              & (0xf030U == (0xffffU 
                                             & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        vcdp->chgBit(c+3705,(((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                              & (0xf040U == (0xffffU 
                                             & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        vcdp->chgBit(c+3713,(((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                              & (0xf050U == (0xffffU 
                                             & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
    }
}

void Vsimu_top::traceChgThis__7(Vsimu_top__Syms* __restrict vlSymsp, VerilatedFst* vcdp, uint32_t code) {
    Vsimu_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp104[3];
    // Body
    {
        __Vtemp104[0U] = (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluout_ex)) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0U]))));
        __Vtemp104[1U] = (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluout_ex)) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0U]))) 
                                  >> 0x20U));
        __Vtemp104[2U] = ((0xf800U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                      >> 6U)) | ((0x600U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                                     >> 6U)) 
                                                 | ((0xffffffe0U 
                                                     & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem) 
                                                        << 5U)) 
                                                    | (0x1fU 
                                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U]))));
        vcdp->chgArray(c+3721,(__Vtemp104),80);
    }
}

void Vsimu_top::traceChgThis__8(Vsimu_top__Syms* __restrict vlSymsp, VerilatedFst* vcdp, uint32_t code) {
    Vsimu_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+3745,(vlTOPp->simu_top__DOT__soc__DOT__m0_rdata),32);
        vcdp->chgBit(c+3753,(vlTOPp->simu_top__DOT__soc__DOT__m0_awvalid));
        vcdp->chgBit(c+3761,(vlTOPp->simu_top__DOT__soc__DOT__m0_wvalid));
        vcdp->chgBit(c+3769,(vlTOPp->simu_top__DOT__soc__DOT__m0_bready));
        vcdp->chgBit(c+3777,(vlTOPp->simu_top__DOT__soc__DOT__m0_arvalid));
        vcdp->chgBit(c+3785,(vlTOPp->simu_top__DOT__soc__DOT__m0_rready));
        vcdp->chgBit(c+3793,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid))));
        vcdp->chgBit(c+3801,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid))));
        vcdp->chgBit(c+3809,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready))));
        vcdp->chgBit(c+3817,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid))));
        vcdp->chgBit(c+3825,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready))));
        vcdp->chgBit(c+3833,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                    >> 3U))));
        vcdp->chgBit(c+3841,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
                                    >> 3U))));
        vcdp->chgBit(c+3849,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                    >> 3U))));
        vcdp->chgBit(c+3857,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                    >> 3U))));
        vcdp->chgBit(c+3865,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                    >> 3U))));
        vcdp->chgBit(c+3873,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                    >> 2U))));
        vcdp->chgBit(c+3881,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
                                    >> 2U))));
        vcdp->chgBit(c+3889,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                    >> 2U))));
        vcdp->chgBit(c+3897,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                    >> 2U))));
        vcdp->chgBit(c+3905,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                    >> 2U))));
        vcdp->chgBit(c+3913,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en));
        vcdp->chgBus(c+3921,(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen),4);
        vcdp->chgBit(c+3929,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__req_inst));
        vcdp->chgBit(c+3937,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_ready_go));
        vcdp->chgBit(c+3945,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_allow_in));
        vcdp->chgBit(c+3953,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_ready_go));
        vcdp->chgBit(c+3961,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_valid_in));
        vcdp->chgBit(c+3969,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_allow_in));
        vcdp->chgBit(c+3977,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_allow_in));
        vcdp->chgBit(c+3985,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_ready_go));
        vcdp->chgBit(c+3993,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_valid_in));
        vcdp->chgBit(c+4001,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__divNeed) 
                                    >> 1U))));
        vcdp->chgBit(c+4009,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__divNeed))));
        vcdp->chgBus(c+4017,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData),32);
        vcdp->chgBit(c+4025,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__allow_out));
        vcdp->chgBit(c+4033,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT____Vcellinp__myDiv__clk));
        vcdp->chgBit(c+4041,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__divNeed))));
        vcdp->chgBit(c+4049,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__data_back));
        vcdp->chgBit(c+4057,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                    >> 1U))));
        vcdp->chgBit(c+4065,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
                                    >> 1U))));
        vcdp->chgBit(c+4073,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                    >> 1U))));
        vcdp->chgBit(c+4081,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                    >> 1U))));
        vcdp->chgBit(c+4089,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                    >> 1U))));
        vcdp->chgBit(c+4097,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                    >> 4U))));
        vcdp->chgBit(c+4105,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
                                    >> 4U))));
        vcdp->chgBit(c+4113,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                    >> 4U))));
        vcdp->chgBit(c+4121,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                    >> 4U))));
        vcdp->chgBit(c+4129,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                    >> 4U))));
        vcdp->chgBus(c+4137,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid),5);
        vcdp->chgBus(c+4145,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid),5);
        vcdp->chgBus(c+4153,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready),5);
        vcdp->chgBus(c+4161,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid),5);
        vcdp->chgBus(c+4169,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready),5);
        vcdp->chgBit(c+4177,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_dir_ins));
        vcdp->chgBit(c+4185,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_dir_ins));
        vcdp->chgBit(c+4193,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_cpu));
        vcdp->chgBit(c+4201,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NANDtag));
        vcdp->chgBit(c+4209,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_push));
        vcdp->chgBit(c+4217,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop));
        vcdp->chgBit(c+4225,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push));
        vcdp->chgBit(c+4233,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_push));
        vcdp->chgBit(c+4241,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_push));
        vcdp->chgBit(c+4249,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop));
        vcdp->chgBit(c+4257,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_push));
        vcdp->chgBit(c+4265,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_push));
        vcdp->chgBit(c+4273,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop));
        vcdp->chgBit(c+4281,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_push));
        vcdp->chgBit(c+4289,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en));
        vcdp->chgBit(c+4297,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_go));
        vcdp->chgBit(c+4305,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_push));
        vcdp->chgBit(c+4313,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop));
        vcdp->chgBit(c+4321,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_push));
        vcdp->chgBit(c+4329,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_push));
        vcdp->chgBit(c+4337,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_en));
        vcdp->chgBit(c+4345,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_push));
        vcdp->chgBit(c+4353,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop));
        vcdp->chgBit(c+4361,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_push));
        vcdp->chgBit(c+4369,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_push));
        vcdp->chgBit(c+4377,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop));
        vcdp->chgBit(c+4385,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_push));
        vcdp->chgBit(c+4393,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en));
        vcdp->chgBit(c+4401,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_go));
        vcdp->chgBit(c+4409,((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen))));
        vcdp->chgBit(c+4417,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__write_timer));
        vcdp->chgBit(c+4425,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__write_uart_valid));
        vcdp->chgBus(c+4433,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__next_state),3);
        vcdp->chgBus(c+4441,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__btn_key_tmp),16);
    }
}

void Vsimu_top::traceChgThis__9(Vsimu_top__Syms* __restrict vlSymsp, VerilatedFst* vcdp, uint32_t code) {
    Vsimu_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+4449,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluout_ex),32);
        vcdp->chgBus(c+4457,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluout_ex),32);
        vcdp->chgQuad(c+4465,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__unnamedblk1__DOT__mul_result),64);
        vcdp->chgQuad(c+4481,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__unnamedblk2__DOT__mul_result),64);
        vcdp->chgQuad(c+4497,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__minuend_next),33);
        vcdp->chgQuad(c+4513,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__difference),33);
        vcdp->chgBit(c+4529,((1U & (~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__difference 
                                               >> 0x20U))))));
    }
}

void Vsimu_top::traceChgThis__10(Vsimu_top__Syms* __restrict vlSymsp, VerilatedFst* vcdp, uint32_t code) {
    Vsimu_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp106[3];
    WData/*95:0*/ __Vtemp107[3];
    // Body
    {
        vcdp->chgBit(c+4537,((0x21U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__count))));
        vcdp->chgBus(c+4545,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_u),32);
        vcdp->chgBus(c+4553,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__remainder_u),32);
        vcdp->chgBus(c+4561,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__dividend_reg),32);
        vcdp->chgQuad(c+4569,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__minuend),33);
        vcdp->chgBus(c+4585,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__count),6);
        __Vtemp106[0U] = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__dividend_reg;
        __Vtemp106[1U] = (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__minuend);
        __Vtemp106[2U] = (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__minuend 
                                  >> 0x20U));
        VL_SHIFTL_WWI(65,65,32, __Vtemp107, __Vtemp106, 1U);
        vcdp->chgBus(c+4593,(__Vtemp107[0U]),32);
    }
}

void Vsimu_top::traceChgThis__11(Vsimu_top__Syms* __restrict vlSymsp, VerilatedFst* vcdp, uint32_t code) {
    Vsimu_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+4601,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r),32);
        vcdp->chgBus(c+4609,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_size_r),3);
        vcdp->chgBus(c+4617,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wdata_r),32);
        vcdp->chgBus(c+4625,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wstrb_r),4);
        vcdp->chgBit(c+4633,((1U & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid)))));
        vcdp->chgBus(c+4641,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_data),4);
        vcdp->chgBit(c+4649,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid));
        vcdp->chgBit(c+4657,((1U & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid)))));
        vcdp->chgBus(c+4665,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rid),4);
        vcdp->chgBit(c+4673,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rlast));
        vcdp->chgBit(c+4681,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rvalid));
        vcdp->chgBit(c+4689,((1U & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid)))));
        vcdp->chgBus(c+4697,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_data),4);
        vcdp->chgBit(c+4705,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid));
        vcdp->chgBit(c+4713,((1U & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid)))));
        vcdp->chgBus(c+4721,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rid),4);
        vcdp->chgBus(c+4729,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__conf_rdata_reg),32);
        vcdp->chgBit(c+4737,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rlast));
        vcdp->chgBit(c+4745,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rvalid));
        vcdp->chgBit(c+4753,(vlTOPp->simu_top__DOT__soc__DOT__apb_s_awready));
        vcdp->chgBit(c+4761,(vlTOPp->simu_top__DOT__soc__DOT__apb_s_wready));
        vcdp->chgBus(c+4769,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_w_id),4);
        vcdp->chgBit(c+4777,(vlTOPp->simu_top__DOT__soc__DOT__apb_s_bvalid));
        vcdp->chgBit(c+4785,(vlTOPp->simu_top__DOT__soc__DOT__apb_s_arready));
        vcdp->chgBus(c+4793,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_r_id),4);
        vcdp->chgBus(c+4801,(((0U == (3U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb)))
                               ? vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32
                               : ((1U == (3U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb)))
                                   ? (0xffffff00U & 
                                      (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                                       << 8U)) : ((2U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb)))
                                                   ? 
                                                  (0xffff0000U 
                                                   & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                                                      << 0x10U))
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb)))
                                                    ? 
                                                   (0xff000000U 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                                                       << 0x18U))
                                                    : 0U))))),32);
        vcdp->chgBit(c+4809,(vlTOPp->simu_top__DOT__soc__DOT__apb_s_rlast));
        vcdp->chgBit(c+4817,(vlTOPp->simu_top__DOT__soc__DOT__apb_s_rvalid));
        vcdp->chgBus(c+4825,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr),32);
        vcdp->chgBus(c+4833,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr),32);
        vcdp->chgBus(c+4841,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata),32);
        vcdp->chgBus(c+4849,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__uart0_int) 
                              << 1U)),8);
        vcdp->chgBit(c+4857,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                    >> 1U))));
        vcdp->chgBit(c+4865,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr))));
        vcdp->chgBit(c+4873,(vlTOPp->simu_top__DOT__soc__DOT__uart0_int));
        vcdp->chgBit(c+4881,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_reg) 
                                    ^ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                                       >> 3U)))));
        vcdp->chgBit(c+4889,((1U & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req)))));
        vcdp->chgBus(c+4897,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__pipeline_data),32);
        vcdp->chgBus(c+4905,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__pipeline_data),32);
        vcdp->chgBit(c+4913,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_valid) 
                              & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_ready_go))));
        vcdp->chgBus(c+4921,(((IData)(4U) + vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__pipeline_data)),32);
        vcdp->chgBus(c+4929,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp),32);
        vcdp->chgBit(c+4937,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp_valid));
        vcdp->chgBus(c+4945,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp),32);
        vcdp->chgBit(c+4953,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid));
        vcdp->chgBit(c+4961,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__pipeline_valid));
        vcdp->chgBit(c+4969,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__pipeline_valid));
        vcdp->chgQuad(c+4977,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__pipeline_data),64);
        vcdp->chgBus(c+4993,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[0]),32);
        vcdp->chgBus(c+4994,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[1]),32);
        vcdp->chgBus(c+4995,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[2]),32);
        vcdp->chgBus(c+4996,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[3]),32);
        vcdp->chgBus(c+4997,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[4]),32);
        vcdp->chgBus(c+4998,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[5]),32);
        vcdp->chgBus(c+4999,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[6]),32);
        vcdp->chgBus(c+5000,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[7]),32);
        vcdp->chgBus(c+5001,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[8]),32);
        vcdp->chgBus(c+5002,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[9]),32);
        vcdp->chgBus(c+5003,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[10]),32);
        vcdp->chgBus(c+5004,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[11]),32);
        vcdp->chgBus(c+5005,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[12]),32);
        vcdp->chgBus(c+5006,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[13]),32);
        vcdp->chgBus(c+5007,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[14]),32);
        vcdp->chgBus(c+5008,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[15]),32);
        vcdp->chgBus(c+5009,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[16]),32);
        vcdp->chgBus(c+5010,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[17]),32);
        vcdp->chgBus(c+5011,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[18]),32);
        vcdp->chgBus(c+5012,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[19]),32);
        vcdp->chgBus(c+5013,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[20]),32);
        vcdp->chgBus(c+5014,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[21]),32);
        vcdp->chgBus(c+5015,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[22]),32);
        vcdp->chgBus(c+5016,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[23]),32);
        vcdp->chgBus(c+5017,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[24]),32);
        vcdp->chgBus(c+5018,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[25]),32);
        vcdp->chgBus(c+5019,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[26]),32);
        vcdp->chgBus(c+5020,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[27]),32);
        vcdp->chgBus(c+5021,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[28]),32);
        vcdp->chgBus(c+5022,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[29]),32);
        vcdp->chgBus(c+5023,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[30]),32);
        vcdp->chgBus(c+5024,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[31]),32);
        vcdp->chgBit(c+5249,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid));
        vcdp->chgArray(c+5257,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data),189);
        vcdp->chgBit(c+5305,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_valid));
        vcdp->chgArray(c+5313,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data),80);
        vcdp->chgBit(c+5337,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_valid));
        vcdp->chgArray(c+5345,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data),107);
        vcdp->chgBit(c+5377,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req));
        vcdp->chgBit(c+5385,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req_or));
        vcdp->chgBit(c+5393,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wr_r));
        vcdp->chgBus(c+5401,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_size_r),2);
        vcdp->chgBit(c+5409,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__addr_rcv));
        vcdp->chgBit(c+5417,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__wdata_rcv));
        vcdp->chgBit(c+5425,(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_ar_disable));
        vcdp->chgBit(c+5433,((1U & vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_random)));
        vcdp->chgBit(c+5441,(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_aw_disable));
        vcdp->chgBit(c+5449,((1U & (vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                    >> 1U))));
        vcdp->chgBit(c+5457,((1U & (vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                    >> 2U))));
        vcdp->chgBit(c+5465,(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_no_delay));
        vcdp->chgBit(c+5473,((1U & (vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                    >> 3U))));
        vcdp->chgBus(c+5481,(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_random),23);
        vcdp->chgBit(c+5489,(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_short_delay));
        vcdp->chgBit(c+5497,(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_w_disable));
        vcdp->chgBit(c+5505,((1U & (vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                    >> 4U))));
        vcdp->chgBus(c+5513,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_pre_sel),3);
        vcdp->chgBit(c+5521,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog));
        vcdp->chgBus(c+5529,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel_reg),3);
        vcdp->chgBit(c+5537,((1U & (~ ((0x1fe0U == 
                                        (0xffffU & 
                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r 
                                          >> 0x10U))) 
                                       | ((0x1fafU 
                                           == (0x1fffU 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r 
                                                  >> 0x10U))) 
                                          | (0x1fd0U 
                                             == (0x1fffU 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r 
                                                    >> 0x10U)))))))));
        vcdp->chgBus(c+5545,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_pre_sel),3);
        vcdp->chgBit(c+5553,((1U & (~ (((0x1fafU == 
                                         (0x1fffU & 
                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r 
                                           >> 0x10U))) 
                                        | (0x1fd0U 
                                           == (0x1fffU 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r 
                                                  >> 0x10U)))) 
                                       | (0x1fe0U == 
                                          (0xffffU 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r 
                                              >> 0x10U))))))));
        vcdp->chgBus(c+5561,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram[0]),3);
        vcdp->chgBus(c+5562,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram[1]),3);
        vcdp->chgBus(c+5577,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr),2);
        vcdp->chgBus(c+5585,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr),2);
        vcdp->chgBit(c+5593,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr))));
        vcdp->chgBit(c+5601,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr))));
        vcdp->chgBus(c+5609,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__i),32);
        vcdp->chgBus(c+5617,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram[0]),3);
        vcdp->chgBus(c+5618,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram[1]),3);
        vcdp->chgBus(c+5633,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr),2);
        vcdp->chgBus(c+5641,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr),2);
        vcdp->chgBit(c+5649,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr))));
        vcdp->chgBit(c+5657,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr))));
        vcdp->chgBus(c+5665,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__i),32);
        vcdp->chgBit(c+5673,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant));
        vcdp->chgBit(c+5681,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ));
        vcdp->chgBit(c+5689,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr));
        vcdp->chgBit(c+5697,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu));
        vcdp->chgBit(c+5705,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu));
        vcdp->chgBus(c+5713,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr),20);
        vcdp->chgBus(c+5721,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datai_cpu),8);
        vcdp->chgBus(c+5729,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_high_24b_wr),24);
        vcdp->chgBit(c+5737,((1U & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)))));
        vcdp->chgBit(c+5745,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd));
        vcdp->chgBus(c+5753,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm),4);
        vcdp->chgBus(c+5761,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb),4);
        vcdp->chgBus(c+5769,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb),4);
        vcdp->chgBus(c+5777,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32),32);
        vcdp->chgBus(c+5785,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32),32);
        vcdp->chgBus(c+5793,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count),3);
        vcdp->chgBus(c+5801,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size),3);
        vcdp->chgBus(c+5809,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_wr_size),3);
        vcdp->chgBus(c+5817,((0xffffffU & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)
                                            ? (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_wdata_dma 
                                               >> 8U)
                                            : vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_high_24b_wr))),24);
        vcdp->chgBit(c+5825,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__tx2rx_en));
        vcdp->chgBit(c+5833,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__enable));
        vcdp->chgBit(c+5841,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__srx_pad));
        vcdp->chgBus(c+5849,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier),4);
        vcdp->chgBus(c+5857,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir),4);
        vcdp->chgBus(c+5865,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fcr),2);
        vcdp->chgBus(c+5873,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr),5);
        vcdp->chgBit(c+5881,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__infrared));
        vcdp->chgBit(c+5889,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_pol));
        vcdp->chgBus(c+5897,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr),8);
        vcdp->chgBus(c+5905,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr),8);
        vcdp->chgBus(c+5913,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl),24);
        vcdp->chgBit(c+5921,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__start_dlc));
        vcdp->chgBit(c+5929,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask_d));
        vcdp->chgBit(c+5937,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset));
        vcdp->chgBus(c+5945,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc),16);
        vcdp->chgBit(c+5953,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_reset));
        vcdp->chgBit(c+5961,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tx_reset));
        vcdp->chgBit(c+5969,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                                    >> 7U))));
        vcdp->chgBit(c+5977,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                                    >> 2U))));
        vcdp->chgBit(c+5985,((1U & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                                       >> 2U)))));
        vcdp->chgBit(c+5993,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_reg));
        vcdp->chgBit(c+6001,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_en_reg));
        vcdp->chgBus(c+6009,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg),8);
        vcdp->chgBus(c+6017,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fi_di_reg),8);
        vcdp->chgBus(c+6025,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count),8);
        vcdp->chgBus(c+6033,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__repeat_reg),3);
        vcdp->chgBit(c+6041,((0U == (3U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))));
        vcdp->chgBit(c+6049,((1U == (3U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))));
        vcdp->chgBit(c+6057,((2U == (3U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))));
        vcdp->chgBit(c+6065,((3U == (3U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))));
        vcdp->chgBit(c+6073,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                                    >> 3U))));
        vcdp->chgBit(c+6081,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                    >> 4U))));
        vcdp->chgBit(c+6089,((1U & (((0x10U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr))
                                      ? ((0xcU & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                  << 2U)) 
                                         | ((2U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                   >> 1U)) 
                                            | (1U & 
                                               ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                >> 3U))))
                                      : ((8U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                                << 1U)) 
                                         | ((4U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                                   << 1U)) 
                                            | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                               << 1U)))) 
                                    >> 3U))));
        vcdp->chgBit(c+6097,((1U & (((0x10U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr))
                                      ? ((0xcU & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                  << 2U)) 
                                         | ((2U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                   >> 1U)) 
                                            | (1U & 
                                               ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                >> 3U))))
                                      : ((8U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                                << 1U)) 
                                         | ((4U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                                   << 1U)) 
                                            | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                               << 1U)))) 
                                    >> 2U))));
        vcdp->chgBit(c+6105,((1U & (((0x10U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr))
                                      ? ((0xcU & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                  << 2U)) 
                                         | ((2U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                   >> 1U)) 
                                            | (1U & 
                                               ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                >> 3U))))
                                      : ((8U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                                << 1U)) 
                                         | ((4U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                                   << 1U)) 
                                            | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                               << 1U)))) 
                                    >> 1U))));
        vcdp->chgBit(c+6113,((1U & ((0x10U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr))
                                     ? ((0xcU & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                 << 2U)) 
                                        | ((2U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                  >> 1U)) 
                                           | (1U & 
                                              ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                               >> 3U))))
                                     : ((8U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                               << 1U)) 
                                        | ((4U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                                  << 1U)) 
                                           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                              << 1U)))))));
        vcdp->chgBit(c+6121,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_overrun));
        vcdp->chgBit(c+6129,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0r));
        vcdp->chgBit(c+6137,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr1r));
        vcdp->chgBit(c+6145,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr2r));
        vcdp->chgBit(c+6153,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr3r));
        vcdp->chgBit(c+6161,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr4r));
        vcdp->chgBit(c+6169,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5r));
        vcdp->chgBit(c+6177,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6r));
        vcdp->chgBit(c+6185,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7r));
        vcdp->chgBit(c+6193,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop));
        vcdp->chgBit(c+6201,((0U != (((((((((((((((
                                                   vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                   [0U] 
                                                   | vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                   [1U]) 
                                                  | vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                  [2U]) 
                                                 | vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                 [3U]) 
                                                | vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                [4U]) 
                                               | vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                               [5U]) 
                                              | vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                              [6U]) 
                                             | vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                             [7U]) 
                                            | vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                            [8U]) | 
                                           vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                           [9U]) | 
                                          vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                          [0xaU]) | 
                                         vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                         [0xbU]) | 
                                        vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                        [0xcU]) | vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                       [0xdU]) | vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                      [0xeU]) | vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                     [0xfU]))));
        vcdp->chgBus(c+6209,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count),5);
        vcdp->chgBus(c+6217,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count),5);
        vcdp->chgBus(c+6225,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate),3);
        vcdp->chgBus(c+6233,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate),4);
        vcdp->chgBus(c+6241,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t),10);
        vcdp->chgBit(c+6249,((1U & (~ (IData)((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt)))))));
        vcdp->chgBus(c+6257,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt),8);
        vcdp->chgBus(c+6265,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__delayed_modem_signals),4);
        vcdp->chgBit(c+6273,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0_d));
        vcdp->chgBit(c+6281,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr1_d));
        vcdp->chgBit(c+6289,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr2_d));
        vcdp->chgBit(c+6297,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr3_d));
        vcdp->chgBit(c+6305,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr4_d));
        vcdp->chgBit(c+6313,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5_d));
        vcdp->chgBit(c+6321,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6_d));
        vcdp->chgBit(c+6329,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7_d));
        vcdp->chgBus(c+6337,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_cnt),9);
        vcdp->chgBit(c+6345,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_d));
        vcdp->chgBit(c+6353,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_d));
        vcdp->chgBit(c+6361,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_d));
        vcdp->chgBit(c+6369,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_d));
        vcdp->chgBit(c+6377,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_d));
        vcdp->chgBit(c+6385,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_pnd));
        vcdp->chgBit(c+6393,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_pnd));
        vcdp->chgBit(c+6401,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_pnd));
        vcdp->chgBit(c+6409,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_pnd));
        vcdp->chgBit(c+6417,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_pnd));
        vcdp->chgBit(c+6425,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__d1_fifo_read));
        vcdp->chgBus(c+6433,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter),5);
        vcdp->chgBus(c+6441,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter),3);
        vcdp->chgBus(c+6449,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__shift_out),7);
        vcdp->chgBit(c+6457,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp));
        vcdp->chgBit(c+6465,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor));
        vcdp->chgBit(c+6473,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_pop));
        vcdp->chgBit(c+6481,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_out));
        vcdp->chgBit(c+6489,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error));
        vcdp->chgBus(c+6497,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time),3);
        vcdp->chgBus(c+6505,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_out),8);
        vcdp->chgBit(c+6513,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_overrun));
        vcdp->chgBus(c+6521,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_bak),8);
        vcdp->chgBus(c+6529,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
        vcdp->chgBus(c+6537,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
        vcdp->chgBus(c+6545,((0xfU & ((IData)(1U) + (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
        vcdp->chgBus(c+6553,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
        vcdp->chgBus(c+6554,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
        vcdp->chgBus(c+6555,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
        vcdp->chgBus(c+6556,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
        vcdp->chgBus(c+6557,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
        vcdp->chgBus(c+6558,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
        vcdp->chgBus(c+6559,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
        vcdp->chgBus(c+6560,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
        vcdp->chgBus(c+6561,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
        vcdp->chgBus(c+6562,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
        vcdp->chgBus(c+6563,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
        vcdp->chgBus(c+6564,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
        vcdp->chgBus(c+6565,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
        vcdp->chgBus(c+6566,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
        vcdp->chgBus(c+6567,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
        vcdp->chgBus(c+6568,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
        vcdp->chgBit(c+6681,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__i_uart_sync_flops__DOT__flop_0));
        vcdp->chgBus(c+6689,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16),4);
        vcdp->chgBus(c+6697,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rbit_counter),3);
        vcdp->chgBus(c+6705,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift),8);
        vcdp->chgBit(c+6713,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity));
        vcdp->chgBit(c+6721,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_error));
        vcdp->chgBit(c+6729,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rframing_error));
        vcdp->chgBit(c+6737,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rbit_in));
        vcdp->chgBit(c+6745,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_xor));
        vcdp->chgBus(c+6753,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b),8);
        vcdp->chgBit(c+6761,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push_q));
        vcdp->chgBus(c+6769,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_data_in),11);
        vcdp->chgBit(c+6777,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push));
        vcdp->chgBit(c+6785,((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b))));
        vcdp->chgBit(c+6793,((7U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16))));
        vcdp->chgBit(c+6801,((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16))));
        vcdp->chgBit(c+6809,((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16))));
        vcdp->chgBus(c+6817,((0xfU & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16) 
                                      - (IData)(1U)))),4);
        vcdp->chgBus(c+6825,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__data8_out),8);
        vcdp->chgBus(c+6833,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
        vcdp->chgBus(c+6834,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
        vcdp->chgBus(c+6835,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
        vcdp->chgBus(c+6836,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
        vcdp->chgBus(c+6837,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
        vcdp->chgBus(c+6838,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
        vcdp->chgBus(c+6839,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
        vcdp->chgBus(c+6840,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
        vcdp->chgBus(c+6841,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
        vcdp->chgBus(c+6842,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
        vcdp->chgBus(c+6843,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
        vcdp->chgBus(c+6844,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
        vcdp->chgBus(c+6845,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
        vcdp->chgBus(c+6846,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
        vcdp->chgBus(c+6847,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
        vcdp->chgBus(c+6848,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
        vcdp->chgBus(c+6961,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
        vcdp->chgBus(c+6969,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
        vcdp->chgBus(c+6977,((0xfU & ((IData)(1U) + (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
        vcdp->chgBus(c+6985,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                             [0U]),3);
        vcdp->chgBus(c+6993,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                             [1U]),3);
        vcdp->chgBus(c+7001,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                             [2U]),3);
        vcdp->chgBus(c+7009,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                             [3U]),3);
        vcdp->chgBus(c+7017,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                             [4U]),3);
        vcdp->chgBus(c+7025,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                             [5U]),3);
        vcdp->chgBus(c+7033,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                             [6U]),3);
        vcdp->chgBus(c+7041,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                             [7U]),3);
        vcdp->chgBus(c+7049,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                             [8U]),3);
        vcdp->chgBus(c+7057,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                             [9U]),3);
        vcdp->chgBus(c+7065,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                             [0xaU]),3);
        vcdp->chgBus(c+7073,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                             [0xbU]),3);
        vcdp->chgBus(c+7081,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                             [0xcU]),3);
        vcdp->chgBus(c+7089,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                             [0xdU]),3);
        vcdp->chgBus(c+7097,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                             [0xeU]),3);
        vcdp->chgBus(c+7105,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                             [0xfU]),3);
        vcdp->chgBus(c+7113,((0xffU & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_data_in) 
                                       >> 3U))),8);
        vcdp->chgBus(c+7121,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
        vcdp->chgBus(c+7122,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
        vcdp->chgBus(c+7123,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
        vcdp->chgBus(c+7124,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
        vcdp->chgBus(c+7125,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
        vcdp->chgBus(c+7126,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
        vcdp->chgBus(c+7127,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
        vcdp->chgBus(c+7128,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
        vcdp->chgBus(c+7129,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
        vcdp->chgBus(c+7130,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
        vcdp->chgBus(c+7131,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
        vcdp->chgBus(c+7132,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
        vcdp->chgBus(c+7133,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
        vcdp->chgBus(c+7134,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
        vcdp->chgBus(c+7135,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
        vcdp->chgBus(c+7136,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
        vcdp->chgBit(c+7249,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_int));
        vcdp->chgBus(c+7257,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r0),4);
        vcdp->chgBus(c+7265,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r1),4);
        vcdp->chgBus(c+7273,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_type_r1),2);
        vcdp->chgBus(c+7281,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_type_r2),2);
        vcdp->chgBus(c+7289,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_c),14);
        vcdp->chgBus(c+7297,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r),25);
        vcdp->chgBus(c+7305,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_op_num),32);
        vcdp->chgBus(c+7313,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter),32);
        vcdp->chgBus(c+7321,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0),32);
        vcdp->chgBus(c+7329,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map1),32);
        vcdp->chgBus(c+7337,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_rdy_map0),32);
        vcdp->chgBus(c+7345,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_rdy_map1),32);
        vcdp->chgBus(c+7353,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command),32);
        vcdp->chgBus(c+7361,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing),16);
        vcdp->chgQuad(c+7369,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__addr_in_die),38);
        vcdp->chgBus(c+7385,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE),5);
        vcdp->chgBus(c+7393,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM),32);
        vcdp->chgBus(c+7401,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT),14);
        vcdp->chgBus(c+7409,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT),14);
        vcdp->chgBit(c+7417,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_clr_ack));
        vcdp->chgBit(c+7425,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE));
        vcdp->chgBit(c+7433,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_));
        vcdp->chgBus(c+7441,((0x3fffU & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                         >> 0x10U))),14);
        vcdp->chgBus(c+7449,((7U & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                    >> 0xcU))),3);
        vcdp->chgBus(c+7457,((0xfU & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                      >> 8U))),4);
        vcdp->chgBit(c+7465,((1U & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                    >> 8U))));
        vcdp->chgBit(c+7473,((1U & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                    >> 9U))));
        vcdp->chgBit(c+7481,((1U & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                    >> 0xdU))));
        vcdp->chgBit(c+7489,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_cmd_valid));
        vcdp->chgBus(c+7497,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status),8);
        vcdp->chgBus(c+7505,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_number),2);
        vcdp->chgQuad(c+7513,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM),48);
        vcdp->chgBus(c+7529,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD),32);
        vcdp->chgBus(c+7537,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer),2);
        vcdp->chgBus(c+7545,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT),3);
        vcdp->chgBus(c+7553,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM),8);
        vcdp->chgBus(c+7561,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM),8);
        vcdp->chgBus(c+7569,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND),8);
        vcdp->chgBus(c+7577,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE),5);
        vcdp->chgBus(c+7585,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM),3);
        vcdp->chgBus(c+7593,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count),14);
        vcdp->chgQuad(c+7601,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR),38);
        vcdp->chgBus(c+7617,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_I_WR),32);
        vcdp->chgBit(c+7625,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO));
        vcdp->chgBit(c+7633,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ACK));
        vcdp->chgBit(c+7641,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE));
        vcdp->chgBit(c+7649,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ERASE_SERIAL));
        vcdp->chgBit(c+7657,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half));
        vcdp->chgBit(c+7665,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob));
        vcdp->chgQuad(c+7673,((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst)) 
                                << 0x2bU) | (((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arsize)) 
                                              << 0x28U) 
                                             | (((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen)) 
                                                 << 0x24U) 
                                                | (((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)) 
                                                    << 4U) 
                                                   | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arid))))))),45);
        vcdp->chgBus(c+7689,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst),2);
        vcdp->chgBit(c+7697,((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst))));
        vcdp->chgBit(c+7705,((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst))));
        vcdp->chgBit(c+7713,((2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst))));
        vcdp->chgBus(c+7721,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arid),4);
        vcdp->chgBus(c+7729,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen),4);
        vcdp->chgBus(c+7737,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arsize),3);
        vcdp->chgBit(c+7745,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid));
        vcdp->chgQuad(c+7753,((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r)) 
                                << 0xdU) | (QData)((IData)(
                                                           ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_size_r) 
                                                            << 8U))))),45);
        vcdp->chgQuad(c+7769,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas),45);
        vcdp->chgBus(c+7785,((IData)((vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas 
                                      >> 0xdU))),32);
        vcdp->chgBus(c+7793,((3U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas 
                                            >> 0xbU)))),2);
        vcdp->chgBus(c+7801,((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas))),4);
        vcdp->chgBus(c+7809,((0xfU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas 
                                              >> 4U)))),4);
        vcdp->chgBus(c+7817,((7U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas 
                                            >> 8U)))),3);
        vcdp->chgBit(c+7825,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_valid));
        vcdp->chgBus(c+7833,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rcur),4);
        vcdp->chgQuad(c+7841,((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)) 
                                << 0xdU) | (QData)((IData)(
                                                           (((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst) 
                                                             << 0xbU) 
                                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awsize) 
                                                                << 8U) 
                                                               | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awlen) 
                                                                   << 4U) 
                                                                  | (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awid)))))))),45);
        vcdp->chgBus(c+7857,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst),2);
        vcdp->chgBit(c+7865,((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst))));
        vcdp->chgBit(c+7873,((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst))));
        vcdp->chgBit(c+7881,((2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst))));
        vcdp->chgBus(c+7889,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awid),4);
        vcdp->chgBus(c+7897,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awlen),4);
        vcdp->chgBus(c+7905,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awsize),3);
        vcdp->chgBit(c+7913,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid));
        vcdp->chgQuad(c+7921,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas),45);
        vcdp->chgBus(c+7937,((IData)((vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas 
                                      >> 0xdU))),32);
        vcdp->chgBus(c+7945,((3U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas 
                                            >> 0xbU)))),2);
        vcdp->chgBus(c+7953,((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas))),4);
        vcdp->chgBus(c+7961,((0xfU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas 
                                              >> 4U)))),4);
        vcdp->chgBus(c+7969,((7U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas 
                                            >> 8U)))),3);
        vcdp->chgBit(c+7977,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_valid));
        vcdp->chgBit(c+7985,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid));
        vcdp->chgBus(c+7993,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_datas),4);
        vcdp->chgBit(c+8001,((1U & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid)))));
        vcdp->chgBus(c+8009,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wstrb),4);
        vcdp->chgBit(c+8017,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wlast));
        vcdp->chgBit(c+8025,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wvalid));
        vcdp->chgQuad(c+8033,((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)) 
                                << 0x2bU) | (((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arsize)) 
                                              << 0x28U) 
                                             | (((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen)) 
                                                 << 0x24U) 
                                                | (((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr)) 
                                                    << 4U) 
                                                   | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arid))))))),45);
        vcdp->chgBus(c+8049,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr),32);
        vcdp->chgBus(c+8057,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst),2);
        vcdp->chgBit(c+8065,((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst))));
        vcdp->chgBit(c+8073,((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst))));
        vcdp->chgBit(c+8081,((2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst))));
        vcdp->chgBus(c+8089,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arid),4);
        vcdp->chgBus(c+8097,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen),4);
        vcdp->chgBus(c+8105,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arsize),3);
        vcdp->chgBit(c+8113,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid));
        vcdp->chgQuad(c+8121,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas),45);
        vcdp->chgBus(c+8137,((IData)((vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                                      >> 0xdU))),32);
        vcdp->chgBus(c+8145,((3U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                                            >> 0xbU)))),2);
        vcdp->chgBus(c+8153,((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas))),4);
        vcdp->chgBus(c+8161,((0xfU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                                              >> 4U)))),4);
        vcdp->chgBus(c+8169,((7U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                                            >> 8U)))),3);
        vcdp->chgBit(c+8177,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid));
        vcdp->chgBus(c+8185,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur),4);
        vcdp->chgQuad(c+8193,((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr)) 
                                << 0xdU) | (QData)((IData)(
                                                           (((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst) 
                                                             << 0xbU) 
                                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awsize) 
                                                                << 8U) 
                                                               | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awlen) 
                                                                   << 4U) 
                                                                  | (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awid)))))))),45);
        vcdp->chgBus(c+8209,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr),32);
        vcdp->chgBus(c+8217,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst),2);
        vcdp->chgBit(c+8225,((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst))));
        vcdp->chgBit(c+8233,((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst))));
        vcdp->chgBit(c+8241,((2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst))));
        vcdp->chgBus(c+8249,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awid),4);
        vcdp->chgBus(c+8257,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awlen),4);
        vcdp->chgBus(c+8265,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awsize),3);
        vcdp->chgBit(c+8273,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid));
        vcdp->chgQuad(c+8281,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas),45);
        vcdp->chgBus(c+8297,((IData)((vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                      >> 0xdU))),32);
        vcdp->chgBus(c+8305,((3U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                            >> 0xbU)))),2);
        vcdp->chgBus(c+8313,((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas))),4);
        vcdp->chgBus(c+8321,((0xfU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                              >> 4U)))),4);
        vcdp->chgBus(c+8329,((7U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                            >> 8U)))),3);
        vcdp->chgBit(c+8337,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_valid));
        vcdp->chgBit(c+8345,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid));
        vcdp->chgBus(c+8353,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_datas),4);
        vcdp->chgBit(c+8361,((1U & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid)))));
        vcdp->chgBus(c+8369,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wstrb),4);
        vcdp->chgBus(c+8377,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wdata),32);
        vcdp->chgBit(c+8385,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wlast));
        vcdp->chgBit(c+8393,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wvalid));
        vcdp->chgBus(c+8401,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__cr0),32);
        vcdp->chgBus(c+8409,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__cr1),32);
        vcdp->chgBus(c+8417,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__cr2),32);
        vcdp->chgBus(c+8425,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__cr3),32);
        vcdp->chgBus(c+8433,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__cr4),32);
        vcdp->chgBus(c+8441,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__cr5),32);
        vcdp->chgBus(c+8449,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__cr6),32);
        vcdp->chgBus(c+8457,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__cr7),32);
        vcdp->chgBus(c+8465,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__led_data),32);
        vcdp->chgBus(c+8473,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__led_rg0_data),32);
        vcdp->chgBus(c+8481,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__led_rg1_data),32);
        vcdp->chgBus(c+8489,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__num_data),32);
        vcdp->chgBus(c+8497,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__btn_key_r),32);
        vcdp->chgBus(c+8505,(((2U & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r)) 
                                     << 1U)) | (1U 
                                                & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r))))),32);
        vcdp->chgBus(c+8513,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__confreg_uart_data),8);
        vcdp->chgBit(c+8521,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__confreg_uart_valid));
        vcdp->chgBus(c+8529,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__timer_r2),32);
        vcdp->chgBus(c+8537,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__simu_flag),32);
        vcdp->chgBus(c+8545,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__io_simu),32);
        vcdp->chgBus(c+8553,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__virtual_uart_data),8);
        vcdp->chgBit(c+8561,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__open_trace));
        vcdp->chgBit(c+8569,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__num_monitor));
        vcdp->chgBit(c+8577,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin));
        vcdp->chgBit(c+8585,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r1));
        vcdp->chgBit(c+8593,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r2));
        vcdp->chgBit(c+8601,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r3));
        vcdp->chgBit(c+8609,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r1));
        vcdp->chgBit(c+8617,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r2));
        vcdp->chgBus(c+8625,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r),32);
        vcdp->chgBus(c+8633,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r1),32);
        vcdp->chgBus(c+8641,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r2),32);
        vcdp->chgBus(c+8649,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__timer_r1),32);
        vcdp->chgBus(c+8657,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__timer),32);
        vcdp->chgBus(c+8665,((0xffU & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata)),8);
        vcdp->chgBus(c+8673,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__btn_key_r),16);
        vcdp->chgBus(c+8681,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state),3);
        vcdp->chgBit(c+8689,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__key_flag));
        vcdp->chgBus(c+8697,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__key_count),20);
        vcdp->chgBus(c+8705,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state_count),4);
        vcdp->chgBit(c+8713,((1U & (vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__key_count 
                                    >> 0x13U))));
        vcdp->chgBit(c+8721,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r));
        vcdp->chgBit(c+8729,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r));
        vcdp->chgBit(c+8737,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__step0_flag));
        vcdp->chgBus(c+8745,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__step0_count),20);
        vcdp->chgBit(c+8753,((1U & (vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__step0_count 
                                    >> 0x13U))));
        vcdp->chgBit(c+8761,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__step1_flag));
        vcdp->chgBus(c+8769,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__step1_count),20);
        vcdp->chgBit(c+8777,((1U & (vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__step1_count 
                                    >> 0x13U))));
        vcdp->chgBus(c+8785,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__count),20);
        vcdp->chgBus(c+8793,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__scan_data),4);
    }
}

void Vsimu_top::traceChgThis__12(Vsimu_top__Syms* __restrict vlSymsp, VerilatedFst* vcdp, uint32_t code) {
    Vsimu_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+8801,(vlTOPp->DifftestInstrCommit__02Eclock));
        vcdp->chgBus(c+8809,(vlTOPp->DifftestInstrCommit__02Ecoreid),8);
        vcdp->chgBus(c+8817,(vlTOPp->DifftestInstrCommit__02Eindex),8);
        vcdp->chgBit(c+8825,(vlTOPp->DifftestInstrCommit__02Evalid));
        vcdp->chgQuad(c+8833,(vlTOPp->DifftestInstrCommit__02Epc),64);
        vcdp->chgBus(c+8849,(vlTOPp->instr),32);
        vcdp->chgBit(c+8857,(vlTOPp->skip));
        vcdp->chgBit(c+8865,(vlTOPp->is_TLBFILL));
        vcdp->chgBus(c+8873,(vlTOPp->TLBFILL_index),5);
        vcdp->chgBit(c+8881,(vlTOPp->is_CNTinst));
        vcdp->chgQuad(c+8889,(vlTOPp->timer_64_value),64);
        vcdp->chgBit(c+8905,(vlTOPp->wen));
        vcdp->chgBus(c+8913,(vlTOPp->wdest),8);
        vcdp->chgQuad(c+8921,(vlTOPp->wdata),64);
        vcdp->chgBit(c+8937,(vlTOPp->csr_rstat));
        vcdp->chgBus(c+8945,(vlTOPp->csr_data),32);
        vcdp->chgBit(c+8953,(vlTOPp->DifftestExcpEvent__02Eclock));
        vcdp->chgBus(c+8961,(vlTOPp->DifftestExcpEvent__02Ecoreid),8);
        vcdp->chgBit(c+8969,(vlTOPp->excp_valid));
        vcdp->chgBit(c+8977,(vlTOPp->eret));
        vcdp->chgBus(c+8985,(vlTOPp->intrNo),32);
        vcdp->chgBus(c+8993,(vlTOPp->cause),32);
        vcdp->chgQuad(c+9001,(vlTOPp->exceptionPC),64);
        vcdp->chgBus(c+9017,(vlTOPp->exceptionInst),32);
        vcdp->chgBit(c+9025,(vlTOPp->DifftestTrapEvent__02Eclock));
        vcdp->chgBus(c+9033,(vlTOPp->DifftestTrapEvent__02Ecoreid),8);
        vcdp->chgBit(c+9041,(vlTOPp->DifftestTrapEvent__02Evalid));
        vcdp->chgBus(c+9049,(vlTOPp->code),3);
        vcdp->chgQuad(c+9057,(vlTOPp->DifftestTrapEvent__02Epc),64);
        vcdp->chgQuad(c+9073,(vlTOPp->cycleCnt),64);
        vcdp->chgQuad(c+9089,(vlTOPp->instrCnt),64);
        vcdp->chgBit(c+9105,(vlTOPp->DifftestStoreEvent__02Eclock));
        vcdp->chgBus(c+9113,(vlTOPp->DifftestStoreEvent__02Ecoreid),8);
        vcdp->chgBus(c+9121,(vlTOPp->DifftestStoreEvent__02Eindex),8);
        vcdp->chgBus(c+9129,(vlTOPp->DifftestStoreEvent__02Evalid),8);
        vcdp->chgQuad(c+9137,(vlTOPp->storePAddr),64);
        vcdp->chgQuad(c+9153,(vlTOPp->storeVAddr),64);
        vcdp->chgQuad(c+9169,(vlTOPp->storeData),64);
        vcdp->chgBit(c+9185,(vlTOPp->DifftestLoadEvent__02Eclock));
        vcdp->chgBus(c+9193,(vlTOPp->DifftestLoadEvent__02Ecoreid),8);
        vcdp->chgBus(c+9201,(vlTOPp->DifftestLoadEvent__02Eindex),8);
        vcdp->chgBus(c+9209,(vlTOPp->DifftestLoadEvent__02Evalid),8);
        vcdp->chgQuad(c+9217,(vlTOPp->paddr),64);
        vcdp->chgQuad(c+9233,(vlTOPp->vaddr),64);
        vcdp->chgBit(c+9249,(vlTOPp->DifftestCSRRegState__02Eclock));
        vcdp->chgBus(c+9257,(vlTOPp->DifftestCSRRegState__02Ecoreid),8);
        vcdp->chgQuad(c+9265,(vlTOPp->crmd),64);
        vcdp->chgQuad(c+9281,(vlTOPp->prmd),64);
        vcdp->chgQuad(c+9297,(vlTOPp->euen),64);
        vcdp->chgQuad(c+9313,(vlTOPp->ecfg),64);
        vcdp->chgQuad(c+9329,(vlTOPp->estat),64);
        vcdp->chgQuad(c+9345,(vlTOPp->era),64);
        vcdp->chgQuad(c+9361,(vlTOPp->badv),64);
        vcdp->chgQuad(c+9377,(vlTOPp->eentry),64);
        vcdp->chgQuad(c+9393,(vlTOPp->tlbidx),64);
        vcdp->chgQuad(c+9409,(vlTOPp->tlbehi),64);
        vcdp->chgQuad(c+9425,(vlTOPp->tlbelo0),64);
        vcdp->chgQuad(c+9441,(vlTOPp->tlbelo1),64);
        vcdp->chgQuad(c+9457,(vlTOPp->asid),64);
        vcdp->chgQuad(c+9473,(vlTOPp->pgdl),64);
        vcdp->chgQuad(c+9489,(vlTOPp->pgdh),64);
        vcdp->chgQuad(c+9505,(vlTOPp->save0),64);
        vcdp->chgQuad(c+9521,(vlTOPp->save1),64);
        vcdp->chgQuad(c+9537,(vlTOPp->save2),64);
        vcdp->chgQuad(c+9553,(vlTOPp->save3),64);
        vcdp->chgQuad(c+9569,(vlTOPp->tid),64);
        vcdp->chgQuad(c+9585,(vlTOPp->tcfg),64);
        vcdp->chgQuad(c+9601,(vlTOPp->tval),64);
        vcdp->chgQuad(c+9617,(vlTOPp->ticlr),64);
        vcdp->chgQuad(c+9633,(vlTOPp->llbctl),64);
        vcdp->chgQuad(c+9649,(vlTOPp->tlbrentry),64);
        vcdp->chgQuad(c+9665,(vlTOPp->dmw0),64);
        vcdp->chgQuad(c+9681,(vlTOPp->dmw1),64);
        vcdp->chgBit(c+9697,(vlTOPp->DifftestGRegState__02Eclock));
        vcdp->chgBus(c+9705,(vlTOPp->DifftestGRegState__02Ecoreid),8);
        vcdp->chgQuad(c+9713,(vlTOPp->gpr_0),64);
        vcdp->chgQuad(c+9729,(vlTOPp->gpr_1),64);
        vcdp->chgQuad(c+9745,(vlTOPp->gpr_2),64);
        vcdp->chgQuad(c+9761,(vlTOPp->gpr_3),64);
        vcdp->chgQuad(c+9777,(vlTOPp->gpr_4),64);
        vcdp->chgQuad(c+9793,(vlTOPp->gpr_5),64);
        vcdp->chgQuad(c+9809,(vlTOPp->gpr_6),64);
        vcdp->chgQuad(c+9825,(vlTOPp->gpr_7),64);
        vcdp->chgQuad(c+9841,(vlTOPp->gpr_8),64);
        vcdp->chgQuad(c+9857,(vlTOPp->gpr_9),64);
        vcdp->chgQuad(c+9873,(vlTOPp->gpr_10),64);
        vcdp->chgQuad(c+9889,(vlTOPp->gpr_11),64);
        vcdp->chgQuad(c+9905,(vlTOPp->gpr_12),64);
        vcdp->chgQuad(c+9921,(vlTOPp->gpr_13),64);
        vcdp->chgQuad(c+9937,(vlTOPp->gpr_14),64);
        vcdp->chgQuad(c+9953,(vlTOPp->gpr_15),64);
        vcdp->chgQuad(c+9969,(vlTOPp->gpr_16),64);
        vcdp->chgQuad(c+9985,(vlTOPp->gpr_17),64);
        vcdp->chgQuad(c+10001,(vlTOPp->gpr_18),64);
        vcdp->chgQuad(c+10017,(vlTOPp->gpr_19),64);
        vcdp->chgQuad(c+10033,(vlTOPp->gpr_20),64);
        vcdp->chgQuad(c+10049,(vlTOPp->gpr_21),64);
        vcdp->chgQuad(c+10065,(vlTOPp->gpr_22),64);
        vcdp->chgQuad(c+10081,(vlTOPp->gpr_23),64);
        vcdp->chgQuad(c+10097,(vlTOPp->gpr_24),64);
        vcdp->chgQuad(c+10113,(vlTOPp->gpr_25),64);
        vcdp->chgQuad(c+10129,(vlTOPp->gpr_26),64);
        vcdp->chgQuad(c+10145,(vlTOPp->gpr_27),64);
        vcdp->chgQuad(c+10161,(vlTOPp->gpr_28),64);
        vcdp->chgQuad(c+10177,(vlTOPp->gpr_29),64);
        vcdp->chgQuad(c+10193,(vlTOPp->gpr_30),64);
        vcdp->chgQuad(c+10209,(vlTOPp->gpr_31),64);
        vcdp->chgBit(c+10225,(vlTOPp->aclk));
        vcdp->chgBit(c+10233,(vlTOPp->aresetn));
        vcdp->chgBit(c+10241,(vlTOPp->enable_delay));
        vcdp->chgBus(c+10249,(vlTOPp->random_seed),23);
        vcdp->chgBit(c+10257,(vlTOPp->ram_ren));
        vcdp->chgBus(c+10265,(vlTOPp->ram_raddr),32);
        vcdp->chgBus(c+10273,(vlTOPp->ram_rdata),32);
        vcdp->chgBus(c+10281,(vlTOPp->ram_wen),4);
        vcdp->chgBus(c+10289,(vlTOPp->ram_waddr),32);
        vcdp->chgBus(c+10297,(vlTOPp->ram_wdata),32);
        vcdp->chgBus(c+10305,(vlTOPp->debug0_wb_pc),32);
        vcdp->chgBit(c+10313,(vlTOPp->debug0_wb_rf_wen));
        vcdp->chgBus(c+10321,(vlTOPp->debug0_wb_rf_wnum),5);
        vcdp->chgBus(c+10329,(vlTOPp->debug0_wb_rf_wdata),32);
        vcdp->chgBus(c+10337,(vlTOPp->num_data),32);
        vcdp->chgBit(c+10345,(vlTOPp->open_trace));
        vcdp->chgBit(c+10353,(vlTOPp->num_monitor));
        vcdp->chgBus(c+10361,(vlTOPp->confreg_uart_data),8);
        vcdp->chgBit(c+10369,(vlTOPp->write_uart_valid));
        vcdp->chgArray(c+10377,(vlTOPp->uart_ctr_bus),128);
        vcdp->chgBit(c+10409,(vlTOPp->uart_rx));
        vcdp->chgBit(c+10417,(vlTOPp->uart_tx));
        vcdp->chgBus(c+10425,(vlTOPp->led),16);
        vcdp->chgBus(c+10433,(vlTOPp->led_rg0),2);
        vcdp->chgBus(c+10441,(vlTOPp->led_rg1),2);
        vcdp->chgBus(c+10449,(vlTOPp->num_csn),8);
        vcdp->chgBus(c+10457,(vlTOPp->num_a_g),7);
        vcdp->chgBus(c+10465,(vlTOPp->btn_key_col),4);
        vcdp->chgBus(c+10473,(vlTOPp->btn_key_row),4);
        vcdp->chgBus(c+10481,(vlTOPp->btn_step),2);
        vcdp->chgBus(c+10489,(vlTOPp->__SYM__switch),8);
        vcdp->chgBit(c+10497,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_awready) 
                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_aw) 
                                  | (~ (IData)(vlTOPp->enable_delay))))));
        vcdp->chgBit(c+10505,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_wready) 
                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_w) 
                                  | (~ (IData)(vlTOPp->enable_delay))))));
        vcdp->chgBit(c+10513,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_bvalid) 
                               & ((vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                   >> 2U) | (~ (IData)(vlTOPp->enable_delay))))));
        vcdp->chgBit(c+10521,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_arready) 
                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_ar) 
                                  | (~ (IData)(vlTOPp->enable_delay))))));
        vcdp->chgBit(c+10529,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_rvalid) 
                               & ((vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                   >> 3U) | (~ (IData)(vlTOPp->enable_delay))))));
        vcdp->chgBit(c+10537,((1U & (~ (IData)(vlTOPp->aresetn)))));
        vcdp->chgBit(c+10545,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode)
                                      ? ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__rx_en)) 
                                         | (IData)(vlTOPp->uart_tx))
                                      : (IData)(vlTOPp->uart_rx)))));
        vcdp->chgBit(c+10553,((1U & ((~ (IData)(vlTOPp->aresetn)) 
                                     | (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop)))));
        vcdp->chgBit(c+10561,((1U & ((~ (IData)(vlTOPp->aresetn)) 
                                     | (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop)))));
        vcdp->chgBus(c+10569,(vlTOPp->__SYM__switch),32);
        vcdp->chgBus(c+10577,(((0x8000U & ((IData)(vlTOPp->__SYM__switch) 
                                           << 8U)) 
                               | ((0x2000U & ((IData)(vlTOPp->__SYM__switch) 
                                              << 7U)) 
                                  | ((0x800U & ((IData)(vlTOPp->__SYM__switch) 
                                                << 6U)) 
                                     | ((0x200U & ((IData)(vlTOPp->__SYM__switch) 
                                                   << 5U)) 
                                        | ((0x80U & 
                                            ((IData)(vlTOPp->__SYM__switch) 
                                             << 4U)) 
                                           | ((0x20U 
                                               & ((IData)(vlTOPp->__SYM__switch) 
                                                  << 3U)) 
                                              | ((8U 
                                                  & ((IData)(vlTOPp->__SYM__switch) 
                                                     << 2U)) 
                                                 | (2U 
                                                    & ((IData)(vlTOPp->__SYM__switch) 
                                                       << 1U)))))))))),32);
        vcdp->chgBit(c+10585,(((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                               & (~ (IData)((0xfU == (IData)(vlTOPp->btn_key_row)))))));
        vcdp->chgBit(c+10593,(((7U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                               & (0xfU == (IData)(vlTOPp->btn_key_row)))));
        vcdp->chgBit(c+10601,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r) 
                               & (~ (IData)(vlTOPp->btn_step)))));
        vcdp->chgBit(c+10609,((1U & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r)) 
                                     & (IData)(vlTOPp->btn_step)))));
        vcdp->chgBit(c+10617,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r) 
                               & (~ ((IData)(vlTOPp->btn_step) 
                                     >> 1U)))));
        vcdp->chgBit(c+10625,((1U & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r)) 
                                     & ((IData)(vlTOPp->btn_step) 
                                        >> 1U)))));
    }
}

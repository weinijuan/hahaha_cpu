// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vsimu_top__Syms.h"


void Vsimu_top::traceChgTop0(void* userp, VerilatedFst* tracep) {
    Vsimu_top__Syms* __restrict vlSymsp = static_cast<Vsimu_top__Syms*>(userp);
    Vsimu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vsimu_top::traceChgSub0(void* userp, VerilatedFst* tracep) {
    Vsimu_top__Syms* __restrict vlSymsp = static_cast<Vsimu_top__Syms*>(userp);
    Vsimu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp71[3];
    WData/*95:0*/ __Vtemp72[3];
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0U])) {
            tracep->chgBit(oldp+0,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_ready_go));
            tracep->chgBit(oldp+1,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_PC_BRANCH));
            tracep->chgBit(oldp+2,((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_PCADDU12I_TYPE) 
                                     | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BL_TYPE)) 
                                    | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_JIRL_TYPE))));
            tracep->chgBit(oldp+3,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_store_inst));
            tracep->chgBit(oldp+4,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_load_inst));
            tracep->chgBit(oldp+5,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_BU_TYPE) 
                                    | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_HU_TYPE))));
            tracep->chgBit(oldp+6,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ADDI_TYPE));
            tracep->chgBit(oldp+7,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_flush));
            tracep->chgBit(oldp+8,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ADDI_TYPE));
            tracep->chgBit(oldp+9,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_store_inst));
            tracep->chgBit(oldp+10,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_load_inst));
            tracep->chgBit(oldp+11,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_load_inst));
            tracep->chgBit(oldp+12,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BL_TYPE));
            tracep->chgBit(oldp+13,((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ORI_TYPE) 
                                      | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_XORI_TYPE)) 
                                     | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ANDI_TYPE))));
            tracep->chgBit(oldp+14,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_JIRL_TYPE));
            tracep->chgBit(oldp+15,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_BU_TYPE) 
                                     | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_HU_TYPE))));
            tracep->chgBit(oldp+16,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ANDI_TYPE));
            tracep->chgBit(oldp+17,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ORI_TYPE));
            tracep->chgBit(oldp+18,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_XORI_TYPE));
            tracep->chgBit(oldp+19,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LUI_TYPE));
            tracep->chgBit(oldp+20,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_PCADDU12I_TYPE));
            tracep->chgBit(oldp+21,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_BU_TYPE));
            tracep->chgBit(oldp+22,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_HU_TYPE));
            tracep->chgBit(oldp+23,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_reg_inst));
            tracep->chgBit(oldp+24,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LUI_TYPE) 
                                     | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_PCADDU12I_TYPE))));
            tracep->chgBit(oldp+25,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_PC_BRANCH));
            tracep->chgBit(oldp+26,((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_PCADDU12I_TYPE) 
                                      | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_load_inst)) 
                                     | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_store_inst))));
            tracep->chgBit(oldp+27,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__MEM_forward_valid));
            tracep->chgBit(oldp+28,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__WB_forward_valid));
            tracep->chgBit(oldp+29,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT__stall));
            tracep->chgBit(oldp+30,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divSigned));
            tracep->chgBit(oldp+31,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divEn));
            tracep->chgCData(oldp+32,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[0]),2);
            tracep->chgCData(oldp+33,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[1]),2);
            tracep->chgCData(oldp+34,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[2]),2);
            tracep->chgCData(oldp+35,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[3]),2);
            tracep->chgCData(oldp+36,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[4]),2);
            tracep->chgCData(oldp+37,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[0]),2);
            tracep->chgCData(oldp+38,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[1]),2);
            tracep->chgCData(oldp+39,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[2]),2);
            tracep->chgCData(oldp+40,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[3]),2);
            tracep->chgCData(oldp+41,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[4]),2);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+42,((0x21U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__count))));
            tracep->chgIData(oldp+43,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_u),32);
            tracep->chgIData(oldp+44,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__remainder_u),32);
            tracep->chgIData(oldp+45,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__dividend_reg),32);
            tracep->chgQData(oldp+46,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__minuend),33);
            tracep->chgCData(oldp+48,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__count),6);
            tracep->chgQData(oldp+49,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__minuend_shifted),33);
            __Vtemp71[0U] = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__dividend_reg;
            __Vtemp71[1U] = (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__minuend);
            __Vtemp71[2U] = (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__minuend 
                                     >> 0x20U));
            VL_SHIFTL_WWI(65,65,32, __Vtemp72, __Vtemp71, 1U);
            tracep->chgIData(oldp+51,(__Vtemp72[0U]),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgIData(oldp+52,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r),32);
            tracep->chgCData(oldp+53,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_size_r),3);
            tracep->chgBit(oldp+54,(vlTOPp->simu_top__DOT__soc__DOT__cpu_awvalid));
            tracep->chgIData(oldp+55,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wdata_r),32);
            tracep->chgCData(oldp+56,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wstrb_r),4);
            tracep->chgBit(oldp+57,(vlTOPp->simu_top__DOT__soc__DOT__cpu_wvalid));
            tracep->chgCData(oldp+58,(vlTOPp->simu_top__DOT__soc__DOT__m0_bid),4);
            tracep->chgCData(oldp+59,(vlTOPp->simu_top__DOT__soc__DOT__m0_bresp),2);
            tracep->chgBit(oldp+60,(vlTOPp->simu_top__DOT__soc__DOT__cpu_arvalid));
            tracep->chgCData(oldp+61,(vlTOPp->simu_top__DOT__soc__DOT__m0_rid),4);
            tracep->chgCData(oldp+62,(vlTOPp->simu_top__DOT__soc__DOT__m0_rresp),2);
            tracep->chgBit(oldp+63,(vlTOPp->simu_top__DOT__soc__DOT__m0_rlast));
            tracep->chgBit(oldp+64,(vlTOPp->simu_top__DOT__soc__DOT__m0_awready));
            tracep->chgBit(oldp+65,(vlTOPp->simu_top__DOT__soc__DOT__m0_wready));
            tracep->chgBit(oldp+66,(vlTOPp->simu_top__DOT__soc__DOT__m0_bvalid));
            tracep->chgBit(oldp+67,(vlTOPp->simu_top__DOT__soc__DOT__m0_arready));
            tracep->chgBit(oldp+68,(vlTOPp->simu_top__DOT__soc__DOT__m0_rvalid));
            tracep->chgBit(oldp+69,((1U & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid)))));
            tracep->chgBit(oldp+70,(vlTOPp->simu_top__DOT__soc__DOT__s0_wready));
            tracep->chgCData(oldp+71,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_data),4);
            tracep->chgBit(oldp+72,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid));
            tracep->chgBit(oldp+73,((1U & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid)))));
            tracep->chgCData(oldp+74,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rid),4);
            tracep->chgBit(oldp+75,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rlast));
            tracep->chgBit(oldp+76,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rvalid));
            tracep->chgBit(oldp+77,((1U & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid)))));
            tracep->chgBit(oldp+78,(vlTOPp->simu_top__DOT__soc__DOT__conf_s_wready));
            tracep->chgCData(oldp+79,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_data),4);
            tracep->chgBit(oldp+80,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid));
            tracep->chgBit(oldp+81,((1U & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid)))));
            tracep->chgCData(oldp+82,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rid),4);
            tracep->chgIData(oldp+83,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__conf_rdata_reg),32);
            tracep->chgBit(oldp+84,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rlast));
            tracep->chgBit(oldp+85,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rvalid));
            tracep->chgBit(oldp+86,(vlTOPp->simu_top__DOT__soc__DOT__apb_s_awready));
            tracep->chgBit(oldp+87,(vlTOPp->simu_top__DOT__soc__DOT__apb_s_wready));
            tracep->chgCData(oldp+88,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_w_id),4);
            tracep->chgBit(oldp+89,(vlTOPp->simu_top__DOT__soc__DOT__apb_s_bvalid));
            tracep->chgBit(oldp+90,(vlTOPp->simu_top__DOT__soc__DOT__apb_s_arready));
            tracep->chgCData(oldp+91,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_r_id),4);
            tracep->chgIData(oldp+92,(((0U == (3U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb)))
                                        ? vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32
                                        : ((1U == (3U 
                                                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb)))
                                            ? (0xffffff00U 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                                                  << 8U))
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb)))
                                                ? (0xffff0000U 
                                                   & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                                                      << 0x10U))
                                                : (
                                                   (3U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb)))
                                                    ? 
                                                   (0xff000000U 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                                                       << 0x18U))
                                                    : 0U))))),32);
            tracep->chgBit(oldp+93,(vlTOPp->simu_top__DOT__soc__DOT__apb_s_rlast));
            tracep->chgBit(oldp+94,(vlTOPp->simu_top__DOT__soc__DOT__apb_s_rvalid));
            tracep->chgIData(oldp+95,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr),32);
            tracep->chgIData(oldp+96,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr),32);
            tracep->chgIData(oldp+97,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata),32);
            tracep->chgCData(oldp+98,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__uart0_int) 
                                       << 1U)),8);
            tracep->chgBit(oldp+99,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                           >> 1U))));
            tracep->chgBit(oldp+100,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr))));
            tracep->chgBit(oldp+101,(vlTOPp->simu_top__DOT__soc__DOT__uart0_int));
            tracep->chgBit(oldp+102,((1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                             >> 4U) 
                                            | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__infrared) 
                                               | (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_out))))));
            tracep->chgBit(oldp+103,(vlTOPp->simu_top__DOT__soc__DOT__uart0_txd_oe));
            tracep->chgBit(oldp+104,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_reg) 
                                            ^ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                                               >> 3U)))));
            tracep->chgBit(oldp+105,((1U & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode)))));
            tracep->chgCData(oldp+106,((0xfU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[0U])),4);
            tracep->chgIData(oldp+107,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC),32);
            tracep->chgBit(oldp+108,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+109,((3U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                              >> 0x12U))),2);
            tracep->chgCData(oldp+110,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem),4);
            tracep->chgIData(oldp+111,((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__MEM_forward_valid) 
                                         & ((0x1fU 
                                             & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U]) 
                                            == (0x1fU 
                                                & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U])))
                                         ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[1U]
                                         : (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__WB_forward_valid) 
                                             & ((0x1fU 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                                                    >> 4U)) 
                                                == 
                                                (0x1fU 
                                                 & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U])))
                                             ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb
                                             : ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[3U] 
                                                 << 0x11U) 
                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U] 
                                                   >> 0xfU))))),32);
            tracep->chgBit(oldp+112,((1U & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req)))));
            tracep->chgIData(oldp+113,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__pipeline_data),32);
            tracep->chgIData(oldp+114,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__pipeline_data),32);
            tracep->chgIData(oldp+115,((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                >> 0x20U))),32);
            tracep->chgIData(oldp+116,((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)),32);
            tracep->chgBit(oldp+117,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_valid_in));
            tracep->chgBit(oldp+118,(((((((((1U == 
                                             (0x7fU 
                                              & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0xfU)))) 
                                            & (1U == 
                                               (0x3ffU 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x16U))))) 
                                           | ((9U == 
                                               (0x7fU 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0xfU)))) 
                                              & (1U 
                                                 == 
                                                 (0x3ffU 
                                                  & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x16U)))))) 
                                          | ((0x11U 
                                              == (0x7fU 
                                                  & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0xfU)))) 
                                             & (1U 
                                                == 
                                                (0x3ffU 
                                                 & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0x16U)))))) 
                                         | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ADDI_TYPE)) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LUI_TYPE) 
                                           | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_PCADDU12I_TYPE))) 
                                       | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_load_inst)) 
                                      | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_store_inst))));
            tracep->chgCData(oldp+119,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluctrl_id),5);
            tracep->chgCData(oldp+120,((((((0U == (0xfU 
                                                   & (IData)(
                                                             (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                              >> 0x16U)))) 
                                           & (0xaU 
                                              == (0x3fU 
                                                  & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x1aU))))) 
                                          | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_BU_TYPE)) 
                                         | ((4U == 
                                             (0xfU 
                                              & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0x16U)))) 
                                            & (0xaU 
                                               == (0x3fU 
                                                   & (IData)(
                                                             (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                              >> 0x1aU))))))
                                         ? 0U : (((
                                                   ((1U 
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
                                                   : 0U)))),2);
            tracep->chgIData(oldp+121,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id),32);
            tracep->chgIData(oldp+122,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rk_id),32);
            tracep->chgCData(oldp+123,((0x1fU & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 5U)))),5);
            tracep->chgCData(oldp+124,((0x1fU & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0xaU)))),5);
            tracep->chgCData(oldp+125,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_id),5);
            tracep->chgIData(oldp+126,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__immout_id),32);
            tracep->chgIData(oldp+127,((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                >> 0x20U))),32);
            tracep->chgBit(oldp+128,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+129,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                            >> 0x1bU))));
            tracep->chgCData(oldp+130,((0x1fU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                                 >> 0x16U))),5);
            tracep->chgBit(oldp+131,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+132,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                            >> 0x14U))));
            tracep->chgCData(oldp+133,((3U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                              >> 0x12U))),2);
            tracep->chgBit(oldp+134,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+135,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+136,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                            >> 0xfU))));
            tracep->chgIData(oldp+137,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                         << 0x11U) 
                                        | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[4U] 
                                           >> 0xfU))),32);
            tracep->chgIData(oldp+138,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[4U] 
                                         << 0x11U) 
                                        | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[3U] 
                                           >> 0xfU))),32);
            tracep->chgIData(oldp+139,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[3U] 
                                         << 0x11U) 
                                        | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U] 
                                           >> 0xfU))),32);
            tracep->chgCData(oldp+140,((0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[3U] 
                                                  << 0x16U) 
                                                 | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U] 
                                                    >> 0xaU)))),5);
            tracep->chgCData(oldp+141,((0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[3U] 
                                                  << 0x1bU) 
                                                 | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U] 
                                                    >> 5U)))),5);
            tracep->chgCData(oldp+142,((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U])),5);
            tracep->chgIData(oldp+143,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[1U]),32);
            tracep->chgIData(oldp+144,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0U]),32);
            tracep->chgCData(oldp+145,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem),4);
            tracep->chgCData(oldp+146,((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U])),5);
            tracep->chgIData(oldp+147,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0U]),32);
            tracep->chgBit(oldp+148,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+149,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U] 
                                            >> 0xeU))));
            tracep->chgCData(oldp+150,((3U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U] 
                                              >> 0xcU))),2);
            tracep->chgBit(oldp+151,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+152,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+153,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U] 
                                            >> 9U))));
            tracep->chgCData(oldp+154,((0xfU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U] 
                                                >> 5U))),4);
            tracep->chgCData(oldp+155,((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U])),5);
            tracep->chgIData(oldp+156,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[1U]),32);
            tracep->chgIData(oldp+157,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0U]),32);
            tracep->chgBit(oldp+158,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_allow_in));
            tracep->chgCData(oldp+159,((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U])),5);
            tracep->chgIData(oldp+160,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[1U]),32);
            tracep->chgIData(oldp+161,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0U]),32);
            tracep->chgBit(oldp+162,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+163,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                                            >> 9U))));
            tracep->chgCData(oldp+164,((0x1fU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                                                 >> 4U))),5);
            tracep->chgIData(oldp+165,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                                         << 0x1cU) 
                                        | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U] 
                                           >> 4U))),32);
            tracep->chgIData(oldp+166,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U] 
                                         << 0x1cU) 
                                        | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[1U] 
                                           >> 4U))),32);
            tracep->chgIData(oldp+167,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[1U] 
                                         << 0x1cU) 
                                        | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[0U] 
                                           >> 4U))),32);
            tracep->chgCData(oldp+168,((0xfU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[0U])),4);
            tracep->chgBit(oldp+169,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_valid));
            tracep->chgIData(oldp+170,(((IData)(4U) 
                                        + vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__pipeline_data)),32);
            tracep->chgIData(oldp+171,((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_JIRL_TYPE)
                                          ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id_true
                                          : (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                     >> 0x20U))) 
                                        + vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__immout_id)),32);
            tracep->chgIData(oldp+172,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp),32);
            tracep->chgBit(oldp+173,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp_valid));
            tracep->chgIData(oldp+174,((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)),32);
            tracep->chgIData(oldp+175,((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                >> 0x20U))),32);
            tracep->chgBit(oldp+176,((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id_true 
                                      == (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__MEM_forward_valid) 
                                           & ((0x1fU 
                                               & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U]) 
                                              == (0x1fU 
                                                  & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0xaU)))))
                                           ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[1U]
                                           : (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__WB_forward_valid) 
                                               & ((0x1fU 
                                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                                                      >> 4U)) 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                              >> 0xaU)))))
                                               ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb
                                               : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rk_id)))));
            tracep->chgBit(oldp+177,((((((0xaU == (0xfU 
                                                   & (IData)(
                                                             (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                              >> 0x1cU)))) 
                                         & (1U == (3U 
                                                   & (IData)(
                                                             (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                              >> 0x1eU))))) 
                                        | ((0xbU == 
                                            (0xfU & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x1cU)))) 
                                           & (1U == 
                                              (3U & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x1eU)))))) 
                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id_true 
                                          < (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__MEM_forward_valid) 
                                              & ((0x1fU 
                                                  & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U]) 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0xaU)))))
                                              ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[1U]
                                              : (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__WB_forward_valid) 
                                                  & ((0x1fU 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                                                         >> 4U)) 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(
                                                                (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                 >> 0xaU)))))
                                                  ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb
                                                  : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rk_id)))) 
                                      | ((~ (((0xaU 
                                               == (0xfU 
                                                   & (IData)(
                                                             (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                              >> 0x1cU)))) 
                                              & (1U 
                                                 == 
                                                 (3U 
                                                  & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x1eU))))) 
                                             | ((0xbU 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x1cU)))) 
                                                & (1U 
                                                   == 
                                                   (3U 
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
                                                        ? 
                                                       vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[1U]
                                                        : 
                                                       (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__WB_forward_valid) 
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
            tracep->chgCData(oldp+178,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__itype),3);
            tracep->chgCData(oldp+179,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluctrl_id),5);
            tracep->chgBit(oldp+180,((((0xaU == (0xfU 
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
                                                              >> 0x1eU))))))));
            tracep->chgBit(oldp+181,((((((((8U == (0xfU 
                                                   & (IData)(
                                                             (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                              >> 0x1cU)))) 
                                           & (1U == 
                                              (3U & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x1eU))))) 
                                          | ((9U == 
                                              (0xfU 
                                               & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0x1cU)))) 
                                             & (1U 
                                                == 
                                                (3U 
                                                 & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0x1eU)))))) 
                                         | ((0xaU == 
                                             (0xfU 
                                              & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0x1cU)))) 
                                            & (1U == 
                                               (3U 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x1eU)))))) 
                                        | ((0xbU == 
                                            (0xfU & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x1cU)))) 
                                           & (1U == 
                                              (3U & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x1eU)))))) 
                                       | ((6U == (0xfU 
                                                  & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x1cU)))) 
                                          & (1U == 
                                             (3U & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0x1eU)))))) 
                                      | ((7U == (0xfU 
                                                 & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0x1cU)))) 
                                         & (1U == (3U 
                                                   & (IData)(
                                                             (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                              >> 0x1eU))))))));
            tracep->chgCData(oldp+182,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_id),5);
            tracep->chgIData(oldp+183,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id),32);
            tracep->chgIData(oldp+184,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rk_id),32);
            tracep->chgBit(oldp+185,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                                            >> 0xaU))));
            tracep->chgIData(oldp+186,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb),32);
            tracep->chgIData(oldp+187,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__immout_id),32);
            tracep->chgIData(oldp+188,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id_true),32);
            tracep->chgIData(oldp+189,((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__MEM_forward_valid) 
                                         & ((0x1fU 
                                             & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U]) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0xaU)))))
                                         ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[1U]
                                         : (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__WB_forward_valid) 
                                             & ((0x1fU 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                                                    >> 4U)) 
                                                == 
                                                (0x1fU 
                                                 & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0xaU)))))
                                             ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb
                                             : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rk_id))),32);
            tracep->chgIData(oldp+190,((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__MEM_forward_valid) 
                                         & ((0x1fU 
                                             & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U]) 
                                            == (0x1fU 
                                                & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[3U] 
                                                    << 0x16U) 
                                                   | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U] 
                                                      >> 0xaU)))))
                                         ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[1U]
                                         : (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__WB_forward_valid) 
                                             & ((0x1fU 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                                                    >> 4U)) 
                                                == 
                                                (0x1fU 
                                                 & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[3U] 
                                                     << 0x16U) 
                                                    | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U] 
                                                       >> 0xaU)))))
                                             ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb
                                             : ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                                 << 0x11U) 
                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[4U] 
                                                   >> 0xfU))))),32);
            tracep->chgIData(oldp+191,((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__MEM_forward_valid) 
                                         & ((0x1fU 
                                             & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U]) 
                                            == (0x1fU 
                                                & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[3U] 
                                                    << 0x1bU) 
                                                   | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U] 
                                                      >> 5U)))))
                                         ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[1U]
                                         : (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__WB_forward_valid) 
                                             & ((0x1fU 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                                                    >> 4U)) 
                                                == 
                                                (0x1fU 
                                                 & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[3U] 
                                                     << 0x1bU) 
                                                    | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U] 
                                                       >> 5U)))))
                                             ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb
                                             : ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[4U] 
                                                 << 0x11U) 
                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[3U] 
                                                   >> 0xfU))))),32);
            tracep->chgCData(oldp+192,((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U])),5);
            tracep->chgCData(oldp+193,((0x1fU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                                                 >> 4U))),5);
            tracep->chgBit(oldp+194,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U] 
                                            >> 0xaU))));
            tracep->chgIData(oldp+195,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[1U]),32);
            tracep->chgIData(oldp+196,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_JIRL_TYPE)
                                         ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id_true
                                         : (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                    >> 0x20U)))),32);
            tracep->chgBit(oldp+197,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+198,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+199,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+200,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                            >> 0x1bU))));
            tracep->chgCData(oldp+201,((0x1fU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                                 >> 0x16U))),5);
            tracep->chgIData(oldp+202,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex),32);
            tracep->chgIData(oldp+203,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex),32);
            tracep->chgIData(oldp+204,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0U]),32);
            tracep->chgIData(oldp+205,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                         << 0x11U) 
                                        | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[4U] 
                                           >> 0xfU))),32);
            tracep->chgIData(oldp+206,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[4U] 
                                         << 0x11U) 
                                        | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[3U] 
                                           >> 0xfU))),32);
            tracep->chgIData(oldp+207,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[3U] 
                                         << 0x11U) 
                                        | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U] 
                                           >> 0xfU))),32);
            tracep->chgCData(oldp+208,((0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[3U] 
                                                  << 0x16U) 
                                                 | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U] 
                                                    >> 0xaU)))),5);
            tracep->chgCData(oldp+209,((0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[3U] 
                                                  << 0x1bU) 
                                                 | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U] 
                                                    >> 5U)))),5);
            tracep->chgCData(oldp+210,((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U])),5);
            tracep->chgIData(oldp+211,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[1U]),32);
            tracep->chgBit(oldp+212,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+213,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                            >> 0xfU))));
            tracep->chgCData(oldp+214,((0xfU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U] 
                                                >> 5U))),4);
            tracep->chgBit(oldp+215,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+216,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+217,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U] 
                                            >> 0xfU))));
            tracep->chgIData(oldp+218,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0U]),32);
            tracep->chgIData(oldp+219,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp),32);
            tracep->chgBit(oldp+220,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid));
            tracep->chgIData(oldp+221,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                                         << 0x1cU) 
                                        | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U] 
                                           >> 4U))),32);
            tracep->chgIData(oldp+222,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U] 
                                         << 0x1cU) 
                                        | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[1U] 
                                           >> 4U))),32);
            tracep->chgBit(oldp+223,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                                            >> 9U))));
            tracep->chgIData(oldp+224,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[1U] 
                                         << 0x1cU) 
                                        | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[0U] 
                                           >> 4U))),32);
            tracep->chgBit(oldp+225,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__pipeline_valid));
            tracep->chgBit(oldp+226,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__pipeline_valid));
            tracep->chgIData(oldp+227,((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__pipeline_data 
                                                >> 0x20U))),32);
            tracep->chgIData(oldp+228,((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__pipeline_data)),32);
            tracep->chgBit(oldp+229,((0U == (0x3ffU 
                                             & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 0x16U))))));
            tracep->chgBit(oldp+230,((1U == (0x3ffU 
                                             & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 0x16U))))));
            tracep->chgBit(oldp+231,((1U == (0x7fU 
                                             & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 0x19U))))));
            tracep->chgBit(oldp+232,((1U == (0xfU & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x1cU))))));
            tracep->chgBit(oldp+233,((0x10U == (0x7fU 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x19U))))));
            tracep->chgBit(oldp+234,((0xaU == (0x3fU 
                                               & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0x1aU))))));
            tracep->chgBit(oldp+235,((1U == (3U & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x1eU))))));
            tracep->chgBit(oldp+236,(((0x20U == (0x7fU 
                                                 & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0xfU)))) 
                                      & (0U == (0x3ffU 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x16U)))))));
            tracep->chgBit(oldp+237,(((0x22U == (0x7fU 
                                                 & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0xfU)))) 
                                      & (0U == (0x3ffU 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x16U)))))));
            tracep->chgBit(oldp+238,(((0x24U == (0x7fU 
                                                 & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0xfU)))) 
                                      & (0U == (0x3ffU 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x16U)))))));
            tracep->chgBit(oldp+239,(((0x25U == (0x7fU 
                                                 & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0xfU)))) 
                                      & (0U == (0x3ffU 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x16U)))))));
            tracep->chgBit(oldp+240,(((0x28U == (0x7fU 
                                                 & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0xfU)))) 
                                      & (0U == (0x3ffU 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x16U)))))));
            tracep->chgBit(oldp+241,(((0x29U == (0x7fU 
                                                 & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0xfU)))) 
                                      & (0U == (0x3ffU 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x16U)))))));
            tracep->chgBit(oldp+242,(((0x2aU == (0x7fU 
                                                 & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0xfU)))) 
                                      & (0U == (0x3ffU 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x16U)))))));
            tracep->chgBit(oldp+243,(((0x2bU == (0x7fU 
                                                 & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0xfU)))) 
                                      & (0U == (0x3ffU 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x16U)))))));
            tracep->chgBit(oldp+244,(((0x2eU == (0x7fU 
                                                 & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0xfU)))) 
                                      & (0U == (0x3ffU 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x16U)))))));
            tracep->chgBit(oldp+245,(((0x2fU == (0x7fU 
                                                 & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0xfU)))) 
                                      & (0U == (0x3ffU 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x16U)))))));
            tracep->chgBit(oldp+246,(((0x30U == (0x7fU 
                                                 & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0xfU)))) 
                                      & (0U == (0x3ffU 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x16U)))))));
            tracep->chgBit(oldp+247,(((0x38U == (0x7fU 
                                                 & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0xfU)))) 
                                      & (0U == (0x3ffU 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x16U)))))));
            tracep->chgBit(oldp+248,(((0x39U == (0x7fU 
                                                 & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0xfU)))) 
                                      & (0U == (0x3ffU 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x16U)))))));
            tracep->chgBit(oldp+249,(((0x3aU == (0x7fU 
                                                 & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0xfU)))) 
                                      & (0U == (0x3ffU 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x16U)))))));
            tracep->chgBit(oldp+250,(((0x40U == (0x7fU 
                                                 & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0xfU)))) 
                                      & (0U == (0x3ffU 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x16U)))))));
            tracep->chgBit(oldp+251,(((0x41U == (0x7fU 
                                                 & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0xfU)))) 
                                      & (0U == (0x3ffU 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x16U)))))));
            tracep->chgBit(oldp+252,(((0x42U == (0x7fU 
                                                 & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0xfU)))) 
                                      & (0U == (0x3ffU 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x16U)))))));
            tracep->chgBit(oldp+253,(((0x43U == (0x7fU 
                                                 & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0xfU)))) 
                                      & (0U == (0x3ffU 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x16U)))))));
            tracep->chgBit(oldp+254,(((1U == (0x7fU 
                                              & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0xfU)))) 
                                      & (1U == (0x3ffU 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x16U)))))));
            tracep->chgBit(oldp+255,(((9U == (0x7fU 
                                              & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0xfU)))) 
                                      & (1U == (0x3ffU 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x16U)))))));
            tracep->chgBit(oldp+256,(((0x11U == (0x7fU 
                                                 & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0xfU)))) 
                                      & (1U == (0x3ffU 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x16U)))))));
            tracep->chgBit(oldp+257,(((0U == (7U & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0x16U)))) 
                                      & (1U == (0x7fU 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x19U)))))));
            tracep->chgBit(oldp+258,(((1U == (7U & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0x16U)))) 
                                      & (1U == (0x7fU 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x19U)))))));
            tracep->chgBit(oldp+259,(((2U == (7U & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0x16U)))) 
                                      & (1U == (0x7fU 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x19U)))))));
            tracep->chgBit(oldp+260,((2U == (7U & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x16U))))));
            tracep->chgCData(oldp+261,((7U & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                      >> 0x19U)))),3);
            tracep->chgBit(oldp+262,(((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                  >> 0x18U))) 
                                      & (0x10U == (0x7fU 
                                                   & (IData)(
                                                             (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                              >> 0x19U)))))));
            tracep->chgBit(oldp+263,(((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                               >> 0x18U)) 
                                      & (0x10U == (0x7fU 
                                                   & (IData)(
                                                             (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                              >> 0x19U)))))));
            tracep->chgBit(oldp+264,(((0U == (0xfU 
                                              & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0x16U)))) 
                                      & (0xaU == (0x3fU 
                                                  & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x1aU)))))));
            tracep->chgBit(oldp+265,(((1U == (0xfU 
                                              & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0x16U)))) 
                                      & (0xaU == (0x3fU 
                                                  & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x1aU)))))));
            tracep->chgBit(oldp+266,(((2U == (0xfU 
                                              & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0x16U)))) 
                                      & (0xaU == (0x3fU 
                                                  & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x1aU)))))));
            tracep->chgBit(oldp+267,(((4U == (0xfU 
                                              & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0x16U)))) 
                                      & (0xaU == (0x3fU 
                                                  & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x1aU)))))));
            tracep->chgBit(oldp+268,(((5U == (0xfU 
                                              & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0x16U)))) 
                                      & (0xaU == (0x3fU 
                                                  & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x1aU)))))));
            tracep->chgBit(oldp+269,(((6U == (0xfU 
                                              & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0x16U)))) 
                                      & (0xaU == (0x3fU 
                                                  & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x1aU)))))));
            tracep->chgCData(oldp+270,((0xfU & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 0x1cU)))),4);
            tracep->chgBit(oldp+271,(((4U == (0xfU 
                                              & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0x1cU)))) 
                                      & (1U == (3U 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x1eU)))))));
            tracep->chgBit(oldp+272,(((6U == (0xfU 
                                              & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0x1cU)))) 
                                      & (1U == (3U 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x1eU)))))));
            tracep->chgBit(oldp+273,(((7U == (0xfU 
                                              & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0x1cU)))) 
                                      & (1U == (3U 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x1eU)))))));
            tracep->chgBit(oldp+274,(((8U == (0xfU 
                                              & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0x1cU)))) 
                                      & (1U == (3U 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x1eU)))))));
            tracep->chgBit(oldp+275,(((9U == (0xfU 
                                              & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0x1cU)))) 
                                      & (1U == (3U 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x1eU)))))));
            tracep->chgBit(oldp+276,(((0xaU == (0xfU 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x1cU)))) 
                                      & (1U == (3U 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x1eU)))))));
            tracep->chgBit(oldp+277,(((0xbU == (0xfU 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x1cU)))) 
                                      & (1U == (3U 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x1eU)))))));
            tracep->chgBit(oldp+278,((0x54U == (0x1ffffU 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0xfU))))));
            tracep->chgBit(oldp+279,((0x56U == (0x1ffffU 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0xfU))))));
            tracep->chgBit(oldp+280,(((4U == (0xffU 
                                              & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0x18U)))) 
                                      & (0U == (0x1fU 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 5U)))))));
            tracep->chgBit(oldp+281,(((4U == (0xffU 
                                              & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0x18U)))) 
                                      & (1U == (0x1fU 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 5U)))))));
            tracep->chgBit(oldp+282,(((4U == (0xffU 
                                              & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0x18U)))) 
                                      & (0U != (0xfU 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 6U)))))));
            tracep->chgBit(oldp+283,((((((0x54U == 
                                          (0x1ffffU 
                                           & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                      >> 0xfU)))) 
                                         & (0x56U == 
                                            (0x1ffffU 
                                             & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 0xfU))))) 
                                        & ((4U == (0xffU 
                                                   & (IData)(
                                                             (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                              >> 0x18U)))) 
                                           & (0U == 
                                              (0x1fU 
                                               & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 5U)))))) 
                                       & ((4U == (0xffU 
                                                  & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x18U)))) 
                                          & (1U == 
                                             (0x1fU 
                                              & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 5U)))))) 
                                      & ((4U == (0xffU 
                                                 & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0x18U)))) 
                                         & (0U != (0xfU 
                                                   & (IData)(
                                                             (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                              >> 6U))))))));
            tracep->chgBit(oldp+284,(((((1U == (0x7fU 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0xfU)))) 
                                        & (1U == (0x3ffU 
                                                  & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x16U))))) 
                                       | ((9U == (0x7fU 
                                                  & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0xfU)))) 
                                          & (1U == 
                                             (0x3ffU 
                                              & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0x16U)))))) 
                                      | ((0x11U == 
                                          (0x7fU & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0xfU)))) 
                                         & (1U == (0x3ffU 
                                                   & (IData)(
                                                             (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                              >> 0x16U))))))));
            tracep->chgBit(oldp+285,((((((((0U == (7U 
                                                   & (IData)(
                                                             (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                              >> 0x16U)))) 
                                           & (1U == 
                                              (0x7fU 
                                               & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0x19U))))) 
                                          | ((1U == 
                                              (7U & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x16U)))) 
                                             & (1U 
                                                == 
                                                (0x7fU 
                                                 & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0x19U)))))) 
                                         | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ADDI_TYPE)) 
                                        | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ANDI_TYPE)) 
                                       | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ORI_TYPE)) 
                                      | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_XORI_TYPE))));
            tracep->chgBit(oldp+286,((((4U == (0xfU 
                                               & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0x1cU)))) 
                                       & (1U == (3U 
                                                 & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0x1eU))))) 
                                      | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BL_TYPE))));
            tracep->chgBit(oldp+287,(((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_reg_inst) 
                                          | ((((1U 
                                                == 
                                                (0x7fU 
                                                 & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0xfU)))) 
                                               & (1U 
                                                  == 
                                                  (0x3ffU 
                                                   & (IData)(
                                                             (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                              >> 0x16U))))) 
                                              | ((9U 
                                                  == 
                                                  (0x7fU 
                                                   & (IData)(
                                                             (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                              >> 0xfU)))) 
                                                 & (1U 
                                                    == 
                                                    (0x3ffU 
                                                     & (IData)(
                                                               (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                >> 0x16U)))))) 
                                             | ((0x11U 
                                                 == 
                                                 (0x7fU 
                                                  & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0xfU)))) 
                                                & (1U 
                                                   == 
                                                   (0x3ffU 
                                                    & (IData)(
                                                              (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                               >> 0x16U))))))) 
                                         | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ADDI_TYPE)) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LUI_TYPE) 
                                           | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_PCADDU12I_TYPE))) 
                                       | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_load_inst)) 
                                      | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_store_inst))));
            tracep->chgBit(oldp+288,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_JIRL_TYPE) 
                                      | (((((((8U == 
                                               (0xfU 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x1cU)))) 
                                              & (1U 
                                                 == 
                                                 (3U 
                                                  & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x1eU))))) 
                                             | ((9U 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x1cU)))) 
                                                & (1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                               >> 0x1eU)))))) 
                                            | ((0xaU 
                                                == 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0x1cU)))) 
                                               & (1U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                              >> 0x1eU)))))) 
                                           | ((0xbU 
                                               == (0xfU 
                                                   & (IData)(
                                                             (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                              >> 0x1cU)))) 
                                              & (1U 
                                                 == 
                                                 (3U 
                                                  & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x1eU)))))) 
                                          | ((6U == 
                                              (0xfU 
                                               & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0x1cU)))) 
                                             & (1U 
                                                == 
                                                (3U 
                                                 & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0x1eU)))))) 
                                         | ((7U == 
                                             (0xfU 
                                              & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0x1cU)))) 
                                            & (1U == 
                                               (3U 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x1eU)))))))));
            tracep->chgBit(oldp+289,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_reg_inst) 
                                         | ((((1U == 
                                               (0x7fU 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0xfU)))) 
                                              & (1U 
                                                 == 
                                                 (0x3ffU 
                                                  & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x16U))))) 
                                             | ((9U 
                                                 == 
                                                 (0x7fU 
                                                  & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0xfU)))) 
                                                & (1U 
                                                   == 
                                                   (0x3ffU 
                                                    & (IData)(
                                                              (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                               >> 0x16U)))))) 
                                            | ((0x11U 
                                                == 
                                                (0x7fU 
                                                 & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0xfU)))) 
                                               & (1U 
                                                  == 
                                                  (0x3ffU 
                                                   & (IData)(
                                                             (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                              >> 0x16U))))))) 
                                        | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ADDI_TYPE)) 
                                       | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_load_inst)) 
                                      | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_store_inst))));
            tracep->chgIData(oldp+290,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[0]),32);
            tracep->chgIData(oldp+291,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[1]),32);
            tracep->chgIData(oldp+292,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[2]),32);
            tracep->chgIData(oldp+293,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[3]),32);
            tracep->chgIData(oldp+294,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[4]),32);
            tracep->chgIData(oldp+295,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[5]),32);
            tracep->chgIData(oldp+296,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[6]),32);
            tracep->chgIData(oldp+297,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[7]),32);
            tracep->chgIData(oldp+298,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[8]),32);
            tracep->chgIData(oldp+299,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[9]),32);
            tracep->chgIData(oldp+300,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[10]),32);
            tracep->chgIData(oldp+301,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[11]),32);
            tracep->chgIData(oldp+302,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[12]),32);
            tracep->chgIData(oldp+303,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[13]),32);
            tracep->chgIData(oldp+304,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[14]),32);
            tracep->chgIData(oldp+305,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[15]),32);
            tracep->chgIData(oldp+306,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[16]),32);
            tracep->chgIData(oldp+307,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[17]),32);
            tracep->chgIData(oldp+308,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[18]),32);
            tracep->chgIData(oldp+309,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[19]),32);
            tracep->chgIData(oldp+310,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[20]),32);
            tracep->chgIData(oldp+311,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[21]),32);
            tracep->chgIData(oldp+312,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[22]),32);
            tracep->chgIData(oldp+313,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[23]),32);
            tracep->chgIData(oldp+314,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[24]),32);
            tracep->chgIData(oldp+315,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[25]),32);
            tracep->chgIData(oldp+316,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[26]),32);
            tracep->chgIData(oldp+317,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[27]),32);
            tracep->chgIData(oldp+318,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[28]),32);
            tracep->chgIData(oldp+319,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[29]),32);
            tracep->chgIData(oldp+320,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[30]),32);
            tracep->chgIData(oldp+321,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[31]),32);
            tracep->chgBit(oldp+322,((((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U]) 
                                       == (0x1fU & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 5U)))) 
                                      | ((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U]) 
                                         == (0x1fU 
                                             & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 0xaU)))))));
            tracep->chgBit(oldp+323,((((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U]) 
                                       == (0x1fU & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 5U)))) 
                                      | ((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U]) 
                                         == (0x1fU 
                                             & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 0xaU)))))));
            tracep->chgBit(oldp+324,(((((~ (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_PCADDU12I_TYPE) 
                                             | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BL_TYPE)) 
                                            | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_JIRL_TYPE))) 
                                        & ((0x1fU & 
                                            vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U]) 
                                           == (0x1fU 
                                               & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 5U))))) 
                                       | ((~ ((((((
                                                   ((1U 
                                                     == 
                                                     (0x7fU 
                                                      & (IData)(
                                                                (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                 >> 0xfU)))) 
                                                    & (1U 
                                                       == 
                                                       (0x3ffU 
                                                        & (IData)(
                                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                   >> 0x16U))))) 
                                                   | ((9U 
                                                       == 
                                                       (0x7fU 
                                                        & (IData)(
                                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                   >> 0xfU)))) 
                                                      & (1U 
                                                         == 
                                                         (0x3ffU 
                                                          & (IData)(
                                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                     >> 0x16U)))))) 
                                                  | ((0x11U 
                                                      == 
                                                      (0x7fU 
                                                       & (IData)(
                                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                  >> 0xfU)))) 
                                                     & (1U 
                                                        == 
                                                        (0x3ffU 
                                                         & (IData)(
                                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                    >> 0x16U)))))) 
                                                 | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ADDI_TYPE)) 
                                                | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LUI_TYPE) 
                                                   | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_PCADDU12I_TYPE))) 
                                               | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_load_inst)) 
                                              | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_store_inst))) 
                                          & ((0x1fU 
                                              & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U]) 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0xaU)))))) 
                                      | ((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U]) 
                                         == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_id)))));
            tracep->chgBit(oldp+325,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid));
            tracep->chgBit(oldp+326,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[5U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+327,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[5U] 
                                            >> 0x1bU))));
            tracep->chgCData(oldp+328,((0x1fU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[5U] 
                                                 >> 0x16U))),5);
            tracep->chgBit(oldp+329,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[5U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+330,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[5U] 
                                            >> 0x14U))));
            tracep->chgCData(oldp+331,((3U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[5U] 
                                              >> 0x12U))),2);
            tracep->chgBit(oldp+332,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[5U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+333,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[5U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+334,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[5U] 
                                            >> 0xfU))));
            tracep->chgIData(oldp+335,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[5U] 
                                         << 0x11U) 
                                        | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[4U] 
                                           >> 0xfU))),32);
            tracep->chgIData(oldp+336,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[4U] 
                                         << 0x11U) 
                                        | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[3U] 
                                           >> 0xfU))),32);
            tracep->chgIData(oldp+337,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[3U] 
                                         << 0x11U) 
                                        | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[2U] 
                                           >> 0xfU))),32);
            tracep->chgCData(oldp+338,((0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[3U] 
                                                  << 0x16U) 
                                                 | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[2U] 
                                                    >> 0xaU)))),5);
            tracep->chgCData(oldp+339,((0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[3U] 
                                                  << 0x1bU) 
                                                 | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[2U] 
                                                    >> 5U)))),5);
            tracep->chgCData(oldp+340,((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[2U])),5);
            tracep->chgIData(oldp+341,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[1U]),32);
            tracep->chgIData(oldp+342,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[0U]),32);
            tracep->chgIData(oldp+343,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_result),32);
            tracep->chgIData(oldp+344,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__slt_result),32);
            tracep->chgIData(oldp+345,((1U & (~ (IData)(
                                                        (1ULL 
                                                         & ((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)) 
                                                              + (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_b))) 
                                                             + (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_cin))) 
                                                            >> 0x20U)))))),32);
            tracep->chgIData(oldp+346,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_b),32);
            tracep->chgBit(oldp+347,((1U & (IData)(
                                                   (1ULL 
                                                    & ((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)) 
                                                         + (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_b))) 
                                                        + (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_cin))) 
                                                       >> 0x20U))))));
            tracep->chgBit(oldp+348,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_cin));
            tracep->chgIData(oldp+349,(((0x80000000U 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)
                                         ? (- vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)
                                         : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)),32);
            tracep->chgIData(oldp+350,(((0x80000000U 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)
                                         ? (- vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)
                                         : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)),32);
            tracep->chgBit(oldp+351,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                                            >> 0x1fU))));
            tracep->chgBit(oldp+352,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex 
                                            >> 0x1fU))));
            tracep->chgBit(oldp+353,((1U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                                             ^ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex) 
                                            >> 0x1fU))));
            tracep->chgIData(oldp+354,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divSigned)
                                         ? ((0x80000000U 
                                             & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)
                                             ? (- vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)
                                             : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)
                                         : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)),32);
            tracep->chgIData(oldp+355,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divSigned)
                                         ? ((0x80000000U 
                                             & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)
                                             ? (- vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)
                                             : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)
                                         : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)),32);
            tracep->chgBit(oldp+356,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_valid));
            tracep->chgBit(oldp+357,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[2U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+358,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[2U] 
                                            >> 0xeU))));
            tracep->chgCData(oldp+359,((3U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[2U] 
                                              >> 0xcU))),2);
            tracep->chgBit(oldp+360,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[2U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+361,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[2U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+362,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[2U] 
                                            >> 9U))));
            tracep->chgCData(oldp+363,((0xfU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[2U] 
                                                >> 5U))),4);
            tracep->chgCData(oldp+364,((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[2U])),5);
            tracep->chgIData(oldp+365,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[1U]),32);
            tracep->chgIData(oldp+366,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[0U]),32);
            tracep->chgBit(oldp+367,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[3U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+368,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[3U] 
                                            >> 9U))));
            tracep->chgCData(oldp+369,((0x1fU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[3U] 
                                                 >> 4U))),5);
            tracep->chgIData(oldp+370,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[3U] 
                                         << 0x1cU) 
                                        | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[2U] 
                                           >> 4U))),32);
            tracep->chgIData(oldp+371,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[2U] 
                                         << 0x1cU) 
                                        | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[1U] 
                                           >> 4U))),32);
            tracep->chgIData(oldp+372,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[1U] 
                                         << 0x1cU) 
                                        | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[0U] 
                                           >> 4U))),32);
            tracep->chgCData(oldp+373,((0xfU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[0U])),4);
            tracep->chgBit(oldp+374,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req));
            tracep->chgBit(oldp+375,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req_or));
            tracep->chgBit(oldp+376,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wr_r));
            tracep->chgCData(oldp+377,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_size_r),2);
            tracep->chgBit(oldp+378,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__addr_rcv));
            tracep->chgBit(oldp+379,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__wdata_rcv));
            tracep->chgBit(oldp+380,(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_ar));
            tracep->chgBit(oldp+381,(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_ar_disable));
            tracep->chgBit(oldp+382,((1U & vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_random)));
            tracep->chgBit(oldp+383,(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_aw));
            tracep->chgBit(oldp+384,(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_aw_disable));
            tracep->chgBit(oldp+385,((1U & (vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                            >> 1U))));
            tracep->chgBit(oldp+386,((1U & (vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                            >> 2U))));
            tracep->chgBit(oldp+387,(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_no_delay));
            tracep->chgBit(oldp+388,((1U & (vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                            >> 3U))));
            tracep->chgIData(oldp+389,(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_random),23);
            tracep->chgIData(oldp+390,(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_random_next),23);
            tracep->chgBit(oldp+391,(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_short_delay));
            tracep->chgBit(oldp+392,(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_w));
            tracep->chgBit(oldp+393,(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_w_disable));
            tracep->chgBit(oldp+394,((1U & (vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                            >> 4U))));
            tracep->chgCData(oldp+395,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit),5);
            tracep->chgCData(oldp+396,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit),5);
            tracep->chgCData(oldp+397,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit),5);
            tracep->chgCData(oldp+398,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit),5);
            tracep->chgCData(oldp+399,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready),5);
            tracep->chgCData(oldp+400,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready),5);
            tracep->chgCData(oldp+401,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid),5);
            tracep->chgCData(oldp+402,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready),5);
            tracep->chgCData(oldp+403,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast),5);
            tracep->chgCData(oldp+404,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid),5);
            tracep->chgCData(oldp+405,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[0]),4);
            tracep->chgCData(oldp+406,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[1]),4);
            tracep->chgCData(oldp+407,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[2]),4);
            tracep->chgCData(oldp+408,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[3]),4);
            tracep->chgCData(oldp+409,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[4]),4);
            tracep->chgCData(oldp+410,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[0]),4);
            tracep->chgCData(oldp+411,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[1]),4);
            tracep->chgCData(oldp+412,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[2]),4);
            tracep->chgCData(oldp+413,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[3]),4);
            tracep->chgCData(oldp+414,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[4]),4);
            tracep->chgCData(oldp+415,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_0),3);
            tracep->chgCData(oldp+416,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_1),3);
            tracep->chgCData(oldp+417,((7U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid))),3);
            tracep->chgCData(oldp+418,((3U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid) 
                                              >> 3U))),3);
            tracep->chgCData(oldp+419,((7U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid))),3);
            tracep->chgCData(oldp+420,((3U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+421,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty));
            tracep->chgBit(oldp+422,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full));
            tracep->chgBit(oldp+423,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_empty));
            tracep->chgBit(oldp+424,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full));
            tracep->chgCData(oldp+425,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_dir),3);
            tracep->chgCData(oldp+426,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir),3);
            tracep->chgCData(oldp+427,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_pre_sel),3);
            tracep->chgBit(oldp+428,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog));
            tracep->chgCData(oldp+429,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel_reg),3);
            tracep->chgCData(oldp+430,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel),3);
            tracep->chgIData(oldp+431,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int),32);
            tracep->chgBit(oldp+432,((1U & (~ ((0x1fe0U 
                                                == 
                                                (0xffffU 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r 
                                                    >> 0x10U))) 
                                               | ((0x1fafU 
                                                   == 
                                                   (0x1fffU 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r 
                                                       >> 0x10U))) 
                                                  | (0x1fd0U 
                                                     == 
                                                     (0x1fffU 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r 
                                                         >> 0x10U)))))))));
            tracep->chgCData(oldp+433,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir),3);
            tracep->chgCData(oldp+434,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir),3);
            tracep->chgCData(oldp+435,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_pre_sel),3);
            tracep->chgBit(oldp+436,((1U & (~ (((0x1fafU 
                                                 == 
                                                 (0x1fffU 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r 
                                                     >> 0x10U))) 
                                                | (0x1fd0U 
                                                   == 
                                                   (0x1fffU 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r 
                                                       >> 0x10U)))) 
                                               | (0x1fe0U 
                                                  == 
                                                  (0xffffU 
                                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r 
                                                      >> 0x10U))))))));
            tracep->chgIData(oldp+437,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int),32);
            tracep->chgCData(oldp+438,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram[0]),3);
            tracep->chgCData(oldp+439,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram[1]),3);
            tracep->chgCData(oldp+440,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr),2);
            tracep->chgCData(oldp+441,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr),2);
            tracep->chgBit(oldp+442,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr))));
            tracep->chgBit(oldp+443,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr))));
            tracep->chgIData(oldp+444,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__i),32);
            tracep->chgCData(oldp+445,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram[0]),3);
            tracep->chgCData(oldp+446,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram[1]),3);
            tracep->chgCData(oldp+447,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr),2);
            tracep->chgCData(oldp+448,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr),2);
            tracep->chgBit(oldp+449,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr))));
            tracep->chgBit(oldp+450,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr))));
            tracep->chgIData(oldp+451,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__i),32);
            tracep->chgBit(oldp+452,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant) 
                                      & ((0U == (0x3fU 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                                    >> 0xeU)))
                                          ? (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_enab)
                                          : ((0U != 
                                              (0x3fU 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                                  >> 0xeU))) 
                                             & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab))))));
            tracep->chgIData(oldp+453,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)
                                         ? ((((0U != 
                                               (0x3fU 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                                   >> 0xeU)))
                                               ? (0xffffffU 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__REG_DAT_T 
                                                     >> 8U))
                                               : 0U) 
                                             << 8U) 
                                            | (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datao))
                                         : 0U)),32);
            tracep->chgBit(oldp+454,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant));
            tracep->chgBit(oldp+455,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ));
            tracep->chgBit(oldp+456,(((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)) 
                                      & ((0U == (0x3fU 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                                    >> 0xeU)))
                                          ? (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_enab)
                                          : ((0U != 
                                              (0x3fU 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                                  >> 0xeU))) 
                                             & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab))))));
            tracep->chgBit(oldp+457,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr));
            tracep->chgBit(oldp+458,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu));
            tracep->chgBit(oldp+459,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu));
            tracep->chgIData(oldp+460,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr),20);
            tracep->chgCData(oldp+461,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datai_cpu),8);
            tracep->chgCData(oldp+462,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datao_cpu),8);
            tracep->chgBit(oldp+463,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_word_trans_cpu));
            tracep->chgIData(oldp+464,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)
                                         ? 0U : ((0U 
                                                  != 
                                                  (0x3fU 
                                                   & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                                      >> 0xeU)))
                                                  ? 
                                                 (0xffffffU 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__REG_DAT_T 
                                                     >> 8U))
                                                  : 0U))),24);
            tracep->chgIData(oldp+465,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_high_24b_wr),24);
            tracep->chgBit(oldp+466,((0U == (0x3fU 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                                >> 0xeU)))));
            tracep->chgBit(oldp+467,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_enab));
            tracep->chgBit(oldp+468,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw));
            tracep->chgBit(oldp+469,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_psel));
            tracep->chgIData(oldp+470,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr),20);
            tracep->chgCData(oldp+471,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai),8);
            tracep->chgCData(oldp+472,((0xffU & ((4U 
                                                  & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)
                                                  ? 
                                                 ((2U 
                                                   & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)
                                                   ? 
                                                  ((1U 
                                                    & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)
                                                    ? 
                                                   ((0x80U 
                                                     & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))
                                                     ? (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fi_di_reg)
                                                     : (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg))
                                                    : (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr))
                                                   : 
                                                  ((1U 
                                                    & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)
                                                    ? (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr)
                                                    : 0U))
                                                  : 
                                                 ((2U 
                                                   & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)
                                                   ? 
                                                  ((1U 
                                                    & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)
                                                    ? (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr)
                                                    : 
                                                   ((0x80U 
                                                     & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))
                                                     ? 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl 
                                                     >> 0x10U)
                                                     : 
                                                    (0xc0U 
                                                     | (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir))))
                                                   : 
                                                  ((1U 
                                                    & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)
                                                    ? 
                                                   ((0x80U 
                                                     & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))
                                                     ? 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl 
                                                     >> 8U)
                                                     : (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier))
                                                    : 
                                                   ((0x80U 
                                                     & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))
                                                     ? vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl
                                                     : 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_data_out) 
                                                     >> 3U))))))),8);
            tracep->chgBit(oldp+473,((0U != (0x3fU 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                                >> 0xeU)))));
            tracep->chgBit(oldp+474,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab));
            tracep->chgBit(oldp+475,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel));
            tracep->chgIData(oldp+476,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_datai),32);
            tracep->chgIData(oldp+477,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__REG_DAT_T),32);
            tracep->chgBit(oldp+478,((1U & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)))));
            tracep->chgBit(oldp+479,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_ready));
            tracep->chgBit(oldp+480,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd));
            tracep->chgCData(oldp+481,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm),4);
            tracep->chgCData(oldp+482,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb),4);
            tracep->chgCData(oldp+483,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb),4);
            tracep->chgIData(oldp+484,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32),32);
            tracep->chgIData(oldp+485,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32),32);
            tracep->chgCData(oldp+486,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count),3);
            tracep->chgCData(oldp+487,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size),3);
            tracep->chgCData(oldp+488,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_wr_size),3);
            tracep->chgBit(oldp+489,(((0U == (0x3fU 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                                 >> 0xeU)))
                                       ? (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_enab)
                                       : ((0U != (0x3fU 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                                     >> 0xeU))) 
                                          & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab)))));
            tracep->chgBit(oldp+490,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_psel));
            tracep->chgBit(oldp+491,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_enab));
            tracep->chgIData(oldp+492,((0xffffffU & 
                                        ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)
                                          ? (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_wdata_dma 
                                             >> 8U)
                                          : vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_high_24b_wr))),24);
            tracep->chgIData(oldp+493,(((0U != (0x3fU 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                                   >> 0xeU)))
                                         ? (0xffffffU 
                                            & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__REG_DAT_T 
                                               >> 8U))
                                         : 0U)),24);
            tracep->chgCData(oldp+494,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datao),8);
            tracep->chgCData(oldp+495,((0xffU & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)),8);
            tracep->chgBit(oldp+496,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we));
            tracep->chgBit(oldp+497,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__re));
            tracep->chgBit(oldp+498,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__rx_en));
            tracep->chgBit(oldp+499,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__tx2rx_en));
            tracep->chgBit(oldp+500,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode));
            tracep->chgCData(oldp+501,((7U & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)),3);
            tracep->chgBit(oldp+502,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__enable));
            tracep->chgBit(oldp+503,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__srx_pad));
            tracep->chgCData(oldp+504,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier),4);
            tracep->chgCData(oldp+505,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir),4);
            tracep->chgCData(oldp+506,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fcr),2);
            tracep->chgCData(oldp+507,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr),5);
            tracep->chgBit(oldp+508,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__infrared));
            tracep->chgBit(oldp+509,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_pol));
            tracep->chgCData(oldp+510,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr),8);
            tracep->chgCData(oldp+511,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr),8);
            tracep->chgIData(oldp+512,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl),24);
            tracep->chgBit(oldp+513,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__start_dlc));
            tracep->chgBit(oldp+514,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask_d));
            tracep->chgBit(oldp+515,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset));
            tracep->chgSData(oldp+516,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc),16);
            tracep->chgCData(oldp+517,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__trigger_level),4);
            tracep->chgBit(oldp+518,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_reset));
            tracep->chgBit(oldp+519,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tx_reset));
            tracep->chgBit(oldp+520,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                                            >> 7U))));
            tracep->chgBit(oldp+521,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                                            >> 2U))));
            tracep->chgBit(oldp+522,((1U & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                                               >> 2U)))));
            tracep->chgBit(oldp+523,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_reg));
            tracep->chgBit(oldp+524,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_en_reg));
            tracep->chgCData(oldp+525,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg),8);
            tracep->chgCData(oldp+526,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fi_di_reg),8);
            tracep->chgCData(oldp+527,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count),8);
            tracep->chgCData(oldp+528,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__repeat_reg),3);
            tracep->chgBit(oldp+529,((0U == (3U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))));
            tracep->chgBit(oldp+530,((1U == (3U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))));
            tracep->chgBit(oldp+531,((2U == (3U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))));
            tracep->chgBit(oldp+532,((3U == (3U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))));
            tracep->chgBit(oldp+533,((((0U == (3U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg))) 
                                       | (1U == (3U 
                                                 & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode) 
                                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                                               >> 2U))))));
            tracep->chgBit(oldp+534,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                                            >> 3U))));
            tracep->chgBit(oldp+535,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                            >> 4U))));
            tracep->chgBit(oldp+536,((1U & (((0x10U 
                                              & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr))
                                              ? ((0xcU 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                        >> 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                          >> 3U))))
                                              : ((8U 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                                     << 1U)) 
                                                 | ((4U 
                                                     & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                                        << 1U)) 
                                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                                       << 1U)))) 
                                            >> 3U))));
            tracep->chgBit(oldp+537,((1U & (((0x10U 
                                              & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr))
                                              ? ((0xcU 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                        >> 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                          >> 3U))))
                                              : ((8U 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                                     << 1U)) 
                                                 | ((4U 
                                                     & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                                        << 1U)) 
                                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                                       << 1U)))) 
                                            >> 2U))));
            tracep->chgBit(oldp+538,((1U & (((0x10U 
                                              & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr))
                                              ? ((0xcU 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                        >> 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                          >> 3U))))
                                              : ((8U 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                                     << 1U)) 
                                                 | ((4U 
                                                     & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                                        << 1U)) 
                                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                                       << 1U)))) 
                                            >> 1U))));
            tracep->chgBit(oldp+539,((1U & ((0x10U 
                                             & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr))
                                             ? ((0xcU 
                                                 & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                    << 2U)) 
                                                | ((2U 
                                                    & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                       >> 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                         >> 3U))))
                                             : ((8U 
                                                 & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                                    << 1U)) 
                                                | ((4U 
                                                    & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                                       << 1U)) 
                                                   | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                                      << 1U)))))));
            tracep->chgCData(oldp+540,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr),8);
            tracep->chgBit(oldp+541,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0));
            tracep->chgBit(oldp+542,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_overrun));
            tracep->chgBit(oldp+543,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_data_out) 
                                            >> 1U))));
            tracep->chgBit(oldp+544,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_data_out))));
            tracep->chgBit(oldp+545,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_data_out) 
                                            >> 2U))));
            tracep->chgBit(oldp+546,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5));
            tracep->chgBit(oldp+547,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6));
            tracep->chgBit(oldp+548,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7));
            tracep->chgBit(oldp+549,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0r));
            tracep->chgBit(oldp+550,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr1r));
            tracep->chgBit(oldp+551,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr2r));
            tracep->chgBit(oldp+552,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr3r));
            tracep->chgBit(oldp+553,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr4r));
            tracep->chgBit(oldp+554,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5r));
            tracep->chgBit(oldp+555,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6r));
            tracep->chgBit(oldp+556,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7r));
            tracep->chgBit(oldp+557,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask));
            tracep->chgBit(oldp+558,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int));
            tracep->chgBit(oldp+559,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int));
            tracep->chgBit(oldp+560,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int));
            tracep->chgBit(oldp+561,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int));
            tracep->chgBit(oldp+562,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int));
            tracep->chgBit(oldp+563,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_push));
            tracep->chgBit(oldp+564,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop));
            tracep->chgSData(oldp+565,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_data_out),11);
            tracep->chgBit(oldp+566,((0U != (((((((
                                                   ((((((((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
                                                    [8U]) 
                                                   | vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                   [9U]) 
                                                  | vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                  [0xaU]) 
                                                 | vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                 [0xbU]) 
                                                | vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                [0xcU]) 
                                               | vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                               [0xdU]) 
                                              | vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                              [0xeU]) 
                                             | vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                             [0xfU]))));
            tracep->chgCData(oldp+567,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count),5);
            tracep->chgCData(oldp+568,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count),5);
            tracep->chgCData(oldp+569,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate),3);
            tracep->chgCData(oldp+570,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate),4);
            tracep->chgSData(oldp+571,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t),10);
            tracep->chgBit(oldp+572,((1U & (~ (IData)(
                                                      (0U 
                                                       != (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt)))))));
            tracep->chgCData(oldp+573,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt),8);
            tracep->chgCData(oldp+574,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value),8);
            tracep->chgBit(oldp+575,((1U & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode)) 
                                            | ((0U 
                                                == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate)) 
                                               & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error) 
                                                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time) 
                                                      == 
                                                      (7U 
                                                       & ((IData)(1U) 
                                                          + (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__repeat_reg))))) 
                                                  | (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error))))))));
            tracep->chgBit(oldp+576,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time) 
                                        == (7U & ((IData)(1U) 
                                                  + (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__repeat_reg)))) 
                                       & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode)) 
                                      & (2U == (3U 
                                                & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg))))));
            tracep->chgBit(oldp+577,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_out));
            tracep->chgBit(oldp+578,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_in));
            tracep->chgBit(oldp+579,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_push_pulse));
            tracep->chgBit(oldp+580,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask_condition));
            tracep->chgBit(oldp+581,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir_read));
            tracep->chgBit(oldp+582,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr_read));
            tracep->chgBit(oldp+583,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fifo_read));
            tracep->chgBit(oldp+584,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fifo_write));
            tracep->chgCData(oldp+585,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__delayed_modem_signals),4);
            tracep->chgBit(oldp+586,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0_d));
            tracep->chgBit(oldp+587,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr1_d));
            tracep->chgBit(oldp+588,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr2_d));
            tracep->chgBit(oldp+589,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr3_d));
            tracep->chgBit(oldp+590,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr4_d));
            tracep->chgBit(oldp+591,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5_d));
            tracep->chgBit(oldp+592,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6_d));
            tracep->chgBit(oldp+593,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7_d));
            tracep->chgSData(oldp+594,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_cnt),9);
            tracep->chgSData(oldp+595,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_next),9);
            tracep->chgBit(oldp+596,((1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_cnt) 
                                             ^ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_next)) 
                                            >> 8U))));
            tracep->chgBit(oldp+597,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_d));
            tracep->chgBit(oldp+598,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_d));
            tracep->chgBit(oldp+599,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_d));
            tracep->chgBit(oldp+600,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_d));
            tracep->chgBit(oldp+601,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_d));
            tracep->chgBit(oldp+602,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int) 
                                      & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_d)))));
            tracep->chgBit(oldp+603,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int) 
                                      & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_d)))));
            tracep->chgBit(oldp+604,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int) 
                                      & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_d)))));
            tracep->chgBit(oldp+605,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int) 
                                      & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_d)))));
            tracep->chgBit(oldp+606,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int) 
                                      & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_d)))));
            tracep->chgBit(oldp+607,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_pnd));
            tracep->chgBit(oldp+608,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_pnd));
            tracep->chgBit(oldp+609,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_pnd));
            tracep->chgBit(oldp+610,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_pnd));
            tracep->chgBit(oldp+611,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_pnd));
            tracep->chgBit(oldp+612,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__d1_fifo_read));
            tracep->chgBit(oldp+613,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__enable) 
                                      & (((0U == (3U 
                                                  & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg))) 
                                          | (1U == 
                                             (3U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode) 
                                            & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                                                  >> 2U)))))));
            tracep->chgCData(oldp+614,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter),5);
            tracep->chgCData(oldp+615,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter),3);
            tracep->chgCData(oldp+616,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__shift_out),7);
            tracep->chgBit(oldp+617,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp));
            tracep->chgBit(oldp+618,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor));
            tracep->chgBit(oldp+619,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_pop));
            tracep->chgBit(oldp+620,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_out));
            tracep->chgBit(oldp+621,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error));
            tracep->chgCData(oldp+622,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time),3);
            tracep->chgCData(oldp+623,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_out),8);
            tracep->chgBit(oldp+624,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_overrun));
            tracep->chgCData(oldp+625,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_bak),8);
            tracep->chgCData(oldp+626,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
            tracep->chgCData(oldp+627,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
            tracep->chgCData(oldp+628,((0xfU & ((IData)(1U) 
                                                + (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
            tracep->chgCData(oldp+629,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
            tracep->chgCData(oldp+630,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
            tracep->chgCData(oldp+631,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
            tracep->chgCData(oldp+632,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
            tracep->chgCData(oldp+633,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
            tracep->chgCData(oldp+634,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
            tracep->chgCData(oldp+635,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
            tracep->chgCData(oldp+636,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
            tracep->chgCData(oldp+637,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
            tracep->chgCData(oldp+638,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
            tracep->chgCData(oldp+639,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
            tracep->chgCData(oldp+640,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
            tracep->chgCData(oldp+641,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
            tracep->chgCData(oldp+642,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
            tracep->chgCData(oldp+643,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
            tracep->chgCData(oldp+644,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
            tracep->chgBit(oldp+645,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__i_uart_sync_flops__DOT__flop_0));
            tracep->chgBit(oldp+646,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____Vcellinp__receiver__enable));
            tracep->chgCData(oldp+647,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16),4);
            tracep->chgCData(oldp+648,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rbit_counter),3);
            tracep->chgCData(oldp+649,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift),8);
            tracep->chgBit(oldp+650,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity));
            tracep->chgBit(oldp+651,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_error));
            tracep->chgBit(oldp+652,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rframing_error));
            tracep->chgBit(oldp+653,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rbit_in));
            tracep->chgBit(oldp+654,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_xor));
            tracep->chgCData(oldp+655,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b),8);
            tracep->chgBit(oldp+656,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push_q));
            tracep->chgSData(oldp+657,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_data_in),11);
            tracep->chgBit(oldp+658,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push));
            tracep->chgBit(oldp+659,((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b))));
            tracep->chgBit(oldp+660,((7U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16))));
            tracep->chgBit(oldp+661,((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16))));
            tracep->chgBit(oldp+662,((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16))));
            tracep->chgCData(oldp+663,((0xfU & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16) 
                                                - (IData)(1U)))),4);
            tracep->chgSData(oldp+664,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value),10);
            tracep->chgCData(oldp+665,((0xffU & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value) 
                                                 >> 2U))),8);
            tracep->chgCData(oldp+666,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__data8_out),8);
            tracep->chgCData(oldp+667,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
            tracep->chgCData(oldp+668,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
            tracep->chgCData(oldp+669,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
            tracep->chgCData(oldp+670,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
            tracep->chgCData(oldp+671,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
            tracep->chgCData(oldp+672,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
            tracep->chgCData(oldp+673,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
            tracep->chgCData(oldp+674,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
            tracep->chgCData(oldp+675,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
            tracep->chgCData(oldp+676,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
            tracep->chgCData(oldp+677,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
            tracep->chgCData(oldp+678,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
            tracep->chgCData(oldp+679,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
            tracep->chgCData(oldp+680,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
            tracep->chgCData(oldp+681,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
            tracep->chgCData(oldp+682,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
            tracep->chgCData(oldp+683,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
            tracep->chgCData(oldp+684,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
            tracep->chgCData(oldp+685,((0xfU & ((IData)(1U) 
                                                + (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
            tracep->chgCData(oldp+686,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                       [0U]),3);
            tracep->chgCData(oldp+687,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                       [1U]),3);
            tracep->chgCData(oldp+688,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                       [2U]),3);
            tracep->chgCData(oldp+689,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                       [3U]),3);
            tracep->chgCData(oldp+690,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                       [4U]),3);
            tracep->chgCData(oldp+691,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                       [5U]),3);
            tracep->chgCData(oldp+692,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                       [6U]),3);
            tracep->chgCData(oldp+693,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                       [7U]),3);
            tracep->chgCData(oldp+694,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                       [8U]),3);
            tracep->chgCData(oldp+695,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                       [9U]),3);
            tracep->chgCData(oldp+696,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                       [0xaU]),3);
            tracep->chgCData(oldp+697,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                       [0xbU]),3);
            tracep->chgCData(oldp+698,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                       [0xcU]),3);
            tracep->chgCData(oldp+699,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                       [0xdU]),3);
            tracep->chgCData(oldp+700,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                       [0xeU]),3);
            tracep->chgCData(oldp+701,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                       [0xfU]),3);
            tracep->chgCData(oldp+702,((0xffU & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_data_in) 
                                                 >> 3U))),8);
            tracep->chgCData(oldp+703,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
            tracep->chgCData(oldp+704,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
            tracep->chgCData(oldp+705,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
            tracep->chgCData(oldp+706,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
            tracep->chgCData(oldp+707,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
            tracep->chgCData(oldp+708,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
            tracep->chgCData(oldp+709,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
            tracep->chgCData(oldp+710,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
            tracep->chgCData(oldp+711,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
            tracep->chgCData(oldp+712,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
            tracep->chgCData(oldp+713,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
            tracep->chgCData(oldp+714,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
            tracep->chgCData(oldp+715,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
            tracep->chgCData(oldp+716,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
            tracep->chgCData(oldp+717,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
            tracep->chgCData(oldp+718,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
            tracep->chgBit(oldp+719,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_int));
            tracep->chgSData(oldp+720,((0x7ffU & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)),11);
            tracep->chgCData(oldp+721,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r0),4);
            tracep->chgCData(oldp+722,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r1),4);
            tracep->chgCData(oldp+723,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_type_r1),2);
            tracep->chgCData(oldp+724,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_type_r2),2);
            tracep->chgSData(oldp+725,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_c),14);
            tracep->chgIData(oldp+726,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r),25);
            tracep->chgIData(oldp+727,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_op_num),32);
            tracep->chgIData(oldp+728,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter),32);
            tracep->chgIData(oldp+729,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0),32);
            tracep->chgIData(oldp+730,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map1),32);
            tracep->chgIData(oldp+731,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_rdy_map0),32);
            tracep->chgIData(oldp+732,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_rdy_map1),32);
            tracep->chgIData(oldp+733,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command),32);
            tracep->chgSData(oldp+734,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing),16);
            tracep->chgQData(oldp+735,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__addr_in_die),38);
            tracep->chgCData(oldp+737,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE),5);
            tracep->chgIData(oldp+738,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM),32);
            tracep->chgSData(oldp+739,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT),14);
            tracep->chgSData(oldp+740,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT),14);
            tracep->chgBit(oldp+741,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_clr_ack));
            tracep->chgBit(oldp+742,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE));
            tracep->chgBit(oldp+743,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_));
            tracep->chgSData(oldp+744,((0x3fffU & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                   >> 0x10U))),14);
            tracep->chgCData(oldp+745,((7U & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+746,((0xfU & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                >> 8U))),4);
            tracep->chgBit(oldp+747,((1U & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                            >> 8U))));
            tracep->chgBit(oldp+748,((1U & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                            >> 9U))));
            tracep->chgBit(oldp+749,((1U & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                            >> 0xdU))));
            tracep->chgBit(oldp+750,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
                                      & (0x40U == (0x7ffU 
                                                   & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)))));
            tracep->chgBit(oldp+751,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY));
            tracep->chgBit(oldp+752,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT0));
            tracep->chgBit(oldp+753,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT1));
            tracep->chgBit(oldp+754,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT2));
            tracep->chgBit(oldp+755,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT3));
            tracep->chgBit(oldp+756,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
                                      & (0x10U == (0x7ffU 
                                                   & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)))));
            tracep->chgBit(oldp+757,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
                                      & (0x14U == (0x7ffU 
                                                   & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)))));
            tracep->chgBit(oldp+758,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT6));
            tracep->chgBit(oldp+759,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT7));
            tracep->chgBit(oldp+760,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT8));
            tracep->chgBit(oldp+761,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT9));
            tracep->chgBit(oldp+762,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT10));
            tracep->chgBit(oldp+763,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT11));
            tracep->chgBit(oldp+764,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT));
            tracep->chgBit(oldp+765,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_cmd_valid));
            tracep->chgCData(oldp+766,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status),8);
            tracep->chgCData(oldp+767,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_number),2);
            tracep->chgQData(oldp+768,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM),48);
            tracep->chgIData(oldp+770,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD),32);
            tracep->chgCData(oldp+771,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_pre_o),4);
            tracep->chgCData(oldp+772,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY_post_i),4);
            tracep->chgCData(oldp+773,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer),2);
            tracep->chgCData(oldp+774,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT),3);
            tracep->chgCData(oldp+775,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM),8);
            tracep->chgCData(oldp+776,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM),8);
            tracep->chgCData(oldp+777,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND),8);
            tracep->chgCData(oldp+778,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE),5);
            tracep->chgCData(oldp+779,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM),3);
            tracep->chgSData(oldp+780,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count),14);
            tracep->chgQData(oldp+781,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR),38);
            tracep->chgIData(oldp+783,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_I_WR),32);
            tracep->chgBit(oldp+784,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO));
            tracep->chgBit(oldp+785,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ACK));
            tracep->chgBit(oldp+786,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE));
            tracep->chgBit(oldp+787,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ERASE_SERIAL));
            tracep->chgBit(oldp+788,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half));
            tracep->chgBit(oldp+789,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob));
            tracep->chgQData(oldp+790,((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst)) 
                                         << 0x2bU) 
                                        | (((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arsize)) 
                                            << 0x28U) 
                                           | (((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen)) 
                                               << 0x24U) 
                                              | (((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)) 
                                                  << 4U) 
                                                 | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arid))))))),45);
            tracep->chgIData(oldp+792,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr_incr),32);
            tracep->chgIData(oldp+793,(((((- (IData)(
                                                     (0U 
                                                      == (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst)))) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr) 
                                         | ((- (IData)(
                                                       (1U 
                                                        == (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst)))) 
                                            & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr_incr)) 
                                        | ((- (IData)(
                                                      (2U 
                                                       == (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst)))) 
                                           & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr_wrap))),32);
            tracep->chgIData(oldp+794,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr_wrap),32);
            tracep->chgCData(oldp+795,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst),2);
            tracep->chgBit(oldp+796,((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst))));
            tracep->chgBit(oldp+797,((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst))));
            tracep->chgBit(oldp+798,((2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst))));
            tracep->chgCData(oldp+799,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arid),4);
            tracep->chgCData(oldp+800,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen),4);
            tracep->chgBit(oldp+801,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen_last));
            tracep->chgCData(oldp+802,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arsize),3);
            tracep->chgBit(oldp+803,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid));
            tracep->chgQData(oldp+804,((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r)) 
                                         << 0xdU) | (QData)((IData)(
                                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_size_r) 
                                                                     << 8U))))),45);
            tracep->chgQData(oldp+806,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas),45);
            tracep->chgIData(oldp+808,((IData)((vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas 
                                                >> 0xdU))),32);
            tracep->chgCData(oldp+809,((3U & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas 
                                                      >> 0xbU)))),2);
            tracep->chgCData(oldp+810,((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas))),4);
            tracep->chgCData(oldp+811,((0xfU & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas 
                                                        >> 4U)))),4);
            tracep->chgCData(oldp+812,((7U & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas 
                                                      >> 8U)))),3);
            tracep->chgBit(oldp+813,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_valid));
            tracep->chgCData(oldp+814,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rcur),4);
            tracep->chgQData(oldp+815,((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)) 
                                         << 0xdU) | (QData)((IData)(
                                                                    (((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst) 
                                                                      << 0xbU) 
                                                                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awsize) 
                                                                         << 8U) 
                                                                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awlen) 
                                                                            << 4U) 
                                                                           | (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awid)))))))),45);
            tracep->chgIData(oldp+817,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_incr),32);
            tracep->chgIData(oldp+818,(((((- (IData)(
                                                     (0U 
                                                      == (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst)))) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr) 
                                         | ((- (IData)(
                                                       (1U 
                                                        == (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst)))) 
                                            & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_incr)) 
                                        | ((- (IData)(
                                                      (2U 
                                                       == (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst)))) 
                                           & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_wrap))),32);
            tracep->chgIData(oldp+819,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_wrap),32);
            tracep->chgCData(oldp+820,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst),2);
            tracep->chgBit(oldp+821,((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst))));
            tracep->chgBit(oldp+822,((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst))));
            tracep->chgBit(oldp+823,((2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst))));
            tracep->chgCData(oldp+824,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awid),4);
            tracep->chgCData(oldp+825,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awlen),4);
            tracep->chgCData(oldp+826,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awsize),3);
            tracep->chgBit(oldp+827,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid));
            tracep->chgQData(oldp+828,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas),45);
            tracep->chgIData(oldp+830,((IData)((vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas 
                                                >> 0xdU))),32);
            tracep->chgCData(oldp+831,((3U & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas 
                                                      >> 0xbU)))),2);
            tracep->chgCData(oldp+832,((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas))),4);
            tracep->chgCData(oldp+833,((0xfU & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas 
                                                        >> 4U)))),4);
            tracep->chgCData(oldp+834,((7U & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas 
                                                      >> 8U)))),3);
            tracep->chgBit(oldp+835,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_valid));
            tracep->chgBit(oldp+836,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_allow_out));
            tracep->chgBit(oldp+837,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid));
            tracep->chgCData(oldp+838,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_datas),4);
            tracep->chgBit(oldp+839,((1U & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid)))));
            tracep->chgCData(oldp+840,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wstrb),4);
            tracep->chgBit(oldp+841,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wlast));
            tracep->chgBit(oldp+842,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wvalid));
            tracep->chgQData(oldp+843,((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)) 
                                         << 0x2bU) 
                                        | (((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arsize)) 
                                            << 0x28U) 
                                           | (((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen)) 
                                               << 0x24U) 
                                              | (((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr)) 
                                                  << 4U) 
                                                 | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arid))))))),45);
            tracep->chgIData(oldp+845,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr),32);
            tracep->chgIData(oldp+846,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_incr),32);
            tracep->chgIData(oldp+847,(((((- (IData)(
                                                     (0U 
                                                      == (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)))) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr) 
                                         | ((- (IData)(
                                                       (1U 
                                                        == (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)))) 
                                            & vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_incr)) 
                                        | ((- (IData)(
                                                      (2U 
                                                       == (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)))) 
                                           & vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_wrap))),32);
            tracep->chgIData(oldp+848,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_wrap),32);
            tracep->chgCData(oldp+849,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst),2);
            tracep->chgBit(oldp+850,((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst))));
            tracep->chgBit(oldp+851,((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst))));
            tracep->chgBit(oldp+852,((2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst))));
            tracep->chgCData(oldp+853,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arid),4);
            tracep->chgCData(oldp+854,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen),4);
            tracep->chgBit(oldp+855,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen_last));
            tracep->chgCData(oldp+856,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arsize),3);
            tracep->chgBit(oldp+857,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid));
            tracep->chgQData(oldp+858,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas),45);
            tracep->chgIData(oldp+860,((IData)((vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                                                >> 0xdU))),32);
            tracep->chgCData(oldp+861,((3U & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                                                      >> 0xbU)))),2);
            tracep->chgCData(oldp+862,((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas))),4);
            tracep->chgCData(oldp+863,((0xfU & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                                                        >> 4U)))),4);
            tracep->chgCData(oldp+864,((7U & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                                                      >> 8U)))),3);
            tracep->chgBit(oldp+865,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid));
            tracep->chgCData(oldp+866,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur),4);
            tracep->chgQData(oldp+867,((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr)) 
                                         << 0xdU) | (QData)((IData)(
                                                                    (((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst) 
                                                                      << 0xbU) 
                                                                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awsize) 
                                                                         << 8U) 
                                                                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awlen) 
                                                                            << 4U) 
                                                                           | (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awid)))))))),45);
            tracep->chgIData(oldp+869,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr),32);
            tracep->chgIData(oldp+870,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_incr),32);
            tracep->chgIData(oldp+871,(((((- (IData)(
                                                     (0U 
                                                      == (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst)))) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr) 
                                         | ((- (IData)(
                                                       (1U 
                                                        == (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst)))) 
                                            & vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_incr)) 
                                        | ((- (IData)(
                                                      (2U 
                                                       == (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst)))) 
                                           & vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_wrap))),32);
            tracep->chgIData(oldp+872,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_wrap),32);
            tracep->chgCData(oldp+873,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst),2);
            tracep->chgBit(oldp+874,((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst))));
            tracep->chgBit(oldp+875,((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst))));
            tracep->chgBit(oldp+876,((2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst))));
            tracep->chgCData(oldp+877,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awid),4);
            tracep->chgCData(oldp+878,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awlen),4);
            tracep->chgCData(oldp+879,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awsize),3);
            tracep->chgBit(oldp+880,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid));
            tracep->chgQData(oldp+881,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas),45);
            tracep->chgIData(oldp+883,((IData)((vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                                >> 0xdU))),32);
            tracep->chgCData(oldp+884,((3U & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                                      >> 0xbU)))),2);
            tracep->chgCData(oldp+885,((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas))),4);
            tracep->chgCData(oldp+886,((0xfU & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                                        >> 4U)))),4);
            tracep->chgCData(oldp+887,((7U & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                                      >> 8U)))),3);
            tracep->chgBit(oldp+888,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_valid));
            tracep->chgBit(oldp+889,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_allow_out));
            tracep->chgBit(oldp+890,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid));
            tracep->chgCData(oldp+891,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_datas),4);
            tracep->chgBit(oldp+892,((1U & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid)))));
            tracep->chgCData(oldp+893,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wstrb),4);
            tracep->chgIData(oldp+894,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wdata),32);
            tracep->chgBit(oldp+895,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wlast));
            tracep->chgBit(oldp+896,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wvalid));
            tracep->chgIData(oldp+897,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__cr0),32);
            tracep->chgIData(oldp+898,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__cr1),32);
            tracep->chgIData(oldp+899,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__cr2),32);
            tracep->chgIData(oldp+900,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__cr3),32);
            tracep->chgIData(oldp+901,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__cr4),32);
            tracep->chgIData(oldp+902,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__cr5),32);
            tracep->chgIData(oldp+903,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__cr6),32);
            tracep->chgIData(oldp+904,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__cr7),32);
            tracep->chgIData(oldp+905,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__led_data),32);
            tracep->chgIData(oldp+906,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__led_rg0_data),32);
            tracep->chgIData(oldp+907,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__led_rg1_data),32);
            tracep->chgIData(oldp+908,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__num_data),32);
            tracep->chgIData(oldp+909,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__btn_key_r),32);
            tracep->chgIData(oldp+910,(((2U & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r)) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r))))),32);
            tracep->chgCData(oldp+911,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__confreg_uart_data),8);
            tracep->chgBit(oldp+912,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__confreg_uart_valid));
            tracep->chgIData(oldp+913,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__timer_r2),32);
            tracep->chgIData(oldp+914,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__simu_flag),32);
            tracep->chgIData(oldp+915,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__io_simu),32);
            tracep->chgCData(oldp+916,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__virtual_uart_data),8);
            tracep->chgBit(oldp+917,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__open_trace));
            tracep->chgBit(oldp+918,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__num_monitor));
            tracep->chgBit(oldp+919,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin));
            tracep->chgBit(oldp+920,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r1));
            tracep->chgBit(oldp+921,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r2));
            tracep->chgBit(oldp+922,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r3));
            tracep->chgBit(oldp+923,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r1));
            tracep->chgBit(oldp+924,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r2));
            tracep->chgIData(oldp+925,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r),32);
            tracep->chgIData(oldp+926,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r1),32);
            tracep->chgIData(oldp+927,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r2),32);
            tracep->chgIData(oldp+928,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__timer_r1),32);
            tracep->chgIData(oldp+929,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__timer),32);
            tracep->chgCData(oldp+930,((0xffU & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata)),8);
            tracep->chgSData(oldp+931,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__btn_key_r),16);
            tracep->chgCData(oldp+932,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state),3);
            tracep->chgBit(oldp+933,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__key_flag));
            tracep->chgIData(oldp+934,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__key_count),20);
            tracep->chgCData(oldp+935,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state_count),4);
            tracep->chgBit(oldp+936,((1U & (vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__key_count 
                                            >> 0x13U))));
            tracep->chgBit(oldp+937,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r));
            tracep->chgBit(oldp+938,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r));
            tracep->chgBit(oldp+939,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__step0_flag));
            tracep->chgIData(oldp+940,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__step0_count),20);
            tracep->chgBit(oldp+941,((1U & (vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__step0_count 
                                            >> 0x13U))));
            tracep->chgBit(oldp+942,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__step1_flag));
            tracep->chgIData(oldp+943,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__step1_count),20);
            tracep->chgBit(oldp+944,((1U & (vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__step1_count 
                                            >> 0x13U))));
            tracep->chgIData(oldp+945,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__count),20);
            tracep->chgCData(oldp+946,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__scan_data),4);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [2U] | vlTOPp->__Vm_traceActivity
                         [3U]))) {
            tracep->chgBit(oldp+947,((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req) 
                                       & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req_or))) 
                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__data_back))));
            tracep->chgBit(oldp+948,((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req) 
                                       & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req_or)) 
                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__data_back))));
            tracep->chgIData(oldp+949,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp_valid)
                                         ? ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp_valid)
                                             ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp
                                             : 0U) : vlTOPp->simu_top__DOT__soc__DOT__m0_rdata)),32);
            tracep->chgBit(oldp+950,((1U & ((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req)) 
                                              & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__req_mem)) 
                                             & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                                 >> 0x14U) 
                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                                   >> 0x15U))) 
                                            | (~ ((
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                                   >> 0x14U) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                                     >> 0x15U)))))));
            tracep->chgIData(oldp+951,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid)
                                         ? ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid)
                                             ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp
                                             : 0U) : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData)),32);
            tracep->chgIData(oldp+952,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp_valid)
                                         ? ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp_valid)
                                             ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp
                                             : 0U) : vlTOPp->simu_top__DOT__soc__DOT__m0_rdata)),32);
            tracep->chgIData(oldp+953,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid)
                                         ? ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid)
                                             ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp
                                             : 0U) : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData)),32);
            tracep->chgBit(oldp+954,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_arvalid) 
                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_arready))));
            tracep->chgBit(oldp+955,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_awvalid) 
                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_awready))));
            tracep->chgBit(oldp+956,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_wvalid) 
                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_wready))));
            tracep->chgIData(oldp+957,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[0]),32);
            tracep->chgIData(oldp+958,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[1]),32);
            tracep->chgIData(oldp+959,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[2]),32);
            tracep->chgIData(oldp+960,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[3]),32);
            tracep->chgIData(oldp+961,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[4]),32);
            tracep->chgBit(oldp+962,((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty)) 
                                       & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_wvalid)) 
                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_wready))));
            tracep->chgBit(oldp+963,(((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_empty)) 
                                        & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_rvalid)) 
                                       & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_rready)) 
                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_rlast))));
            tracep->chgBit(oldp+964,(((((8U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm)) 
                                        & (IData)(vlTOPp->simu_top__DOT__soc__DOT__apb_s_rlast)) 
                                       & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                          >> 2U)) | 
                                      ((IData)(vlTOPp->simu_top__DOT__soc__DOT__apb_s_bvalid) 
                                       & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                          >> 2U)))));
            tracep->chgCData(oldp+965,(((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm))
                                         ? ((1U & (
                                                   (((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                                     | (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid)) 
                                                    >> 2U) 
                                                   & ((~ 
                                                       ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr) 
                                                        | (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd))) 
                                                      & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)))))
                                             ? 2U : 1U)
                                         : ((2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm))
                                             ? ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr)
                                                 ? 8U
                                                 : 
                                                ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd)
                                                  ? 8U
                                                  : 2U))
                                             : ((8U 
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
            tracep->chgBit(oldp+966,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en) 
                                      & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen_last)))));
            tracep->chgBit(oldp+967,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop) 
                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid))));
            tracep->chgBit(oldp+968,((1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                             >> 3U) 
                                            | (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rvalid))))));
            tracep->chgBit(oldp+969,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en) 
                                      & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wlast)))));
            tracep->chgBit(oldp+970,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) 
                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid))));
            tracep->chgBit(oldp+971,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) 
                                      & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop) 
                                         | (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid))))));
            tracep->chgBit(oldp+972,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop) 
                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid))));
            tracep->chgBit(oldp+973,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_en) 
                                      & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen_last)))));
            tracep->chgBit(oldp+974,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop) 
                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid))));
            tracep->chgBit(oldp+975,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                            | (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rvalid))))));
            tracep->chgBit(oldp+976,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en) 
                                      & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wlast)))));
            tracep->chgBit(oldp+977,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) 
                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid))));
            tracep->chgBit(oldp+978,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) 
                                      & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop) 
                                         | (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid))))));
            tracep->chgBit(oldp+979,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop) 
                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid))));
            tracep->chgBit(oldp+980,(((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                      & (0x8000U == 
                                         (0xffffU & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
            tracep->chgBit(oldp+981,(((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                      & (0x8010U == 
                                         (0xffffU & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
            tracep->chgBit(oldp+982,(((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                      & (0x8020U == 
                                         (0xffffU & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
            tracep->chgBit(oldp+983,(((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                      & (0x8030U == 
                                         (0xffffU & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
            tracep->chgBit(oldp+984,(((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                      & (0x8040U == 
                                         (0xffffU & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
            tracep->chgBit(oldp+985,(((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                      & (0x8050U == 
                                         (0xffffU & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
            tracep->chgBit(oldp+986,(((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                      & (0x8060U == 
                                         (0xffffU & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
            tracep->chgBit(oldp+987,(((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                      & (0x8070U == 
                                         (0xffffU & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
            tracep->chgBit(oldp+988,(((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                      & (0xff00U == 
                                         (0xffffU & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
            tracep->chgBit(oldp+989,(((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                      & (0xff30U == 
                                         (0xffffU & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
            tracep->chgBit(oldp+990,(((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                      & (0xff40U == 
                                         (0xffffU & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
            tracep->chgBit(oldp+991,(((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                      & (0xf020U == 
                                         (0xffffU & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
            tracep->chgBit(oldp+992,(((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                      & (0xf030U == 
                                         (0xffffU & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
            tracep->chgBit(oldp+993,(((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                      & (0xf040U == 
                                         (0xffffU & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
            tracep->chgBit(oldp+994,(((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                      & (0xf050U == 
                                         (0xffffU & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[3U])) {
            tracep->chgIData(oldp+995,(vlTOPp->simu_top__DOT__soc__DOT__m0_rdata),32);
            tracep->chgBit(oldp+996,(vlTOPp->simu_top__DOT__soc__DOT__m0_awvalid));
            tracep->chgBit(oldp+997,(vlTOPp->simu_top__DOT__soc__DOT__m0_wvalid));
            tracep->chgBit(oldp+998,(vlTOPp->simu_top__DOT__soc__DOT__m0_bready));
            tracep->chgBit(oldp+999,(vlTOPp->simu_top__DOT__soc__DOT__m0_arvalid));
            tracep->chgBit(oldp+1000,(vlTOPp->simu_top__DOT__soc__DOT__m0_rready));
            tracep->chgBit(oldp+1001,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid))));
            tracep->chgBit(oldp+1002,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid))));
            tracep->chgBit(oldp+1003,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready))));
            tracep->chgBit(oldp+1004,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid))));
            tracep->chgBit(oldp+1005,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready))));
            tracep->chgBit(oldp+1006,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                             >> 3U))));
            tracep->chgBit(oldp+1007,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
                                             >> 3U))));
            tracep->chgBit(oldp+1008,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                             >> 3U))));
            tracep->chgBit(oldp+1009,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                             >> 3U))));
            tracep->chgBit(oldp+1010,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                             >> 3U))));
            tracep->chgBit(oldp+1011,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                             >> 2U))));
            tracep->chgBit(oldp+1012,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
                                             >> 2U))));
            tracep->chgBit(oldp+1013,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                             >> 2U))));
            tracep->chgBit(oldp+1014,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                             >> 2U))));
            tracep->chgBit(oldp+1015,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                             >> 2U))));
            tracep->chgBit(oldp+1016,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en));
            tracep->chgCData(oldp+1017,(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen),4);
            tracep->chgBit(oldp+1018,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__req_inst));
            tracep->chgBit(oldp+1019,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_ok_inst));
            tracep->chgBit(oldp+1020,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__req_mem));
            tracep->chgBit(oldp+1021,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_allow_in));
            tracep->chgBit(oldp+1022,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_ready_go));
            tracep->chgBit(oldp+1023,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_allow_in));
            tracep->chgBit(oldp+1024,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_ready_go));
            tracep->chgBit(oldp+1025,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_valid_in));
            tracep->chgBit(oldp+1026,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_allow_in));
            tracep->chgBit(oldp+1027,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_allow_in));
            tracep->chgBit(oldp+1028,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_valid_in));
            tracep->chgBit(oldp+1029,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_ready_go));
            tracep->chgBit(oldp+1030,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_valid_in));
            tracep->chgBit(oldp+1031,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__divNeed) 
                                             >> 1U))));
            tracep->chgBit(oldp+1032,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__divNeed))));
            tracep->chgIData(oldp+1033,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData),32);
            tracep->chgBit(oldp+1034,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT____Vcellinp__myDiv__clk));
            tracep->chgBit(oldp+1035,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__divNeed))));
            tracep->chgBit(oldp+1036,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__data_back));
            tracep->chgBit(oldp+1037,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                             >> 1U))));
            tracep->chgBit(oldp+1038,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
                                             >> 1U))));
            tracep->chgBit(oldp+1039,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                             >> 1U))));
            tracep->chgBit(oldp+1040,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                             >> 1U))));
            tracep->chgBit(oldp+1041,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                             >> 1U))));
            tracep->chgBit(oldp+1042,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                             >> 4U))));
            tracep->chgBit(oldp+1043,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
                                             >> 4U))));
            tracep->chgBit(oldp+1044,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                             >> 4U))));
            tracep->chgBit(oldp+1045,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                             >> 4U))));
            tracep->chgBit(oldp+1046,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                             >> 4U))));
            tracep->chgCData(oldp+1047,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid),5);
            tracep->chgCData(oldp+1048,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid),5);
            tracep->chgCData(oldp+1049,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready),5);
            tracep->chgCData(oldp+1050,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid),5);
            tracep->chgCData(oldp+1051,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready),5);
            tracep->chgBit(oldp+1052,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_dir_ins));
            tracep->chgBit(oldp+1053,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_dir_ins));
            tracep->chgBit(oldp+1054,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_cpu));
            tracep->chgBit(oldp+1055,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NANDtag));
            tracep->chgBit(oldp+1056,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_push));
            tracep->chgBit(oldp+1057,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop));
            tracep->chgBit(oldp+1058,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push));
            tracep->chgBit(oldp+1059,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_push));
            tracep->chgBit(oldp+1060,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_push));
            tracep->chgBit(oldp+1061,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop));
            tracep->chgBit(oldp+1062,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_push));
            tracep->chgBit(oldp+1063,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_push));
            tracep->chgBit(oldp+1064,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop));
            tracep->chgBit(oldp+1065,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_push));
            tracep->chgBit(oldp+1066,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en));
            tracep->chgBit(oldp+1067,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_go));
            tracep->chgBit(oldp+1068,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_push));
            tracep->chgBit(oldp+1069,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop));
            tracep->chgBit(oldp+1070,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_push));
            tracep->chgBit(oldp+1071,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_push));
            tracep->chgBit(oldp+1072,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_en));
            tracep->chgBit(oldp+1073,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_push));
            tracep->chgBit(oldp+1074,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop));
            tracep->chgBit(oldp+1075,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_push));
            tracep->chgBit(oldp+1076,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_push));
            tracep->chgBit(oldp+1077,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop));
            tracep->chgBit(oldp+1078,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_push));
            tracep->chgBit(oldp+1079,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en));
            tracep->chgBit(oldp+1080,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_go));
            tracep->chgBit(oldp+1081,((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen))));
            tracep->chgBit(oldp+1082,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__write_timer));
            tracep->chgBit(oldp+1083,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__write_uart_valid));
            tracep->chgCData(oldp+1084,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__next_state),3);
            tracep->chgSData(oldp+1085,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__btn_key_tmp),16);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[4U])) {
            tracep->chgIData(oldp+1086,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluout_ex),32);
            tracep->chgIData(oldp+1087,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluout_ex),32);
            tracep->chgQData(oldp+1088,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__unnamedblk1__DOT__mul_result),64);
            tracep->chgQData(oldp+1090,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__unnamedblk2__DOT__mul_result),64);
            tracep->chgQData(oldp+1092,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__minuend_next),33);
            tracep->chgQData(oldp+1094,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__difference),33);
            tracep->chgBit(oldp+1096,((1U & (~ (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__difference 
                                                        >> 0x20U))))));
        }
        tracep->chgBit(oldp+1097,(vlTOPp->DifftestInstrCommit__02Eclock));
        tracep->chgCData(oldp+1098,(vlTOPp->DifftestInstrCommit__02Ecoreid),8);
        tracep->chgCData(oldp+1099,(vlTOPp->DifftestInstrCommit__02Eindex),8);
        tracep->chgBit(oldp+1100,(vlTOPp->DifftestInstrCommit__02Evalid));
        tracep->chgQData(oldp+1101,(vlTOPp->DifftestInstrCommit__02Epc),64);
        tracep->chgIData(oldp+1103,(vlTOPp->instr),32);
        tracep->chgBit(oldp+1104,(vlTOPp->skip));
        tracep->chgBit(oldp+1105,(vlTOPp->is_TLBFILL));
        tracep->chgCData(oldp+1106,(vlTOPp->TLBFILL_index),5);
        tracep->chgBit(oldp+1107,(vlTOPp->is_CNTinst));
        tracep->chgQData(oldp+1108,(vlTOPp->timer_64_value),64);
        tracep->chgBit(oldp+1110,(vlTOPp->wen));
        tracep->chgCData(oldp+1111,(vlTOPp->wdest),8);
        tracep->chgQData(oldp+1112,(vlTOPp->wdata),64);
        tracep->chgBit(oldp+1114,(vlTOPp->csr_rstat));
        tracep->chgIData(oldp+1115,(vlTOPp->csr_data),32);
        tracep->chgBit(oldp+1116,(vlTOPp->DifftestExcpEvent__02Eclock));
        tracep->chgCData(oldp+1117,(vlTOPp->DifftestExcpEvent__02Ecoreid),8);
        tracep->chgBit(oldp+1118,(vlTOPp->excp_valid));
        tracep->chgBit(oldp+1119,(vlTOPp->eret));
        tracep->chgIData(oldp+1120,(vlTOPp->intrNo),32);
        tracep->chgIData(oldp+1121,(vlTOPp->cause),32);
        tracep->chgQData(oldp+1122,(vlTOPp->exceptionPC),64);
        tracep->chgIData(oldp+1124,(vlTOPp->exceptionInst),32);
        tracep->chgBit(oldp+1125,(vlTOPp->DifftestTrapEvent__02Eclock));
        tracep->chgCData(oldp+1126,(vlTOPp->DifftestTrapEvent__02Ecoreid),8);
        tracep->chgBit(oldp+1127,(vlTOPp->DifftestTrapEvent__02Evalid));
        tracep->chgCData(oldp+1128,(vlTOPp->code),3);
        tracep->chgQData(oldp+1129,(vlTOPp->DifftestTrapEvent__02Epc),64);
        tracep->chgQData(oldp+1131,(vlTOPp->cycleCnt),64);
        tracep->chgQData(oldp+1133,(vlTOPp->instrCnt),64);
        tracep->chgBit(oldp+1135,(vlTOPp->DifftestStoreEvent__02Eclock));
        tracep->chgCData(oldp+1136,(vlTOPp->DifftestStoreEvent__02Ecoreid),8);
        tracep->chgCData(oldp+1137,(vlTOPp->DifftestStoreEvent__02Eindex),8);
        tracep->chgCData(oldp+1138,(vlTOPp->DifftestStoreEvent__02Evalid),8);
        tracep->chgQData(oldp+1139,(vlTOPp->storePAddr),64);
        tracep->chgQData(oldp+1141,(vlTOPp->storeVAddr),64);
        tracep->chgQData(oldp+1143,(vlTOPp->storeData),64);
        tracep->chgBit(oldp+1145,(vlTOPp->DifftestLoadEvent__02Eclock));
        tracep->chgCData(oldp+1146,(vlTOPp->DifftestLoadEvent__02Ecoreid),8);
        tracep->chgCData(oldp+1147,(vlTOPp->DifftestLoadEvent__02Eindex),8);
        tracep->chgCData(oldp+1148,(vlTOPp->DifftestLoadEvent__02Evalid),8);
        tracep->chgQData(oldp+1149,(vlTOPp->paddr),64);
        tracep->chgQData(oldp+1151,(vlTOPp->vaddr),64);
        tracep->chgBit(oldp+1153,(vlTOPp->DifftestCSRRegState__02Eclock));
        tracep->chgCData(oldp+1154,(vlTOPp->DifftestCSRRegState__02Ecoreid),8);
        tracep->chgQData(oldp+1155,(vlTOPp->crmd),64);
        tracep->chgQData(oldp+1157,(vlTOPp->prmd),64);
        tracep->chgQData(oldp+1159,(vlTOPp->euen),64);
        tracep->chgQData(oldp+1161,(vlTOPp->ecfg),64);
        tracep->chgQData(oldp+1163,(vlTOPp->estat),64);
        tracep->chgQData(oldp+1165,(vlTOPp->era),64);
        tracep->chgQData(oldp+1167,(vlTOPp->badv),64);
        tracep->chgQData(oldp+1169,(vlTOPp->eentry),64);
        tracep->chgQData(oldp+1171,(vlTOPp->tlbidx),64);
        tracep->chgQData(oldp+1173,(vlTOPp->tlbehi),64);
        tracep->chgQData(oldp+1175,(vlTOPp->tlbelo0),64);
        tracep->chgQData(oldp+1177,(vlTOPp->tlbelo1),64);
        tracep->chgQData(oldp+1179,(vlTOPp->asid),64);
        tracep->chgQData(oldp+1181,(vlTOPp->pgdl),64);
        tracep->chgQData(oldp+1183,(vlTOPp->pgdh),64);
        tracep->chgQData(oldp+1185,(vlTOPp->save0),64);
        tracep->chgQData(oldp+1187,(vlTOPp->save1),64);
        tracep->chgQData(oldp+1189,(vlTOPp->save2),64);
        tracep->chgQData(oldp+1191,(vlTOPp->save3),64);
        tracep->chgQData(oldp+1193,(vlTOPp->tid),64);
        tracep->chgQData(oldp+1195,(vlTOPp->tcfg),64);
        tracep->chgQData(oldp+1197,(vlTOPp->tval),64);
        tracep->chgQData(oldp+1199,(vlTOPp->ticlr),64);
        tracep->chgQData(oldp+1201,(vlTOPp->llbctl),64);
        tracep->chgQData(oldp+1203,(vlTOPp->tlbrentry),64);
        tracep->chgQData(oldp+1205,(vlTOPp->dmw0),64);
        tracep->chgQData(oldp+1207,(vlTOPp->dmw1),64);
        tracep->chgBit(oldp+1209,(vlTOPp->DifftestGRegState__02Eclock));
        tracep->chgCData(oldp+1210,(vlTOPp->DifftestGRegState__02Ecoreid),8);
        tracep->chgQData(oldp+1211,(vlTOPp->gpr_0),64);
        tracep->chgQData(oldp+1213,(vlTOPp->gpr_1),64);
        tracep->chgQData(oldp+1215,(vlTOPp->gpr_2),64);
        tracep->chgQData(oldp+1217,(vlTOPp->gpr_3),64);
        tracep->chgQData(oldp+1219,(vlTOPp->gpr_4),64);
        tracep->chgQData(oldp+1221,(vlTOPp->gpr_5),64);
        tracep->chgQData(oldp+1223,(vlTOPp->gpr_6),64);
        tracep->chgQData(oldp+1225,(vlTOPp->gpr_7),64);
        tracep->chgQData(oldp+1227,(vlTOPp->gpr_8),64);
        tracep->chgQData(oldp+1229,(vlTOPp->gpr_9),64);
        tracep->chgQData(oldp+1231,(vlTOPp->gpr_10),64);
        tracep->chgQData(oldp+1233,(vlTOPp->gpr_11),64);
        tracep->chgQData(oldp+1235,(vlTOPp->gpr_12),64);
        tracep->chgQData(oldp+1237,(vlTOPp->gpr_13),64);
        tracep->chgQData(oldp+1239,(vlTOPp->gpr_14),64);
        tracep->chgQData(oldp+1241,(vlTOPp->gpr_15),64);
        tracep->chgQData(oldp+1243,(vlTOPp->gpr_16),64);
        tracep->chgQData(oldp+1245,(vlTOPp->gpr_17),64);
        tracep->chgQData(oldp+1247,(vlTOPp->gpr_18),64);
        tracep->chgQData(oldp+1249,(vlTOPp->gpr_19),64);
        tracep->chgQData(oldp+1251,(vlTOPp->gpr_20),64);
        tracep->chgQData(oldp+1253,(vlTOPp->gpr_21),64);
        tracep->chgQData(oldp+1255,(vlTOPp->gpr_22),64);
        tracep->chgQData(oldp+1257,(vlTOPp->gpr_23),64);
        tracep->chgQData(oldp+1259,(vlTOPp->gpr_24),64);
        tracep->chgQData(oldp+1261,(vlTOPp->gpr_25),64);
        tracep->chgQData(oldp+1263,(vlTOPp->gpr_26),64);
        tracep->chgQData(oldp+1265,(vlTOPp->gpr_27),64);
        tracep->chgQData(oldp+1267,(vlTOPp->gpr_28),64);
        tracep->chgQData(oldp+1269,(vlTOPp->gpr_29),64);
        tracep->chgQData(oldp+1271,(vlTOPp->gpr_30),64);
        tracep->chgQData(oldp+1273,(vlTOPp->gpr_31),64);
        tracep->chgBit(oldp+1275,(vlTOPp->aclk));
        tracep->chgBit(oldp+1276,(vlTOPp->aresetn));
        tracep->chgBit(oldp+1277,(vlTOPp->enable_delay));
        tracep->chgIData(oldp+1278,(vlTOPp->random_seed),23);
        tracep->chgBit(oldp+1279,(vlTOPp->ram_ren));
        tracep->chgIData(oldp+1280,(vlTOPp->ram_raddr),32);
        tracep->chgIData(oldp+1281,(vlTOPp->ram_rdata),32);
        tracep->chgCData(oldp+1282,(vlTOPp->ram_wen),4);
        tracep->chgIData(oldp+1283,(vlTOPp->ram_waddr),32);
        tracep->chgIData(oldp+1284,(vlTOPp->ram_wdata),32);
        tracep->chgIData(oldp+1285,(vlTOPp->debug0_wb_pc),32);
        tracep->chgBit(oldp+1286,(vlTOPp->debug0_wb_rf_wen));
        tracep->chgCData(oldp+1287,(vlTOPp->debug0_wb_rf_wnum),5);
        tracep->chgIData(oldp+1288,(vlTOPp->debug0_wb_rf_wdata),32);
        tracep->chgIData(oldp+1289,(vlTOPp->num_data),32);
        tracep->chgBit(oldp+1290,(vlTOPp->open_trace));
        tracep->chgBit(oldp+1291,(vlTOPp->num_monitor));
        tracep->chgCData(oldp+1292,(vlTOPp->confreg_uart_data),8);
        tracep->chgBit(oldp+1293,(vlTOPp->write_uart_valid));
        tracep->chgWData(oldp+1294,(vlTOPp->uart_ctr_bus),128);
        tracep->chgBit(oldp+1298,(vlTOPp->uart_rx));
        tracep->chgBit(oldp+1299,(vlTOPp->uart_tx));
        tracep->chgSData(oldp+1300,(vlTOPp->led),16);
        tracep->chgCData(oldp+1301,(vlTOPp->led_rg0),2);
        tracep->chgCData(oldp+1302,(vlTOPp->led_rg1),2);
        tracep->chgCData(oldp+1303,(vlTOPp->num_csn),8);
        tracep->chgCData(oldp+1304,(vlTOPp->num_a_g),7);
        tracep->chgCData(oldp+1305,(vlTOPp->btn_key_col),4);
        tracep->chgCData(oldp+1306,(vlTOPp->btn_key_row),4);
        tracep->chgCData(oldp+1307,(vlTOPp->btn_step),2);
        tracep->chgCData(oldp+1308,(vlTOPp->__SYM__switch),8);
        tracep->chgBit(oldp+1309,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_awready) 
                                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_aw) 
                                      | (~ (IData)(vlTOPp->enable_delay))))));
        tracep->chgBit(oldp+1310,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_wready) 
                                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_w) 
                                      | (~ (IData)(vlTOPp->enable_delay))))));
        tracep->chgBit(oldp+1311,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_bvalid) 
                                   & ((vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                       >> 2U) | (~ (IData)(vlTOPp->enable_delay))))));
        tracep->chgBit(oldp+1312,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_arready) 
                                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_ar) 
                                      | (~ (IData)(vlTOPp->enable_delay))))));
        tracep->chgBit(oldp+1313,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_rvalid) 
                                   & ((vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                       >> 3U) | (~ (IData)(vlTOPp->enable_delay))))));
        tracep->chgBit(oldp+1314,((1U & (~ (IData)(vlTOPp->aresetn)))));
        tracep->chgIData(oldp+1315,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divSigned)
                                      ? ((0x80000000U 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                                             ^ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex))
                                          ? (- vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_u)
                                          : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_u)
                                      : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_u)),32);
        tracep->chgIData(oldp+1316,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divSigned)
                                      ? ((0x80000000U 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)
                                          ? (- vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__remainder_u)
                                          : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__remainder_u)
                                      : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__remainder_u)),32);
        tracep->chgIData(oldp+1317,(((0x80000000U & 
                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                                       ^ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex))
                                      ? (- vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_u)
                                      : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_u)),32);
        tracep->chgIData(oldp+1318,(((0x80000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)
                                      ? (- vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__remainder_u)
                                      : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__remainder_u)),32);
        tracep->chgBit(oldp+1319,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode)
                                          ? ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__rx_en)) 
                                             | (IData)(vlTOPp->uart_tx))
                                          : (IData)(vlTOPp->uart_rx)))));
        tracep->chgBit(oldp+1320,((1U & ((~ (IData)(vlTOPp->aresetn)) 
                                         | (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop)))));
        tracep->chgBit(oldp+1321,((1U & ((~ (IData)(vlTOPp->aresetn)) 
                                         | (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop)))));
        tracep->chgIData(oldp+1322,(vlTOPp->__SYM__switch),32);
        tracep->chgIData(oldp+1323,(((0x8000U & ((IData)(vlTOPp->__SYM__switch) 
                                                 << 8U)) 
                                     | ((0x2000U & 
                                         ((IData)(vlTOPp->__SYM__switch) 
                                          << 7U)) | 
                                        ((0x800U & 
                                          ((IData)(vlTOPp->__SYM__switch) 
                                           << 6U)) 
                                         | ((0x200U 
                                             & ((IData)(vlTOPp->__SYM__switch) 
                                                << 5U)) 
                                            | ((0x80U 
                                                & ((IData)(vlTOPp->__SYM__switch) 
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
        tracep->chgBit(oldp+1324,(((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                   & (~ (IData)((0xfU 
                                                 == (IData)(vlTOPp->btn_key_row)))))));
        tracep->chgBit(oldp+1325,(((7U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                   & (0xfU == (IData)(vlTOPp->btn_key_row)))));
        tracep->chgBit(oldp+1326,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r) 
                                   & (~ (IData)(vlTOPp->btn_step)))));
        tracep->chgBit(oldp+1327,((1U & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r)) 
                                         & (IData)(vlTOPp->btn_step)))));
        tracep->chgBit(oldp+1328,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r) 
                                   & (~ ((IData)(vlTOPp->btn_step) 
                                         >> 1U)))));
        tracep->chgBit(oldp+1329,((1U & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r)) 
                                         & ((IData)(vlTOPp->btn_step) 
                                            >> 1U)))));
    }
}

void Vsimu_top::traceCleanup(void* userp, VerilatedFst* /*unused*/) {
    Vsimu_top__Syms* __restrict vlSymsp = static_cast<Vsimu_top__Syms*>(userp);
    Vsimu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
        vlTOPp->__Vm_traceActivity[3U] = 0U;
        vlTOPp->__Vm_traceActivity[4U] = 0U;
    }
}

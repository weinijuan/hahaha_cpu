// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vsimu_top__Syms.h"


VL_ATTR_COLD void Vsimu_top___024root__trace_init_sub__TOP__0(Vsimu_top___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1315,"aclk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1316,"aresetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1317,"enable_delay",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1318,"random_seed",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 22,0);
    tracep->declBit(c+1319,"ram_ren",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1320,"ram_raddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1321,"ram_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1322,"ram_wen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1323,"ram_waddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1324,"ram_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1325,"debug0_wb_pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1326,"debug0_wb_rf_wen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1327,"debug0_wb_rf_wnum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+1328,"debug0_wb_rf_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1329,"num_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1330,"open_trace",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1331,"num_monitor",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1332,"confreg_uart_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+1333,"write_uart_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+1334,"uart_ctr_bus",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 127,0);
    tracep->declBit(c+1338,"uart_rx",-1,FST_VD_INOUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1339,"uart_tx",-1,FST_VD_INOUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1340,"led",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+1341,"led_rg0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1342,"led_rg1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1343,"num_csn",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1344,"num_a_g",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+1345,"btn_key_col",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1346,"btn_key_row",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1347,"btn_step",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->pushNamePrefix("simu_top ");
    tracep->declBus(c+1367,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1367,"BUS_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1367,"CPU_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+1315,"aclk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1316,"aresetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1317,"enable_delay",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1318,"random_seed",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 22,0);
    tracep->declBit(c+1319,"ram_ren",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1320,"ram_raddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1321,"ram_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1322,"ram_wen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1323,"ram_waddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1324,"ram_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1325,"debug0_wb_pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1326,"debug0_wb_rf_wen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1327,"debug0_wb_rf_wnum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+1328,"debug0_wb_rf_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1329,"num_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1330,"open_trace",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1331,"num_monitor",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1332,"confreg_uart_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+1333,"write_uart_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+1334,"uart_ctr_bus",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 127,0);
    tracep->declBit(c+1338,"uart_rx",-1,FST_VD_INOUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1339,"uart_tx",-1,FST_VD_INOUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1340,"led",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+1341,"led_rg0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1342,"led_rg1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1343,"num_csn",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1344,"num_a_g",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+1348,"switch",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1345,"btn_key_col",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1346,"btn_key_row",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1347,"btn_step",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->pushNamePrefix("soc ");
    tracep->declBus(c+1367,"BUS_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1367,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1367,"CPU_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+1316,"aresetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1315,"aclk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1317,"enable_delay",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1318,"random_seed",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 22,0);
    tracep->declBus(c+1325,"debug0_wb_pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1328,"debug0_wb_rf_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1326,"debug0_wb_rf_wen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1327,"debug0_wb_rf_wnum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+1340,"led",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+1341,"led_rg0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1342,"led_rg1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1343,"num_csn",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1344,"num_a_g",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+1348,"switch",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1345,"btn_key_col",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1346,"btn_key_row",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1347,"btn_step",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1320,"sram_raddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1321,"sram_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1319,"sram_ren",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1323,"sram_waddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1324,"sram_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1322,"sram_wen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1338,"UART_RX",-1,FST_VD_INOUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1339,"UART_TX",-1,FST_VD_INOUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1368,"cpu_awid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+149,"cpu_awaddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1368,"cpu_awlen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+150,"cpu_awsize",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1369,"cpu_awburst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1369,"cpu_awlock",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1368,"cpu_awcache",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1370,"cpu_awprot",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+151,"cpu_awvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+11,"cpu_awready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1368,"cpu_wid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+152,"cpu_wdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+153,"cpu_wstrb",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1371,"cpu_wlast",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+154,"cpu_wvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+12,"cpu_wready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+155,"cpu_bid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+156,"cpu_bresp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+13,"cpu_bvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1371,"cpu_bready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1368,"cpu_arid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+149,"cpu_araddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1368,"cpu_arlen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+150,"cpu_arsize",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1369,"cpu_arburst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1369,"cpu_arlock",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1368,"cpu_arcache",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1370,"cpu_arprot",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+157,"cpu_arvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+14,"cpu_arready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+158,"cpu_rid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+15,"cpu_rdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+159,"cpu_rresp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+160,"cpu_rlast",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+16,"cpu_rvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1371,"cpu_rready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1368,"m0_awid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+149,"m0_awaddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1368,"m0_awlen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+150,"m0_awsize",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1369,"m0_awburst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1369,"m0_awlock",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1368,"m0_awcache",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1370,"m0_awprot",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+17,"m0_awvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+161,"m0_awready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1368,"m0_wid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+152,"m0_wdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+153,"m0_wstrb",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1371,"m0_wlast",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+18,"m0_wvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+162,"m0_wready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+155,"m0_bid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+156,"m0_bresp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+163,"m0_bvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+19,"m0_bready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1368,"m0_arid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+149,"m0_araddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1368,"m0_arlen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+150,"m0_arsize",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1369,"m0_arburst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1369,"m0_arlock",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1368,"m0_arcache",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1370,"m0_arprot",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+20,"m0_arvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+164,"m0_arready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+158,"m0_rid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+15,"m0_rdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+159,"m0_rresp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+160,"m0_rlast",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+165,"m0_rvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+21,"m0_rready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1368,"s0_awid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+149,"s0_awaddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1368,"s0_awlen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+150,"s0_awsize",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1369,"s0_awburst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1369,"s0_awlock",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1368,"s0_awcache",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1370,"s0_awprot",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+22,"s0_awvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+166,"s0_awready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1368,"s0_wid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+152,"s0_wdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+153,"s0_wstrb",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1371,"s0_wlast",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+23,"s0_wvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+167,"s0_wready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+168,"s0_bid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1369,"s0_bresp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+169,"s0_bvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+24,"s0_bready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1368,"s0_arid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+149,"s0_araddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1368,"s0_arlen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+150,"s0_arsize",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1369,"s0_arburst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1369,"s0_arlock",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1368,"s0_arcache",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1370,"s0_arprot",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+25,"s0_arvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+170,"s0_arready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+171,"s0_rid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1321,"s0_rdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1369,"s0_rresp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+172,"s0_rlast",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+173,"s0_rvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+26,"s0_rready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1368,"conf_s_awid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+149,"conf_s_awaddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1368,"conf_s_awlen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+150,"conf_s_awsize",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1369,"conf_s_awburst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1369,"conf_s_awlock",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1368,"conf_s_awcache",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1370,"conf_s_awprot",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+27,"conf_s_awvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+174,"conf_s_awready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1368,"conf_s_wid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+152,"conf_s_wdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+153,"conf_s_wstrb",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1371,"conf_s_wlast",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+28,"conf_s_wvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+175,"conf_s_wready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+176,"conf_s_bid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1369,"conf_s_bresp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+177,"conf_s_bvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+29,"conf_s_bready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1368,"conf_s_arid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+149,"conf_s_araddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1368,"conf_s_arlen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+150,"conf_s_arsize",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1369,"conf_s_arburst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1369,"conf_s_arlock",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1368,"conf_s_arcache",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1370,"conf_s_arprot",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+30,"conf_s_arvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+178,"conf_s_arready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+179,"conf_s_rid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+180,"conf_s_rdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1369,"conf_s_rresp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+181,"conf_s_rlast",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+182,"conf_s_rvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+31,"conf_s_rready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1368,"apb_s_awid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+149,"apb_s_awaddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1368,"apb_s_awlen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+150,"apb_s_awsize",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1369,"apb_s_awburst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1369,"apb_s_awlock",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1368,"apb_s_awcache",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1370,"apb_s_awprot",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+32,"apb_s_awvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+183,"apb_s_awready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1368,"apb_s_wid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+152,"apb_s_wdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+153,"apb_s_wstrb",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1371,"apb_s_wlast",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+33,"apb_s_wvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+184,"apb_s_wready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+185,"apb_s_bid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1369,"apb_s_bresp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+186,"apb_s_bvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+34,"apb_s_bready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1368,"apb_s_arid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+149,"apb_s_araddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1368,"apb_s_arlen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+150,"apb_s_arsize",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1369,"apb_s_arburst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1369,"apb_s_arlock",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1368,"apb_s_arcache",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1370,"apb_s_arprot",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+35,"apb_s_arvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+187,"apb_s_arready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+188,"apb_s_rid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+189,"apb_s_rdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1369,"apb_s_rresp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+190,"apb_s_rlast",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+191,"apb_s_rvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+36,"apb_s_rready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+192,"conf_s_ram_raddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+180,"conf_s_ram_rdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+37,"conf_s_ram_ren",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+193,"conf_s_ram_waddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+194,"conf_s_ram_wdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+38,"conf_s_ram_wen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+195,"interrupt",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+1349,"reset",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1315,"timer_clk",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1372,"UART_CTS",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+196,"UART_RTS",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+197,"UART_DTR",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1372,"UART_DSR",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1373,"UART_RI",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1372,"UART_DCD",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+198,"uart0_int",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+199,"uart0_txd_o",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1339,"uart0_txd_i",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+200,"uart0_txd_oe",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+201,"uart0_rxd_o",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1338,"uart0_rxd_i",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+202,"uart0_rxd_oe",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+196,"uart0_rts_o",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1372,"uart0_cts_i",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1372,"uart0_dsr_i",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1372,"uart0_dcd_i",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+197,"uart0_dtr_o",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1373,"uart0_ri_i",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("APB_DEV ");
    tracep->declBus(c+1374,"ADDR_APB",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1375,"DATA_APB",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1376,"L_ADDR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1375,"L_ID",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1377,"L_DATA",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1378,"L_MASK",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+1315,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1316,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1368,"axi_s_awid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+149,"axi_s_awaddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1368,"axi_s_awlen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+150,"axi_s_awsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1369,"axi_s_awburst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1369,"axi_s_awlock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1368,"axi_s_awcache",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1370,"axi_s_awprot",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+32,"axi_s_awvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+183,"axi_s_awready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1368,"axi_s_wid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+152,"axi_s_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+153,"axi_s_wstrb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1371,"axi_s_wlast",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+33,"axi_s_wvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+184,"axi_s_wready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+185,"axi_s_bid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1369,"axi_s_bresp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+186,"axi_s_bvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+34,"axi_s_bready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1368,"axi_s_arid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+149,"axi_s_araddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1368,"axi_s_arlen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+150,"axi_s_arsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1369,"axi_s_arburst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1369,"axi_s_arlock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1368,"axi_s_arcache",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1370,"axi_s_arprot",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+35,"axi_s_arvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+187,"axi_s_arready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+188,"axi_s_rid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+189,"axi_s_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1369,"axi_s_rresp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+190,"axi_s_rlast",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+191,"axi_s_rvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+36,"axi_s_rready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+203,"apb_ready_dma",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1379,"apb_rw_dma",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1380,"apb_psel_dma",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1381,"apb_enab_dma",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1382,"apb_addr_dma",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 19,0);
    tracep->declBus(c+1383,"apb_wdata_dma",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+204,"apb_rdata_dma",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1384,"apb_valid_dma",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+205,"dma_grant",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+206,"dma_req_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1385,"dma_ack_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1339,"uart0_txd_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+199,"uart0_txd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+200,"uart0_txd_oe",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1338,"uart0_rxd_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+201,"uart0_rxd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+202,"uart0_rxd_oe",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+196,"uart0_rts_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+197,"uart0_dtr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1372,"uart0_cts_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1372,"uart0_dsr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1372,"uart0_dcd_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1373,"uart0_ri_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+198,"uart0_int",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1369,"nand_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1368,"nand_rdy",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1368,"nand_ce",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1372,"nand_cle",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1372,"nand_ale",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1372,"nand_rd",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1372,"nand_wr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1372,"nand_dat_oe",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1386,"nand_dat_i",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1386,"nand_dat_o",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+1385,"nand_dma_ack_i",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+206,"nand_dma_req_o",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+207,"apb_ready_cpu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+208,"apb_rw_cpu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+209,"apb_psel_cpu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+210,"apb_enab_cpu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+211,"apb_addr_cpu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 19,0);
    tracep->declBus(c+212,"apb_datai_cpu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+213,"apb_datao_cpu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+1315,"apb_clk_cpu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1316,"apb_reset_n_cpu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+214,"apb_word_trans_cpu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+39,"apb_valid_cpu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+215,"apb_high_24b_rd",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+216,"apb_high_24b_wr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBit(c+1387,"apb_clk_dma",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1388,"apb_reset_n_dma",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+217,"apb_uart0_req",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+218,"apb_uart0_ack",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+219,"apb_uart0_rw",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+218,"apb_uart0_enab",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+220,"apb_uart0_psel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+221,"apb_uart0_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 19,0);
    tracep->declBus(c+222,"apb_uart0_datai",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+223,"apb_uart0_datao",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+224,"apb_nand_req",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+225,"apb_nand_ack",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+219,"apb_nand_rw",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+225,"apb_nand_enab",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+226,"apb_nand_psel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+221,"apb_nand_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 19,0);
    tracep->declBus(c+227,"apb_nand_datai",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+228,"apb_nand_datao",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("AA_apb_mux16 ");
    tracep->declBus(c+1374,"ADDR_APB",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1375,"DATA_APB",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1367,"DATA_APB_32",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+1315,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1316,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+203,"apb_ready_dma",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1379,"apb_rw_dma",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1380,"apb_psel_dma",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1381,"apb_enab_dma",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1382,"apb_addr_dma",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 19,0);
    tracep->declBus(c+1383,"apb_wdata_dma",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+204,"apb_rdata_dma",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+205,"dma_grant",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1384,"apb_valid_dma",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+39,"apb_valid_cpu",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+207,"apb_ack_cpu",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+208,"apb_rw_cpu",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+209,"apb_psel_cpu",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+210,"apb_enab_cpu",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+211,"apb_addr_cpu",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 19,0);
    tracep->declBus(c+212,"apb_datai_cpu",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+213,"apb_datao_cpu",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+215,"apb_high_24b_rd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+216,"apb_high_24b_wr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBit(c+214,"apb_word_trans_cpu",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+217,"apb0_req",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+218,"apb0_ack",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+219,"apb0_rw",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+220,"apb0_psel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+218,"apb0_enab",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+221,"apb0_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 19,0);
    tracep->declBus(c+222,"apb0_datai",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+223,"apb0_datao",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+224,"apb1_req",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+225,"apb1_ack",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+219,"apb1_rw",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+226,"apb1_psel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+225,"apb1_enab",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+221,"apb1_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 19,0);
    tracep->declBus(c+227,"apb1_datai",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+228,"apb1_datao",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+229,"apb_ack",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+219,"apb_rw",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+230,"apb_psel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+231,"apb_enab",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+221,"apb_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 19,0);
    tracep->declBus(c+222,"apb_datai",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+232,"high_24b_wr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+233,"high_24b_rd",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+234,"apb_datao",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->pushNamePrefix("arb_2_1 ");
    tracep->declBit(c+1315,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1316,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+39,"valid0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1384,"valid1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+205,"dma_grant",-1,FST_VD_OUTPUT,FST_VT_SV_BIT, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("AA_axi2apb_bridge_cpu ");
    tracep->declBus(c+1374,"L_ADDR_APB",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+1315,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1316,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1368,"axi_s_awid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+149,"axi_s_awaddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1368,"axi_s_awlen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+150,"axi_s_awsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1369,"axi_s_awburst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1369,"axi_s_awlock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1368,"axi_s_awcache",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1370,"axi_s_awprot",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+32,"axi_s_awvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+183,"axi_s_awready",-1,FST_VD_OUTPUT,FST_VT_SV_BIT, false,-1);
    tracep->declBus(c+1368,"axi_s_wid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+152,"axi_s_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+153,"axi_s_wstrb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1371,"axi_s_wlast",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+33,"axi_s_wvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+184,"axi_s_wready",-1,FST_VD_OUTPUT,FST_VT_SV_BIT, false,-1);
    tracep->declBus(c+185,"axi_s_bid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1369,"axi_s_bresp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+186,"axi_s_bvalid",-1,FST_VD_OUTPUT,FST_VT_SV_BIT, false,-1);
    tracep->declBit(c+34,"axi_s_bready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1368,"axi_s_arid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+149,"axi_s_araddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1368,"axi_s_arlen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+150,"axi_s_arsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1369,"axi_s_arburst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1369,"axi_s_arlock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1368,"axi_s_arcache",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1370,"axi_s_arprot",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+35,"axi_s_arvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+187,"axi_s_arready",-1,FST_VD_OUTPUT,FST_VT_SV_BIT, false,-1);
    tracep->declBus(c+188,"axi_s_rid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+189,"axi_s_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1369,"axi_s_rresp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+190,"axi_s_rlast",-1,FST_VD_OUTPUT,FST_VT_SV_BIT, false,-1);
    tracep->declBit(c+191,"axi_s_rvalid",-1,FST_VD_OUTPUT,FST_VT_SV_BIT, false,-1);
    tracep->declBit(c+36,"axi_s_rready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+214,"apb_word_trans",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+235,"cpu_grant",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+39,"apb_valid_cpu",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+215,"apb_high_24b_rd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+216,"apb_high_24b_wr",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBit(c+1315,"apb_clk",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1316,"apb_reset_n",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+209,"reg_psel",-1,FST_VD_OUTPUT,FST_VT_SV_BIT, false,-1);
    tracep->declBit(c+210,"reg_enable",-1,FST_VD_OUTPUT,FST_VT_SV_BIT, false,-1);
    tracep->declBit(c+208,"reg_rw",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+211,"reg_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 19,0);
    tracep->declBus(c+212,"reg_datai",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+213,"reg_datao",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+207,"reg_ready_1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+40,"csr_rw_send_axi_rsp_done",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+236,"reg_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1389,"CSR_RW_SM_IDLE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1390,"CSR_RW_SM_GET_AXI_ADDR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1391,"CSR_RW_SM_SEND_AXI_RSP",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBit(c+237,"axi_s_sel_rd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+208,"axi_s_sel_wr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+238,"csr_rw_sm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+41,"csr_rw_sm_nxt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+211,"axi_s_req_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 19,0);
    tracep->declBus(c+185,"axi_s_w_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+188,"axi_s_r_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+239,"axi_s_rstrb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+240,"apb_s_wstrb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+241,"reg_datai_32",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+242,"reg_datao_32",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+243,"rd_count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+244,"apb_rd_size",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+245,"apb_wr_size",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("nand_module ");
    tracep->declBus(c+1369,"nand_type",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+1315,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1316,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+226,"apb_psel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+225,"apb_enab",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+219,"apb_rw",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+221,"apb_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 19,0);
    tracep->declBus(c+227,"apb_datai",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+228,"apb_datao",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+225,"apb_ack",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+206,"nand_dma_req_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1385,"nand_dma_ack_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1368,"nand_ce",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1386,"nand_dat_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1386,"nand_dat_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+1372,"nand_dat_oe",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1372,"nand_ale",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1372,"nand_cle",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1372,"nand_wr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1372,"nand_rd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1368,"nand_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+246,"nand_int",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+226,"psel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+225,"penable",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+247,"paddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 10,0);
    tracep->declBit(c+219,"pwr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+248,"nand_iordy_r0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+249,"nand_iordy_r1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+250,"nand_type_r1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+251,"nand_type_r2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->pushNamePrefix("NAND ");
    tracep->declBus(c+251,"nand_type",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+1315,"pclk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1316,"prst_",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+219,"pwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+226,"psel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+225,"penable",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+247,"ADDR",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 10,0);
    tracep->declBus(c+227,"DAT_I",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+228,"DAT_O",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1368,"NAND_CE_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+206,"NAND_REQ",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1386,"NAND_I",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1386,"NAND_O",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBit(c+1372,"NAND_EN_",-1,FST_VD_OUTPUT,FST_VT_SV_BIT, false,-1);
    tracep->declBit(c+1372,"NAND_ALE",-1,FST_VD_OUTPUT,FST_VT_SV_BIT, false,-1);
    tracep->declBit(c+1372,"NAND_CLE",-1,FST_VD_OUTPUT,FST_VT_SV_BIT, false,-1);
    tracep->declBit(c+1372,"NAND_WR_",-1,FST_VD_OUTPUT,FST_VT_SV_BIT, false,-1);
    tracep->declBit(c+1372,"NAND_RD_",-1,FST_VD_OUTPUT,FST_VT_SV_BIT, false,-1);
    tracep->declBus(c+249,"NAND_IORDY_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+246,"nand_int",-1,FST_VD_OUTPUT,FST_VT_SV_BIT, false,-1);
    tracep->declBus(c+228,"REG_DAT_T",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+252,"nand_addr_c",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 13,0);
    tracep->declBus(c+253,"nand_addr_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 24,0);
    tracep->declBus(c+254,"nand_op_num",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+255,"nand_parameter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+256,"nand_ce_map0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+257,"nand_ce_map1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+258,"nand_rdy_map0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+259,"nand_rdy_map1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+260,"nand_command",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+261,"nand_timing",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declQuad(c+262,"addr_in_die",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 37,0);
    tracep->declBus(c+264,"NAND_STATE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+265,"NAND_OP_NUM",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+266,"WRITE_MAX_COUNT",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 13,0);
    tracep->declBus(c+267,"READ_MAX_COUNT",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 13,0);
    tracep->declBit(c+268,"nand_clr_ack",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+269,"NAND_DONE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+270,"NAND_CE_",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+271,"op_scope",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 13,0);
    tracep->declBus(c+272,"nand_id_num",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+273,"nand_size",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+274,"main_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+275,"spare_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+276,"nand_int_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+277,"nand_dma_ack_i",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+42,"NANDtag",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+278,"NAND_IORDY",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+279,"HIT0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+280,"HIT1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+281,"HIT2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+282,"HIT3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+283,"HIT4",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+284,"HIT5",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+285,"HIT6",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+286,"HIT7",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+287,"HIT8",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+288,"HIT9",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+289,"HIT10",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+290,"HIT11",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+291,"NAND_HIT",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+206,"NAND_DMA_REQ",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+292,"nand_cmd_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+293,"status",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+294,"nand_number",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declQuad(c+295,"ID_INFORM",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 47,0);
    tracep->declBus(c+297,"NAND_DAT_O_RD",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+298,"NAND_CE_pre_o",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+299,"NAND_IORDY_post_i",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+300,"ADDR_pointer",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+301,"NAND_ADDR_COUNT",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+302,"WAIT_NUM",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+303,"HOLD_NUM",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+304,"COMMAND",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+305,"PRE_STATE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+306,"READ_ID_NUM",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+307,"data_count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 13,0);
    tracep->declQuad(c+308,"NAND_ADDR",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 37,0);
    tracep->declBus(c+310,"NAND_DAT_I_WR",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+311,"NAND_GO",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+312,"NAND_ACK",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+313,"DMA_OP_DONE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+314,"ERASE_SERIAL",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+315,"now_up_half",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+316,"now_oob",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+1392,"NAND_IDLE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+1393,"COMMAND_IN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+1394,"ADDR_4_RD_WR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+1395,"ADDR_4_ERASE_ID",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+1396,"READ_START",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+1397,"READ_WAIT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+1398,"READ_WAIT_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+1399,"READ_TRANSFER",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+1400,"WRITE_START",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+1401,"WRITE_DATA",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+1402,"PROGRAM",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+1403,"PROGRAM_FAIL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+1404,"READ_ID",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+1405,"READ_STATUS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+1406,"ID_TO_STATUS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+1407,"ERASE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+1408,"WAIT_ERASE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+1409,"ERASE_FAIL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+1410,"RESET",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+1411,"WAIT_RESET",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("uart0 ");
    tracep->declBit(c+1315,"PCLK",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1316,"PRST_",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+220,"PSEL",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+218,"PENABLE",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+219,"PWRITE",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+317,"PADDR",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+222,"PWDATA",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+223,"URT_PRDATA",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+198,"INT",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1372,"clk_carrier",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1339,"TXD_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+199,"TXD_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+200,"TXD_oe",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1338,"RXD_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+201,"RXD_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+202,"RXD_oe",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+196,"RTS",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1372,"CTS",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1372,"DSR",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1372,"DCD",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+197,"DTR",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1373,"RI",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1349,"prst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+318,"we",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+319,"re",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+320,"rx_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+321,"tx2rx_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+322,"isomode",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("regs ");
    tracep->declBit(c+1315,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1349,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1372,"clk_carrier",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+323,"addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+222,"dat_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+223,"dat_o",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBit(c+318,"we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+319,"re",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+199,"stx_pad_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1338,"srx_pad_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1339,"TXD_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+201,"RXD_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1412,"modem_inputs",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+196,"rts_pad_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+197,"dtr_pad_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+198,"int_o",-1,FST_VD_OUTPUT,FST_VT_SV_BIT, false,-1);
    tracep->declBit(c+322,"usart_mode",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+321,"tx2rx_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+320,"rx_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+324,"enable",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+325,"srx_pad",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+326,"ier",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+327,"iir",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+328,"fcr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+329,"mcr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBit(c+330,"infrared",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+331,"rx_pol",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+332,"lcr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+333,"msr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+334,"dl",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBit(c+335,"start_dlc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+336,"lsr_mask_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+337,"msi_reset",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+338,"dlc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBus(c+339,"trigger_level",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+340,"rx_reset",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+341,"tx_reset",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+342,"dlab",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+343,"usart_rx_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+344,"usart_tx_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+345,"sclk_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+346,"sclk_en_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+347,"mode_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+348,"fi_di_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+349,"sclk_count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+350,"repeat_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+351,"usart_normal",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+352,"usart_irda",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+353,"usart_t0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+354,"usart_t1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+355,"tx_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+356,"sclk_por",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1372,"cts_pad_i",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1372,"dsr_pad_i",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1373,"ri_pad_i",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1372,"dcd_pad_i",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+357,"loopback",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1371,"cts",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1371,"dsr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1413,"ri",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1371,"dcd",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+358,"cts_c",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+359,"dsr_c",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+360,"ri_c",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+361,"dcd_c",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+362,"lsr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+363,"lsr0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+364,"lsr1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+365,"lsr2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+366,"lsr3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+367,"lsr4",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+368,"lsr5",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+369,"lsr6",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+370,"lsr7",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+371,"lsr0r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+372,"lsr1r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+373,"lsr2r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+374,"lsr3r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+375,"lsr4r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+376,"lsr5r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+377,"lsr6r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+378,"lsr7r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+379,"lsr_mask",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+380,"rls_int",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+381,"rda_int",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+382,"ti_int",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+383,"thre_int",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+384,"ms_int",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+385,"tf_push",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+386,"rf_pop",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+387,"rf_data_out",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 10,0);
    tracep->declBit(c+388,"rf_error_bit",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+389,"rf_count",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+390,"tf_count",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+391,"tstate",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+392,"rstate",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+393,"counter_t",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 9,0);
    tracep->declBit(c+394,"thre_set_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+395,"block_cnt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+396,"block_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBit(c+397,"current_finish",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+398,"max_repeat_time",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+399,"serial_out",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1371,"serial_out_modulated",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1350,"rcv_pad_i",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+400,"serial_in",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+364,"rf_overrun",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+401,"rf_push_pulse",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+402,"lsr_mask_condition",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+403,"iir_read",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+404,"msr_read",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+405,"fifo_read",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+385,"fifo_write",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+406,"delayed_modem_signals",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+407,"lsr0_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+408,"lsr1_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+409,"lsr2_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+410,"lsr3_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+411,"lsr4_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+412,"lsr5_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+413,"lsr6_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+414,"lsr7_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+415,"M_cnt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 8,0);
    tracep->declBus(c+416,"M_next",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 8,0);
    tracep->declBit(c+417,"M_toggle",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+418,"rls_int_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+419,"thre_int_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+420,"ms_int_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+421,"ti_int_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+422,"rda_int_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+423,"rls_int_rise",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+424,"thre_int_rise",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+425,"ms_int_rise",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+426,"ti_int_rise",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+427,"rda_int_rise",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+428,"rls_int_pnd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+429,"rda_int_pnd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+430,"thre_int_pnd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+431,"ms_int_pnd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+432,"ti_int_pnd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+433,"d1_fifo_read",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1414,"Tp",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1414,"width",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1415,"init_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBit(c+1349,"rst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1315,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1372,"stage1_rst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1371,"stage1_clk_en_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1350,"async_dat_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+325,"sync_dat_o",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBus(c+434,"flop_0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1315,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1349,"wb_rst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+332,"lcr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+386,"rf_pop",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+400,"srx_pad_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+435,"enable",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+340,"rx_reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+379,"lsr_mask",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+393,"counter_t",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 9,0);
    tracep->declBus(c+389,"rf_count",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+387,"rf_data_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 10,0);
    tracep->declBit(c+364,"rf_overrun",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+388,"rf_error_bit",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+392,"rstate",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+401,"rf_push_pulse",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+436,"rcounter16",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+437,"rbit_counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+438,"rshift",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBit(c+439,"rparity",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+440,"rparity_error",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+441,"rframing_error",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+442,"rbit_in",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+443,"rparity_xor",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+444,"counter_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBit(c+445,"rf_push_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+446,"rf_data_in",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 10,0);
    tracep->declBit(c+447,"rf_push",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+448,"break_error",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+449,"rcounter16_eq_7",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+450,"rcounter16_eq_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+451,"rcounter16_eq_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+452,"rcounter16_minus_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1368,"sr_idle",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1389,"sr_rec_start",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1390,"sr_rec_bit",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1416,"sr_rec_parity",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1417,"sr_rec_stop",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1418,"sr_check_parity",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1419,"sr_rec_prepare",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1420,"sr_end_bit",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1391,"sr_ca_lc_parity",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1421,"sr_wait1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1422,"sr_push",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+453,"toc_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 9,0);
    tracep->declBus(c+454,"brc_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1423,"fifo_width",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1378,"fifo_depth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1424,"fifo_pointer_w",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1425,"fifo_counter_w",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+1315,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1349,"wb_rst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+401,"push",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+386,"pop",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+446,"data_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 10,0);
    tracep->declBit(c+340,"fifo_reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+379,"reset_status",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+387,"data_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 10,0);
    tracep->declBit(c+364,"overrun",-1,FST_VD_OUTPUT,FST_VT_SV_BIT, false,-1);
    tracep->declBus(c+389,"count",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBit(c+388,"error_bit",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+455,"data8_out",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+456+i*1,"fifo",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 2,0);
    }
    tracep->declBus(c+472,"top",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+473,"bottom",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+474,"top_plus_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+475,"word0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+476,"word1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+477,"word2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+478,"word3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+479,"word4",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+480,"word5",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+481,"word6",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+482,"word7",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+483,"word8",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+484,"word9",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+485,"word10",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+486,"word11",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+487,"word12",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+488,"word13",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+489,"word14",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+490,"word15",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1424,"addr_width",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1375,"data_width",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1378,"depth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+1315,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+401,"we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+472,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+473,"dpra",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+491,"di",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+455,"dpo",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+492+i*1,"ram",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1315,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1349,"wb_rst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+332,"lcr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+385,"tf_push",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+222,"wb_dat_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+508,"enable",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+341,"tx_reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+379,"lsr_mask",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+322,"usart_mode",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+353,"usart_t0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1339,"srx_pad_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+350,"repeat_time",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+397,"current_finish",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+398,"max_repeat_time",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+321,"tx2rx_en",-1,FST_VD_OUTPUT,FST_VT_SV_BIT, false,-1);
    tracep->declBit(c+399,"stx_pad_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+391,"tstate",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+390,"tf_count",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+509,"counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+510,"bit_counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+511,"shift_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+512,"stx_o_tmp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+513,"parity_xor",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+514,"tf_pop",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+515,"bit_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+516,"tx_error",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+517,"error_time",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+222,"tf_data_in",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+518,"tf_data_out",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+519,"tf_overrun",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1370,"s_idle",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1426,"s_send_start",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1427,"s_send_byte",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1428,"s_send_parity",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1429,"s_send_stop",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1430,"s_pop_byte",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1431,"s_send_guard1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+520,"tf_data_bak",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1375,"fifo_width",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1378,"fifo_depth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1424,"fifo_pointer_w",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1425,"fifo_counter_w",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+1315,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1349,"wb_rst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+385,"push",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+514,"pop",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+222,"data_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+341,"fifo_reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+379,"reset_status",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+518,"data_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+519,"overrun",-1,FST_VD_OUTPUT,FST_VT_SV_BIT, false,-1);
    tracep->declBus(c+390,"count",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+521,"top",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+522,"bottom",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+523,"top_plus_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1424,"addr_width",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1375,"data_width",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1378,"depth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+1315,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+385,"we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+521,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+522,"dpra",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+222,"di",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+518,"dpo",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+524+i*1,"ram",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("AXI_SLAVE_MUX ");
    tracep->declBit(c+1372,"spi_boot",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1315,"axi_s_aclk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1316,"axi_s_aresetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1368,"axi_s_awid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+149,"axi_s_awaddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1368,"axi_s_awlen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+150,"axi_s_awsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1369,"axi_s_awburst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1369,"axi_s_awlock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1368,"axi_s_awcache",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1370,"axi_s_awprot",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+17,"axi_s_awvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+161,"axi_s_awready",-1,FST_VD_OUTPUT,FST_VT_SV_BIT, false,-1);
    tracep->declBus(c+1368,"axi_s_wid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+152,"axi_s_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+153,"axi_s_wstrb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1371,"axi_s_wlast",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+18,"axi_s_wvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+162,"axi_s_wready",-1,FST_VD_OUTPUT,FST_VT_SV_BIT, false,-1);
    tracep->declBus(c+155,"axi_s_bid",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+156,"axi_s_bresp",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+163,"axi_s_bvalid",-1,FST_VD_OUTPUT,FST_VT_SV_BIT, false,-1);
    tracep->declBit(c+19,"axi_s_bready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1368,"axi_s_arid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+149,"axi_s_araddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1368,"axi_s_arlen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+150,"axi_s_arsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1369,"axi_s_arburst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1369,"axi_s_arlock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1368,"axi_s_arcache",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1370,"axi_s_arprot",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+20,"axi_s_arvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+164,"axi_s_arready",-1,FST_VD_OUTPUT,FST_VT_SV_BIT, false,-1);
    tracep->declBus(c+158,"axi_s_rid",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+15,"axi_s_rdata",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+159,"axi_s_rresp",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+160,"axi_s_rlast",-1,FST_VD_OUTPUT,FST_VT_SV_BIT, false,-1);
    tracep->declBit(c+165,"axi_s_rvalid",-1,FST_VD_OUTPUT,FST_VT_SV_BIT, false,-1);
    tracep->declBit(c+21,"axi_s_rready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1368,"s0_awid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+149,"s0_awaddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1368,"s0_awlen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+150,"s0_awsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1369,"s0_awburst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1369,"s0_awlock",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1368,"s0_awcache",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1370,"s0_awprot",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+22,"s0_awvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+166,"s0_awready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1368,"s0_wid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+152,"s0_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+153,"s0_wstrb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1371,"s0_wlast",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+23,"s0_wvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+167,"s0_wready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+168,"s0_bid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1369,"s0_bresp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+169,"s0_bvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+24,"s0_bready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1368,"s0_arid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+149,"s0_araddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1368,"s0_arlen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+150,"s0_arsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1369,"s0_arburst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1369,"s0_arlock",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1368,"s0_arcache",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1370,"s0_arprot",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+25,"s0_arvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+170,"s0_arready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+171,"s0_rid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1321,"s0_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1369,"s0_rresp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+172,"s0_rlast",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+173,"s0_rvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+26,"s0_rready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1368,"s1_awid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+149,"s1_awaddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1368,"s1_awlen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+150,"s1_awsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1369,"s1_awburst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1369,"s1_awlock",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1368,"s1_awcache",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1370,"s1_awprot",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+43,"s1_awvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1432,"s1_awready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1368,"s1_wid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+152,"s1_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+153,"s1_wstrb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1371,"s1_wlast",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+44,"s1_wvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1433,"s1_wready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1434,"s1_bid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1435,"s1_bresp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+1436,"s1_bvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+45,"s1_bready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1368,"s1_arid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+149,"s1_araddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1368,"s1_arlen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+150,"s1_arsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1369,"s1_arburst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1369,"s1_arlock",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1368,"s1_arcache",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1370,"s1_arprot",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+46,"s1_arvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1437,"s1_arready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1438,"s1_rid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1439,"s1_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1440,"s1_rresp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+1441,"s1_rlast",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1442,"s1_rvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+47,"s1_rready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1368,"s2_awid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+149,"s2_awaddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1368,"s2_awlen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+150,"s2_awsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1369,"s2_awburst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1369,"s2_awlock",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1368,"s2_awcache",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1370,"s2_awprot",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+32,"s2_awvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+183,"s2_awready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1368,"s2_wid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+152,"s2_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+153,"s2_wstrb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1371,"s2_wlast",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+33,"s2_wvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+184,"s2_wready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+185,"s2_bid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1369,"s2_bresp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+186,"s2_bvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+34,"s2_bready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1368,"s2_arid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+149,"s2_araddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1368,"s2_arlen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+150,"s2_arsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1369,"s2_arburst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1369,"s2_arlock",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1368,"s2_arcache",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1370,"s2_arprot",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+35,"s2_arvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+187,"s2_arready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+188,"s2_rid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+189,"s2_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1369,"s2_rresp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+190,"s2_rlast",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+191,"s2_rvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+36,"s2_rready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1368,"s3_awid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+149,"s3_awaddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1368,"s3_awlen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+150,"s3_awsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1369,"s3_awburst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1369,"s3_awlock",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1368,"s3_awcache",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1370,"s3_awprot",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+27,"s3_awvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+174,"s3_awready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1368,"s3_wid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+152,"s3_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+153,"s3_wstrb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1371,"s3_wlast",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+28,"s3_wvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+175,"s3_wready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+176,"s3_bid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1369,"s3_bresp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+177,"s3_bvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+29,"s3_bready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1368,"s3_arid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+149,"s3_araddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1368,"s3_arlen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+150,"s3_arsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1369,"s3_arburst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1369,"s3_arlock",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1368,"s3_arcache",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1370,"s3_arprot",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+30,"s3_arvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+178,"s3_arready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+179,"s3_rid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+180,"s3_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1369,"s3_rresp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+181,"s3_rlast",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+182,"s3_rvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+31,"s3_rready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1368,"s4_awid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+149,"s4_awaddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1368,"s4_awlen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+150,"s4_awsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1369,"s4_awburst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1369,"s4_awlock",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1368,"s4_awcache",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1370,"s4_awprot",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+48,"s4_awvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1443,"s4_awready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1368,"s4_wid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+152,"s4_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+153,"s4_wstrb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1371,"s4_wlast",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+49,"s4_wvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1444,"s4_wready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1445,"s4_bid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1446,"s4_bresp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+1447,"s4_bvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+50,"s4_bready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1368,"s4_arid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+149,"s4_araddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1368,"s4_arlen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+150,"s4_arsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1369,"s4_arburst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1369,"s4_arlock",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1368,"s4_arcache",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1370,"s4_arprot",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+51,"s4_arvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1448,"s4_arready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1449,"s4_rid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1450,"s4_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1451,"s4_rresp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+1452,"s4_rlast",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1453,"s4_rvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+52,"s4_rready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1315,"clk",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1316,"rst_n",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+540,"wr_data_s_hit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+541,"rd_addr_hit",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+542,"wr_addr_hit",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+543,"wr_resp_s_hit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+544,"s_awready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+545,"s_wready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+546,"s_bvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+547,"s_arready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+548,"s_rlast",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+549,"s_rvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+550+i*1,"s_bid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 3,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+1+i*1,"s_bresp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 1,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+555+i*1,"s_rid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 3,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+53+i*1,"s_rdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 31,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+6+i*1,"s_rresp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 1,0);
    }
    tracep->declBus(c+58,"s_awvalid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+59,"s_wvalid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+60,"s_bready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+61,"s_arvalid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+62,"s_rready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+1454+i*1,"BASE_ADDR",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 4,0);
    }
    tracep->declBus(c+560,"wr_sel_group_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+561,"wr_sel_group_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+562,"bvalid_group_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+563,"bvalid_group_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1459,"rd_sel_group_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1460,"rd_sel_group_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+564,"rd_valid_group_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+565,"rd_valid_group_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+566,"wr_fifo_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+567,"wr_fifo_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+568,"rd_fifo_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+569,"rd_fifo_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+63,"wr_dir_ins",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+64,"wr_dir_del",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+570,"wr_data_dir",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+571,"wr_addr_dir",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+572,"wr_resp_pre_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+573,"wr_resp_prog",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+574,"wr_resp_sel_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+575,"wr_resp_sel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1461,"axi_s_awready_int",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+1461,"awvlid_int",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+1461,"resp_int",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+1461,"axi_s_resp_int",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+576,"w_addr_dir_int",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+1461,"w_ad_int",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBit(c+577,"wr_addr_hit_temp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1461,"axi_s_wready_int",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+1461,"wvalid_int",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+578,"rd_data_sel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+65,"rd_dir_ins",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+66,"rd_dir_del",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+578,"rd_data_dir",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+579,"rd_addr_dir",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+580,"rd_data_pre_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+1461,"rd_arready_int",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+1461,"rd_arvalid_int",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+1462,"rd_addr_hit_int",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBit(c+581,"rd_addr_hit_temp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+582,"rd_addr_dir_int",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+1461,"axi_rd_data_int",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->pushNamePrefix("rd_fifo ");
    tracep->declBus(c+1463,"FIFO_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+1315,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1316,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+568,"empty",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+569,"full",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+65,"shift_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+579,"data_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+66,"shift_out",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+578,"data_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+583+i*1,"fifo_ram",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 2,0);
    }
    tracep->declBus(c+585,"wr_ptr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+586,"rd_ptr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+587,"mem_wr_pos",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+588,"mem_rd_pos",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+589,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wr_fifo ");
    tracep->declBus(c+1463,"FIFO_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+1315,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1316,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+566,"empty",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+567,"full",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+63,"shift_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+571,"data_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+64,"shift_out",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+570,"data_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+590+i*1,"fifo_ram",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 2,0);
    }
    tracep->declBus(c+592,"wr_ptr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+593,"rd_ptr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+594,"mem_wr_pos",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+595,"mem_rd_pos",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+596,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("conf_axi_ram ");
    tracep->declBus(c+1367,"BUS_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1367,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1367,"CPU_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+1315,"aclk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1316,"aresetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+192,"ram_raddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+180,"ram_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+37,"ram_ren",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+193,"ram_waddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+194,"ram_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+38,"ram_wen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+149,"m_araddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1369,"m_arburst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1368,"m_arcache",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1368,"m_arid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1368,"m_arlen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1369,"m_arlock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1370,"m_arprot",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+178,"m_arready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+150,"m_arsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+30,"m_arvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+149,"m_awaddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1369,"m_awburst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1368,"m_awcache",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1368,"m_awid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1368,"m_awlen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1369,"m_awlock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1370,"m_awprot",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+174,"m_awready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+150,"m_awsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+27,"m_awvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+176,"m_bid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+29,"m_bready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1369,"m_bresp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+177,"m_bvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+180,"m_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+179,"m_rid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+181,"m_rlast",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+31,"m_rready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1369,"m_rresp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+182,"m_rvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+152,"m_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1368,"m_wid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1371,"m_wlast",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+175,"m_wready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+153,"m_wstrb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+28,"m_wvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1464,"ADDR_INCR_BASE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declQuad(c+597,"ram_r_a_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 44,0);
    tracep->declBus(c+192,"ram_r_a_data_araddr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+192,"ram_r_a_data_araddr_fixed",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+599,"ram_r_a_data_araddr_incr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+600,"ram_r_a_data_araddr_next",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+67,"ram_r_a_data_araddr_update",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+601,"ram_r_a_data_araddr_wrap",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+602,"ram_r_a_data_arburst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+603,"ram_r_a_data_arburst_fixed",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+604,"ram_r_a_data_arburst_incr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+605,"ram_r_a_data_arburst_wrap",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+606,"ram_r_a_data_arid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+607,"ram_r_a_data_arlen",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+608,"ram_r_a_data_arlen_last",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+609,"ram_r_a_data_arsize",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+68,"ram_r_a_data_push",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+610,"ram_r_a_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+69,"ram_r_a_pop",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+70,"ram_r_a_push",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+611,"ram_r_a_push_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 44,0);
    tracep->declQuad(c+613,"ram_r_a_queue_datas",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 44,0);
    tracep->declBus(c+615,"ram_r_a_queue_datas_araddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+616,"ram_r_a_queue_datas_arburst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+617,"ram_r_a_queue_datas_arid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+618,"ram_r_a_queue_datas_arlen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+619,"ram_r_a_queue_datas_arsize",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+178,"ram_r_a_queue_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+610,"ram_r_a_queue_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+71,"ram_r_a_queue_pop",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+72,"ram_r_a_queue_push",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+610,"ram_r_a_queue_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+620,"ram_r_a_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+192,"ram_r_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+73,"ram_r_allow_out",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+180,"ram_r_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+37,"ram_r_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+621,"ram_r_rcur",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+1351,"ram_r_rcur_reset",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+179,"ram_r_rid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+181,"ram_r_rlast",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+182,"ram_r_rvalid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declQuad(c+622,"ram_w_a_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 44,0);
    tracep->declBus(c+193,"ram_w_a_data_awaddr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+193,"ram_w_a_data_awaddr_fixed",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+624,"ram_w_a_data_awaddr_incr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+625,"ram_w_a_data_awaddr_next",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+74,"ram_w_a_data_awaddr_update",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+626,"ram_w_a_data_awaddr_wrap",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+627,"ram_w_a_data_awburst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+628,"ram_w_a_data_awburst_fixed",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+629,"ram_w_a_data_awburst_incr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+630,"ram_w_a_data_awburst_wrap",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+631,"ram_w_a_data_awid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+632,"ram_w_a_data_awlen",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+633,"ram_w_a_data_awsize",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+75,"ram_w_a_data_push",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+634,"ram_w_a_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+76,"ram_w_a_pop",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+77,"ram_w_a_push",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+611,"ram_w_a_push_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 44,0);
    tracep->declQuad(c+635,"ram_w_a_queue_datas",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 44,0);
    tracep->declBus(c+637,"ram_w_a_queue_datas_awaddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+638,"ram_w_a_queue_datas_awburst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+639,"ram_w_a_queue_datas_awid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+640,"ram_w_a_queue_datas_awlen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+641,"ram_w_a_queue_datas_awsize",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+174,"ram_w_a_queue_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+634,"ram_w_a_queue_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+78,"ram_w_a_queue_pop",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+79,"ram_w_a_queue_push",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+634,"ram_w_a_queue_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+642,"ram_w_a_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+193,"ram_w_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+643,"ram_w_allow_out",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+176,"ram_w_b_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+80,"ram_w_b_data_push",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+644,"ram_w_b_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+81,"ram_w_b_pop",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+76,"ram_w_b_push",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+645,"ram_w_b_queue_datas",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+646,"ram_w_b_queue_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+644,"ram_w_b_queue_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+82,"ram_w_b_queue_pop",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+83,"ram_w_b_queue_push",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+644,"ram_w_b_queue_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+177,"ram_w_b_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+84,"ram_w_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+85,"ram_w_go",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+647,"ram_w_strb",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+194,"ram_w_wdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+648,"ram_w_wlast",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+647,"ram_w_wstrb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+649,"ram_w_wvalid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("confreg ");
    tracep->declBus(c+1465,"SIMULATION",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+1367,"BUS_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1367,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1367,"CPU_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+1315,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1315,"timer_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1316,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+37,"conf_ren",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+38,"conf_wen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+192,"conf_raddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+193,"conf_waddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+194,"conf_wdatain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+180,"conf_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1340,"led",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+1341,"led_rg0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1342,"led_rg1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1343,"num_csn",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1344,"num_a_g",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+1348,"switch",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1345,"btn_key_col",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1346,"btn_key_row",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1347,"btn_step",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+650,"cr0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+651,"cr1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+652,"cr2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+653,"cr3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+654,"cr4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+655,"cr5",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+656,"cr6",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+657,"cr7",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+658,"led_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+659,"led_rg0_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+660,"led_rg1_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+661,"num_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,"switch_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1353,"sw_inter_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+662,"btn_key_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+663,"btn_step_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+664,"confreg_uart_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBit(c+665,"confreg_uart_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+666,"timer_r2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+667,"simu_flag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+668,"io_simu",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+669,"virtual_uart_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBit(c+670,"open_trace",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+671,"num_monitor",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+194,"conf_wdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+180,"conf_rdata_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+86,"conf_we",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+87,"write_cr0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+88,"write_cr1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+89,"write_cr2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+90,"write_cr3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+91,"write_cr4",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+92,"write_cr5",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+93,"write_cr6",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+94,"write_cr7",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+672,"write_timer_begin",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+673,"write_timer_begin_r1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+674,"write_timer_begin_r2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+675,"write_timer_begin_r3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+676,"write_timer_end_r1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+677,"write_timer_end_r2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+678,"conf_wdata_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+679,"conf_wdata_r1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+680,"conf_wdata_r2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+681,"timer_r1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+682,"timer",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+95,"write_timer",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+96,"write_io_simu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+97,"write_open_trace",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+98,"write_num_monitor",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+683,"write_uart_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+99,"write_uart_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+100,"write_led",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+684,"btn_key_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBus(c+685,"state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+101,"next_state",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+686,"key_flag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+687,"key_count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 19,0);
    tracep->declBus(c+688,"state_count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+1354,"key_start",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1355,"key_end",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+689,"key_sample",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+102,"btn_key_tmp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+690,"btn_step0_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+691,"btn_step1_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+692,"step0_flag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+693,"step0_count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 19,0);
    tracep->declBit(c+1356,"step0_start",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1357,"step0_end",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+694,"step0_sample",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+695,"step1_flag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+696,"step1_count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 19,0);
    tracep->declBit(c+1358,"step1_start",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1359,"step1_end",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+697,"step1_sample",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+103,"write_led_rg0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+104,"write_led_rg1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+105,"write_num",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+698,"count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 19,0);
    tracep->declBus(c+699,"scan_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1315,"aclk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1316,"aresetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+195,"intrpt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1368,"arid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+149,"araddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1386,"arlen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+150,"arsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1369,"arburst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1369,"arlock",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1368,"arcache",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1370,"arprot",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+157,"arvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+14,"arready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+158,"rid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+15,"rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+159,"rresp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+160,"rlast",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+16,"rvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1371,"rready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1368,"awid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+149,"awaddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1386,"awlen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+150,"awsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1369,"awburst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1369,"awlock",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1368,"awcache",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1370,"awprot",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+151,"awvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+11,"awready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1368,"wid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+152,"wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+153,"wstrb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1371,"wlast",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+154,"wvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+12,"wready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+155,"bid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+156,"bresp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+13,"bvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1371,"bready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1325,"debug0_wb_pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1360,"debug0_wb_rf_wen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1327,"debug0_wb_rf_wnum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+1328,"debug0_wb_rf_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1466,"debug1_wb_pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1467,"debug1_wb_rf_wen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1468,"debug1_wb_rf_wnum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+1469,"debug1_wb_rf_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+106,"req_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1372,"wr_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1470,"size_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+700,"addr_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1471,"wstrb_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1472,"wdata_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+107,"addr_ok_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+108,"data_ok_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+15,"rdata_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+109,"req_mem",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+701,"wr_mem",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+702,"size_mem",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+703,"addr_mem",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+704,"wstrb_mem",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+705,"wdata_mem",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+706,"addr_ok_mem",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+110,"data_ok_mem",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+15,"rdata_mem",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("cpu_axi_interface_u ");
    tracep->declBit(c+1315,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1316,"resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+106,"inst_req",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1372,"inst_wr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1470,"inst_size",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+700,"inst_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1472,"inst_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1471,"inst_wstrb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+15,"inst_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+107,"inst_addr_ok",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+108,"inst_data_ok",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+109,"data_req",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+701,"data_wr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+702,"data_size",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+704,"data_wstrb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+703,"data_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+705,"data_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+15,"data_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+706,"data_addr_ok",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+110,"data_data_ok",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1368,"arid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+149,"araddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1386,"arlen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+150,"arsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1369,"arburst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1369,"arlock",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1368,"arcache",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1370,"arprot",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+157,"arvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+14,"arready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+158,"rid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+15,"rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+159,"rresp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+160,"rlast",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+16,"rvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1371,"rready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1368,"awid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+149,"awaddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1386,"awlen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+150,"awsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1369,"awburst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1369,"awlock",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1368,"awcache",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1370,"awprot",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+151,"awvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+11,"awready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1368,"wid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+152,"wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+153,"wstrb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1371,"wlast",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+154,"wvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+12,"wready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+155,"bid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+156,"bresp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+13,"bvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1371,"bready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+707,"do_req",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+708,"do_req_or",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+709,"do_wr_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+710,"do_size_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+149,"do_addr_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+152,"do_wdata_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+153,"do_wstrb_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+111,"data_back",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+711,"addr_rcv",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+712,"wdata_rcv",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cpu_sram_u ");
    tracep->declBit(c+1315,"aclk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1316,"aresetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+106,"req_inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1372,"wr_inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1470,"size_inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+700,"addr_inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1471,"wstrb_inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1472,"wdata_inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+107,"addr_ok_inst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+108,"data_ok_inst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+15,"rdata_inst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+109,"req_mem",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+701,"wr_mem",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+702,"size_mem",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+703,"addr_mem",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+704,"wstrb_mem",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+705,"wdata_mem",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+706,"addr_ok_mem",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+110,"data_ok_mem",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+15,"rdata_mem",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1325,"debug0_wb_pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1360,"debug0_wb_rf_wen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1327,"debug0_wb_rf_wnum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+1328,"debug0_wb_rf_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+713,"debug0_wb_inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+112,"preif_allow_in",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1371,"preif_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+1473,"preif_data_in",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1474,"preif_data_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+113,"preif_ready_go",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1475,"preif_flush",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+1476,"preif_nop",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+114,"if_allow_in",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+113,"if_valid_in",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+700,"if_data_in",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+714,"if_data_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+115,"if_ready_go",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1372,"if_flush",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+1477,"if_nop",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+116,"id_valid_in",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("id_data_in\206 ");
    tracep->declBus(c+715,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,"instr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_data_out\206 ");
    tracep->declBus(c+716,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+717,"instr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->declBit(c+718,"id_ready_go",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+118,"id_allow_in",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+719,"id_flush",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("id_nop\206 ");
    tracep->declBus(c+1478,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1479,"instr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->declBit(c+720,"ex_valid_in",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("ex_data_in\206 ");
    tracep->pushNamePrefix("ex_control_data\206 ");
    {
        const char* __VenumItemNames[]
        = {"ALU_SEL_RJ", "ALU_SEL_PC"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(1, "cpuDefine::AluSel1", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBit(c+721,"alusel1",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    {
        const char* __VenumItemNames[]
        = {"ALU_SEL_RK", "ALU_SEL_IMMOUT"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(2, "cpuDefine::AluSel2", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBit(c+722,"alusel2",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    {
        const char* __VenumItemNames[]
        = {"ALU_ADD", "ALU_SUB", "ALU_SLT", "ALU_SLTU", 
                                "ALU_NOR", "ALU_AND", 
                                "ALU_OR", "ALU_XOR", 
                                "ALU_SLL", "ALU_SRL", 
                                "ALU_SRA", "ALU_MUL", 
                                "ALU_MULH", "ALU_MULHU", 
                                "ALU_DIV", "ALU_MOD", 
                                "ALU_DIVU", "ALU_MODU", 
                                "ALU_LUI", "ALU_PCADD4"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000", "1001", 
                                "1010", "1011", "1100", 
                                "1101", "1110", "1111", 
                                "10000", "10001", "10010", 
                                "10011"};
        tracep->declDTypeEnum(3, "cpuDefine::AluCtrl", 20, 5, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+723,"aluctrl",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_control_data\206 ");
    tracep->declBit(c+724,"memWriteEn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+725,"memRead",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+726,"size_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+727,"is_unsign_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_control_data\206 ");
    tracep->declBit(c+728,"regWriteEn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    {
        const char* __VenumItemNames[]
        = {"REG_WRITE_ALU", "REG_WRITE_MEM"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(4, "cpuDefine::RegWriteDataSel", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBit(c+725,"regWriteDataSel",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+729,"load_valid_diff",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+730,"store_valid_diff",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+731,"rj",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1361,"rk",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+732,"rd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+733,"rjNo",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+734,"rkNo",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+735,"rdNo",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+736,"immout",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+737,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+738,"instr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_data_out\206 ");
    tracep->pushNamePrefix("ex_control_data\206 ");
    tracep->declBit(c+739,"alusel1",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+740,"alusel2",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+741,"aluctrl",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_control_data\206 ");
    tracep->declBit(c+742,"memWriteEn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+743,"memRead",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+744,"size_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+745,"is_unsign_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_control_data\206 ");
    tracep->declBit(c+746,"regWriteEn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+747,"regWriteDataSel",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+748,"load_valid_diff",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+749,"store_valid_diff",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+750,"rj",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+751,"rk",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+752,"rd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+753,"rjNo",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+754,"rkNo",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+755,"rdNo",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+756,"immout",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+757,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+758,"instr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->declBit(c+119,"ex_ready_go",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+120,"ex_allow_in",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+759,"ex_flush",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("ex_nop\206 ");
    tracep->pushNamePrefix("ex_control_data\206 ");
    tracep->declBit(c+1480,"alusel1",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1481,"alusel2",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+1482,"aluctrl",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_control_data\206 ");
    tracep->declBit(c+1372,"memWriteEn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1372,"memRead",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+1369,"size_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+1372,"is_unsign_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_control_data\206 ");
    tracep->declBit(c+1372,"regWriteEn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1483,"regWriteDataSel",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+1484,"load_valid_diff",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+1485,"store_valid_diff",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+1478,"rj",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1478,"rk",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1478,"rd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1392,"rjNo",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+1392,"rkNo",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+1392,"rdNo",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+1478,"immout",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1478,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1478,"instr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->declBit(c+121,"mem_valid_in",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("mem_data_in\206 ");
    tracep->pushNamePrefix("mem_control_data\206 ");
    tracep->declBit(c+760,"memWriteEn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+761,"memRead",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+762,"size_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+763,"is_unsign_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_control_data\206 ");
    tracep->declBit(c+764,"regWriteEn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+765,"regWriteDataSel",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+766,"load_valid_diff",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+767,"store_valid_diff",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+768,"wstrb_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+769,"rdNo",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+770,"aluout",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+771,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+772,"instr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+773,"memaddr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+774,"rd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_data_out\206 ");
    tracep->pushNamePrefix("mem_control_data\206 ");
    tracep->declBit(c+775,"memWriteEn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+776,"memRead",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+777,"size_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+778,"is_unsign_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_control_data\206 ");
    tracep->declBit(c+779,"regWriteEn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+780,"regWriteDataSel",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+781,"load_valid_diff",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+782,"store_valid_diff",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+783,"wstrb_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+784,"rdNo",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+785,"aluout",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+786,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+787,"instr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+788,"memaddr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+789,"rd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->declBit(c+122,"mem_ready_go",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1371,"mem_allow_in",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1486,"mem_flush",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("mem_nop\206 ");
    tracep->pushNamePrefix("mem_control_data\206 ");
    tracep->declBit(c+1372,"memWriteEn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1372,"memRead",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+1369,"size_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+1372,"is_unsign_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_control_data\206 ");
    tracep->declBit(c+1372,"regWriteEn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1483,"regWriteDataSel",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+1484,"load_valid_diff",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+1485,"store_valid_diff",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+1487,"wstrb_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1392,"rdNo",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+1478,"aluout",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1478,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1478,"instr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1478,"memaddr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1478,"rd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->declBit(c+123,"wb_valid_in",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("wb_data_in\206 ");
    tracep->pushNamePrefix("wb_control_data\206 ");
    tracep->declBit(c+790,"regWriteEn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+791,"regWriteDataSel",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+792,"load_valid_diff",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+793,"store_valid_diff",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+794,"rdNo",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+795,"aluout",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,"readData",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+796,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+797,"wstrb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+798,"instr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+799,"memaddr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+800,"rd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_data_out\206 ");
    tracep->pushNamePrefix("wb_control_data\206 ");
    tracep->declBit(c+801,"regWriteEn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+802,"regWriteDataSel",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+803,"load_valid_diff",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+804,"store_valid_diff",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+805,"rdNo",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+806,"aluout",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+807,"readData",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+808,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+809,"wstrb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+810,"instr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+811,"memaddr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+812,"rd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->declBit(c+1371,"wb_ready_go",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1371,"wb_allow_in",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1488,"wb_flush",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("wb_nop\206 ");
    tracep->pushNamePrefix("wb_control_data\206 ");
    tracep->declBit(c+1372,"regWriteEn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1483,"regWriteDataSel",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+1484,"load_valid_diff",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+1485,"store_valid_diff",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+1392,"rdNo",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+1478,"aluout",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1478,"readData",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1478,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1489,"wstrb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1478,"instr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1478,"memaddr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1478,"rd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->declBit(c+813,"wb_valid_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1490,"wb_allow_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+714,"pc_if",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+700,"nextPC",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    {
        const char* __VenumItemNames[]
        = {"PC_ADD4", "PC_BRANCH"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(5, "cpuDefine::PcSel", 2, 2, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+814,"pcsel",5, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+815,"pcAdd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+816,"branchPC",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+817,"branchPC_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+818,"branchPC_temp_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+15,"instr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+819,"instr_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,"instr_if",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+820,"instr_temp_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+821,"instr_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+822,"pc_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+823,"eq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+824,"lt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1491,"overflow",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    {
        const char* __VenumItemNames[]
        = {"I8", "I12", "I14", "I16", "I20", "I21", 
                                "I26"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110"};
        tracep->declDTypeEnum(6, "cpuDefine::Itype", 7, 3, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+825,"itype",6, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+826,"regWriteEn_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+827,"memWriteEn_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+828,"memRead_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+829,"alusel1_id",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+830,"alusel2_id",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+831,"aluctrl_id",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBit(c+828,"regWriteDataSel_id",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+832,"unsignBranchCmp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+833,"reglink",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+834,"is_unsign_imm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+835,"branchPcFromJ",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+836,"is_compare",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+726,"size_mem_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+727,"is_unsign_load_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+837,"load_valid_diff_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+838,"store_valid_diff_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+839,"rd_no_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+733,"rj_no_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+734,"rk_no_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+840,"rj_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1362,"rk_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+841,"rd_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+1326,"regWriteEn_wb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+842,"regWriteData_wb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+843,"immout_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+844,"rj_id_true",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+845,"rd_id_true",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1363,"rj_ex_true",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,"rk_ex_true",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+705,"rd_ex_true",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+846,"rd_no_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+1327,"rd_no_wb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBit(c+847,"regWriteEn_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+848,"aluout_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+849,"pcSrc1_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+850,"memRead_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+851,"regWriteEn_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("ex_control_data_id\206 ");
    tracep->declBit(c+721,"alusel1",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+722,"alusel2",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+723,"aluctrl",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_nop_control_data\206 ");
    tracep->declBit(c+1480,"alusel1",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1481,"alusel2",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+1482,"aluctrl",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_control_data_id\206 ");
    tracep->declBit(c+724,"memWriteEn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+725,"memRead",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+726,"size_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+727,"is_unsign_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_nop_control_data\206 ");
    tracep->declBit(c+1372,"memWriteEn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1372,"memRead",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+1369,"size_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+1372,"is_unsign_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_control_data_id\206 ");
    tracep->declBit(c+728,"regWriteEn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+725,"regWriteDataSel",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+729,"load_valid_diff",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+730,"store_valid_diff",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_nop_control_data\206 ");
    tracep->declBit(c+1372,"regWriteEn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1483,"regWriteDataSel",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+1484,"load_valid_diff",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+1485,"store_valid_diff",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_control_data_ex\206 ");
    tracep->declBit(c+852,"alusel1",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+853,"alusel2",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+854,"aluctrl",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_control_data_ex\206 ");
    tracep->declBit(c+855,"memWriteEn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+856,"memRead",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+857,"size_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+858,"is_unsign_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_control_data_ex\206 ");
    tracep->declBit(c+859,"regWriteEn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+860,"regWriteDataSel",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+861,"load_valid_diff",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+862,"store_valid_diff",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->declBit(c+863,"alusel1_ex",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+864,"alusel2_ex",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+865,"aluctrl_ex",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+866,"aluSrc1_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+867,"aluSrc2_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+868,"pc_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+869,"rj_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+870,"rk_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+871,"rd_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+872,"rj_no_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+873,"rk_no_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+874,"rd_no_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+875,"immout_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+701,"memWriteEn_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+702,"size_mem_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+876,"is_unsign_load_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+877,"regWriteDataSel_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+878,"instr_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("divNeed\206 ");
    tracep->declBit(c+1315,"aclk",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1316,"aresetn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+703,"memaddr_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+879,"aluout_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+880,"alu_ready_go",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+881,"wstrb_mem_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+882,"is_unsign_load_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+883,"memRead_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+884,"memWriteEn_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+885,"instr_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("wb_control_data_mem\206 ");
    tracep->declBit(c+790,"regWriteEn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+791,"regWriteDataSel",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+792,"load_valid_diff",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+793,"store_valid_diff",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_control_data_mem\206 ");
    tracep->declBit(c+886,"memWriteEn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+887,"memRead",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+888,"size_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+889,"is_unsign_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+890,"pc_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+891,"memaddr_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+892,"rd_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+893,"readData_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+894,"readData_temp_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+126,"readData_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+127,"readData",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("wb_control_data_wb\206 ");
    tracep->declBit(c+895,"regWriteEn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+896,"regWriteDataSel",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+897,"load_valid_diff",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+898,"store_valid_diff",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+899,"aluout_wb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+900,"readData_wb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+901,"regWriteDataSel_wb",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+902,"pc_wb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+903,"wstrb_wb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+713,"instr_wb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+904,"memaddr_wb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+905,"load_valid_diff_wb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+906,"store_valid_diff_wb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+907,"rd_wb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+1492,"excp_flush",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1493,"ertn_flush",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+1494,"ws_csr_ecode",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+1495,"tlbfill_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+1496,"rand_index",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBit(c+1497,"cnt_inst_diff",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+1498,"timer_64_diff",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBus(c+905,"inst_ld_en_diff",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+904,"ld_paddr_diff",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+904,"ld_vaddr_diff",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+906,"inst_st_en_diff",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+904,"st_paddr_diff",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+904,"st_vaddr_diff",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+907,"st_data_diff",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1500,"csr_rstat_en_diff",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1501,"csr_data_diff",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+813,"inst_valid_diff",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+908,"cmt_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+909,"cmt_cnt_inst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declQuad(c+910,"cmt_timer_64",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declBus(c+912,"cmt_inst_ld_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+913,"cmt_ld_paddr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+914,"cmt_ld_vaddr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+915,"cmt_inst_st_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+916,"cmt_st_paddr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+917,"cmt_st_vaddr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+918,"cmt_st_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+919,"cmt_csr_rstat_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+920,"cmt_csr_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+921,"cmt_wen",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+922,"cmt_wdest",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+923,"cmt_wdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+924,"cmt_pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+925,"cmt_inst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+926,"cmt_excp_flush",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+927,"cmt_ertn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+928,"cmt_csr_ecode",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+929,"cmt_tlbfill_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+930,"cmt_rand_index",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBit(c+931,"trap",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+932,"trap_code",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declQuad(c+933,"cycleCnt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declQuad(c+935,"instrCnt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+937+i*1,"regs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 31,0);
    }
    tracep->declBus(c+1502,"csr_crmd_diff_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1503,"csr_prmd_diff_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1504,"csr_ectl_diff_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1505,"csr_estat_diff_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1506,"csr_era_diff_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1507,"csr_badv_diff_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1508,"csr_eentry_diff_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1509,"csr_tlbidx_diff_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1510,"csr_tlbehi_diff_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1511,"csr_tlbelo0_diff_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1512,"csr_tlbelo1_diff_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1513,"csr_asid_diff_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1514,"csr_save0_diff_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1515,"csr_save1_diff_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1516,"csr_save2_diff_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1517,"csr_save3_diff_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1518,"csr_tid_diff_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1519,"csr_tcfg_diff_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1520,"csr_tval_diff_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1521,"csr_ticlr_diff_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1522,"csr_llbctl_diff_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1523,"csr_tlbrentry_diff_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1524,"csr_dmw0_diff_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1525,"csr_dmw1_diff_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1526,"csr_pgdl_diff_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1527,"csr_pgdh_diff_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("DifftestCSRRegState ");
    tracep->declBit(c+1315,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1386,"coreid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declQuad(c+1528,"crmd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+1530,"prmd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+1532,"euen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+1534,"ecfg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+1536,"estat",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+1538,"era",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+1540,"badv",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+1542,"eentry",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+1544,"tlbidx",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+1546,"tlbehi",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+1548,"tlbelo0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+1550,"tlbelo1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+1552,"asid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+1554,"pgdl",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+1556,"pgdh",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+1558,"save0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+1560,"save1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+1562,"save2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+1564,"save3",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+1566,"tid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+1568,"tcfg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+1570,"tval",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+1572,"ticlr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+1574,"llbctl",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+1576,"tlbrentry",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+1578,"dmw0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+1580,"dmw1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DifftestExcpEvent ");
    tracep->declBit(c+1315,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1386,"coreid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+926,"excp_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+927,"eret",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1582,"intrNo",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+969,"cause",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declQuad(c+970,"exceptionPC",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBus(c+925,"exceptionInst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DifftestGRegState ");
    tracep->declBit(c+1315,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1386,"coreid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declQuad(c+1532,"gpr_0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+972,"gpr_1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+974,"gpr_2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+976,"gpr_3",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+978,"gpr_4",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+980,"gpr_5",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+982,"gpr_6",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+984,"gpr_7",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+986,"gpr_8",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+988,"gpr_9",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+990,"gpr_10",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+992,"gpr_11",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+994,"gpr_12",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+996,"gpr_13",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+998,"gpr_14",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+1000,"gpr_15",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+1002,"gpr_16",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+1004,"gpr_17",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+1006,"gpr_18",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+1008,"gpr_19",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+1010,"gpr_20",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+1012,"gpr_21",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+1014,"gpr_22",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+1016,"gpr_23",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+1018,"gpr_24",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+1020,"gpr_25",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+1022,"gpr_26",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+1024,"gpr_27",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+1026,"gpr_28",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+1028,"gpr_29",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+1030,"gpr_30",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+1032,"gpr_31",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DifftestInstrCommit ");
    tracep->declBit(c+1315,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1386,"coreid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1386,"index",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+908,"valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+970,"pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBus(c+925,"instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1372,"skip",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+929,"is_TLBFILL",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+930,"TLBFILL_index",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+909,"is_CNTinst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+910,"timer_64_value",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBit(c+921,"wen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+922,"wdest",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declQuad(c+1034,"wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBit(c+919,"csr_rstat",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+920,"csr_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DifftestLoadEvent ");
    tracep->declBit(c+1315,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1386,"coreid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1386,"index",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+912,"valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declQuad(c+1036,"paddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+1038,"vaddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DifftestStoreEvent ");
    tracep->declBit(c+1315,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1386,"coreid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1386,"index",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+915,"valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declQuad(c+1040,"storePAddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+1042,"storeVAddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+1044,"storeData",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DifftestTrapEvent ");
    tracep->declBit(c+1315,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1386,"coreid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+931,"valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1046,"code",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declQuad(c+970,"pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+933,"cycleCnt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+935,"instrCnt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("If ");
    tracep->declBus(c+1477,"reset_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+1371,"isPc",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
    tracep->declBit(c+1315,"aclk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1316,"aresetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+113,"valid_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+700,"data_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+115,"ready_go",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1477,"nop_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+114,"allow_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1372,"flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+116,"valid_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+714,"data_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+112,"allow_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1047,"pipeline_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+714,"pipeline_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+866,"aluSrc1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+867,"aluSrc2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+865,"aluctrl",3,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->pushNamePrefix("divNeed\206 ");
    tracep->declBit(c+1315,"aclk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1316,"aresetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+879,"aluout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1491,"overflow",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+703,"memaddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+880,"ready_go",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1048,"divUnsigned",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1049,"divEn",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1050,"quotient",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1051,"remainder",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+1052,"completed",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+1053,"adder_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1054,"slt_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1055,"sltu_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+866,"adder_a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1056,"adder_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+1057,"adder_cout",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1058,"adder_cin",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declQuad(c+1059,"mul_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->pushNamePrefix("myDiv ");
    tracep->declBus(c+1367,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1583,"COUNT_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+1315,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1349,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1049,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1061,"is_signed",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+866,"dividend",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+867,"divisor",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1050,"quotient",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1051,"remainder",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1052,"complete",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1062,"quotient_u",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1063,"remainder_u",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1064,"dividend_abs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1065,"divisor_abs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1066,"dividend_sign",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1067,"divisor_sign",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1068,"quotient_sign",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1066,"remainder_sign",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1069,"quotient_signed",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1070,"remainder_signed",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1071,"dividend_u",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1072,"divisor_u",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1073,"dividend_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declQuad(c+1074,"minuend",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 32,0);
    tracep->declBus(c+1076,"count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+1584,"count_init",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declQuad(c+1077,"minuend_shifted",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 32,0);
    tracep->declQuad(c+1079,"minuend_next",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 32,0);
    tracep->declBus(c+1081,"dividend_next",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declQuad(c+1082,"difference",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 32,0);
    tracep->declBit(c+1084,"can_subtract",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("signed_to_abs_dividend ");
    tracep->declBus(c+1367,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+866,"num",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1064,"abs_value",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1066,"sign",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("signed_to_abs_divisor ");
    tracep->declBus(c+1367,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+867,"num",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1065,"abs_value",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1067,"sign",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("comp ");
    tracep->declBus(c+844,"rj",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+845,"rd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+832,"unsign",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+823,"eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+824,"lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("control ");
    tracep->declBus(c+821,"instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+823,"eq",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+824,"lt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("pcsel\207 ");
    tracep->declBus(c+814,"pcsel_bits",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+814,"pcsel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("itype\207 ");
    tracep->declBus(c+825,"itype_bits",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+825,"itype",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->declBit(c+826,"regWriteEn",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+827,"memWriteEn",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+828,"memRead",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("alusel1\207 ");
    tracep->declBus(c+829,"alusel1_bit",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+829,"alusel1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("alusel2\207 ");
    tracep->declBus(c+830,"alusel2_bit",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+830,"alusel2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("aluctrl\207 ");
    tracep->declBus(c+831,"aluctrl_bit",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+831,"aluctrl",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regWriteDataSel\207 ");
    tracep->declBus(c+828,"regWriteDataSel_bit",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+828,"regWriteDataSel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->declBit(c+832,"unsignBranchCmp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+833,"reglink",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+834,"is_unsign_imm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+835,"branchPcFromJ",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+836,"is_compare",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+726,"size_mem",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+727,"is_unsign_load",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+837,"load_valid_diff",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+838,"store_valid_diff",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+1085,"is_3R_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1086,"is_2RI8_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1087,"is_2RI12_TYPE_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1088,"is_U_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1089,"is_2RI14_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1090,"is_2RI12_TYPE_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1091,"is_BRANCH_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1092,"is_ADD_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1093,"is_SUB_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1094,"is_SLT_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1095,"is_SLTU_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1096,"is_NOR_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1097,"is_AND_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1098,"is_OR_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1099,"is_XOR_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1100,"is_SLL_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1101,"is_SRL_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1102,"is_SRA_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1103,"is_MUL_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1104,"is_MULH_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1105,"is_MULHU_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1106,"is_DIV_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1107,"is_MOD_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1108,"is_DIVU_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1109,"is_MODU_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1110,"is_SLLI_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1111,"is_SRLI_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1112,"is_SRAI_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1113,"is_SLTI_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1114,"is_SLTUI_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1115,"is_ADDI_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1116,"is_ANDI_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1117,"is_ORI_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1118,"is_XORI_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1119,"UTYPR_low",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+1120,"is_LUI_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1121,"is_PCADDU12I_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1122,"is_LL_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1123,"is_SC_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1124,"is_LD_B_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1125,"is_LD_H_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1126,"is_LD_W_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1127,"is_ST_B_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1128,"is_ST_H_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1129,"is_ST_W_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1130,"is_LD_BU_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1131,"is_LD_HU_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1132,"BRANCH_TYPE_low",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+835,"is_JIRL_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1133,"is_B_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+833,"is_BL_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1134,"is_BEQ_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1135,"is_BNE_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1136,"is_BLT_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1137,"is_BGE_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1138,"is_BLTU_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1139,"is_BGEU_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1140,"is_break",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1141,"is_syscall",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1142,"is_csrrd",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1143,"is_csrwd",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1144,"is_csrxchg",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1145,"is_nop",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1146,"is_reg_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1147,"is_shamt_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1148,"is_regimm_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1371,"a",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1149,"is_u_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+828,"is_load_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+827,"is_store_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1150,"is_b_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+836,"is_branch_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+835,"is_j_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1151,"is_PC_ADD4",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1152,"is_PC_BRANCH",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1153,"is_2RI16_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1150,"is_I26_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1154,"is_ALU_SEL_RJ",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+829,"is_ALU_SEL_PC",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1146,"is_ALU_SEL_RK",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+830,"is_ALU_SEL_IMMOUT",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1155,"is_OTHER_ALU_ADD_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+833,"is_bl_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex ");
    tracep->declBus(c+1585,"reset_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+1372,"isPc",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
    tracep->declBit(c+1315,"aclk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1316,"aresetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+720,"valid_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("data_in\206 ");
    tracep->pushNamePrefix("ex_control_data\206 ");
    tracep->declBit(c+721,"alusel1",1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+722,"alusel2",2,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+723,"aluctrl",3,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_control_data\206 ");
    tracep->declBit(c+724,"memWriteEn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+725,"memRead",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+726,"size_mem",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+727,"is_unsign_load",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_control_data\206 ");
    tracep->declBit(c+728,"regWriteEn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+725,"regWriteDataSel",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+729,"load_valid_diff",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+730,"store_valid_diff",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+731,"rj",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1361,"rk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+732,"rd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+733,"rjNo",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+734,"rkNo",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+735,"rdNo",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+736,"immout",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+737,"pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+738,"instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->declBit(c+119,"ready_go",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("nop_data\206 ");
    tracep->pushNamePrefix("ex_control_data\206 ");
    tracep->declBit(c+1480,"alusel1",1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1481,"alusel2",2,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1482,"aluctrl",3,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_control_data\206 ");
    tracep->declBit(c+1372,"memWriteEn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1372,"memRead",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1369,"size_mem",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+1372,"is_unsign_load",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_control_data\206 ");
    tracep->declBit(c+1372,"regWriteEn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1483,"regWriteDataSel",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1484,"load_valid_diff",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1485,"store_valid_diff",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+1478,"rj",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1478,"rk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1478,"rd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1392,"rjNo",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+1392,"rkNo",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+1392,"rdNo",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+1478,"immout",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1478,"pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1478,"instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->declBit(c+120,"allow_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+759,"flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+121,"valid_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("data_out\206 ");
    tracep->pushNamePrefix("ex_control_data\206 ");
    tracep->declBit(c+739,"alusel1",1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+740,"alusel2",2,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+741,"aluctrl",3,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_control_data\206 ");
    tracep->declBit(c+742,"memWriteEn",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+743,"memRead",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+744,"size_mem",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+745,"is_unsign_load",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_control_data\206 ");
    tracep->declBit(c+746,"regWriteEn",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+747,"regWriteDataSel",4,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+748,"load_valid_diff",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+749,"store_valid_diff",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+750,"rj",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+751,"rk",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+752,"rd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+753,"rjNo",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+754,"rkNo",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+755,"rdNo",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+756,"immout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+757,"pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+758,"instr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->declBit(c+118,"allow_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1156,"pipeline_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("pipeline_data\206 ");
    tracep->pushNamePrefix("ex_control_data\206 ");
    tracep->declBit(c+1157,"alusel1",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1158,"alusel2",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+1159,"aluctrl",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_control_data\206 ");
    tracep->declBit(c+1160,"memWriteEn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1161,"memRead",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+1162,"size_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+1163,"is_unsign_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_control_data\206 ");
    tracep->declBit(c+1164,"regWriteEn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1165,"regWriteDataSel",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+1166,"load_valid_diff",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+1167,"store_valid_diff",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+1168,"rj",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1169,"rk",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1170,"rd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1171,"rjNo",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+1172,"rkNo",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+1173,"rdNo",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+1174,"immout",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1175,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1176,"instr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("extend_memData_u ");
    tracep->declBus(c+881,"wstrb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+882,"is_unsign_load",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+15,"rdata_mem",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+127,"readData",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("forwarding ");
    tracep->declBus(c+733,"rj_no_id",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+839,"rd_no_id",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+872,"rj_no_ex",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+873,"rk_no_ex",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+874,"rd_no_ex",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+840,"rj_id",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+841,"rd_id",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+869,"rj_ex",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+870,"rk_ex",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+871,"rd_ex",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+847,"regWriteEn_mem",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+848,"aluout",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+846,"rd_no_mem",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+1326,"regWriteEn_wb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1327,"rd_no_wb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+842,"regWriteData",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+844,"rj_id_true",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+845,"rd_id_true",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1363,"rj_ex_true",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1364,"rk_ex_true",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+705,"rd_ex_true",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1177,"MEM_forward_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1178,"WB_forward_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("hazard_detect ");
    tracep->declBus(c+874,"rd_no_ex",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+850,"memRead_ex",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+851,"regWriteEn_ex",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+836,"is_compare",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+814,"pcsel",5,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+733,"rj_no_id",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+734,"rk_no_id",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+839,"rd_no_id",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+846,"rd_no_mem",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+829,"alusel1_id",1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+830,"alusel2_id",2,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+883,"memRead_mem",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+719,"IDFlush",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+718,"IDWriteEn",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+759,"EXFlush",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1179,"hazard_ex",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1180,"hazard_mem",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1181,"hazard_load_use",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1182,"stall",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id ");
    tracep->declBus(c+1585,"reset_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+1372,"isPc",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
    tracep->declBit(c+1315,"aclk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1316,"aresetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+116,"valid_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("data_in\206 ");
    tracep->declBus(c+715,"pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+117,"instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->declBit(c+718,"ready_go",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("nop_data\206 ");
    tracep->declBus(c+1478,"pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1479,"instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->declBit(c+118,"allow_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+719,"flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+720,"valid_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("data_out\206 ");
    tracep->declBus(c+716,"pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+717,"instr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->declBit(c+114,"allow_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1183,"pipeline_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("pipeline_data\206 ");
    tracep->declBus(c+1184,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1185,"instr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("immgen ");
    tracep->declBus(c+821,"instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+825,"itype",6,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+834,"is_unsign",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+843,"immout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1367,"width",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem ");
    tracep->declBus(c+1585,"reset_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+1372,"isPc",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
    tracep->declBit(c+1315,"aclk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1316,"aresetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+121,"valid_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("data_in\206 ");
    tracep->pushNamePrefix("mem_control_data\206 ");
    tracep->declBit(c+760,"memWriteEn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+761,"memRead",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+762,"size_mem",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+763,"is_unsign_load",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_control_data\206 ");
    tracep->declBit(c+764,"regWriteEn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+765,"regWriteDataSel",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+766,"load_valid_diff",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+767,"store_valid_diff",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+768,"wstrb_mem",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+769,"rdNo",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+770,"aluout",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+771,"pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+772,"instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+773,"memaddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+774,"rd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->declBit(c+122,"ready_go",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("nop_data\206 ");
    tracep->pushNamePrefix("mem_control_data\206 ");
    tracep->declBit(c+1372,"memWriteEn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1372,"memRead",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1369,"size_mem",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+1372,"is_unsign_load",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_control_data\206 ");
    tracep->declBit(c+1372,"regWriteEn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1483,"regWriteDataSel",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1484,"load_valid_diff",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1485,"store_valid_diff",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+1487,"wstrb_mem",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1392,"rdNo",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+1478,"aluout",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1478,"pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1478,"instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1478,"memaddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1478,"rd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->declBit(c+1371,"allow_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1486,"flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+123,"valid_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("data_out\206 ");
    tracep->pushNamePrefix("mem_control_data\206 ");
    tracep->declBit(c+775,"memWriteEn",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+776,"memRead",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+777,"size_mem",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+778,"is_unsign_load",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_control_data\206 ");
    tracep->declBit(c+779,"regWriteEn",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+780,"regWriteDataSel",4,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+781,"load_valid_diff",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+782,"store_valid_diff",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+783,"wstrb_mem",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+784,"rdNo",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+785,"aluout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+786,"pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+787,"instr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+788,"memaddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+789,"rd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->declBit(c+120,"allow_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1186,"pipeline_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("pipeline_data\206 ");
    tracep->pushNamePrefix("mem_control_data\206 ");
    tracep->declBit(c+1187,"memWriteEn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1188,"memRead",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+1189,"size_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+1190,"is_unsign_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_control_data\206 ");
    tracep->declBit(c+1191,"regWriteEn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1192,"regWriteDataSel",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+1193,"load_valid_diff",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+1194,"store_valid_diff",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+1195,"wstrb_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1196,"rdNo",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+1197,"aluout",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1198,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1199,"instr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1200,"memaddr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1201,"rd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rf ");
    tracep->declBit(c+1315,"aclk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1316,"aresetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+839,"rd_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+733,"rj_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+734,"rk_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+1327,"rd_wb_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+1326,"regWriteEn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+842,"regWriteData",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+840,"rj",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1362,"rk",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+841,"rd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1202+i*1,"rf",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb ");
    tracep->declBus(c+1585,"reset_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+1372,"isPc",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
    tracep->declBit(c+1315,"aclk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1316,"aresetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+123,"valid_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("data_in\206 ");
    tracep->pushNamePrefix("wb_control_data\206 ");
    tracep->declBit(c+790,"regWriteEn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+791,"regWriteDataSel",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+792,"load_valid_diff",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+793,"store_valid_diff",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+794,"rdNo",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+795,"aluout",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+124,"readData",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+796,"pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+797,"wstrb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+798,"instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+799,"memaddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+800,"rd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->declBit(c+1371,"ready_go",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("nop_data\206 ");
    tracep->pushNamePrefix("wb_control_data\206 ");
    tracep->declBit(c+1372,"regWriteEn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1483,"regWriteDataSel",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1484,"load_valid_diff",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1485,"store_valid_diff",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+1392,"rdNo",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+1478,"aluout",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1478,"readData",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1478,"pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1489,"wstrb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1478,"instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1478,"memaddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1478,"rd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->declBit(c+1371,"allow_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1488,"flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+813,"valid_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("data_out\206 ");
    tracep->pushNamePrefix("wb_control_data\206 ");
    tracep->declBit(c+801,"regWriteEn",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+802,"regWriteDataSel",4,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+803,"load_valid_diff",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+804,"store_valid_diff",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+805,"rdNo",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+806,"aluout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+807,"readData",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+808,"pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+809,"wstrb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+810,"instr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+811,"memaddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+812,"rd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->declBit(c+1371,"allow_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+813,"pipeline_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("pipeline_data\206 ");
    tracep->pushNamePrefix("wb_control_data\206 ");
    tracep->declBit(c+1234,"regWriteEn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1235,"regWriteDataSel",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+1236,"load_valid_diff",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+1237,"store_valid_diff",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+1238,"rdNo",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+1239,"aluout",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1240,"readData",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1241,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1242,"wstrb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1243,"instr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1244,"memaddr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1245,"rd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("delay ");
    tracep->declBus(c+1367,"BUS_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1367,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1367,"CPU_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+1317,"enable_delay",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1318,"random_seed",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 22,0);
    tracep->declBus(c+149,"s_araddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1369,"s_arburst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1368,"s_arcache",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1368,"s_arid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1368,"s_arlen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1369,"s_arlock",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1370,"s_arprot",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+164,"s_arready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+150,"s_arsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+20,"s_arvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+149,"s_awaddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1369,"s_awburst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1368,"s_awcache",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1368,"s_awid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1368,"s_awlen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1369,"s_awlock",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1370,"s_awprot",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+161,"s_awready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+150,"s_awsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+17,"s_awvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+155,"s_bid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+19,"s_bready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+156,"s_bresp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+163,"s_bvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1315,"aclk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1316,"aresetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+15,"s_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+158,"s_rid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+160,"s_rlast",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+21,"s_rready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+159,"s_rresp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+165,"s_rvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+152,"s_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1368,"s_wid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1371,"s_wlast",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+162,"s_wready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+153,"s_wstrb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+18,"s_wvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+149,"m_araddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1369,"m_arburst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1368,"m_arcache",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1368,"m_arid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1368,"m_arlen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1369,"m_arlock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1370,"m_arprot",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+14,"m_arready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+150,"m_arsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+157,"m_arvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+149,"m_awaddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1369,"m_awburst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1368,"m_awcache",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1368,"m_awid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1368,"m_awlen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1369,"m_awlock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1370,"m_awprot",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+11,"m_awready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+150,"m_awsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+151,"m_awvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+155,"m_bid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1371,"m_bready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+156,"m_bresp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+13,"m_bvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+15,"m_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+158,"m_rid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+160,"m_rlast",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1371,"m_rready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+159,"m_rresp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+16,"m_rvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+152,"m_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1368,"m_wid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1371,"m_wlast",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+12,"m_wready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+153,"m_wstrb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+154,"m_wvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1246,"mask_ar",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1247,"mask_ar_disable",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+128,"mask_ar_ok",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1248,"mask_ar_raw",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1249,"mask_aw",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1250,"mask_aw_disable",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+129,"mask_aw_ok",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1251,"mask_aw_raw",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1252,"mask_b",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1252,"mask_b_raw",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1253,"mask_no_delay",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1254,"mask_r",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1254,"mask_r_raw",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1255,"mask_random",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 22,0);
    tracep->declBus(c+1256,"mask_random_next",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 22,0);
    tracep->declBit(c+1349,"mask_reset",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1257,"mask_short_delay",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1258,"mask_w",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1259,"mask_w_disable",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+130,"mask_w_ok",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1260,"mask_w_raw",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram_axi_ram ");
    tracep->declBus(c+1367,"BUS_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1367,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1367,"CPU_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+1315,"aclk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1316,"aresetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1320,"ram_raddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1321,"ram_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1319,"ram_ren",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1323,"ram_waddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1324,"ram_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1322,"ram_wen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+149,"m_araddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1369,"m_arburst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1368,"m_arcache",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1368,"m_arid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1368,"m_arlen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1369,"m_arlock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1370,"m_arprot",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+170,"m_arready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+150,"m_arsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+25,"m_arvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+149,"m_awaddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1369,"m_awburst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1368,"m_awcache",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1368,"m_awid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1368,"m_awlen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1369,"m_awlock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1370,"m_awprot",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+166,"m_awready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+150,"m_awsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+22,"m_awvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+168,"m_bid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+24,"m_bready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1369,"m_bresp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+169,"m_bvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1321,"m_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+171,"m_rid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+172,"m_rlast",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+26,"m_rready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1369,"m_rresp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+173,"m_rvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+152,"m_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1368,"m_wid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1371,"m_wlast",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+167,"m_wready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+153,"m_wstrb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+23,"m_wvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1464,"ADDR_INCR_BASE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declQuad(c+1261,"ram_r_a_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 44,0);
    tracep->declBus(c+1263,"ram_r_a_data_araddr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1320,"ram_r_a_data_araddr_fixed",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1264,"ram_r_a_data_araddr_incr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1265,"ram_r_a_data_araddr_next",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1365,"ram_r_a_data_araddr_update",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1266,"ram_r_a_data_araddr_wrap",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1267,"ram_r_a_data_arburst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+1268,"ram_r_a_data_arburst_fixed",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1269,"ram_r_a_data_arburst_incr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1270,"ram_r_a_data_arburst_wrap",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1271,"ram_r_a_data_arid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1272,"ram_r_a_data_arlen",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+1273,"ram_r_a_data_arlen_last",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1274,"ram_r_a_data_arsize",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+131,"ram_r_a_data_push",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1275,"ram_r_a_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+132,"ram_r_a_pop",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+133,"ram_r_a_push",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+611,"ram_r_a_push_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 44,0);
    tracep->declQuad(c+1276,"ram_r_a_queue_datas",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 44,0);
    tracep->declBus(c+1278,"ram_r_a_queue_datas_araddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1279,"ram_r_a_queue_datas_arburst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1280,"ram_r_a_queue_datas_arid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1281,"ram_r_a_queue_datas_arlen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1282,"ram_r_a_queue_datas_arsize",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+170,"ram_r_a_queue_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1275,"ram_r_a_queue_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+134,"ram_r_a_queue_pop",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+135,"ram_r_a_queue_push",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1275,"ram_r_a_queue_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1283,"ram_r_a_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+1320,"ram_r_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+136,"ram_r_allow_out",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1321,"ram_r_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1319,"ram_r_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1284,"ram_r_rcur",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+1366,"ram_r_rcur_reset",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+171,"ram_r_rid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+172,"ram_r_rlast",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+173,"ram_r_rvalid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declQuad(c+1285,"ram_w_a_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 44,0);
    tracep->declBus(c+1287,"ram_w_a_data_awaddr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1323,"ram_w_a_data_awaddr_fixed",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1288,"ram_w_a_data_awaddr_incr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1289,"ram_w_a_data_awaddr_next",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+137,"ram_w_a_data_awaddr_update",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1290,"ram_w_a_data_awaddr_wrap",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1291,"ram_w_a_data_awburst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+1292,"ram_w_a_data_awburst_fixed",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1293,"ram_w_a_data_awburst_incr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1294,"ram_w_a_data_awburst_wrap",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1295,"ram_w_a_data_awid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1296,"ram_w_a_data_awlen",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1297,"ram_w_a_data_awsize",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+138,"ram_w_a_data_push",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1298,"ram_w_a_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+139,"ram_w_a_pop",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+140,"ram_w_a_push",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+611,"ram_w_a_push_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 44,0);
    tracep->declQuad(c+1299,"ram_w_a_queue_datas",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 44,0);
    tracep->declBus(c+1301,"ram_w_a_queue_datas_awaddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1302,"ram_w_a_queue_datas_awburst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1303,"ram_w_a_queue_datas_awid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1304,"ram_w_a_queue_datas_awlen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1305,"ram_w_a_queue_datas_awsize",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+166,"ram_w_a_queue_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1298,"ram_w_a_queue_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+141,"ram_w_a_queue_pop",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+142,"ram_w_a_queue_push",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1298,"ram_w_a_queue_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1306,"ram_w_a_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+1323,"ram_w_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1307,"ram_w_allow_out",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+168,"ram_w_b_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+143,"ram_w_b_data_push",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1308,"ram_w_b_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+144,"ram_w_b_pop",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+139,"ram_w_b_push",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1309,"ram_w_b_queue_datas",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+1310,"ram_w_b_queue_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1308,"ram_w_b_queue_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+145,"ram_w_b_queue_pop",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+146,"ram_w_b_queue_push",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1308,"ram_w_b_queue_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+169,"ram_w_b_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+147,"ram_w_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+148,"ram_w_go",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1311,"ram_w_strb",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1312,"ram_w_wdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+1313,"ram_w_wlast",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+1311,"ram_w_wstrb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+1314,"ram_w_wvalid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vsimu_top___024root__trace_init_sub__TOP__cpuDefine__0(Vsimu_top___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root__trace_init_sub__TOP__cpuDefine__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1586,"rfNum",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1587,"instrNum",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1586,"instrLen",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1586,"addrLen",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1389,"U_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1588,"BRANCH_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+1589,"ADD_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declBus(c+1590,"SUB_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declBus(c+1591,"SLT_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declBus(c+1592,"SLTU_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declBus(c+1593,"NOR_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declBus(c+1594,"AND_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declBus(c+1595,"OR_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declBus(c+1596,"XOR_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declBus(c+1597,"SLL_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declBus(c+1598,"SRL_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declBus(c+1599,"SRA_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declBus(c+1600,"MUL_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declBus(c+1601,"MULH_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declBus(c+1602,"MULHU_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declBus(c+1603,"DIV_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declBus(c+1604,"MOD_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declBus(c+1605,"DIVU_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declBus(c+1606,"MODU_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declBus(c+1607,"SLLI_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declBus(c+1608,"SRLI_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declBus(c+1609,"SRAI_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
    tracep->declBus(c+1370,"SLTI_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1426,"SLTUI_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1427,"ADDI_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1430,"ANDI_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1431,"ORI_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1610,"XORI_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1427,"LUI_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1431,"PCADDU12I_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBit(c+1372,"LL_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
    tracep->declBit(c+1371,"SC_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
    tracep->declBus(c+1368,"LD_B_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1389,"LD_H_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1390,"LD_W_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1417,"ST_B_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1418,"ST_H_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1419,"ST_W_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1391,"LD_BU_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1421,"LD_HU_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1416,"JIRL_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1417,"B_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1418,"BL_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1419,"BEQ_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1420,"BNE_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1391,"BLT_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1421,"BGE_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1422,"BLTU_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1611,"BGEU_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
}

VL_ATTR_COLD void Vsimu_top___024root__trace_init_top(Vsimu_top___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root__trace_init_top\n"); );
    // Body
    Vsimu_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("cpuDefine ");
    Vsimu_top___024root__trace_init_sub__TOP__cpuDefine__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vsimu_top___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vsimu_top___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vsimu_top___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vsimu_top___024root__trace_register(Vsimu_top___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vsimu_top___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vsimu_top___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vsimu_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vsimu_top___024root__trace_full_sub_0(Vsimu_top___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vsimu_top___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root__trace_full_top_0\n"); );
    // Init
    Vsimu_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsimu_top___024root*>(voidSelf);
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vsimu_top___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

extern const VlWide<8>/*255:0*/ Vsimu_top__ConstPool__CONST_h3cc724c7_0;

VL_ATTR_COLD void Vsimu_top___024root__trace_full_sub_0(Vsimu_top___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[0]),2);
    bufp->fullCData(oldp+2,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[1]),2);
    bufp->fullCData(oldp+3,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[2]),2);
    bufp->fullCData(oldp+4,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[3]),2);
    bufp->fullCData(oldp+5,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[4]),2);
    bufp->fullCData(oldp+6,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[0]),2);
    bufp->fullCData(oldp+7,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[1]),2);
    bufp->fullCData(oldp+8,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[2]),2);
    bufp->fullCData(oldp+9,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[3]),2);
    bufp->fullCData(oldp+10,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[4]),2);
    bufp->fullBit(oldp+11,(((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awready) 
                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_hb251d2f0__0))));
    bufp->fullBit(oldp+12,(((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wready) 
                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h4bbe5f71__0))));
    bufp->fullBit(oldp+13,(((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_bvalid) 
                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h765eb7cb__0))));
    bufp->fullBit(oldp+14,(((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arready) 
                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h34d16b8e__0))));
    bufp->fullIData(oldp+15,(vlSelf->simu_top__DOT__soc__DOT__m0_rdata),32);
    bufp->fullBit(oldp+16,(((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rvalid) 
                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h76518f96__0))));
    bufp->fullBit(oldp+17,(vlSelf->simu_top__DOT__soc__DOT__m0_awvalid));
    bufp->fullBit(oldp+18,(vlSelf->simu_top__DOT__soc__DOT__m0_wvalid));
    bufp->fullBit(oldp+19,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h765eb7cb__0));
    bufp->fullBit(oldp+20,(vlSelf->simu_top__DOT__soc__DOT__m0_arvalid));
    bufp->fullBit(oldp+21,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h76518f96__0));
    bufp->fullBit(oldp+22,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid))));
    bufp->fullBit(oldp+23,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid))));
    bufp->fullBit(oldp+24,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready))));
    bufp->fullBit(oldp+25,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid))));
    bufp->fullBit(oldp+26,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready))));
    bufp->fullBit(oldp+27,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                  >> 3U))));
    bufp->fullBit(oldp+28,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
                                  >> 3U))));
    bufp->fullBit(oldp+29,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                  >> 3U))));
    bufp->fullBit(oldp+30,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                  >> 3U))));
    bufp->fullBit(oldp+31,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                  >> 3U))));
    bufp->fullBit(oldp+32,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                  >> 2U))));
    bufp->fullBit(oldp+33,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
                                  >> 2U))));
    bufp->fullBit(oldp+34,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                  >> 2U))));
    bufp->fullBit(oldp+35,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                  >> 2U))));
    bufp->fullBit(oldp+36,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                  >> 2U))));
    bufp->fullBit(oldp+37,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en));
    bufp->fullCData(oldp+38,(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen),4);
    bufp->fullBit(oldp+39,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_cpu));
    bufp->fullBit(oldp+40,((((8U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm)) 
                             & ((IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_rlast) 
                                & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                   >> 2U))) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                                >> 2U) 
                                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_bvalid)))));
    bufp->fullCData(oldp+41,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm_nxt),4);
    bufp->fullBit(oldp+42,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NANDtag));
    bufp->fullBit(oldp+43,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                  >> 1U))));
    bufp->fullBit(oldp+44,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
                                  >> 1U))));
    bufp->fullBit(oldp+45,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                  >> 1U))));
    bufp->fullBit(oldp+46,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                  >> 1U))));
    bufp->fullBit(oldp+47,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                  >> 1U))));
    bufp->fullBit(oldp+48,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                  >> 4U))));
    bufp->fullBit(oldp+49,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
                                  >> 4U))));
    bufp->fullBit(oldp+50,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                  >> 4U))));
    bufp->fullBit(oldp+51,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                  >> 4U))));
    bufp->fullBit(oldp+52,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                  >> 4U))));
    bufp->fullIData(oldp+53,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[0]),32);
    bufp->fullIData(oldp+54,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[1]),32);
    bufp->fullIData(oldp+55,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[2]),32);
    bufp->fullIData(oldp+56,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[3]),32);
    bufp->fullIData(oldp+57,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[4]),32);
    bufp->fullCData(oldp+58,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid),5);
    bufp->fullCData(oldp+59,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid),5);
    bufp->fullCData(oldp+60,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready),5);
    bufp->fullCData(oldp+61,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid),5);
    bufp->fullCData(oldp+62,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready),5);
    bufp->fullBit(oldp+63,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_dir_ins));
    bufp->fullBit(oldp+64,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_dir_del));
    bufp->fullBit(oldp+65,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_dir_ins));
    bufp->fullBit(oldp+66,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_empty)) 
                            & ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rvalid) 
                               & ((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_rlast) 
                                  & (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT____VdfgTmp_h76518f96__0))))));
    bufp->fullBit(oldp+67,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen_last)) 
                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en))));
    bufp->fullBit(oldp+68,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_push));
    bufp->fullBit(oldp+69,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop));
    bufp->fullBit(oldp+70,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push));
    bufp->fullBit(oldp+71,(((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid) 
                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop))));
    bufp->fullBit(oldp+72,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_push));
    bufp->fullBit(oldp+73,((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rvalid)) 
                                  | ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                     >> 3U)))));
    bufp->fullBit(oldp+74,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wlast)) 
                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en))));
    bufp->fullBit(oldp+75,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_push));
    bufp->fullBit(oldp+76,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop));
    bufp->fullBit(oldp+77,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_push));
    bufp->fullBit(oldp+78,(((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid) 
                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop))));
    bufp->fullBit(oldp+79,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_push));
    bufp->fullBit(oldp+80,(((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) 
                            & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid)) 
                               | (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop)))));
    bufp->fullBit(oldp+81,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop));
    bufp->fullBit(oldp+82,(((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid) 
                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop))));
    bufp->fullBit(oldp+83,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_push));
    bufp->fullBit(oldp+84,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en));
    bufp->fullBit(oldp+85,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_go));
    bufp->fullBit(oldp+86,((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen))));
    bufp->fullBit(oldp+87,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                            & (0x8000U == (0xffffU 
                                           & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
    bufp->fullBit(oldp+88,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                            & (0x8010U == (0xffffU 
                                           & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
    bufp->fullBit(oldp+89,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                            & (0x8020U == (0xffffU 
                                           & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
    bufp->fullBit(oldp+90,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                            & (0x8030U == (0xffffU 
                                           & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
    bufp->fullBit(oldp+91,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                            & (0x8040U == (0xffffU 
                                           & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
    bufp->fullBit(oldp+92,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                            & (0x8050U == (0xffffU 
                                           & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
    bufp->fullBit(oldp+93,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                            & (0x8060U == (0xffffU 
                                           & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
    bufp->fullBit(oldp+94,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                            & (0x8070U == (0xffffU 
                                           & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
    bufp->fullBit(oldp+95,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer));
    bufp->fullBit(oldp+96,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                            & (0xff00U == (0xffffU 
                                           & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
    bufp->fullBit(oldp+97,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                            & (0xff30U == (0xffffU 
                                           & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
    bufp->fullBit(oldp+98,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                            & (0xff40U == (0xffffU 
                                           & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
    bufp->fullBit(oldp+99,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_uart_valid));
    bufp->fullBit(oldp+100,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                             & (0xf020U == (0xffffU 
                                            & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
    bufp->fullCData(oldp+101,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__next_state),3);
    bufp->fullSData(oldp+102,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_key_tmp),16);
    bufp->fullBit(oldp+103,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                             & (0xf030U == (0xffffU 
                                            & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
    bufp->fullBit(oldp+104,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                             & (0xf040U == (0xffffU 
                                            & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
    bufp->fullBit(oldp+105,(((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                             & (0xf050U == (0xffffU 
                                            & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
    bufp->fullBit(oldp+106,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__req_inst));
    bufp->fullBit(oldp+107,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__addr_ok_inst));
    bufp->fullBit(oldp+108,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req) 
                             & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req_or)) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__data_back)))));
    bufp->fullBit(oldp+109,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__req_mem));
    bufp->fullBit(oldp+110,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req) 
                             & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req_or) 
                                & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__data_back)))));
    bufp->fullBit(oldp+111,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__data_back));
    bufp->fullBit(oldp+112,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_allow_in));
    bufp->fullBit(oldp+113,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_ready_go));
    bufp->fullBit(oldp+114,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_allow_in));
    bufp->fullBit(oldp+115,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_ready_go));
    bufp->fullBit(oldp+116,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_valid_in));
    bufp->fullIData(oldp+117,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp_valid)
                                ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp_valid)
                                    ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp
                                    : 0U) : vlSelf->simu_top__DOT__soc__DOT__m0_rdata)),32);
    bufp->fullBit(oldp+118,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_allow_in));
    bufp->fullBit(oldp+119,((1U & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req)) 
                                    & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__req_mem) 
                                       & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____VdfgTmp_hb2577766__0))) 
                                   | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____VdfgTmp_hb2577766__0)) 
                                      & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divEn)) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divEn) 
                                            & (0x21U 
                                               == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__count)))))))));
    bufp->fullBit(oldp+120,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_allow_in));
    bufp->fullBit(oldp+121,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_valid_in));
    bufp->fullBit(oldp+122,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_ready_go));
    bufp->fullBit(oldp+123,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_valid_in));
    bufp->fullIData(oldp+124,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid)
                                ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid)
                                    ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp
                                    : 0U) : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData)),32);
    bufp->fullIData(oldp+125,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp_valid)
                                ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp_valid)
                                    ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp
                                    : 0U) : vlSelf->simu_top__DOT__soc__DOT__m0_rdata)),32);
    bufp->fullIData(oldp+126,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid)
                                ? ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid)
                                    ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp
                                    : 0U) : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData)),32);
    bufp->fullIData(oldp+127,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData),32);
    bufp->fullBit(oldp+128,(((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arvalid) 
                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_arready))));
    bufp->fullBit(oldp+129,(((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awvalid) 
                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_awready))));
    bufp->fullBit(oldp+130,(((IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wvalid) 
                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__m0_wready))));
    bufp->fullBit(oldp+131,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_push));
    bufp->fullBit(oldp+132,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop));
    bufp->fullBit(oldp+133,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_push));
    bufp->fullBit(oldp+134,(((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid) 
                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop))));
    bufp->fullBit(oldp+135,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_push));
    bufp->fullBit(oldp+136,((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rvalid)) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready)))));
    bufp->fullBit(oldp+137,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wlast)) 
                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en))));
    bufp->fullBit(oldp+138,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_push));
    bufp->fullBit(oldp+139,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop));
    bufp->fullBit(oldp+140,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_push));
    bufp->fullBit(oldp+141,(((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid) 
                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop))));
    bufp->fullBit(oldp+142,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_push));
    bufp->fullBit(oldp+143,(((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) 
                             & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid)) 
                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop)))));
    bufp->fullBit(oldp+144,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop));
    bufp->fullBit(oldp+145,(((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid) 
                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop))));
    bufp->fullBit(oldp+146,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_push));
    bufp->fullBit(oldp+147,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en));
    bufp->fullBit(oldp+148,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_go));
    bufp->fullIData(oldp+149,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r),32);
    bufp->fullCData(oldp+150,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_size_r),3);
    bufp->fullBit(oldp+151,(vlSelf->simu_top__DOT__soc__DOT__cpu_awvalid));
    bufp->fullIData(oldp+152,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wdata_r),32);
    bufp->fullCData(oldp+153,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wstrb_r),4);
    bufp->fullBit(oldp+154,(vlSelf->simu_top__DOT__soc__DOT__cpu_wvalid));
    bufp->fullCData(oldp+155,(vlSelf->simu_top__DOT__soc__DOT__m0_bid),4);
    bufp->fullCData(oldp+156,(vlSelf->simu_top__DOT__soc__DOT__m0_bresp),2);
    bufp->fullBit(oldp+157,(vlSelf->simu_top__DOT__soc__DOT__cpu_arvalid));
    bufp->fullCData(oldp+158,(vlSelf->simu_top__DOT__soc__DOT__m0_rid),4);
    bufp->fullCData(oldp+159,(vlSelf->simu_top__DOT__soc__DOT__m0_rresp),2);
    bufp->fullBit(oldp+160,(vlSelf->simu_top__DOT__soc__DOT__m0_rlast));
    bufp->fullBit(oldp+161,(vlSelf->simu_top__DOT__soc__DOT__m0_awready));
    bufp->fullBit(oldp+162,(vlSelf->simu_top__DOT__soc__DOT__m0_wready));
    bufp->fullBit(oldp+163,(vlSelf->simu_top__DOT__soc__DOT__m0_bvalid));
    bufp->fullBit(oldp+164,(vlSelf->simu_top__DOT__soc__DOT__m0_arready));
    bufp->fullBit(oldp+165,(vlSelf->simu_top__DOT__soc__DOT__m0_rvalid));
    bufp->fullBit(oldp+166,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid)))));
    bufp->fullBit(oldp+167,(vlSelf->simu_top__DOT__soc__DOT__s0_wready));
    bufp->fullCData(oldp+168,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_data),4);
    bufp->fullBit(oldp+169,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid));
    bufp->fullBit(oldp+170,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid)))));
    bufp->fullCData(oldp+171,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rid),4);
    bufp->fullBit(oldp+172,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rlast));
    bufp->fullBit(oldp+173,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rvalid));
    bufp->fullBit(oldp+174,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid)))));
    bufp->fullBit(oldp+175,(vlSelf->simu_top__DOT__soc__DOT__conf_s_wready));
    bufp->fullCData(oldp+176,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_data),4);
    bufp->fullBit(oldp+177,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid));
    bufp->fullBit(oldp+178,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid)))));
    bufp->fullCData(oldp+179,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rid),4);
    bufp->fullIData(oldp+180,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_rdata_reg),32);
    bufp->fullBit(oldp+181,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rlast));
    bufp->fullBit(oldp+182,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rvalid));
    bufp->fullBit(oldp+183,(vlSelf->simu_top__DOT__soc__DOT__apb_s_awready));
    bufp->fullBit(oldp+184,(vlSelf->simu_top__DOT__soc__DOT__apb_s_wready));
    bufp->fullCData(oldp+185,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_w_id),4);
    bufp->fullBit(oldp+186,(vlSelf->simu_top__DOT__soc__DOT__apb_s_bvalid));
    bufp->fullBit(oldp+187,(vlSelf->simu_top__DOT__soc__DOT__apb_s_arready));
    bufp->fullCData(oldp+188,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_r_id),4);
    bufp->fullIData(oldp+189,(((0U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb)))
                                ? vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32
                                : ((1U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb)))
                                    ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                                       << 8U) : ((2U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb)))
                                                  ? 
                                                 (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                                                  << 0x10U)
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb)))
                                                   ? 
                                                  (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                                                   << 0x18U)
                                                   : 0U))))),32);
    bufp->fullBit(oldp+190,(vlSelf->simu_top__DOT__soc__DOT__apb_s_rlast));
    bufp->fullBit(oldp+191,(vlSelf->simu_top__DOT__soc__DOT__apb_s_rvalid));
    bufp->fullIData(oldp+192,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr),32);
    bufp->fullIData(oldp+193,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr),32);
    bufp->fullIData(oldp+194,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata),32);
    bufp->fullCData(oldp+195,(((IData)(vlSelf->simu_top__DOT__soc__DOT__uart0_int) 
                               << 1U)),8);
    bufp->fullBit(oldp+196,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+197,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr))));
    bufp->fullBit(oldp+198,(vlSelf->simu_top__DOT__soc__DOT__uart0_int));
    bufp->fullBit(oldp+199,((IData)(((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                       >> 4U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__infrared)) 
                                     | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_out)))));
    bufp->fullBit(oldp+200,(vlSelf->simu_top__DOT__soc__DOT__uart0_txd_oe));
    bufp->fullBit(oldp+201,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_reg) 
                                   ^ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                                      >> 3U)))));
    bufp->fullBit(oldp+202,((1U & (~ (IData)(vlSelf->uart_rx__en0)))));
    bufp->fullBit(oldp+203,(((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant) 
                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_ack))));
    bufp->fullIData(oldp+204,(((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)
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
    bufp->fullBit(oldp+205,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant));
    bufp->fullBit(oldp+206,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ));
    bufp->fullBit(oldp+207,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)) 
                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_ack))));
    bufp->fullBit(oldp+208,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr));
    bufp->fullBit(oldp+209,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu));
    bufp->fullBit(oldp+210,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu));
    bufp->fullIData(oldp+211,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr),20);
    bufp->fullCData(oldp+212,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datai_cpu),8);
    bufp->fullCData(oldp+213,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datao_cpu),8);
    bufp->fullBit(oldp+214,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_word_trans_cpu));
    bufp->fullIData(oldp+215,(((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)
                                ? 0U : ((0U == (0x3fU 
                                                & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr 
                                                   >> 0xeU)))
                                         ? 0U : (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__REG_DAT_T 
                                                 >> 8U)))),24);
    bufp->fullIData(oldp+216,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_high_24b_wr),24);
    bufp->fullBit(oldp+217,((0U == (0x3fU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr 
                                             >> 0xeU)))));
    bufp->fullBit(oldp+218,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_ack));
    bufp->fullBit(oldp+219,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_rw));
    bufp->fullBit(oldp+220,(((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_psel) 
                             & (0U == (0xfc000U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)))));
    bufp->fullIData(oldp+221,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr),20);
    bufp->fullCData(oldp+222,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_datai),8);
    bufp->fullCData(oldp+223,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_datao),8);
    bufp->fullBit(oldp+224,((0U != (0x3fU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr 
                                             >> 0xeU)))));
    bufp->fullBit(oldp+225,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_ack));
    bufp->fullBit(oldp+226,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel));
    bufp->fullIData(oldp+227,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_datai),32);
    bufp->fullIData(oldp+228,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__REG_DAT_T),32);
    bufp->fullBit(oldp+229,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_ack));
    bufp->fullBit(oldp+230,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_psel));
    bufp->fullBit(oldp+231,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_enab));
    bufp->fullIData(oldp+232,((0xffffffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)
                                             ? (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_wdata_dma 
                                                >> 8U)
                                             : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_high_24b_wr))),24);
    bufp->fullIData(oldp+233,(((0U == (0x3fU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr 
                                                >> 0xeU)))
                                ? 0U : (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__REG_DAT_T 
                                        >> 8U))),24);
    bufp->fullCData(oldp+234,((0xffU & ((0U == (0x3fU 
                                                & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr 
                                                   >> 0xeU)))
                                         ? (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_datao)
                                         : ((0U == 
                                             (0x3fU 
                                              & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr 
                                                 >> 0xeU)))
                                             ? 0U : vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__REG_DAT_T)))),8);
    bufp->fullBit(oldp+235,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)))));
    bufp->fullBit(oldp+236,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_ready));
    bufp->fullBit(oldp+237,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd));
    bufp->fullCData(oldp+238,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm),4);
    bufp->fullCData(oldp+239,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb),4);
    bufp->fullCData(oldp+240,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb),4);
    bufp->fullIData(oldp+241,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32),32);
    bufp->fullIData(oldp+242,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32),32);
    bufp->fullCData(oldp+243,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count),3);
    bufp->fullCData(oldp+244,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size),3);
    bufp->fullCData(oldp+245,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_wr_size),3);
    bufp->fullBit(oldp+246,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_int));
    bufp->fullSData(oldp+247,((0x7ffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)),11);
    bufp->fullCData(oldp+248,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r0),4);
    bufp->fullCData(oldp+249,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r1),4);
    bufp->fullCData(oldp+250,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_type_r1),2);
    bufp->fullCData(oldp+251,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_type_r2),2);
    bufp->fullSData(oldp+252,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_c),14);
    bufp->fullIData(oldp+253,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r),25);
    bufp->fullIData(oldp+254,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_op_num),32);
    bufp->fullIData(oldp+255,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter),32);
    bufp->fullIData(oldp+256,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0),32);
    bufp->fullIData(oldp+257,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map1),32);
    bufp->fullIData(oldp+258,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_rdy_map0),32);
    bufp->fullIData(oldp+259,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_rdy_map1),32);
    bufp->fullIData(oldp+260,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command),32);
    bufp->fullSData(oldp+261,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing),16);
    bufp->fullQData(oldp+262,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__addr_in_die),38);
    bufp->fullCData(oldp+264,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE),5);
    bufp->fullIData(oldp+265,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM),32);
    bufp->fullSData(oldp+266,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT),14);
    bufp->fullSData(oldp+267,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT),14);
    bufp->fullBit(oldp+268,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_clr_ack));
    bufp->fullBit(oldp+269,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE));
    bufp->fullBit(oldp+270,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_));
    bufp->fullSData(oldp+271,((0x3fffU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                          >> 0x10U))),14);
    bufp->fullCData(oldp+272,((7U & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+273,((0xfU & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                       >> 8U))),4);
    bufp->fullBit(oldp+274,((1U & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                   >> 8U))));
    bufp->fullBit(oldp+275,((1U & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                   >> 9U))));
    bufp->fullBit(oldp+276,((1U & (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                   >> 0xdU))));
    bufp->fullBit(oldp+277,(((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
                             & (0x40U == (0x7ffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)))));
    bufp->fullBit(oldp+278,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY));
    bufp->fullBit(oldp+279,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT0));
    bufp->fullBit(oldp+280,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT1));
    bufp->fullBit(oldp+281,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT2));
    bufp->fullBit(oldp+282,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT3));
    bufp->fullBit(oldp+283,(((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
                             & (0x10U == (0x7ffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)))));
    bufp->fullBit(oldp+284,(((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
                             & (0x14U == (0x7ffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)))));
    bufp->fullBit(oldp+285,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT6));
    bufp->fullBit(oldp+286,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT7));
    bufp->fullBit(oldp+287,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT8));
    bufp->fullBit(oldp+288,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT9));
    bufp->fullBit(oldp+289,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT10));
    bufp->fullBit(oldp+290,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT11));
    bufp->fullBit(oldp+291,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT));
    bufp->fullBit(oldp+292,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_cmd_valid));
    bufp->fullCData(oldp+293,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status),8);
    bufp->fullCData(oldp+294,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_number),2);
    bufp->fullQData(oldp+295,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM),48);
    bufp->fullIData(oldp+297,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD),32);
    bufp->fullCData(oldp+298,((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT____VdfgTmp_he5337c8c__0) 
                                << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT____VdfgTmp_hda1c3bf2__0) 
                                           << 2U) | 
                                          (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT____VdfgTmp_hdb5c27a8__0) 
                                            << 1U) 
                                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT____VdfgTmp_h194fa2e7__0))))),4);
    bufp->fullCData(oldp+299,((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT____VdfgTmp_hea0d93a3__0) 
                                << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT____VdfgTmp_h2fe3549b__0) 
                                           << 2U) | 
                                          (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT____VdfgTmp_h559fe0c2__0) 
                                            << 1U) 
                                           | (1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r1)))))),4);
    bufp->fullCData(oldp+300,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer),2);
    bufp->fullCData(oldp+301,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT),3);
    bufp->fullCData(oldp+302,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM),8);
    bufp->fullCData(oldp+303,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM),8);
    bufp->fullCData(oldp+304,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND),8);
    bufp->fullCData(oldp+305,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE),5);
    bufp->fullCData(oldp+306,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM),3);
    bufp->fullSData(oldp+307,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count),14);
    bufp->fullQData(oldp+308,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR),38);
    bufp->fullIData(oldp+310,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_I_WR),32);
    bufp->fullBit(oldp+311,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO));
    bufp->fullBit(oldp+312,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ACK));
    bufp->fullBit(oldp+313,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE));
    bufp->fullBit(oldp+314,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ERASE_SERIAL));
    bufp->fullBit(oldp+315,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half));
    bufp->fullBit(oldp+316,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob));
    bufp->fullCData(oldp+317,((0xffU & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)),8);
    bufp->fullBit(oldp+318,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we));
    bufp->fullBit(oldp+319,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__re));
    bufp->fullBit(oldp+320,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__rx_en));
    bufp->fullBit(oldp+321,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__tx2rx_en));
    bufp->fullBit(oldp+322,(vlSelf->uart_rx__en0));
    bufp->fullCData(oldp+323,((7U & vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_addr)),3);
    bufp->fullBit(oldp+324,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__enable));
    bufp->fullBit(oldp+325,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__srx_pad));
    bufp->fullCData(oldp+326,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier),4);
    bufp->fullCData(oldp+327,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir),4);
    bufp->fullCData(oldp+328,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fcr),2);
    bufp->fullCData(oldp+329,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr),5);
    bufp->fullBit(oldp+330,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__infrared));
    bufp->fullBit(oldp+331,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_pol));
    bufp->fullCData(oldp+332,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr),8);
    bufp->fullCData(oldp+333,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr),8);
    bufp->fullIData(oldp+334,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl),24);
    bufp->fullBit(oldp+335,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__start_dlc));
    bufp->fullBit(oldp+336,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+337,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset));
    bufp->fullSData(oldp+338,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc),16);
    bufp->fullCData(oldp+339,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__trigger_level),4);
    bufp->fullBit(oldp+340,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_reset));
    bufp->fullBit(oldp+341,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tx_reset));
    bufp->fullBit(oldp+342,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+343,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                                   >> 2U))));
    bufp->fullBit(oldp+344,((1U & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                                      >> 2U)))));
    bufp->fullBit(oldp+345,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_reg));
    bufp->fullBit(oldp+346,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_en_reg));
    bufp->fullCData(oldp+347,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg),8);
    bufp->fullCData(oldp+348,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fi_di_reg),8);
    bufp->fullCData(oldp+349,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count),8);
    bufp->fullCData(oldp+350,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__repeat_reg),3);
    bufp->fullBit(oldp+351,((0U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))));
    bufp->fullBit(oldp+352,((1U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))));
    bufp->fullBit(oldp+353,((2U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))));
    bufp->fullBit(oldp+354,((3U == (3U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))));
    bufp->fullBit(oldp+355,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tx_en));
    bufp->fullBit(oldp+356,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                                   >> 3U))));
    bufp->fullBit(oldp+357,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+358,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____VdfgTmp_h84138141__0) 
                                   >> 3U))));
    bufp->fullBit(oldp+359,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____VdfgTmp_h84138141__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+360,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____VdfgTmp_h84138141__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+361,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____VdfgTmp_h84138141__0))));
    bufp->fullCData(oldp+362,((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7r) 
                                << 7U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6r) 
                                           << 6U) | 
                                          (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5r) 
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
    bufp->fullBit(oldp+363,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0));
    bufp->fullBit(oldp+364,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_overrun));
    bufp->fullBit(oldp+365,((1U & ((IData)(vlSelf->__VdfgTmp_hcd04e225__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+366,((1U & (IData)(vlSelf->__VdfgTmp_hcd04e225__0))));
    bufp->fullBit(oldp+367,((1U & ((IData)(vlSelf->__VdfgTmp_hcd04e225__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+368,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5));
    bufp->fullBit(oldp+369,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6));
    bufp->fullBit(oldp+370,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7));
    bufp->fullBit(oldp+371,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0r));
    bufp->fullBit(oldp+372,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr1r));
    bufp->fullBit(oldp+373,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr2r));
    bufp->fullBit(oldp+374,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr3r));
    bufp->fullBit(oldp+375,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr4r));
    bufp->fullBit(oldp+376,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5r));
    bufp->fullBit(oldp+377,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6r));
    bufp->fullBit(oldp+378,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7r));
    bufp->fullBit(oldp+379,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask));
    bufp->fullBit(oldp+380,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int));
    bufp->fullBit(oldp+381,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int));
    bufp->fullBit(oldp+382,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int));
    bufp->fullBit(oldp+383,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int));
    bufp->fullBit(oldp+384,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int));
    bufp->fullBit(oldp+385,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_push));
    bufp->fullBit(oldp+386,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop));
    bufp->fullSData(oldp+387,((((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__data8_out) 
                                << 3U) | (IData)(vlSelf->__VdfgTmp_hcd04e225__0))),11);
    bufp->fullBit(oldp+388,((0U != (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                    [0U] | (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                            [1U] | 
                                            (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                             [2U] | 
                                             (vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullCData(oldp+389,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count),5);
    bufp->fullCData(oldp+390,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count),5);
    bufp->fullCData(oldp+391,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate),3);
    bufp->fullCData(oldp+392,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate),4);
    bufp->fullSData(oldp+393,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t),10);
    bufp->fullBit(oldp+394,((1U & (~ (IData)((0U != (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+395,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt),8);
    bufp->fullCData(oldp+396,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value),8);
    bufp->fullBit(oldp+397,((1U & ((~ (IData)(vlSelf->uart_rx__en0)) 
                                   | ((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate)) 
                                      & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error)) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error) 
                                            & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT____VdfgTmp_hd44064a5__0))))))));
    bufp->fullBit(oldp+398,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__max_repeat_time));
    bufp->fullBit(oldp+399,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_out));
    bufp->fullBit(oldp+400,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_in));
    bufp->fullBit(oldp+401,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_push_pulse));
    bufp->fullBit(oldp+402,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+403,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir_read));
    bufp->fullBit(oldp+404,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr_read));
    bufp->fullBit(oldp+405,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fifo_read));
    bufp->fullCData(oldp+406,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+407,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0_d));
    bufp->fullBit(oldp+408,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr1_d));
    bufp->fullBit(oldp+409,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr2_d));
    bufp->fullBit(oldp+410,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr3_d));
    bufp->fullBit(oldp+411,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr4_d));
    bufp->fullBit(oldp+412,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5_d));
    bufp->fullBit(oldp+413,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6_d));
    bufp->fullBit(oldp+414,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7_d));
    bufp->fullSData(oldp+415,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_cnt),9);
    bufp->fullSData(oldp+416,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_next),9);
    bufp->fullBit(oldp+417,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_cnt) 
                                    ^ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_next)) 
                                   >> 8U))));
    bufp->fullBit(oldp+418,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_d));
    bufp->fullBit(oldp+419,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_d));
    bufp->fullBit(oldp+420,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_d));
    bufp->fullBit(oldp+421,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_d));
    bufp->fullBit(oldp+422,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_d));
    bufp->fullBit(oldp+423,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int))));
    bufp->fullBit(oldp+424,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int))));
    bufp->fullBit(oldp+425,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int))));
    bufp->fullBit(oldp+426,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int))));
    bufp->fullBit(oldp+427,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int))));
    bufp->fullBit(oldp+428,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+429,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+430,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+431,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+432,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+433,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__d1_fifo_read));
    bufp->fullBit(oldp+434,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullBit(oldp+435,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____Vcellinp__receiver__enable));
    bufp->fullCData(oldp+436,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+437,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+438,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+439,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+440,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+441,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+442,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+443,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+444,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+445,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+446,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+447,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+448,((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+449,((7U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+450,((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+451,((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+452,((0xfU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+453,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+454,((0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+455,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__data8_out),8);
    bufp->fullCData(oldp+456,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+457,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+458,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+459,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+460,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+461,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+462,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+463,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+464,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+465,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+466,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+467,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+468,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+469,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+470,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+471,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+472,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+473,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+474,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+475,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+476,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+477,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+478,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+479,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+480,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+481,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+482,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+483,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+484,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+485,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+486,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+487,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+488,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+489,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+490,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+491,((0xffU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+492,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+493,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+494,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+495,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+496,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+497,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+498,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+499,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+500,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+501,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+502,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+503,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+504,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+505,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+506,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+507,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullBit(oldp+508,(((IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__enable) 
                             & (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tx_en))));
    bufp->fullCData(oldp+509,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+510,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+511,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+512,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+513,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+514,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+515,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+516,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error));
    bufp->fullCData(oldp+517,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time),3);
    bufp->fullCData(oldp+518,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullBit(oldp+519,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+520,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_bak),8);
    bufp->fullCData(oldp+521,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+522,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+523,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullCData(oldp+524,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+525,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+526,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+527,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+528,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+529,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+530,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+531,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+532,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+533,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+534,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+535,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+536,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+537,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+538,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+539,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+540,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit),5);
    bufp->fullCData(oldp+541,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit),5);
    bufp->fullCData(oldp+542,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit),5);
    bufp->fullCData(oldp+543,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit),5);
    bufp->fullCData(oldp+544,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready),5);
    bufp->fullCData(oldp+545,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready),5);
    bufp->fullCData(oldp+546,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid),5);
    bufp->fullCData(oldp+547,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready),5);
    bufp->fullCData(oldp+548,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast),5);
    bufp->fullCData(oldp+549,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid),5);
    bufp->fullCData(oldp+550,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[0]),4);
    bufp->fullCData(oldp+551,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[1]),4);
    bufp->fullCData(oldp+552,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[2]),4);
    bufp->fullCData(oldp+553,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[3]),4);
    bufp->fullCData(oldp+554,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[4]),4);
    bufp->fullCData(oldp+555,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[0]),4);
    bufp->fullCData(oldp+556,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[1]),4);
    bufp->fullCData(oldp+557,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[2]),4);
    bufp->fullCData(oldp+558,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[3]),4);
    bufp->fullCData(oldp+559,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[4]),4);
    bufp->fullCData(oldp+560,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_0),3);
    bufp->fullCData(oldp+561,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_1),3);
    bufp->fullCData(oldp+562,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__bvalid_group_0),3);
    bufp->fullCData(oldp+563,((((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_bvalid) 
                                << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid))),3);
    bufp->fullCData(oldp+564,((((IData)(vlSelf->simu_top__DOT__soc__DOT__apb_s_rvalid) 
                                << 2U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rvalid) 
                                           << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rvalid)))),3);
    bufp->fullCData(oldp+565,((((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rvalid) 
                                << 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rvalid))),3);
    bufp->fullBit(oldp+566,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty));
    bufp->fullBit(oldp+567,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full));
    bufp->fullBit(oldp+568,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_empty));
    bufp->fullBit(oldp+569,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full));
    bufp->fullCData(oldp+570,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_dir),3);
    bufp->fullCData(oldp+571,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir),3);
    bufp->fullCData(oldp+572,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_pre_sel),3);
    bufp->fullBit(oldp+573,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog));
    bufp->fullCData(oldp+574,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel_reg),3);
    bufp->fullCData(oldp+575,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel),3);
    bufp->fullIData(oldp+576,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int),32);
    bufp->fullBit(oldp+577,((1U & (~ ((0x1fe0U == (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r 
                                                   >> 0x10U)) 
                                      | (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____VdfgTmp_h58a8c0e9__0))))));
    bufp->fullCData(oldp+578,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_sel),3);
    bufp->fullCData(oldp+579,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir),3);
    bufp->fullCData(oldp+580,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_pre_sel),3);
    bufp->fullBit(oldp+581,((1U & (~ ((IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____VdfgTmp_h58a8c0e9__0) 
                                      | (0x1fe0U == 
                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r 
                                          >> 0x10U)))))));
    bufp->fullIData(oldp+582,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int),32);
    bufp->fullCData(oldp+583,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram[0]),3);
    bufp->fullCData(oldp+584,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram[1]),3);
    bufp->fullCData(oldp+585,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr),2);
    bufp->fullCData(oldp+586,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr),2);
    bufp->fullBit(oldp+587,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr))));
    bufp->fullBit(oldp+588,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr))));
    bufp->fullIData(oldp+589,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__i),32);
    bufp->fullCData(oldp+590,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram[0]),3);
    bufp->fullCData(oldp+591,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram[1]),3);
    bufp->fullCData(oldp+592,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr),2);
    bufp->fullCData(oldp+593,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr),2);
    bufp->fullBit(oldp+594,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr))));
    bufp->fullBit(oldp+595,((1U & (IData)(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr))));
    bufp->fullIData(oldp+596,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__i),32);
    bufp->fullQData(oldp+597,((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst)) 
                                << 0x2bU) | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arsize)) 
                                              << 0x28U) 
                                             | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen)) 
                                                 << 0x24U) 
                                                | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)) 
                                                    << 4U) 
                                                   | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arid))))))),45);
    bufp->fullIData(oldp+599,(((((IData)(1U) + (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr 
                                                >> 2U)) 
                                << 2U) | (3U & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr))),32);
    bufp->fullIData(oldp+600,((((- (IData)((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst)))) 
                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr) 
                               | (((- (IData)((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst)))) 
                                   & ((((IData)(1U) 
                                        + (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr 
                                           >> 2U)) 
                                       << 2U) | (3U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr))) 
                                  | ((- (IData)((2U 
                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst)))) 
                                     & ((0xffffffc0U 
                                         & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr) 
                                        | ((0x3cU & 
                                            ((0xfffffffcU 
                                              & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen)) 
                                                  << 2U) 
                                                 & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)) 
                                             | (((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen) 
                                                 & ((IData)(1U) 
                                                    + 
                                                    (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr 
                                                     >> 2U))) 
                                                << 2U))) 
                                           | (3U & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr))))))),32);
    bufp->fullIData(oldp+601,(((0xffffffc0U & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr) 
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
    bufp->fullCData(oldp+602,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst),2);
    bufp->fullBit(oldp+603,((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst))));
    bufp->fullBit(oldp+604,((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst))));
    bufp->fullBit(oldp+605,((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst))));
    bufp->fullCData(oldp+606,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arid),4);
    bufp->fullCData(oldp+607,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen),4);
    bufp->fullBit(oldp+608,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen_last));
    bufp->fullCData(oldp+609,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arsize),3);
    bufp->fullBit(oldp+610,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid));
    bufp->fullQData(oldp+611,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push_data),45);
    bufp->fullQData(oldp+613,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas),45);
    bufp->fullIData(oldp+615,((IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas 
                                       >> 0xdU))),32);
    bufp->fullCData(oldp+616,((3U & (IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas 
                                             >> 0xbU)))),2);
    bufp->fullCData(oldp+617,((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas))),4);
    bufp->fullCData(oldp+618,((0xfU & (IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas 
                                               >> 4U)))),4);
    bufp->fullCData(oldp+619,((7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas 
                                             >> 8U)))),3);
    bufp->fullBit(oldp+620,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_valid));
    bufp->fullCData(oldp+621,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rcur),4);
    bufp->fullQData(oldp+622,((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)) 
                                << 0xdU) | (QData)((IData)(
                                                           (((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst) 
                                                             << 0xbU) 
                                                            | (((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awsize) 
                                                                << 8U) 
                                                               | (((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awlen) 
                                                                   << 4U) 
                                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awid)))))))),45);
    bufp->fullIData(oldp+624,(((((IData)(1U) + (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr 
                                                >> 2U)) 
                                << 2U) | (3U & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr))),32);
    bufp->fullIData(oldp+625,((((- (IData)((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst)))) 
                                & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr) 
                               | (((- (IData)((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst)))) 
                                   & ((((IData)(1U) 
                                        + (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr 
                                           >> 2U)) 
                                       << 2U) | (3U 
                                                 & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr))) 
                                  | ((- (IData)((2U 
                                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst)))) 
                                     & ((0xffffffc0U 
                                         & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr) 
                                        | ((0x3cU & 
                                            ((0xfffffffcU 
                                              & (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awlen)) 
                                                  << 2U) 
                                                 & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)) 
                                             | (((IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awlen) 
                                                 & ((IData)(1U) 
                                                    + 
                                                    (vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr 
                                                     >> 2U))) 
                                                << 2U))) 
                                           | (3U & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr))))))),32);
    bufp->fullIData(oldp+626,(((0xffffffc0U & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr) 
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
    bufp->fullCData(oldp+627,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst),2);
    bufp->fullBit(oldp+628,((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst))));
    bufp->fullBit(oldp+629,((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst))));
    bufp->fullBit(oldp+630,((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst))));
    bufp->fullCData(oldp+631,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awid),4);
    bufp->fullCData(oldp+632,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awlen),4);
    bufp->fullCData(oldp+633,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awsize),3);
    bufp->fullBit(oldp+634,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid));
    bufp->fullQData(oldp+635,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas),45);
    bufp->fullIData(oldp+637,((IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas 
                                       >> 0xdU))),32);
    bufp->fullCData(oldp+638,((3U & (IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas 
                                             >> 0xbU)))),2);
    bufp->fullCData(oldp+639,((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas))),4);
    bufp->fullCData(oldp+640,((0xfU & (IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas 
                                               >> 4U)))),4);
    bufp->fullCData(oldp+641,((7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas 
                                             >> 8U)))),3);
    bufp->fullBit(oldp+642,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_valid));
    bufp->fullBit(oldp+643,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_allow_out));
    bufp->fullBit(oldp+644,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid));
    bufp->fullCData(oldp+645,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_datas),4);
    bufp->fullBit(oldp+646,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid)))));
    bufp->fullCData(oldp+647,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wstrb),4);
    bufp->fullBit(oldp+648,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wlast));
    bufp->fullBit(oldp+649,(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wvalid));
    bufp->fullIData(oldp+650,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr0),32);
    bufp->fullIData(oldp+651,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr1),32);
    bufp->fullIData(oldp+652,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr2),32);
    bufp->fullIData(oldp+653,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr3),32);
    bufp->fullIData(oldp+654,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr4),32);
    bufp->fullIData(oldp+655,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr5),32);
    bufp->fullIData(oldp+656,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr6),32);
    bufp->fullIData(oldp+657,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__cr7),32);
    bufp->fullIData(oldp+658,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__led_data),32);
    bufp->fullIData(oldp+659,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__led_rg0_data),32);
    bufp->fullIData(oldp+660,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__led_rg1_data),32);
    bufp->fullIData(oldp+661,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__num_data),32);
    bufp->fullIData(oldp+662,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_key_r),32);
    bufp->fullIData(oldp+663,(((2U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r)) 
                                      << 1U)) | (1U 
                                                 & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r))))),32);
    bufp->fullCData(oldp+664,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__confreg_uart_data),8);
    bufp->fullBit(oldp+665,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__confreg_uart_valid));
    bufp->fullIData(oldp+666,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__timer_r2),32);
    bufp->fullIData(oldp+667,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__simu_flag),32);
    bufp->fullIData(oldp+668,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__io_simu),32);
    bufp->fullCData(oldp+669,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__virtual_uart_data),8);
    bufp->fullBit(oldp+670,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__open_trace));
    bufp->fullBit(oldp+671,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__num_monitor));
    bufp->fullBit(oldp+672,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin));
    bufp->fullBit(oldp+673,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r1));
    bufp->fullBit(oldp+674,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r2));
    bufp->fullBit(oldp+675,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r3));
    bufp->fullBit(oldp+676,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r1));
    bufp->fullBit(oldp+677,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r2));
    bufp->fullIData(oldp+678,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r),32);
    bufp->fullIData(oldp+679,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r1),32);
    bufp->fullIData(oldp+680,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r2),32);
    bufp->fullIData(oldp+681,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__timer_r1),32);
    bufp->fullIData(oldp+682,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__timer),32);
    bufp->fullCData(oldp+683,((0xffU & vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata)),8);
    bufp->fullSData(oldp+684,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_key_r),16);
    bufp->fullCData(oldp+685,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state),3);
    bufp->fullBit(oldp+686,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__key_flag));
    bufp->fullIData(oldp+687,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__key_count),20);
    bufp->fullCData(oldp+688,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state_count),4);
    bufp->fullBit(oldp+689,((1U & (vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__key_count 
                                   >> 0x13U))));
    bufp->fullBit(oldp+690,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r));
    bufp->fullBit(oldp+691,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r));
    bufp->fullBit(oldp+692,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step0_flag));
    bufp->fullIData(oldp+693,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step0_count),20);
    bufp->fullBit(oldp+694,((1U & (vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step0_count 
                                   >> 0x13U))));
    bufp->fullBit(oldp+695,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step1_flag));
    bufp->fullIData(oldp+696,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step1_count),20);
    bufp->fullBit(oldp+697,((1U & (vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__step1_count 
                                   >> 0x13U))));
    bufp->fullIData(oldp+698,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__count),20);
    bufp->fullCData(oldp+699,(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__scan_data),4);
    bufp->fullIData(oldp+700,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC),32);
    bufp->fullBit(oldp+701,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memWriteEn_ex));
    bufp->fullCData(oldp+702,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__size_mem_ex),2);
    bufp->fullIData(oldp+703,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex),32);
    bufp->fullCData(oldp+704,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem),4);
    bufp->fullIData(oldp+705,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_ex_true),32);
    bufp->fullBit(oldp+706,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req)))));
    bufp->fullBit(oldp+707,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req));
    bufp->fullBit(oldp+708,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req_or));
    bufp->fullBit(oldp+709,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wr_r));
    bufp->fullCData(oldp+710,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_size_r),2);
    bufp->fullBit(oldp+711,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__addr_rcv));
    bufp->fullBit(oldp+712,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__wdata_rcv));
    bufp->fullIData(oldp+713,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U]),32);
    bufp->fullIData(oldp+714,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__pipeline_data),32);
    bufp->fullIData(oldp+715,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__pipeline_data),32);
    bufp->fullIData(oldp+716,((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+717,((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)),32);
    bufp->fullBit(oldp+718,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_ready_go));
    bufp->fullBit(oldp+719,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_flush));
    bufp->fullBit(oldp+720,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_valid_in));
    bufp->fullBit(oldp+721,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__alusel1));
    bufp->fullBit(oldp+722,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__alusel2));
    bufp->fullCData(oldp+723,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__aluctrl),5);
    bufp->fullBit(oldp+724,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_store_inst));
    bufp->fullBit(oldp+725,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__regWriteDataSel));
    bufp->fullCData(oldp+726,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_B_TYPE) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_BU_TYPE) 
                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ST_B_TYPE)))
                                ? 0U : (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_H_TYPE) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_HU_TYPE) 
                                            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ST_H_TYPE)))
                                         ? 1U : (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_W_TYPE) 
                                                  | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ST_W_TYPE))
                                                  ? 2U
                                                  : 0U)))),2);
    bufp->fullBit(oldp+727,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__is_unsign_load_id));
    bufp->fullBit(oldp+728,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_regimm_inst) 
                             | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_reg_inst) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_shamt_inst) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__regWriteDataSel) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BL_TYPE) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_JIRL_TYPE) 
                                            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_u_inst)))))))));
    bufp->fullCData(oldp+729,((((IData)((0x20000000ULL 
                                         == (0xff000000ULL 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out))) 
                                << 5U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_W_TYPE) 
                                           << 4U) | 
                                          (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_HU_TYPE) 
                                            << 3U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_H_TYPE) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_BU_TYPE) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_B_TYPE))))))),8);
    bufp->fullCData(oldp+730,((((IData)((0x21000000ULL 
                                         == (0xff000000ULL 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out))) 
                                << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ST_W_TYPE) 
                                           << 2U) | 
                                          (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ST_H_TYPE) 
                                            << 1U) 
                                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ST_B_TYPE))))),8);
    bufp->fullIData(oldp+731,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id),32);
    bufp->fullIData(oldp+732,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_id),32);
    bufp->fullCData(oldp+733,((0x1fU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                >> 5U)))),5);
    bufp->fullCData(oldp+734,((0x1fU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                >> 0xaU)))),5);
    bufp->fullCData(oldp+735,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_id),5);
    bufp->fullIData(oldp+736,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__immout_id),32);
    bufp->fullIData(oldp+737,((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+738,((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)),32);
    bufp->fullBit(oldp+739,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                     ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U]
                                     : Vsimu_top__ConstPool__CONST_h3cc724c7_0[7U]) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+740,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                     ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U]
                                     : Vsimu_top__ConstPool__CONST_h3cc724c7_0[7U]) 
                                   >> 0xbU))));
    bufp->fullCData(oldp+741,((0x1fU & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                          ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U]
                                          : Vsimu_top__ConstPool__CONST_h3cc724c7_0[7U]) 
                                        >> 6U))),5);
    bufp->fullBit(oldp+742,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                     ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U]
                                     : Vsimu_top__ConstPool__CONST_h3cc724c7_0[7U]) 
                                   >> 5U))));
    bufp->fullBit(oldp+743,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                     ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U]
                                     : Vsimu_top__ConstPool__CONST_h3cc724c7_0[7U]) 
                                   >> 4U))));
    bufp->fullCData(oldp+744,((3U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                       ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U]
                                       : Vsimu_top__ConstPool__CONST_h3cc724c7_0[7U]) 
                                     >> 2U))),2);
    bufp->fullBit(oldp+745,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                     ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U]
                                     : Vsimu_top__ConstPool__CONST_h3cc724c7_0[7U]) 
                                   >> 1U))));
    bufp->fullBit(oldp+746,((1U & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                    ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U]
                                    : Vsimu_top__ConstPool__CONST_h3cc724c7_0[7U]))));
    bufp->fullBit(oldp+747,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                               ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[6U]
                               : Vsimu_top__ConstPool__CONST_h3cc724c7_0[6U]) 
                             >> 0x1fU)));
    bufp->fullCData(oldp+748,((0xffU & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                          ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[6U]
                                          : Vsimu_top__ConstPool__CONST_h3cc724c7_0[6U]) 
                                        >> 0x17U))),8);
    bufp->fullCData(oldp+749,((0xffU & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                          ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[6U]
                                          : Vsimu_top__ConstPool__CONST_h3cc724c7_0[6U]) 
                                        >> 0xfU))),8);
    bufp->fullIData(oldp+750,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                  ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[6U]
                                  : Vsimu_top__ConstPool__CONST_h3cc724c7_0[6U]) 
                                << 0x11U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                               ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[5U]
                                               : Vsimu_top__ConstPool__CONST_h3cc724c7_0[5U]) 
                                             >> 0xfU))),32);
    bufp->fullIData(oldp+751,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                  ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[5U]
                                  : Vsimu_top__ConstPool__CONST_h3cc724c7_0[5U]) 
                                << 0x11U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                               ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[4U]
                                               : Vsimu_top__ConstPool__CONST_h3cc724c7_0[4U]) 
                                             >> 0xfU))),32);
    bufp->fullIData(oldp+752,(((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                  ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[4U]
                                  : Vsimu_top__ConstPool__CONST_h3cc724c7_0[4U]) 
                                << 0x11U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                               ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[3U]
                                               : Vsimu_top__ConstPool__CONST_h3cc724c7_0[3U]) 
                                             >> 0xfU))),32);
    bufp->fullCData(oldp+753,((0x1fU & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                          ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[3U]
                                          : Vsimu_top__ConstPool__CONST_h3cc724c7_0[3U]) 
                                        >> 0xaU))),5);
    bufp->fullCData(oldp+754,((0x1fU & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                          ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[3U]
                                          : Vsimu_top__ConstPool__CONST_h3cc724c7_0[3U]) 
                                        >> 5U))),5);
    bufp->fullCData(oldp+755,((0x1fU & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                         ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[3U]
                                         : Vsimu_top__ConstPool__CONST_h3cc724c7_0[3U]))),5);
    bufp->fullIData(oldp+756,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[2U]
                                : Vsimu_top__ConstPool__CONST_h3cc724c7_0[2U])),32);
    bufp->fullIData(oldp+757,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[1U]
                                : Vsimu_top__ConstPool__CONST_h3cc724c7_0[1U])),32);
    bufp->fullIData(oldp+758,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[0U]
                                : Vsimu_top__ConstPool__CONST_h3cc724c7_0[0U])),32);
    bufp->fullBit(oldp+759,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_flush));
    bufp->fullBit(oldp+760,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                     ? (0x7fffffU & 
                                        ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U] 
                                          << 0x11U) 
                                         | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[6U] 
                                            >> 0xfU)))
                                     : 0U) >> 0x16U))));
    bufp->fullBit(oldp+761,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                     ? (0x7fffffU & 
                                        ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U] 
                                          << 0x11U) 
                                         | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[6U] 
                                            >> 0xfU)))
                                     : 0U) >> 0x15U))));
    bufp->fullCData(oldp+762,((3U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                       ? (0x7fffffU 
                                          & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U] 
                                              << 0x11U) 
                                             | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[6U] 
                                                >> 0xfU)))
                                       : 0U) >> 0x13U))),2);
    bufp->fullBit(oldp+763,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                     ? (0x7fffffU & 
                                        ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U] 
                                          << 0x11U) 
                                         | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[6U] 
                                            >> 0xfU)))
                                     : 0U) >> 0x12U))));
    bufp->fullBit(oldp+764,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                     ? (0x7fffffU & 
                                        ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U] 
                                          << 0x11U) 
                                         | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[6U] 
                                            >> 0xfU)))
                                     : 0U) >> 0x11U))));
    bufp->fullBit(oldp+765,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                     ? (0x7fffffU & 
                                        ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U] 
                                          << 0x11U) 
                                         | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[6U] 
                                            >> 0xfU)))
                                     : 0U) >> 0x10U))));
    bufp->fullCData(oldp+766,((0xffU & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                          ? (0x7fffffU 
                                             & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U] 
                                                 << 0x11U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[6U] 
                                                   >> 0xfU)))
                                          : 0U) >> 8U))),8);
    bufp->fullCData(oldp+767,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                ? (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[6U] 
                                            >> 0xfU))
                                : 0U)),8);
    bufp->fullCData(oldp+768,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem),4);
    bufp->fullCData(oldp+769,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_ex),5);
    bufp->fullIData(oldp+770,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluout_ex),32);
    bufp->fullIData(oldp+771,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__pc_ex),32);
    bufp->fullIData(oldp+772,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[0U]
                                : Vsimu_top__ConstPool__CONST_h3cc724c7_0[0U])),32);
    bufp->fullIData(oldp+773,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex),32);
    bufp->fullIData(oldp+774,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_ex_true),32);
    bufp->fullBit(oldp+775,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[5U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+776,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[5U] 
                                   >> 0x1eU))));
    bufp->fullCData(oldp+777,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[5U] 
                                     >> 0x1cU))),2);
    bufp->fullBit(oldp+778,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[5U] 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+779,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[5U] 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+780,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[5U] 
                                   >> 0x19U))));
    bufp->fullCData(oldp+781,((0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[5U] 
                                        >> 0x11U))),8);
    bufp->fullCData(oldp+782,((0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[5U] 
                                        >> 9U))),8);
    bufp->fullCData(oldp+783,((0xfU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[5U] 
                                       >> 5U))),4);
    bufp->fullCData(oldp+784,((0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[5U])),5);
    bufp->fullIData(oldp+785,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[4U]),32);
    bufp->fullIData(oldp+786,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[3U]),32);
    bufp->fullIData(oldp+787,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U]),32);
    bufp->fullIData(oldp+788,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[1U]),32);
    bufp->fullIData(oldp+789,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0U]),32);
    bufp->fullBit(oldp+790,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_valid)
                                     ? (0x3ffffU & 
                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[5U] 
                                         >> 9U)) : 0U) 
                                   >> 0x11U))));
    bufp->fullBit(oldp+791,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_valid)
                                     ? (0x3ffffU & 
                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[5U] 
                                         >> 9U)) : 0U) 
                                   >> 0x10U))));
    bufp->fullCData(oldp+792,((0xffU & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_valid)
                                          ? (0x3ffffU 
                                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[5U] 
                                                >> 9U))
                                          : 0U) >> 8U))),8);
    bufp->fullCData(oldp+793,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_valid)
                                ? (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[5U] 
                                            >> 9U))
                                : 0U)),8);
    bufp->fullCData(oldp+794,((0x1fU & (IData)((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_valid)
                                                  ? 
                                                 (0x1fffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[5U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[4U]))))
                                                  : 0ULL) 
                                                >> 0x20U)))),5);
    bufp->fullIData(oldp+795,((IData)(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_valid)
                                        ? (0x1fffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[5U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[4U]))))
                                        : 0ULL))),32);
    bufp->fullIData(oldp+796,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[3U]),32);
    bufp->fullCData(oldp+797,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wstrb_mem_mem),4);
    bufp->fullIData(oldp+798,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_valid)
                                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[2U]
                                : 0U)),32);
    bufp->fullIData(oldp+799,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[1U]),32);
    bufp->fullIData(oldp+800,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0U]),32);
    bufp->fullBit(oldp+801,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[6U] 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+802,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[6U] 
                                   >> 0x19U))));
    bufp->fullCData(oldp+803,((0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[6U] 
                                        >> 0x11U))),8);
    bufp->fullCData(oldp+804,((0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[6U] 
                                        >> 9U))),8);
    bufp->fullCData(oldp+805,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[6U] 
                                        >> 4U))),5);
    bufp->fullIData(oldp+806,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[6U] 
                                << 0x1cU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[5U] 
                                             >> 4U))),32);
    bufp->fullIData(oldp+807,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[5U] 
                                << 0x1cU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[4U] 
                                             >> 4U))),32);
    bufp->fullIData(oldp+808,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[4U] 
                                << 0x1cU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                                             >> 4U))),32);
    bufp->fullCData(oldp+809,((0xfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U])),4);
    bufp->fullIData(oldp+810,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U]),32);
    bufp->fullIData(oldp+811,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[1U]),32);
    bufp->fullIData(oldp+812,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[0U]),32);
    bufp->fullBit(oldp+813,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_valid));
    bufp->fullCData(oldp+814,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_PC_BRANCH),2);
    bufp->fullIData(oldp+815,(((IData)(4U) + vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__pipeline_data)),32);
    bufp->fullIData(oldp+816,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__branchPC),32);
    bufp->fullIData(oldp+817,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__branchPC_temp),32);
    bufp->fullBit(oldp+818,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__branchPC_temp_valid));
    bufp->fullIData(oldp+819,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp),32);
    bufp->fullBit(oldp+820,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp_valid));
    bufp->fullIData(oldp+821,((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)),32);
    bufp->fullIData(oldp+822,((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                       >> 0x20U))),32);
    bufp->fullBit(oldp+823,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__eq));
    bufp->fullBit(oldp+824,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__lt));
    bufp->fullCData(oldp+825,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__itype),3);
    bufp->fullBit(oldp+826,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_regimm_inst) 
                             | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_reg_inst) 
                                | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_shamt_inst) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__regWriteDataSel) 
                                      | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BL_TYPE) 
                                         | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_JIRL_TYPE) 
                                            | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_u_inst)))))))));
    bufp->fullBit(oldp+827,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_store_inst));
    bufp->fullBit(oldp+828,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__regWriteDataSel));
    bufp->fullBit(oldp+829,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__alusel1));
    bufp->fullBit(oldp+830,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__alusel2));
    bufp->fullCData(oldp+831,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__aluctrl),5);
    bufp->fullBit(oldp+832,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__unsignBranchCmp));
    bufp->fullBit(oldp+833,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BL_TYPE));
    bufp->fullBit(oldp+834,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ORI_TYPE) 
                             | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_XORI_TYPE) 
                                | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ANDI_TYPE)))));
    bufp->fullBit(oldp+835,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_JIRL_TYPE));
    bufp->fullBit(oldp+836,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_branch_inst));
    bufp->fullCData(oldp+837,((((IData)((0x20000000ULL 
                                         == (0xff000000ULL 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out))) 
                                << 5U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_W_TYPE) 
                                           << 4U) | 
                                          (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_HU_TYPE) 
                                            << 3U) 
                                           | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_H_TYPE) 
                                               << 2U) 
                                              | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_BU_TYPE) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_B_TYPE))))))),8);
    bufp->fullCData(oldp+838,((((IData)((0x21000000ULL 
                                         == (0xff000000ULL 
                                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out))) 
                                << 3U) | (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ST_W_TYPE) 
                                           << 2U) | 
                                          (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ST_H_TYPE) 
                                            << 1U) 
                                           | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ST_B_TYPE))))),8);
    bufp->fullCData(oldp+839,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_id),5);
    bufp->fullIData(oldp+840,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id),32);
    bufp->fullIData(oldp+841,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_id),32);
    bufp->fullIData(oldp+842,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb),32);
    bufp->fullIData(oldp+843,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__immout_id),32);
    bufp->fullIData(oldp+844,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id_true),32);
    bufp->fullIData(oldp+845,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_id_true),32);
    bufp->fullCData(oldp+846,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_mem),5);
    bufp->fullBit(oldp+847,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_valid) 
                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[5U] 
                                >> 0x1aU))));
    bufp->fullIData(oldp+848,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluout_mem),32);
    bufp->fullIData(oldp+849,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_JIRL_TYPE)
                                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id_true
                                : (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                           >> 0x20U)))),32);
    bufp->fullBit(oldp+850,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memRead_ex));
    bufp->fullBit(oldp+851,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid) 
                             & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U])));
    bufp->fullBit(oldp+852,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                     ? (0x7fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U] 
                                                 >> 6U))
                                     : 0U) >> 6U))));
    bufp->fullBit(oldp+853,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                     ? (0x7fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U] 
                                                 >> 6U))
                                     : 0U) >> 5U))));
    bufp->fullCData(oldp+854,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                ? (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U] 
                                            >> 6U))
                                : 0U)),5);
    bufp->fullBit(oldp+855,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                     ? (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U] 
                                                 >> 1U))
                                     : 0U) >> 4U))));
    bufp->fullBit(oldp+856,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                     ? (0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U] 
                                                 >> 1U))
                                     : 0U) >> 3U))));
    bufp->fullCData(oldp+857,((3U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                       ? (0x1fU & (
                                                   vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U] 
                                                   >> 1U))
                                       : 0U) >> 1U))),2);
    bufp->fullBit(oldp+858,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                              ? (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U] 
                                       >> 1U)) : 0U)));
    bufp->fullBit(oldp+859,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                     ? (0x3ffffU & 
                                        ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U] 
                                          << 0x11U) 
                                         | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[6U] 
                                            >> 0xfU)))
                                     : 0U) >> 0x11U))));
    bufp->fullBit(oldp+860,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                     ? (0x3ffffU & 
                                        ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U] 
                                          << 0x11U) 
                                         | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[6U] 
                                            >> 0xfU)))
                                     : 0U) >> 0x10U))));
    bufp->fullCData(oldp+861,((0xffU & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                          ? (0x3ffffU 
                                             & ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U] 
                                                 << 0x11U) 
                                                | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[6U] 
                                                   >> 0xfU)))
                                          : 0U) >> 8U))),8);
    bufp->fullCData(oldp+862,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                ? (0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[6U] 
                                            >> 0xfU))
                                : 0U)),8);
    bufp->fullBit(oldp+863,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alusel1_ex));
    bufp->fullBit(oldp+864,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alusel2_ex));
    bufp->fullCData(oldp+865,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluctrl_ex),5);
    bufp->fullIData(oldp+866,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex),32);
    bufp->fullIData(oldp+867,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex),32);
    bufp->fullIData(oldp+868,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__pc_ex),32);
    bufp->fullIData(oldp+869,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[6U] 
                                    << 0x11U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[5U] 
                                                 >> 0xfU))
                                : 0U)),32);
    bufp->fullIData(oldp+870,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[5U] 
                                    << 0x11U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[4U] 
                                                 >> 0xfU))
                                : 0U)),32);
    bufp->fullIData(oldp+871,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[4U] 
                                    << 0x11U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[3U] 
                                                 >> 0xfU))
                                : 0U)),32);
    bufp->fullCData(oldp+872,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_no_ex),5);
    bufp->fullCData(oldp+873,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rk_no_ex),5);
    bufp->fullCData(oldp+874,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_ex),5);
    bufp->fullIData(oldp+875,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[2U]
                                : 0U)),32);
    bufp->fullBit(oldp+876,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid) 
                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U] 
                                >> 1U))));
    bufp->fullBit(oldp+877,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid) 
                             & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[6U] 
                                >> 0x1fU))));
    bufp->fullIData(oldp+878,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)
                                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[0U]
                                : Vsimu_top__ConstPool__CONST_h3cc724c7_0[0U])),32);
    bufp->fullIData(oldp+879,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluout_ex),32);
    bufp->fullBit(oldp+880,((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divEn)) 
                                   | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divEn) 
                                      & (0x21U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__count)))))));
    bufp->fullCData(oldp+881,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wstrb_mem_mem),4);
    bufp->fullBit(oldp+882,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__is_unsign_load_mem));
    bufp->fullBit(oldp+883,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memRead_mem));
    bufp->fullBit(oldp+884,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memWriteEn_mem));
    bufp->fullIData(oldp+885,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_valid)
                                ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[2U]
                                : 0U)),32);
    bufp->fullBit(oldp+886,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_valid)
                                     ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[5U] 
                                        >> 0x1bU) : 0U) 
                                   >> 4U))));
    bufp->fullBit(oldp+887,((1U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_valid)
                                     ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[5U] 
                                        >> 0x1bU) : 0U) 
                                   >> 3U))));
    bufp->fullCData(oldp+888,((3U & (((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_valid)
                                       ? (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[5U] 
                                          >> 0x1bU)
                                       : 0U) >> 1U))),2);
    bufp->fullBit(oldp+889,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_valid)
                              ? (1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[5U] 
                                       >> 0x1bU)) : 0U)));
    bufp->fullIData(oldp+890,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[3U]),32);
    bufp->fullIData(oldp+891,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[1U]),32);
    bufp->fullIData(oldp+892,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0U]),32);
    bufp->fullIData(oldp+893,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp),32);
    bufp->fullBit(oldp+894,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid));
    bufp->fullBit(oldp+895,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_control_data_wb 
                                   >> 0x11U))));
    bufp->fullBit(oldp+896,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_control_data_wb 
                                   >> 0x10U))));
    bufp->fullCData(oldp+897,((0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_control_data_wb 
                                        >> 8U))),8);
    bufp->fullCData(oldp+898,((0xffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_control_data_wb)),8);
    bufp->fullIData(oldp+899,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_valid)
                                ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[6U] 
                                    << 0x1cU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[5U] 
                                                 >> 4U))
                                : 0U)),32);
    bufp->fullIData(oldp+900,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_valid)
                                ? ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[5U] 
                                    << 0x1cU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[4U] 
                                                 >> 4U))
                                : 0U)),32);
    bufp->fullBit(oldp+901,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_control_data_wb 
                                   >> 0x10U))));
    bufp->fullIData(oldp+902,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[4U] 
                                << 0x1cU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                                             >> 4U))),32);
    bufp->fullCData(oldp+903,((0xfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U])),4);
    bufp->fullIData(oldp+904,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[1U]),32);
    bufp->fullCData(oldp+905,((0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_control_data_wb 
                                        >> 8U))),8);
    bufp->fullCData(oldp+906,((0xffU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_control_data_wb)),8);
    bufp->fullIData(oldp+907,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[0U]),32);
    bufp->fullBit(oldp+908,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_valid));
    bufp->fullBit(oldp+909,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_cnt_inst));
    bufp->fullQData(oldp+910,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_timer_64),64);
    bufp->fullCData(oldp+912,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_inst_ld_en),8);
    bufp->fullIData(oldp+913,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_ld_paddr),32);
    bufp->fullIData(oldp+914,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_ld_vaddr),32);
    bufp->fullCData(oldp+915,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_inst_st_en),8);
    bufp->fullIData(oldp+916,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_st_paddr),32);
    bufp->fullIData(oldp+917,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_st_vaddr),32);
    bufp->fullIData(oldp+918,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_st_data),32);
    bufp->fullBit(oldp+919,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_csr_rstat_en));
    bufp->fullIData(oldp+920,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_csr_data),32);
    bufp->fullBit(oldp+921,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_wen));
    bufp->fullCData(oldp+922,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_wdest),8);
    bufp->fullIData(oldp+923,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_wdata),32);
    bufp->fullIData(oldp+924,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_pc),32);
    bufp->fullIData(oldp+925,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_inst),32);
    bufp->fullBit(oldp+926,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_excp_flush));
    bufp->fullBit(oldp+927,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_ertn));
    bufp->fullCData(oldp+928,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_csr_ecode),6);
    bufp->fullBit(oldp+929,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_tlbfill_en));
    bufp->fullCData(oldp+930,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_rand_index),5);
    bufp->fullBit(oldp+931,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__trap));
    bufp->fullCData(oldp+932,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__trap_code),8);
    bufp->fullQData(oldp+933,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cycleCnt),64);
    bufp->fullQData(oldp+935,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instrCnt),64);
    bufp->fullIData(oldp+937,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[0]),32);
    bufp->fullIData(oldp+938,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[1]),32);
    bufp->fullIData(oldp+939,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[2]),32);
    bufp->fullIData(oldp+940,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[3]),32);
    bufp->fullIData(oldp+941,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[4]),32);
    bufp->fullIData(oldp+942,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[5]),32);
    bufp->fullIData(oldp+943,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[6]),32);
    bufp->fullIData(oldp+944,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[7]),32);
    bufp->fullIData(oldp+945,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[8]),32);
    bufp->fullIData(oldp+946,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[9]),32);
    bufp->fullIData(oldp+947,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[10]),32);
    bufp->fullIData(oldp+948,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[11]),32);
    bufp->fullIData(oldp+949,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[12]),32);
    bufp->fullIData(oldp+950,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[13]),32);
    bufp->fullIData(oldp+951,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[14]),32);
    bufp->fullIData(oldp+952,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[15]),32);
    bufp->fullIData(oldp+953,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[16]),32);
    bufp->fullIData(oldp+954,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[17]),32);
    bufp->fullIData(oldp+955,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[18]),32);
    bufp->fullIData(oldp+956,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[19]),32);
    bufp->fullIData(oldp+957,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[20]),32);
    bufp->fullIData(oldp+958,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[21]),32);
    bufp->fullIData(oldp+959,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[22]),32);
    bufp->fullIData(oldp+960,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[23]),32);
    bufp->fullIData(oldp+961,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[24]),32);
    bufp->fullIData(oldp+962,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[25]),32);
    bufp->fullIData(oldp+963,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[26]),32);
    bufp->fullIData(oldp+964,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[27]),32);
    bufp->fullIData(oldp+965,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[28]),32);
    bufp->fullIData(oldp+966,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[29]),32);
    bufp->fullIData(oldp+967,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[30]),32);
    bufp->fullIData(oldp+968,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs[31]),32);
    bufp->fullIData(oldp+969,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_csr_ecode),32);
    bufp->fullQData(oldp+970,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_pc))),64);
    bufp->fullQData(oldp+972,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                              [1U]))),64);
    bufp->fullQData(oldp+974,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                              [2U]))),64);
    bufp->fullQData(oldp+976,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                              [3U]))),64);
    bufp->fullQData(oldp+978,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                              [4U]))),64);
    bufp->fullQData(oldp+980,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                              [5U]))),64);
    bufp->fullQData(oldp+982,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                              [6U]))),64);
    bufp->fullQData(oldp+984,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                              [7U]))),64);
    bufp->fullQData(oldp+986,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                              [8U]))),64);
    bufp->fullQData(oldp+988,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                              [9U]))),64);
    bufp->fullQData(oldp+990,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                              [0xaU]))),64);
    bufp->fullQData(oldp+992,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                              [0xbU]))),64);
    bufp->fullQData(oldp+994,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                              [0xcU]))),64);
    bufp->fullQData(oldp+996,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                              [0xdU]))),64);
    bufp->fullQData(oldp+998,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                              [0xeU]))),64);
    bufp->fullQData(oldp+1000,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                               [0xfU]))),64);
    bufp->fullQData(oldp+1002,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                               [0x10U]))),64);
    bufp->fullQData(oldp+1004,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                               [0x11U]))),64);
    bufp->fullQData(oldp+1006,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                               [0x12U]))),64);
    bufp->fullQData(oldp+1008,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                               [0x13U]))),64);
    bufp->fullQData(oldp+1010,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                               [0x14U]))),64);
    bufp->fullQData(oldp+1012,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                               [0x15U]))),64);
    bufp->fullQData(oldp+1014,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                               [0x16U]))),64);
    bufp->fullQData(oldp+1016,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                               [0x17U]))),64);
    bufp->fullQData(oldp+1018,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                               [0x18U]))),64);
    bufp->fullQData(oldp+1020,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                               [0x19U]))),64);
    bufp->fullQData(oldp+1022,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                               [0x1aU]))),64);
    bufp->fullQData(oldp+1024,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                               [0x1bU]))),64);
    bufp->fullQData(oldp+1026,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                               [0x1cU]))),64);
    bufp->fullQData(oldp+1028,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                               [0x1dU]))),64);
    bufp->fullQData(oldp+1030,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                               [0x1eU]))),64);
    bufp->fullQData(oldp+1032,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regs
                                               [0x1fU]))),64);
    bufp->fullQData(oldp+1034,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_wdata))),64);
    bufp->fullQData(oldp+1036,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_ld_paddr))),64);
    bufp->fullQData(oldp+1038,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_ld_vaddr))),64);
    bufp->fullQData(oldp+1040,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_st_paddr))),64);
    bufp->fullQData(oldp+1042,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_st_vaddr))),64);
    bufp->fullQData(oldp+1044,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cmt_st_data))),64);
    bufp->fullCData(oldp+1046,((7U & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__trap_code))),3);
    bufp->fullBit(oldp+1047,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__pipeline_valid));
    bufp->fullBit(oldp+1048,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divUnsigned));
    bufp->fullBit(oldp+1049,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divEn));
    bufp->fullIData(oldp+1050,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__quotient),32);
    bufp->fullIData(oldp+1051,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__remainder),32);
    bufp->fullBit(oldp+1052,((0x21U == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__count))));
    bufp->fullIData(oldp+1053,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_result),32);
    bufp->fullIData(oldp+1054,((1U & (((~ (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex 
                                           >> 0x1fU)) 
                                       & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                                          >> 0x1fU)) 
                                      | ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_sign)) 
                                         & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_result 
                                            >> 0x1fU))))),32);
    bufp->fullIData(oldp+1055,((1U & (~ (IData)((1ULL 
                                                 & (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)) 
                                                     + 
                                                     ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_b)) 
                                                      + (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_cin)))) 
                                                    >> 0x20U)))))),32);
    bufp->fullIData(oldp+1056,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_b),32);
    bufp->fullBit(oldp+1057,((1U & (IData)((1ULL & 
                                            (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)) 
                                              + ((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_b)) 
                                                 + (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_cin)))) 
                                             >> 0x20U))))));
    bufp->fullBit(oldp+1058,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_cin));
    bufp->fullQData(oldp+1059,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__mul_result),64);
    bufp->fullBit(oldp+1061,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divUnsigned)))));
    bufp->fullIData(oldp+1062,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_u),32);
    bufp->fullIData(oldp+1063,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__remainder_u),32);
    bufp->fullIData(oldp+1064,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                                 >> 0x1fU) ? (- vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)
                                 : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)),32);
    bufp->fullIData(oldp+1065,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex 
                                 >> 0x1fU) ? (- vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)
                                 : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)),32);
    bufp->fullBit(oldp+1066,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                              >> 0x1fU)));
    bufp->fullBit(oldp+1067,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex 
                              >> 0x1fU)));
    bufp->fullBit(oldp+1068,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_sign));
    bufp->fullIData(oldp+1069,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_sign)
                                 ? (- vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_u)
                                 : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_u)),32);
    bufp->fullIData(oldp+1070,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                                 >> 0x1fU) ? (- vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__remainder_u)
                                 : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__remainder_u)),32);
    bufp->fullIData(oldp+1071,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divUnsigned)
                                 ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex
                                 : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                                     >> 0x1fU) ? (- vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)
                                     : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex))),32);
    bufp->fullIData(oldp+1072,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divUnsigned)
                                 ? vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex
                                 : ((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex 
                                     >> 0x1fU) ? (- vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)
                                     : vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex))),32);
    bufp->fullIData(oldp+1073,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__dividend_reg),32);
    bufp->fullQData(oldp+1074,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__minuend),33);
    bufp->fullCData(oldp+1076,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__count),6);
    bufp->fullQData(oldp+1077,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__minuend_shifted),33);
    bufp->fullQData(oldp+1079,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__minuend_next),33);
    bufp->fullIData(oldp+1081,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__dividend_reg 
                                << 1U)),32);
    bufp->fullQData(oldp+1082,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__difference),33);
    bufp->fullBit(oldp+1084,((1U & (~ (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__difference 
                                               >> 0x20U))))));
    bufp->fullBit(oldp+1085,((0U == (0x3ffU & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                       >> 0x16U))))));
    bufp->fullBit(oldp+1086,((1U == (0x3ffU & (IData)(
                                                      (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                       >> 0x16U))))));
    bufp->fullBit(oldp+1087,((1U == (0x7fU & (IData)(
                                                     (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                      >> 0x19U))))));
    bufp->fullBit(oldp+1088,((1U == (0xfU & (IData)(
                                                    (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                     >> 0x1cU))))));
    bufp->fullBit(oldp+1089,((0x10U == (0x7fU & (IData)(
                                                        (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0x19U))))));
    bufp->fullBit(oldp+1090,((0xaU == (0x3fU & (IData)(
                                                       (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 0x1aU))))));
    bufp->fullBit(oldp+1091,((1U == (3U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                   >> 0x1eU))))));
    bufp->fullBit(oldp+1092,((IData)((0x100000ULL == 
                                      (0xffff8000ULL 
                                       & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)))));
    bufp->fullBit(oldp+1093,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SUB_TYPE));
    bufp->fullBit(oldp+1094,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SLT_TYPE));
    bufp->fullBit(oldp+1095,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SLTU_TYPE));
    bufp->fullBit(oldp+1096,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_NOR_TYPE));
    bufp->fullBit(oldp+1097,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_AND_TYPE));
    bufp->fullBit(oldp+1098,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_OR_TYPE));
    bufp->fullBit(oldp+1099,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_XOR_TYPE));
    bufp->fullBit(oldp+1100,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SLL_TYPE));
    bufp->fullBit(oldp+1101,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SRL_TYPE));
    bufp->fullBit(oldp+1102,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SRA_TYPE));
    bufp->fullBit(oldp+1103,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_MUL_TYPE));
    bufp->fullBit(oldp+1104,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_MULH_TYPE));
    bufp->fullBit(oldp+1105,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_MULHU_TYPE));
    bufp->fullBit(oldp+1106,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_DIV_TYPE));
    bufp->fullBit(oldp+1107,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_MOD_TYPE));
    bufp->fullBit(oldp+1108,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_DIVU_TYPE));
    bufp->fullBit(oldp+1109,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_MODU_TYPE));
    bufp->fullBit(oldp+1110,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SLLI_TYPE));
    bufp->fullBit(oldp+1111,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SRLI_TYPE));
    bufp->fullBit(oldp+1112,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SRAI_TYPE));
    bufp->fullBit(oldp+1113,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SLTI_TYPE));
    bufp->fullBit(oldp+1114,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_SLTUI_TYPE));
    bufp->fullBit(oldp+1115,((IData)((0x2800000ULL 
                                      == (0xffc00000ULL 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)))));
    bufp->fullBit(oldp+1116,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ANDI_TYPE));
    bufp->fullBit(oldp+1117,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ORI_TYPE));
    bufp->fullBit(oldp+1118,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_XORI_TYPE));
    bufp->fullCData(oldp+1119,((7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                              >> 0x19U)))),3);
    bufp->fullBit(oldp+1120,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LUI_TYPE));
    bufp->fullBit(oldp+1121,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_PCADDU12I_TYPE));
    bufp->fullBit(oldp+1122,((IData)((0x20000000ULL 
                                      == (0xff000000ULL 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)))));
    bufp->fullBit(oldp+1123,((IData)((0x21000000ULL 
                                      == (0xff000000ULL 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)))));
    bufp->fullBit(oldp+1124,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_B_TYPE));
    bufp->fullBit(oldp+1125,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_H_TYPE));
    bufp->fullBit(oldp+1126,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_W_TYPE));
    bufp->fullBit(oldp+1127,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ST_B_TYPE));
    bufp->fullBit(oldp+1128,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ST_H_TYPE));
    bufp->fullBit(oldp+1129,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ST_W_TYPE));
    bufp->fullBit(oldp+1130,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_BU_TYPE));
    bufp->fullBit(oldp+1131,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_HU_TYPE));
    bufp->fullCData(oldp+1132,((0xfU & (IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                >> 0x1aU)))),4);
    bufp->fullBit(oldp+1133,((IData)((0x50000000ULL 
                                      == (0xfc000000ULL 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)))));
    bufp->fullBit(oldp+1134,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BEQ_TYPE));
    bufp->fullBit(oldp+1135,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BNE_TYPE));
    bufp->fullBit(oldp+1136,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BLT_TYPE));
    bufp->fullBit(oldp+1137,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BGE_TYPE));
    bufp->fullBit(oldp+1138,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BLTU_TYPE));
    bufp->fullBit(oldp+1139,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BGEU_TYPE));
    bufp->fullBit(oldp+1140,((0x54U == (0x1ffffU & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0xfU))))));
    bufp->fullBit(oldp+1141,((0x56U == (0x1ffffU & (IData)(
                                                           (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0xfU))))));
    bufp->fullBit(oldp+1142,((IData)((0x4000000ULL 
                                      == (0xff0003e0ULL 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)))));
    bufp->fullBit(oldp+1143,((IData)((0x4000020ULL 
                                      == (0xff0003e0ULL 
                                          & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)))));
    bufp->fullBit(oldp+1144,((IData)(((0x4000000ULL 
                                       == (0xff000000ULL 
                                           & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)) 
                                      & (0U != (0xfU 
                                                & (IData)(
                                                          (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 6U))))))));
    bufp->fullBit(oldp+1145,(0U));
    bufp->fullBit(oldp+1146,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_reg_inst));
    bufp->fullBit(oldp+1147,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_shamt_inst));
    bufp->fullBit(oldp+1148,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_regimm_inst));
    bufp->fullBit(oldp+1149,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_u_inst));
    bufp->fullBit(oldp+1150,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_b_inst));
    bufp->fullBit(oldp+1151,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT____VdfgTmp_hfa3cf28f__0) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT____VdfgTmp_hffea2556__0))));
    bufp->fullBit(oldp+1152,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_PC_BRANCH));
    bufp->fullBit(oldp+1153,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_JIRL_TYPE) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_branch_inst))));
    bufp->fullBit(oldp+1154,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT____VdfgTmp_hfa3cf28f__0) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT____VdfgTmp_h9c888c86__0))));
    bufp->fullBit(oldp+1155,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_PCADDU12I_TYPE) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT____VdfgTmp_h9c888c86__0))));
    bufp->fullBit(oldp+1156,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid));
    bufp->fullBit(oldp+1157,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U] 
                                    >> 0xcU))));
    bufp->fullBit(oldp+1158,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U] 
                                    >> 0xbU))));
    bufp->fullCData(oldp+1159,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U] 
                                         >> 6U))),5);
    bufp->fullBit(oldp+1160,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U] 
                                    >> 5U))));
    bufp->fullBit(oldp+1161,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U] 
                                    >> 4U))));
    bufp->fullCData(oldp+1162,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U] 
                                      >> 2U))),2);
    bufp->fullBit(oldp+1163,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U] 
                                    >> 1U))));
    bufp->fullBit(oldp+1164,((1U & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[7U])));
    bufp->fullBit(oldp+1165,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[6U] 
                              >> 0x1fU)));
    bufp->fullCData(oldp+1166,((0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[6U] 
                                         >> 0x17U))),8);
    bufp->fullCData(oldp+1167,((0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[6U] 
                                         >> 0xfU))),8);
    bufp->fullIData(oldp+1168,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[6U] 
                                 << 0x11U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[5U] 
                                              >> 0xfU))),32);
    bufp->fullIData(oldp+1169,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[5U] 
                                 << 0x11U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[4U] 
                                              >> 0xfU))),32);
    bufp->fullIData(oldp+1170,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[4U] 
                                 << 0x11U) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[3U] 
                                              >> 0xfU))),32);
    bufp->fullCData(oldp+1171,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[3U] 
                                         >> 0xaU))),5);
    bufp->fullCData(oldp+1172,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[3U] 
                                         >> 5U))),5);
    bufp->fullCData(oldp+1173,((0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[3U])),5);
    bufp->fullIData(oldp+1174,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[2U]),32);
    bufp->fullIData(oldp+1175,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[1U]),32);
    bufp->fullIData(oldp+1176,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[0U]),32);
    bufp->fullBit(oldp+1177,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__MEM_forward_valid));
    bufp->fullBit(oldp+1178,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__WB_forward_valid));
    bufp->fullBit(oldp+1179,(((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT____VdfgTmp_hf7cffa19__0) 
                              | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT____VdfgTmp_h2a69b9a6__0))));
    bufp->fullBit(oldp+1180,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_mem) 
                               == (0x1fU & (IData)(
                                                   (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                    >> 5U)))) 
                              | ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_id) 
                                 == (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_mem)))));
    bufp->fullBit(oldp+1181,((((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__alusel1)) 
                               & (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT____VdfgTmp_hf7cffa19__0)) 
                              | (((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__control__alusel2)) 
                                  & ((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_ex) 
                                     == (0x1fU & (IData)(
                                                         (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0xaU))))) 
                                 | (IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT____VdfgTmp_h2a69b9a6__0)))));
    bufp->fullBit(oldp+1182,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT__stall));
    bufp->fullBit(oldp+1183,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__pipeline_valid));
    bufp->fullIData(oldp+1184,((IData)((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__pipeline_data 
                                        >> 0x20U))),32);
    bufp->fullIData(oldp+1185,((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__pipeline_data)),32);
    bufp->fullBit(oldp+1186,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_valid));
    bufp->fullBit(oldp+1187,((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[5U] 
                              >> 0x1fU)));
    bufp->fullBit(oldp+1188,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[5U] 
                                    >> 0x1eU))));
    bufp->fullCData(oldp+1189,((3U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[5U] 
                                      >> 0x1cU))),2);
    bufp->fullBit(oldp+1190,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[5U] 
                                    >> 0x1bU))));
    bufp->fullBit(oldp+1191,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[5U] 
                                    >> 0x1aU))));
    bufp->fullBit(oldp+1192,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[5U] 
                                    >> 0x19U))));
    bufp->fullCData(oldp+1193,((0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[5U] 
                                         >> 0x11U))),8);
    bufp->fullCData(oldp+1194,((0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[5U] 
                                         >> 9U))),8);
    bufp->fullCData(oldp+1195,((0xfU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[5U] 
                                        >> 5U))),4);
    bufp->fullCData(oldp+1196,((0x1fU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[5U])),5);
    bufp->fullIData(oldp+1197,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[4U]),32);
    bufp->fullIData(oldp+1198,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[3U]),32);
    bufp->fullIData(oldp+1199,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[2U]),32);
    bufp->fullIData(oldp+1200,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[1U]),32);
    bufp->fullIData(oldp+1201,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[0U]),32);
    bufp->fullIData(oldp+1202,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[0]),32);
    bufp->fullIData(oldp+1203,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[1]),32);
    bufp->fullIData(oldp+1204,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[2]),32);
    bufp->fullIData(oldp+1205,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[3]),32);
    bufp->fullIData(oldp+1206,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[4]),32);
    bufp->fullIData(oldp+1207,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[5]),32);
    bufp->fullIData(oldp+1208,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[6]),32);
    bufp->fullIData(oldp+1209,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[7]),32);
    bufp->fullIData(oldp+1210,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[8]),32);
    bufp->fullIData(oldp+1211,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[9]),32);
    bufp->fullIData(oldp+1212,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[10]),32);
    bufp->fullIData(oldp+1213,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[11]),32);
    bufp->fullIData(oldp+1214,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[12]),32);
    bufp->fullIData(oldp+1215,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[13]),32);
    bufp->fullIData(oldp+1216,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[14]),32);
    bufp->fullIData(oldp+1217,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[15]),32);
    bufp->fullIData(oldp+1218,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[16]),32);
    bufp->fullIData(oldp+1219,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[17]),32);
    bufp->fullIData(oldp+1220,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[18]),32);
    bufp->fullIData(oldp+1221,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[19]),32);
    bufp->fullIData(oldp+1222,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[20]),32);
    bufp->fullIData(oldp+1223,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[21]),32);
    bufp->fullIData(oldp+1224,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[22]),32);
    bufp->fullIData(oldp+1225,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[23]),32);
    bufp->fullIData(oldp+1226,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[24]),32);
    bufp->fullIData(oldp+1227,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[25]),32);
    bufp->fullIData(oldp+1228,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[26]),32);
    bufp->fullIData(oldp+1229,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[27]),32);
    bufp->fullIData(oldp+1230,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[28]),32);
    bufp->fullIData(oldp+1231,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[29]),32);
    bufp->fullIData(oldp+1232,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[30]),32);
    bufp->fullIData(oldp+1233,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[31]),32);
    bufp->fullBit(oldp+1234,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[6U] 
                                    >> 0x1aU))));
    bufp->fullBit(oldp+1235,((1U & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[6U] 
                                    >> 0x19U))));
    bufp->fullCData(oldp+1236,((0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[6U] 
                                         >> 0x11U))),8);
    bufp->fullCData(oldp+1237,((0xffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[6U] 
                                         >> 9U))),8);
    bufp->fullCData(oldp+1238,((0x1fU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[6U] 
                                         >> 4U))),5);
    bufp->fullIData(oldp+1239,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[6U] 
                                 << 0x1cU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[5U] 
                                              >> 4U))),32);
    bufp->fullIData(oldp+1240,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[5U] 
                                 << 0x1cU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[4U] 
                                              >> 4U))),32);
    bufp->fullIData(oldp+1241,(((vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[4U] 
                                 << 0x1cU) | (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[3U] 
                                              >> 4U))),32);
    bufp->fullCData(oldp+1242,((0xfU & vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[3U])),4);
    bufp->fullIData(oldp+1243,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[2U]),32);
    bufp->fullIData(oldp+1244,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[1U]),32);
    bufp->fullIData(oldp+1245,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[0U]),32);
    bufp->fullBit(oldp+1246,((1U & (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_ar_disable)))));
    bufp->fullBit(oldp+1247,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_ar_disable));
    bufp->fullBit(oldp+1248,((1U & vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random)));
    bufp->fullBit(oldp+1249,((1U & ((vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                     >> 1U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw_disable)))));
    bufp->fullBit(oldp+1250,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_aw_disable));
    bufp->fullBit(oldp+1251,((1U & (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                    >> 1U))));
    bufp->fullBit(oldp+1252,((1U & (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                    >> 2U))));
    bufp->fullBit(oldp+1253,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_no_delay));
    bufp->fullBit(oldp+1254,((1U & (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                    >> 3U))));
    bufp->fullIData(oldp+1255,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random),23);
    bufp->fullIData(oldp+1256,(((0x7ffffeU & (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                              << 1U)) 
                                | (1U & VL_REDXOR_32(
                                                     (0x420000U 
                                                      & vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random))))),23);
    bufp->fullBit(oldp+1257,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_short_delay));
    bufp->fullBit(oldp+1258,((1U & ((vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                     >> 4U) | (IData)(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_w_disable)))));
    bufp->fullBit(oldp+1259,(vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_w_disable));
    bufp->fullBit(oldp+1260,((1U & (vlSelf->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                    >> 4U))));
    bufp->fullQData(oldp+1261,((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)) 
                                 << 0x2bU) | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arsize)) 
                                               << 0x28U) 
                                              | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen)) 
                                                  << 0x24U) 
                                                 | (((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr)) 
                                                     << 4U) 
                                                    | (QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arid))))))),45);
    bufp->fullIData(oldp+1263,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr),32);
    bufp->fullIData(oldp+1264,(((((IData)(1U) + (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr 
                                                 >> 2U)) 
                                 << 2U) | (3U & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr))),32);
    bufp->fullIData(oldp+1265,((((- (IData)((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)))) 
                                 & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr) 
                                | (((- (IData)((1U 
                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)))) 
                                    & ((((IData)(1U) 
                                         + (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr 
                                            >> 2U)) 
                                        << 2U) | (3U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr))) 
                                   | ((- (IData)((2U 
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
                                            | (3U & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr))))))),32);
    bufp->fullIData(oldp+1266,(((0xffffffc0U & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr) 
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
    bufp->fullCData(oldp+1267,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst),2);
    bufp->fullBit(oldp+1268,((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst))));
    bufp->fullBit(oldp+1269,((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst))));
    bufp->fullBit(oldp+1270,((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst))));
    bufp->fullCData(oldp+1271,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arid),4);
    bufp->fullCData(oldp+1272,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen),4);
    bufp->fullBit(oldp+1273,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen_last));
    bufp->fullCData(oldp+1274,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arsize),3);
    bufp->fullBit(oldp+1275,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid));
    bufp->fullQData(oldp+1276,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas),45);
    bufp->fullIData(oldp+1278,((IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                                        >> 0xdU))),32);
    bufp->fullCData(oldp+1279,((3U & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                                              >> 0xbU)))),2);
    bufp->fullCData(oldp+1280,((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas))),4);
    bufp->fullCData(oldp+1281,((0xfU & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                                                >> 4U)))),4);
    bufp->fullCData(oldp+1282,((7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                                              >> 8U)))),3);
    bufp->fullBit(oldp+1283,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid));
    bufp->fullCData(oldp+1284,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur),4);
    bufp->fullQData(oldp+1285,((((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr)) 
                                 << 0xdU) | (QData)((IData)(
                                                            (((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst) 
                                                              << 0xbU) 
                                                             | (((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awsize) 
                                                                 << 8U) 
                                                                | (((IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awlen) 
                                                                    << 4U) 
                                                                   | (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awid)))))))),45);
    bufp->fullIData(oldp+1287,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr),32);
    bufp->fullIData(oldp+1288,(((((IData)(1U) + (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr 
                                                 >> 2U)) 
                                 << 2U) | (3U & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr))),32);
    bufp->fullIData(oldp+1289,((((- (IData)((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst)))) 
                                 & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr) 
                                | (((- (IData)((1U 
                                                == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst)))) 
                                    & ((((IData)(1U) 
                                         + (vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr 
                                            >> 2U)) 
                                        << 2U) | (3U 
                                                  & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr))) 
                                   | ((- (IData)((2U 
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
                                            | (3U & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr))))))),32);
    bufp->fullIData(oldp+1290,(((0xffffffc0U & vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr) 
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
    bufp->fullCData(oldp+1291,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst),2);
    bufp->fullBit(oldp+1292,((0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst))));
    bufp->fullBit(oldp+1293,((1U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst))));
    bufp->fullBit(oldp+1294,((2U == (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst))));
    bufp->fullCData(oldp+1295,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awid),4);
    bufp->fullCData(oldp+1296,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awlen),4);
    bufp->fullCData(oldp+1297,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awsize),3);
    bufp->fullBit(oldp+1298,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid));
    bufp->fullQData(oldp+1299,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas),45);
    bufp->fullIData(oldp+1301,((IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                        >> 0xdU))),32);
    bufp->fullCData(oldp+1302,((3U & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                              >> 0xbU)))),2);
    bufp->fullCData(oldp+1303,((0xfU & (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas))),4);
    bufp->fullCData(oldp+1304,((0xfU & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                                >> 4U)))),4);
    bufp->fullCData(oldp+1305,((7U & (IData)((vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                              >> 8U)))),3);
    bufp->fullBit(oldp+1306,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_valid));
    bufp->fullBit(oldp+1307,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_allow_out));
    bufp->fullBit(oldp+1308,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid));
    bufp->fullCData(oldp+1309,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_datas),4);
    bufp->fullBit(oldp+1310,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid)))));
    bufp->fullCData(oldp+1311,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wstrb),4);
    bufp->fullIData(oldp+1312,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wdata),32);
    bufp->fullBit(oldp+1313,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wlast));
    bufp->fullBit(oldp+1314,(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wvalid));
    bufp->fullBit(oldp+1315,(vlSelf->aclk));
    bufp->fullBit(oldp+1316,(vlSelf->aresetn));
    bufp->fullBit(oldp+1317,(vlSelf->enable_delay));
    bufp->fullIData(oldp+1318,(vlSelf->random_seed),23);
    bufp->fullBit(oldp+1319,(vlSelf->ram_ren));
    bufp->fullIData(oldp+1320,(vlSelf->ram_raddr),32);
    bufp->fullIData(oldp+1321,(vlSelf->ram_rdata),32);
    bufp->fullCData(oldp+1322,(vlSelf->ram_wen),4);
    bufp->fullIData(oldp+1323,(vlSelf->ram_waddr),32);
    bufp->fullIData(oldp+1324,(vlSelf->ram_wdata),32);
    bufp->fullIData(oldp+1325,(vlSelf->debug0_wb_pc),32);
    bufp->fullBit(oldp+1326,(vlSelf->debug0_wb_rf_wen));
    bufp->fullCData(oldp+1327,(vlSelf->debug0_wb_rf_wnum),5);
    bufp->fullIData(oldp+1328,(vlSelf->debug0_wb_rf_wdata),32);
    bufp->fullIData(oldp+1329,(vlSelf->num_data),32);
    bufp->fullBit(oldp+1330,(vlSelf->open_trace));
    bufp->fullBit(oldp+1331,(vlSelf->num_monitor));
    bufp->fullCData(oldp+1332,(vlSelf->confreg_uart_data),8);
    bufp->fullBit(oldp+1333,(vlSelf->write_uart_valid));
    bufp->fullWData(oldp+1334,(vlSelf->uart_ctr_bus),128);
    bufp->fullBit(oldp+1338,(vlSelf->uart_rx));
    bufp->fullBit(oldp+1339,(vlSelf->uart_tx));
    bufp->fullSData(oldp+1340,(vlSelf->led),16);
    bufp->fullCData(oldp+1341,(vlSelf->led_rg0),2);
    bufp->fullCData(oldp+1342,(vlSelf->led_rg1),2);
    bufp->fullCData(oldp+1343,(vlSelf->num_csn),8);
    bufp->fullCData(oldp+1344,(vlSelf->num_a_g),7);
    bufp->fullCData(oldp+1345,(vlSelf->btn_key_col),4);
    bufp->fullCData(oldp+1346,(vlSelf->btn_key_row),4);
    bufp->fullCData(oldp+1347,(vlSelf->btn_step),2);
    bufp->fullCData(oldp+1348,(vlSelf->__SYM__switch),8);
    bufp->fullBit(oldp+1349,((1U & (~ (IData)(vlSelf->aresetn)))));
    bufp->fullBit(oldp+1350,((1U & ((IData)(vlSelf->uart_rx__en0)
                                     ? ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__rx_en)) 
                                        | (IData)(vlSelf->uart_tx))
                                     : (IData)(vlSelf->uart_rx)))));
    bufp->fullBit(oldp+1351,((1U & ((~ (IData)(vlSelf->aresetn)) 
                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop)))));
    bufp->fullIData(oldp+1352,(vlSelf->__SYM__switch),32);
    bufp->fullIData(oldp+1353,(((0x8000U & ((IData)(vlSelf->__SYM__switch) 
                                            << 8U)) 
                                | ((0x2000U & ((IData)(vlSelf->__SYM__switch) 
                                               << 7U)) 
                                   | ((0x800U & ((IData)(vlSelf->__SYM__switch) 
                                                 << 6U)) 
                                      | ((0x200U & 
                                          ((IData)(vlSelf->__SYM__switch) 
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
                                                        << 1U)))))))))),32);
    bufp->fullBit(oldp+1354,(((~ (IData)((0xfU == (IData)(vlSelf->btn_key_row)))) 
                              & (0U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)))));
    bufp->fullBit(oldp+1355,(((7U == (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                              & (0xfU == (IData)(vlSelf->btn_key_row)))));
    bufp->fullBit(oldp+1356,(((~ (IData)(vlSelf->btn_step)) 
                              & (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r))));
    bufp->fullBit(oldp+1357,((1U & ((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r)) 
                                    & (IData)(vlSelf->btn_step)))));
    bufp->fullBit(oldp+1358,(((~ ((IData)(vlSelf->btn_step) 
                                  >> 1U)) & (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r))));
    bufp->fullBit(oldp+1359,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r)) 
                              & ((IData)(vlSelf->btn_step) 
                                 >> 1U))));
    bufp->fullCData(oldp+1360,((0xfU & (- (IData)((IData)(vlSelf->debug0_wb_rf_wen))))),4);
    bufp->fullIData(oldp+1361,((((0U != (0x1fU & (IData)(
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
    bufp->fullIData(oldp+1362,((((0U != (0x1fU & (IData)(
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
    bufp->fullIData(oldp+1363,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__MEM_forward_valid) 
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
    bufp->fullIData(oldp+1364,((((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__MEM_forward_valid) 
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
    bufp->fullBit(oldp+1365,(((~ (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen_last)) 
                              & (IData)(vlSelf->ram_ren))));
    bufp->fullBit(oldp+1366,((1U & ((~ (IData)(vlSelf->aresetn)) 
                                    | (IData)(vlSelf->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop)))));
    bufp->fullIData(oldp+1367,(0x20U),32);
    bufp->fullCData(oldp+1368,(0U),4);
    bufp->fullCData(oldp+1369,(0U),2);
    bufp->fullCData(oldp+1370,(0U),3);
    bufp->fullBit(oldp+1371,(1U));
    bufp->fullBit(oldp+1372,(0U));
    bufp->fullBit(oldp+1373,(vlSelf->simu_top__DOT__soc__DOT__UART_RI));
    bufp->fullIData(oldp+1374,(0x14U),32);
    bufp->fullIData(oldp+1375,(8U),32);
    bufp->fullIData(oldp+1376,(0x40U),32);
    bufp->fullIData(oldp+1377,(0x80U),32);
    bufp->fullIData(oldp+1378,(0x10U),32);
    bufp->fullBit(oldp+1379,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_rw_dma));
    bufp->fullBit(oldp+1380,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_dma));
    bufp->fullBit(oldp+1381,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_dma));
    bufp->fullIData(oldp+1382,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_addr_dma),20);
    bufp->fullIData(oldp+1383,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_wdata_dma),32);
    bufp->fullBit(oldp+1384,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_dma));
    bufp->fullBit(oldp+1385,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_ack_i));
    bufp->fullCData(oldp+1386,(0U),8);
    bufp->fullBit(oldp+1387,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_clk_dma));
    bufp->fullBit(oldp+1388,(vlSelf->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_reset_n_dma));
    bufp->fullCData(oldp+1389,(1U),4);
    bufp->fullCData(oldp+1390,(2U),4);
    bufp->fullCData(oldp+1391,(8U),4);
    bufp->fullCData(oldp+1392,(0U),5);
    bufp->fullCData(oldp+1393,(1U),5);
    bufp->fullCData(oldp+1394,(2U),5);
    bufp->fullCData(oldp+1395,(0xaU),5);
    bufp->fullCData(oldp+1396,(3U),5);
    bufp->fullCData(oldp+1397,(4U),5);
    bufp->fullCData(oldp+1398,(6U),5);
    bufp->fullCData(oldp+1399,(7U),5);
    bufp->fullCData(oldp+1400,(0x10U),5);
    bufp->fullCData(oldp+1401,(0x11U),5);
    bufp->fullCData(oldp+1402,(0x12U),5);
    bufp->fullCData(oldp+1403,(0x13U),5);
    bufp->fullCData(oldp+1404,(0x14U),5);
    bufp->fullCData(oldp+1405,(0x15U),5);
    bufp->fullCData(oldp+1406,(0x16U),5);
    bufp->fullCData(oldp+1407,(0x17U),5);
    bufp->fullCData(oldp+1408,(0x18U),5);
    bufp->fullCData(oldp+1409,(0x19U),5);
    bufp->fullCData(oldp+1410,(0x1aU),5);
    bufp->fullCData(oldp+1411,(0x1bU),5);
    bufp->fullCData(oldp+1412,(((IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI) 
                                << 1U)),4);
    bufp->fullBit(oldp+1413,((1U & (~ (IData)(vlSelf->simu_top__DOT__soc__DOT__UART_RI)))));
    bufp->fullIData(oldp+1414,(1U),32);
    bufp->fullBit(oldp+1415,(1U));
    bufp->fullCData(oldp+1416,(3U),4);
    bufp->fullCData(oldp+1417,(4U),4);
    bufp->fullCData(oldp+1418,(5U),4);
    bufp->fullCData(oldp+1419,(6U),4);
    bufp->fullCData(oldp+1420,(7U),4);
    bufp->fullCData(oldp+1421,(9U),4);
    bufp->fullCData(oldp+1422,(0xaU),4);
    bufp->fullIData(oldp+1423,(0xbU),32);
    bufp->fullIData(oldp+1424,(4U),32);
    bufp->fullIData(oldp+1425,(5U),32);
    bufp->fullCData(oldp+1426,(1U),3);
    bufp->fullCData(oldp+1427,(2U),3);
    bufp->fullCData(oldp+1428,(3U),3);
    bufp->fullCData(oldp+1429,(4U),3);
    bufp->fullCData(oldp+1430,(5U),3);
    bufp->fullCData(oldp+1431,(6U),3);
    bufp->fullBit(oldp+1432,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_awready));
    bufp->fullBit(oldp+1433,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_wready));
    bufp->fullCData(oldp+1434,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_bid),4);
    bufp->fullCData(oldp+1435,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_bresp),2);
    bufp->fullBit(oldp+1436,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_bvalid));
    bufp->fullBit(oldp+1437,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_arready));
    bufp->fullCData(oldp+1438,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rid),4);
    bufp->fullIData(oldp+1439,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rdata),32);
    bufp->fullCData(oldp+1440,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rresp),2);
    bufp->fullBit(oldp+1441,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rlast));
    bufp->fullBit(oldp+1442,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rvalid));
    bufp->fullBit(oldp+1443,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_awready));
    bufp->fullBit(oldp+1444,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_wready));
    bufp->fullCData(oldp+1445,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_bid),4);
    bufp->fullCData(oldp+1446,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_bresp),2);
    bufp->fullBit(oldp+1447,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_bvalid));
    bufp->fullBit(oldp+1448,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_arready));
    bufp->fullCData(oldp+1449,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rid),4);
    bufp->fullIData(oldp+1450,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rdata),32);
    bufp->fullCData(oldp+1451,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rresp),2);
    bufp->fullBit(oldp+1452,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rlast));
    bufp->fullBit(oldp+1453,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rvalid));
    bufp->fullCData(oldp+1454,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__BASE_ADDR[0]),5);
    bufp->fullCData(oldp+1455,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__BASE_ADDR[1]),5);
    bufp->fullCData(oldp+1456,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__BASE_ADDR[2]),5);
    bufp->fullCData(oldp+1457,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__BASE_ADDR[3]),5);
    bufp->fullCData(oldp+1458,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__BASE_ADDR[4]),5);
    bufp->fullCData(oldp+1459,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_sel_group_0),3);
    bufp->fullCData(oldp+1460,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_sel_group_1),3);
    bufp->fullIData(oldp+1461,(5U),32);
    bufp->fullIData(oldp+1462,(vlSelf->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit_int),32);
    bufp->fullIData(oldp+1463,(3U),32);
    bufp->fullIData(oldp+1464,(2U),32);
    bufp->fullBit(oldp+1465,(0U));
    bufp->fullIData(oldp+1466,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__debug1_wb_pc),32);
    bufp->fullCData(oldp+1467,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__debug1_wb_rf_wen),4);
    bufp->fullCData(oldp+1468,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__debug1_wb_rf_wnum),5);
    bufp->fullIData(oldp+1469,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__debug1_wb_rf_wdata),32);
    bufp->fullCData(oldp+1470,(2U),2);
    bufp->fullCData(oldp+1471,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_inst),4);
    bufp->fullIData(oldp+1472,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__wdata_inst),32);
    bufp->fullIData(oldp+1473,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_data_in),32);
    bufp->fullIData(oldp+1474,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_data_out),32);
    bufp->fullBit(oldp+1475,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_flush));
    bufp->fullIData(oldp+1476,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_nop),32);
    bufp->fullIData(oldp+1477,(0x1bfffffcU),32);
    bufp->fullIData(oldp+1478,(0U),32);
    bufp->fullIData(oldp+1479,(0x100000U),32);
    bufp->fullBit(oldp+1480,(0U));
    bufp->fullBit(oldp+1481,(0U));
    bufp->fullCData(oldp+1482,(0U),5);
    bufp->fullBit(oldp+1483,(0U));
    bufp->fullCData(oldp+1484,(0U),8);
    bufp->fullCData(oldp+1485,(0U),8);
    bufp->fullBit(oldp+1486,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_flush));
    bufp->fullCData(oldp+1487,(0U),4);
    bufp->fullBit(oldp+1488,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_flush));
    bufp->fullCData(oldp+1489,(0U),4);
    bufp->fullBit(oldp+1490,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_allow_out));
    bufp->fullBit(oldp+1491,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__overflow));
    bufp->fullBit(oldp+1492,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__excp_flush));
    bufp->fullBit(oldp+1493,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ertn_flush));
    bufp->fullCData(oldp+1494,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ws_csr_ecode),6);
    bufp->fullBit(oldp+1495,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__tlbfill_en));
    bufp->fullCData(oldp+1496,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rand_index),5);
    bufp->fullBit(oldp+1497,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__cnt_inst_diff));
    bufp->fullQData(oldp+1498,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__timer_64_diff),64);
    bufp->fullBit(oldp+1500,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_rstat_en_diff));
    bufp->fullIData(oldp+1501,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_data_diff),32);
    bufp->fullIData(oldp+1502,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_crmd_diff_0),32);
    bufp->fullIData(oldp+1503,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_prmd_diff_0),32);
    bufp->fullIData(oldp+1504,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_ectl_diff_0),32);
    bufp->fullIData(oldp+1505,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_estat_diff_0),32);
    bufp->fullIData(oldp+1506,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_era_diff_0),32);
    bufp->fullIData(oldp+1507,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_badv_diff_0),32);
    bufp->fullIData(oldp+1508,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_eentry_diff_0),32);
    bufp->fullIData(oldp+1509,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_tlbidx_diff_0),32);
    bufp->fullIData(oldp+1510,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_tlbehi_diff_0),32);
    bufp->fullIData(oldp+1511,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_tlbelo0_diff_0),32);
    bufp->fullIData(oldp+1512,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_tlbelo1_diff_0),32);
    bufp->fullIData(oldp+1513,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_asid_diff_0),32);
    bufp->fullIData(oldp+1514,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_save0_diff_0),32);
    bufp->fullIData(oldp+1515,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_save1_diff_0),32);
    bufp->fullIData(oldp+1516,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_save2_diff_0),32);
    bufp->fullIData(oldp+1517,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_save3_diff_0),32);
    bufp->fullIData(oldp+1518,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_tid_diff_0),32);
    bufp->fullIData(oldp+1519,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_tcfg_diff_0),32);
    bufp->fullIData(oldp+1520,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_tval_diff_0),32);
    bufp->fullIData(oldp+1521,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_ticlr_diff_0),32);
    bufp->fullIData(oldp+1522,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_llbctl_diff_0),32);
    bufp->fullIData(oldp+1523,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_tlbrentry_diff_0),32);
    bufp->fullIData(oldp+1524,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_dmw0_diff_0),32);
    bufp->fullIData(oldp+1525,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_dmw1_diff_0),32);
    bufp->fullIData(oldp+1526,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_pgdl_diff_0),32);
    bufp->fullIData(oldp+1527,(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_pgdh_diff_0),32);
    bufp->fullQData(oldp+1528,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_crmd_diff_0))),64);
    bufp->fullQData(oldp+1530,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_prmd_diff_0))),64);
    bufp->fullQData(oldp+1532,(0ULL),64);
    bufp->fullQData(oldp+1534,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_ectl_diff_0))),64);
    bufp->fullQData(oldp+1536,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_estat_diff_0))),64);
    bufp->fullQData(oldp+1538,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_era_diff_0))),64);
    bufp->fullQData(oldp+1540,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_badv_diff_0))),64);
    bufp->fullQData(oldp+1542,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_eentry_diff_0))),64);
    bufp->fullQData(oldp+1544,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_tlbidx_diff_0))),64);
    bufp->fullQData(oldp+1546,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_tlbehi_diff_0))),64);
    bufp->fullQData(oldp+1548,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_tlbelo0_diff_0))),64);
    bufp->fullQData(oldp+1550,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_tlbelo1_diff_0))),64);
    bufp->fullQData(oldp+1552,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_asid_diff_0))),64);
    bufp->fullQData(oldp+1554,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_pgdl_diff_0))),64);
    bufp->fullQData(oldp+1556,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_pgdh_diff_0))),64);
    bufp->fullQData(oldp+1558,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_save0_diff_0))),64);
    bufp->fullQData(oldp+1560,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_save1_diff_0))),64);
    bufp->fullQData(oldp+1562,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_save2_diff_0))),64);
    bufp->fullQData(oldp+1564,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_save3_diff_0))),64);
    bufp->fullQData(oldp+1566,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_tid_diff_0))),64);
    bufp->fullQData(oldp+1568,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_tcfg_diff_0))),64);
    bufp->fullQData(oldp+1570,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_tval_diff_0))),64);
    bufp->fullQData(oldp+1572,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_ticlr_diff_0))),64);
    bufp->fullQData(oldp+1574,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_llbctl_diff_0))),64);
    bufp->fullQData(oldp+1576,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_tlbrentry_diff_0))),64);
    bufp->fullQData(oldp+1578,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_dmw0_diff_0))),64);
    bufp->fullQData(oldp+1580,((QData)((IData)(vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_dmw1_diff_0))),64);
    bufp->fullIData(oldp+1582,((0x7ffU & (vlSelf->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__csr_estat_diff_0 
                                          >> 2U))),32);
    bufp->fullIData(oldp+1583,(6U),32);
    bufp->fullCData(oldp+1584,(0U),6);
    bufp->fullIData(oldp+1585,(0U),32);
    bufp->fullIData(oldp+1586,(0x20U),32);
    bufp->fullIData(oldp+1587,(0x400U),32);
    bufp->fullCData(oldp+1588,(1U),2);
    bufp->fullCData(oldp+1589,(0x20U),7);
    bufp->fullCData(oldp+1590,(0x22U),7);
    bufp->fullCData(oldp+1591,(0x24U),7);
    bufp->fullCData(oldp+1592,(0x25U),7);
    bufp->fullCData(oldp+1593,(0x28U),7);
    bufp->fullCData(oldp+1594,(0x29U),7);
    bufp->fullCData(oldp+1595,(0x2aU),7);
    bufp->fullCData(oldp+1596,(0x2bU),7);
    bufp->fullCData(oldp+1597,(0x2eU),7);
    bufp->fullCData(oldp+1598,(0x2fU),7);
    bufp->fullCData(oldp+1599,(0x30U),7);
    bufp->fullCData(oldp+1600,(0x38U),7);
    bufp->fullCData(oldp+1601,(0x39U),7);
    bufp->fullCData(oldp+1602,(0x3aU),7);
    bufp->fullCData(oldp+1603,(0x40U),7);
    bufp->fullCData(oldp+1604,(0x41U),7);
    bufp->fullCData(oldp+1605,(0x42U),7);
    bufp->fullCData(oldp+1606,(0x43U),7);
    bufp->fullCData(oldp+1607,(1U),7);
    bufp->fullCData(oldp+1608,(9U),7);
    bufp->fullCData(oldp+1609,(0x11U),7);
    bufp->fullCData(oldp+1610,(7U),3);
    bufp->fullCData(oldp+1611,(0xbU),4);
}

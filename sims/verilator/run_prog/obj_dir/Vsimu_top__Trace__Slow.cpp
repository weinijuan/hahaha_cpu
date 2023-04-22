// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vsimu_top__Syms.h"


//======================

void Vsimu_top::trace(VerilatedFstC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vsimu_top::traceInit(void* userp, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vsimu_top__Syms* __restrict vlSymsp = static_cast<Vsimu_top__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vsimu_top::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vsimu_top::traceInitTop(void* userp, VerilatedFst* tracep) {
    Vsimu_top__Syms* __restrict vlSymsp = static_cast<Vsimu_top__Syms*>(userp);
    Vsimu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vsimu_top::traceInitSub0(void* userp, VerilatedFst* tracep) {
    Vsimu_top__Syms* __restrict vlSymsp = static_cast<Vsimu_top__Syms*>(userp);
    Vsimu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1098,"DifftestInstrCommit.clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1099,"DifftestInstrCommit.coreid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+1100,"DifftestInstrCommit.index",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+1101,"DifftestInstrCommit.valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+1102,"DifftestInstrCommit.pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+1104,"instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1105,"skip",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1106,"is_TLBFILL",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1107,"TLBFILL_index",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBit(c+1108,"is_CNTinst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+1109,"timer_64_value",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+1111,"wen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1112,"wdest",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+1113,"wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+1115,"csr_rstat",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1116,"csr_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1117,"DifftestExcpEvent.clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1118,"DifftestExcpEvent.coreid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+1119,"excp_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1120,"eret",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1121,"intrNo",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1122,"cause",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+1123,"exceptionPC",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+1125,"exceptionInst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1126,"DifftestTrapEvent.clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1127,"DifftestTrapEvent.coreid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+1128,"DifftestTrapEvent.valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1129,"code",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+1130,"DifftestTrapEvent.pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1132,"cycleCnt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1134,"instrCnt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+1136,"DifftestStoreEvent.clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1137,"DifftestStoreEvent.coreid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+1138,"DifftestStoreEvent.index",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+1139,"DifftestStoreEvent.valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+1140,"storePAddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1142,"storeVAddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1144,"storeData",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+1146,"DifftestLoadEvent.clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1147,"DifftestLoadEvent.coreid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+1148,"DifftestLoadEvent.index",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+1149,"DifftestLoadEvent.valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+1150,"paddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1152,"vaddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+1154,"DifftestCSRRegState.clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1155,"DifftestCSRRegState.coreid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+1156,"crmd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1158,"prmd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1160,"euen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1162,"ecfg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1164,"estat",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1166,"era",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1168,"badv",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1170,"eentry",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1172,"tlbidx",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1174,"tlbehi",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1176,"tlbelo0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1178,"tlbelo1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1180,"asid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1182,"pgdl",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1184,"pgdh",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1186,"save0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1188,"save1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1190,"save2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1192,"save3",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1194,"tid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1196,"tcfg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1198,"tval",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1200,"ticlr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1202,"llbctl",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1204,"tlbrentry",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1206,"dmw0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1208,"dmw1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+1210,"DifftestGRegState.clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1211,"DifftestGRegState.coreid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+1212,"gpr_0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1214,"gpr_1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1216,"gpr_2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1218,"gpr_3",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1220,"gpr_4",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1222,"gpr_5",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1224,"gpr_6",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1226,"gpr_7",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1228,"gpr_8",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1230,"gpr_9",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1232,"gpr_10",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1234,"gpr_11",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1236,"gpr_12",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1238,"gpr_13",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1240,"gpr_14",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1242,"gpr_15",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1244,"gpr_16",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1246,"gpr_17",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1248,"gpr_18",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1250,"gpr_19",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1252,"gpr_20",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1254,"gpr_21",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1256,"gpr_22",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1258,"gpr_23",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1260,"gpr_24",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1262,"gpr_25",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1264,"gpr_26",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1266,"gpr_27",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1268,"gpr_28",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1270,"gpr_29",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1272,"gpr_30",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1274,"gpr_31",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+1276,"aclk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1277,"aresetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1278,"enable_delay",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1279,"random_seed",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 22,0);
        tracep->declBit(c+1280,"ram_ren",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1281,"ram_raddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1282,"ram_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1283,"ram_wen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1284,"ram_waddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1285,"ram_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1286,"debug0_wb_pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1287,"debug0_wb_rf_wen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1288,"debug0_wb_rf_wnum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+1289,"debug0_wb_rf_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1290,"num_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1291,"open_trace",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1292,"num_monitor",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1293,"confreg_uart_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+1294,"write_uart_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declArray(c+1295,"uart_ctr_bus",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 127,0);
        tracep->declBit(c+1299,"uart_rx",-1,FST_VD_INOUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1300,"uart_tx",-1,FST_VD_INOUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1301,"led",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
        tracep->declBus(c+1302,"led_rg0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1303,"led_rg1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1304,"num_csn",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+1305,"num_a_g",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+1306,"btn_key_col",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1307,"btn_key_row",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1308,"btn_step",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+1098,"DifftestInstrCommit clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1099,"DifftestInstrCommit coreid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+1100,"DifftestInstrCommit index",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+1101,"DifftestInstrCommit valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+1102,"DifftestInstrCommit pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+1104,"DifftestInstrCommit instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1105,"DifftestInstrCommit skip",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1106,"DifftestInstrCommit is_TLBFILL",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1107,"DifftestInstrCommit TLBFILL_index",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBit(c+1108,"DifftestInstrCommit is_CNTinst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+1109,"DifftestInstrCommit timer_64_value",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+1111,"DifftestInstrCommit wen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1112,"DifftestInstrCommit wdest",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+1113,"DifftestInstrCommit wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+1115,"DifftestInstrCommit csr_rstat",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1116,"DifftestInstrCommit csr_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1117,"DifftestExcpEvent clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1118,"DifftestExcpEvent coreid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+1119,"DifftestExcpEvent excp_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1120,"DifftestExcpEvent eret",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1121,"DifftestExcpEvent intrNo",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1122,"DifftestExcpEvent cause",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+1123,"DifftestExcpEvent exceptionPC",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+1125,"DifftestExcpEvent exceptionInst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1126,"DifftestTrapEvent clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1127,"DifftestTrapEvent coreid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+1128,"DifftestTrapEvent valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1129,"DifftestTrapEvent code",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+1130,"DifftestTrapEvent pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1132,"DifftestTrapEvent cycleCnt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1134,"DifftestTrapEvent instrCnt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+1136,"DifftestStoreEvent clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1137,"DifftestStoreEvent coreid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+1138,"DifftestStoreEvent index",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+1139,"DifftestStoreEvent valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+1140,"DifftestStoreEvent storePAddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1142,"DifftestStoreEvent storeVAddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1144,"DifftestStoreEvent storeData",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+1146,"DifftestLoadEvent clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1147,"DifftestLoadEvent coreid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+1148,"DifftestLoadEvent index",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+1149,"DifftestLoadEvent valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+1150,"DifftestLoadEvent paddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1152,"DifftestLoadEvent vaddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+1154,"DifftestCSRRegState clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1155,"DifftestCSRRegState coreid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+1156,"DifftestCSRRegState crmd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1158,"DifftestCSRRegState prmd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1160,"DifftestCSRRegState euen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1162,"DifftestCSRRegState ecfg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1164,"DifftestCSRRegState estat",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1166,"DifftestCSRRegState era",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1168,"DifftestCSRRegState badv",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1170,"DifftestCSRRegState eentry",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1172,"DifftestCSRRegState tlbidx",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1174,"DifftestCSRRegState tlbehi",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1176,"DifftestCSRRegState tlbelo0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1178,"DifftestCSRRegState tlbelo1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1180,"DifftestCSRRegState asid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1182,"DifftestCSRRegState pgdl",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1184,"DifftestCSRRegState pgdh",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1186,"DifftestCSRRegState save0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1188,"DifftestCSRRegState save1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1190,"DifftestCSRRegState save2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1192,"DifftestCSRRegState save3",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1194,"DifftestCSRRegState tid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1196,"DifftestCSRRegState tcfg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1198,"DifftestCSRRegState tval",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1200,"DifftestCSRRegState ticlr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1202,"DifftestCSRRegState llbctl",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1204,"DifftestCSRRegState tlbrentry",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1206,"DifftestCSRRegState dmw0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1208,"DifftestCSRRegState dmw1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+1210,"DifftestGRegState clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1211,"DifftestGRegState coreid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+1212,"DifftestGRegState gpr_0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1214,"DifftestGRegState gpr_1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1216,"DifftestGRegState gpr_2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1218,"DifftestGRegState gpr_3",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1220,"DifftestGRegState gpr_4",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1222,"DifftestGRegState gpr_5",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1224,"DifftestGRegState gpr_6",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1226,"DifftestGRegState gpr_7",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1228,"DifftestGRegState gpr_8",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1230,"DifftestGRegState gpr_9",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1232,"DifftestGRegState gpr_10",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1234,"DifftestGRegState gpr_11",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1236,"DifftestGRegState gpr_12",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1238,"DifftestGRegState gpr_13",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1240,"DifftestGRegState gpr_14",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1242,"DifftestGRegState gpr_15",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1244,"DifftestGRegState gpr_16",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1246,"DifftestGRegState gpr_17",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1248,"DifftestGRegState gpr_18",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1250,"DifftestGRegState gpr_19",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1252,"DifftestGRegState gpr_20",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1254,"DifftestGRegState gpr_21",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1256,"DifftestGRegState gpr_22",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1258,"DifftestGRegState gpr_23",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1260,"DifftestGRegState gpr_24",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1262,"DifftestGRegState gpr_25",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1264,"DifftestGRegState gpr_26",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1266,"DifftestGRegState gpr_27",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1268,"DifftestGRegState gpr_28",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1270,"DifftestGRegState gpr_29",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1272,"DifftestGRegState gpr_30",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+1274,"DifftestGRegState gpr_31",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+1331,"simu_top DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1331,"simu_top BUS_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1331,"simu_top CPU_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+1276,"simu_top aclk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1277,"simu_top aresetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1278,"simu_top enable_delay",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1279,"simu_top random_seed",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 22,0);
        tracep->declBit(c+1280,"simu_top ram_ren",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1281,"simu_top ram_raddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1282,"simu_top ram_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1283,"simu_top ram_wen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1284,"simu_top ram_waddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1285,"simu_top ram_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1286,"simu_top debug0_wb_pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1287,"simu_top debug0_wb_rf_wen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1288,"simu_top debug0_wb_rf_wnum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+1289,"simu_top debug0_wb_rf_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1290,"simu_top num_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1291,"simu_top open_trace",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1292,"simu_top num_monitor",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1293,"simu_top confreg_uart_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+1294,"simu_top write_uart_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declArray(c+1295,"simu_top uart_ctr_bus",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 127,0);
        tracep->declBit(c+1299,"simu_top uart_rx",-1,FST_VD_INOUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1300,"simu_top uart_tx",-1,FST_VD_INOUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1301,"simu_top led",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
        tracep->declBus(c+1302,"simu_top led_rg0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1303,"simu_top led_rg1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1304,"simu_top num_csn",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+1305,"simu_top num_a_g",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+1309,"simu_top switch",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+1306,"simu_top btn_key_col",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1307,"simu_top btn_key_row",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1308,"simu_top btn_step",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1331,"simu_top soc BUS_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1331,"simu_top soc DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1331,"simu_top soc CPU_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+1277,"simu_top soc aresetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1276,"simu_top soc aclk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1278,"simu_top soc enable_delay",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1279,"simu_top soc random_seed",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 22,0);
        tracep->declBus(c+1286,"simu_top soc debug0_wb_pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1289,"simu_top soc debug0_wb_rf_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1287,"simu_top soc debug0_wb_rf_wen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1288,"simu_top soc debug0_wb_rf_wnum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+1301,"simu_top soc led",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
        tracep->declBus(c+1302,"simu_top soc led_rg0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1303,"simu_top soc led_rg1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1304,"simu_top soc num_csn",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+1305,"simu_top soc num_a_g",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+1309,"simu_top soc switch",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+1306,"simu_top soc btn_key_col",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1307,"simu_top soc btn_key_row",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1308,"simu_top soc btn_step",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1281,"simu_top soc sram_raddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1282,"simu_top soc sram_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1280,"simu_top soc sram_ren",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1284,"simu_top soc sram_waddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1285,"simu_top soc sram_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1283,"simu_top soc sram_wen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBit(c+1299,"simu_top soc UART_RX",-1,FST_VD_INOUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1300,"simu_top soc UART_TX",-1,FST_VD_INOUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1332,"simu_top soc cpu_awid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+53,"simu_top soc cpu_awaddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1332,"simu_top soc cpu_awlen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+54,"simu_top soc cpu_awsize",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+1333,"simu_top soc cpu_awburst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1333,"simu_top soc cpu_awlock",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1332,"simu_top soc cpu_awcache",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1334,"simu_top soc cpu_awprot",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+55,"simu_top soc cpu_awvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1310,"simu_top soc cpu_awready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1332,"simu_top soc cpu_wid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+56,"simu_top soc cpu_wdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+57,"simu_top soc cpu_wstrb",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBit(c+1335,"simu_top soc cpu_wlast",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+58,"simu_top soc cpu_wvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1311,"simu_top soc cpu_wready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+59,"simu_top soc cpu_bid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+60,"simu_top soc cpu_bresp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+1312,"simu_top soc cpu_bvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1335,"simu_top soc cpu_bready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1332,"simu_top soc cpu_arid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+53,"simu_top soc cpu_araddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1332,"simu_top soc cpu_arlen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+54,"simu_top soc cpu_arsize",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+1333,"simu_top soc cpu_arburst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1333,"simu_top soc cpu_arlock",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1332,"simu_top soc cpu_arcache",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1334,"simu_top soc cpu_arprot",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+61,"simu_top soc cpu_arvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1313,"simu_top soc cpu_arready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+62,"simu_top soc cpu_rid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+996,"simu_top soc cpu_rdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+63,"simu_top soc cpu_rresp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+64,"simu_top soc cpu_rlast",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1314,"simu_top soc cpu_rvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1335,"simu_top soc cpu_rready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1332,"simu_top soc m0_awid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+53,"simu_top soc m0_awaddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1332,"simu_top soc m0_awlen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+54,"simu_top soc m0_awsize",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+1333,"simu_top soc m0_awburst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1333,"simu_top soc m0_awlock",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1332,"simu_top soc m0_awcache",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1334,"simu_top soc m0_awprot",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+997,"simu_top soc m0_awvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+65,"simu_top soc m0_awready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1332,"simu_top soc m0_wid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+56,"simu_top soc m0_wdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+57,"simu_top soc m0_wstrb",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBit(c+1335,"simu_top soc m0_wlast",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+998,"simu_top soc m0_wvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+66,"simu_top soc m0_wready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+59,"simu_top soc m0_bid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+60,"simu_top soc m0_bresp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+67,"simu_top soc m0_bvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+999,"simu_top soc m0_bready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1332,"simu_top soc m0_arid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+53,"simu_top soc m0_araddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1332,"simu_top soc m0_arlen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+54,"simu_top soc m0_arsize",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+1333,"simu_top soc m0_arburst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1333,"simu_top soc m0_arlock",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1332,"simu_top soc m0_arcache",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1334,"simu_top soc m0_arprot",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+1000,"simu_top soc m0_arvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+68,"simu_top soc m0_arready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+62,"simu_top soc m0_rid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+996,"simu_top soc m0_rdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+63,"simu_top soc m0_rresp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+64,"simu_top soc m0_rlast",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+69,"simu_top soc m0_rvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1001,"simu_top soc m0_rready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1332,"simu_top soc s0_awid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+53,"simu_top soc s0_awaddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1332,"simu_top soc s0_awlen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+54,"simu_top soc s0_awsize",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+1333,"simu_top soc s0_awburst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1333,"simu_top soc s0_awlock",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1332,"simu_top soc s0_awcache",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1334,"simu_top soc s0_awprot",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+1002,"simu_top soc s0_awvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+70,"simu_top soc s0_awready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1332,"simu_top soc s0_wid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+56,"simu_top soc s0_wdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+57,"simu_top soc s0_wstrb",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBit(c+1335,"simu_top soc s0_wlast",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1003,"simu_top soc s0_wvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+71,"simu_top soc s0_wready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+72,"simu_top soc s0_bid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1333,"simu_top soc s0_bresp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+73,"simu_top soc s0_bvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1004,"simu_top soc s0_bready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1332,"simu_top soc s0_arid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+53,"simu_top soc s0_araddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1332,"simu_top soc s0_arlen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+54,"simu_top soc s0_arsize",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+1333,"simu_top soc s0_arburst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1333,"simu_top soc s0_arlock",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1332,"simu_top soc s0_arcache",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1334,"simu_top soc s0_arprot",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+1005,"simu_top soc s0_arvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+74,"simu_top soc s0_arready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+75,"simu_top soc s0_rid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1282,"simu_top soc s0_rdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1333,"simu_top soc s0_rresp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+76,"simu_top soc s0_rlast",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+77,"simu_top soc s0_rvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1006,"simu_top soc s0_rready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1332,"simu_top soc conf_s_awid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+53,"simu_top soc conf_s_awaddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1332,"simu_top soc conf_s_awlen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+54,"simu_top soc conf_s_awsize",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+1333,"simu_top soc conf_s_awburst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1333,"simu_top soc conf_s_awlock",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1332,"simu_top soc conf_s_awcache",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1334,"simu_top soc conf_s_awprot",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+1007,"simu_top soc conf_s_awvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+78,"simu_top soc conf_s_awready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1332,"simu_top soc conf_s_wid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+56,"simu_top soc conf_s_wdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+57,"simu_top soc conf_s_wstrb",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBit(c+1335,"simu_top soc conf_s_wlast",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1008,"simu_top soc conf_s_wvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+79,"simu_top soc conf_s_wready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+80,"simu_top soc conf_s_bid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1333,"simu_top soc conf_s_bresp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+81,"simu_top soc conf_s_bvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1009,"simu_top soc conf_s_bready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1332,"simu_top soc conf_s_arid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+53,"simu_top soc conf_s_araddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1332,"simu_top soc conf_s_arlen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+54,"simu_top soc conf_s_arsize",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+1333,"simu_top soc conf_s_arburst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1333,"simu_top soc conf_s_arlock",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1332,"simu_top soc conf_s_arcache",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1334,"simu_top soc conf_s_arprot",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+1010,"simu_top soc conf_s_arvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+82,"simu_top soc conf_s_arready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+83,"simu_top soc conf_s_rid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+84,"simu_top soc conf_s_rdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1333,"simu_top soc conf_s_rresp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+85,"simu_top soc conf_s_rlast",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+86,"simu_top soc conf_s_rvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1011,"simu_top soc conf_s_rready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1332,"simu_top soc apb_s_awid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+53,"simu_top soc apb_s_awaddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1332,"simu_top soc apb_s_awlen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+54,"simu_top soc apb_s_awsize",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+1333,"simu_top soc apb_s_awburst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1333,"simu_top soc apb_s_awlock",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1332,"simu_top soc apb_s_awcache",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1334,"simu_top soc apb_s_awprot",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+1012,"simu_top soc apb_s_awvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+87,"simu_top soc apb_s_awready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1332,"simu_top soc apb_s_wid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+56,"simu_top soc apb_s_wdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+57,"simu_top soc apb_s_wstrb",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBit(c+1335,"simu_top soc apb_s_wlast",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1013,"simu_top soc apb_s_wvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+88,"simu_top soc apb_s_wready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+89,"simu_top soc apb_s_bid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1333,"simu_top soc apb_s_bresp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+90,"simu_top soc apb_s_bvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1014,"simu_top soc apb_s_bready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1332,"simu_top soc apb_s_arid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+53,"simu_top soc apb_s_araddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1332,"simu_top soc apb_s_arlen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+54,"simu_top soc apb_s_arsize",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+1333,"simu_top soc apb_s_arburst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1333,"simu_top soc apb_s_arlock",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1332,"simu_top soc apb_s_arcache",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1334,"simu_top soc apb_s_arprot",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+1015,"simu_top soc apb_s_arvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+91,"simu_top soc apb_s_arready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+92,"simu_top soc apb_s_rid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+93,"simu_top soc apb_s_rdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1333,"simu_top soc apb_s_rresp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+94,"simu_top soc apb_s_rlast",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+95,"simu_top soc apb_s_rvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1016,"simu_top soc apb_s_rready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+96,"simu_top soc conf_s_ram_raddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+84,"simu_top soc conf_s_ram_rdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1017,"simu_top soc conf_s_ram_ren",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+97,"simu_top soc conf_s_ram_waddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+98,"simu_top soc conf_s_ram_wdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1018,"simu_top soc conf_s_ram_wen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+99,"simu_top soc interrupt",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+1315,"simu_top soc reset",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1276,"simu_top soc timer_clk",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1336,"simu_top soc UART_CTS",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+100,"simu_top soc UART_RTS",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+101,"simu_top soc UART_DTR",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1336,"simu_top soc UART_DSR",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1337,"simu_top soc UART_RI",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1336,"simu_top soc UART_DCD",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+102,"simu_top soc uart0_int",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+103,"simu_top soc uart0_txd_o",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1300,"simu_top soc uart0_txd_i",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+104,"simu_top soc uart0_txd_oe",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+105,"simu_top soc uart0_rxd_o",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1299,"simu_top soc uart0_rxd_i",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+106,"simu_top soc uart0_rxd_oe",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+100,"simu_top soc uart0_rts_o",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1336,"simu_top soc uart0_cts_i",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1336,"simu_top soc uart0_dsr_i",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1336,"simu_top soc uart0_dcd_i",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+101,"simu_top soc uart0_dtr_o",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1337,"simu_top soc uart0_ri_i",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1276,"simu_top soc cpu aclk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1277,"simu_top soc cpu aresetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+99,"simu_top soc cpu intrpt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+1332,"simu_top soc cpu arid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+53,"simu_top soc cpu araddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1338,"simu_top soc cpu arlen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+54,"simu_top soc cpu arsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+1333,"simu_top soc cpu arburst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1333,"simu_top soc cpu arlock",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1332,"simu_top soc cpu arcache",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1334,"simu_top soc cpu arprot",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+61,"simu_top soc cpu arvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1313,"simu_top soc cpu arready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+62,"simu_top soc cpu rid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+996,"simu_top soc cpu rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+63,"simu_top soc cpu rresp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+64,"simu_top soc cpu rlast",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1314,"simu_top soc cpu rvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1335,"simu_top soc cpu rready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1332,"simu_top soc cpu awid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+53,"simu_top soc cpu awaddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1338,"simu_top soc cpu awlen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+54,"simu_top soc cpu awsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+1333,"simu_top soc cpu awburst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1333,"simu_top soc cpu awlock",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1332,"simu_top soc cpu awcache",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1334,"simu_top soc cpu awprot",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+55,"simu_top soc cpu awvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1310,"simu_top soc cpu awready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1332,"simu_top soc cpu wid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+56,"simu_top soc cpu wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+57,"simu_top soc cpu wstrb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBit(c+1335,"simu_top soc cpu wlast",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+58,"simu_top soc cpu wvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1311,"simu_top soc cpu wready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+59,"simu_top soc cpu bid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+60,"simu_top soc cpu bresp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+1312,"simu_top soc cpu bvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1335,"simu_top soc cpu bready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1286,"simu_top soc cpu debug0_wb_pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+107,"simu_top soc cpu debug0_wb_rf_wen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1288,"simu_top soc cpu debug0_wb_rf_wnum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+1289,"simu_top soc cpu debug0_wb_rf_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1339,"simu_top soc cpu debug1_wb_pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1340,"simu_top soc cpu debug1_wb_rf_wen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1341,"simu_top soc cpu debug1_wb_rf_wnum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+1342,"simu_top soc cpu debug1_wb_rf_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1019,"simu_top soc cpu req_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1336,"simu_top soc cpu wr_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1343,"simu_top soc cpu size_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+108,"simu_top soc cpu addr_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1344,"simu_top soc cpu wstrb_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1345,"simu_top soc cpu wdata_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1020,"simu_top soc cpu addr_ok_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+948,"simu_top soc cpu data_ok_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+996,"simu_top soc cpu rdata_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1021,"simu_top soc cpu req_mem",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+109,"simu_top soc cpu wr_mem",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+110,"simu_top soc cpu size_mem",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1346,"simu_top soc cpu addr_mem",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+111,"simu_top soc cpu wstrb_mem",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+112,"simu_top soc cpu wdata_mem",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+113,"simu_top soc cpu addr_ok_mem",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+949,"simu_top soc cpu data_ok_mem",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+996,"simu_top soc cpu rdata_mem",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1276,"simu_top soc cpu cpu_sram_u aclk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1277,"simu_top soc cpu cpu_sram_u aresetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1019,"simu_top soc cpu cpu_sram_u req_inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1336,"simu_top soc cpu cpu_sram_u wr_inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1343,"simu_top soc cpu cpu_sram_u size_inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+108,"simu_top soc cpu cpu_sram_u addr_inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1344,"simu_top soc cpu cpu_sram_u wstrb_inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1345,"simu_top soc cpu cpu_sram_u wdata_inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1020,"simu_top soc cpu cpu_sram_u addr_ok_inst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+948,"simu_top soc cpu cpu_sram_u data_ok_inst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+996,"simu_top soc cpu cpu_sram_u rdata_inst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1021,"simu_top soc cpu cpu_sram_u req_mem",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+109,"simu_top soc cpu cpu_sram_u wr_mem",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+110,"simu_top soc cpu cpu_sram_u size_mem",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1346,"simu_top soc cpu cpu_sram_u addr_mem",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+111,"simu_top soc cpu cpu_sram_u wstrb_mem",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+112,"simu_top soc cpu cpu_sram_u wdata_mem",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+113,"simu_top soc cpu cpu_sram_u addr_ok_mem",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+949,"simu_top soc cpu cpu_sram_u data_ok_mem",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+996,"simu_top soc cpu cpu_sram_u rdata_mem",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1286,"simu_top soc cpu cpu_sram_u debug0_wb_pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+107,"simu_top soc cpu cpu_sram_u debug0_wb_rf_wen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1288,"simu_top soc cpu cpu_sram_u debug0_wb_rf_wnum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+1289,"simu_top soc cpu cpu_sram_u debug0_wb_rf_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1022,"simu_top soc cpu cpu_sram_u preif_allow_in",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1335,"simu_top soc cpu cpu_sram_u preif_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1347,"simu_top soc cpu cpu_sram_u preif_data_in",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1348,"simu_top soc cpu cpu_sram_u preif_data_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+1023,"simu_top soc cpu cpu_sram_u preif_ready_go",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1349,"simu_top soc cpu cpu_sram_u preif_flush",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1350,"simu_top soc cpu cpu_sram_u preif_nop",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+1024,"simu_top soc cpu cpu_sram_u if_allow_in",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1023,"simu_top soc cpu cpu_sram_u if_valid_in",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+108,"simu_top soc cpu cpu_sram_u if_data_in",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+114,"simu_top soc cpu cpu_sram_u if_data_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+1025,"simu_top soc cpu cpu_sram_u if_ready_go",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1336,"simu_top soc cpu cpu_sram_u if_flush",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1351,"simu_top soc cpu cpu_sram_u if_nop",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+1026,"simu_top soc cpu cpu_sram_u id_valid_in",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+115,"simu_top soc cpu cpu_sram_u id_data_in pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+950,"simu_top soc cpu cpu_sram_u id_data_in instr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+116,"simu_top soc cpu cpu_sram_u id_data_out pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+117,"simu_top soc cpu cpu_sram_u id_data_out instr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+1,"simu_top soc cpu cpu_sram_u id_ready_go",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1027,"simu_top soc cpu cpu_sram_u id_allow_in",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+2,"simu_top soc cpu cpu_sram_u id_flush",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1352,"simu_top soc cpu cpu_sram_u id_nop pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1353,"simu_top soc cpu cpu_sram_u id_nop instr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+118,"simu_top soc cpu cpu_sram_u ex_valid_in",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        {
            const char* __VenumItemNames[]
            = {"ALU_SEL_RJ", "ALU_SEL_PC"};
            const char* __VenumItemValues[]
            = {"0", "1"};
            tracep->declDTypeEnum(1, "cpuDefine::AluSel1", 2, 1, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBit(c+3,"simu_top soc cpu cpu_sram_u ex_data_in ex_control_data alusel1",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        {
            const char* __VenumItemNames[]
            = {"ALU_SEL_RK", "ALU_SEL_IMMOUT"};
            const char* __VenumItemValues[]
            = {"0", "1"};
            tracep->declDTypeEnum(2, "cpuDefine::AluSel2", 2, 1, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBit(c+119,"simu_top soc cpu cpu_sram_u ex_data_in ex_control_data alusel2",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        {
            const char* __VenumItemNames[]
            = {"ALU_ADD", "ALU_SUB", "ALU_SLT", "ALU_SLTU", 
                                                "ALU_NOR", 
                                                "ALU_AND", 
                                                "ALU_OR", 
                                                "ALU_XOR", 
                                                "ALU_SLL", 
                                                "ALU_SRL", 
                                                "ALU_SRA", 
                                                "ALU_MUL", 
                                                "ALU_MULH", 
                                                "ALU_MULHU", 
                                                "ALU_DIV", 
                                                "ALU_MOD", 
                                                "ALU_DIVU", 
                                                "ALU_MODU", 
                                                "ALU_LUI", 
                                                "ALU_PCADD4"};
            const char* __VenumItemValues[]
            = {"0", "1", "10", "11", "100", "101", 
                                                "110", 
                                                "111", 
                                                "1000", 
                                                "1001", 
                                                "1010", 
                                                "1011", 
                                                "1100", 
                                                "1101", 
                                                "1110", 
                                                "1111", 
                                                "10000", 
                                                "10001", 
                                                "10010", 
                                                "10011"};
            tracep->declDTypeEnum(3, "cpuDefine::AluCtrl", 20, 5, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+120,"simu_top soc cpu cpu_sram_u ex_data_in ex_control_data aluctrl",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBit(c+4,"simu_top soc cpu cpu_sram_u ex_data_in mem_control_data memWriteEn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+5,"simu_top soc cpu cpu_sram_u ex_data_in mem_control_data memRead",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+121,"simu_top soc cpu cpu_sram_u ex_data_in mem_control_data size_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+6,"simu_top soc cpu cpu_sram_u ex_data_in mem_control_data is_unsign_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+7,"simu_top soc cpu cpu_sram_u ex_data_in wb_control_data regWriteEn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        {
            const char* __VenumItemNames[]
            = {"REG_WRITE_ALU", "REG_WRITE_MEM"};
            const char* __VenumItemValues[]
            = {"0", "1"};
            tracep->declDTypeEnum(4, "cpuDefine::RegWriteDataSel", 2, 1, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBit(c+5,"simu_top soc cpu cpu_sram_u ex_data_in wb_control_data regWriteDataSel",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+122,"simu_top soc cpu cpu_sram_u ex_data_in rj",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+123,"simu_top soc cpu cpu_sram_u ex_data_in rk",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1354,"simu_top soc cpu cpu_sram_u ex_data_in rd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+124,"simu_top soc cpu cpu_sram_u ex_data_in rjNo",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+125,"simu_top soc cpu cpu_sram_u ex_data_in rkNo",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+126,"simu_top soc cpu cpu_sram_u ex_data_in rdNo",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+127,"simu_top soc cpu cpu_sram_u ex_data_in immout",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+128,"simu_top soc cpu cpu_sram_u ex_data_in pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+129,"simu_top soc cpu cpu_sram_u ex_data_out ex_control_data alusel1",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+130,"simu_top soc cpu cpu_sram_u ex_data_out ex_control_data alusel2",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+131,"simu_top soc cpu cpu_sram_u ex_data_out ex_control_data aluctrl",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBit(c+132,"simu_top soc cpu cpu_sram_u ex_data_out mem_control_data memWriteEn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+133,"simu_top soc cpu cpu_sram_u ex_data_out mem_control_data memRead",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+134,"simu_top soc cpu cpu_sram_u ex_data_out mem_control_data size_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+135,"simu_top soc cpu cpu_sram_u ex_data_out mem_control_data is_unsign_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+136,"simu_top soc cpu cpu_sram_u ex_data_out wb_control_data regWriteEn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+137,"simu_top soc cpu cpu_sram_u ex_data_out wb_control_data regWriteDataSel",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+138,"simu_top soc cpu cpu_sram_u ex_data_out rj",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+139,"simu_top soc cpu cpu_sram_u ex_data_out rk",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+140,"simu_top soc cpu cpu_sram_u ex_data_out rd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+141,"simu_top soc cpu cpu_sram_u ex_data_out rjNo",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+142,"simu_top soc cpu cpu_sram_u ex_data_out rkNo",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+143,"simu_top soc cpu cpu_sram_u ex_data_out rdNo",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+144,"simu_top soc cpu cpu_sram_u ex_data_out immout",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+145,"simu_top soc cpu cpu_sram_u ex_data_out pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+951,"simu_top soc cpu cpu_sram_u ex_ready_go",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1028,"simu_top soc cpu cpu_sram_u ex_allow_in",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+8,"simu_top soc cpu cpu_sram_u ex_flush",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1355,"simu_top soc cpu cpu_sram_u ex_nop ex_control_data alusel1",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1356,"simu_top soc cpu cpu_sram_u ex_nop ex_control_data alusel2",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1357,"simu_top soc cpu cpu_sram_u ex_nop ex_control_data aluctrl",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBit(c+1336,"simu_top soc cpu cpu_sram_u ex_nop mem_control_data memWriteEn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1336,"simu_top soc cpu cpu_sram_u ex_nop mem_control_data memRead",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1333,"simu_top soc cpu cpu_sram_u ex_nop mem_control_data size_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+1336,"simu_top soc cpu cpu_sram_u ex_nop mem_control_data is_unsign_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1336,"simu_top soc cpu cpu_sram_u ex_nop wb_control_data regWriteEn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1358,"simu_top soc cpu cpu_sram_u ex_nop wb_control_data regWriteDataSel",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1352,"simu_top soc cpu cpu_sram_u ex_nop rj",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1352,"simu_top soc cpu cpu_sram_u ex_nop rk",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1352,"simu_top soc cpu cpu_sram_u ex_nop rd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1359,"simu_top soc cpu cpu_sram_u ex_nop rjNo",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+1359,"simu_top soc cpu cpu_sram_u ex_nop rkNo",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+1359,"simu_top soc cpu cpu_sram_u ex_nop rdNo",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+1352,"simu_top soc cpu cpu_sram_u ex_nop immout",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1352,"simu_top soc cpu cpu_sram_u ex_nop pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+1029,"simu_top soc cpu cpu_sram_u mem_valid_in",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+132,"simu_top soc cpu cpu_sram_u mem_data_in mem_control_data memWriteEn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+133,"simu_top soc cpu cpu_sram_u mem_data_in mem_control_data memRead",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+134,"simu_top soc cpu cpu_sram_u mem_data_in mem_control_data size_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+135,"simu_top soc cpu cpu_sram_u mem_data_in mem_control_data is_unsign_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+136,"simu_top soc cpu cpu_sram_u mem_data_in wb_control_data regWriteEn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+137,"simu_top soc cpu cpu_sram_u mem_data_in wb_control_data regWriteDataSel",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+146,"simu_top soc cpu cpu_sram_u mem_data_in wstrb_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBus(c+147,"simu_top soc cpu cpu_sram_u mem_data_in rdNo",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+1087,"simu_top soc cpu cpu_sram_u mem_data_in aluout",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+148,"simu_top soc cpu cpu_sram_u mem_data_in pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+149,"simu_top soc cpu cpu_sram_u mem_data_out mem_control_data memWriteEn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+150,"simu_top soc cpu cpu_sram_u mem_data_out mem_control_data memRead",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+151,"simu_top soc cpu cpu_sram_u mem_data_out mem_control_data size_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+152,"simu_top soc cpu cpu_sram_u mem_data_out mem_control_data is_unsign_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+153,"simu_top soc cpu cpu_sram_u mem_data_out wb_control_data regWriteEn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+154,"simu_top soc cpu cpu_sram_u mem_data_out wb_control_data regWriteDataSel",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+155,"simu_top soc cpu cpu_sram_u mem_data_out wstrb_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBus(c+156,"simu_top soc cpu cpu_sram_u mem_data_out rdNo",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+157,"simu_top soc cpu cpu_sram_u mem_data_out aluout",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+158,"simu_top soc cpu cpu_sram_u mem_data_out pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+1030,"simu_top soc cpu cpu_sram_u mem_ready_go",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+159,"simu_top soc cpu cpu_sram_u mem_allow_in",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1360,"simu_top soc cpu cpu_sram_u mem_flush",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1336,"simu_top soc cpu cpu_sram_u mem_nop mem_control_data memWriteEn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1336,"simu_top soc cpu cpu_sram_u mem_nop mem_control_data memRead",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1333,"simu_top soc cpu cpu_sram_u mem_nop mem_control_data size_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+1336,"simu_top soc cpu cpu_sram_u mem_nop mem_control_data is_unsign_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1336,"simu_top soc cpu cpu_sram_u mem_nop wb_control_data regWriteEn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1358,"simu_top soc cpu cpu_sram_u mem_nop wb_control_data regWriteDataSel",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1361,"simu_top soc cpu cpu_sram_u mem_nop wstrb_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBus(c+1359,"simu_top soc cpu cpu_sram_u mem_nop rdNo",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+1352,"simu_top soc cpu cpu_sram_u mem_nop aluout",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1352,"simu_top soc cpu cpu_sram_u mem_nop pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+1031,"simu_top soc cpu cpu_sram_u wb_valid_in",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+153,"simu_top soc cpu cpu_sram_u wb_data_in wb_control_data regWriteEn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+154,"simu_top soc cpu cpu_sram_u wb_data_in wb_control_data regWriteDataSel",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+160,"simu_top soc cpu cpu_sram_u wb_data_in rdNo",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+161,"simu_top soc cpu cpu_sram_u wb_data_in aluout",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+952,"simu_top soc cpu cpu_sram_u wb_data_in readData",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+162,"simu_top soc cpu cpu_sram_u wb_data_in pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+146,"simu_top soc cpu cpu_sram_u wb_data_in wstrb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBit(c+163,"simu_top soc cpu cpu_sram_u wb_data_out wb_control_data regWriteEn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+164,"simu_top soc cpu cpu_sram_u wb_data_out wb_control_data regWriteDataSel",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+165,"simu_top soc cpu cpu_sram_u wb_data_out rdNo",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+166,"simu_top soc cpu cpu_sram_u wb_data_out aluout",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+167,"simu_top soc cpu cpu_sram_u wb_data_out readData",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+168,"simu_top soc cpu cpu_sram_u wb_data_out pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+169,"simu_top soc cpu cpu_sram_u wb_data_out wstrb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBit(c+1335,"simu_top soc cpu cpu_sram_u wb_ready_go",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1335,"simu_top soc cpu cpu_sram_u wb_allow_in",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1362,"simu_top soc cpu cpu_sram_u wb_flush",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1336,"simu_top soc cpu cpu_sram_u wb_nop wb_control_data regWriteEn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1358,"simu_top soc cpu cpu_sram_u wb_nop wb_control_data regWriteDataSel",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1359,"simu_top soc cpu cpu_sram_u wb_nop rdNo",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+1352,"simu_top soc cpu cpu_sram_u wb_nop aluout",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1352,"simu_top soc cpu cpu_sram_u wb_nop readData",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1352,"simu_top soc cpu cpu_sram_u wb_nop pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1363,"simu_top soc cpu cpu_sram_u wb_nop wstrb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBit(c+170,"simu_top soc cpu cpu_sram_u wb_valid_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1364,"simu_top soc cpu cpu_sram_u wb_allow_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+114,"simu_top soc cpu cpu_sram_u pc_if",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+108,"simu_top soc cpu cpu_sram_u nextPC",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        {
            const char* __VenumItemNames[]
            = {"PC_ADD4", "PC_BRANCH"};
            const char* __VenumItemValues[]
            = {"0", "1"};
            tracep->declDTypeEnum(5, "cpuDefine::PcSel", 2, 1, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBit(c+2,"simu_top soc cpu cpu_sram_u pcsel",5, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+171,"simu_top soc cpu cpu_sram_u pcAdd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+172,"simu_top soc cpu cpu_sram_u branchPC",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+996,"simu_top soc cpu cpu_sram_u instr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+173,"simu_top soc cpu cpu_sram_u instr_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+953,"simu_top soc cpu cpu_sram_u instr_if",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+174,"simu_top soc cpu cpu_sram_u instr_temp_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+175,"simu_top soc cpu cpu_sram_u instr_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+176,"simu_top soc cpu cpu_sram_u pc_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+177,"simu_top soc cpu cpu_sram_u zero",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+178,"simu_top soc cpu cpu_sram_u lt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1365,"simu_top soc cpu cpu_sram_u overflow",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        {
            const char* __VenumItemNames[]
            = {"I8", "I12", "I14", "I16", "I20", "I21", 
                                                "I26"};
            const char* __VenumItemValues[]
            = {"0", "1", "10", "11", "100", "101", 
                                                "110"};
            tracep->declDTypeEnum(6, "cpuDefine::Itype", 7, 3, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+179,"simu_top soc cpu cpu_sram_u itype",6, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBit(c+9,"simu_top soc cpu cpu_sram_u regWriteEn_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+10,"simu_top soc cpu cpu_sram_u memWriteEn_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+11,"simu_top soc cpu cpu_sram_u memRead_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+3,"simu_top soc cpu cpu_sram_u alusel1_id",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+119,"simu_top soc cpu cpu_sram_u alusel2_id",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+180,"simu_top soc cpu cpu_sram_u aluctrl_id",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBit(c+12,"simu_top soc cpu cpu_sram_u regWriteDataSel_id",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+181,"simu_top soc cpu cpu_sram_u unsignBranchCmp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+13,"simu_top soc cpu cpu_sram_u reglink",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+14,"simu_top soc cpu cpu_sram_u is_unsign_imm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+15,"simu_top soc cpu cpu_sram_u branchPcFromJ",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+182,"simu_top soc cpu cpu_sram_u is_compare",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+121,"simu_top soc cpu cpu_sram_u size_mem_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+16,"simu_top soc cpu cpu_sram_u is_unsign_load_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+183,"simu_top soc cpu cpu_sram_u rd_no_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+124,"simu_top soc cpu cpu_sram_u rj_no_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+125,"simu_top soc cpu cpu_sram_u rk_no_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+184,"simu_top soc cpu cpu_sram_u rj_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+185,"simu_top soc cpu cpu_sram_u rk_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1366,"simu_top soc cpu cpu_sram_u rd_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+186,"simu_top soc cpu cpu_sram_u regWriteEn_wb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+187,"simu_top soc cpu cpu_sram_u regWriteData_wb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+188,"simu_top soc cpu cpu_sram_u immout_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+189,"simu_top soc cpu cpu_sram_u rj_id_true",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+190,"simu_top soc cpu cpu_sram_u rk_id_true",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+191,"simu_top soc cpu cpu_sram_u rj_ex_true",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+192,"simu_top soc cpu cpu_sram_u rk_ex_true",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+112,"simu_top soc cpu cpu_sram_u rd_ex_true",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+193,"simu_top soc cpu cpu_sram_u rd_no_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+194,"simu_top soc cpu cpu_sram_u rd_no_wb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBit(c+195,"simu_top soc cpu cpu_sram_u regWriteEn_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+196,"simu_top soc cpu cpu_sram_u aluout_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+197,"simu_top soc cpu cpu_sram_u pcSrc1_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+198,"simu_top soc cpu cpu_sram_u memRead_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+199,"simu_top soc cpu cpu_sram_u regWriteEn_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+3,"simu_top soc cpu cpu_sram_u ex_control_data_id alusel1",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+119,"simu_top soc cpu cpu_sram_u ex_control_data_id alusel2",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+120,"simu_top soc cpu cpu_sram_u ex_control_data_id aluctrl",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBit(c+1355,"simu_top soc cpu cpu_sram_u ex_nop_control_data alusel1",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1356,"simu_top soc cpu cpu_sram_u ex_nop_control_data alusel2",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1357,"simu_top soc cpu cpu_sram_u ex_nop_control_data aluctrl",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBit(c+4,"simu_top soc cpu cpu_sram_u mem_control_data_id memWriteEn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+5,"simu_top soc cpu cpu_sram_u mem_control_data_id memRead",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+121,"simu_top soc cpu cpu_sram_u mem_control_data_id size_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+6,"simu_top soc cpu cpu_sram_u mem_control_data_id is_unsign_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1336,"simu_top soc cpu cpu_sram_u mem_nop_control_data memWriteEn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1336,"simu_top soc cpu cpu_sram_u mem_nop_control_data memRead",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1333,"simu_top soc cpu cpu_sram_u mem_nop_control_data size_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+1336,"simu_top soc cpu cpu_sram_u mem_nop_control_data is_unsign_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+7,"simu_top soc cpu cpu_sram_u wb_control_data_id regWriteEn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+5,"simu_top soc cpu cpu_sram_u wb_control_data_id regWriteDataSel",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1336,"simu_top soc cpu cpu_sram_u wb_nop_control_data regWriteEn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1358,"simu_top soc cpu cpu_sram_u wb_nop_control_data regWriteDataSel",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+129,"simu_top soc cpu cpu_sram_u ex_control_data_ex alusel1",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+130,"simu_top soc cpu cpu_sram_u ex_control_data_ex alusel2",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+131,"simu_top soc cpu cpu_sram_u ex_control_data_ex aluctrl",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBit(c+132,"simu_top soc cpu cpu_sram_u mem_control_data_ex memWriteEn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+133,"simu_top soc cpu cpu_sram_u mem_control_data_ex memRead",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+134,"simu_top soc cpu cpu_sram_u mem_control_data_ex size_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+135,"simu_top soc cpu cpu_sram_u mem_control_data_ex is_unsign_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+136,"simu_top soc cpu cpu_sram_u wb_control_data_ex regWriteEn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+137,"simu_top soc cpu cpu_sram_u wb_control_data_ex regWriteDataSel",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+200,"simu_top soc cpu cpu_sram_u alusel1_ex",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+201,"simu_top soc cpu cpu_sram_u alusel2_ex",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+202,"simu_top soc cpu cpu_sram_u aluctrl_ex",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+203,"simu_top soc cpu cpu_sram_u aluSrc1_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+204,"simu_top soc cpu cpu_sram_u aluSrc2_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+205,"simu_top soc cpu cpu_sram_u pc_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+206,"simu_top soc cpu cpu_sram_u rj_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+207,"simu_top soc cpu cpu_sram_u rk_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+208,"simu_top soc cpu cpu_sram_u rd_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+209,"simu_top soc cpu cpu_sram_u rj_no_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+210,"simu_top soc cpu cpu_sram_u rk_no_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+211,"simu_top soc cpu cpu_sram_u rd_no_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+212,"simu_top soc cpu cpu_sram_u immout_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+109,"simu_top soc cpu cpu_sram_u memWriteEn_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+110,"simu_top soc cpu cpu_sram_u size_mem_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+213,"simu_top soc cpu cpu_sram_u is_unsign_load_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+214,"simu_top soc cpu cpu_sram_u regWriteDataSel_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1032,"simu_top soc cpu cpu_sram_u divNeed aclk",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1033,"simu_top soc cpu cpu_sram_u divNeed aresetn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1346,"simu_top soc cpu cpu_sram_u memaddr_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1088,"simu_top soc cpu cpu_sram_u aluout_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+215,"simu_top soc cpu cpu_sram_u wstrb_mem_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBit(c+216,"simu_top soc cpu cpu_sram_u is_unsign_load_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+217,"simu_top soc cpu cpu_sram_u memRead_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+218,"simu_top soc cpu cpu_sram_u memWriteEn_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+153,"simu_top soc cpu cpu_sram_u wb_control_data_mem regWriteEn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+154,"simu_top soc cpu cpu_sram_u wb_control_data_mem regWriteDataSel",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+149,"simu_top soc cpu cpu_sram_u mem_control_data_mem memWriteEn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+150,"simu_top soc cpu cpu_sram_u mem_control_data_mem memRead",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+151,"simu_top soc cpu cpu_sram_u mem_control_data_mem size_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+152,"simu_top soc cpu cpu_sram_u mem_control_data_mem is_unsign_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+219,"simu_top soc cpu cpu_sram_u pc_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+220,"simu_top soc cpu cpu_sram_u readData_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+221,"simu_top soc cpu cpu_sram_u readData_temp_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+954,"simu_top soc cpu cpu_sram_u readData_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1034,"simu_top soc cpu cpu_sram_u readData",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+163,"simu_top soc cpu cpu_sram_u wb_control_data_wb regWriteEn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+164,"simu_top soc cpu cpu_sram_u wb_control_data_wb regWriteDataSel",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+222,"simu_top soc cpu cpu_sram_u aluout_wb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+223,"simu_top soc cpu cpu_sram_u readData_wb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+224,"simu_top soc cpu cpu_sram_u regWriteDataSel_wb",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+225,"simu_top soc cpu cpu_sram_u pc_wb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+107,"simu_top soc cpu cpu_sram_u wstrb_wb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBus(c+1351,"simu_top soc cpu cpu_sram_u If reset_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+1335,"simu_top soc cpu cpu_sram_u If isPc",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBit(c+1276,"simu_top soc cpu cpu_sram_u If aclk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1277,"simu_top soc cpu cpu_sram_u If aresetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1023,"simu_top soc cpu cpu_sram_u If valid_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+108,"simu_top soc cpu cpu_sram_u If data_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1025,"simu_top soc cpu cpu_sram_u If ready_go",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1367,"simu_top soc cpu cpu_sram_u If nop_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1024,"simu_top soc cpu cpu_sram_u If allow_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1336,"simu_top soc cpu cpu_sram_u If flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1026,"simu_top soc cpu cpu_sram_u If valid_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+114,"simu_top soc cpu cpu_sram_u If data_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1022,"simu_top soc cpu cpu_sram_u If allow_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+226,"simu_top soc cpu cpu_sram_u If pipeline_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+114,"simu_top soc cpu cpu_sram_u If pipeline_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1368,"simu_top soc cpu cpu_sram_u id reset_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+1336,"simu_top soc cpu cpu_sram_u id isPc",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBit(c+1276,"simu_top soc cpu cpu_sram_u id aclk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1277,"simu_top soc cpu cpu_sram_u id aresetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1026,"simu_top soc cpu cpu_sram_u id valid_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+115,"simu_top soc cpu cpu_sram_u id data_in pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+950,"simu_top soc cpu cpu_sram_u id data_in instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1,"simu_top soc cpu cpu_sram_u id ready_go",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1352,"simu_top soc cpu cpu_sram_u id nop_data pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1353,"simu_top soc cpu cpu_sram_u id nop_data instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1027,"simu_top soc cpu cpu_sram_u id allow_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+2,"simu_top soc cpu cpu_sram_u id flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+118,"simu_top soc cpu cpu_sram_u id valid_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+116,"simu_top soc cpu cpu_sram_u id data_out pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+117,"simu_top soc cpu cpu_sram_u id data_out instr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1024,"simu_top soc cpu cpu_sram_u id allow_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+227,"simu_top soc cpu cpu_sram_u id pipeline_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+228,"simu_top soc cpu cpu_sram_u id pipeline_data pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+229,"simu_top soc cpu cpu_sram_u id pipeline_data instr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+175,"simu_top soc cpu cpu_sram_u control instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+177,"simu_top soc cpu cpu_sram_u control zero",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+178,"simu_top soc cpu cpu_sram_u control lt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+2,"simu_top soc cpu cpu_sram_u control pcsel",5,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+179,"simu_top soc cpu cpu_sram_u control itype",6,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+9,"simu_top soc cpu cpu_sram_u control regWriteEn",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+10,"simu_top soc cpu cpu_sram_u control memWriteEn",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+11,"simu_top soc cpu cpu_sram_u control memRead",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+3,"simu_top soc cpu cpu_sram_u control alusel1",1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+119,"simu_top soc cpu cpu_sram_u control alusel2",2,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+180,"simu_top soc cpu cpu_sram_u control aluctrl",3,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBit(c+12,"simu_top soc cpu cpu_sram_u control regWriteDataSel",4,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+181,"simu_top soc cpu cpu_sram_u control unsignBranchCmp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+13,"simu_top soc cpu cpu_sram_u control reglink",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+14,"simu_top soc cpu cpu_sram_u control is_unsign_imm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+15,"simu_top soc cpu cpu_sram_u control branchPcFromJ",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+182,"simu_top soc cpu cpu_sram_u control is_compare",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+121,"simu_top soc cpu cpu_sram_u control size_mem",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+16,"simu_top soc cpu cpu_sram_u control is_unsign_load",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+230,"simu_top soc cpu cpu_sram_u control is_3R_TYPE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+231,"simu_top soc cpu cpu_sram_u control is_2RI8_TYPE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+232,"simu_top soc cpu cpu_sram_u control is_2RI12_TYPE_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+233,"simu_top soc cpu cpu_sram_u control is_U_TYPE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+234,"simu_top soc cpu cpu_sram_u control is_2RI14_TYPE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+235,"simu_top soc cpu cpu_sram_u control is_2RI12_TYPE_2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+236,"simu_top soc cpu cpu_sram_u control is_BRANCH_TYPE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+237,"simu_top soc cpu cpu_sram_u control is_ADD_TYPE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+238,"simu_top soc cpu cpu_sram_u control is_SUB_TYPE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+239,"simu_top soc cpu cpu_sram_u control is_SLT_TYPE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+240,"simu_top soc cpu cpu_sram_u control is_SLTU_TYPE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+241,"simu_top soc cpu cpu_sram_u control is_NOR_TYPE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+242,"simu_top soc cpu cpu_sram_u control is_AND_TYPE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+243,"simu_top soc cpu cpu_sram_u control is_OR_TYPE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+244,"simu_top soc cpu cpu_sram_u control is_XOR_TYPE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+245,"simu_top soc cpu cpu_sram_u control is_SLL_TYPE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+246,"simu_top soc cpu cpu_sram_u control is_SRL_TYPE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+247,"simu_top soc cpu cpu_sram_u control is_SRA_TYPE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+248,"simu_top soc cpu cpu_sram_u control is_MUL_TYPE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+249,"simu_top soc cpu cpu_sram_u control is_MULH_TYPE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+250,"simu_top soc cpu cpu_sram_u control is_MULHU_TYPE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+251,"simu_top soc cpu cpu_sram_u control is_DIV_TYPE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+252,"simu_top soc cpu cpu_sram_u control is_MOD_TYPE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+253,"simu_top soc cpu cpu_sram_u control is_DIVU_TYPE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+254,"simu_top soc cpu cpu_sram_u control is_MODU_TYPE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+255,"simu_top soc cpu cpu_sram_u control is_SLLI_TYPE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+256,"simu_top soc cpu cpu_sram_u control is_SRLI_TYPE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+257,"simu_top soc cpu cpu_sram_u control is_SRAI_TYPE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+258,"simu_top soc cpu cpu_sram_u control is_SLTI_TYPE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+259,"simu_top soc cpu cpu_sram_u control is_SLTUI_TYPE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+260,"simu_top soc cpu cpu_sram_u control is_ADDI_TYPE3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+261,"simu_top soc cpu cpu_sram_u control is_ADDI_TYPE1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+232,"simu_top soc cpu cpu_sram_u control is_ADDI_TYPE2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+9,"simu_top soc cpu cpu_sram_u control is_ADDI_TYPE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+17,"simu_top soc cpu cpu_sram_u control is_ANDI_TYPE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+18,"simu_top soc cpu cpu_sram_u control is_ORI_TYPE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+19,"simu_top soc cpu cpu_sram_u control is_XORI_TYPE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+262,"simu_top soc cpu cpu_sram_u control UTYPR_low",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBit(c+20,"simu_top soc cpu cpu_sram_u control is_LUI_TYPE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+21,"simu_top soc cpu cpu_sram_u control is_PCADDU12I_TYPE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+263,"simu_top soc cpu cpu_sram_u control is_LL_TYPE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+264,"simu_top soc cpu cpu_sram_u control is_SC_TYPE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+265,"simu_top soc cpu cpu_sram_u control is_LD_B_TYPE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+266,"simu_top soc cpu cpu_sram_u control is_LD_H_TYPE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+267,"simu_top soc cpu cpu_sram_u control is_LD_W_TYPE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+268,"simu_top soc cpu cpu_sram_u control is_ST_B_TYPE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+269,"simu_top soc cpu cpu_sram_u control is_ST_H_TYPE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+270,"simu_top soc cpu cpu_sram_u control is_ST_W_TYPE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+22,"simu_top soc cpu cpu_sram_u control is_LD_BU_TYPE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+23,"simu_top soc cpu cpu_sram_u control is_LD_HU_TYPE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+271,"simu_top soc cpu cpu_sram_u control BRANCH_TYPE_low",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBit(c+15,"simu_top soc cpu cpu_sram_u control is_JIRL_TYPE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+272,"simu_top soc cpu cpu_sram_u control is_B_TYPE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+13,"simu_top soc cpu cpu_sram_u control is_BL_TYPE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+273,"simu_top soc cpu cpu_sram_u control is_BEQ_TYPE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+274,"simu_top soc cpu cpu_sram_u control is_BNE_TYPE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+275,"simu_top soc cpu cpu_sram_u control is_BLT_TYPE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+276,"simu_top soc cpu cpu_sram_u control is_BGE_TYPE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+277,"simu_top soc cpu cpu_sram_u control is_BLTU_TYPE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+278,"simu_top soc cpu cpu_sram_u control is_BGEU_TYPE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+279,"simu_top soc cpu cpu_sram_u control is_break",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+280,"simu_top soc cpu cpu_sram_u control is_syscall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+281,"simu_top soc cpu cpu_sram_u control is_csrrd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+282,"simu_top soc cpu cpu_sram_u control is_csrwd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+283,"simu_top soc cpu cpu_sram_u control is_csrxchg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+284,"simu_top soc cpu cpu_sram_u control is_nop",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+24,"simu_top soc cpu cpu_sram_u control is_reg_inst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+285,"simu_top soc cpu cpu_sram_u control is_shamt_inst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+9,"simu_top soc cpu cpu_sram_u control is_regimm_inst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+286,"simu_top soc cpu cpu_sram_u control is_regimm_inst2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1335,"simu_top soc cpu cpu_sram_u control a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+25,"simu_top soc cpu cpu_sram_u control is_u_inst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+11,"simu_top soc cpu cpu_sram_u control is_load_inst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+10,"simu_top soc cpu cpu_sram_u control is_store_inst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+287,"simu_top soc cpu cpu_sram_u control is_b_inst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+182,"simu_top soc cpu cpu_sram_u control is_branch_inst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+15,"simu_top soc cpu cpu_sram_u control is_j_inst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+288,"simu_top soc cpu cpu_sram_u control is_PC_ADD4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+26,"simu_top soc cpu cpu_sram_u control is_PC_BRANCH",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+289,"simu_top soc cpu cpu_sram_u control is_2RI16_inst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+287,"simu_top soc cpu cpu_sram_u control is_I26_inst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+290,"simu_top soc cpu cpu_sram_u control is_ALU_SEL_RJ",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+3,"simu_top soc cpu cpu_sram_u control is_ALU_SEL_PC",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+24,"simu_top soc cpu cpu_sram_u control is_ALU_SEL_RK",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+119,"simu_top soc cpu cpu_sram_u control is_ALU_SEL_IMMOUT",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+27,"simu_top soc cpu cpu_sram_u control is_OTHER_ALU_ADD_TYPE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+13,"simu_top soc cpu cpu_sram_u control is_bl_type",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1276,"simu_top soc cpu cpu_sram_u rf aclk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1277,"simu_top soc cpu cpu_sram_u rf aresetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+183,"simu_top soc cpu cpu_sram_u rf rd_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+124,"simu_top soc cpu cpu_sram_u rf rj_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+125,"simu_top soc cpu cpu_sram_u rf rk_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBit(c+186,"simu_top soc cpu cpu_sram_u rf regWriteEn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+187,"simu_top soc cpu cpu_sram_u rf regWriteData",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+184,"simu_top soc cpu cpu_sram_u rf rj",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+185,"simu_top soc cpu cpu_sram_u rf rk",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1366,"simu_top soc cpu cpu_sram_u rf rd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+291+i*1,"simu_top soc cpu cpu_sram_u rf rf",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);}}
        tracep->declBus(c+175,"simu_top soc cpu cpu_sram_u immgen instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+179,"simu_top soc cpu cpu_sram_u immgen itype",6,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+14,"simu_top soc cpu cpu_sram_u immgen is_unsign",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+188,"simu_top soc cpu cpu_sram_u immgen immout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1331,"simu_top soc cpu cpu_sram_u immgen width",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+124,"simu_top soc cpu cpu_sram_u forwarding rj_no_id",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+125,"simu_top soc cpu cpu_sram_u forwarding rk_no_id",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+209,"simu_top soc cpu cpu_sram_u forwarding rj_no_ex",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+210,"simu_top soc cpu cpu_sram_u forwarding rk_no_ex",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+211,"simu_top soc cpu cpu_sram_u forwarding rd_no_ex",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+184,"simu_top soc cpu cpu_sram_u forwarding rj_id",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+185,"simu_top soc cpu cpu_sram_u forwarding rk_id",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+206,"simu_top soc cpu cpu_sram_u forwarding rj_ex",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+207,"simu_top soc cpu cpu_sram_u forwarding rk_ex",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+208,"simu_top soc cpu cpu_sram_u forwarding rd_ex",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+195,"simu_top soc cpu cpu_sram_u forwarding regWriteEn_mem",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+196,"simu_top soc cpu cpu_sram_u forwarding aluout",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+193,"simu_top soc cpu cpu_sram_u forwarding rd_no_mem",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBit(c+186,"simu_top soc cpu cpu_sram_u forwarding regWriteEn_wb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+194,"simu_top soc cpu cpu_sram_u forwarding rd_no_wb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+187,"simu_top soc cpu cpu_sram_u forwarding regWriteData",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+189,"simu_top soc cpu cpu_sram_u forwarding rj_id_true",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+190,"simu_top soc cpu cpu_sram_u forwarding rk_id_true",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+191,"simu_top soc cpu cpu_sram_u forwarding rj_ex_true",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+192,"simu_top soc cpu cpu_sram_u forwarding rk_ex_true",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+112,"simu_top soc cpu cpu_sram_u forwarding rd_ex_true",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+28,"simu_top soc cpu cpu_sram_u forwarding MEM_forward_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+29,"simu_top soc cpu cpu_sram_u forwarding WB_forward_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+189,"simu_top soc cpu cpu_sram_u comp rj",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+190,"simu_top soc cpu cpu_sram_u comp rk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+181,"simu_top soc cpu cpu_sram_u comp unsign",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+177,"simu_top soc cpu cpu_sram_u comp zero",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+178,"simu_top soc cpu cpu_sram_u comp lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+211,"simu_top soc cpu cpu_sram_u hazard_detect rd_no_ex",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBit(c+198,"simu_top soc cpu cpu_sram_u hazard_detect memRead_ex",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+199,"simu_top soc cpu cpu_sram_u hazard_detect regWriteEn_ex",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+182,"simu_top soc cpu cpu_sram_u hazard_detect is_compare",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+2,"simu_top soc cpu cpu_sram_u hazard_detect pcsel",5,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+124,"simu_top soc cpu cpu_sram_u hazard_detect rj_no_id",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+125,"simu_top soc cpu cpu_sram_u hazard_detect rk_no_id",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+183,"simu_top soc cpu cpu_sram_u hazard_detect rd_no_id",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+193,"simu_top soc cpu cpu_sram_u hazard_detect rd_no_mem",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBit(c+3,"simu_top soc cpu cpu_sram_u hazard_detect alusel1_id",1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+119,"simu_top soc cpu cpu_sram_u hazard_detect alusel2_id",2,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+217,"simu_top soc cpu cpu_sram_u hazard_detect memRead_mem",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+2,"simu_top soc cpu cpu_sram_u hazard_detect IDFlush",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1,"simu_top soc cpu cpu_sram_u hazard_detect IDWriteEn",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+8,"simu_top soc cpu cpu_sram_u hazard_detect EXFlush",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+323,"simu_top soc cpu cpu_sram_u hazard_detect hazard_ex",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+324,"simu_top soc cpu cpu_sram_u hazard_detect hazard_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+325,"simu_top soc cpu cpu_sram_u hazard_detect hazard_load_use",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+30,"simu_top soc cpu cpu_sram_u hazard_detect stall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1368,"simu_top soc cpu cpu_sram_u ex reset_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+1336,"simu_top soc cpu cpu_sram_u ex isPc",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBit(c+1276,"simu_top soc cpu cpu_sram_u ex aclk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1277,"simu_top soc cpu cpu_sram_u ex aresetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+118,"simu_top soc cpu cpu_sram_u ex valid_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+3,"simu_top soc cpu cpu_sram_u ex data_in ex_control_data alusel1",1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+119,"simu_top soc cpu cpu_sram_u ex data_in ex_control_data alusel2",2,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+120,"simu_top soc cpu cpu_sram_u ex data_in ex_control_data aluctrl",3,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBit(c+4,"simu_top soc cpu cpu_sram_u ex data_in mem_control_data memWriteEn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+5,"simu_top soc cpu cpu_sram_u ex data_in mem_control_data memRead",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+121,"simu_top soc cpu cpu_sram_u ex data_in mem_control_data size_mem",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+6,"simu_top soc cpu cpu_sram_u ex data_in mem_control_data is_unsign_load",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+7,"simu_top soc cpu cpu_sram_u ex data_in wb_control_data regWriteEn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+5,"simu_top soc cpu cpu_sram_u ex data_in wb_control_data regWriteDataSel",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+122,"simu_top soc cpu cpu_sram_u ex data_in rj",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+123,"simu_top soc cpu cpu_sram_u ex data_in rk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1354,"simu_top soc cpu cpu_sram_u ex data_in rd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+124,"simu_top soc cpu cpu_sram_u ex data_in rjNo",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+125,"simu_top soc cpu cpu_sram_u ex data_in rkNo",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+126,"simu_top soc cpu cpu_sram_u ex data_in rdNo",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+127,"simu_top soc cpu cpu_sram_u ex data_in immout",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+128,"simu_top soc cpu cpu_sram_u ex data_in pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+951,"simu_top soc cpu cpu_sram_u ex ready_go",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1355,"simu_top soc cpu cpu_sram_u ex nop_data ex_control_data alusel1",1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1356,"simu_top soc cpu cpu_sram_u ex nop_data ex_control_data alusel2",2,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1357,"simu_top soc cpu cpu_sram_u ex nop_data ex_control_data aluctrl",3,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBit(c+1336,"simu_top soc cpu cpu_sram_u ex nop_data mem_control_data memWriteEn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1336,"simu_top soc cpu cpu_sram_u ex nop_data mem_control_data memRead",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1333,"simu_top soc cpu cpu_sram_u ex nop_data mem_control_data size_mem",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+1336,"simu_top soc cpu cpu_sram_u ex nop_data mem_control_data is_unsign_load",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1336,"simu_top soc cpu cpu_sram_u ex nop_data wb_control_data regWriteEn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1358,"simu_top soc cpu cpu_sram_u ex nop_data wb_control_data regWriteDataSel",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1352,"simu_top soc cpu cpu_sram_u ex nop_data rj",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1352,"simu_top soc cpu cpu_sram_u ex nop_data rk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1352,"simu_top soc cpu cpu_sram_u ex nop_data rd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1359,"simu_top soc cpu cpu_sram_u ex nop_data rjNo",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+1359,"simu_top soc cpu cpu_sram_u ex nop_data rkNo",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+1359,"simu_top soc cpu cpu_sram_u ex nop_data rdNo",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+1352,"simu_top soc cpu cpu_sram_u ex nop_data immout",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1352,"simu_top soc cpu cpu_sram_u ex nop_data pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1028,"simu_top soc cpu cpu_sram_u ex allow_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+8,"simu_top soc cpu cpu_sram_u ex flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1029,"simu_top soc cpu cpu_sram_u ex valid_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+129,"simu_top soc cpu cpu_sram_u ex data_out ex_control_data alusel1",1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+130,"simu_top soc cpu cpu_sram_u ex data_out ex_control_data alusel2",2,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+131,"simu_top soc cpu cpu_sram_u ex data_out ex_control_data aluctrl",3,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBit(c+132,"simu_top soc cpu cpu_sram_u ex data_out mem_control_data memWriteEn",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+133,"simu_top soc cpu cpu_sram_u ex data_out mem_control_data memRead",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+134,"simu_top soc cpu cpu_sram_u ex data_out mem_control_data size_mem",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+135,"simu_top soc cpu cpu_sram_u ex data_out mem_control_data is_unsign_load",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+136,"simu_top soc cpu cpu_sram_u ex data_out wb_control_data regWriteEn",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+137,"simu_top soc cpu cpu_sram_u ex data_out wb_control_data regWriteDataSel",4,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+138,"simu_top soc cpu cpu_sram_u ex data_out rj",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+139,"simu_top soc cpu cpu_sram_u ex data_out rk",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+140,"simu_top soc cpu cpu_sram_u ex data_out rd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+141,"simu_top soc cpu cpu_sram_u ex data_out rjNo",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+142,"simu_top soc cpu cpu_sram_u ex data_out rkNo",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+143,"simu_top soc cpu cpu_sram_u ex data_out rdNo",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+144,"simu_top soc cpu cpu_sram_u ex data_out immout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+145,"simu_top soc cpu cpu_sram_u ex data_out pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1027,"simu_top soc cpu cpu_sram_u ex allow_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+326,"simu_top soc cpu cpu_sram_u ex pipeline_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+327,"simu_top soc cpu cpu_sram_u ex pipeline_data ex_control_data alusel1",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+328,"simu_top soc cpu cpu_sram_u ex pipeline_data ex_control_data alusel2",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+329,"simu_top soc cpu cpu_sram_u ex pipeline_data ex_control_data aluctrl",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBit(c+330,"simu_top soc cpu cpu_sram_u ex pipeline_data mem_control_data memWriteEn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+331,"simu_top soc cpu cpu_sram_u ex pipeline_data mem_control_data memRead",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+332,"simu_top soc cpu cpu_sram_u ex pipeline_data mem_control_data size_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+333,"simu_top soc cpu cpu_sram_u ex pipeline_data mem_control_data is_unsign_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+334,"simu_top soc cpu cpu_sram_u ex pipeline_data wb_control_data regWriteEn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+335,"simu_top soc cpu cpu_sram_u ex pipeline_data wb_control_data regWriteDataSel",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+336,"simu_top soc cpu cpu_sram_u ex pipeline_data rj",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+337,"simu_top soc cpu cpu_sram_u ex pipeline_data rk",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+338,"simu_top soc cpu cpu_sram_u ex pipeline_data rd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+339,"simu_top soc cpu cpu_sram_u ex pipeline_data rjNo",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+340,"simu_top soc cpu cpu_sram_u ex pipeline_data rkNo",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+341,"simu_top soc cpu cpu_sram_u ex pipeline_data rdNo",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+342,"simu_top soc cpu cpu_sram_u ex pipeline_data immout",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+343,"simu_top soc cpu cpu_sram_u ex pipeline_data pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+203,"simu_top soc cpu cpu_sram_u alu aluSrc1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+204,"simu_top soc cpu cpu_sram_u alu aluSrc2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+202,"simu_top soc cpu cpu_sram_u alu aluctrl",3,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBit(c+1032,"simu_top soc cpu cpu_sram_u alu divNeed aclk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1033,"simu_top soc cpu cpu_sram_u alu divNeed aresetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1088,"simu_top soc cpu cpu_sram_u alu aluout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1365,"simu_top soc cpu cpu_sram_u alu overflow",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1346,"simu_top soc cpu cpu_sram_u alu memaddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+31,"simu_top soc cpu cpu_sram_u alu divSigned",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+32,"simu_top soc cpu cpu_sram_u alu divEn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1316,"simu_top soc cpu cpu_sram_u alu quotient",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1317,"simu_top soc cpu cpu_sram_u alu remainder",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+43,"simu_top soc cpu cpu_sram_u alu completed",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+344,"simu_top soc cpu cpu_sram_u alu adder_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+345,"simu_top soc cpu cpu_sram_u alu slt_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+346,"simu_top soc cpu cpu_sram_u alu sltu_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+203,"simu_top soc cpu cpu_sram_u alu adder_a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+347,"simu_top soc cpu cpu_sram_u alu adder_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+348,"simu_top soc cpu cpu_sram_u alu adder_cout",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+349,"simu_top soc cpu cpu_sram_u alu adder_cin",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+1089,"simu_top soc cpu cpu_sram_u alu unnamedblk1 mul_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+1091,"simu_top soc cpu cpu_sram_u alu unnamedblk2 mul_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+1331,"simu_top soc cpu cpu_sram_u alu myDiv WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1369,"simu_top soc cpu cpu_sram_u alu myDiv COUNT_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+1035,"simu_top soc cpu cpu_sram_u alu myDiv clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1036,"simu_top soc cpu cpu_sram_u alu myDiv reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+32,"simu_top soc cpu cpu_sram_u alu myDiv en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+31,"simu_top soc cpu cpu_sram_u alu myDiv is_signed",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+203,"simu_top soc cpu cpu_sram_u alu myDiv dividend",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+204,"simu_top soc cpu cpu_sram_u alu myDiv divisor",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1316,"simu_top soc cpu cpu_sram_u alu myDiv quotient",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1317,"simu_top soc cpu cpu_sram_u alu myDiv remainder",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+43,"simu_top soc cpu cpu_sram_u alu myDiv complete",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+44,"simu_top soc cpu cpu_sram_u alu myDiv quotient_u",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+45,"simu_top soc cpu cpu_sram_u alu myDiv remainder_u",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+350,"simu_top soc cpu cpu_sram_u alu myDiv dividend_abs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+351,"simu_top soc cpu cpu_sram_u alu myDiv divisor_abs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+352,"simu_top soc cpu cpu_sram_u alu myDiv dividend_sign",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+353,"simu_top soc cpu cpu_sram_u alu myDiv divisor_sign",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+354,"simu_top soc cpu cpu_sram_u alu myDiv quotient_sign",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+352,"simu_top soc cpu cpu_sram_u alu myDiv remainder_sign",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1318,"simu_top soc cpu cpu_sram_u alu myDiv quotient_signed",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1319,"simu_top soc cpu cpu_sram_u alu myDiv remainder_signed",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+355,"simu_top soc cpu cpu_sram_u alu myDiv dividend_u",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+356,"simu_top soc cpu cpu_sram_u alu myDiv divisor_u",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+46,"simu_top soc cpu cpu_sram_u alu myDiv dividend_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declQuad(c+47,"simu_top soc cpu cpu_sram_u alu myDiv minuend",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 32,0);
        tracep->declBus(c+49,"simu_top soc cpu cpu_sram_u alu myDiv count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
        tracep->declBus(c+1370,"simu_top soc cpu cpu_sram_u alu myDiv count_init",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declQuad(c+50,"simu_top soc cpu cpu_sram_u alu myDiv minuend_shifted",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 32,0);
        tracep->declQuad(c+1093,"simu_top soc cpu cpu_sram_u alu myDiv minuend_next",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 32,0);
        tracep->declBus(c+52,"simu_top soc cpu cpu_sram_u alu myDiv dividend_next",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+1095,"simu_top soc cpu cpu_sram_u alu myDiv difference",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 32,0);
        tracep->declBit(c+1097,"simu_top soc cpu cpu_sram_u alu myDiv can_subtract",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1331,"simu_top soc cpu cpu_sram_u alu myDiv signed_to_abs_dividend WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+203,"simu_top soc cpu cpu_sram_u alu myDiv signed_to_abs_dividend num",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+350,"simu_top soc cpu cpu_sram_u alu myDiv signed_to_abs_dividend abs_value",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+352,"simu_top soc cpu cpu_sram_u alu myDiv signed_to_abs_dividend sign",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1331,"simu_top soc cpu cpu_sram_u alu myDiv signed_to_abs_divisor WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+204,"simu_top soc cpu cpu_sram_u alu myDiv signed_to_abs_divisor num",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+351,"simu_top soc cpu cpu_sram_u alu myDiv signed_to_abs_divisor abs_value",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+353,"simu_top soc cpu cpu_sram_u alu myDiv signed_to_abs_divisor sign",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1368,"simu_top soc cpu cpu_sram_u mem reset_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+1336,"simu_top soc cpu cpu_sram_u mem isPc",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBit(c+1276,"simu_top soc cpu cpu_sram_u mem aclk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1277,"simu_top soc cpu cpu_sram_u mem aresetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1029,"simu_top soc cpu cpu_sram_u mem valid_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+132,"simu_top soc cpu cpu_sram_u mem data_in mem_control_data memWriteEn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+133,"simu_top soc cpu cpu_sram_u mem data_in mem_control_data memRead",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+134,"simu_top soc cpu cpu_sram_u mem data_in mem_control_data size_mem",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+135,"simu_top soc cpu cpu_sram_u mem data_in mem_control_data is_unsign_load",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+136,"simu_top soc cpu cpu_sram_u mem data_in wb_control_data regWriteEn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+137,"simu_top soc cpu cpu_sram_u mem data_in wb_control_data regWriteDataSel",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+146,"simu_top soc cpu cpu_sram_u mem data_in wstrb_mem",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+147,"simu_top soc cpu cpu_sram_u mem data_in rdNo",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+1087,"simu_top soc cpu cpu_sram_u mem data_in aluout",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+148,"simu_top soc cpu cpu_sram_u mem data_in pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1030,"simu_top soc cpu cpu_sram_u mem ready_go",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1336,"simu_top soc cpu cpu_sram_u mem nop_data mem_control_data memWriteEn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1336,"simu_top soc cpu cpu_sram_u mem nop_data mem_control_data memRead",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1333,"simu_top soc cpu cpu_sram_u mem nop_data mem_control_data size_mem",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+1336,"simu_top soc cpu cpu_sram_u mem nop_data mem_control_data is_unsign_load",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1336,"simu_top soc cpu cpu_sram_u mem nop_data wb_control_data regWriteEn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1358,"simu_top soc cpu cpu_sram_u mem nop_data wb_control_data regWriteDataSel",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1361,"simu_top soc cpu cpu_sram_u mem nop_data wstrb_mem",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1359,"simu_top soc cpu cpu_sram_u mem nop_data rdNo",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+1352,"simu_top soc cpu cpu_sram_u mem nop_data aluout",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1352,"simu_top soc cpu cpu_sram_u mem nop_data pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+159,"simu_top soc cpu cpu_sram_u mem allow_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1360,"simu_top soc cpu cpu_sram_u mem flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1031,"simu_top soc cpu cpu_sram_u mem valid_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+149,"simu_top soc cpu cpu_sram_u mem data_out mem_control_data memWriteEn",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+150,"simu_top soc cpu cpu_sram_u mem data_out mem_control_data memRead",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+151,"simu_top soc cpu cpu_sram_u mem data_out mem_control_data size_mem",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+152,"simu_top soc cpu cpu_sram_u mem data_out mem_control_data is_unsign_load",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+153,"simu_top soc cpu cpu_sram_u mem data_out wb_control_data regWriteEn",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+154,"simu_top soc cpu cpu_sram_u mem data_out wb_control_data regWriteDataSel",4,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+155,"simu_top soc cpu cpu_sram_u mem data_out wstrb_mem",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+156,"simu_top soc cpu cpu_sram_u mem data_out rdNo",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+157,"simu_top soc cpu cpu_sram_u mem data_out aluout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+158,"simu_top soc cpu cpu_sram_u mem data_out pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1028,"simu_top soc cpu cpu_sram_u mem allow_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+357,"simu_top soc cpu cpu_sram_u mem pipeline_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+358,"simu_top soc cpu cpu_sram_u mem pipeline_data mem_control_data memWriteEn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+359,"simu_top soc cpu cpu_sram_u mem pipeline_data mem_control_data memRead",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+360,"simu_top soc cpu cpu_sram_u mem pipeline_data mem_control_data size_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+361,"simu_top soc cpu cpu_sram_u mem pipeline_data mem_control_data is_unsign_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+362,"simu_top soc cpu cpu_sram_u mem pipeline_data wb_control_data regWriteEn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+363,"simu_top soc cpu cpu_sram_u mem pipeline_data wb_control_data regWriteDataSel",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+364,"simu_top soc cpu cpu_sram_u mem pipeline_data wstrb_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBus(c+365,"simu_top soc cpu cpu_sram_u mem pipeline_data rdNo",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+366,"simu_top soc cpu cpu_sram_u mem pipeline_data aluout",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+367,"simu_top soc cpu cpu_sram_u mem pipeline_data pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+111,"simu_top soc cpu cpu_sram_u extend_memData_u wstrb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBit(c+216,"simu_top soc cpu cpu_sram_u extend_memData_u is_unsign_load",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+996,"simu_top soc cpu cpu_sram_u extend_memData_u rdata_mem",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1034,"simu_top soc cpu cpu_sram_u extend_memData_u readData",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1368,"simu_top soc cpu cpu_sram_u wb reset_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+1336,"simu_top soc cpu cpu_sram_u wb isPc",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBit(c+1276,"simu_top soc cpu cpu_sram_u wb aclk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1277,"simu_top soc cpu cpu_sram_u wb aresetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1031,"simu_top soc cpu cpu_sram_u wb valid_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+153,"simu_top soc cpu cpu_sram_u wb data_in wb_control_data regWriteEn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+154,"simu_top soc cpu cpu_sram_u wb data_in wb_control_data regWriteDataSel",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+160,"simu_top soc cpu cpu_sram_u wb data_in rdNo",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+161,"simu_top soc cpu cpu_sram_u wb data_in aluout",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+952,"simu_top soc cpu cpu_sram_u wb data_in readData",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+162,"simu_top soc cpu cpu_sram_u wb data_in pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+146,"simu_top soc cpu cpu_sram_u wb data_in wstrb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBit(c+1335,"simu_top soc cpu cpu_sram_u wb ready_go",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1336,"simu_top soc cpu cpu_sram_u wb nop_data wb_control_data regWriteEn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1358,"simu_top soc cpu cpu_sram_u wb nop_data wb_control_data regWriteDataSel",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1359,"simu_top soc cpu cpu_sram_u wb nop_data rdNo",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+1352,"simu_top soc cpu cpu_sram_u wb nop_data aluout",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1352,"simu_top soc cpu cpu_sram_u wb nop_data readData",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1352,"simu_top soc cpu cpu_sram_u wb nop_data pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1363,"simu_top soc cpu cpu_sram_u wb nop_data wstrb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBit(c+1335,"simu_top soc cpu cpu_sram_u wb allow_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1362,"simu_top soc cpu cpu_sram_u wb flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+170,"simu_top soc cpu cpu_sram_u wb valid_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+163,"simu_top soc cpu cpu_sram_u wb data_out wb_control_data regWriteEn",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+164,"simu_top soc cpu cpu_sram_u wb data_out wb_control_data regWriteDataSel",4,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+165,"simu_top soc cpu cpu_sram_u wb data_out rdNo",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+166,"simu_top soc cpu cpu_sram_u wb data_out aluout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+167,"simu_top soc cpu cpu_sram_u wb data_out readData",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+168,"simu_top soc cpu cpu_sram_u wb data_out pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+169,"simu_top soc cpu cpu_sram_u wb data_out wstrb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBit(c+159,"simu_top soc cpu cpu_sram_u wb allow_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+170,"simu_top soc cpu cpu_sram_u wb pipeline_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+368,"simu_top soc cpu cpu_sram_u wb pipeline_data wb_control_data regWriteEn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+369,"simu_top soc cpu cpu_sram_u wb pipeline_data wb_control_data regWriteDataSel",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+370,"simu_top soc cpu cpu_sram_u wb pipeline_data rdNo",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+371,"simu_top soc cpu cpu_sram_u wb pipeline_data aluout",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+372,"simu_top soc cpu cpu_sram_u wb pipeline_data readData",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+373,"simu_top soc cpu cpu_sram_u wb pipeline_data pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+374,"simu_top soc cpu cpu_sram_u wb pipeline_data wstrb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBit(c+1276,"simu_top soc cpu cpu_axi_interface_u clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1277,"simu_top soc cpu cpu_axi_interface_u resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1019,"simu_top soc cpu cpu_axi_interface_u inst_req",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1336,"simu_top soc cpu cpu_axi_interface_u inst_wr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1343,"simu_top soc cpu cpu_axi_interface_u inst_size",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+108,"simu_top soc cpu cpu_axi_interface_u inst_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1345,"simu_top soc cpu cpu_axi_interface_u inst_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1344,"simu_top soc cpu cpu_axi_interface_u inst_wstrb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+996,"simu_top soc cpu cpu_axi_interface_u inst_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1020,"simu_top soc cpu cpu_axi_interface_u inst_addr_ok",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+948,"simu_top soc cpu cpu_axi_interface_u inst_data_ok",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1021,"simu_top soc cpu cpu_axi_interface_u data_req",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+109,"simu_top soc cpu cpu_axi_interface_u data_wr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+110,"simu_top soc cpu cpu_axi_interface_u data_size",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+111,"simu_top soc cpu cpu_axi_interface_u data_wstrb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1346,"simu_top soc cpu cpu_axi_interface_u data_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+112,"simu_top soc cpu cpu_axi_interface_u data_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+996,"simu_top soc cpu cpu_axi_interface_u data_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+113,"simu_top soc cpu cpu_axi_interface_u data_addr_ok",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+949,"simu_top soc cpu cpu_axi_interface_u data_data_ok",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1332,"simu_top soc cpu cpu_axi_interface_u arid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+53,"simu_top soc cpu cpu_axi_interface_u araddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1338,"simu_top soc cpu cpu_axi_interface_u arlen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+54,"simu_top soc cpu cpu_axi_interface_u arsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+1333,"simu_top soc cpu cpu_axi_interface_u arburst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1333,"simu_top soc cpu cpu_axi_interface_u arlock",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1332,"simu_top soc cpu cpu_axi_interface_u arcache",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1334,"simu_top soc cpu cpu_axi_interface_u arprot",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+61,"simu_top soc cpu cpu_axi_interface_u arvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1313,"simu_top soc cpu cpu_axi_interface_u arready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+62,"simu_top soc cpu cpu_axi_interface_u rid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+996,"simu_top soc cpu cpu_axi_interface_u rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+63,"simu_top soc cpu cpu_axi_interface_u rresp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+64,"simu_top soc cpu cpu_axi_interface_u rlast",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1314,"simu_top soc cpu cpu_axi_interface_u rvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1335,"simu_top soc cpu cpu_axi_interface_u rready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1332,"simu_top soc cpu cpu_axi_interface_u awid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+53,"simu_top soc cpu cpu_axi_interface_u awaddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1338,"simu_top soc cpu cpu_axi_interface_u awlen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+54,"simu_top soc cpu cpu_axi_interface_u awsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+1333,"simu_top soc cpu cpu_axi_interface_u awburst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1333,"simu_top soc cpu cpu_axi_interface_u awlock",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1332,"simu_top soc cpu cpu_axi_interface_u awcache",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1334,"simu_top soc cpu cpu_axi_interface_u awprot",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+55,"simu_top soc cpu cpu_axi_interface_u awvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1310,"simu_top soc cpu cpu_axi_interface_u awready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1332,"simu_top soc cpu cpu_axi_interface_u wid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+56,"simu_top soc cpu cpu_axi_interface_u wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+57,"simu_top soc cpu cpu_axi_interface_u wstrb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBit(c+1335,"simu_top soc cpu cpu_axi_interface_u wlast",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+58,"simu_top soc cpu cpu_axi_interface_u wvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1311,"simu_top soc cpu cpu_axi_interface_u wready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+59,"simu_top soc cpu cpu_axi_interface_u bid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+60,"simu_top soc cpu cpu_axi_interface_u bresp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+1312,"simu_top soc cpu cpu_axi_interface_u bvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1335,"simu_top soc cpu cpu_axi_interface_u bready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+375,"simu_top soc cpu cpu_axi_interface_u do_req",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+376,"simu_top soc cpu cpu_axi_interface_u do_req_or",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+377,"simu_top soc cpu cpu_axi_interface_u do_wr_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+378,"simu_top soc cpu cpu_axi_interface_u do_size_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+53,"simu_top soc cpu cpu_axi_interface_u do_addr_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+56,"simu_top soc cpu cpu_axi_interface_u do_wdata_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+57,"simu_top soc cpu cpu_axi_interface_u do_wstrb_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBit(c+1037,"simu_top soc cpu cpu_axi_interface_u data_back",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+379,"simu_top soc cpu cpu_axi_interface_u addr_rcv",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+380,"simu_top soc cpu cpu_axi_interface_u wdata_rcv",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1331,"simu_top soc delay BUS_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1331,"simu_top soc delay DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1331,"simu_top soc delay CPU_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+1278,"simu_top soc delay enable_delay",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1279,"simu_top soc delay random_seed",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 22,0);
        tracep->declBus(c+53,"simu_top soc delay s_araddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1333,"simu_top soc delay s_arburst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1332,"simu_top soc delay s_arcache",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1332,"simu_top soc delay s_arid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1332,"simu_top soc delay s_arlen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1333,"simu_top soc delay s_arlock",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1334,"simu_top soc delay s_arprot",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+68,"simu_top soc delay s_arready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+54,"simu_top soc delay s_arsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+1000,"simu_top soc delay s_arvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+53,"simu_top soc delay s_awaddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1333,"simu_top soc delay s_awburst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1332,"simu_top soc delay s_awcache",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1332,"simu_top soc delay s_awid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1332,"simu_top soc delay s_awlen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1333,"simu_top soc delay s_awlock",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1334,"simu_top soc delay s_awprot",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+65,"simu_top soc delay s_awready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+54,"simu_top soc delay s_awsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+997,"simu_top soc delay s_awvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+59,"simu_top soc delay s_bid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBit(c+999,"simu_top soc delay s_bready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+60,"simu_top soc delay s_bresp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+67,"simu_top soc delay s_bvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1276,"simu_top soc delay aclk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1277,"simu_top soc delay aresetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+996,"simu_top soc delay s_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+62,"simu_top soc delay s_rid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBit(c+64,"simu_top soc delay s_rlast",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1001,"simu_top soc delay s_rready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+63,"simu_top soc delay s_rresp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+69,"simu_top soc delay s_rvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+56,"simu_top soc delay s_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1332,"simu_top soc delay s_wid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBit(c+1335,"simu_top soc delay s_wlast",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+66,"simu_top soc delay s_wready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+57,"simu_top soc delay s_wstrb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBit(c+998,"simu_top soc delay s_wvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+53,"simu_top soc delay m_araddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1333,"simu_top soc delay m_arburst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1332,"simu_top soc delay m_arcache",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1332,"simu_top soc delay m_arid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1332,"simu_top soc delay m_arlen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1333,"simu_top soc delay m_arlock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1334,"simu_top soc delay m_arprot",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+1313,"simu_top soc delay m_arready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+54,"simu_top soc delay m_arsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+61,"simu_top soc delay m_arvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+53,"simu_top soc delay m_awaddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1333,"simu_top soc delay m_awburst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1332,"simu_top soc delay m_awcache",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1332,"simu_top soc delay m_awid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1332,"simu_top soc delay m_awlen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1333,"simu_top soc delay m_awlock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1334,"simu_top soc delay m_awprot",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+1310,"simu_top soc delay m_awready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+54,"simu_top soc delay m_awsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+55,"simu_top soc delay m_awvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+59,"simu_top soc delay m_bid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBit(c+1335,"simu_top soc delay m_bready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+60,"simu_top soc delay m_bresp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+1312,"simu_top soc delay m_bvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+996,"simu_top soc delay m_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+62,"simu_top soc delay m_rid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBit(c+64,"simu_top soc delay m_rlast",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1335,"simu_top soc delay m_rready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+63,"simu_top soc delay m_rresp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+1314,"simu_top soc delay m_rvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+56,"simu_top soc delay m_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1332,"simu_top soc delay m_wid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBit(c+1335,"simu_top soc delay m_wlast",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1311,"simu_top soc delay m_wready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+57,"simu_top soc delay m_wstrb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBit(c+58,"simu_top soc delay m_wvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+381,"simu_top soc delay mask_ar",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+382,"simu_top soc delay mask_ar_disable",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+955,"simu_top soc delay mask_ar_ok",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+383,"simu_top soc delay mask_ar_raw",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+384,"simu_top soc delay mask_aw",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+385,"simu_top soc delay mask_aw_disable",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+956,"simu_top soc delay mask_aw_ok",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+386,"simu_top soc delay mask_aw_raw",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+387,"simu_top soc delay mask_b",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+387,"simu_top soc delay mask_b_raw",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+388,"simu_top soc delay mask_no_delay",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+389,"simu_top soc delay mask_r",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+389,"simu_top soc delay mask_r_raw",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+390,"simu_top soc delay mask_random",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 22,0);
        tracep->declBus(c+391,"simu_top soc delay mask_random_next",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 22,0);
        tracep->declBit(c+1315,"simu_top soc delay mask_reset",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+392,"simu_top soc delay mask_short_delay",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+393,"simu_top soc delay mask_w",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+394,"simu_top soc delay mask_w_disable",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+957,"simu_top soc delay mask_w_ok",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+395,"simu_top soc delay mask_w_raw",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1336,"simu_top soc AXI_SLAVE_MUX spi_boot",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1276,"simu_top soc AXI_SLAVE_MUX axi_s_aclk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1277,"simu_top soc AXI_SLAVE_MUX axi_s_aresetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1332,"simu_top soc AXI_SLAVE_MUX axi_s_awid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+53,"simu_top soc AXI_SLAVE_MUX axi_s_awaddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1332,"simu_top soc AXI_SLAVE_MUX axi_s_awlen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+54,"simu_top soc AXI_SLAVE_MUX axi_s_awsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+1333,"simu_top soc AXI_SLAVE_MUX axi_s_awburst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1333,"simu_top soc AXI_SLAVE_MUX axi_s_awlock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1332,"simu_top soc AXI_SLAVE_MUX axi_s_awcache",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1334,"simu_top soc AXI_SLAVE_MUX axi_s_awprot",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+997,"simu_top soc AXI_SLAVE_MUX axi_s_awvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+65,"simu_top soc AXI_SLAVE_MUX axi_s_awready",-1,FST_VD_OUTPUT,FST_VT_SV_BIT, false,-1);
        tracep->declBus(c+1332,"simu_top soc AXI_SLAVE_MUX axi_s_wid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+56,"simu_top soc AXI_SLAVE_MUX axi_s_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+57,"simu_top soc AXI_SLAVE_MUX axi_s_wstrb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBit(c+1335,"simu_top soc AXI_SLAVE_MUX axi_s_wlast",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+998,"simu_top soc AXI_SLAVE_MUX axi_s_wvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+66,"simu_top soc AXI_SLAVE_MUX axi_s_wready",-1,FST_VD_OUTPUT,FST_VT_SV_BIT, false,-1);
        tracep->declBus(c+59,"simu_top soc AXI_SLAVE_MUX axi_s_bid",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBus(c+60,"simu_top soc AXI_SLAVE_MUX axi_s_bresp",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+67,"simu_top soc AXI_SLAVE_MUX axi_s_bvalid",-1,FST_VD_OUTPUT,FST_VT_SV_BIT, false,-1);
        tracep->declBit(c+999,"simu_top soc AXI_SLAVE_MUX axi_s_bready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1332,"simu_top soc AXI_SLAVE_MUX axi_s_arid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+53,"simu_top soc AXI_SLAVE_MUX axi_s_araddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1332,"simu_top soc AXI_SLAVE_MUX axi_s_arlen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+54,"simu_top soc AXI_SLAVE_MUX axi_s_arsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+1333,"simu_top soc AXI_SLAVE_MUX axi_s_arburst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1333,"simu_top soc AXI_SLAVE_MUX axi_s_arlock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1332,"simu_top soc AXI_SLAVE_MUX axi_s_arcache",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1334,"simu_top soc AXI_SLAVE_MUX axi_s_arprot",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+1000,"simu_top soc AXI_SLAVE_MUX axi_s_arvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+68,"simu_top soc AXI_SLAVE_MUX axi_s_arready",-1,FST_VD_OUTPUT,FST_VT_SV_BIT, false,-1);
        tracep->declBus(c+62,"simu_top soc AXI_SLAVE_MUX axi_s_rid",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBus(c+996,"simu_top soc AXI_SLAVE_MUX axi_s_rdata",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+63,"simu_top soc AXI_SLAVE_MUX axi_s_rresp",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+64,"simu_top soc AXI_SLAVE_MUX axi_s_rlast",-1,FST_VD_OUTPUT,FST_VT_SV_BIT, false,-1);
        tracep->declBit(c+69,"simu_top soc AXI_SLAVE_MUX axi_s_rvalid",-1,FST_VD_OUTPUT,FST_VT_SV_BIT, false,-1);
        tracep->declBit(c+1001,"simu_top soc AXI_SLAVE_MUX axi_s_rready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1332,"simu_top soc AXI_SLAVE_MUX s0_awid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+53,"simu_top soc AXI_SLAVE_MUX s0_awaddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1332,"simu_top soc AXI_SLAVE_MUX s0_awlen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+54,"simu_top soc AXI_SLAVE_MUX s0_awsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+1333,"simu_top soc AXI_SLAVE_MUX s0_awburst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1333,"simu_top soc AXI_SLAVE_MUX s0_awlock",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1332,"simu_top soc AXI_SLAVE_MUX s0_awcache",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1334,"simu_top soc AXI_SLAVE_MUX s0_awprot",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+1002,"simu_top soc AXI_SLAVE_MUX s0_awvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+70,"simu_top soc AXI_SLAVE_MUX s0_awready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1332,"simu_top soc AXI_SLAVE_MUX s0_wid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+56,"simu_top soc AXI_SLAVE_MUX s0_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+57,"simu_top soc AXI_SLAVE_MUX s0_wstrb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBit(c+1335,"simu_top soc AXI_SLAVE_MUX s0_wlast",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1003,"simu_top soc AXI_SLAVE_MUX s0_wvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+71,"simu_top soc AXI_SLAVE_MUX s0_wready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+72,"simu_top soc AXI_SLAVE_MUX s0_bid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1333,"simu_top soc AXI_SLAVE_MUX s0_bresp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+73,"simu_top soc AXI_SLAVE_MUX s0_bvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1004,"simu_top soc AXI_SLAVE_MUX s0_bready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1332,"simu_top soc AXI_SLAVE_MUX s0_arid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+53,"simu_top soc AXI_SLAVE_MUX s0_araddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1332,"simu_top soc AXI_SLAVE_MUX s0_arlen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+54,"simu_top soc AXI_SLAVE_MUX s0_arsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+1333,"simu_top soc AXI_SLAVE_MUX s0_arburst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1333,"simu_top soc AXI_SLAVE_MUX s0_arlock",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1332,"simu_top soc AXI_SLAVE_MUX s0_arcache",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1334,"simu_top soc AXI_SLAVE_MUX s0_arprot",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+1005,"simu_top soc AXI_SLAVE_MUX s0_arvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+74,"simu_top soc AXI_SLAVE_MUX s0_arready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+75,"simu_top soc AXI_SLAVE_MUX s0_rid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1282,"simu_top soc AXI_SLAVE_MUX s0_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1333,"simu_top soc AXI_SLAVE_MUX s0_rresp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+76,"simu_top soc AXI_SLAVE_MUX s0_rlast",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+77,"simu_top soc AXI_SLAVE_MUX s0_rvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1006,"simu_top soc AXI_SLAVE_MUX s0_rready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1332,"simu_top soc AXI_SLAVE_MUX s1_awid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+53,"simu_top soc AXI_SLAVE_MUX s1_awaddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1332,"simu_top soc AXI_SLAVE_MUX s1_awlen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+54,"simu_top soc AXI_SLAVE_MUX s1_awsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+1333,"simu_top soc AXI_SLAVE_MUX s1_awburst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1333,"simu_top soc AXI_SLAVE_MUX s1_awlock",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1332,"simu_top soc AXI_SLAVE_MUX s1_awcache",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1334,"simu_top soc AXI_SLAVE_MUX s1_awprot",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+1038,"simu_top soc AXI_SLAVE_MUX s1_awvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1371,"simu_top soc AXI_SLAVE_MUX s1_awready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1332,"simu_top soc AXI_SLAVE_MUX s1_wid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+56,"simu_top soc AXI_SLAVE_MUX s1_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+57,"simu_top soc AXI_SLAVE_MUX s1_wstrb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBit(c+1335,"simu_top soc AXI_SLAVE_MUX s1_wlast",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1039,"simu_top soc AXI_SLAVE_MUX s1_wvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1372,"simu_top soc AXI_SLAVE_MUX s1_wready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1373,"simu_top soc AXI_SLAVE_MUX s1_bid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1374,"simu_top soc AXI_SLAVE_MUX s1_bresp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+1375,"simu_top soc AXI_SLAVE_MUX s1_bvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1040,"simu_top soc AXI_SLAVE_MUX s1_bready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1332,"simu_top soc AXI_SLAVE_MUX s1_arid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+53,"simu_top soc AXI_SLAVE_MUX s1_araddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1332,"simu_top soc AXI_SLAVE_MUX s1_arlen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+54,"simu_top soc AXI_SLAVE_MUX s1_arsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+1333,"simu_top soc AXI_SLAVE_MUX s1_arburst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1333,"simu_top soc AXI_SLAVE_MUX s1_arlock",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1332,"simu_top soc AXI_SLAVE_MUX s1_arcache",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1334,"simu_top soc AXI_SLAVE_MUX s1_arprot",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+1041,"simu_top soc AXI_SLAVE_MUX s1_arvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1376,"simu_top soc AXI_SLAVE_MUX s1_arready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1377,"simu_top soc AXI_SLAVE_MUX s1_rid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1378,"simu_top soc AXI_SLAVE_MUX s1_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1379,"simu_top soc AXI_SLAVE_MUX s1_rresp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+1380,"simu_top soc AXI_SLAVE_MUX s1_rlast",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1381,"simu_top soc AXI_SLAVE_MUX s1_rvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1042,"simu_top soc AXI_SLAVE_MUX s1_rready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1332,"simu_top soc AXI_SLAVE_MUX s2_awid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+53,"simu_top soc AXI_SLAVE_MUX s2_awaddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1332,"simu_top soc AXI_SLAVE_MUX s2_awlen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+54,"simu_top soc AXI_SLAVE_MUX s2_awsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+1333,"simu_top soc AXI_SLAVE_MUX s2_awburst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1333,"simu_top soc AXI_SLAVE_MUX s2_awlock",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1332,"simu_top soc AXI_SLAVE_MUX s2_awcache",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1334,"simu_top soc AXI_SLAVE_MUX s2_awprot",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+1012,"simu_top soc AXI_SLAVE_MUX s2_awvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+87,"simu_top soc AXI_SLAVE_MUX s2_awready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1332,"simu_top soc AXI_SLAVE_MUX s2_wid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+56,"simu_top soc AXI_SLAVE_MUX s2_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+57,"simu_top soc AXI_SLAVE_MUX s2_wstrb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBit(c+1335,"simu_top soc AXI_SLAVE_MUX s2_wlast",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1013,"simu_top soc AXI_SLAVE_MUX s2_wvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+88,"simu_top soc AXI_SLAVE_MUX s2_wready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+89,"simu_top soc AXI_SLAVE_MUX s2_bid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1333,"simu_top soc AXI_SLAVE_MUX s2_bresp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+90,"simu_top soc AXI_SLAVE_MUX s2_bvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1014,"simu_top soc AXI_SLAVE_MUX s2_bready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1332,"simu_top soc AXI_SLAVE_MUX s2_arid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+53,"simu_top soc AXI_SLAVE_MUX s2_araddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1332,"simu_top soc AXI_SLAVE_MUX s2_arlen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+54,"simu_top soc AXI_SLAVE_MUX s2_arsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+1333,"simu_top soc AXI_SLAVE_MUX s2_arburst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1333,"simu_top soc AXI_SLAVE_MUX s2_arlock",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1332,"simu_top soc AXI_SLAVE_MUX s2_arcache",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1334,"simu_top soc AXI_SLAVE_MUX s2_arprot",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+1015,"simu_top soc AXI_SLAVE_MUX s2_arvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+91,"simu_top soc AXI_SLAVE_MUX s2_arready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+92,"simu_top soc AXI_SLAVE_MUX s2_rid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+93,"simu_top soc AXI_SLAVE_MUX s2_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1333,"simu_top soc AXI_SLAVE_MUX s2_rresp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+94,"simu_top soc AXI_SLAVE_MUX s2_rlast",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+95,"simu_top soc AXI_SLAVE_MUX s2_rvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1016,"simu_top soc AXI_SLAVE_MUX s2_rready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1332,"simu_top soc AXI_SLAVE_MUX s3_awid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+53,"simu_top soc AXI_SLAVE_MUX s3_awaddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1332,"simu_top soc AXI_SLAVE_MUX s3_awlen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+54,"simu_top soc AXI_SLAVE_MUX s3_awsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+1333,"simu_top soc AXI_SLAVE_MUX s3_awburst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1333,"simu_top soc AXI_SLAVE_MUX s3_awlock",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1332,"simu_top soc AXI_SLAVE_MUX s3_awcache",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1334,"simu_top soc AXI_SLAVE_MUX s3_awprot",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+1007,"simu_top soc AXI_SLAVE_MUX s3_awvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+78,"simu_top soc AXI_SLAVE_MUX s3_awready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1332,"simu_top soc AXI_SLAVE_MUX s3_wid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+56,"simu_top soc AXI_SLAVE_MUX s3_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+57,"simu_top soc AXI_SLAVE_MUX s3_wstrb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBit(c+1335,"simu_top soc AXI_SLAVE_MUX s3_wlast",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1008,"simu_top soc AXI_SLAVE_MUX s3_wvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+79,"simu_top soc AXI_SLAVE_MUX s3_wready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+80,"simu_top soc AXI_SLAVE_MUX s3_bid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1333,"simu_top soc AXI_SLAVE_MUX s3_bresp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+81,"simu_top soc AXI_SLAVE_MUX s3_bvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1009,"simu_top soc AXI_SLAVE_MUX s3_bready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1332,"simu_top soc AXI_SLAVE_MUX s3_arid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+53,"simu_top soc AXI_SLAVE_MUX s3_araddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1332,"simu_top soc AXI_SLAVE_MUX s3_arlen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+54,"simu_top soc AXI_SLAVE_MUX s3_arsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+1333,"simu_top soc AXI_SLAVE_MUX s3_arburst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1333,"simu_top soc AXI_SLAVE_MUX s3_arlock",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1332,"simu_top soc AXI_SLAVE_MUX s3_arcache",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1334,"simu_top soc AXI_SLAVE_MUX s3_arprot",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+1010,"simu_top soc AXI_SLAVE_MUX s3_arvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+82,"simu_top soc AXI_SLAVE_MUX s3_arready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+83,"simu_top soc AXI_SLAVE_MUX s3_rid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+84,"simu_top soc AXI_SLAVE_MUX s3_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1333,"simu_top soc AXI_SLAVE_MUX s3_rresp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+85,"simu_top soc AXI_SLAVE_MUX s3_rlast",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+86,"simu_top soc AXI_SLAVE_MUX s3_rvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1011,"simu_top soc AXI_SLAVE_MUX s3_rready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1332,"simu_top soc AXI_SLAVE_MUX s4_awid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+53,"simu_top soc AXI_SLAVE_MUX s4_awaddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1332,"simu_top soc AXI_SLAVE_MUX s4_awlen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+54,"simu_top soc AXI_SLAVE_MUX s4_awsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+1333,"simu_top soc AXI_SLAVE_MUX s4_awburst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1333,"simu_top soc AXI_SLAVE_MUX s4_awlock",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1332,"simu_top soc AXI_SLAVE_MUX s4_awcache",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1334,"simu_top soc AXI_SLAVE_MUX s4_awprot",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+1043,"simu_top soc AXI_SLAVE_MUX s4_awvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1382,"simu_top soc AXI_SLAVE_MUX s4_awready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1332,"simu_top soc AXI_SLAVE_MUX s4_wid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+56,"simu_top soc AXI_SLAVE_MUX s4_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+57,"simu_top soc AXI_SLAVE_MUX s4_wstrb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBit(c+1335,"simu_top soc AXI_SLAVE_MUX s4_wlast",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1044,"simu_top soc AXI_SLAVE_MUX s4_wvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1383,"simu_top soc AXI_SLAVE_MUX s4_wready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1384,"simu_top soc AXI_SLAVE_MUX s4_bid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1385,"simu_top soc AXI_SLAVE_MUX s4_bresp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+1386,"simu_top soc AXI_SLAVE_MUX s4_bvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1045,"simu_top soc AXI_SLAVE_MUX s4_bready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1332,"simu_top soc AXI_SLAVE_MUX s4_arid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+53,"simu_top soc AXI_SLAVE_MUX s4_araddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1332,"simu_top soc AXI_SLAVE_MUX s4_arlen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+54,"simu_top soc AXI_SLAVE_MUX s4_arsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+1333,"simu_top soc AXI_SLAVE_MUX s4_arburst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1333,"simu_top soc AXI_SLAVE_MUX s4_arlock",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1332,"simu_top soc AXI_SLAVE_MUX s4_arcache",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1334,"simu_top soc AXI_SLAVE_MUX s4_arprot",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+1046,"simu_top soc AXI_SLAVE_MUX s4_arvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1387,"simu_top soc AXI_SLAVE_MUX s4_arready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1388,"simu_top soc AXI_SLAVE_MUX s4_rid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1389,"simu_top soc AXI_SLAVE_MUX s4_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1390,"simu_top soc AXI_SLAVE_MUX s4_rresp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+1391,"simu_top soc AXI_SLAVE_MUX s4_rlast",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1392,"simu_top soc AXI_SLAVE_MUX s4_rvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1047,"simu_top soc AXI_SLAVE_MUX s4_rready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1276,"simu_top soc AXI_SLAVE_MUX clk",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1277,"simu_top soc AXI_SLAVE_MUX rst_n",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+396,"simu_top soc AXI_SLAVE_MUX wr_data_s_hit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+397,"simu_top soc AXI_SLAVE_MUX rd_addr_hit",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+398,"simu_top soc AXI_SLAVE_MUX wr_addr_hit",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+399,"simu_top soc AXI_SLAVE_MUX wr_resp_s_hit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+400,"simu_top soc AXI_SLAVE_MUX s_awready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+401,"simu_top soc AXI_SLAVE_MUX s_wready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+402,"simu_top soc AXI_SLAVE_MUX s_bvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+403,"simu_top soc AXI_SLAVE_MUX s_arready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+404,"simu_top soc AXI_SLAVE_MUX s_rlast",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+405,"simu_top soc AXI_SLAVE_MUX s_rvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+406+i*1,"simu_top soc AXI_SLAVE_MUX s_bid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 3,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+33+i*1,"simu_top soc AXI_SLAVE_MUX s_bresp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 1,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+411+i*1,"simu_top soc AXI_SLAVE_MUX s_rid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 3,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+958+i*1,"simu_top soc AXI_SLAVE_MUX s_rdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 31,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+38+i*1,"simu_top soc AXI_SLAVE_MUX s_rresp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 1,0);}}
        tracep->declBus(c+1048,"simu_top soc AXI_SLAVE_MUX s_awvalid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+1049,"simu_top soc AXI_SLAVE_MUX s_wvalid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+1050,"simu_top soc AXI_SLAVE_MUX s_bready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+1051,"simu_top soc AXI_SLAVE_MUX s_arvalid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+1052,"simu_top soc AXI_SLAVE_MUX s_rready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+1393+i*1,"simu_top soc AXI_SLAVE_MUX BASE_ADDR",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 4,0);}}
        tracep->declBus(c+416,"simu_top soc AXI_SLAVE_MUX wr_sel_group_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+417,"simu_top soc AXI_SLAVE_MUX wr_sel_group_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+418,"simu_top soc AXI_SLAVE_MUX bvalid_group_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+419,"simu_top soc AXI_SLAVE_MUX bvalid_group_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+1398,"simu_top soc AXI_SLAVE_MUX rd_sel_group_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+1399,"simu_top soc AXI_SLAVE_MUX rd_sel_group_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+420,"simu_top soc AXI_SLAVE_MUX rd_valid_group_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+421,"simu_top soc AXI_SLAVE_MUX rd_valid_group_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+422,"simu_top soc AXI_SLAVE_MUX wr_fifo_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+423,"simu_top soc AXI_SLAVE_MUX wr_fifo_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+424,"simu_top soc AXI_SLAVE_MUX rd_fifo_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+425,"simu_top soc AXI_SLAVE_MUX rd_fifo_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1053,"simu_top soc AXI_SLAVE_MUX wr_dir_ins",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+963,"simu_top soc AXI_SLAVE_MUX wr_dir_del",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+426,"simu_top soc AXI_SLAVE_MUX wr_data_dir",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+427,"simu_top soc AXI_SLAVE_MUX wr_addr_dir",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBus(c+428,"simu_top soc AXI_SLAVE_MUX wr_resp_pre_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBit(c+429,"simu_top soc AXI_SLAVE_MUX wr_resp_prog",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+430,"simu_top soc AXI_SLAVE_MUX wr_resp_sel_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBus(c+431,"simu_top soc AXI_SLAVE_MUX wr_resp_sel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+1400,"simu_top soc AXI_SLAVE_MUX axi_s_awready_int",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
        tracep->declBus(c+1400,"simu_top soc AXI_SLAVE_MUX awvlid_int",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
        tracep->declBus(c+1400,"simu_top soc AXI_SLAVE_MUX resp_int",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
        tracep->declBus(c+1400,"simu_top soc AXI_SLAVE_MUX axi_s_resp_int",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
        tracep->declBus(c+432,"simu_top soc AXI_SLAVE_MUX w_addr_dir_int",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
        tracep->declBus(c+1400,"simu_top soc AXI_SLAVE_MUX w_ad_int",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
        tracep->declBit(c+433,"simu_top soc AXI_SLAVE_MUX wr_addr_hit_temp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1400,"simu_top soc AXI_SLAVE_MUX axi_s_wready_int",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
        tracep->declBus(c+1400,"simu_top soc AXI_SLAVE_MUX wvalid_int",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
        tracep->declBus(c+434,"simu_top soc AXI_SLAVE_MUX rd_data_sel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+1054,"simu_top soc AXI_SLAVE_MUX rd_dir_ins",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+964,"simu_top soc AXI_SLAVE_MUX rd_dir_del",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+434,"simu_top soc AXI_SLAVE_MUX rd_data_dir",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+435,"simu_top soc AXI_SLAVE_MUX rd_addr_dir",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBus(c+436,"simu_top soc AXI_SLAVE_MUX rd_data_pre_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBus(c+1400,"simu_top soc AXI_SLAVE_MUX rd_arready_int",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
        tracep->declBus(c+1400,"simu_top soc AXI_SLAVE_MUX rd_arvalid_int",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
        tracep->declBus(c+1401,"simu_top soc AXI_SLAVE_MUX rd_addr_hit_int",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
        tracep->declBit(c+437,"simu_top soc AXI_SLAVE_MUX rd_addr_hit_temp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+438,"simu_top soc AXI_SLAVE_MUX rd_addr_dir_int",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
        tracep->declBus(c+1400,"simu_top soc AXI_SLAVE_MUX axi_rd_data_int",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
        tracep->declBus(c+1402,"simu_top soc AXI_SLAVE_MUX wr_fifo FIFO_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+1276,"simu_top soc AXI_SLAVE_MUX wr_fifo clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1277,"simu_top soc AXI_SLAVE_MUX wr_fifo rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+422,"simu_top soc AXI_SLAVE_MUX wr_fifo empty",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+423,"simu_top soc AXI_SLAVE_MUX wr_fifo full",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1053,"simu_top soc AXI_SLAVE_MUX wr_fifo shift_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+427,"simu_top soc AXI_SLAVE_MUX wr_fifo data_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+963,"simu_top soc AXI_SLAVE_MUX wr_fifo shift_out",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+426,"simu_top soc AXI_SLAVE_MUX wr_fifo data_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+439+i*1,"simu_top soc AXI_SLAVE_MUX wr_fifo fifo_ram",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 2,0);}}
        tracep->declBus(c+441,"simu_top soc AXI_SLAVE_MUX wr_fifo wr_ptr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+442,"simu_top soc AXI_SLAVE_MUX wr_fifo rd_ptr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+443,"simu_top soc AXI_SLAVE_MUX wr_fifo mem_wr_pos",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 0,0);
        tracep->declBus(c+444,"simu_top soc AXI_SLAVE_MUX wr_fifo mem_rd_pos",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 0,0);
        tracep->declBus(c+445,"simu_top soc AXI_SLAVE_MUX wr_fifo i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
        tracep->declBus(c+1402,"simu_top soc AXI_SLAVE_MUX rd_fifo FIFO_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+1276,"simu_top soc AXI_SLAVE_MUX rd_fifo clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1277,"simu_top soc AXI_SLAVE_MUX rd_fifo rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+424,"simu_top soc AXI_SLAVE_MUX rd_fifo empty",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+425,"simu_top soc AXI_SLAVE_MUX rd_fifo full",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1054,"simu_top soc AXI_SLAVE_MUX rd_fifo shift_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+435,"simu_top soc AXI_SLAVE_MUX rd_fifo data_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+964,"simu_top soc AXI_SLAVE_MUX rd_fifo shift_out",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+434,"simu_top soc AXI_SLAVE_MUX rd_fifo data_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+446+i*1,"simu_top soc AXI_SLAVE_MUX rd_fifo fifo_ram",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 2,0);}}
        tracep->declBus(c+448,"simu_top soc AXI_SLAVE_MUX rd_fifo wr_ptr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+449,"simu_top soc AXI_SLAVE_MUX rd_fifo rd_ptr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+450,"simu_top soc AXI_SLAVE_MUX rd_fifo mem_wr_pos",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 0,0);
        tracep->declBus(c+451,"simu_top soc AXI_SLAVE_MUX rd_fifo mem_rd_pos",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 0,0);
        tracep->declBus(c+452,"simu_top soc AXI_SLAVE_MUX rd_fifo i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
        tracep->declBus(c+1403,"simu_top soc APB_DEV ADDR_APB",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1404,"simu_top soc APB_DEV DATA_APB",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1405,"simu_top soc APB_DEV L_ADDR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1404,"simu_top soc APB_DEV L_ID",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1406,"simu_top soc APB_DEV L_DATA",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1407,"simu_top soc APB_DEV L_MASK",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+1276,"simu_top soc APB_DEV clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1277,"simu_top soc APB_DEV rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1332,"simu_top soc APB_DEV axi_s_awid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+53,"simu_top soc APB_DEV axi_s_awaddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1332,"simu_top soc APB_DEV axi_s_awlen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+54,"simu_top soc APB_DEV axi_s_awsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+1333,"simu_top soc APB_DEV axi_s_awburst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1333,"simu_top soc APB_DEV axi_s_awlock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1332,"simu_top soc APB_DEV axi_s_awcache",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1334,"simu_top soc APB_DEV axi_s_awprot",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+1012,"simu_top soc APB_DEV axi_s_awvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+87,"simu_top soc APB_DEV axi_s_awready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1332,"simu_top soc APB_DEV axi_s_wid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+56,"simu_top soc APB_DEV axi_s_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+57,"simu_top soc APB_DEV axi_s_wstrb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBit(c+1335,"simu_top soc APB_DEV axi_s_wlast",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1013,"simu_top soc APB_DEV axi_s_wvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+88,"simu_top soc APB_DEV axi_s_wready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+89,"simu_top soc APB_DEV axi_s_bid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1333,"simu_top soc APB_DEV axi_s_bresp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+90,"simu_top soc APB_DEV axi_s_bvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1014,"simu_top soc APB_DEV axi_s_bready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1332,"simu_top soc APB_DEV axi_s_arid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+53,"simu_top soc APB_DEV axi_s_araddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1332,"simu_top soc APB_DEV axi_s_arlen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+54,"simu_top soc APB_DEV axi_s_arsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+1333,"simu_top soc APB_DEV axi_s_arburst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1333,"simu_top soc APB_DEV axi_s_arlock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1332,"simu_top soc APB_DEV axi_s_arcache",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1334,"simu_top soc APB_DEV axi_s_arprot",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+1015,"simu_top soc APB_DEV axi_s_arvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+91,"simu_top soc APB_DEV axi_s_arready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+92,"simu_top soc APB_DEV axi_s_rid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+93,"simu_top soc APB_DEV axi_s_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1333,"simu_top soc APB_DEV axi_s_rresp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+94,"simu_top soc APB_DEV axi_s_rlast",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+95,"simu_top soc APB_DEV axi_s_rvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1016,"simu_top soc APB_DEV axi_s_rready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+453,"simu_top soc APB_DEV apb_ready_dma",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1408,"simu_top soc APB_DEV apb_rw_dma",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1409,"simu_top soc APB_DEV apb_psel_dma",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1410,"simu_top soc APB_DEV apb_enab_dma",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1411,"simu_top soc APB_DEV apb_addr_dma",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 19,0);
        tracep->declBus(c+1412,"simu_top soc APB_DEV apb_wdata_dma",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+454,"simu_top soc APB_DEV apb_rdata_dma",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1413,"simu_top soc APB_DEV apb_valid_dma",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+455,"simu_top soc APB_DEV dma_grant",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+456,"simu_top soc APB_DEV dma_req_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1414,"simu_top soc APB_DEV dma_ack_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1300,"simu_top soc APB_DEV uart0_txd_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+103,"simu_top soc APB_DEV uart0_txd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+104,"simu_top soc APB_DEV uart0_txd_oe",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1299,"simu_top soc APB_DEV uart0_rxd_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+105,"simu_top soc APB_DEV uart0_rxd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+106,"simu_top soc APB_DEV uart0_rxd_oe",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+100,"simu_top soc APB_DEV uart0_rts_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+101,"simu_top soc APB_DEV uart0_dtr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1336,"simu_top soc APB_DEV uart0_cts_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1336,"simu_top soc APB_DEV uart0_dsr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1336,"simu_top soc APB_DEV uart0_dcd_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1337,"simu_top soc APB_DEV uart0_ri_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+102,"simu_top soc APB_DEV uart0_int",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1333,"simu_top soc APB_DEV nand_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1332,"simu_top soc APB_DEV nand_rdy",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1332,"simu_top soc APB_DEV nand_ce",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBit(c+1336,"simu_top soc APB_DEV nand_cle",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1336,"simu_top soc APB_DEV nand_ale",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1336,"simu_top soc APB_DEV nand_rd",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1336,"simu_top soc APB_DEV nand_wr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1336,"simu_top soc APB_DEV nand_dat_oe",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1338,"simu_top soc APB_DEV nand_dat_i",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+1338,"simu_top soc APB_DEV nand_dat_o",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+1414,"simu_top soc APB_DEV nand_dma_ack_i",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+456,"simu_top soc APB_DEV nand_dma_req_o",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+457,"simu_top soc APB_DEV apb_ready_cpu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+458,"simu_top soc APB_DEV apb_rw_cpu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+459,"simu_top soc APB_DEV apb_psel_cpu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+460,"simu_top soc APB_DEV apb_enab_cpu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+461,"simu_top soc APB_DEV apb_addr_cpu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 19,0);
        tracep->declBus(c+462,"simu_top soc APB_DEV apb_datai_cpu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+463,"simu_top soc APB_DEV apb_datao_cpu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+1276,"simu_top soc APB_DEV apb_clk_cpu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1277,"simu_top soc APB_DEV apb_reset_n_cpu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+464,"simu_top soc APB_DEV apb_word_trans_cpu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1055,"simu_top soc APB_DEV apb_valid_cpu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+465,"simu_top soc APB_DEV apb_high_24b_rd",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 23,0);
        tracep->declBus(c+466,"simu_top soc APB_DEV apb_high_24b_wr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 23,0);
        tracep->declBit(c+1415,"simu_top soc APB_DEV apb_clk_dma",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1416,"simu_top soc APB_DEV apb_reset_n_dma",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+467,"simu_top soc APB_DEV apb_uart0_req",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+468,"simu_top soc APB_DEV apb_uart0_ack",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+469,"simu_top soc APB_DEV apb_uart0_rw",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+468,"simu_top soc APB_DEV apb_uart0_enab",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+470,"simu_top soc APB_DEV apb_uart0_psel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+471,"simu_top soc APB_DEV apb_uart0_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 19,0);
        tracep->declBus(c+472,"simu_top soc APB_DEV apb_uart0_datai",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+473,"simu_top soc APB_DEV apb_uart0_datao",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+474,"simu_top soc APB_DEV apb_nand_req",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+475,"simu_top soc APB_DEV apb_nand_ack",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+469,"simu_top soc APB_DEV apb_nand_rw",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+475,"simu_top soc APB_DEV apb_nand_enab",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+476,"simu_top soc APB_DEV apb_nand_psel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+471,"simu_top soc APB_DEV apb_nand_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 19,0);
        tracep->declBus(c+477,"simu_top soc APB_DEV apb_nand_datai",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+478,"simu_top soc APB_DEV apb_nand_datao",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1403,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu L_ADDR_APB",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+1276,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1277,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1332,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu axi_s_awid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+53,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu axi_s_awaddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1332,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu axi_s_awlen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+54,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu axi_s_awsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+1333,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu axi_s_awburst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1333,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu axi_s_awlock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1332,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu axi_s_awcache",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1334,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu axi_s_awprot",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+1012,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu axi_s_awvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+87,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu axi_s_awready",-1,FST_VD_OUTPUT,FST_VT_SV_BIT, false,-1);
        tracep->declBus(c+1332,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu axi_s_wid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+56,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu axi_s_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+57,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu axi_s_wstrb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBit(c+1335,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu axi_s_wlast",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1013,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu axi_s_wvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+88,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu axi_s_wready",-1,FST_VD_OUTPUT,FST_VT_SV_BIT, false,-1);
        tracep->declBus(c+89,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu axi_s_bid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1333,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu axi_s_bresp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+90,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu axi_s_bvalid",-1,FST_VD_OUTPUT,FST_VT_SV_BIT, false,-1);
        tracep->declBit(c+1014,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu axi_s_bready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1332,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu axi_s_arid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+53,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu axi_s_araddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1332,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu axi_s_arlen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+54,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu axi_s_arsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+1333,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu axi_s_arburst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1333,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu axi_s_arlock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1332,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu axi_s_arcache",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1334,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu axi_s_arprot",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+1015,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu axi_s_arvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+91,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu axi_s_arready",-1,FST_VD_OUTPUT,FST_VT_SV_BIT, false,-1);
        tracep->declBus(c+92,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu axi_s_rid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+93,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu axi_s_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1333,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu axi_s_rresp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+94,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu axi_s_rlast",-1,FST_VD_OUTPUT,FST_VT_SV_BIT, false,-1);
        tracep->declBit(c+95,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu axi_s_rvalid",-1,FST_VD_OUTPUT,FST_VT_SV_BIT, false,-1);
        tracep->declBit(c+1016,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu axi_s_rready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+464,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu apb_word_trans",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+479,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu cpu_grant",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1055,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu apb_valid_cpu",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+465,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu apb_high_24b_rd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
        tracep->declBus(c+466,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu apb_high_24b_wr",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 23,0);
        tracep->declBit(c+1276,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu apb_clk",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1277,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu apb_reset_n",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+459,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu reg_psel",-1,FST_VD_OUTPUT,FST_VT_SV_BIT, false,-1);
        tracep->declBit(c+460,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu reg_enable",-1,FST_VD_OUTPUT,FST_VT_SV_BIT, false,-1);
        tracep->declBit(c+458,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu reg_rw",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+461,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu reg_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 19,0);
        tracep->declBus(c+462,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu reg_datai",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+463,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu reg_datao",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+457,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu reg_ready_1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+965,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu csr_rw_send_axi_rsp_done",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+480,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu reg_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1417,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu CSR_RW_SM_IDLE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
        tracep->declBus(c+1418,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu CSR_RW_SM_GET_AXI_ADDR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
        tracep->declBus(c+1419,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu CSR_RW_SM_SEND_AXI_RSP",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
        tracep->declBit(c+481,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu axi_s_sel_rd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+458,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu axi_s_sel_wr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+482,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu csr_rw_sm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBus(c+966,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu csr_rw_sm_nxt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBus(c+461,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu axi_s_req_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 19,0);
        tracep->declBus(c+89,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu axi_s_w_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBus(c+92,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu axi_s_r_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBus(c+483,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu axi_s_rstrb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBus(c+484,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu apb_s_wstrb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBus(c+485,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu reg_datai_32",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+486,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu reg_datao_32",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+487,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu rd_count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBus(c+488,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu apb_rd_size",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBus(c+489,"simu_top soc APB_DEV AA_axi2apb_bridge_cpu apb_wr_size",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBus(c+1403,"simu_top soc APB_DEV AA_apb_mux16 ADDR_APB",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1404,"simu_top soc APB_DEV AA_apb_mux16 DATA_APB",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1331,"simu_top soc APB_DEV AA_apb_mux16 DATA_APB_32",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+1276,"simu_top soc APB_DEV AA_apb_mux16 clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1277,"simu_top soc APB_DEV AA_apb_mux16 rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+453,"simu_top soc APB_DEV AA_apb_mux16 apb_ready_dma",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1408,"simu_top soc APB_DEV AA_apb_mux16 apb_rw_dma",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1409,"simu_top soc APB_DEV AA_apb_mux16 apb_psel_dma",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1410,"simu_top soc APB_DEV AA_apb_mux16 apb_enab_dma",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1411,"simu_top soc APB_DEV AA_apb_mux16 apb_addr_dma",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 19,0);
        tracep->declBus(c+1412,"simu_top soc APB_DEV AA_apb_mux16 apb_wdata_dma",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+454,"simu_top soc APB_DEV AA_apb_mux16 apb_rdata_dma",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+455,"simu_top soc APB_DEV AA_apb_mux16 dma_grant",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1413,"simu_top soc APB_DEV AA_apb_mux16 apb_valid_dma",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1055,"simu_top soc APB_DEV AA_apb_mux16 apb_valid_cpu",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+457,"simu_top soc APB_DEV AA_apb_mux16 apb_ack_cpu",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+458,"simu_top soc APB_DEV AA_apb_mux16 apb_rw_cpu",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+459,"simu_top soc APB_DEV AA_apb_mux16 apb_psel_cpu",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+460,"simu_top soc APB_DEV AA_apb_mux16 apb_enab_cpu",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+461,"simu_top soc APB_DEV AA_apb_mux16 apb_addr_cpu",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 19,0);
        tracep->declBus(c+462,"simu_top soc APB_DEV AA_apb_mux16 apb_datai_cpu",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+463,"simu_top soc APB_DEV AA_apb_mux16 apb_datao_cpu",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+465,"simu_top soc APB_DEV AA_apb_mux16 apb_high_24b_rd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
        tracep->declBus(c+466,"simu_top soc APB_DEV AA_apb_mux16 apb_high_24b_wr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
        tracep->declBit(c+464,"simu_top soc APB_DEV AA_apb_mux16 apb_word_trans_cpu",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+467,"simu_top soc APB_DEV AA_apb_mux16 apb0_req",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+468,"simu_top soc APB_DEV AA_apb_mux16 apb0_ack",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+469,"simu_top soc APB_DEV AA_apb_mux16 apb0_rw",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+470,"simu_top soc APB_DEV AA_apb_mux16 apb0_psel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+468,"simu_top soc APB_DEV AA_apb_mux16 apb0_enab",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+471,"simu_top soc APB_DEV AA_apb_mux16 apb0_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 19,0);
        tracep->declBus(c+472,"simu_top soc APB_DEV AA_apb_mux16 apb0_datai",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+473,"simu_top soc APB_DEV AA_apb_mux16 apb0_datao",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+474,"simu_top soc APB_DEV AA_apb_mux16 apb1_req",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+475,"simu_top soc APB_DEV AA_apb_mux16 apb1_ack",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+469,"simu_top soc APB_DEV AA_apb_mux16 apb1_rw",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+476,"simu_top soc APB_DEV AA_apb_mux16 apb1_psel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+475,"simu_top soc APB_DEV AA_apb_mux16 apb1_enab",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+471,"simu_top soc APB_DEV AA_apb_mux16 apb1_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 19,0);
        tracep->declBus(c+477,"simu_top soc APB_DEV AA_apb_mux16 apb1_datai",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+478,"simu_top soc APB_DEV AA_apb_mux16 apb1_datao",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+490,"simu_top soc APB_DEV AA_apb_mux16 apb_ack",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+469,"simu_top soc APB_DEV AA_apb_mux16 apb_rw",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+491,"simu_top soc APB_DEV AA_apb_mux16 apb_psel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+492,"simu_top soc APB_DEV AA_apb_mux16 apb_enab",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+471,"simu_top soc APB_DEV AA_apb_mux16 apb_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 19,0);
        tracep->declBus(c+472,"simu_top soc APB_DEV AA_apb_mux16 apb_datai",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+493,"simu_top soc APB_DEV AA_apb_mux16 high_24b_wr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 23,0);
        tracep->declBus(c+494,"simu_top soc APB_DEV AA_apb_mux16 high_24b_rd",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 23,0);
        tracep->declBus(c+495,"simu_top soc APB_DEV AA_apb_mux16 apb_datao",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+1276,"simu_top soc APB_DEV AA_apb_mux16 arb_2_1 clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1277,"simu_top soc APB_DEV AA_apb_mux16 arb_2_1 rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1055,"simu_top soc APB_DEV AA_apb_mux16 arb_2_1 valid0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1413,"simu_top soc APB_DEV AA_apb_mux16 arb_2_1 valid1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+455,"simu_top soc APB_DEV AA_apb_mux16 arb_2_1 dma_grant",-1,FST_VD_OUTPUT,FST_VT_SV_BIT, false,-1);
        tracep->declBit(c+1276,"simu_top soc APB_DEV uart0 PCLK",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1277,"simu_top soc APB_DEV uart0 PRST_",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+470,"simu_top soc APB_DEV uart0 PSEL",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+468,"simu_top soc APB_DEV uart0 PENABLE",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+469,"simu_top soc APB_DEV uart0 PWRITE",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+496,"simu_top soc APB_DEV uart0 PADDR",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+472,"simu_top soc APB_DEV uart0 PWDATA",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+473,"simu_top soc APB_DEV uart0 URT_PRDATA",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+102,"simu_top soc APB_DEV uart0 INT",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1336,"simu_top soc APB_DEV uart0 clk_carrier",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1300,"simu_top soc APB_DEV uart0 TXD_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+103,"simu_top soc APB_DEV uart0 TXD_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+104,"simu_top soc APB_DEV uart0 TXD_oe",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1299,"simu_top soc APB_DEV uart0 RXD_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+105,"simu_top soc APB_DEV uart0 RXD_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+106,"simu_top soc APB_DEV uart0 RXD_oe",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+100,"simu_top soc APB_DEV uart0 RTS",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1336,"simu_top soc APB_DEV uart0 CTS",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1336,"simu_top soc APB_DEV uart0 DSR",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1336,"simu_top soc APB_DEV uart0 DCD",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+101,"simu_top soc APB_DEV uart0 DTR",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1337,"simu_top soc APB_DEV uart0 RI",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1315,"simu_top soc APB_DEV uart0 prst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+497,"simu_top soc APB_DEV uart0 we",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+498,"simu_top soc APB_DEV uart0 re",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+499,"simu_top soc APB_DEV uart0 rx_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+500,"simu_top soc APB_DEV uart0 tx2rx_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+501,"simu_top soc APB_DEV uart0 isomode",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1276,"simu_top soc APB_DEV uart0 regs clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1315,"simu_top soc APB_DEV uart0 regs rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1336,"simu_top soc APB_DEV uart0 regs clk_carrier",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+502,"simu_top soc APB_DEV uart0 regs addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+472,"simu_top soc APB_DEV uart0 regs dat_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+473,"simu_top soc APB_DEV uart0 regs dat_o",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBit(c+497,"simu_top soc APB_DEV uart0 regs we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+498,"simu_top soc APB_DEV uart0 regs re",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+103,"simu_top soc APB_DEV uart0 regs stx_pad_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1299,"simu_top soc APB_DEV uart0 regs srx_pad_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1300,"simu_top soc APB_DEV uart0 regs TXD_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+105,"simu_top soc APB_DEV uart0 regs RXD_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1420,"simu_top soc APB_DEV uart0 regs modem_inputs",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBit(c+100,"simu_top soc APB_DEV uart0 regs rts_pad_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+101,"simu_top soc APB_DEV uart0 regs dtr_pad_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+102,"simu_top soc APB_DEV uart0 regs int_o",-1,FST_VD_OUTPUT,FST_VT_SV_BIT, false,-1);
        tracep->declBit(c+501,"simu_top soc APB_DEV uart0 regs usart_mode",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+500,"simu_top soc APB_DEV uart0 regs tx2rx_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+499,"simu_top soc APB_DEV uart0 regs rx_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+503,"simu_top soc APB_DEV uart0 regs enable",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+504,"simu_top soc APB_DEV uart0 regs srx_pad",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+505,"simu_top soc APB_DEV uart0 regs ier",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBus(c+506,"simu_top soc APB_DEV uart0 regs iir",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBus(c+507,"simu_top soc APB_DEV uart0 regs fcr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+508,"simu_top soc APB_DEV uart0 regs mcr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBit(c+509,"simu_top soc APB_DEV uart0 regs infrared",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+510,"simu_top soc APB_DEV uart0 regs rx_pol",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+511,"simu_top soc APB_DEV uart0 regs lcr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+512,"simu_top soc APB_DEV uart0 regs msr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+513,"simu_top soc APB_DEV uart0 regs dl",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
        tracep->declBit(c+514,"simu_top soc APB_DEV uart0 regs start_dlc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+515,"simu_top soc APB_DEV uart0 regs lsr_mask_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+516,"simu_top soc APB_DEV uart0 regs msi_reset",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+517,"simu_top soc APB_DEV uart0 regs dlc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
        tracep->declBus(c+518,"simu_top soc APB_DEV uart0 regs trigger_level",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBit(c+519,"simu_top soc APB_DEV uart0 regs rx_reset",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+520,"simu_top soc APB_DEV uart0 regs tx_reset",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+521,"simu_top soc APB_DEV uart0 regs dlab",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+522,"simu_top soc APB_DEV uart0 regs usart_rx_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+523,"simu_top soc APB_DEV uart0 regs usart_tx_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+524,"simu_top soc APB_DEV uart0 regs sclk_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+525,"simu_top soc APB_DEV uart0 regs sclk_en_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+526,"simu_top soc APB_DEV uart0 regs mode_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+527,"simu_top soc APB_DEV uart0 regs fi_di_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+528,"simu_top soc APB_DEV uart0 regs sclk_count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+529,"simu_top soc APB_DEV uart0 regs repeat_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBit(c+530,"simu_top soc APB_DEV uart0 regs usart_normal",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+531,"simu_top soc APB_DEV uart0 regs usart_irda",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+532,"simu_top soc APB_DEV uart0 regs usart_t0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+533,"simu_top soc APB_DEV uart0 regs usart_t1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+534,"simu_top soc APB_DEV uart0 regs tx_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+535,"simu_top soc APB_DEV uart0 regs sclk_por",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1421,"simu_top soc APB_DEV uart0 regs cts_pad_i",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1422,"simu_top soc APB_DEV uart0 regs dsr_pad_i",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1423,"simu_top soc APB_DEV uart0 regs ri_pad_i",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1424,"simu_top soc APB_DEV uart0 regs dcd_pad_i",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+536,"simu_top soc APB_DEV uart0 regs loopback",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1425,"simu_top soc APB_DEV uart0 regs cts",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1426,"simu_top soc APB_DEV uart0 regs dsr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1427,"simu_top soc APB_DEV uart0 regs ri",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1428,"simu_top soc APB_DEV uart0 regs dcd",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+537,"simu_top soc APB_DEV uart0 regs cts_c",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+538,"simu_top soc APB_DEV uart0 regs dsr_c",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+539,"simu_top soc APB_DEV uart0 regs ri_c",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+540,"simu_top soc APB_DEV uart0 regs dcd_c",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+541,"simu_top soc APB_DEV uart0 regs lsr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+542,"simu_top soc APB_DEV uart0 regs lsr0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+543,"simu_top soc APB_DEV uart0 regs lsr1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+544,"simu_top soc APB_DEV uart0 regs lsr2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+545,"simu_top soc APB_DEV uart0 regs lsr3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+546,"simu_top soc APB_DEV uart0 regs lsr4",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+547,"simu_top soc APB_DEV uart0 regs lsr5",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+548,"simu_top soc APB_DEV uart0 regs lsr6",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+549,"simu_top soc APB_DEV uart0 regs lsr7",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+550,"simu_top soc APB_DEV uart0 regs lsr0r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+551,"simu_top soc APB_DEV uart0 regs lsr1r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+552,"simu_top soc APB_DEV uart0 regs lsr2r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+553,"simu_top soc APB_DEV uart0 regs lsr3r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+554,"simu_top soc APB_DEV uart0 regs lsr4r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+555,"simu_top soc APB_DEV uart0 regs lsr5r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+556,"simu_top soc APB_DEV uart0 regs lsr6r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+557,"simu_top soc APB_DEV uart0 regs lsr7r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+558,"simu_top soc APB_DEV uart0 regs lsr_mask",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+559,"simu_top soc APB_DEV uart0 regs rls_int",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+560,"simu_top soc APB_DEV uart0 regs rda_int",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+561,"simu_top soc APB_DEV uart0 regs ti_int",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+562,"simu_top soc APB_DEV uart0 regs thre_int",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+563,"simu_top soc APB_DEV uart0 regs ms_int",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+564,"simu_top soc APB_DEV uart0 regs tf_push",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+565,"simu_top soc APB_DEV uart0 regs rf_pop",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+566,"simu_top soc APB_DEV uart0 regs rf_data_out",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 10,0);
        tracep->declBit(c+567,"simu_top soc APB_DEV uart0 regs rf_error_bit",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+568,"simu_top soc APB_DEV uart0 regs rf_count",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+569,"simu_top soc APB_DEV uart0 regs tf_count",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+570,"simu_top soc APB_DEV uart0 regs tstate",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+571,"simu_top soc APB_DEV uart0 regs rstate",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+572,"simu_top soc APB_DEV uart0 regs counter_t",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 9,0);
        tracep->declBit(c+573,"simu_top soc APB_DEV uart0 regs thre_set_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+574,"simu_top soc APB_DEV uart0 regs block_cnt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+575,"simu_top soc APB_DEV uart0 regs block_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBit(c+576,"simu_top soc APB_DEV uart0 regs current_finish",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+577,"simu_top soc APB_DEV uart0 regs max_repeat_time",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+578,"simu_top soc APB_DEV uart0 regs serial_out",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1335,"simu_top soc APB_DEV uart0 regs serial_out_modulated",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1320,"simu_top soc APB_DEV uart0 regs rcv_pad_i",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+579,"simu_top soc APB_DEV uart0 regs serial_in",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+543,"simu_top soc APB_DEV uart0 regs rf_overrun",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+580,"simu_top soc APB_DEV uart0 regs rf_push_pulse",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+581,"simu_top soc APB_DEV uart0 regs lsr_mask_condition",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+582,"simu_top soc APB_DEV uart0 regs iir_read",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+583,"simu_top soc APB_DEV uart0 regs msr_read",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+584,"simu_top soc APB_DEV uart0 regs fifo_read",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+585,"simu_top soc APB_DEV uart0 regs fifo_write",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+586,"simu_top soc APB_DEV uart0 regs delayed_modem_signals",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBit(c+587,"simu_top soc APB_DEV uart0 regs lsr0_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+588,"simu_top soc APB_DEV uart0 regs lsr1_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+589,"simu_top soc APB_DEV uart0 regs lsr2_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+590,"simu_top soc APB_DEV uart0 regs lsr3_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+591,"simu_top soc APB_DEV uart0 regs lsr4_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+592,"simu_top soc APB_DEV uart0 regs lsr5_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+593,"simu_top soc APB_DEV uart0 regs lsr6_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+594,"simu_top soc APB_DEV uart0 regs lsr7_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+595,"simu_top soc APB_DEV uart0 regs M_cnt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 8,0);
        tracep->declBus(c+596,"simu_top soc APB_DEV uart0 regs M_next",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 8,0);
        tracep->declBit(c+597,"simu_top soc APB_DEV uart0 regs M_toggle",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+598,"simu_top soc APB_DEV uart0 regs rls_int_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+599,"simu_top soc APB_DEV uart0 regs thre_int_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+600,"simu_top soc APB_DEV uart0 regs ms_int_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+601,"simu_top soc APB_DEV uart0 regs ti_int_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+602,"simu_top soc APB_DEV uart0 regs rda_int_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+603,"simu_top soc APB_DEV uart0 regs rls_int_rise",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+604,"simu_top soc APB_DEV uart0 regs thre_int_rise",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+605,"simu_top soc APB_DEV uart0 regs ms_int_rise",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+606,"simu_top soc APB_DEV uart0 regs ti_int_rise",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+607,"simu_top soc APB_DEV uart0 regs rda_int_rise",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+608,"simu_top soc APB_DEV uart0 regs rls_int_pnd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+609,"simu_top soc APB_DEV uart0 regs rda_int_pnd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+610,"simu_top soc APB_DEV uart0 regs thre_int_pnd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+611,"simu_top soc APB_DEV uart0 regs ms_int_pnd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+612,"simu_top soc APB_DEV uart0 regs ti_int_pnd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+613,"simu_top soc APB_DEV uart0 regs d1_fifo_read",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1276,"simu_top soc APB_DEV uart0 regs transmitter clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1315,"simu_top soc APB_DEV uart0 regs transmitter wb_rst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+511,"simu_top soc APB_DEV uart0 regs transmitter lcr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+564,"simu_top soc APB_DEV uart0 regs transmitter tf_push",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+472,"simu_top soc APB_DEV uart0 regs transmitter wb_dat_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+614,"simu_top soc APB_DEV uart0 regs transmitter enable",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+520,"simu_top soc APB_DEV uart0 regs transmitter tx_reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+558,"simu_top soc APB_DEV uart0 regs transmitter lsr_mask",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+501,"simu_top soc APB_DEV uart0 regs transmitter usart_mode",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+532,"simu_top soc APB_DEV uart0 regs transmitter usart_t0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1300,"simu_top soc APB_DEV uart0 regs transmitter srx_pad_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+529,"simu_top soc APB_DEV uart0 regs transmitter repeat_time",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+576,"simu_top soc APB_DEV uart0 regs transmitter current_finish",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+577,"simu_top soc APB_DEV uart0 regs transmitter max_repeat_time",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+500,"simu_top soc APB_DEV uart0 regs transmitter tx2rx_en",-1,FST_VD_OUTPUT,FST_VT_SV_BIT, false,-1);
        tracep->declBit(c+578,"simu_top soc APB_DEV uart0 regs transmitter stx_pad_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+570,"simu_top soc APB_DEV uart0 regs transmitter tstate",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBus(c+569,"simu_top soc APB_DEV uart0 regs transmitter tf_count",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+615,"simu_top soc APB_DEV uart0 regs transmitter counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+616,"simu_top soc APB_DEV uart0 regs transmitter bit_counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBus(c+617,"simu_top soc APB_DEV uart0 regs transmitter shift_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        tracep->declBit(c+618,"simu_top soc APB_DEV uart0 regs transmitter stx_o_tmp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+619,"simu_top soc APB_DEV uart0 regs transmitter parity_xor",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+620,"simu_top soc APB_DEV uart0 regs transmitter tf_pop",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+621,"simu_top soc APB_DEV uart0 regs transmitter bit_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+622,"simu_top soc APB_DEV uart0 regs transmitter tx_error",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+623,"simu_top soc APB_DEV uart0 regs transmitter error_time",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBus(c+472,"simu_top soc APB_DEV uart0 regs transmitter tf_data_in",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+624,"simu_top soc APB_DEV uart0 regs transmitter tf_data_out",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+625,"simu_top soc APB_DEV uart0 regs transmitter tf_overrun",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1334,"simu_top soc APB_DEV uart0 regs transmitter s_idle",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
        tracep->declBus(c+1429,"simu_top soc APB_DEV uart0 regs transmitter s_send_start",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
        tracep->declBus(c+1430,"simu_top soc APB_DEV uart0 regs transmitter s_send_byte",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
        tracep->declBus(c+1431,"simu_top soc APB_DEV uart0 regs transmitter s_send_parity",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
        tracep->declBus(c+1432,"simu_top soc APB_DEV uart0 regs transmitter s_send_stop",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
        tracep->declBus(c+1433,"simu_top soc APB_DEV uart0 regs transmitter s_pop_byte",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
        tracep->declBus(c+1434,"simu_top soc APB_DEV uart0 regs transmitter s_send_guard1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
        tracep->declBus(c+626,"simu_top soc APB_DEV uart0 regs transmitter tf_data_bak",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+1404,"simu_top soc APB_DEV uart0 regs transmitter fifo_tx fifo_width",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1407,"simu_top soc APB_DEV uart0 regs transmitter fifo_tx fifo_depth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1435,"simu_top soc APB_DEV uart0 regs transmitter fifo_tx fifo_pointer_w",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1436,"simu_top soc APB_DEV uart0 regs transmitter fifo_tx fifo_counter_w",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+1276,"simu_top soc APB_DEV uart0 regs transmitter fifo_tx clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1315,"simu_top soc APB_DEV uart0 regs transmitter fifo_tx wb_rst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+564,"simu_top soc APB_DEV uart0 regs transmitter fifo_tx push",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+620,"simu_top soc APB_DEV uart0 regs transmitter fifo_tx pop",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+472,"simu_top soc APB_DEV uart0 regs transmitter fifo_tx data_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+520,"simu_top soc APB_DEV uart0 regs transmitter fifo_tx fifo_reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+558,"simu_top soc APB_DEV uart0 regs transmitter fifo_tx reset_status",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+624,"simu_top soc APB_DEV uart0 regs transmitter fifo_tx data_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+625,"simu_top soc APB_DEV uart0 regs transmitter fifo_tx overrun",-1,FST_VD_OUTPUT,FST_VT_SV_BIT, false,-1);
        tracep->declBus(c+569,"simu_top soc APB_DEV uart0 regs transmitter fifo_tx count",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+627,"simu_top soc APB_DEV uart0 regs transmitter fifo_tx top",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBus(c+628,"simu_top soc APB_DEV uart0 regs transmitter fifo_tx bottom",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBus(c+629,"simu_top soc APB_DEV uart0 regs transmitter fifo_tx top_plus_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1435,"simu_top soc APB_DEV uart0 regs transmitter fifo_tx tfifo addr_width",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1404,"simu_top soc APB_DEV uart0 regs transmitter fifo_tx tfifo data_width",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1407,"simu_top soc APB_DEV uart0 regs transmitter fifo_tx tfifo depth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+1276,"simu_top soc APB_DEV uart0 regs transmitter fifo_tx tfifo clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+564,"simu_top soc APB_DEV uart0 regs transmitter fifo_tx tfifo we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+627,"simu_top soc APB_DEV uart0 regs transmitter fifo_tx tfifo a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+628,"simu_top soc APB_DEV uart0 regs transmitter fifo_tx tfifo dpra",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+472,"simu_top soc APB_DEV uart0 regs transmitter fifo_tx tfifo di",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+624,"simu_top soc APB_DEV uart0 regs transmitter fifo_tx tfifo dpo",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 7,0);
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+630+i*1,"simu_top soc APB_DEV uart0 regs transmitter fifo_tx tfifo ram",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);}}
        tracep->declBus(c+1437,"simu_top soc APB_DEV uart0 regs i_uart_sync_flops Tp",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1437,"simu_top soc APB_DEV uart0 regs i_uart_sync_flops width",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1438,"simu_top soc APB_DEV uart0 regs i_uart_sync_flops init_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
        tracep->declBit(c+1315,"simu_top soc APB_DEV uart0 regs i_uart_sync_flops rst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1276,"simu_top soc APB_DEV uart0 regs i_uart_sync_flops clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1336,"simu_top soc APB_DEV uart0 regs i_uart_sync_flops stage1_rst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1335,"simu_top soc APB_DEV uart0 regs i_uart_sync_flops stage1_clk_en_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1320,"simu_top soc APB_DEV uart0 regs i_uart_sync_flops async_dat_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
        tracep->declBus(c+504,"simu_top soc APB_DEV uart0 regs i_uart_sync_flops sync_dat_o",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 0,0);
        tracep->declBus(c+646,"simu_top soc APB_DEV uart0 regs i_uart_sync_flops flop_0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
        tracep->declBit(c+1276,"simu_top soc APB_DEV uart0 regs receiver clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1315,"simu_top soc APB_DEV uart0 regs receiver wb_rst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+511,"simu_top soc APB_DEV uart0 regs receiver lcr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+565,"simu_top soc APB_DEV uart0 regs receiver rf_pop",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+579,"simu_top soc APB_DEV uart0 regs receiver srx_pad_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+647,"simu_top soc APB_DEV uart0 regs receiver enable",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+519,"simu_top soc APB_DEV uart0 regs receiver rx_reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+558,"simu_top soc APB_DEV uart0 regs receiver lsr_mask",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+572,"simu_top soc APB_DEV uart0 regs receiver counter_t",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 9,0);
        tracep->declBus(c+568,"simu_top soc APB_DEV uart0 regs receiver rf_count",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+566,"simu_top soc APB_DEV uart0 regs receiver rf_data_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 10,0);
        tracep->declBit(c+543,"simu_top soc APB_DEV uart0 regs receiver rf_overrun",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+567,"simu_top soc APB_DEV uart0 regs receiver rf_error_bit",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+571,"simu_top soc APB_DEV uart0 regs receiver rstate",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBit(c+580,"simu_top soc APB_DEV uart0 regs receiver rf_push_pulse",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+648,"simu_top soc APB_DEV uart0 regs receiver rcounter16",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBus(c+649,"simu_top soc APB_DEV uart0 regs receiver rbit_counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBus(c+650,"simu_top soc APB_DEV uart0 regs receiver rshift",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBit(c+651,"simu_top soc APB_DEV uart0 regs receiver rparity",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+652,"simu_top soc APB_DEV uart0 regs receiver rparity_error",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+653,"simu_top soc APB_DEV uart0 regs receiver rframing_error",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+654,"simu_top soc APB_DEV uart0 regs receiver rbit_in",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+655,"simu_top soc APB_DEV uart0 regs receiver rparity_xor",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+656,"simu_top soc APB_DEV uart0 regs receiver counter_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBit(c+657,"simu_top soc APB_DEV uart0 regs receiver rf_push_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+658,"simu_top soc APB_DEV uart0 regs receiver rf_data_in",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 10,0);
        tracep->declBit(c+659,"simu_top soc APB_DEV uart0 regs receiver rf_push",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+660,"simu_top soc APB_DEV uart0 regs receiver break_error",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+661,"simu_top soc APB_DEV uart0 regs receiver rcounter16_eq_7",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+662,"simu_top soc APB_DEV uart0 regs receiver rcounter16_eq_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+663,"simu_top soc APB_DEV uart0 regs receiver rcounter16_eq_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+664,"simu_top soc APB_DEV uart0 regs receiver rcounter16_minus_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1332,"simu_top soc APB_DEV uart0 regs receiver sr_idle",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
        tracep->declBus(c+1417,"simu_top soc APB_DEV uart0 regs receiver sr_rec_start",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
        tracep->declBus(c+1418,"simu_top soc APB_DEV uart0 regs receiver sr_rec_bit",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
        tracep->declBus(c+1439,"simu_top soc APB_DEV uart0 regs receiver sr_rec_parity",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
        tracep->declBus(c+1440,"simu_top soc APB_DEV uart0 regs receiver sr_rec_stop",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
        tracep->declBus(c+1441,"simu_top soc APB_DEV uart0 regs receiver sr_check_parity",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
        tracep->declBus(c+1442,"simu_top soc APB_DEV uart0 regs receiver sr_rec_prepare",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
        tracep->declBus(c+1443,"simu_top soc APB_DEV uart0 regs receiver sr_end_bit",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
        tracep->declBus(c+1419,"simu_top soc APB_DEV uart0 regs receiver sr_ca_lc_parity",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
        tracep->declBus(c+1444,"simu_top soc APB_DEV uart0 regs receiver sr_wait1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
        tracep->declBus(c+1445,"simu_top soc APB_DEV uart0 regs receiver sr_push",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
        tracep->declBus(c+665,"simu_top soc APB_DEV uart0 regs receiver toc_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 9,0);
        tracep->declBus(c+666,"simu_top soc APB_DEV uart0 regs receiver brc_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+1446,"simu_top soc APB_DEV uart0 regs receiver fifo_rx fifo_width",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1407,"simu_top soc APB_DEV uart0 regs receiver fifo_rx fifo_depth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1435,"simu_top soc APB_DEV uart0 regs receiver fifo_rx fifo_pointer_w",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1436,"simu_top soc APB_DEV uart0 regs receiver fifo_rx fifo_counter_w",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+1276,"simu_top soc APB_DEV uart0 regs receiver fifo_rx clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1315,"simu_top soc APB_DEV uart0 regs receiver fifo_rx wb_rst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+580,"simu_top soc APB_DEV uart0 regs receiver fifo_rx push",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+565,"simu_top soc APB_DEV uart0 regs receiver fifo_rx pop",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+658,"simu_top soc APB_DEV uart0 regs receiver fifo_rx data_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 10,0);
        tracep->declBit(c+519,"simu_top soc APB_DEV uart0 regs receiver fifo_rx fifo_reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+558,"simu_top soc APB_DEV uart0 regs receiver fifo_rx reset_status",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+566,"simu_top soc APB_DEV uart0 regs receiver fifo_rx data_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 10,0);
        tracep->declBit(c+543,"simu_top soc APB_DEV uart0 regs receiver fifo_rx overrun",-1,FST_VD_OUTPUT,FST_VT_SV_BIT, false,-1);
        tracep->declBus(c+568,"simu_top soc APB_DEV uart0 regs receiver fifo_rx count",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBit(c+567,"simu_top soc APB_DEV uart0 regs receiver fifo_rx error_bit",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+667,"simu_top soc APB_DEV uart0 regs receiver fifo_rx data8_out",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+668+i*1,"simu_top soc APB_DEV uart0 regs receiver fifo_rx fifo",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 2,0);}}
        tracep->declBus(c+684,"simu_top soc APB_DEV uart0 regs receiver fifo_rx top",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBus(c+685,"simu_top soc APB_DEV uart0 regs receiver fifo_rx bottom",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBus(c+686,"simu_top soc APB_DEV uart0 regs receiver fifo_rx top_plus_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+687,"simu_top soc APB_DEV uart0 regs receiver fifo_rx word0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+688,"simu_top soc APB_DEV uart0 regs receiver fifo_rx word1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+689,"simu_top soc APB_DEV uart0 regs receiver fifo_rx word2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+690,"simu_top soc APB_DEV uart0 regs receiver fifo_rx word3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+691,"simu_top soc APB_DEV uart0 regs receiver fifo_rx word4",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+692,"simu_top soc APB_DEV uart0 regs receiver fifo_rx word5",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+693,"simu_top soc APB_DEV uart0 regs receiver fifo_rx word6",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+694,"simu_top soc APB_DEV uart0 regs receiver fifo_rx word7",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+695,"simu_top soc APB_DEV uart0 regs receiver fifo_rx word8",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+696,"simu_top soc APB_DEV uart0 regs receiver fifo_rx word9",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+697,"simu_top soc APB_DEV uart0 regs receiver fifo_rx word10",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+698,"simu_top soc APB_DEV uart0 regs receiver fifo_rx word11",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+699,"simu_top soc APB_DEV uart0 regs receiver fifo_rx word12",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+700,"simu_top soc APB_DEV uart0 regs receiver fifo_rx word13",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+701,"simu_top soc APB_DEV uart0 regs receiver fifo_rx word14",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+702,"simu_top soc APB_DEV uart0 regs receiver fifo_rx word15",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+1435,"simu_top soc APB_DEV uart0 regs receiver fifo_rx rfifo addr_width",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1404,"simu_top soc APB_DEV uart0 regs receiver fifo_rx rfifo data_width",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1407,"simu_top soc APB_DEV uart0 regs receiver fifo_rx rfifo depth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+1276,"simu_top soc APB_DEV uart0 regs receiver fifo_rx rfifo clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+580,"simu_top soc APB_DEV uart0 regs receiver fifo_rx rfifo we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+684,"simu_top soc APB_DEV uart0 regs receiver fifo_rx rfifo a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+685,"simu_top soc APB_DEV uart0 regs receiver fifo_rx rfifo dpra",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+703,"simu_top soc APB_DEV uart0 regs receiver fifo_rx rfifo di",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+667,"simu_top soc APB_DEV uart0 regs receiver fifo_rx rfifo dpo",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 7,0);
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+704+i*1,"simu_top soc APB_DEV uart0 regs receiver fifo_rx rfifo ram",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);}}
        tracep->declBus(c+1333,"simu_top soc APB_DEV nand_module nand_type",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+1276,"simu_top soc APB_DEV nand_module clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1277,"simu_top soc APB_DEV nand_module rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+476,"simu_top soc APB_DEV nand_module apb_psel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+475,"simu_top soc APB_DEV nand_module apb_enab",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+469,"simu_top soc APB_DEV nand_module apb_rw",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+471,"simu_top soc APB_DEV nand_module apb_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 19,0);
        tracep->declBus(c+477,"simu_top soc APB_DEV nand_module apb_datai",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+478,"simu_top soc APB_DEV nand_module apb_datao",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+475,"simu_top soc APB_DEV nand_module apb_ack",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+456,"simu_top soc APB_DEV nand_module nand_dma_req_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1414,"simu_top soc APB_DEV nand_module nand_dma_ack_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1332,"simu_top soc APB_DEV nand_module nand_ce",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1338,"simu_top soc APB_DEV nand_module nand_dat_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+1338,"simu_top soc APB_DEV nand_module nand_dat_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+1336,"simu_top soc APB_DEV nand_module nand_dat_oe",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1336,"simu_top soc APB_DEV nand_module nand_ale",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1336,"simu_top soc APB_DEV nand_module nand_cle",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1336,"simu_top soc APB_DEV nand_module nand_wr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1336,"simu_top soc APB_DEV nand_module nand_rd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1332,"simu_top soc APB_DEV nand_module nand_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBit(c+720,"simu_top soc APB_DEV nand_module nand_int",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+476,"simu_top soc APB_DEV nand_module psel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+475,"simu_top soc APB_DEV nand_module penable",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+721,"simu_top soc APB_DEV nand_module paddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 10,0);
        tracep->declBit(c+469,"simu_top soc APB_DEV nand_module pwr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+722,"simu_top soc APB_DEV nand_module nand_iordy_r0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBus(c+723,"simu_top soc APB_DEV nand_module nand_iordy_r1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBus(c+724,"simu_top soc APB_DEV nand_module nand_type_r1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+725,"simu_top soc APB_DEV nand_module nand_type_r2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+725,"simu_top soc APB_DEV nand_module NAND nand_type",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+1276,"simu_top soc APB_DEV nand_module NAND pclk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1277,"simu_top soc APB_DEV nand_module NAND prst_",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+469,"simu_top soc APB_DEV nand_module NAND pwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+476,"simu_top soc APB_DEV nand_module NAND psel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+475,"simu_top soc APB_DEV nand_module NAND penable",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+721,"simu_top soc APB_DEV nand_module NAND ADDR",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 10,0);
        tracep->declBus(c+477,"simu_top soc APB_DEV nand_module NAND DAT_I",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+478,"simu_top soc APB_DEV nand_module NAND DAT_O",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1332,"simu_top soc APB_DEV nand_module NAND NAND_CE_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBit(c+456,"simu_top soc APB_DEV nand_module NAND NAND_REQ",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1338,"simu_top soc APB_DEV nand_module NAND NAND_I",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+1338,"simu_top soc APB_DEV nand_module NAND NAND_O",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBit(c+1336,"simu_top soc APB_DEV nand_module NAND NAND_EN_",-1,FST_VD_OUTPUT,FST_VT_SV_BIT, false,-1);
        tracep->declBit(c+1336,"simu_top soc APB_DEV nand_module NAND NAND_ALE",-1,FST_VD_OUTPUT,FST_VT_SV_BIT, false,-1);
        tracep->declBit(c+1336,"simu_top soc APB_DEV nand_module NAND NAND_CLE",-1,FST_VD_OUTPUT,FST_VT_SV_BIT, false,-1);
        tracep->declBit(c+1336,"simu_top soc APB_DEV nand_module NAND NAND_WR_",-1,FST_VD_OUTPUT,FST_VT_SV_BIT, false,-1);
        tracep->declBit(c+1336,"simu_top soc APB_DEV nand_module NAND NAND_RD_",-1,FST_VD_OUTPUT,FST_VT_SV_BIT, false,-1);
        tracep->declBus(c+723,"simu_top soc APB_DEV nand_module NAND NAND_IORDY_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBit(c+720,"simu_top soc APB_DEV nand_module NAND nand_int",-1,FST_VD_OUTPUT,FST_VT_SV_BIT, false,-1);
        tracep->declBus(c+478,"simu_top soc APB_DEV nand_module NAND REG_DAT_T",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+726,"simu_top soc APB_DEV nand_module NAND nand_addr_c",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 13,0);
        tracep->declBus(c+727,"simu_top soc APB_DEV nand_module NAND nand_addr_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 24,0);
        tracep->declBus(c+728,"simu_top soc APB_DEV nand_module NAND nand_op_num",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+729,"simu_top soc APB_DEV nand_module NAND nand_parameter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+730,"simu_top soc APB_DEV nand_module NAND nand_ce_map0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+731,"simu_top soc APB_DEV nand_module NAND nand_ce_map1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+732,"simu_top soc APB_DEV nand_module NAND nand_rdy_map0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+733,"simu_top soc APB_DEV nand_module NAND nand_rdy_map1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+734,"simu_top soc APB_DEV nand_module NAND nand_command",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+735,"simu_top soc APB_DEV nand_module NAND nand_timing",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
        tracep->declQuad(c+736,"simu_top soc APB_DEV nand_module NAND addr_in_die",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 37,0);
        tracep->declBus(c+738,"simu_top soc APB_DEV nand_module NAND NAND_STATE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+739,"simu_top soc APB_DEV nand_module NAND NAND_OP_NUM",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+740,"simu_top soc APB_DEV nand_module NAND WRITE_MAX_COUNT",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 13,0);
        tracep->declBus(c+741,"simu_top soc APB_DEV nand_module NAND READ_MAX_COUNT",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 13,0);
        tracep->declBit(c+742,"simu_top soc APB_DEV nand_module NAND nand_clr_ack",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+743,"simu_top soc APB_DEV nand_module NAND NAND_DONE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+744,"simu_top soc APB_DEV nand_module NAND NAND_CE_",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+745,"simu_top soc APB_DEV nand_module NAND op_scope",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 13,0);
        tracep->declBus(c+746,"simu_top soc APB_DEV nand_module NAND nand_id_num",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+747,"simu_top soc APB_DEV nand_module NAND nand_size",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBit(c+748,"simu_top soc APB_DEV nand_module NAND main_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+749,"simu_top soc APB_DEV nand_module NAND spare_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+750,"simu_top soc APB_DEV nand_module NAND nand_int_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+751,"simu_top soc APB_DEV nand_module NAND nand_dma_ack_i",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1056,"simu_top soc APB_DEV nand_module NAND NANDtag",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+752,"simu_top soc APB_DEV nand_module NAND NAND_IORDY",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+753,"simu_top soc APB_DEV nand_module NAND HIT0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+754,"simu_top soc APB_DEV nand_module NAND HIT1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+755,"simu_top soc APB_DEV nand_module NAND HIT2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+756,"simu_top soc APB_DEV nand_module NAND HIT3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+757,"simu_top soc APB_DEV nand_module NAND HIT4",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+758,"simu_top soc APB_DEV nand_module NAND HIT5",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+759,"simu_top soc APB_DEV nand_module NAND HIT6",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+760,"simu_top soc APB_DEV nand_module NAND HIT7",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+761,"simu_top soc APB_DEV nand_module NAND HIT8",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+762,"simu_top soc APB_DEV nand_module NAND HIT9",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+763,"simu_top soc APB_DEV nand_module NAND HIT10",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+764,"simu_top soc APB_DEV nand_module NAND HIT11",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+765,"simu_top soc APB_DEV nand_module NAND NAND_HIT",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+456,"simu_top soc APB_DEV nand_module NAND NAND_DMA_REQ",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+766,"simu_top soc APB_DEV nand_module NAND nand_cmd_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+767,"simu_top soc APB_DEV nand_module NAND status",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+768,"simu_top soc APB_DEV nand_module NAND nand_number",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declQuad(c+769,"simu_top soc APB_DEV nand_module NAND ID_INFORM",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 47,0);
        tracep->declBus(c+771,"simu_top soc APB_DEV nand_module NAND NAND_DAT_O_RD",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+772,"simu_top soc APB_DEV nand_module NAND NAND_CE_pre_o",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+773,"simu_top soc APB_DEV nand_module NAND NAND_IORDY_post_i",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+774,"simu_top soc APB_DEV nand_module NAND ADDR_pointer",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+775,"simu_top soc APB_DEV nand_module NAND NAND_ADDR_COUNT",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBus(c+776,"simu_top soc APB_DEV nand_module NAND WAIT_NUM",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+777,"simu_top soc APB_DEV nand_module NAND HOLD_NUM",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+778,"simu_top soc APB_DEV nand_module NAND COMMAND",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+779,"simu_top soc APB_DEV nand_module NAND PRE_STATE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+780,"simu_top soc APB_DEV nand_module NAND READ_ID_NUM",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBus(c+781,"simu_top soc APB_DEV nand_module NAND data_count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 13,0);
        tracep->declQuad(c+782,"simu_top soc APB_DEV nand_module NAND NAND_ADDR",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 37,0);
        tracep->declBus(c+784,"simu_top soc APB_DEV nand_module NAND NAND_DAT_I_WR",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+785,"simu_top soc APB_DEV nand_module NAND NAND_GO",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+786,"simu_top soc APB_DEV nand_module NAND NAND_ACK",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+787,"simu_top soc APB_DEV nand_module NAND DMA_OP_DONE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+788,"simu_top soc APB_DEV nand_module NAND ERASE_SERIAL",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+789,"simu_top soc APB_DEV nand_module NAND now_up_half",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+790,"simu_top soc APB_DEV nand_module NAND now_oob",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1359,"simu_top soc APB_DEV nand_module NAND NAND_IDLE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
        tracep->declBus(c+1447,"simu_top soc APB_DEV nand_module NAND COMMAND_IN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
        tracep->declBus(c+1448,"simu_top soc APB_DEV nand_module NAND ADDR_4_RD_WR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
        tracep->declBus(c+1449,"simu_top soc APB_DEV nand_module NAND ADDR_4_ERASE_ID",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
        tracep->declBus(c+1450,"simu_top soc APB_DEV nand_module NAND READ_START",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
        tracep->declBus(c+1451,"simu_top soc APB_DEV nand_module NAND READ_WAIT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
        tracep->declBus(c+1452,"simu_top soc APB_DEV nand_module NAND READ_WAIT_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
        tracep->declBus(c+1453,"simu_top soc APB_DEV nand_module NAND READ_TRANSFER",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
        tracep->declBus(c+1454,"simu_top soc APB_DEV nand_module NAND WRITE_START",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
        tracep->declBus(c+1455,"simu_top soc APB_DEV nand_module NAND WRITE_DATA",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
        tracep->declBus(c+1456,"simu_top soc APB_DEV nand_module NAND PROGRAM",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
        tracep->declBus(c+1457,"simu_top soc APB_DEV nand_module NAND PROGRAM_FAIL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
        tracep->declBus(c+1458,"simu_top soc APB_DEV nand_module NAND READ_ID",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
        tracep->declBus(c+1459,"simu_top soc APB_DEV nand_module NAND READ_STATUS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
        tracep->declBus(c+1460,"simu_top soc APB_DEV nand_module NAND ID_TO_STATUS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
        tracep->declBus(c+1461,"simu_top soc APB_DEV nand_module NAND ERASE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
        tracep->declBus(c+1462,"simu_top soc APB_DEV nand_module NAND WAIT_ERASE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
        tracep->declBus(c+1463,"simu_top soc APB_DEV nand_module NAND ERASE_FAIL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
        tracep->declBus(c+1464,"simu_top soc APB_DEV nand_module NAND RESET",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
        tracep->declBus(c+1465,"simu_top soc APB_DEV nand_module NAND WAIT_RESET",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
        tracep->declBus(c+1331,"simu_top soc conf_axi_ram BUS_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1331,"simu_top soc conf_axi_ram DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1331,"simu_top soc conf_axi_ram CPU_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+1276,"simu_top soc conf_axi_ram aclk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1277,"simu_top soc conf_axi_ram aresetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+96,"simu_top soc conf_axi_ram ram_raddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+84,"simu_top soc conf_axi_ram ram_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1017,"simu_top soc conf_axi_ram ram_ren",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+97,"simu_top soc conf_axi_ram ram_waddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+98,"simu_top soc conf_axi_ram ram_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1018,"simu_top soc conf_axi_ram ram_wen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+53,"simu_top soc conf_axi_ram m_araddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1333,"simu_top soc conf_axi_ram m_arburst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1332,"simu_top soc conf_axi_ram m_arcache",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1332,"simu_top soc conf_axi_ram m_arid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1332,"simu_top soc conf_axi_ram m_arlen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1333,"simu_top soc conf_axi_ram m_arlock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1334,"simu_top soc conf_axi_ram m_arprot",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+82,"simu_top soc conf_axi_ram m_arready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+54,"simu_top soc conf_axi_ram m_arsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+1010,"simu_top soc conf_axi_ram m_arvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+53,"simu_top soc conf_axi_ram m_awaddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1333,"simu_top soc conf_axi_ram m_awburst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1332,"simu_top soc conf_axi_ram m_awcache",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1332,"simu_top soc conf_axi_ram m_awid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1332,"simu_top soc conf_axi_ram m_awlen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1333,"simu_top soc conf_axi_ram m_awlock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1334,"simu_top soc conf_axi_ram m_awprot",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+78,"simu_top soc conf_axi_ram m_awready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+54,"simu_top soc conf_axi_ram m_awsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+1007,"simu_top soc conf_axi_ram m_awvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+80,"simu_top soc conf_axi_ram m_bid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBit(c+1009,"simu_top soc conf_axi_ram m_bready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1333,"simu_top soc conf_axi_ram m_bresp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+81,"simu_top soc conf_axi_ram m_bvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+84,"simu_top soc conf_axi_ram m_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+83,"simu_top soc conf_axi_ram m_rid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBit(c+85,"simu_top soc conf_axi_ram m_rlast",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1011,"simu_top soc conf_axi_ram m_rready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1333,"simu_top soc conf_axi_ram m_rresp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+86,"simu_top soc conf_axi_ram m_rvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+56,"simu_top soc conf_axi_ram m_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1332,"simu_top soc conf_axi_ram m_wid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBit(c+1335,"simu_top soc conf_axi_ram m_wlast",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+79,"simu_top soc conf_axi_ram m_wready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+57,"simu_top soc conf_axi_ram m_wstrb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBit(c+1008,"simu_top soc conf_axi_ram m_wvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1466,"simu_top soc conf_axi_ram ADDR_INCR_BASE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declQuad(c+791,"simu_top soc conf_axi_ram ram_r_a_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 44,0);
        tracep->declBus(c+96,"simu_top soc conf_axi_ram ram_r_a_data_araddr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+96,"simu_top soc conf_axi_ram ram_r_a_data_araddr_fixed",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+793,"simu_top soc conf_axi_ram ram_r_a_data_araddr_incr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+794,"simu_top soc conf_axi_ram ram_r_a_data_araddr_next",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+967,"simu_top soc conf_axi_ram ram_r_a_data_araddr_update",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+795,"simu_top soc conf_axi_ram ram_r_a_data_araddr_wrap",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+796,"simu_top soc conf_axi_ram ram_r_a_data_arburst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+797,"simu_top soc conf_axi_ram ram_r_a_data_arburst_fixed",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+798,"simu_top soc conf_axi_ram ram_r_a_data_arburst_incr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+799,"simu_top soc conf_axi_ram ram_r_a_data_arburst_wrap",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+800,"simu_top soc conf_axi_ram ram_r_a_data_arid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBus(c+801,"simu_top soc conf_axi_ram ram_r_a_data_arlen",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBit(c+802,"simu_top soc conf_axi_ram ram_r_a_data_arlen_last",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+803,"simu_top soc conf_axi_ram ram_r_a_data_arsize",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBit(c+1057,"simu_top soc conf_axi_ram ram_r_a_data_push",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+804,"simu_top soc conf_axi_ram ram_r_a_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1058,"simu_top soc conf_axi_ram ram_r_a_pop",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1059,"simu_top soc conf_axi_ram ram_r_a_push",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+805,"simu_top soc conf_axi_ram ram_r_a_push_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 44,0);
        tracep->declQuad(c+807,"simu_top soc conf_axi_ram ram_r_a_queue_datas",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 44,0);
        tracep->declBus(c+809,"simu_top soc conf_axi_ram ram_r_a_queue_datas_araddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+810,"simu_top soc conf_axi_ram ram_r_a_queue_datas_arburst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+811,"simu_top soc conf_axi_ram ram_r_a_queue_datas_arid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+812,"simu_top soc conf_axi_ram ram_r_a_queue_datas_arlen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+813,"simu_top soc conf_axi_ram ram_r_a_queue_datas_arsize",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+82,"simu_top soc conf_axi_ram ram_r_a_queue_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+804,"simu_top soc conf_axi_ram ram_r_a_queue_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+968,"simu_top soc conf_axi_ram ram_r_a_queue_pop",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1060,"simu_top soc conf_axi_ram ram_r_a_queue_push",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+804,"simu_top soc conf_axi_ram ram_r_a_queue_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+814,"simu_top soc conf_axi_ram ram_r_a_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+96,"simu_top soc conf_axi_ram ram_r_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+969,"simu_top soc conf_axi_ram ram_r_allow_out",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+84,"simu_top soc conf_axi_ram ram_r_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1017,"simu_top soc conf_axi_ram ram_r_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+815,"simu_top soc conf_axi_ram ram_r_rcur",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBit(c+1321,"simu_top soc conf_axi_ram ram_r_rcur_reset",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+83,"simu_top soc conf_axi_ram ram_r_rid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBit(c+85,"simu_top soc conf_axi_ram ram_r_rlast",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+86,"simu_top soc conf_axi_ram ram_r_rvalid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+816,"simu_top soc conf_axi_ram ram_w_a_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 44,0);
        tracep->declBus(c+97,"simu_top soc conf_axi_ram ram_w_a_data_awaddr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+97,"simu_top soc conf_axi_ram ram_w_a_data_awaddr_fixed",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+818,"simu_top soc conf_axi_ram ram_w_a_data_awaddr_incr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+819,"simu_top soc conf_axi_ram ram_w_a_data_awaddr_next",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+970,"simu_top soc conf_axi_ram ram_w_a_data_awaddr_update",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+820,"simu_top soc conf_axi_ram ram_w_a_data_awaddr_wrap",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+821,"simu_top soc conf_axi_ram ram_w_a_data_awburst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+822,"simu_top soc conf_axi_ram ram_w_a_data_awburst_fixed",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+823,"simu_top soc conf_axi_ram ram_w_a_data_awburst_incr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+824,"simu_top soc conf_axi_ram ram_w_a_data_awburst_wrap",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+825,"simu_top soc conf_axi_ram ram_w_a_data_awid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBus(c+826,"simu_top soc conf_axi_ram ram_w_a_data_awlen",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBus(c+827,"simu_top soc conf_axi_ram ram_w_a_data_awsize",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBit(c+1061,"simu_top soc conf_axi_ram ram_w_a_data_push",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+828,"simu_top soc conf_axi_ram ram_w_a_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1062,"simu_top soc conf_axi_ram ram_w_a_pop",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1063,"simu_top soc conf_axi_ram ram_w_a_push",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+805,"simu_top soc conf_axi_ram ram_w_a_push_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 44,0);
        tracep->declQuad(c+829,"simu_top soc conf_axi_ram ram_w_a_queue_datas",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 44,0);
        tracep->declBus(c+831,"simu_top soc conf_axi_ram ram_w_a_queue_datas_awaddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+832,"simu_top soc conf_axi_ram ram_w_a_queue_datas_awburst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+833,"simu_top soc conf_axi_ram ram_w_a_queue_datas_awid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+834,"simu_top soc conf_axi_ram ram_w_a_queue_datas_awlen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+835,"simu_top soc conf_axi_ram ram_w_a_queue_datas_awsize",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+78,"simu_top soc conf_axi_ram ram_w_a_queue_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+828,"simu_top soc conf_axi_ram ram_w_a_queue_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+971,"simu_top soc conf_axi_ram ram_w_a_queue_pop",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1064,"simu_top soc conf_axi_ram ram_w_a_queue_push",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+828,"simu_top soc conf_axi_ram ram_w_a_queue_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+836,"simu_top soc conf_axi_ram ram_w_a_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+97,"simu_top soc conf_axi_ram ram_w_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+837,"simu_top soc conf_axi_ram ram_w_allow_out",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+80,"simu_top soc conf_axi_ram ram_w_b_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBit(c+972,"simu_top soc conf_axi_ram ram_w_b_data_push",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+838,"simu_top soc conf_axi_ram ram_w_b_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1065,"simu_top soc conf_axi_ram ram_w_b_pop",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1062,"simu_top soc conf_axi_ram ram_w_b_push",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+839,"simu_top soc conf_axi_ram ram_w_b_queue_datas",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBit(c+840,"simu_top soc conf_axi_ram ram_w_b_queue_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+838,"simu_top soc conf_axi_ram ram_w_b_queue_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+973,"simu_top soc conf_axi_ram ram_w_b_queue_pop",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1066,"simu_top soc conf_axi_ram ram_w_b_queue_push",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+838,"simu_top soc conf_axi_ram ram_w_b_queue_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+81,"simu_top soc conf_axi_ram ram_w_b_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1067,"simu_top soc conf_axi_ram ram_w_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1068,"simu_top soc conf_axi_ram ram_w_go",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+841,"simu_top soc conf_axi_ram ram_w_strb",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+98,"simu_top soc conf_axi_ram ram_w_wdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+842,"simu_top soc conf_axi_ram ram_w_wlast",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+841,"simu_top soc conf_axi_ram ram_w_wstrb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBit(c+843,"simu_top soc conf_axi_ram ram_w_wvalid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1331,"simu_top soc sram_axi_ram BUS_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1331,"simu_top soc sram_axi_ram DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1331,"simu_top soc sram_axi_ram CPU_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+1276,"simu_top soc sram_axi_ram aclk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1277,"simu_top soc sram_axi_ram aresetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1281,"simu_top soc sram_axi_ram ram_raddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1282,"simu_top soc sram_axi_ram ram_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1280,"simu_top soc sram_axi_ram ram_ren",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1284,"simu_top soc sram_axi_ram ram_waddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1285,"simu_top soc sram_axi_ram ram_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1283,"simu_top soc sram_axi_ram ram_wen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+53,"simu_top soc sram_axi_ram m_araddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1333,"simu_top soc sram_axi_ram m_arburst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1332,"simu_top soc sram_axi_ram m_arcache",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1332,"simu_top soc sram_axi_ram m_arid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1332,"simu_top soc sram_axi_ram m_arlen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1333,"simu_top soc sram_axi_ram m_arlock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1334,"simu_top soc sram_axi_ram m_arprot",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+74,"simu_top soc sram_axi_ram m_arready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+54,"simu_top soc sram_axi_ram m_arsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+1005,"simu_top soc sram_axi_ram m_arvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+53,"simu_top soc sram_axi_ram m_awaddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1333,"simu_top soc sram_axi_ram m_awburst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1332,"simu_top soc sram_axi_ram m_awcache",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1332,"simu_top soc sram_axi_ram m_awid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1332,"simu_top soc sram_axi_ram m_awlen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1333,"simu_top soc sram_axi_ram m_awlock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1334,"simu_top soc sram_axi_ram m_awprot",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+70,"simu_top soc sram_axi_ram m_awready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+54,"simu_top soc sram_axi_ram m_awsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+1002,"simu_top soc sram_axi_ram m_awvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+72,"simu_top soc sram_axi_ram m_bid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBit(c+1004,"simu_top soc sram_axi_ram m_bready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1333,"simu_top soc sram_axi_ram m_bresp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+73,"simu_top soc sram_axi_ram m_bvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1282,"simu_top soc sram_axi_ram m_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+75,"simu_top soc sram_axi_ram m_rid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBit(c+76,"simu_top soc sram_axi_ram m_rlast",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1006,"simu_top soc sram_axi_ram m_rready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1333,"simu_top soc sram_axi_ram m_rresp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+77,"simu_top soc sram_axi_ram m_rvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+56,"simu_top soc sram_axi_ram m_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1332,"simu_top soc sram_axi_ram m_wid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBit(c+1335,"simu_top soc sram_axi_ram m_wlast",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+71,"simu_top soc sram_axi_ram m_wready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+57,"simu_top soc sram_axi_ram m_wstrb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBit(c+1003,"simu_top soc sram_axi_ram m_wvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1466,"simu_top soc sram_axi_ram ADDR_INCR_BASE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declQuad(c+844,"simu_top soc sram_axi_ram ram_r_a_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 44,0);
        tracep->declBus(c+846,"simu_top soc sram_axi_ram ram_r_a_data_araddr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+846,"simu_top soc sram_axi_ram ram_r_a_data_araddr_fixed",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+847,"simu_top soc sram_axi_ram ram_r_a_data_araddr_incr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+848,"simu_top soc sram_axi_ram ram_r_a_data_araddr_next",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+974,"simu_top soc sram_axi_ram ram_r_a_data_araddr_update",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+849,"simu_top soc sram_axi_ram ram_r_a_data_araddr_wrap",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+850,"simu_top soc sram_axi_ram ram_r_a_data_arburst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+851,"simu_top soc sram_axi_ram ram_r_a_data_arburst_fixed",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+852,"simu_top soc sram_axi_ram ram_r_a_data_arburst_incr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+853,"simu_top soc sram_axi_ram ram_r_a_data_arburst_wrap",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+854,"simu_top soc sram_axi_ram ram_r_a_data_arid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBus(c+855,"simu_top soc sram_axi_ram ram_r_a_data_arlen",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBit(c+856,"simu_top soc sram_axi_ram ram_r_a_data_arlen_last",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+857,"simu_top soc sram_axi_ram ram_r_a_data_arsize",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBit(c+1069,"simu_top soc sram_axi_ram ram_r_a_data_push",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+858,"simu_top soc sram_axi_ram ram_r_a_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1070,"simu_top soc sram_axi_ram ram_r_a_pop",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1071,"simu_top soc sram_axi_ram ram_r_a_push",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+805,"simu_top soc sram_axi_ram ram_r_a_push_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 44,0);
        tracep->declQuad(c+859,"simu_top soc sram_axi_ram ram_r_a_queue_datas",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 44,0);
        tracep->declBus(c+861,"simu_top soc sram_axi_ram ram_r_a_queue_datas_araddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+862,"simu_top soc sram_axi_ram ram_r_a_queue_datas_arburst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+863,"simu_top soc sram_axi_ram ram_r_a_queue_datas_arid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+864,"simu_top soc sram_axi_ram ram_r_a_queue_datas_arlen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+865,"simu_top soc sram_axi_ram ram_r_a_queue_datas_arsize",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+74,"simu_top soc sram_axi_ram ram_r_a_queue_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+858,"simu_top soc sram_axi_ram ram_r_a_queue_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+975,"simu_top soc sram_axi_ram ram_r_a_queue_pop",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1072,"simu_top soc sram_axi_ram ram_r_a_queue_push",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+858,"simu_top soc sram_axi_ram ram_r_a_queue_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+866,"simu_top soc sram_axi_ram ram_r_a_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+846,"simu_top soc sram_axi_ram ram_r_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+976,"simu_top soc sram_axi_ram ram_r_allow_out",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1282,"simu_top soc sram_axi_ram ram_r_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+1073,"simu_top soc sram_axi_ram ram_r_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+867,"simu_top soc sram_axi_ram ram_r_rcur",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBit(c+1322,"simu_top soc sram_axi_ram ram_r_rcur_reset",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+75,"simu_top soc sram_axi_ram ram_r_rid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBit(c+76,"simu_top soc sram_axi_ram ram_r_rlast",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+77,"simu_top soc sram_axi_ram ram_r_rvalid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+868,"simu_top soc sram_axi_ram ram_w_a_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 44,0);
        tracep->declBus(c+870,"simu_top soc sram_axi_ram ram_w_a_data_awaddr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+870,"simu_top soc sram_axi_ram ram_w_a_data_awaddr_fixed",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+871,"simu_top soc sram_axi_ram ram_w_a_data_awaddr_incr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+872,"simu_top soc sram_axi_ram ram_w_a_data_awaddr_next",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+977,"simu_top soc sram_axi_ram ram_w_a_data_awaddr_update",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+873,"simu_top soc sram_axi_ram ram_w_a_data_awaddr_wrap",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+874,"simu_top soc sram_axi_ram ram_w_a_data_awburst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+875,"simu_top soc sram_axi_ram ram_w_a_data_awburst_fixed",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+876,"simu_top soc sram_axi_ram ram_w_a_data_awburst_incr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+877,"simu_top soc sram_axi_ram ram_w_a_data_awburst_wrap",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+878,"simu_top soc sram_axi_ram ram_w_a_data_awid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBus(c+879,"simu_top soc sram_axi_ram ram_w_a_data_awlen",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBus(c+880,"simu_top soc sram_axi_ram ram_w_a_data_awsize",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBit(c+1074,"simu_top soc sram_axi_ram ram_w_a_data_push",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+881,"simu_top soc sram_axi_ram ram_w_a_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1075,"simu_top soc sram_axi_ram ram_w_a_pop",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1076,"simu_top soc sram_axi_ram ram_w_a_push",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+805,"simu_top soc sram_axi_ram ram_w_a_push_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 44,0);
        tracep->declQuad(c+882,"simu_top soc sram_axi_ram ram_w_a_queue_datas",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 44,0);
        tracep->declBus(c+884,"simu_top soc sram_axi_ram ram_w_a_queue_datas_awaddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+885,"simu_top soc sram_axi_ram ram_w_a_queue_datas_awburst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+886,"simu_top soc sram_axi_ram ram_w_a_queue_datas_awid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+887,"simu_top soc sram_axi_ram ram_w_a_queue_datas_awlen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+888,"simu_top soc sram_axi_ram ram_w_a_queue_datas_awsize",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+70,"simu_top soc sram_axi_ram ram_w_a_queue_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+881,"simu_top soc sram_axi_ram ram_w_a_queue_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+978,"simu_top soc sram_axi_ram ram_w_a_queue_pop",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1077,"simu_top soc sram_axi_ram ram_w_a_queue_push",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+881,"simu_top soc sram_axi_ram ram_w_a_queue_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+889,"simu_top soc sram_axi_ram ram_w_a_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+870,"simu_top soc sram_axi_ram ram_w_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+890,"simu_top soc sram_axi_ram ram_w_allow_out",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+72,"simu_top soc sram_axi_ram ram_w_b_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBit(c+979,"simu_top soc sram_axi_ram ram_w_b_data_push",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+891,"simu_top soc sram_axi_ram ram_w_b_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1078,"simu_top soc sram_axi_ram ram_w_b_pop",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1075,"simu_top soc sram_axi_ram ram_w_b_push",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+892,"simu_top soc sram_axi_ram ram_w_b_queue_datas",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBit(c+893,"simu_top soc sram_axi_ram ram_w_b_queue_empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+891,"simu_top soc sram_axi_ram ram_w_b_queue_full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+980,"simu_top soc sram_axi_ram ram_w_b_queue_pop",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1079,"simu_top soc sram_axi_ram ram_w_b_queue_push",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+891,"simu_top soc sram_axi_ram ram_w_b_queue_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+73,"simu_top soc sram_axi_ram ram_w_b_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+1080,"simu_top soc sram_axi_ram ram_w_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1081,"simu_top soc sram_axi_ram ram_w_go",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+894,"simu_top soc sram_axi_ram ram_w_strb",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+895,"simu_top soc sram_axi_ram ram_w_wdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+896,"simu_top soc sram_axi_ram ram_w_wlast",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+894,"simu_top soc sram_axi_ram ram_w_wstrb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBit(c+897,"simu_top soc sram_axi_ram ram_w_wvalid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+1467,"simu_top soc confreg SIMULATION",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
        tracep->declBus(c+1331,"simu_top soc confreg BUS_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1331,"simu_top soc confreg DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1331,"simu_top soc confreg CPU_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+1276,"simu_top soc confreg clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1276,"simu_top soc confreg timer_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1277,"simu_top soc confreg resetn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1017,"simu_top soc confreg conf_ren",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1018,"simu_top soc confreg conf_wen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+96,"simu_top soc confreg conf_raddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+97,"simu_top soc confreg conf_waddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+98,"simu_top soc confreg conf_wdatain",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+84,"simu_top soc confreg conf_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1301,"simu_top soc confreg led",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
        tracep->declBus(c+1302,"simu_top soc confreg led_rg0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1303,"simu_top soc confreg led_rg1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+1304,"simu_top soc confreg num_csn",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+1305,"simu_top soc confreg num_a_g",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+1309,"simu_top soc confreg switch",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+1306,"simu_top soc confreg btn_key_col",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1307,"simu_top soc confreg btn_key_row",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+1308,"simu_top soc confreg btn_step",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+898,"simu_top soc confreg cr0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+899,"simu_top soc confreg cr1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+900,"simu_top soc confreg cr2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+901,"simu_top soc confreg cr3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+902,"simu_top soc confreg cr4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+903,"simu_top soc confreg cr5",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+904,"simu_top soc confreg cr6",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+905,"simu_top soc confreg cr7",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+906,"simu_top soc confreg led_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+907,"simu_top soc confreg led_rg0_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+908,"simu_top soc confreg led_rg1_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+909,"simu_top soc confreg num_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+1323,"simu_top soc confreg switch_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+1324,"simu_top soc confreg sw_inter_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+910,"simu_top soc confreg btn_key_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+911,"simu_top soc confreg btn_step_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+912,"simu_top soc confreg confreg_uart_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBit(c+913,"simu_top soc confreg confreg_uart_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+914,"simu_top soc confreg timer_r2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+915,"simu_top soc confreg simu_flag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+916,"simu_top soc confreg io_simu",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+917,"simu_top soc confreg virtual_uart_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBit(c+918,"simu_top soc confreg open_trace",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+919,"simu_top soc confreg num_monitor",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+98,"simu_top soc confreg conf_wdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+84,"simu_top soc confreg conf_rdata_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+1082,"simu_top soc confreg conf_we",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+981,"simu_top soc confreg write_cr0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+982,"simu_top soc confreg write_cr1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+983,"simu_top soc confreg write_cr2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+984,"simu_top soc confreg write_cr3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+985,"simu_top soc confreg write_cr4",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+986,"simu_top soc confreg write_cr5",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+987,"simu_top soc confreg write_cr6",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+988,"simu_top soc confreg write_cr7",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+920,"simu_top soc confreg write_timer_begin",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+921,"simu_top soc confreg write_timer_begin_r1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+922,"simu_top soc confreg write_timer_begin_r2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+923,"simu_top soc confreg write_timer_begin_r3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+924,"simu_top soc confreg write_timer_end_r1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+925,"simu_top soc confreg write_timer_end_r2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+926,"simu_top soc confreg conf_wdata_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+927,"simu_top soc confreg conf_wdata_r1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+928,"simu_top soc confreg conf_wdata_r2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+929,"simu_top soc confreg timer_r1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+930,"simu_top soc confreg timer",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+1083,"simu_top soc confreg write_timer",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+989,"simu_top soc confreg write_io_simu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+990,"simu_top soc confreg write_open_trace",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+991,"simu_top soc confreg write_num_monitor",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+931,"simu_top soc confreg write_uart_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+1084,"simu_top soc confreg write_uart_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+992,"simu_top soc confreg write_led",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+932,"simu_top soc confreg btn_key_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
        tracep->declBus(c+933,"simu_top soc confreg state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBus(c+1085,"simu_top soc confreg next_state",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+934,"simu_top soc confreg key_flag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+935,"simu_top soc confreg key_count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 19,0);
        tracep->declBus(c+936,"simu_top soc confreg state_count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBit(c+1325,"simu_top soc confreg key_start",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1326,"simu_top soc confreg key_end",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+937,"simu_top soc confreg key_sample",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1086,"simu_top soc confreg btn_key_tmp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 15,0);
        tracep->declBit(c+938,"simu_top soc confreg btn_step0_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+939,"simu_top soc confreg btn_step1_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+940,"simu_top soc confreg step0_flag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+941,"simu_top soc confreg step0_count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 19,0);
        tracep->declBit(c+1327,"simu_top soc confreg step0_start",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1328,"simu_top soc confreg step0_end",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+942,"simu_top soc confreg step0_sample",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+943,"simu_top soc confreg step1_flag",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+944,"simu_top soc confreg step1_count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 19,0);
        tracep->declBit(c+1329,"simu_top soc confreg step1_start",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1330,"simu_top soc confreg step1_end",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+945,"simu_top soc confreg step1_sample",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+993,"simu_top soc confreg write_led_rg0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+994,"simu_top soc confreg write_led_rg1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+995,"simu_top soc confreg write_num",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+946,"simu_top soc confreg count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 19,0);
        tracep->declBus(c+947,"simu_top soc confreg scan_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBus(c+1468,"cpuDefine rfNum",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1469,"cpuDefine instrNum",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1468,"cpuDefine instrLen",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1468,"cpuDefine addrLen",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+1417,"cpuDefine U_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
        tracep->declBus(c+1470,"cpuDefine BRANCH_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
        tracep->declBus(c+1471,"cpuDefine ADD_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
        tracep->declBus(c+1472,"cpuDefine SUB_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
        tracep->declBus(c+1473,"cpuDefine SLT_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
        tracep->declBus(c+1474,"cpuDefine SLTU_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
        tracep->declBus(c+1475,"cpuDefine NOR_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
        tracep->declBus(c+1476,"cpuDefine AND_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
        tracep->declBus(c+1477,"cpuDefine OR_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
        tracep->declBus(c+1478,"cpuDefine XOR_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
        tracep->declBus(c+1479,"cpuDefine SLL_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
        tracep->declBus(c+1480,"cpuDefine SRL_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
        tracep->declBus(c+1481,"cpuDefine SRA_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
        tracep->declBus(c+1482,"cpuDefine MUL_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
        tracep->declBus(c+1483,"cpuDefine MULH_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
        tracep->declBus(c+1484,"cpuDefine MULHU_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
        tracep->declBus(c+1485,"cpuDefine DIV_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
        tracep->declBus(c+1486,"cpuDefine MOD_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
        tracep->declBus(c+1487,"cpuDefine DIVU_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
        tracep->declBus(c+1488,"cpuDefine MODU_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
        tracep->declBus(c+1489,"cpuDefine SLLI_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
        tracep->declBus(c+1490,"cpuDefine SRLI_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
        tracep->declBus(c+1491,"cpuDefine SRAI_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 6,0);
        tracep->declBus(c+1334,"cpuDefine SLTI_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
        tracep->declBus(c+1429,"cpuDefine SLTUI_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
        tracep->declBus(c+1430,"cpuDefine ADDI_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
        tracep->declBus(c+1433,"cpuDefine ANDI_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
        tracep->declBus(c+1434,"cpuDefine ORI_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
        tracep->declBus(c+1492,"cpuDefine XORI_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
        tracep->declBus(c+1430,"cpuDefine LUI_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
        tracep->declBus(c+1434,"cpuDefine PCADDU12I_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
        tracep->declBit(c+1336,"cpuDefine LL_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBit(c+1335,"cpuDefine SC_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBus(c+1332,"cpuDefine LD_B_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
        tracep->declBus(c+1417,"cpuDefine LD_H_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
        tracep->declBus(c+1418,"cpuDefine LD_W_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
        tracep->declBus(c+1440,"cpuDefine ST_B_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
        tracep->declBus(c+1441,"cpuDefine ST_H_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
        tracep->declBus(c+1442,"cpuDefine ST_W_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
        tracep->declBus(c+1419,"cpuDefine LD_BU_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
        tracep->declBus(c+1444,"cpuDefine LD_HU_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
        tracep->declBus(c+1439,"cpuDefine JIRL_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
        tracep->declBus(c+1440,"cpuDefine B_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
        tracep->declBus(c+1441,"cpuDefine BL_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
        tracep->declBus(c+1442,"cpuDefine BEQ_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
        tracep->declBus(c+1443,"cpuDefine BNE_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
        tracep->declBus(c+1419,"cpuDefine BLT_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
        tracep->declBus(c+1444,"cpuDefine BGE_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
        tracep->declBus(c+1445,"cpuDefine BLTU_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
        tracep->declBus(c+1493,"cpuDefine BGEU_TYPE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    }
}

void Vsimu_top::traceRegister(VerilatedFst* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vsimu_top::traceFullTop0(void* userp, VerilatedFst* tracep) {
    Vsimu_top__Syms* __restrict vlSymsp = static_cast<Vsimu_top__Syms*>(userp);
    Vsimu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vsimu_top::traceFullSub0(void* userp, VerilatedFst* tracep) {
    Vsimu_top__Syms* __restrict vlSymsp = static_cast<Vsimu_top__Syms*>(userp);
    Vsimu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp67[3];
    WData/*95:0*/ __Vtemp68[3];
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_ready_go));
        tracep->fullBit(oldp+2,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_PC_BRANCH));
        tracep->fullBit(oldp+3,((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_PCADDU12I_TYPE) 
                                  | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BL_TYPE)) 
                                 | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_JIRL_TYPE))));
        tracep->fullBit(oldp+4,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_store_inst));
        tracep->fullBit(oldp+5,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_load_inst));
        tracep->fullBit(oldp+6,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_BU_TYPE) 
                                 | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_HU_TYPE))));
        tracep->fullBit(oldp+7,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ADDI_TYPE));
        tracep->fullBit(oldp+8,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_flush));
        tracep->fullBit(oldp+9,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ADDI_TYPE));
        tracep->fullBit(oldp+10,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_store_inst));
        tracep->fullBit(oldp+11,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_load_inst));
        tracep->fullBit(oldp+12,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_load_inst));
        tracep->fullBit(oldp+13,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BL_TYPE));
        tracep->fullBit(oldp+14,((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ORI_TYPE) 
                                   | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_XORI_TYPE)) 
                                  | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ANDI_TYPE))));
        tracep->fullBit(oldp+15,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_JIRL_TYPE));
        tracep->fullBit(oldp+16,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_BU_TYPE) 
                                  | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_HU_TYPE))));
        tracep->fullBit(oldp+17,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ANDI_TYPE));
        tracep->fullBit(oldp+18,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ORI_TYPE));
        tracep->fullBit(oldp+19,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_XORI_TYPE));
        tracep->fullBit(oldp+20,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LUI_TYPE));
        tracep->fullBit(oldp+21,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_PCADDU12I_TYPE));
        tracep->fullBit(oldp+22,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_BU_TYPE));
        tracep->fullBit(oldp+23,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_HU_TYPE));
        tracep->fullBit(oldp+24,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_reg_inst));
        tracep->fullBit(oldp+25,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LUI_TYPE) 
                                  | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_PCADDU12I_TYPE))));
        tracep->fullBit(oldp+26,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_PC_BRANCH));
        tracep->fullBit(oldp+27,((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_PCADDU12I_TYPE) 
                                   | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_load_inst)) 
                                  | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_store_inst))));
        tracep->fullBit(oldp+28,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__MEM_forward_valid));
        tracep->fullBit(oldp+29,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__WB_forward_valid));
        tracep->fullBit(oldp+30,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT__stall));
        tracep->fullBit(oldp+31,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divSigned));
        tracep->fullBit(oldp+32,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divEn));
        tracep->fullCData(oldp+33,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[0]),2);
        tracep->fullCData(oldp+34,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[1]),2);
        tracep->fullCData(oldp+35,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[2]),2);
        tracep->fullCData(oldp+36,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[3]),2);
        tracep->fullCData(oldp+37,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[4]),2);
        tracep->fullCData(oldp+38,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[0]),2);
        tracep->fullCData(oldp+39,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[1]),2);
        tracep->fullCData(oldp+40,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[2]),2);
        tracep->fullCData(oldp+41,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[3]),2);
        tracep->fullCData(oldp+42,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[4]),2);
        tracep->fullBit(oldp+43,((0x21U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__count))));
        tracep->fullIData(oldp+44,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_u),32);
        tracep->fullIData(oldp+45,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__remainder_u),32);
        tracep->fullIData(oldp+46,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__dividend_reg),32);
        tracep->fullQData(oldp+47,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__minuend),33);
        tracep->fullCData(oldp+49,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__count),6);
        tracep->fullQData(oldp+50,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__minuend_shifted),33);
        __Vtemp67[0U] = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__dividend_reg;
        __Vtemp67[1U] = (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__minuend);
        __Vtemp67[2U] = (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__minuend 
                                 >> 0x20U));
        VL_SHIFTL_WWI(65,65,32, __Vtemp68, __Vtemp67, 1U);
        tracep->fullIData(oldp+52,(__Vtemp68[0U]),32);
        tracep->fullIData(oldp+53,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r),32);
        tracep->fullCData(oldp+54,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_size_r),3);
        tracep->fullBit(oldp+55,(vlTOPp->simu_top__DOT__soc__DOT__cpu_awvalid));
        tracep->fullIData(oldp+56,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wdata_r),32);
        tracep->fullCData(oldp+57,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wstrb_r),4);
        tracep->fullBit(oldp+58,(vlTOPp->simu_top__DOT__soc__DOT__cpu_wvalid));
        tracep->fullCData(oldp+59,(vlTOPp->simu_top__DOT__soc__DOT__m0_bid),4);
        tracep->fullCData(oldp+60,(vlTOPp->simu_top__DOT__soc__DOT__m0_bresp),2);
        tracep->fullBit(oldp+61,(vlTOPp->simu_top__DOT__soc__DOT__cpu_arvalid));
        tracep->fullCData(oldp+62,(vlTOPp->simu_top__DOT__soc__DOT__m0_rid),4);
        tracep->fullCData(oldp+63,(vlTOPp->simu_top__DOT__soc__DOT__m0_rresp),2);
        tracep->fullBit(oldp+64,(vlTOPp->simu_top__DOT__soc__DOT__m0_rlast));
        tracep->fullBit(oldp+65,(vlTOPp->simu_top__DOT__soc__DOT__m0_awready));
        tracep->fullBit(oldp+66,(vlTOPp->simu_top__DOT__soc__DOT__m0_wready));
        tracep->fullBit(oldp+67,(vlTOPp->simu_top__DOT__soc__DOT__m0_bvalid));
        tracep->fullBit(oldp+68,(vlTOPp->simu_top__DOT__soc__DOT__m0_arready));
        tracep->fullBit(oldp+69,(vlTOPp->simu_top__DOT__soc__DOT__m0_rvalid));
        tracep->fullBit(oldp+70,((1U & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid)))));
        tracep->fullBit(oldp+71,(vlTOPp->simu_top__DOT__soc__DOT__s0_wready));
        tracep->fullCData(oldp+72,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_data),4);
        tracep->fullBit(oldp+73,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid));
        tracep->fullBit(oldp+74,((1U & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid)))));
        tracep->fullCData(oldp+75,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rid),4);
        tracep->fullBit(oldp+76,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rlast));
        tracep->fullBit(oldp+77,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rvalid));
        tracep->fullBit(oldp+78,((1U & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid)))));
        tracep->fullBit(oldp+79,(vlTOPp->simu_top__DOT__soc__DOT__conf_s_wready));
        tracep->fullCData(oldp+80,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_data),4);
        tracep->fullBit(oldp+81,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid));
        tracep->fullBit(oldp+82,((1U & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid)))));
        tracep->fullCData(oldp+83,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rid),4);
        tracep->fullIData(oldp+84,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__conf_rdata_reg),32);
        tracep->fullBit(oldp+85,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rlast));
        tracep->fullBit(oldp+86,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rvalid));
        tracep->fullBit(oldp+87,(vlTOPp->simu_top__DOT__soc__DOT__apb_s_awready));
        tracep->fullBit(oldp+88,(vlTOPp->simu_top__DOT__soc__DOT__apb_s_wready));
        tracep->fullCData(oldp+89,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_w_id),4);
        tracep->fullBit(oldp+90,(vlTOPp->simu_top__DOT__soc__DOT__apb_s_bvalid));
        tracep->fullBit(oldp+91,(vlTOPp->simu_top__DOT__soc__DOT__apb_s_arready));
        tracep->fullCData(oldp+92,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_r_id),4);
        tracep->fullIData(oldp+93,(((0U == (3U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb)))
                                     ? vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32
                                     : ((1U == (3U 
                                                & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb)))
                                         ? (0xffffff00U 
                                            & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                                               << 8U))
                                         : ((2U == 
                                             (3U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb)))
                                             ? (0xffff0000U 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                                                   << 0x10U))
                                             : ((3U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb)))
                                                 ? 
                                                (0xff000000U 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                                                    << 0x18U))
                                                 : 0U))))),32);
        tracep->fullBit(oldp+94,(vlTOPp->simu_top__DOT__soc__DOT__apb_s_rlast));
        tracep->fullBit(oldp+95,(vlTOPp->simu_top__DOT__soc__DOT__apb_s_rvalid));
        tracep->fullIData(oldp+96,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr),32);
        tracep->fullIData(oldp+97,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr),32);
        tracep->fullIData(oldp+98,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata),32);
        tracep->fullCData(oldp+99,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__uart0_int) 
                                    << 1U)),8);
        tracep->fullBit(oldp+100,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                         >> 1U))));
        tracep->fullBit(oldp+101,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr))));
        tracep->fullBit(oldp+102,(vlTOPp->simu_top__DOT__soc__DOT__uart0_int));
        tracep->fullBit(oldp+103,((1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                          >> 4U) | 
                                         ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__infrared) 
                                          | (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_out))))));
        tracep->fullBit(oldp+104,(vlTOPp->simu_top__DOT__soc__DOT__uart0_txd_oe));
        tracep->fullBit(oldp+105,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_reg) 
                                         ^ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                                            >> 3U)))));
        tracep->fullBit(oldp+106,((1U & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode)))));
        tracep->fullCData(oldp+107,((0xfU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[0U])),4);
        tracep->fullIData(oldp+108,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC),32);
        tracep->fullBit(oldp+109,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                         >> 0x15U))));
        tracep->fullCData(oldp+110,((3U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                           >> 0x12U))),2);
        tracep->fullCData(oldp+111,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem),4);
        tracep->fullIData(oldp+112,((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__MEM_forward_valid) 
                                      & ((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U]) 
                                         == (0x1fU 
                                             & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U])))
                                      ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[1U]
                                      : (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__WB_forward_valid) 
                                          & ((0x1fU 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                                                 >> 4U)) 
                                             == (0x1fU 
                                                 & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U])))
                                          ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb
                                          : ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[3U] 
                                              << 0x11U) 
                                             | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U] 
                                                >> 0xfU))))),32);
        tracep->fullBit(oldp+113,((1U & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req)))));
        tracep->fullIData(oldp+114,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__pipeline_data),32);
        tracep->fullIData(oldp+115,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__pipeline_data),32);
        tracep->fullIData(oldp+116,((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                             >> 0x20U))),32);
        tracep->fullIData(oldp+117,((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)),32);
        tracep->fullBit(oldp+118,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_valid_in));
        tracep->fullBit(oldp+119,(((((((((1U == (0x7fU 
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
                                          & (1U == 
                                             (0x3ffU 
                                              & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0x16U)))))) 
                                      | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ADDI_TYPE)) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LUI_TYPE) 
                                        | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_PCADDU12I_TYPE))) 
                                    | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_load_inst)) 
                                   | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_store_inst))));
        tracep->fullCData(oldp+120,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluctrl_id),5);
        tracep->fullCData(oldp+121,((((((0U == (0xfU 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x16U)))) 
                                        & (0xaU == 
                                           (0x3fU & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x1aU))))) 
                                       | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_BU_TYPE)) 
                                      | ((4U == (0xfU 
                                                 & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0x16U)))) 
                                         & (0xaU == 
                                            (0x3fU 
                                             & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 0x1aU))))))
                                      ? 0U : (((((1U 
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
                                               : ((
                                                   ((2U 
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
        tracep->fullIData(oldp+122,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id),32);
        tracep->fullIData(oldp+123,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rk_id),32);
        tracep->fullCData(oldp+124,((0x1fU & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                      >> 5U)))),5);
        tracep->fullCData(oldp+125,((0x1fU & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                      >> 0xaU)))),5);
        tracep->fullCData(oldp+126,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_id),5);
        tracep->fullIData(oldp+127,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__immout_id),32);
        tracep->fullIData(oldp+128,((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                             >> 0x20U))),32);
        tracep->fullBit(oldp+129,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                         >> 0x1cU))));
        tracep->fullBit(oldp+130,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                         >> 0x1bU))));
        tracep->fullCData(oldp+131,((0x1fU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                              >> 0x16U))),5);
        tracep->fullBit(oldp+132,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                         >> 0x15U))));
        tracep->fullBit(oldp+133,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                         >> 0x14U))));
        tracep->fullCData(oldp+134,((3U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                           >> 0x12U))),2);
        tracep->fullBit(oldp+135,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                         >> 0x11U))));
        tracep->fullBit(oldp+136,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                         >> 0x10U))));
        tracep->fullBit(oldp+137,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                         >> 0xfU))));
        tracep->fullIData(oldp+138,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                      << 0x11U) | (
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[4U] 
                                                   >> 0xfU))),32);
        tracep->fullIData(oldp+139,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[4U] 
                                      << 0x11U) | (
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[3U] 
                                                   >> 0xfU))),32);
        tracep->fullIData(oldp+140,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[3U] 
                                      << 0x11U) | (
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U] 
                                                   >> 0xfU))),32);
        tracep->fullCData(oldp+141,((0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[3U] 
                                               << 0x16U) 
                                              | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U] 
                                                 >> 0xaU)))),5);
        tracep->fullCData(oldp+142,((0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[3U] 
                                               << 0x1bU) 
                                              | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U] 
                                                 >> 5U)))),5);
        tracep->fullCData(oldp+143,((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U])),5);
        tracep->fullIData(oldp+144,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[1U]),32);
        tracep->fullIData(oldp+145,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0U]),32);
        tracep->fullCData(oldp+146,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem),4);
        tracep->fullCData(oldp+147,((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U])),5);
        tracep->fullIData(oldp+148,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0U]),32);
        tracep->fullBit(oldp+149,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U] 
                                         >> 0xfU))));
        tracep->fullBit(oldp+150,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U] 
                                         >> 0xeU))));
        tracep->fullCData(oldp+151,((3U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U] 
                                           >> 0xcU))),2);
        tracep->fullBit(oldp+152,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U] 
                                         >> 0xbU))));
        tracep->fullBit(oldp+153,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U] 
                                         >> 0xaU))));
        tracep->fullBit(oldp+154,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U] 
                                         >> 9U))));
        tracep->fullCData(oldp+155,((0xfU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U] 
                                             >> 5U))),4);
        tracep->fullCData(oldp+156,((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U])),5);
        tracep->fullIData(oldp+157,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[1U]),32);
        tracep->fullIData(oldp+158,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0U]),32);
        tracep->fullBit(oldp+159,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_allow_in));
        tracep->fullCData(oldp+160,((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U])),5);
        tracep->fullIData(oldp+161,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[1U]),32);
        tracep->fullIData(oldp+162,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0U]),32);
        tracep->fullBit(oldp+163,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                                         >> 0xaU))));
        tracep->fullBit(oldp+164,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                                         >> 9U))));
        tracep->fullCData(oldp+165,((0x1fU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                                              >> 4U))),5);
        tracep->fullIData(oldp+166,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                                      << 0x1cU) | (
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U] 
                                                   >> 4U))),32);
        tracep->fullIData(oldp+167,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U] 
                                      << 0x1cU) | (
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[1U] 
                                                   >> 4U))),32);
        tracep->fullIData(oldp+168,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[1U] 
                                      << 0x1cU) | (
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[0U] 
                                                   >> 4U))),32);
        tracep->fullCData(oldp+169,((0xfU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[0U])),4);
        tracep->fullBit(oldp+170,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_valid));
        tracep->fullIData(oldp+171,(((IData)(4U) + vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__pipeline_data)),32);
        tracep->fullIData(oldp+172,((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_JIRL_TYPE)
                                       ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id_true
                                       : (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                  >> 0x20U))) 
                                     + vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__immout_id)),32);
        tracep->fullIData(oldp+173,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp),32);
        tracep->fullBit(oldp+174,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp_valid));
        tracep->fullIData(oldp+175,((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)),32);
        tracep->fullIData(oldp+176,((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                             >> 0x20U))),32);
        tracep->fullBit(oldp+177,((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id_true 
                                   == (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__MEM_forward_valid) 
                                        & ((0x1fU & 
                                            vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U]) 
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
                                            : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rk_id)))));
        tracep->fullBit(oldp+178,((((((0xaU == (0xfU 
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
                                                             >> 0x1eU)))))) 
                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id_true 
                                       < (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__MEM_forward_valid) 
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
                                               : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rk_id)))) 
                                   | ((~ (((0xaU == 
                                            (0xfU & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x1cU)))) 
                                           & (1U == 
                                              (3U & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x1eU))))) 
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
        tracep->fullCData(oldp+179,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__itype),3);
        tracep->fullCData(oldp+180,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluctrl_id),5);
        tracep->fullBit(oldp+181,((((0xaU == (0xfU 
                                              & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0x1cU)))) 
                                    & (1U == (3U & (IData)(
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
        tracep->fullBit(oldp+182,((((((((8U == (0xfU 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x1cU)))) 
                                        & (1U == (3U 
                                                  & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x1eU))))) 
                                       | ((9U == (0xfU 
                                                  & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x1cU)))) 
                                          & (1U == 
                                             (3U & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0x1eU)))))) 
                                      | ((0xaU == (0xfU 
                                                   & (IData)(
                                                             (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                              >> 0x1cU)))) 
                                         & (1U == (3U 
                                                   & (IData)(
                                                             (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                              >> 0x1eU)))))) 
                                     | ((0xbU == (0xfU 
                                                  & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x1cU)))) 
                                        & (1U == (3U 
                                                  & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x1eU)))))) 
                                    | ((6U == (0xfU 
                                               & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0x1cU)))) 
                                       & (1U == (3U 
                                                 & (IData)(
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
        tracep->fullCData(oldp+183,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_id),5);
        tracep->fullIData(oldp+184,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id),32);
        tracep->fullIData(oldp+185,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rk_id),32);
        tracep->fullBit(oldp+186,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                                         >> 0xaU))));
        tracep->fullIData(oldp+187,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb),32);
        tracep->fullIData(oldp+188,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__immout_id),32);
        tracep->fullIData(oldp+189,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id_true),32);
        tracep->fullIData(oldp+190,((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__MEM_forward_valid) 
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
                                          : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rk_id))),32);
        tracep->fullIData(oldp+191,((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__MEM_forward_valid) 
                                      & ((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U]) 
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
                                             == (0x1fU 
                                                 & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[3U] 
                                                     << 0x16U) 
                                                    | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U] 
                                                       >> 0xaU)))))
                                          ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb
                                          : ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                              << 0x11U) 
                                             | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[4U] 
                                                >> 0xfU))))),32);
        tracep->fullIData(oldp+192,((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__MEM_forward_valid) 
                                      & ((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U]) 
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
                                             == (0x1fU 
                                                 & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[3U] 
                                                     << 0x1bU) 
                                                    | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U] 
                                                       >> 5U)))))
                                          ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb
                                          : ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[4U] 
                                              << 0x11U) 
                                             | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[3U] 
                                                >> 0xfU))))),32);
        tracep->fullCData(oldp+193,((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U])),5);
        tracep->fullCData(oldp+194,((0x1fU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                                              >> 4U))),5);
        tracep->fullBit(oldp+195,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U] 
                                         >> 0xaU))));
        tracep->fullIData(oldp+196,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[1U]),32);
        tracep->fullIData(oldp+197,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_JIRL_TYPE)
                                      ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id_true
                                      : (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                 >> 0x20U)))),32);
        tracep->fullBit(oldp+198,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                         >> 0x14U))));
        tracep->fullBit(oldp+199,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                         >> 0x10U))));
        tracep->fullBit(oldp+200,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                         >> 0x1cU))));
        tracep->fullBit(oldp+201,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                         >> 0x1bU))));
        tracep->fullCData(oldp+202,((0x1fU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                              >> 0x16U))),5);
        tracep->fullIData(oldp+203,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex),32);
        tracep->fullIData(oldp+204,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex),32);
        tracep->fullIData(oldp+205,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0U]),32);
        tracep->fullIData(oldp+206,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                      << 0x11U) | (
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[4U] 
                                                   >> 0xfU))),32);
        tracep->fullIData(oldp+207,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[4U] 
                                      << 0x11U) | (
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[3U] 
                                                   >> 0xfU))),32);
        tracep->fullIData(oldp+208,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[3U] 
                                      << 0x11U) | (
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U] 
                                                   >> 0xfU))),32);
        tracep->fullCData(oldp+209,((0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[3U] 
                                               << 0x16U) 
                                              | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U] 
                                                 >> 0xaU)))),5);
        tracep->fullCData(oldp+210,((0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[3U] 
                                               << 0x1bU) 
                                              | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U] 
                                                 >> 5U)))),5);
        tracep->fullCData(oldp+211,((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U])),5);
        tracep->fullIData(oldp+212,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[1U]),32);
        tracep->fullBit(oldp+213,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                         >> 0x11U))));
        tracep->fullBit(oldp+214,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                         >> 0xfU))));
        tracep->fullCData(oldp+215,((0xfU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U] 
                                             >> 5U))),4);
        tracep->fullBit(oldp+216,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U] 
                                         >> 0xbU))));
        tracep->fullBit(oldp+217,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U] 
                                         >> 0xeU))));
        tracep->fullBit(oldp+218,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U] 
                                         >> 0xfU))));
        tracep->fullIData(oldp+219,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0U]),32);
        tracep->fullIData(oldp+220,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp),32);
        tracep->fullBit(oldp+221,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid));
        tracep->fullIData(oldp+222,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                                      << 0x1cU) | (
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U] 
                                                   >> 4U))),32);
        tracep->fullIData(oldp+223,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U] 
                                      << 0x1cU) | (
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[1U] 
                                                   >> 4U))),32);
        tracep->fullBit(oldp+224,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                                         >> 9U))));
        tracep->fullIData(oldp+225,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[1U] 
                                      << 0x1cU) | (
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[0U] 
                                                   >> 4U))),32);
        tracep->fullBit(oldp+226,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__pipeline_valid));
        tracep->fullBit(oldp+227,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__pipeline_valid));
        tracep->fullIData(oldp+228,((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__pipeline_data 
                                             >> 0x20U))),32);
        tracep->fullIData(oldp+229,((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__pipeline_data)),32);
        tracep->fullBit(oldp+230,((0U == (0x3ffU & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0x16U))))));
        tracep->fullBit(oldp+231,((1U == (0x3ffU & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0x16U))))));
        tracep->fullBit(oldp+232,((1U == (0x7fU & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x19U))))));
        tracep->fullBit(oldp+233,((1U == (0xfU & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0x1cU))))));
        tracep->fullBit(oldp+234,((0x10U == (0x7fU 
                                             & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 0x19U))))));
        tracep->fullBit(oldp+235,((0xaU == (0x3fU & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x1aU))))));
        tracep->fullBit(oldp+236,((1U == (3U & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 0x1eU))))));
        tracep->fullBit(oldp+237,(((0x20U == (0x7fU 
                                              & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0xfU)))) 
                                   & (0U == (0x3ffU 
                                             & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 0x16U)))))));
        tracep->fullBit(oldp+238,(((0x22U == (0x7fU 
                                              & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0xfU)))) 
                                   & (0U == (0x3ffU 
                                             & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 0x16U)))))));
        tracep->fullBit(oldp+239,(((0x24U == (0x7fU 
                                              & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0xfU)))) 
                                   & (0U == (0x3ffU 
                                             & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 0x16U)))))));
        tracep->fullBit(oldp+240,(((0x25U == (0x7fU 
                                              & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0xfU)))) 
                                   & (0U == (0x3ffU 
                                             & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 0x16U)))))));
        tracep->fullBit(oldp+241,(((0x28U == (0x7fU 
                                              & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0xfU)))) 
                                   & (0U == (0x3ffU 
                                             & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 0x16U)))))));
        tracep->fullBit(oldp+242,(((0x29U == (0x7fU 
                                              & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0xfU)))) 
                                   & (0U == (0x3ffU 
                                             & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 0x16U)))))));
        tracep->fullBit(oldp+243,(((0x2aU == (0x7fU 
                                              & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0xfU)))) 
                                   & (0U == (0x3ffU 
                                             & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 0x16U)))))));
        tracep->fullBit(oldp+244,(((0x2bU == (0x7fU 
                                              & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0xfU)))) 
                                   & (0U == (0x3ffU 
                                             & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 0x16U)))))));
        tracep->fullBit(oldp+245,(((0x2eU == (0x7fU 
                                              & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0xfU)))) 
                                   & (0U == (0x3ffU 
                                             & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 0x16U)))))));
        tracep->fullBit(oldp+246,(((0x2fU == (0x7fU 
                                              & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0xfU)))) 
                                   & (0U == (0x3ffU 
                                             & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 0x16U)))))));
        tracep->fullBit(oldp+247,(((0x30U == (0x7fU 
                                              & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0xfU)))) 
                                   & (0U == (0x3ffU 
                                             & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 0x16U)))))));
        tracep->fullBit(oldp+248,(((0x38U == (0x7fU 
                                              & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0xfU)))) 
                                   & (0U == (0x3ffU 
                                             & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 0x16U)))))));
        tracep->fullBit(oldp+249,(((0x39U == (0x7fU 
                                              & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0xfU)))) 
                                   & (0U == (0x3ffU 
                                             & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 0x16U)))))));
        tracep->fullBit(oldp+250,(((0x3aU == (0x7fU 
                                              & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0xfU)))) 
                                   & (0U == (0x3ffU 
                                             & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 0x16U)))))));
        tracep->fullBit(oldp+251,(((0x40U == (0x7fU 
                                              & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0xfU)))) 
                                   & (0U == (0x3ffU 
                                             & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 0x16U)))))));
        tracep->fullBit(oldp+252,(((0x41U == (0x7fU 
                                              & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0xfU)))) 
                                   & (0U == (0x3ffU 
                                             & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 0x16U)))))));
        tracep->fullBit(oldp+253,(((0x42U == (0x7fU 
                                              & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0xfU)))) 
                                   & (0U == (0x3ffU 
                                             & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 0x16U)))))));
        tracep->fullBit(oldp+254,(((0x43U == (0x7fU 
                                              & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0xfU)))) 
                                   & (0U == (0x3ffU 
                                             & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 0x16U)))))));
        tracep->fullBit(oldp+255,(((1U == (0x7fU & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0xfU)))) 
                                   & (1U == (0x3ffU 
                                             & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 0x16U)))))));
        tracep->fullBit(oldp+256,(((9U == (0x7fU & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0xfU)))) 
                                   & (1U == (0x3ffU 
                                             & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 0x16U)))))));
        tracep->fullBit(oldp+257,(((0x11U == (0x7fU 
                                              & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0xfU)))) 
                                   & (1U == (0x3ffU 
                                             & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 0x16U)))))));
        tracep->fullBit(oldp+258,(((0U == (7U & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0x16U)))) 
                                   & (1U == (0x7fU 
                                             & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 0x19U)))))));
        tracep->fullBit(oldp+259,(((1U == (7U & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0x16U)))) 
                                   & (1U == (0x7fU 
                                             & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 0x19U)))))));
        tracep->fullBit(oldp+260,(((2U == (7U & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0x16U)))) 
                                   & (1U == (0x7fU 
                                             & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 0x19U)))))));
        tracep->fullBit(oldp+261,((2U == (7U & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 0x16U))))));
        tracep->fullCData(oldp+262,((7U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                   >> 0x19U)))),3);
        tracep->fullBit(oldp+263,(((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                               >> 0x18U))) 
                                   & (0x10U == (0x7fU 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x19U)))))));
        tracep->fullBit(oldp+264,(((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                            >> 0x18U)) 
                                   & (0x10U == (0x7fU 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x19U)))))));
        tracep->fullBit(oldp+265,(((0U == (0xfU & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x16U)))) 
                                   & (0xaU == (0x3fU 
                                               & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0x1aU)))))));
        tracep->fullBit(oldp+266,(((1U == (0xfU & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x16U)))) 
                                   & (0xaU == (0x3fU 
                                               & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0x1aU)))))));
        tracep->fullBit(oldp+267,(((2U == (0xfU & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x16U)))) 
                                   & (0xaU == (0x3fU 
                                               & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0x1aU)))))));
        tracep->fullBit(oldp+268,(((4U == (0xfU & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x16U)))) 
                                   & (0xaU == (0x3fU 
                                               & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0x1aU)))))));
        tracep->fullBit(oldp+269,(((5U == (0xfU & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x16U)))) 
                                   & (0xaU == (0x3fU 
                                               & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0x1aU)))))));
        tracep->fullBit(oldp+270,(((6U == (0xfU & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x16U)))) 
                                   & (0xaU == (0x3fU 
                                               & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0x1aU)))))));
        tracep->fullCData(oldp+271,((0xfU & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                     >> 0x1cU)))),4);
        tracep->fullBit(oldp+272,(((4U == (0xfU & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x1cU)))) 
                                   & (1U == (3U & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x1eU)))))));
        tracep->fullBit(oldp+273,(((6U == (0xfU & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x1cU)))) 
                                   & (1U == (3U & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x1eU)))))));
        tracep->fullBit(oldp+274,(((7U == (0xfU & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x1cU)))) 
                                   & (1U == (3U & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x1eU)))))));
        tracep->fullBit(oldp+275,(((8U == (0xfU & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x1cU)))) 
                                   & (1U == (3U & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x1eU)))))));
        tracep->fullBit(oldp+276,(((9U == (0xfU & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x1cU)))) 
                                   & (1U == (3U & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x1eU)))))));
        tracep->fullBit(oldp+277,(((0xaU == (0xfU & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x1cU)))) 
                                   & (1U == (3U & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x1eU)))))));
        tracep->fullBit(oldp+278,(((0xbU == (0xfU & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x1cU)))) 
                                   & (1U == (3U & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x1eU)))))));
        tracep->fullBit(oldp+279,((0x54U == (0x1ffffU 
                                             & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 0xfU))))));
        tracep->fullBit(oldp+280,((0x56U == (0x1ffffU 
                                             & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 0xfU))))));
        tracep->fullBit(oldp+281,(((4U == (0xffU & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0x18U)))) 
                                   & (0U == (0x1fU 
                                             & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 5U)))))));
        tracep->fullBit(oldp+282,(((4U == (0xffU & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0x18U)))) 
                                   & (1U == (0x1fU 
                                             & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 5U)))))));
        tracep->fullBit(oldp+283,(((4U == (0xffU & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0x18U)))) 
                                   & (0U != (0xfU & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 6U)))))));
        tracep->fullBit(oldp+284,((((((0x54U == (0x1ffffU 
                                                 & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0xfU)))) 
                                      & (0x56U == (0x1ffffU 
                                                   & (IData)(
                                                             (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                              >> 0xfU))))) 
                                     & ((4U == (0xffU 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x18U)))) 
                                        & (0U == (0x1fU 
                                                  & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 5U)))))) 
                                    & ((4U == (0xffU 
                                               & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0x18U)))) 
                                       & (1U == (0x1fU 
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
        tracep->fullBit(oldp+285,(((((1U == (0x7fU 
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
                                       & (1U == (0x3ffU 
                                                 & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0x16U)))))) 
                                   | ((0x11U == (0x7fU 
                                                 & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0xfU)))) 
                                      & (1U == (0x3ffU 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x16U))))))));
        tracep->fullBit(oldp+286,((((((((0U == (7U 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x16U)))) 
                                        & (1U == (0x7fU 
                                                  & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x19U))))) 
                                       | ((1U == (7U 
                                                  & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x16U)))) 
                                          & (1U == 
                                             (0x7fU 
                                              & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0x19U)))))) 
                                      | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ADDI_TYPE)) 
                                     | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ANDI_TYPE)) 
                                    | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ORI_TYPE)) 
                                   | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_XORI_TYPE))));
        tracep->fullBit(oldp+287,((((4U == (0xfU & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0x1cU)))) 
                                    & (1U == (3U & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0x1eU))))) 
                                   | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BL_TYPE))));
        tracep->fullBit(oldp+288,(((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_reg_inst) 
                                       | ((((1U == 
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
                                                            >> 0x16U))))))) 
                                      | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ADDI_TYPE)) 
                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LUI_TYPE) 
                                        | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_PCADDU12I_TYPE))) 
                                    | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_load_inst)) 
                                   | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_store_inst))));
        tracep->fullBit(oldp+289,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_JIRL_TYPE) 
                                   | (((((((8U == (0xfU 
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
                                                              >> 0x1eU)))))))));
        tracep->fullBit(oldp+290,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_reg_inst) 
                                      | ((((1U == (0x7fU 
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
                                            & (1U == 
                                               (0x3ffU 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x16U))))))) 
                                     | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ADDI_TYPE)) 
                                    | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_load_inst)) 
                                   | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_store_inst))));
        tracep->fullIData(oldp+291,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[0]),32);
        tracep->fullIData(oldp+292,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[1]),32);
        tracep->fullIData(oldp+293,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[2]),32);
        tracep->fullIData(oldp+294,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[3]),32);
        tracep->fullIData(oldp+295,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[4]),32);
        tracep->fullIData(oldp+296,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[5]),32);
        tracep->fullIData(oldp+297,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[6]),32);
        tracep->fullIData(oldp+298,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[7]),32);
        tracep->fullIData(oldp+299,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[8]),32);
        tracep->fullIData(oldp+300,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[9]),32);
        tracep->fullIData(oldp+301,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[10]),32);
        tracep->fullIData(oldp+302,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[11]),32);
        tracep->fullIData(oldp+303,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[12]),32);
        tracep->fullIData(oldp+304,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[13]),32);
        tracep->fullIData(oldp+305,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[14]),32);
        tracep->fullIData(oldp+306,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[15]),32);
        tracep->fullIData(oldp+307,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[16]),32);
        tracep->fullIData(oldp+308,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[17]),32);
        tracep->fullIData(oldp+309,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[18]),32);
        tracep->fullIData(oldp+310,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[19]),32);
        tracep->fullIData(oldp+311,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[20]),32);
        tracep->fullIData(oldp+312,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[21]),32);
        tracep->fullIData(oldp+313,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[22]),32);
        tracep->fullIData(oldp+314,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[23]),32);
        tracep->fullIData(oldp+315,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[24]),32);
        tracep->fullIData(oldp+316,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[25]),32);
        tracep->fullIData(oldp+317,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[26]),32);
        tracep->fullIData(oldp+318,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[27]),32);
        tracep->fullIData(oldp+319,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[28]),32);
        tracep->fullIData(oldp+320,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[29]),32);
        tracep->fullIData(oldp+321,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[30]),32);
        tracep->fullIData(oldp+322,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[31]),32);
        tracep->fullBit(oldp+323,((((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U]) 
                                    == (0x1fU & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 5U)))) 
                                   | ((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U]) 
                                      == (0x1fU & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0xaU)))))));
        tracep->fullBit(oldp+324,((((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U]) 
                                    == (0x1fU & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 5U)))) 
                                   | ((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U]) 
                                      == (0x1fU & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0xaU)))))));
        tracep->fullBit(oldp+325,(((((~ (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_PCADDU12I_TYPE) 
                                          | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BL_TYPE)) 
                                         | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_JIRL_TYPE))) 
                                     & ((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U]) 
                                        == (0x1fU & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 5U))))) 
                                    | ((~ ((((((((1U 
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
                                       & ((0x1fU & 
                                           vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U]) 
                                          == (0x1fU 
                                              & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0xaU)))))) 
                                   | ((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U]) 
                                      == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_id)))));
        tracep->fullBit(oldp+326,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid));
        tracep->fullBit(oldp+327,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[5U] 
                                         >> 0x1cU))));
        tracep->fullBit(oldp+328,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[5U] 
                                         >> 0x1bU))));
        tracep->fullCData(oldp+329,((0x1fU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[5U] 
                                              >> 0x16U))),5);
        tracep->fullBit(oldp+330,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[5U] 
                                         >> 0x15U))));
        tracep->fullBit(oldp+331,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[5U] 
                                         >> 0x14U))));
        tracep->fullCData(oldp+332,((3U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[5U] 
                                           >> 0x12U))),2);
        tracep->fullBit(oldp+333,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[5U] 
                                         >> 0x11U))));
        tracep->fullBit(oldp+334,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[5U] 
                                         >> 0x10U))));
        tracep->fullBit(oldp+335,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[5U] 
                                         >> 0xfU))));
        tracep->fullIData(oldp+336,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[5U] 
                                      << 0x11U) | (
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[4U] 
                                                   >> 0xfU))),32);
        tracep->fullIData(oldp+337,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[4U] 
                                      << 0x11U) | (
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[3U] 
                                                   >> 0xfU))),32);
        tracep->fullIData(oldp+338,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[3U] 
                                      << 0x11U) | (
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[2U] 
                                                   >> 0xfU))),32);
        tracep->fullCData(oldp+339,((0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[3U] 
                                               << 0x16U) 
                                              | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[2U] 
                                                 >> 0xaU)))),5);
        tracep->fullCData(oldp+340,((0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[3U] 
                                               << 0x1bU) 
                                              | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[2U] 
                                                 >> 5U)))),5);
        tracep->fullCData(oldp+341,((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[2U])),5);
        tracep->fullIData(oldp+342,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[1U]),32);
        tracep->fullIData(oldp+343,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[0U]),32);
        tracep->fullIData(oldp+344,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_result),32);
        tracep->fullIData(oldp+345,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__slt_result),32);
        tracep->fullIData(oldp+346,((1U & (~ (IData)(
                                                     (1ULL 
                                                      & ((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)) 
                                                           + (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_b))) 
                                                          + (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_cin))) 
                                                         >> 0x20U)))))),32);
        tracep->fullIData(oldp+347,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_b),32);
        tracep->fullBit(oldp+348,((1U & (IData)((1ULL 
                                                 & ((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)) 
                                                      + (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_b))) 
                                                     + (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_cin))) 
                                                    >> 0x20U))))));
        tracep->fullBit(oldp+349,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_cin));
        tracep->fullIData(oldp+350,(((0x80000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)
                                      ? (- vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)
                                      : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)),32);
        tracep->fullIData(oldp+351,(((0x80000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)
                                      ? (- vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)
                                      : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)),32);
        tracep->fullBit(oldp+352,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                                         >> 0x1fU))));
        tracep->fullBit(oldp+353,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex 
                                         >> 0x1fU))));
        tracep->fullBit(oldp+354,((1U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                                          ^ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex) 
                                         >> 0x1fU))));
        tracep->fullIData(oldp+355,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divSigned)
                                      ? ((0x80000000U 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)
                                          ? (- vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)
                                          : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)
                                      : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)),32);
        tracep->fullIData(oldp+356,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divSigned)
                                      ? ((0x80000000U 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)
                                          ? (- vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)
                                          : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)
                                      : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)),32);
        tracep->fullBit(oldp+357,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_valid));
        tracep->fullBit(oldp+358,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[2U] 
                                         >> 0xfU))));
        tracep->fullBit(oldp+359,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[2U] 
                                         >> 0xeU))));
        tracep->fullCData(oldp+360,((3U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[2U] 
                                           >> 0xcU))),2);
        tracep->fullBit(oldp+361,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[2U] 
                                         >> 0xbU))));
        tracep->fullBit(oldp+362,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[2U] 
                                         >> 0xaU))));
        tracep->fullBit(oldp+363,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[2U] 
                                         >> 9U))));
        tracep->fullCData(oldp+364,((0xfU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[2U] 
                                             >> 5U))),4);
        tracep->fullCData(oldp+365,((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[2U])),5);
        tracep->fullIData(oldp+366,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[1U]),32);
        tracep->fullIData(oldp+367,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[0U]),32);
        tracep->fullBit(oldp+368,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[3U] 
                                         >> 0xaU))));
        tracep->fullBit(oldp+369,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[3U] 
                                         >> 9U))));
        tracep->fullCData(oldp+370,((0x1fU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[3U] 
                                              >> 4U))),5);
        tracep->fullIData(oldp+371,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[3U] 
                                      << 0x1cU) | (
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[2U] 
                                                   >> 4U))),32);
        tracep->fullIData(oldp+372,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[2U] 
                                      << 0x1cU) | (
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[1U] 
                                                   >> 4U))),32);
        tracep->fullIData(oldp+373,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[1U] 
                                      << 0x1cU) | (
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[0U] 
                                                   >> 4U))),32);
        tracep->fullCData(oldp+374,((0xfU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[0U])),4);
        tracep->fullBit(oldp+375,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req));
        tracep->fullBit(oldp+376,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req_or));
        tracep->fullBit(oldp+377,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wr_r));
        tracep->fullCData(oldp+378,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_size_r),2);
        tracep->fullBit(oldp+379,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__addr_rcv));
        tracep->fullBit(oldp+380,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__wdata_rcv));
        tracep->fullBit(oldp+381,(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_ar));
        tracep->fullBit(oldp+382,(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_ar_disable));
        tracep->fullBit(oldp+383,((1U & vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_random)));
        tracep->fullBit(oldp+384,(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_aw));
        tracep->fullBit(oldp+385,(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_aw_disable));
        tracep->fullBit(oldp+386,((1U & (vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                         >> 1U))));
        tracep->fullBit(oldp+387,((1U & (vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                         >> 2U))));
        tracep->fullBit(oldp+388,(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_no_delay));
        tracep->fullBit(oldp+389,((1U & (vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                         >> 3U))));
        tracep->fullIData(oldp+390,(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_random),23);
        tracep->fullIData(oldp+391,(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_random_next),23);
        tracep->fullBit(oldp+392,(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_short_delay));
        tracep->fullBit(oldp+393,(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_w));
        tracep->fullBit(oldp+394,(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_w_disable));
        tracep->fullBit(oldp+395,((1U & (vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                         >> 4U))));
        tracep->fullCData(oldp+396,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit),5);
        tracep->fullCData(oldp+397,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit),5);
        tracep->fullCData(oldp+398,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit),5);
        tracep->fullCData(oldp+399,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit),5);
        tracep->fullCData(oldp+400,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready),5);
        tracep->fullCData(oldp+401,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready),5);
        tracep->fullCData(oldp+402,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid),5);
        tracep->fullCData(oldp+403,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready),5);
        tracep->fullCData(oldp+404,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast),5);
        tracep->fullCData(oldp+405,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid),5);
        tracep->fullCData(oldp+406,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[0]),4);
        tracep->fullCData(oldp+407,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[1]),4);
        tracep->fullCData(oldp+408,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[2]),4);
        tracep->fullCData(oldp+409,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[3]),4);
        tracep->fullCData(oldp+410,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[4]),4);
        tracep->fullCData(oldp+411,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[0]),4);
        tracep->fullCData(oldp+412,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[1]),4);
        tracep->fullCData(oldp+413,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[2]),4);
        tracep->fullCData(oldp+414,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[3]),4);
        tracep->fullCData(oldp+415,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[4]),4);
        tracep->fullCData(oldp+416,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_0),3);
        tracep->fullCData(oldp+417,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_1),3);
        tracep->fullCData(oldp+418,((7U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid))),3);
        tracep->fullCData(oldp+419,((3U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid) 
                                           >> 3U))),3);
        tracep->fullCData(oldp+420,((7U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid))),3);
        tracep->fullCData(oldp+421,((3U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid) 
                                           >> 3U))),3);
        tracep->fullBit(oldp+422,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty));
        tracep->fullBit(oldp+423,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full));
        tracep->fullBit(oldp+424,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_empty));
        tracep->fullBit(oldp+425,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full));
        tracep->fullCData(oldp+426,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_dir),3);
        tracep->fullCData(oldp+427,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir),3);
        tracep->fullCData(oldp+428,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_pre_sel),3);
        tracep->fullBit(oldp+429,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog));
        tracep->fullCData(oldp+430,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel_reg),3);
        tracep->fullCData(oldp+431,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel),3);
        tracep->fullIData(oldp+432,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int),32);
        tracep->fullBit(oldp+433,((1U & (~ ((0x1fe0U 
                                             == (0xffffU 
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
        tracep->fullCData(oldp+434,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir),3);
        tracep->fullCData(oldp+435,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir),3);
        tracep->fullCData(oldp+436,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_pre_sel),3);
        tracep->fullBit(oldp+437,((1U & (~ (((0x1fafU 
                                              == (0x1fffU 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r 
                                                     >> 0x10U))) 
                                             | (0x1fd0U 
                                                == 
                                                (0x1fffU 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r 
                                                    >> 0x10U)))) 
                                            | (0x1fe0U 
                                               == (0xffffU 
                                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r 
                                                      >> 0x10U))))))));
        tracep->fullIData(oldp+438,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int),32);
        tracep->fullCData(oldp+439,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram[0]),3);
        tracep->fullCData(oldp+440,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram[1]),3);
        tracep->fullCData(oldp+441,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr),2);
        tracep->fullCData(oldp+442,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr),2);
        tracep->fullBit(oldp+443,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr))));
        tracep->fullBit(oldp+444,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr))));
        tracep->fullIData(oldp+445,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__i),32);
        tracep->fullCData(oldp+446,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram[0]),3);
        tracep->fullCData(oldp+447,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram[1]),3);
        tracep->fullCData(oldp+448,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr),2);
        tracep->fullCData(oldp+449,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr),2);
        tracep->fullBit(oldp+450,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr))));
        tracep->fullBit(oldp+451,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr))));
        tracep->fullIData(oldp+452,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__i),32);
        tracep->fullBit(oldp+453,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant) 
                                   & ((0U == (0x3fU 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                                 >> 0xeU)))
                                       ? (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_enab)
                                       : ((0U != (0x3fU 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                                     >> 0xeU))) 
                                          & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab))))));
        tracep->fullIData(oldp+454,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)
                                      ? ((((0U != (0x3fU 
                                                   & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                                      >> 0xeU)))
                                            ? (0xffffffU 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__REG_DAT_T 
                                                  >> 8U))
                                            : 0U) << 8U) 
                                         | (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datao))
                                      : 0U)),32);
        tracep->fullBit(oldp+455,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant));
        tracep->fullBit(oldp+456,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ));
        tracep->fullBit(oldp+457,(((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)) 
                                   & ((0U == (0x3fU 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                                 >> 0xeU)))
                                       ? (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_enab)
                                       : ((0U != (0x3fU 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                                     >> 0xeU))) 
                                          & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab))))));
        tracep->fullBit(oldp+458,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr));
        tracep->fullBit(oldp+459,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu));
        tracep->fullBit(oldp+460,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu));
        tracep->fullIData(oldp+461,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr),20);
        tracep->fullCData(oldp+462,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datai_cpu),8);
        tracep->fullCData(oldp+463,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datao_cpu),8);
        tracep->fullBit(oldp+464,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_word_trans_cpu));
        tracep->fullIData(oldp+465,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)
                                      ? 0U : ((0U != 
                                               (0x3fU 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                                   >> 0xeU)))
                                               ? (0xffffffU 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__REG_DAT_T 
                                                     >> 8U))
                                               : 0U))),24);
        tracep->fullIData(oldp+466,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_high_24b_wr),24);
        tracep->fullBit(oldp+467,((0U == (0x3fU & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                                   >> 0xeU)))));
        tracep->fullBit(oldp+468,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_enab));
        tracep->fullBit(oldp+469,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw));
        tracep->fullBit(oldp+470,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_psel));
        tracep->fullIData(oldp+471,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr),20);
        tracep->fullCData(oldp+472,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai),8);
        tracep->fullCData(oldp+473,((0xffU & ((4U & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)
                                               ? ((2U 
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
                                               : ((2U 
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
        tracep->fullBit(oldp+474,((0U != (0x3fU & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                                   >> 0xeU)))));
        tracep->fullBit(oldp+475,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab));
        tracep->fullBit(oldp+476,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel));
        tracep->fullIData(oldp+477,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_datai),32);
        tracep->fullIData(oldp+478,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__REG_DAT_T),32);
        tracep->fullBit(oldp+479,((1U & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)))));
        tracep->fullBit(oldp+480,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_ready));
        tracep->fullBit(oldp+481,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd));
        tracep->fullCData(oldp+482,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm),4);
        tracep->fullCData(oldp+483,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb),4);
        tracep->fullCData(oldp+484,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb),4);
        tracep->fullIData(oldp+485,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32),32);
        tracep->fullIData(oldp+486,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32),32);
        tracep->fullCData(oldp+487,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count),3);
        tracep->fullCData(oldp+488,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size),3);
        tracep->fullCData(oldp+489,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_wr_size),3);
        tracep->fullBit(oldp+490,(((0U == (0x3fU & 
                                           (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                            >> 0xeU)))
                                    ? (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_enab)
                                    : ((0U != (0x3fU 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                                  >> 0xeU))) 
                                       & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab)))));
        tracep->fullBit(oldp+491,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_psel));
        tracep->fullBit(oldp+492,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_enab));
        tracep->fullIData(oldp+493,((0xffffffU & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)
                                                   ? 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_wdata_dma 
                                                   >> 8U)
                                                   : vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_high_24b_wr))),24);
        tracep->fullIData(oldp+494,(((0U != (0x3fU 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                                >> 0xeU)))
                                      ? (0xffffffU 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__REG_DAT_T 
                                            >> 8U))
                                      : 0U)),24);
        tracep->fullCData(oldp+495,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datao),8);
        tracep->fullCData(oldp+496,((0xffU & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)),8);
        tracep->fullBit(oldp+497,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we));
        tracep->fullBit(oldp+498,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__re));
        tracep->fullBit(oldp+499,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__rx_en));
        tracep->fullBit(oldp+500,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__tx2rx_en));
        tracep->fullBit(oldp+501,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode));
        tracep->fullCData(oldp+502,((7U & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)),3);
        tracep->fullBit(oldp+503,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__enable));
        tracep->fullBit(oldp+504,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__srx_pad));
        tracep->fullCData(oldp+505,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier),4);
        tracep->fullCData(oldp+506,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir),4);
        tracep->fullCData(oldp+507,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fcr),2);
        tracep->fullCData(oldp+508,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr),5);
        tracep->fullBit(oldp+509,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__infrared));
        tracep->fullBit(oldp+510,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_pol));
        tracep->fullCData(oldp+511,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr),8);
        tracep->fullCData(oldp+512,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr),8);
        tracep->fullIData(oldp+513,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl),24);
        tracep->fullBit(oldp+514,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__start_dlc));
        tracep->fullBit(oldp+515,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask_d));
        tracep->fullBit(oldp+516,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset));
        tracep->fullSData(oldp+517,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc),16);
        tracep->fullCData(oldp+518,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__trigger_level),4);
        tracep->fullBit(oldp+519,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_reset));
        tracep->fullBit(oldp+520,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tx_reset));
        tracep->fullBit(oldp+521,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                                         >> 7U))));
        tracep->fullBit(oldp+522,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                                         >> 2U))));
        tracep->fullBit(oldp+523,((1U & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                                            >> 2U)))));
        tracep->fullBit(oldp+524,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_reg));
        tracep->fullBit(oldp+525,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_en_reg));
        tracep->fullCData(oldp+526,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg),8);
        tracep->fullCData(oldp+527,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fi_di_reg),8);
        tracep->fullCData(oldp+528,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count),8);
        tracep->fullCData(oldp+529,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__repeat_reg),3);
        tracep->fullBit(oldp+530,((0U == (3U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))));
        tracep->fullBit(oldp+531,((1U == (3U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))));
        tracep->fullBit(oldp+532,((2U == (3U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))));
        tracep->fullBit(oldp+533,((3U == (3U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))));
        tracep->fullBit(oldp+534,((((0U == (3U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg))) 
                                    | (1U == (3U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))) 
                                   | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode) 
                                      & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                                            >> 2U))))));
        tracep->fullBit(oldp+535,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                                         >> 3U))));
        tracep->fullBit(oldp+536,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                         >> 4U))));
        tracep->fullBit(oldp+537,((1U & (((0x10U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr))
                                           ? ((0xcU 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                  << 2U)) 
                                              | ((2U 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                     >> 1U)) 
                                                 | (1U 
                                                    & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                       >> 3U))))
                                           : ((8U & 
                                               ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                                << 1U)) 
                                              | ((4U 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                                     << 1U)) 
                                                 | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                                    << 1U)))) 
                                         >> 3U))));
        tracep->fullBit(oldp+538,((1U & (((0x10U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr))
                                           ? ((0xcU 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                  << 2U)) 
                                              | ((2U 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                     >> 1U)) 
                                                 | (1U 
                                                    & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                       >> 3U))))
                                           : ((8U & 
                                               ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                                << 1U)) 
                                              | ((4U 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                                     << 1U)) 
                                                 | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                                    << 1U)))) 
                                         >> 2U))));
        tracep->fullBit(oldp+539,((1U & (((0x10U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr))
                                           ? ((0xcU 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                  << 2U)) 
                                              | ((2U 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                     >> 1U)) 
                                                 | (1U 
                                                    & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                       >> 3U))))
                                           : ((8U & 
                                               ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                                << 1U)) 
                                              | ((4U 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                                     << 1U)) 
                                                 | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                                    << 1U)))) 
                                         >> 1U))));
        tracep->fullBit(oldp+540,((1U & ((0x10U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr))
                                          ? ((0xcU 
                                              & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                 << 2U)) 
                                             | ((2U 
                                                 & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                    >> 1U)) 
                                                | (1U 
                                                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                      >> 3U))))
                                          : ((8U & 
                                              ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                               << 1U)) 
                                             | ((4U 
                                                 & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                                    << 1U)) 
                                                | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                                   << 1U)))))));
        tracep->fullCData(oldp+541,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr),8);
        tracep->fullBit(oldp+542,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0));
        tracep->fullBit(oldp+543,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_overrun));
        tracep->fullBit(oldp+544,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_data_out) 
                                         >> 1U))));
        tracep->fullBit(oldp+545,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_data_out))));
        tracep->fullBit(oldp+546,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_data_out) 
                                         >> 2U))));
        tracep->fullBit(oldp+547,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5));
        tracep->fullBit(oldp+548,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6));
        tracep->fullBit(oldp+549,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7));
        tracep->fullBit(oldp+550,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0r));
        tracep->fullBit(oldp+551,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr1r));
        tracep->fullBit(oldp+552,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr2r));
        tracep->fullBit(oldp+553,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr3r));
        tracep->fullBit(oldp+554,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr4r));
        tracep->fullBit(oldp+555,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5r));
        tracep->fullBit(oldp+556,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6r));
        tracep->fullBit(oldp+557,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7r));
        tracep->fullBit(oldp+558,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask));
        tracep->fullBit(oldp+559,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int));
        tracep->fullBit(oldp+560,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int));
        tracep->fullBit(oldp+561,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int));
        tracep->fullBit(oldp+562,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int));
        tracep->fullBit(oldp+563,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int));
        tracep->fullBit(oldp+564,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_push));
        tracep->fullBit(oldp+565,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop));
        tracep->fullSData(oldp+566,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_data_out),11);
        tracep->fullBit(oldp+567,((0U != ((((((((((
                                                   (((((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
        tracep->fullCData(oldp+568,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count),5);
        tracep->fullCData(oldp+569,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count),5);
        tracep->fullCData(oldp+570,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate),3);
        tracep->fullCData(oldp+571,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate),4);
        tracep->fullSData(oldp+572,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t),10);
        tracep->fullBit(oldp+573,((1U & (~ (IData)(
                                                   (0U 
                                                    != (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt)))))));
        tracep->fullCData(oldp+574,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt),8);
        tracep->fullCData(oldp+575,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value),8);
        tracep->fullBit(oldp+576,((1U & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode)) 
                                         | ((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate)) 
                                            & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time) 
                                                   == 
                                                   (7U 
                                                    & ((IData)(1U) 
                                                       + (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__repeat_reg))))) 
                                               | (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error))))))));
        tracep->fullBit(oldp+577,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time) 
                                     == (7U & ((IData)(1U) 
                                               + (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__repeat_reg)))) 
                                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode)) 
                                   & (2U == (3U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg))))));
        tracep->fullBit(oldp+578,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_out));
        tracep->fullBit(oldp+579,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_in));
        tracep->fullBit(oldp+580,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_push_pulse));
        tracep->fullBit(oldp+581,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask_condition));
        tracep->fullBit(oldp+582,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir_read));
        tracep->fullBit(oldp+583,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr_read));
        tracep->fullBit(oldp+584,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fifo_read));
        tracep->fullBit(oldp+585,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fifo_write));
        tracep->fullCData(oldp+586,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__delayed_modem_signals),4);
        tracep->fullBit(oldp+587,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0_d));
        tracep->fullBit(oldp+588,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr1_d));
        tracep->fullBit(oldp+589,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr2_d));
        tracep->fullBit(oldp+590,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr3_d));
        tracep->fullBit(oldp+591,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr4_d));
        tracep->fullBit(oldp+592,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5_d));
        tracep->fullBit(oldp+593,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6_d));
        tracep->fullBit(oldp+594,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7_d));
        tracep->fullSData(oldp+595,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_cnt),9);
        tracep->fullSData(oldp+596,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_next),9);
        tracep->fullBit(oldp+597,((1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_cnt) 
                                          ^ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_next)) 
                                         >> 8U))));
        tracep->fullBit(oldp+598,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_d));
        tracep->fullBit(oldp+599,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_d));
        tracep->fullBit(oldp+600,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_d));
        tracep->fullBit(oldp+601,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_d));
        tracep->fullBit(oldp+602,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_d));
        tracep->fullBit(oldp+603,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int) 
                                   & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_d)))));
        tracep->fullBit(oldp+604,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int) 
                                   & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_d)))));
        tracep->fullBit(oldp+605,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int) 
                                   & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_d)))));
        tracep->fullBit(oldp+606,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int) 
                                   & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_d)))));
        tracep->fullBit(oldp+607,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int) 
                                   & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_d)))));
        tracep->fullBit(oldp+608,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_pnd));
        tracep->fullBit(oldp+609,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_pnd));
        tracep->fullBit(oldp+610,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_pnd));
        tracep->fullBit(oldp+611,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_pnd));
        tracep->fullBit(oldp+612,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_pnd));
        tracep->fullBit(oldp+613,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__d1_fifo_read));
        tracep->fullBit(oldp+614,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__enable) 
                                   & (((0U == (3U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg))) 
                                       | (1U == (3U 
                                                 & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode) 
                                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                                               >> 2U)))))));
        tracep->fullCData(oldp+615,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter),5);
        tracep->fullCData(oldp+616,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter),3);
        tracep->fullCData(oldp+617,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__shift_out),7);
        tracep->fullBit(oldp+618,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp));
        tracep->fullBit(oldp+619,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor));
        tracep->fullBit(oldp+620,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_pop));
        tracep->fullBit(oldp+621,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_out));
        tracep->fullBit(oldp+622,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error));
        tracep->fullCData(oldp+623,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time),3);
        tracep->fullCData(oldp+624,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_out),8);
        tracep->fullBit(oldp+625,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_overrun));
        tracep->fullCData(oldp+626,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_bak),8);
        tracep->fullCData(oldp+627,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
        tracep->fullCData(oldp+628,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
        tracep->fullCData(oldp+629,((0xfU & ((IData)(1U) 
                                             + (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
        tracep->fullCData(oldp+630,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
        tracep->fullCData(oldp+631,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
        tracep->fullCData(oldp+632,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
        tracep->fullCData(oldp+633,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
        tracep->fullCData(oldp+634,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
        tracep->fullCData(oldp+635,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
        tracep->fullCData(oldp+636,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
        tracep->fullCData(oldp+637,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
        tracep->fullCData(oldp+638,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
        tracep->fullCData(oldp+639,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
        tracep->fullCData(oldp+640,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
        tracep->fullCData(oldp+641,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
        tracep->fullCData(oldp+642,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
        tracep->fullCData(oldp+643,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
        tracep->fullCData(oldp+644,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
        tracep->fullCData(oldp+645,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
        tracep->fullBit(oldp+646,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__i_uart_sync_flops__DOT__flop_0));
        tracep->fullBit(oldp+647,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____Vcellinp__receiver__enable));
        tracep->fullCData(oldp+648,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16),4);
        tracep->fullCData(oldp+649,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rbit_counter),3);
        tracep->fullCData(oldp+650,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift),8);
        tracep->fullBit(oldp+651,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity));
        tracep->fullBit(oldp+652,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_error));
        tracep->fullBit(oldp+653,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rframing_error));
        tracep->fullBit(oldp+654,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rbit_in));
        tracep->fullBit(oldp+655,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_xor));
        tracep->fullCData(oldp+656,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b),8);
        tracep->fullBit(oldp+657,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push_q));
        tracep->fullSData(oldp+658,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_data_in),11);
        tracep->fullBit(oldp+659,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push));
        tracep->fullBit(oldp+660,((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b))));
        tracep->fullBit(oldp+661,((7U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16))));
        tracep->fullBit(oldp+662,((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16))));
        tracep->fullBit(oldp+663,((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16))));
        tracep->fullCData(oldp+664,((0xfU & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16) 
                                             - (IData)(1U)))),4);
        tracep->fullSData(oldp+665,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value),10);
        tracep->fullCData(oldp+666,((0xffU & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value) 
                                              >> 2U))),8);
        tracep->fullCData(oldp+667,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__data8_out),8);
        tracep->fullCData(oldp+668,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
        tracep->fullCData(oldp+669,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
        tracep->fullCData(oldp+670,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
        tracep->fullCData(oldp+671,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
        tracep->fullCData(oldp+672,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
        tracep->fullCData(oldp+673,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
        tracep->fullCData(oldp+674,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
        tracep->fullCData(oldp+675,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
        tracep->fullCData(oldp+676,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
        tracep->fullCData(oldp+677,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
        tracep->fullCData(oldp+678,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
        tracep->fullCData(oldp+679,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
        tracep->fullCData(oldp+680,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
        tracep->fullCData(oldp+681,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
        tracep->fullCData(oldp+682,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
        tracep->fullCData(oldp+683,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
        tracep->fullCData(oldp+684,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
        tracep->fullCData(oldp+685,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
        tracep->fullCData(oldp+686,((0xfU & ((IData)(1U) 
                                             + (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
        tracep->fullCData(oldp+687,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                    [0U]),3);
        tracep->fullCData(oldp+688,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                    [1U]),3);
        tracep->fullCData(oldp+689,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                    [2U]),3);
        tracep->fullCData(oldp+690,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                    [3U]),3);
        tracep->fullCData(oldp+691,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                    [4U]),3);
        tracep->fullCData(oldp+692,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                    [5U]),3);
        tracep->fullCData(oldp+693,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                    [6U]),3);
        tracep->fullCData(oldp+694,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                    [7U]),3);
        tracep->fullCData(oldp+695,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                    [8U]),3);
        tracep->fullCData(oldp+696,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                    [9U]),3);
        tracep->fullCData(oldp+697,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                    [0xaU]),3);
        tracep->fullCData(oldp+698,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                    [0xbU]),3);
        tracep->fullCData(oldp+699,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                    [0xcU]),3);
        tracep->fullCData(oldp+700,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                    [0xdU]),3);
        tracep->fullCData(oldp+701,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                    [0xeU]),3);
        tracep->fullCData(oldp+702,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                    [0xfU]),3);
        tracep->fullCData(oldp+703,((0xffU & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_data_in) 
                                              >> 3U))),8);
        tracep->fullCData(oldp+704,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
        tracep->fullCData(oldp+705,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
        tracep->fullCData(oldp+706,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
        tracep->fullCData(oldp+707,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
        tracep->fullCData(oldp+708,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
        tracep->fullCData(oldp+709,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
        tracep->fullCData(oldp+710,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
        tracep->fullCData(oldp+711,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
        tracep->fullCData(oldp+712,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
        tracep->fullCData(oldp+713,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
        tracep->fullCData(oldp+714,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
        tracep->fullCData(oldp+715,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
        tracep->fullCData(oldp+716,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
        tracep->fullCData(oldp+717,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
        tracep->fullCData(oldp+718,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
        tracep->fullCData(oldp+719,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
        tracep->fullBit(oldp+720,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_int));
        tracep->fullSData(oldp+721,((0x7ffU & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)),11);
        tracep->fullCData(oldp+722,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r0),4);
        tracep->fullCData(oldp+723,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r1),4);
        tracep->fullCData(oldp+724,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_type_r1),2);
        tracep->fullCData(oldp+725,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_type_r2),2);
        tracep->fullSData(oldp+726,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_c),14);
        tracep->fullIData(oldp+727,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r),25);
        tracep->fullIData(oldp+728,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_op_num),32);
        tracep->fullIData(oldp+729,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter),32);
        tracep->fullIData(oldp+730,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0),32);
        tracep->fullIData(oldp+731,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map1),32);
        tracep->fullIData(oldp+732,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_rdy_map0),32);
        tracep->fullIData(oldp+733,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_rdy_map1),32);
        tracep->fullIData(oldp+734,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command),32);
        tracep->fullSData(oldp+735,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing),16);
        tracep->fullQData(oldp+736,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__addr_in_die),38);
        tracep->fullCData(oldp+738,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE),5);
        tracep->fullIData(oldp+739,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM),32);
        tracep->fullSData(oldp+740,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT),14);
        tracep->fullSData(oldp+741,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT),14);
        tracep->fullBit(oldp+742,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_clr_ack));
        tracep->fullBit(oldp+743,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE));
        tracep->fullBit(oldp+744,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_));
        tracep->fullSData(oldp+745,((0x3fffU & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                >> 0x10U))),14);
        tracep->fullCData(oldp+746,((7U & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+747,((0xfU & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                             >> 8U))),4);
        tracep->fullBit(oldp+748,((1U & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                         >> 8U))));
        tracep->fullBit(oldp+749,((1U & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                         >> 9U))));
        tracep->fullBit(oldp+750,((1U & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                         >> 0xdU))));
        tracep->fullBit(oldp+751,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
                                   & (0x40U == (0x7ffU 
                                                & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)))));
        tracep->fullBit(oldp+752,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY));
        tracep->fullBit(oldp+753,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT0));
        tracep->fullBit(oldp+754,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT1));
        tracep->fullBit(oldp+755,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT2));
        tracep->fullBit(oldp+756,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT3));
        tracep->fullBit(oldp+757,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
                                   & (0x10U == (0x7ffU 
                                                & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)))));
        tracep->fullBit(oldp+758,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
                                   & (0x14U == (0x7ffU 
                                                & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)))));
        tracep->fullBit(oldp+759,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT6));
        tracep->fullBit(oldp+760,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT7));
        tracep->fullBit(oldp+761,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT8));
        tracep->fullBit(oldp+762,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT9));
        tracep->fullBit(oldp+763,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT10));
        tracep->fullBit(oldp+764,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT11));
        tracep->fullBit(oldp+765,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT));
        tracep->fullBit(oldp+766,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_cmd_valid));
        tracep->fullCData(oldp+767,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status),8);
        tracep->fullCData(oldp+768,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_number),2);
        tracep->fullQData(oldp+769,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM),48);
        tracep->fullIData(oldp+771,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD),32);
        tracep->fullCData(oldp+772,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_pre_o),4);
        tracep->fullCData(oldp+773,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY_post_i),4);
        tracep->fullCData(oldp+774,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer),2);
        tracep->fullCData(oldp+775,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT),3);
        tracep->fullCData(oldp+776,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM),8);
        tracep->fullCData(oldp+777,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM),8);
        tracep->fullCData(oldp+778,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND),8);
        tracep->fullCData(oldp+779,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE),5);
        tracep->fullCData(oldp+780,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM),3);
        tracep->fullSData(oldp+781,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count),14);
        tracep->fullQData(oldp+782,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR),38);
        tracep->fullIData(oldp+784,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_I_WR),32);
        tracep->fullBit(oldp+785,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO));
        tracep->fullBit(oldp+786,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ACK));
        tracep->fullBit(oldp+787,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE));
        tracep->fullBit(oldp+788,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ERASE_SERIAL));
        tracep->fullBit(oldp+789,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half));
        tracep->fullBit(oldp+790,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob));
        tracep->fullQData(oldp+791,((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst)) 
                                      << 0x2bU) | (
                                                   ((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arsize)) 
                                                    << 0x28U) 
                                                   | (((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen)) 
                                                       << 0x24U) 
                                                      | (((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)) 
                                                          << 4U) 
                                                         | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arid))))))),45);
        tracep->fullIData(oldp+793,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr_incr),32);
        tracep->fullIData(oldp+794,(((((- (IData)((0U 
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
        tracep->fullIData(oldp+795,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr_wrap),32);
        tracep->fullCData(oldp+796,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst),2);
        tracep->fullBit(oldp+797,((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst))));
        tracep->fullBit(oldp+798,((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst))));
        tracep->fullBit(oldp+799,((2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst))));
        tracep->fullCData(oldp+800,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arid),4);
        tracep->fullCData(oldp+801,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen),4);
        tracep->fullBit(oldp+802,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen_last));
        tracep->fullCData(oldp+803,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arsize),3);
        tracep->fullBit(oldp+804,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid));
        tracep->fullQData(oldp+805,((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r)) 
                                      << 0xdU) | (QData)((IData)(
                                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_size_r) 
                                                                  << 8U))))),45);
        tracep->fullQData(oldp+807,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas),45);
        tracep->fullIData(oldp+809,((IData)((vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas 
                                             >> 0xdU))),32);
        tracep->fullCData(oldp+810,((3U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas 
                                                   >> 0xbU)))),2);
        tracep->fullCData(oldp+811,((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas))),4);
        tracep->fullCData(oldp+812,((0xfU & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas 
                                                     >> 4U)))),4);
        tracep->fullCData(oldp+813,((7U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas 
                                                   >> 8U)))),3);
        tracep->fullBit(oldp+814,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_valid));
        tracep->fullCData(oldp+815,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rcur),4);
        tracep->fullQData(oldp+816,((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)) 
                                      << 0xdU) | (QData)((IData)(
                                                                 (((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst) 
                                                                   << 0xbU) 
                                                                  | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awsize) 
                                                                      << 8U) 
                                                                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awlen) 
                                                                         << 4U) 
                                                                        | (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awid)))))))),45);
        tracep->fullIData(oldp+818,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_incr),32);
        tracep->fullIData(oldp+819,(((((- (IData)((0U 
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
        tracep->fullIData(oldp+820,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_wrap),32);
        tracep->fullCData(oldp+821,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst),2);
        tracep->fullBit(oldp+822,((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst))));
        tracep->fullBit(oldp+823,((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst))));
        tracep->fullBit(oldp+824,((2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst))));
        tracep->fullCData(oldp+825,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awid),4);
        tracep->fullCData(oldp+826,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awlen),4);
        tracep->fullCData(oldp+827,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awsize),3);
        tracep->fullBit(oldp+828,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid));
        tracep->fullQData(oldp+829,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas),45);
        tracep->fullIData(oldp+831,((IData)((vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas 
                                             >> 0xdU))),32);
        tracep->fullCData(oldp+832,((3U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas 
                                                   >> 0xbU)))),2);
        tracep->fullCData(oldp+833,((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas))),4);
        tracep->fullCData(oldp+834,((0xfU & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas 
                                                     >> 4U)))),4);
        tracep->fullCData(oldp+835,((7U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas 
                                                   >> 8U)))),3);
        tracep->fullBit(oldp+836,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_valid));
        tracep->fullBit(oldp+837,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_allow_out));
        tracep->fullBit(oldp+838,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid));
        tracep->fullCData(oldp+839,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_datas),4);
        tracep->fullBit(oldp+840,((1U & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid)))));
        tracep->fullCData(oldp+841,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wstrb),4);
        tracep->fullBit(oldp+842,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wlast));
        tracep->fullBit(oldp+843,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wvalid));
        tracep->fullQData(oldp+844,((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)) 
                                      << 0x2bU) | (
                                                   ((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arsize)) 
                                                    << 0x28U) 
                                                   | (((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen)) 
                                                       << 0x24U) 
                                                      | (((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr)) 
                                                          << 4U) 
                                                         | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arid))))))),45);
        tracep->fullIData(oldp+846,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr),32);
        tracep->fullIData(oldp+847,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_incr),32);
        tracep->fullIData(oldp+848,(((((- (IData)((0U 
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
        tracep->fullIData(oldp+849,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_wrap),32);
        tracep->fullCData(oldp+850,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst),2);
        tracep->fullBit(oldp+851,((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst))));
        tracep->fullBit(oldp+852,((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst))));
        tracep->fullBit(oldp+853,((2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst))));
        tracep->fullCData(oldp+854,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arid),4);
        tracep->fullCData(oldp+855,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen),4);
        tracep->fullBit(oldp+856,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen_last));
        tracep->fullCData(oldp+857,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arsize),3);
        tracep->fullBit(oldp+858,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid));
        tracep->fullQData(oldp+859,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas),45);
        tracep->fullIData(oldp+861,((IData)((vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                                             >> 0xdU))),32);
        tracep->fullCData(oldp+862,((3U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                                                   >> 0xbU)))),2);
        tracep->fullCData(oldp+863,((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas))),4);
        tracep->fullCData(oldp+864,((0xfU & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                                                     >> 4U)))),4);
        tracep->fullCData(oldp+865,((7U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                                                   >> 8U)))),3);
        tracep->fullBit(oldp+866,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid));
        tracep->fullCData(oldp+867,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur),4);
        tracep->fullQData(oldp+868,((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr)) 
                                      << 0xdU) | (QData)((IData)(
                                                                 (((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst) 
                                                                   << 0xbU) 
                                                                  | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awsize) 
                                                                      << 8U) 
                                                                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awlen) 
                                                                         << 4U) 
                                                                        | (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awid)))))))),45);
        tracep->fullIData(oldp+870,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr),32);
        tracep->fullIData(oldp+871,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_incr),32);
        tracep->fullIData(oldp+872,(((((- (IData)((0U 
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
        tracep->fullIData(oldp+873,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_wrap),32);
        tracep->fullCData(oldp+874,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst),2);
        tracep->fullBit(oldp+875,((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst))));
        tracep->fullBit(oldp+876,((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst))));
        tracep->fullBit(oldp+877,((2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst))));
        tracep->fullCData(oldp+878,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awid),4);
        tracep->fullCData(oldp+879,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awlen),4);
        tracep->fullCData(oldp+880,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awsize),3);
        tracep->fullBit(oldp+881,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid));
        tracep->fullQData(oldp+882,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas),45);
        tracep->fullIData(oldp+884,((IData)((vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                             >> 0xdU))),32);
        tracep->fullCData(oldp+885,((3U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                                   >> 0xbU)))),2);
        tracep->fullCData(oldp+886,((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas))),4);
        tracep->fullCData(oldp+887,((0xfU & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                                     >> 4U)))),4);
        tracep->fullCData(oldp+888,((7U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                                   >> 8U)))),3);
        tracep->fullBit(oldp+889,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_valid));
        tracep->fullBit(oldp+890,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_allow_out));
        tracep->fullBit(oldp+891,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid));
        tracep->fullCData(oldp+892,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_datas),4);
        tracep->fullBit(oldp+893,((1U & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid)))));
        tracep->fullCData(oldp+894,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wstrb),4);
        tracep->fullIData(oldp+895,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wdata),32);
        tracep->fullBit(oldp+896,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wlast));
        tracep->fullBit(oldp+897,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wvalid));
        tracep->fullIData(oldp+898,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__cr0),32);
        tracep->fullIData(oldp+899,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__cr1),32);
        tracep->fullIData(oldp+900,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__cr2),32);
        tracep->fullIData(oldp+901,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__cr3),32);
        tracep->fullIData(oldp+902,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__cr4),32);
        tracep->fullIData(oldp+903,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__cr5),32);
        tracep->fullIData(oldp+904,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__cr6),32);
        tracep->fullIData(oldp+905,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__cr7),32);
        tracep->fullIData(oldp+906,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__led_data),32);
        tracep->fullIData(oldp+907,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__led_rg0_data),32);
        tracep->fullIData(oldp+908,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__led_rg1_data),32);
        tracep->fullIData(oldp+909,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__num_data),32);
        tracep->fullIData(oldp+910,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__btn_key_r),32);
        tracep->fullIData(oldp+911,(((2U & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r)) 
                                            << 1U)) 
                                     | (1U & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r))))),32);
        tracep->fullCData(oldp+912,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__confreg_uart_data),8);
        tracep->fullBit(oldp+913,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__confreg_uart_valid));
        tracep->fullIData(oldp+914,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__timer_r2),32);
        tracep->fullIData(oldp+915,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__simu_flag),32);
        tracep->fullIData(oldp+916,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__io_simu),32);
        tracep->fullCData(oldp+917,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__virtual_uart_data),8);
        tracep->fullBit(oldp+918,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__open_trace));
        tracep->fullBit(oldp+919,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__num_monitor));
        tracep->fullBit(oldp+920,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin));
        tracep->fullBit(oldp+921,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r1));
        tracep->fullBit(oldp+922,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r2));
        tracep->fullBit(oldp+923,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r3));
        tracep->fullBit(oldp+924,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r1));
        tracep->fullBit(oldp+925,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r2));
        tracep->fullIData(oldp+926,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r),32);
        tracep->fullIData(oldp+927,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r1),32);
        tracep->fullIData(oldp+928,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r2),32);
        tracep->fullIData(oldp+929,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__timer_r1),32);
        tracep->fullIData(oldp+930,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__timer),32);
        tracep->fullCData(oldp+931,((0xffU & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata)),8);
        tracep->fullSData(oldp+932,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__btn_key_r),16);
        tracep->fullCData(oldp+933,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state),3);
        tracep->fullBit(oldp+934,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__key_flag));
        tracep->fullIData(oldp+935,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__key_count),20);
        tracep->fullCData(oldp+936,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state_count),4);
        tracep->fullBit(oldp+937,((1U & (vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__key_count 
                                         >> 0x13U))));
        tracep->fullBit(oldp+938,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r));
        tracep->fullBit(oldp+939,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r));
        tracep->fullBit(oldp+940,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__step0_flag));
        tracep->fullIData(oldp+941,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__step0_count),20);
        tracep->fullBit(oldp+942,((1U & (vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__step0_count 
                                         >> 0x13U))));
        tracep->fullBit(oldp+943,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__step1_flag));
        tracep->fullIData(oldp+944,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__step1_count),20);
        tracep->fullBit(oldp+945,((1U & (vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__step1_count 
                                         >> 0x13U))));
        tracep->fullIData(oldp+946,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__count),20);
        tracep->fullCData(oldp+947,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__scan_data),4);
        tracep->fullBit(oldp+948,((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req) 
                                    & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req_or))) 
                                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__data_back))));
        tracep->fullBit(oldp+949,((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req) 
                                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req_or)) 
                                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__data_back))));
        tracep->fullIData(oldp+950,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp_valid)
                                      ? ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp_valid)
                                          ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp
                                          : 0U) : vlTOPp->simu_top__DOT__soc__DOT__m0_rdata)),32);
        tracep->fullBit(oldp+951,((1U & ((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req)) 
                                           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__req_mem)) 
                                          & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                              >> 0x14U) 
                                             | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                                >> 0x15U))) 
                                         | (~ ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                                >> 0x14U) 
                                               | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                                  >> 0x15U)))))));
        tracep->fullIData(oldp+952,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid)
                                      ? ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid)
                                          ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp
                                          : 0U) : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData)),32);
        tracep->fullIData(oldp+953,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp_valid)
                                      ? ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp_valid)
                                          ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp
                                          : 0U) : vlTOPp->simu_top__DOT__soc__DOT__m0_rdata)),32);
        tracep->fullIData(oldp+954,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid)
                                      ? ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid)
                                          ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp
                                          : 0U) : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData)),32);
        tracep->fullBit(oldp+955,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_arvalid) 
                                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_arready))));
        tracep->fullBit(oldp+956,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_awvalid) 
                                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_awready))));
        tracep->fullBit(oldp+957,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_wvalid) 
                                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_wready))));
        tracep->fullIData(oldp+958,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[0]),32);
        tracep->fullIData(oldp+959,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[1]),32);
        tracep->fullIData(oldp+960,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[2]),32);
        tracep->fullIData(oldp+961,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[3]),32);
        tracep->fullIData(oldp+962,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[4]),32);
        tracep->fullBit(oldp+963,((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty)) 
                                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_wvalid)) 
                                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_wready))));
        tracep->fullBit(oldp+964,(((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_empty)) 
                                     & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_rvalid)) 
                                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_rready)) 
                                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_rlast))));
        tracep->fullBit(oldp+965,(((((8U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm)) 
                                     & (IData)(vlTOPp->simu_top__DOT__soc__DOT__apb_s_rlast)) 
                                    & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                       >> 2U)) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__apb_s_bvalid) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                                     >> 2U)))));
        tracep->fullCData(oldp+966,(((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm))
                                      ? ((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                                  | (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid)) 
                                                 >> 2U) 
                                                & ((~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr) 
                                                     | (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd))) 
                                                   & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)))))
                                          ? 2U : 1U)
                                      : ((2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm))
                                          ? ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr)
                                              ? 8U : 
                                             ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd)
                                               ? 8U
                                               : 2U))
                                          : ((8U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm))
                                              ? (((
                                                   ((8U 
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
        tracep->fullBit(oldp+967,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en) 
                                   & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen_last)))));
        tracep->fullBit(oldp+968,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop) 
                                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid))));
        tracep->fullBit(oldp+969,((1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                          >> 3U) | 
                                         (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rvalid))))));
        tracep->fullBit(oldp+970,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en) 
                                   & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wlast)))));
        tracep->fullBit(oldp+971,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) 
                                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid))));
        tracep->fullBit(oldp+972,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) 
                                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop) 
                                      | (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid))))));
        tracep->fullBit(oldp+973,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop) 
                                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid))));
        tracep->fullBit(oldp+974,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_en) 
                                   & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen_last)))));
        tracep->fullBit(oldp+975,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop) 
                                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid))));
        tracep->fullBit(oldp+976,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                         | (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rvalid))))));
        tracep->fullBit(oldp+977,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en) 
                                   & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wlast)))));
        tracep->fullBit(oldp+978,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) 
                                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid))));
        tracep->fullBit(oldp+979,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) 
                                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop) 
                                      | (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid))))));
        tracep->fullBit(oldp+980,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop) 
                                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid))));
        tracep->fullBit(oldp+981,(((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                   & (0x8000U == (0xffffU 
                                                  & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        tracep->fullBit(oldp+982,(((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                   & (0x8010U == (0xffffU 
                                                  & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        tracep->fullBit(oldp+983,(((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                   & (0x8020U == (0xffffU 
                                                  & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        tracep->fullBit(oldp+984,(((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                   & (0x8030U == (0xffffU 
                                                  & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        tracep->fullBit(oldp+985,(((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                   & (0x8040U == (0xffffU 
                                                  & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        tracep->fullBit(oldp+986,(((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                   & (0x8050U == (0xffffU 
                                                  & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        tracep->fullBit(oldp+987,(((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                   & (0x8060U == (0xffffU 
                                                  & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        tracep->fullBit(oldp+988,(((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                   & (0x8070U == (0xffffU 
                                                  & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        tracep->fullBit(oldp+989,(((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                   & (0xff00U == (0xffffU 
                                                  & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        tracep->fullBit(oldp+990,(((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                   & (0xff30U == (0xffffU 
                                                  & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        tracep->fullBit(oldp+991,(((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                   & (0xff40U == (0xffffU 
                                                  & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        tracep->fullBit(oldp+992,(((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                   & (0xf020U == (0xffffU 
                                                  & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        tracep->fullBit(oldp+993,(((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                   & (0xf030U == (0xffffU 
                                                  & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        tracep->fullBit(oldp+994,(((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                   & (0xf040U == (0xffffU 
                                                  & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        tracep->fullBit(oldp+995,(((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                   & (0xf050U == (0xffffU 
                                                  & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        tracep->fullIData(oldp+996,(vlTOPp->simu_top__DOT__soc__DOT__m0_rdata),32);
        tracep->fullBit(oldp+997,(vlTOPp->simu_top__DOT__soc__DOT__m0_awvalid));
        tracep->fullBit(oldp+998,(vlTOPp->simu_top__DOT__soc__DOT__m0_wvalid));
        tracep->fullBit(oldp+999,(vlTOPp->simu_top__DOT__soc__DOT__m0_bready));
        tracep->fullBit(oldp+1000,(vlTOPp->simu_top__DOT__soc__DOT__m0_arvalid));
        tracep->fullBit(oldp+1001,(vlTOPp->simu_top__DOT__soc__DOT__m0_rready));
        tracep->fullBit(oldp+1002,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid))));
        tracep->fullBit(oldp+1003,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid))));
        tracep->fullBit(oldp+1004,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready))));
        tracep->fullBit(oldp+1005,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid))));
        tracep->fullBit(oldp+1006,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready))));
        tracep->fullBit(oldp+1007,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                          >> 3U))));
        tracep->fullBit(oldp+1008,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
                                          >> 3U))));
        tracep->fullBit(oldp+1009,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                          >> 3U))));
        tracep->fullBit(oldp+1010,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                          >> 3U))));
        tracep->fullBit(oldp+1011,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                          >> 3U))));
        tracep->fullBit(oldp+1012,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                          >> 2U))));
        tracep->fullBit(oldp+1013,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
                                          >> 2U))));
        tracep->fullBit(oldp+1014,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                          >> 2U))));
        tracep->fullBit(oldp+1015,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                          >> 2U))));
        tracep->fullBit(oldp+1016,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                          >> 2U))));
        tracep->fullBit(oldp+1017,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en));
        tracep->fullCData(oldp+1018,(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen),4);
        tracep->fullBit(oldp+1019,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__req_inst));
        tracep->fullBit(oldp+1020,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_ok_inst));
        tracep->fullBit(oldp+1021,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__req_mem));
        tracep->fullBit(oldp+1022,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_allow_in));
        tracep->fullBit(oldp+1023,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_ready_go));
        tracep->fullBit(oldp+1024,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_allow_in));
        tracep->fullBit(oldp+1025,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_ready_go));
        tracep->fullBit(oldp+1026,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_valid_in));
        tracep->fullBit(oldp+1027,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_allow_in));
        tracep->fullBit(oldp+1028,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_allow_in));
        tracep->fullBit(oldp+1029,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_valid_in));
        tracep->fullBit(oldp+1030,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_ready_go));
        tracep->fullBit(oldp+1031,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_valid_in));
        tracep->fullBit(oldp+1032,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__divNeed) 
                                          >> 1U))));
        tracep->fullBit(oldp+1033,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__divNeed))));
        tracep->fullIData(oldp+1034,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData),32);
        tracep->fullBit(oldp+1035,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT____Vcellinp__myDiv__clk));
        tracep->fullBit(oldp+1036,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__divNeed))));
        tracep->fullBit(oldp+1037,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__data_back));
        tracep->fullBit(oldp+1038,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                          >> 1U))));
        tracep->fullBit(oldp+1039,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
                                          >> 1U))));
        tracep->fullBit(oldp+1040,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                          >> 1U))));
        tracep->fullBit(oldp+1041,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                          >> 1U))));
        tracep->fullBit(oldp+1042,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                          >> 1U))));
        tracep->fullBit(oldp+1043,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                          >> 4U))));
        tracep->fullBit(oldp+1044,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
                                          >> 4U))));
        tracep->fullBit(oldp+1045,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                          >> 4U))));
        tracep->fullBit(oldp+1046,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                          >> 4U))));
        tracep->fullBit(oldp+1047,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                          >> 4U))));
        tracep->fullCData(oldp+1048,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid),5);
        tracep->fullCData(oldp+1049,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid),5);
        tracep->fullCData(oldp+1050,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready),5);
        tracep->fullCData(oldp+1051,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid),5);
        tracep->fullCData(oldp+1052,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready),5);
        tracep->fullBit(oldp+1053,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_dir_ins));
        tracep->fullBit(oldp+1054,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_dir_ins));
        tracep->fullBit(oldp+1055,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_cpu));
        tracep->fullBit(oldp+1056,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NANDtag));
        tracep->fullBit(oldp+1057,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_push));
        tracep->fullBit(oldp+1058,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop));
        tracep->fullBit(oldp+1059,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push));
        tracep->fullBit(oldp+1060,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_push));
        tracep->fullBit(oldp+1061,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_push));
        tracep->fullBit(oldp+1062,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop));
        tracep->fullBit(oldp+1063,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_push));
        tracep->fullBit(oldp+1064,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_push));
        tracep->fullBit(oldp+1065,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop));
        tracep->fullBit(oldp+1066,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_push));
        tracep->fullBit(oldp+1067,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en));
        tracep->fullBit(oldp+1068,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_go));
        tracep->fullBit(oldp+1069,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_push));
        tracep->fullBit(oldp+1070,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop));
        tracep->fullBit(oldp+1071,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_push));
        tracep->fullBit(oldp+1072,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_push));
        tracep->fullBit(oldp+1073,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_en));
        tracep->fullBit(oldp+1074,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_push));
        tracep->fullBit(oldp+1075,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop));
        tracep->fullBit(oldp+1076,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_push));
        tracep->fullBit(oldp+1077,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_push));
        tracep->fullBit(oldp+1078,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop));
        tracep->fullBit(oldp+1079,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_push));
        tracep->fullBit(oldp+1080,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en));
        tracep->fullBit(oldp+1081,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_go));
        tracep->fullBit(oldp+1082,((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen))));
        tracep->fullBit(oldp+1083,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__write_timer));
        tracep->fullBit(oldp+1084,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__write_uart_valid));
        tracep->fullCData(oldp+1085,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__next_state),3);
        tracep->fullSData(oldp+1086,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__btn_key_tmp),16);
        tracep->fullIData(oldp+1087,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluout_ex),32);
        tracep->fullIData(oldp+1088,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluout_ex),32);
        tracep->fullQData(oldp+1089,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__unnamedblk1__DOT__mul_result),64);
        tracep->fullQData(oldp+1091,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__unnamedblk2__DOT__mul_result),64);
        tracep->fullQData(oldp+1093,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__minuend_next),33);
        tracep->fullQData(oldp+1095,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__difference),33);
        tracep->fullBit(oldp+1097,((1U & (~ (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__difference 
                                                     >> 0x20U))))));
        tracep->fullBit(oldp+1098,(vlTOPp->DifftestInstrCommit__02Eclock));
        tracep->fullCData(oldp+1099,(vlTOPp->DifftestInstrCommit__02Ecoreid),8);
        tracep->fullCData(oldp+1100,(vlTOPp->DifftestInstrCommit__02Eindex),8);
        tracep->fullBit(oldp+1101,(vlTOPp->DifftestInstrCommit__02Evalid));
        tracep->fullQData(oldp+1102,(vlTOPp->DifftestInstrCommit__02Epc),64);
        tracep->fullIData(oldp+1104,(vlTOPp->instr),32);
        tracep->fullBit(oldp+1105,(vlTOPp->skip));
        tracep->fullBit(oldp+1106,(vlTOPp->is_TLBFILL));
        tracep->fullCData(oldp+1107,(vlTOPp->TLBFILL_index),5);
        tracep->fullBit(oldp+1108,(vlTOPp->is_CNTinst));
        tracep->fullQData(oldp+1109,(vlTOPp->timer_64_value),64);
        tracep->fullBit(oldp+1111,(vlTOPp->wen));
        tracep->fullCData(oldp+1112,(vlTOPp->wdest),8);
        tracep->fullQData(oldp+1113,(vlTOPp->wdata),64);
        tracep->fullBit(oldp+1115,(vlTOPp->csr_rstat));
        tracep->fullIData(oldp+1116,(vlTOPp->csr_data),32);
        tracep->fullBit(oldp+1117,(vlTOPp->DifftestExcpEvent__02Eclock));
        tracep->fullCData(oldp+1118,(vlTOPp->DifftestExcpEvent__02Ecoreid),8);
        tracep->fullBit(oldp+1119,(vlTOPp->excp_valid));
        tracep->fullBit(oldp+1120,(vlTOPp->eret));
        tracep->fullIData(oldp+1121,(vlTOPp->intrNo),32);
        tracep->fullIData(oldp+1122,(vlTOPp->cause),32);
        tracep->fullQData(oldp+1123,(vlTOPp->exceptionPC),64);
        tracep->fullIData(oldp+1125,(vlTOPp->exceptionInst),32);
        tracep->fullBit(oldp+1126,(vlTOPp->DifftestTrapEvent__02Eclock));
        tracep->fullCData(oldp+1127,(vlTOPp->DifftestTrapEvent__02Ecoreid),8);
        tracep->fullBit(oldp+1128,(vlTOPp->DifftestTrapEvent__02Evalid));
        tracep->fullCData(oldp+1129,(vlTOPp->code),3);
        tracep->fullQData(oldp+1130,(vlTOPp->DifftestTrapEvent__02Epc),64);
        tracep->fullQData(oldp+1132,(vlTOPp->cycleCnt),64);
        tracep->fullQData(oldp+1134,(vlTOPp->instrCnt),64);
        tracep->fullBit(oldp+1136,(vlTOPp->DifftestStoreEvent__02Eclock));
        tracep->fullCData(oldp+1137,(vlTOPp->DifftestStoreEvent__02Ecoreid),8);
        tracep->fullCData(oldp+1138,(vlTOPp->DifftestStoreEvent__02Eindex),8);
        tracep->fullCData(oldp+1139,(vlTOPp->DifftestStoreEvent__02Evalid),8);
        tracep->fullQData(oldp+1140,(vlTOPp->storePAddr),64);
        tracep->fullQData(oldp+1142,(vlTOPp->storeVAddr),64);
        tracep->fullQData(oldp+1144,(vlTOPp->storeData),64);
        tracep->fullBit(oldp+1146,(vlTOPp->DifftestLoadEvent__02Eclock));
        tracep->fullCData(oldp+1147,(vlTOPp->DifftestLoadEvent__02Ecoreid),8);
        tracep->fullCData(oldp+1148,(vlTOPp->DifftestLoadEvent__02Eindex),8);
        tracep->fullCData(oldp+1149,(vlTOPp->DifftestLoadEvent__02Evalid),8);
        tracep->fullQData(oldp+1150,(vlTOPp->paddr),64);
        tracep->fullQData(oldp+1152,(vlTOPp->vaddr),64);
        tracep->fullBit(oldp+1154,(vlTOPp->DifftestCSRRegState__02Eclock));
        tracep->fullCData(oldp+1155,(vlTOPp->DifftestCSRRegState__02Ecoreid),8);
        tracep->fullQData(oldp+1156,(vlTOPp->crmd),64);
        tracep->fullQData(oldp+1158,(vlTOPp->prmd),64);
        tracep->fullQData(oldp+1160,(vlTOPp->euen),64);
        tracep->fullQData(oldp+1162,(vlTOPp->ecfg),64);
        tracep->fullQData(oldp+1164,(vlTOPp->estat),64);
        tracep->fullQData(oldp+1166,(vlTOPp->era),64);
        tracep->fullQData(oldp+1168,(vlTOPp->badv),64);
        tracep->fullQData(oldp+1170,(vlTOPp->eentry),64);
        tracep->fullQData(oldp+1172,(vlTOPp->tlbidx),64);
        tracep->fullQData(oldp+1174,(vlTOPp->tlbehi),64);
        tracep->fullQData(oldp+1176,(vlTOPp->tlbelo0),64);
        tracep->fullQData(oldp+1178,(vlTOPp->tlbelo1),64);
        tracep->fullQData(oldp+1180,(vlTOPp->asid),64);
        tracep->fullQData(oldp+1182,(vlTOPp->pgdl),64);
        tracep->fullQData(oldp+1184,(vlTOPp->pgdh),64);
        tracep->fullQData(oldp+1186,(vlTOPp->save0),64);
        tracep->fullQData(oldp+1188,(vlTOPp->save1),64);
        tracep->fullQData(oldp+1190,(vlTOPp->save2),64);
        tracep->fullQData(oldp+1192,(vlTOPp->save3),64);
        tracep->fullQData(oldp+1194,(vlTOPp->tid),64);
        tracep->fullQData(oldp+1196,(vlTOPp->tcfg),64);
        tracep->fullQData(oldp+1198,(vlTOPp->tval),64);
        tracep->fullQData(oldp+1200,(vlTOPp->ticlr),64);
        tracep->fullQData(oldp+1202,(vlTOPp->llbctl),64);
        tracep->fullQData(oldp+1204,(vlTOPp->tlbrentry),64);
        tracep->fullQData(oldp+1206,(vlTOPp->dmw0),64);
        tracep->fullQData(oldp+1208,(vlTOPp->dmw1),64);
        tracep->fullBit(oldp+1210,(vlTOPp->DifftestGRegState__02Eclock));
        tracep->fullCData(oldp+1211,(vlTOPp->DifftestGRegState__02Ecoreid),8);
        tracep->fullQData(oldp+1212,(vlTOPp->gpr_0),64);
        tracep->fullQData(oldp+1214,(vlTOPp->gpr_1),64);
        tracep->fullQData(oldp+1216,(vlTOPp->gpr_2),64);
        tracep->fullQData(oldp+1218,(vlTOPp->gpr_3),64);
        tracep->fullQData(oldp+1220,(vlTOPp->gpr_4),64);
        tracep->fullQData(oldp+1222,(vlTOPp->gpr_5),64);
        tracep->fullQData(oldp+1224,(vlTOPp->gpr_6),64);
        tracep->fullQData(oldp+1226,(vlTOPp->gpr_7),64);
        tracep->fullQData(oldp+1228,(vlTOPp->gpr_8),64);
        tracep->fullQData(oldp+1230,(vlTOPp->gpr_9),64);
        tracep->fullQData(oldp+1232,(vlTOPp->gpr_10),64);
        tracep->fullQData(oldp+1234,(vlTOPp->gpr_11),64);
        tracep->fullQData(oldp+1236,(vlTOPp->gpr_12),64);
        tracep->fullQData(oldp+1238,(vlTOPp->gpr_13),64);
        tracep->fullQData(oldp+1240,(vlTOPp->gpr_14),64);
        tracep->fullQData(oldp+1242,(vlTOPp->gpr_15),64);
        tracep->fullQData(oldp+1244,(vlTOPp->gpr_16),64);
        tracep->fullQData(oldp+1246,(vlTOPp->gpr_17),64);
        tracep->fullQData(oldp+1248,(vlTOPp->gpr_18),64);
        tracep->fullQData(oldp+1250,(vlTOPp->gpr_19),64);
        tracep->fullQData(oldp+1252,(vlTOPp->gpr_20),64);
        tracep->fullQData(oldp+1254,(vlTOPp->gpr_21),64);
        tracep->fullQData(oldp+1256,(vlTOPp->gpr_22),64);
        tracep->fullQData(oldp+1258,(vlTOPp->gpr_23),64);
        tracep->fullQData(oldp+1260,(vlTOPp->gpr_24),64);
        tracep->fullQData(oldp+1262,(vlTOPp->gpr_25),64);
        tracep->fullQData(oldp+1264,(vlTOPp->gpr_26),64);
        tracep->fullQData(oldp+1266,(vlTOPp->gpr_27),64);
        tracep->fullQData(oldp+1268,(vlTOPp->gpr_28),64);
        tracep->fullQData(oldp+1270,(vlTOPp->gpr_29),64);
        tracep->fullQData(oldp+1272,(vlTOPp->gpr_30),64);
        tracep->fullQData(oldp+1274,(vlTOPp->gpr_31),64);
        tracep->fullBit(oldp+1276,(vlTOPp->aclk));
        tracep->fullBit(oldp+1277,(vlTOPp->aresetn));
        tracep->fullBit(oldp+1278,(vlTOPp->enable_delay));
        tracep->fullIData(oldp+1279,(vlTOPp->random_seed),23);
        tracep->fullBit(oldp+1280,(vlTOPp->ram_ren));
        tracep->fullIData(oldp+1281,(vlTOPp->ram_raddr),32);
        tracep->fullIData(oldp+1282,(vlTOPp->ram_rdata),32);
        tracep->fullCData(oldp+1283,(vlTOPp->ram_wen),4);
        tracep->fullIData(oldp+1284,(vlTOPp->ram_waddr),32);
        tracep->fullIData(oldp+1285,(vlTOPp->ram_wdata),32);
        tracep->fullIData(oldp+1286,(vlTOPp->debug0_wb_pc),32);
        tracep->fullBit(oldp+1287,(vlTOPp->debug0_wb_rf_wen));
        tracep->fullCData(oldp+1288,(vlTOPp->debug0_wb_rf_wnum),5);
        tracep->fullIData(oldp+1289,(vlTOPp->debug0_wb_rf_wdata),32);
        tracep->fullIData(oldp+1290,(vlTOPp->num_data),32);
        tracep->fullBit(oldp+1291,(vlTOPp->open_trace));
        tracep->fullBit(oldp+1292,(vlTOPp->num_monitor));
        tracep->fullCData(oldp+1293,(vlTOPp->confreg_uart_data),8);
        tracep->fullBit(oldp+1294,(vlTOPp->write_uart_valid));
        tracep->fullWData(oldp+1295,(vlTOPp->uart_ctr_bus),128);
        tracep->fullBit(oldp+1299,(vlTOPp->uart_rx));
        tracep->fullBit(oldp+1300,(vlTOPp->uart_tx));
        tracep->fullSData(oldp+1301,(vlTOPp->led),16);
        tracep->fullCData(oldp+1302,(vlTOPp->led_rg0),2);
        tracep->fullCData(oldp+1303,(vlTOPp->led_rg1),2);
        tracep->fullCData(oldp+1304,(vlTOPp->num_csn),8);
        tracep->fullCData(oldp+1305,(vlTOPp->num_a_g),7);
        tracep->fullCData(oldp+1306,(vlTOPp->btn_key_col),4);
        tracep->fullCData(oldp+1307,(vlTOPp->btn_key_row),4);
        tracep->fullCData(oldp+1308,(vlTOPp->btn_step),2);
        tracep->fullCData(oldp+1309,(vlTOPp->__SYM__switch),8);
        tracep->fullBit(oldp+1310,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_awready) 
                                    & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_aw) 
                                       | (~ (IData)(vlTOPp->enable_delay))))));
        tracep->fullBit(oldp+1311,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_wready) 
                                    & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_w) 
                                       | (~ (IData)(vlTOPp->enable_delay))))));
        tracep->fullBit(oldp+1312,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_bvalid) 
                                    & ((vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                        >> 2U) | (~ (IData)(vlTOPp->enable_delay))))));
        tracep->fullBit(oldp+1313,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_arready) 
                                    & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_ar) 
                                       | (~ (IData)(vlTOPp->enable_delay))))));
        tracep->fullBit(oldp+1314,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_rvalid) 
                                    & ((vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                        >> 3U) | (~ (IData)(vlTOPp->enable_delay))))));
        tracep->fullBit(oldp+1315,((1U & (~ (IData)(vlTOPp->aresetn)))));
        tracep->fullIData(oldp+1316,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divSigned)
                                       ? ((0x80000000U 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                                              ^ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex))
                                           ? (- vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_u)
                                           : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_u)
                                       : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_u)),32);
        tracep->fullIData(oldp+1317,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divSigned)
                                       ? ((0x80000000U 
                                           & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)
                                           ? (- vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__remainder_u)
                                           : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__remainder_u)
                                       : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__remainder_u)),32);
        tracep->fullIData(oldp+1318,(((0x80000000U 
                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                                          ^ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex))
                                       ? (- vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_u)
                                       : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_u)),32);
        tracep->fullIData(oldp+1319,(((0x80000000U 
                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)
                                       ? (- vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__remainder_u)
                                       : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__remainder_u)),32);
        tracep->fullBit(oldp+1320,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode)
                                           ? ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__rx_en)) 
                                              | (IData)(vlTOPp->uart_tx))
                                           : (IData)(vlTOPp->uart_rx)))));
        tracep->fullBit(oldp+1321,((1U & ((~ (IData)(vlTOPp->aresetn)) 
                                          | (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop)))));
        tracep->fullBit(oldp+1322,((1U & ((~ (IData)(vlTOPp->aresetn)) 
                                          | (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop)))));
        tracep->fullIData(oldp+1323,(vlTOPp->__SYM__switch),32);
        tracep->fullIData(oldp+1324,(((0x8000U & ((IData)(vlTOPp->__SYM__switch) 
                                                  << 8U)) 
                                      | ((0x2000U & 
                                          ((IData)(vlTOPp->__SYM__switch) 
                                           << 7U)) 
                                         | ((0x800U 
                                             & ((IData)(vlTOPp->__SYM__switch) 
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
        tracep->fullBit(oldp+1325,(((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                    & (~ (IData)((0xfU 
                                                  == (IData)(vlTOPp->btn_key_row)))))));
        tracep->fullBit(oldp+1326,(((7U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                    & (0xfU == (IData)(vlTOPp->btn_key_row)))));
        tracep->fullBit(oldp+1327,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r) 
                                    & (~ (IData)(vlTOPp->btn_step)))));
        tracep->fullBit(oldp+1328,((1U & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r)) 
                                          & (IData)(vlTOPp->btn_step)))));
        tracep->fullBit(oldp+1329,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r) 
                                    & (~ ((IData)(vlTOPp->btn_step) 
                                          >> 1U)))));
        tracep->fullBit(oldp+1330,((1U & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r)) 
                                          & ((IData)(vlTOPp->btn_step) 
                                             >> 1U)))));
        tracep->fullIData(oldp+1331,(0x20U),32);
        tracep->fullCData(oldp+1332,(0U),4);
        tracep->fullCData(oldp+1333,(0U),2);
        tracep->fullCData(oldp+1334,(0U),3);
        tracep->fullBit(oldp+1335,(1U));
        tracep->fullBit(oldp+1336,(0U));
        tracep->fullBit(oldp+1337,(vlTOPp->simu_top__DOT__soc__DOT__UART_RI));
        tracep->fullCData(oldp+1338,(0U),8);
        tracep->fullIData(oldp+1339,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__debug1_wb_pc),32);
        tracep->fullCData(oldp+1340,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__debug1_wb_rf_wen),4);
        tracep->fullCData(oldp+1341,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__debug1_wb_rf_wnum),5);
        tracep->fullIData(oldp+1342,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__debug1_wb_rf_wdata),32);
        tracep->fullCData(oldp+1343,(2U),2);
        tracep->fullCData(oldp+1344,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_inst),4);
        tracep->fullIData(oldp+1345,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wdata_inst),32);
        tracep->fullIData(oldp+1346,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex),32);
        tracep->fullIData(oldp+1347,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_data_in),32);
        tracep->fullIData(oldp+1348,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_data_out),32);
        tracep->fullBit(oldp+1349,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_flush));
        tracep->fullIData(oldp+1350,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_nop),32);
        tracep->fullIData(oldp+1351,(0x1bfffffcU),32);
        tracep->fullIData(oldp+1352,(0U),32);
        tracep->fullIData(oldp+1353,(0x100000U),32);
        tracep->fullIData(oldp+1354,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_id),32);
        tracep->fullBit(oldp+1355,(0U));
        tracep->fullBit(oldp+1356,(0U));
        tracep->fullCData(oldp+1357,(0U),5);
        tracep->fullBit(oldp+1358,(0U));
        tracep->fullCData(oldp+1359,(0U),5);
        tracep->fullBit(oldp+1360,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_flush));
        tracep->fullCData(oldp+1361,(0U),4);
        tracep->fullBit(oldp+1362,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_flush));
        tracep->fullCData(oldp+1363,(0U),4);
        tracep->fullBit(oldp+1364,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_allow_out));
        tracep->fullBit(oldp+1365,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__overflow));
        tracep->fullIData(oldp+1366,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_id),32);
        tracep->fullIData(oldp+1367,(0x1bfffffcU),32);
        tracep->fullIData(oldp+1368,(0U),32);
        tracep->fullIData(oldp+1369,(6U),32);
        tracep->fullCData(oldp+1370,(0U),6);
        tracep->fullBit(oldp+1371,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_awready));
        tracep->fullBit(oldp+1372,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_wready));
        tracep->fullCData(oldp+1373,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_bid),4);
        tracep->fullCData(oldp+1374,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_bresp),2);
        tracep->fullBit(oldp+1375,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_bvalid));
        tracep->fullBit(oldp+1376,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_arready));
        tracep->fullCData(oldp+1377,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rid),4);
        tracep->fullIData(oldp+1378,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rdata),32);
        tracep->fullCData(oldp+1379,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rresp),2);
        tracep->fullBit(oldp+1380,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rlast));
        tracep->fullBit(oldp+1381,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rvalid));
        tracep->fullBit(oldp+1382,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_awready));
        tracep->fullBit(oldp+1383,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_wready));
        tracep->fullCData(oldp+1384,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_bid),4);
        tracep->fullCData(oldp+1385,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_bresp),2);
        tracep->fullBit(oldp+1386,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_bvalid));
        tracep->fullBit(oldp+1387,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_arready));
        tracep->fullCData(oldp+1388,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rid),4);
        tracep->fullIData(oldp+1389,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rdata),32);
        tracep->fullCData(oldp+1390,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rresp),2);
        tracep->fullBit(oldp+1391,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rlast));
        tracep->fullBit(oldp+1392,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rvalid));
        tracep->fullCData(oldp+1393,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__BASE_ADDR[0]),5);
        tracep->fullCData(oldp+1394,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__BASE_ADDR[1]),5);
        tracep->fullCData(oldp+1395,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__BASE_ADDR[2]),5);
        tracep->fullCData(oldp+1396,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__BASE_ADDR[3]),5);
        tracep->fullCData(oldp+1397,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__BASE_ADDR[4]),5);
        tracep->fullCData(oldp+1398,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_sel_group_0),3);
        tracep->fullCData(oldp+1399,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_sel_group_1),3);
        tracep->fullIData(oldp+1400,(5U),32);
        tracep->fullIData(oldp+1401,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit_int),32);
        tracep->fullIData(oldp+1402,(3U),32);
        tracep->fullIData(oldp+1403,(0x14U),32);
        tracep->fullIData(oldp+1404,(8U),32);
        tracep->fullIData(oldp+1405,(0x40U),32);
        tracep->fullIData(oldp+1406,(0x80U),32);
        tracep->fullIData(oldp+1407,(0x10U),32);
        tracep->fullBit(oldp+1408,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_rw_dma));
        tracep->fullBit(oldp+1409,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_dma));
        tracep->fullBit(oldp+1410,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_dma));
        tracep->fullIData(oldp+1411,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_addr_dma),20);
        tracep->fullIData(oldp+1412,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_wdata_dma),32);
        tracep->fullBit(oldp+1413,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_dma));
        tracep->fullBit(oldp+1414,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_ack_i));
        tracep->fullBit(oldp+1415,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_clk_dma));
        tracep->fullBit(oldp+1416,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_reset_n_dma));
        tracep->fullCData(oldp+1417,(1U),4);
        tracep->fullCData(oldp+1418,(2U),4);
        tracep->fullCData(oldp+1419,(8U),4);
        tracep->fullCData(oldp+1420,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                      << 1U)),4);
        tracep->fullBit(oldp+1421,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                          >> 2U))));
        tracep->fullBit(oldp+1422,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                          >> 1U))));
        tracep->fullBit(oldp+1423,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI))));
        tracep->fullBit(oldp+1424,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                          << 1U))));
        tracep->fullBit(oldp+1425,((1U & (~ (0x1fffffffU 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                                >> 2U))))));
        tracep->fullBit(oldp+1426,((1U & (~ (0x3fffffffU 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                                >> 1U))))));
        tracep->fullBit(oldp+1427,((1U & (~ (0x7fffffffU 
                                             & (IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI))))));
        tracep->fullBit(oldp+1428,((1U & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                             << 1U)))));
        tracep->fullCData(oldp+1429,(1U),3);
        tracep->fullCData(oldp+1430,(2U),3);
        tracep->fullCData(oldp+1431,(3U),3);
        tracep->fullCData(oldp+1432,(4U),3);
        tracep->fullCData(oldp+1433,(5U),3);
        tracep->fullCData(oldp+1434,(6U),3);
        tracep->fullIData(oldp+1435,(4U),32);
        tracep->fullIData(oldp+1436,(5U),32);
        tracep->fullIData(oldp+1437,(1U),32);
        tracep->fullBit(oldp+1438,(1U));
        tracep->fullCData(oldp+1439,(3U),4);
        tracep->fullCData(oldp+1440,(4U),4);
        tracep->fullCData(oldp+1441,(5U),4);
        tracep->fullCData(oldp+1442,(6U),4);
        tracep->fullCData(oldp+1443,(7U),4);
        tracep->fullCData(oldp+1444,(9U),4);
        tracep->fullCData(oldp+1445,(0xaU),4);
        tracep->fullIData(oldp+1446,(0xbU),32);
        tracep->fullCData(oldp+1447,(1U),5);
        tracep->fullCData(oldp+1448,(2U),5);
        tracep->fullCData(oldp+1449,(0xaU),5);
        tracep->fullCData(oldp+1450,(3U),5);
        tracep->fullCData(oldp+1451,(4U),5);
        tracep->fullCData(oldp+1452,(6U),5);
        tracep->fullCData(oldp+1453,(7U),5);
        tracep->fullCData(oldp+1454,(0x10U),5);
        tracep->fullCData(oldp+1455,(0x11U),5);
        tracep->fullCData(oldp+1456,(0x12U),5);
        tracep->fullCData(oldp+1457,(0x13U),5);
        tracep->fullCData(oldp+1458,(0x14U),5);
        tracep->fullCData(oldp+1459,(0x15U),5);
        tracep->fullCData(oldp+1460,(0x16U),5);
        tracep->fullCData(oldp+1461,(0x17U),5);
        tracep->fullCData(oldp+1462,(0x18U),5);
        tracep->fullCData(oldp+1463,(0x19U),5);
        tracep->fullCData(oldp+1464,(0x1aU),5);
        tracep->fullCData(oldp+1465,(0x1bU),5);
        tracep->fullIData(oldp+1466,(2U),32);
        tracep->fullBit(oldp+1467,(0U));
        tracep->fullIData(oldp+1468,(0x20U),32);
        tracep->fullIData(oldp+1469,(0x400U),32);
        tracep->fullCData(oldp+1470,(1U),2);
        tracep->fullCData(oldp+1471,(0x20U),7);
        tracep->fullCData(oldp+1472,(0x22U),7);
        tracep->fullCData(oldp+1473,(0x24U),7);
        tracep->fullCData(oldp+1474,(0x25U),7);
        tracep->fullCData(oldp+1475,(0x28U),7);
        tracep->fullCData(oldp+1476,(0x29U),7);
        tracep->fullCData(oldp+1477,(0x2aU),7);
        tracep->fullCData(oldp+1478,(0x2bU),7);
        tracep->fullCData(oldp+1479,(0x2eU),7);
        tracep->fullCData(oldp+1480,(0x2fU),7);
        tracep->fullCData(oldp+1481,(0x30U),7);
        tracep->fullCData(oldp+1482,(0x38U),7);
        tracep->fullCData(oldp+1483,(0x39U),7);
        tracep->fullCData(oldp+1484,(0x3aU),7);
        tracep->fullCData(oldp+1485,(0x40U),7);
        tracep->fullCData(oldp+1486,(0x41U),7);
        tracep->fullCData(oldp+1487,(0x42U),7);
        tracep->fullCData(oldp+1488,(0x43U),7);
        tracep->fullCData(oldp+1489,(1U),7);
        tracep->fullCData(oldp+1490,(9U),7);
        tracep->fullCData(oldp+1491,(0x11U),7);
        tracep->fullCData(oldp+1492,(7U),3);
        tracep->fullCData(oldp+1493,(0xbU),4);
    }
}

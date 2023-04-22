// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimu_top.h for the primary calling header

#include "Vsimu_top.h"
#include "Vsimu_top__Syms.h"

#include "verilated_dpi.h"

//==========
// Begin mtask footprint all: 
CData/*2:0*/ Vsimu_top::__Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[32];
IData/*31:0*/ Vsimu_top::__Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[32];
CData/*2:0*/ Vsimu_top::__Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[32];
IData/*31:0*/ Vsimu_top::__Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[32];
CData/*7:0*/ Vsimu_top::__Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[256];
SData/*9:0*/ Vsimu_top::__Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[256];
CData/*6:0*/ Vsimu_top::__Vtable5_num_a_g[32];

VL_CTOR_IMP(Vsimu_top) {
    Vsimu_top__Syms* __restrict vlSymsp = __VlSymsp = new Vsimu_top__Syms(this, name());
    Vsimu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(__PVT____024unit, Vsimu_top___024unit);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vsimu_top::__Vconfigure(Vsimu_top__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vsimu_top::~Vsimu_top() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

// Savable
void Vsimu_top::__Vserialize(VerilatedSerialize& os) {
    vluint64_t __Vcheckval = 0x572c47fbcb164f82ULL;
    os<<__Vcheckval;
    os<<DifftestInstrCommit__02Eclock;
    os<<DifftestInstrCommit__02Ecoreid;
    os<<DifftestInstrCommit__02Eindex;
    os<<DifftestInstrCommit__02Evalid;
    os<<DifftestInstrCommit__02Epc;
    os<<instr;
    os<<skip;
    os<<is_TLBFILL;
    os<<TLBFILL_index;
    os<<is_CNTinst;
    os<<timer_64_value;
    os<<wen;
    os<<wdest;
    os<<wdata;
    os<<csr_rstat;
    os<<csr_data;
    os<<DifftestExcpEvent__02Eclock;
    os<<DifftestExcpEvent__02Ecoreid;
    os<<excp_valid;
    os<<eret;
    os<<intrNo;
    os<<cause;
    os<<exceptionPC;
    os<<exceptionInst;
    os<<DifftestTrapEvent__02Eclock;
    os<<DifftestTrapEvent__02Ecoreid;
    os<<DifftestTrapEvent__02Evalid;
    os<<code;
    os<<DifftestTrapEvent__02Epc;
    os<<cycleCnt;
    os<<instrCnt;
    os<<DifftestStoreEvent__02Eclock;
    os<<DifftestStoreEvent__02Ecoreid;
    os<<DifftestStoreEvent__02Eindex;
    os<<DifftestStoreEvent__02Evalid;
    os<<storePAddr;
    os<<storeVAddr;
    os<<storeData;
    os<<DifftestLoadEvent__02Eclock;
    os<<DifftestLoadEvent__02Ecoreid;
    os<<DifftestLoadEvent__02Eindex;
    os<<DifftestLoadEvent__02Evalid;
    os<<paddr;
    os<<vaddr;
    os<<DifftestCSRRegState__02Eclock;
    os<<DifftestCSRRegState__02Ecoreid;
    os<<crmd;
    os<<prmd;
    os<<euen;
    os<<ecfg;
    os<<estat;
    os<<era;
    os<<badv;
    os<<eentry;
    os<<tlbidx;
    os<<tlbehi;
    os<<tlbelo0;
    os<<tlbelo1;
    os<<asid;
    os<<pgdl;
    os<<pgdh;
    os<<save0;
    os<<save1;
    os<<save2;
    os<<save3;
    os<<tid;
    os<<tcfg;
    os<<tval;
    os<<ticlr;
    os<<llbctl;
    os<<tlbrentry;
    os<<dmw0;
    os<<dmw1;
    os<<DifftestGRegState__02Eclock;
    os<<DifftestGRegState__02Ecoreid;
    os<<gpr_0;
    os<<gpr_1;
    os<<gpr_2;
    os<<gpr_3;
    os<<gpr_4;
    os<<gpr_5;
    os<<gpr_6;
    os<<gpr_7;
    os<<gpr_8;
    os<<gpr_9;
    os<<gpr_10;
    os<<gpr_11;
    os<<gpr_12;
    os<<gpr_13;
    os<<gpr_14;
    os<<gpr_15;
    os<<gpr_16;
    os<<gpr_17;
    os<<gpr_18;
    os<<gpr_19;
    os<<gpr_20;
    os<<gpr_21;
    os<<gpr_22;
    os<<gpr_23;
    os<<gpr_24;
    os<<gpr_25;
    os<<gpr_26;
    os<<gpr_27;
    os<<gpr_28;
    os<<gpr_29;
    os<<gpr_30;
    os<<gpr_31;
    os<<aclk;
    os<<aresetn;
    os<<enable_delay;
    os<<random_seed;
    os<<ram_ren;
    os<<ram_raddr;
    os<<ram_rdata;
    os<<ram_wen;
    os<<ram_waddr;
    os<<ram_wdata;
    os<<debug0_wb_pc;
    os<<debug0_wb_rf_wen;
    os<<debug0_wb_rf_wnum;
    os<<debug0_wb_rf_wdata;
    os<<num_data;
    os<<open_trace;
    os<<num_monitor;
    os<<confreg_uart_data;
    os<<write_uart_valid;
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            os<<uart_ctr_bus[__Vi0];
    }}
    os<<uart_rx;
    os<<uart_tx;
    os<<led;
    os<<led_rg0;
    os<<led_rg1;
    os<<num_csn;
    os<<num_a_g;
    os<<__SYM__switch;
    os<<btn_key_col;
    os<<btn_key_row;
    os<<btn_step;
    os<<simu_top__DOT__soc__DOT__cpu_awvalid;
    os<<simu_top__DOT__soc__DOT__cpu_wvalid;
    os<<simu_top__DOT__soc__DOT__cpu_arvalid;
    os<<simu_top__DOT__soc__DOT__m0_awvalid;
    os<<simu_top__DOT__soc__DOT__m0_awready;
    os<<simu_top__DOT__soc__DOT__m0_wvalid;
    os<<simu_top__DOT__soc__DOT__m0_wready;
    os<<simu_top__DOT__soc__DOT__m0_bid;
    os<<simu_top__DOT__soc__DOT__m0_bresp;
    os<<simu_top__DOT__soc__DOT__m0_bvalid;
    os<<simu_top__DOT__soc__DOT__m0_bready;
    os<<simu_top__DOT__soc__DOT__m0_arvalid;
    os<<simu_top__DOT__soc__DOT__m0_arready;
    os<<simu_top__DOT__soc__DOT__m0_rid;
    os<<simu_top__DOT__soc__DOT__m0_rdata;
    os<<simu_top__DOT__soc__DOT__m0_rresp;
    os<<simu_top__DOT__soc__DOT__m0_rlast;
    os<<simu_top__DOT__soc__DOT__m0_rvalid;
    os<<simu_top__DOT__soc__DOT__m0_rready;
    os<<simu_top__DOT__soc__DOT__s0_wready;
    os<<simu_top__DOT__soc__DOT__conf_s_wready;
    os<<simu_top__DOT__soc__DOT__apb_s_awready;
    os<<simu_top__DOT__soc__DOT__apb_s_wready;
    os<<simu_top__DOT__soc__DOT__apb_s_bvalid;
    os<<simu_top__DOT__soc__DOT__apb_s_arready;
    os<<simu_top__DOT__soc__DOT__apb_s_rlast;
    os<<simu_top__DOT__soc__DOT__apb_s_rvalid;
    os<<simu_top__DOT__soc__DOT__conf_s_ram_wen;
    os<<simu_top__DOT__soc__DOT__UART_RI;
    os<<simu_top__DOT__soc__DOT__uart0_int;
    os<<simu_top__DOT__soc__DOT__uart0_txd_oe;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__debug1_wb_pc;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__debug1_wb_rf_wen;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__debug1_wb_rf_wnum;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__debug1_wb_rf_wdata;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__req_inst;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__wstrb_inst;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__wdata_inst;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__addr_ok_inst;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__req_mem;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_allow_in;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_data_in;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_data_out;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_ready_go;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_flush;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_nop;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_allow_in;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_ready_go;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_valid_in;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_ready_go;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_allow_in;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_valid_in;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_allow_in;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_flush;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_valid_in;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_ready_go;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_allow_in;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_flush;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_valid_in;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_flush;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_allow_out;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp_valid;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__overflow;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__itype;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluctrl_id;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_id;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rk_id;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_id;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__immout_id;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id_true;
    { int __Vi0=0; for (; __Vi0<6; ++__Vi0) {
            os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[__Vi0];
    }}
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__divNeed;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluout_ex;
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[__Vi0];
    }}
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData;
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[__Vi0];
    }}
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__pipeline_valid;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__pipeline_data;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__pipeline_valid;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__pipeline_data;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ADDI_TYPE;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ANDI_TYPE;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ORI_TYPE;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_XORI_TYPE;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LUI_TYPE;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_PCADDU12I_TYPE;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_BU_TYPE;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_HU_TYPE;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_JIRL_TYPE;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BL_TYPE;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_reg_inst;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_load_inst;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_store_inst;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_PC_BRANCH;
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[__Vi0];
    }}
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__MEM_forward_valid;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__WB_forward_valid;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT__stall;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid;
    { int __Vi0=0; for (; __Vi0<6; ++__Vi0) {
            os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[__Vi0];
    }}
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divSigned;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divEn;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT____Vcellinp__myDiv__clk;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_result;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__slt_result;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_b;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_cin;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__unnamedblk1__DOT__mul_result;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__unnamedblk2__DOT__mul_result;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_u;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__remainder_u;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__dividend_reg;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__minuend;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__count;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__minuend_shifted;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__minuend_next;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__dividend_next;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__difference;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_valid;
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[__Vi0];
    }}
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_valid;
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[__Vi0];
    }}
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req_or;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wr_r;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_size_r;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wdata_r;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wstrb_r;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__data_back;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__addr_rcv;
    os<<simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__wdata_rcv;
    os<<simu_top__DOT__soc__DOT__delay__DOT__mask_ar;
    os<<simu_top__DOT__soc__DOT__delay__DOT__mask_ar_disable;
    os<<simu_top__DOT__soc__DOT__delay__DOT__mask_aw;
    os<<simu_top__DOT__soc__DOT__delay__DOT__mask_aw_disable;
    os<<simu_top__DOT__soc__DOT__delay__DOT__mask_no_delay;
    os<<simu_top__DOT__soc__DOT__delay__DOT__mask_random;
    os<<simu_top__DOT__soc__DOT__delay__DOT__mask_random_next;
    os<<simu_top__DOT__soc__DOT__delay__DOT__mask_short_delay;
    os<<simu_top__DOT__soc__DOT__delay__DOT__mask_w;
    os<<simu_top__DOT__soc__DOT__delay__DOT__mask_w_disable;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_awready;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_wready;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_bid;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_bresp;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_bvalid;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_arready;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rid;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rdata;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rresp;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rlast;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rvalid;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_awready;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_wready;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_bid;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_bresp;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_bvalid;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_arready;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rid;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rdata;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rresp;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rlast;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rvalid;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid;
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[__Vi0];
    }}
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[__Vi0];
    }}
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[__Vi0];
    }}
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[__Vi0];
    }}
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[__Vi0];
    }}
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready;
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__BASE_ADDR[__Vi0];
    }}
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_0;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_1;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_sel_group_0;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_sel_group_1;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_empty;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_dir_ins;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_dir;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_pre_sel;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel_reg;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_dir_ins;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_pre_sel;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit_int;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound1;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound2;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound4;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound5;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound6;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound7;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound9;
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram[__Vi0];
    }}
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__i;
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram[__Vi0];
    }}
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr;
    os<<simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__i;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_rw_dma;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_dma;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_dma;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_addr_dma;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_wdata_dma;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_dma;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_ack_i;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_ce;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datai_cpu;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datao_cpu;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_word_trans_cpu;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_cpu;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_high_24b_wr;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_clk_dma;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_reset_n_dma;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_enab;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_psel;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_datai;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_ready;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm_nxt;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_w_id;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_r_id;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_wr_size;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_psel;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_enab;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datao;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__re;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__rx_en;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__tx2rx_en;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__enable;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__srx_pad;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fcr;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__infrared;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_pol;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__start_dlc;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask_d;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__trigger_level;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_reset;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tx_reset;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_reg;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_en_reg;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fi_di_reg;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__repeat_reg;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0r;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr1r;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr2r;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr3r;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr4r;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5r;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6r;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7r;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_push;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_data_out;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_out;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_in;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_overrun;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_push_pulse;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____Vcellinp__receiver__enable;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask_condition;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir_read;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr_read;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fifo_read;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fifo_write;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__delayed_modem_signals;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0_d;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr1_d;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr2_d;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr3_d;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr4_d;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5_d;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6_d;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7_d;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_cnt;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_next;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_toggle;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_d;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_d;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_d;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_d;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_d;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_pnd;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_pnd;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_pnd;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_pnd;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_pnd;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__d1_fifo_read;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__shift_out;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_pop;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_out;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_out;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_overrun;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_bak;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1;
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[__Vi0];
    }}
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__i_uart_sync_flops__DOT__flop_0;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rbit_counter;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_error;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rframing_error;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rbit_in;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_xor;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push_q;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_data_in;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_7;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_0;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__data8_out;
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vi0];
    }}
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1;
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[__Vi0];
    }}
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_int;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r0;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r1;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_type_r1;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_type_r2;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__REG_DAT_T;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_c;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_op_num;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map1;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_rdy_map0;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_rdy_map1;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__addr_in_die;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_clr_ack;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NANDtag;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT0;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT1;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT2;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT3;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT6;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT7;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT8;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT9;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT10;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT11;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_cmd_valid;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_number;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_pre_o;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY_post_i;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_I_WR;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ACK;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ERASE_SERIAL;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half;
    os<<simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob;
    os<<simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr;
    os<<simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr_incr;
    os<<simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr_next;
    os<<simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr_wrap;
    os<<simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst;
    os<<simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arid;
    os<<simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen;
    os<<simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen_last;
    os<<simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arsize;
    os<<simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_push;
    os<<simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop;
    os<<simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push;
    os<<simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas;
    os<<simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_pop;
    os<<simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_push;
    os<<simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid;
    os<<simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_valid;
    os<<simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en;
    os<<simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rcur;
    os<<simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rid;
    os<<simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rlast;
    os<<simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rvalid;
    os<<simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr;
    os<<simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_incr;
    os<<simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_next;
    os<<simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_wrap;
    os<<simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst;
    os<<simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awid;
    os<<simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awlen;
    os<<simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awsize;
    os<<simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_push;
    os<<simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop;
    os<<simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_push;
    os<<simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas;
    os<<simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_pop;
    os<<simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_push;
    os<<simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid;
    os<<simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_valid;
    os<<simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_allow_out;
    os<<simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_data;
    os<<simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop;
    os<<simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_datas;
    os<<simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_pop;
    os<<simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_push;
    os<<simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid;
    os<<simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid;
    os<<simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en;
    os<<simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_go;
    os<<simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata;
    os<<simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wlast;
    os<<simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wstrb;
    os<<simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wvalid;
    os<<simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr;
    os<<simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_incr;
    os<<simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_next;
    os<<simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_wrap;
    os<<simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst;
    os<<simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arid;
    os<<simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen;
    os<<simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen_last;
    os<<simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arsize;
    os<<simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_push;
    os<<simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop;
    os<<simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_push;
    os<<simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas;
    os<<simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_pop;
    os<<simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_push;
    os<<simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid;
    os<<simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid;
    os<<simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_en;
    os<<simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur;
    os<<simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rid;
    os<<simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rlast;
    os<<simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rvalid;
    os<<simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr;
    os<<simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_incr;
    os<<simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_next;
    os<<simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_wrap;
    os<<simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst;
    os<<simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awid;
    os<<simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awlen;
    os<<simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awsize;
    os<<simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_push;
    os<<simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop;
    os<<simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_push;
    os<<simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas;
    os<<simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_pop;
    os<<simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_push;
    os<<simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid;
    os<<simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_valid;
    os<<simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_allow_out;
    os<<simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_data;
    os<<simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop;
    os<<simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_datas;
    os<<simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_pop;
    os<<simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_push;
    os<<simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid;
    os<<simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid;
    os<<simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en;
    os<<simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_go;
    os<<simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wdata;
    os<<simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wlast;
    os<<simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wstrb;
    os<<simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wvalid;
    os<<simu_top__DOT__soc__DOT__confreg__DOT__cr0;
    os<<simu_top__DOT__soc__DOT__confreg__DOT__cr1;
    os<<simu_top__DOT__soc__DOT__confreg__DOT__cr2;
    os<<simu_top__DOT__soc__DOT__confreg__DOT__cr3;
    os<<simu_top__DOT__soc__DOT__confreg__DOT__cr4;
    os<<simu_top__DOT__soc__DOT__confreg__DOT__cr5;
    os<<simu_top__DOT__soc__DOT__confreg__DOT__cr6;
    os<<simu_top__DOT__soc__DOT__confreg__DOT__cr7;
    os<<simu_top__DOT__soc__DOT__confreg__DOT__led_data;
    os<<simu_top__DOT__soc__DOT__confreg__DOT__led_rg0_data;
    os<<simu_top__DOT__soc__DOT__confreg__DOT__led_rg1_data;
    os<<simu_top__DOT__soc__DOT__confreg__DOT__num_data;
    os<<simu_top__DOT__soc__DOT__confreg__DOT__confreg_uart_data;
    os<<simu_top__DOT__soc__DOT__confreg__DOT__confreg_uart_valid;
    os<<simu_top__DOT__soc__DOT__confreg__DOT__timer_r2;
    os<<simu_top__DOT__soc__DOT__confreg__DOT__simu_flag;
    os<<simu_top__DOT__soc__DOT__confreg__DOT__io_simu;
    os<<simu_top__DOT__soc__DOT__confreg__DOT__virtual_uart_data;
    os<<simu_top__DOT__soc__DOT__confreg__DOT__open_trace;
    os<<simu_top__DOT__soc__DOT__confreg__DOT__num_monitor;
    os<<simu_top__DOT__soc__DOT__confreg__DOT__conf_rdata_reg;
    os<<simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin;
    os<<simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r1;
    os<<simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r2;
    os<<simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r3;
    os<<simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r1;
    os<<simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r2;
    os<<simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r;
    os<<simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r1;
    os<<simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r2;
    os<<simu_top__DOT__soc__DOT__confreg__DOT__timer_r1;
    os<<simu_top__DOT__soc__DOT__confreg__DOT__timer;
    os<<simu_top__DOT__soc__DOT__confreg__DOT__write_timer;
    os<<simu_top__DOT__soc__DOT__confreg__DOT__write_uart_valid;
    os<<simu_top__DOT__soc__DOT__confreg__DOT__btn_key_r;
    os<<simu_top__DOT__soc__DOT__confreg__DOT__state;
    os<<simu_top__DOT__soc__DOT__confreg__DOT__next_state;
    os<<simu_top__DOT__soc__DOT__confreg__DOT__key_flag;
    os<<simu_top__DOT__soc__DOT__confreg__DOT__key_count;
    os<<simu_top__DOT__soc__DOT__confreg__DOT__state_count;
    os<<simu_top__DOT__soc__DOT__confreg__DOT__btn_key_tmp;
    os<<simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r;
    os<<simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r;
    os<<simu_top__DOT__soc__DOT__confreg__DOT__step0_flag;
    os<<simu_top__DOT__soc__DOT__confreg__DOT__step0_count;
    os<<simu_top__DOT__soc__DOT__confreg__DOT__step1_flag;
    os<<simu_top__DOT__soc__DOT__confreg__DOT__step1_count;
    os<<simu_top__DOT__soc__DOT__confreg__DOT__count;
    os<<simu_top__DOT__soc__DOT__confreg__DOT__scan_data;
    os<<__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__Vfuncout;
    os<<__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__valid;
    os<<__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__pre_num;
    os<<__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__Vfuncout;
    os<<__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__valid;
    os<<__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__pre_num;
    os<<__Vtableidx1;
    os<<__Vtableidx2;
    os<<__Vtableidx3;
    os<<__Vtableidx4;
    os<<__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp_valid;
    os<<__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid;
    os<<__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf__v0;
    os<<__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req;
    os<<__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_size_r;
    os<<__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r;
    os<<__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wdata_r;
    os<<__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wstrb_r;
    os<<__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr;
    os<<__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr;
    os<<__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu;
    os<<__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb;
    os<<__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32;
    os<<__Vdly__simu_top__DOT__soc__DOT__apb_s_bvalid;
    os<<__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd;
    os<<__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size;
    os<<__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count;
    os<<__Vdly__simu_top__DOT__soc__DOT__apb_s_rvalid;
    os<<__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant;
    os<<__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count;
    os<<__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop;
    os<<__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset;
    os<<__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier;
    os<<__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5r;
    os<<__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc;
    os<<__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt;
    os<<__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_pnd;
    os<<__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_pnd;
    os<<__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_pnd;
    os<<__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_pnd;
    os<<__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_pnd;
    os<<__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate;
    os<<__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time;
    os<<__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter;
    os<<__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error;
    os<<__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter;
    os<<__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor;
    os<<__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__shift_out;
    os<<__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_out;
    os<<__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    os<<__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count;
    os<<__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    os<<__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate;
    os<<__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_xor;
    os<<__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift;
    os<<__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b;
    os<<__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t;
    os<<__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top;
    os<<__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    os<<__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count;
    os<<__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0;
    os<<__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16;
    os<<__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17;
    os<<__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18;
    os<<__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v19;
    os<<__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    os<<__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command;
    os<<__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half;
    os<<__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob;
    os<<__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_;
    os<<__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND;
    os<<__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count;
    os<<__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR;
    os<<__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE;
    os<<__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO;
    os<<__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status;
    os<<__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM;
    os<<__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM;
    os<<__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE;
    os<<__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer;
    os<<__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ;
    os<<__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ERASE_SERIAL;
    os<<__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM;
    os<<__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT;
    os<<__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT;
    os<<__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT;
    os<<__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE;
    os<<__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM;
    os<<__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE;
    os<<__Vdly__simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rcur;
    os<<__Vdly__simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur;
    os<<__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr0;
    os<<__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr6;
    os<<__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr1;
    os<<__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr2;
    os<<__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr3;
    os<<__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr4;
    os<<__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr5;
    os<<__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr7;
    os<<__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r1;
    os<<__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__key_count;
    os<<__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__state_count;
    os<<__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__step0_count;
    os<<__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__step1_count;
    os<<__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__count;
    os<<__Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog;
    os<<__Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr;
    os<<__Vdlyvdim0__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v0;
    os<<__Vdlyvval__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v0;
    os<<__Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v0;
    os<<__Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v1;
    os<<__Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr;
    os<<__Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram__v0;
    os<<__Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram__v1;
    os<<__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__timer;
    os<<__VinpClk__TOP__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT____Vcellinp__myDiv__clk;
    os<<__Vclklast__TOP____VinpClk__TOP__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT____Vcellinp__myDiv__clk;
    os<<__Vclklast__TOP__DifftestLoadEvent__02Eclock;
    os<<__Vclklast__TOP__DifftestTrapEvent__02Eclock;
    os<<__Vclklast__TOP__DifftestStoreEvent__02Eclock;
    os<<__Vclklast__TOP__DifftestExcpEvent__02Eclock;
    os<<__Vclklast__TOP__aclk;
    os<<__Vclklast__TOP__DifftestInstrCommit__02Eclock;
    os<<__Vclklast__TOP__DifftestCSRRegState__02Eclock;
    os<<__Vclklast__TOP__DifftestGRegState__02Eclock;
    os<<__Vchglast__TOP__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT____Vcellinp__myDiv__clk;
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            os<<__Vm_traceActivity[__Vi0];
    }}
    __VlSymsp->__Vserialize(os);
}
void Vsimu_top::__Vdeserialize(VerilatedDeserialize& os) {
    vluint64_t __Vcheckval = 0x572c47fbcb164f82ULL;
    os.readAssert(__Vcheckval);
    os>>DifftestInstrCommit__02Eclock;
    os>>DifftestInstrCommit__02Ecoreid;
    os>>DifftestInstrCommit__02Eindex;
    os>>DifftestInstrCommit__02Evalid;
    os>>DifftestInstrCommit__02Epc;
    os>>instr;
    os>>skip;
    os>>is_TLBFILL;
    os>>TLBFILL_index;
    os>>is_CNTinst;
    os>>timer_64_value;
    os>>wen;
    os>>wdest;
    os>>wdata;
    os>>csr_rstat;
    os>>csr_data;
    os>>DifftestExcpEvent__02Eclock;
    os>>DifftestExcpEvent__02Ecoreid;
    os>>excp_valid;
    os>>eret;
    os>>intrNo;
    os>>cause;
    os>>exceptionPC;
    os>>exceptionInst;
    os>>DifftestTrapEvent__02Eclock;
    os>>DifftestTrapEvent__02Ecoreid;
    os>>DifftestTrapEvent__02Evalid;
    os>>code;
    os>>DifftestTrapEvent__02Epc;
    os>>cycleCnt;
    os>>instrCnt;
    os>>DifftestStoreEvent__02Eclock;
    os>>DifftestStoreEvent__02Ecoreid;
    os>>DifftestStoreEvent__02Eindex;
    os>>DifftestStoreEvent__02Evalid;
    os>>storePAddr;
    os>>storeVAddr;
    os>>storeData;
    os>>DifftestLoadEvent__02Eclock;
    os>>DifftestLoadEvent__02Ecoreid;
    os>>DifftestLoadEvent__02Eindex;
    os>>DifftestLoadEvent__02Evalid;
    os>>paddr;
    os>>vaddr;
    os>>DifftestCSRRegState__02Eclock;
    os>>DifftestCSRRegState__02Ecoreid;
    os>>crmd;
    os>>prmd;
    os>>euen;
    os>>ecfg;
    os>>estat;
    os>>era;
    os>>badv;
    os>>eentry;
    os>>tlbidx;
    os>>tlbehi;
    os>>tlbelo0;
    os>>tlbelo1;
    os>>asid;
    os>>pgdl;
    os>>pgdh;
    os>>save0;
    os>>save1;
    os>>save2;
    os>>save3;
    os>>tid;
    os>>tcfg;
    os>>tval;
    os>>ticlr;
    os>>llbctl;
    os>>tlbrentry;
    os>>dmw0;
    os>>dmw1;
    os>>DifftestGRegState__02Eclock;
    os>>DifftestGRegState__02Ecoreid;
    os>>gpr_0;
    os>>gpr_1;
    os>>gpr_2;
    os>>gpr_3;
    os>>gpr_4;
    os>>gpr_5;
    os>>gpr_6;
    os>>gpr_7;
    os>>gpr_8;
    os>>gpr_9;
    os>>gpr_10;
    os>>gpr_11;
    os>>gpr_12;
    os>>gpr_13;
    os>>gpr_14;
    os>>gpr_15;
    os>>gpr_16;
    os>>gpr_17;
    os>>gpr_18;
    os>>gpr_19;
    os>>gpr_20;
    os>>gpr_21;
    os>>gpr_22;
    os>>gpr_23;
    os>>gpr_24;
    os>>gpr_25;
    os>>gpr_26;
    os>>gpr_27;
    os>>gpr_28;
    os>>gpr_29;
    os>>gpr_30;
    os>>gpr_31;
    os>>aclk;
    os>>aresetn;
    os>>enable_delay;
    os>>random_seed;
    os>>ram_ren;
    os>>ram_raddr;
    os>>ram_rdata;
    os>>ram_wen;
    os>>ram_waddr;
    os>>ram_wdata;
    os>>debug0_wb_pc;
    os>>debug0_wb_rf_wen;
    os>>debug0_wb_rf_wnum;
    os>>debug0_wb_rf_wdata;
    os>>num_data;
    os>>open_trace;
    os>>num_monitor;
    os>>confreg_uart_data;
    os>>write_uart_valid;
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            os>>uart_ctr_bus[__Vi0];
    }}
    os>>uart_rx;
    os>>uart_tx;
    os>>led;
    os>>led_rg0;
    os>>led_rg1;
    os>>num_csn;
    os>>num_a_g;
    os>>__SYM__switch;
    os>>btn_key_col;
    os>>btn_key_row;
    os>>btn_step;
    os>>simu_top__DOT__soc__DOT__cpu_awvalid;
    os>>simu_top__DOT__soc__DOT__cpu_wvalid;
    os>>simu_top__DOT__soc__DOT__cpu_arvalid;
    os>>simu_top__DOT__soc__DOT__m0_awvalid;
    os>>simu_top__DOT__soc__DOT__m0_awready;
    os>>simu_top__DOT__soc__DOT__m0_wvalid;
    os>>simu_top__DOT__soc__DOT__m0_wready;
    os>>simu_top__DOT__soc__DOT__m0_bid;
    os>>simu_top__DOT__soc__DOT__m0_bresp;
    os>>simu_top__DOT__soc__DOT__m0_bvalid;
    os>>simu_top__DOT__soc__DOT__m0_bready;
    os>>simu_top__DOT__soc__DOT__m0_arvalid;
    os>>simu_top__DOT__soc__DOT__m0_arready;
    os>>simu_top__DOT__soc__DOT__m0_rid;
    os>>simu_top__DOT__soc__DOT__m0_rdata;
    os>>simu_top__DOT__soc__DOT__m0_rresp;
    os>>simu_top__DOT__soc__DOT__m0_rlast;
    os>>simu_top__DOT__soc__DOT__m0_rvalid;
    os>>simu_top__DOT__soc__DOT__m0_rready;
    os>>simu_top__DOT__soc__DOT__s0_wready;
    os>>simu_top__DOT__soc__DOT__conf_s_wready;
    os>>simu_top__DOT__soc__DOT__apb_s_awready;
    os>>simu_top__DOT__soc__DOT__apb_s_wready;
    os>>simu_top__DOT__soc__DOT__apb_s_bvalid;
    os>>simu_top__DOT__soc__DOT__apb_s_arready;
    os>>simu_top__DOT__soc__DOT__apb_s_rlast;
    os>>simu_top__DOT__soc__DOT__apb_s_rvalid;
    os>>simu_top__DOT__soc__DOT__conf_s_ram_wen;
    os>>simu_top__DOT__soc__DOT__UART_RI;
    os>>simu_top__DOT__soc__DOT__uart0_int;
    os>>simu_top__DOT__soc__DOT__uart0_txd_oe;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__debug1_wb_pc;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__debug1_wb_rf_wen;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__debug1_wb_rf_wnum;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__debug1_wb_rf_wdata;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__req_inst;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__wstrb_inst;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__wdata_inst;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__addr_ok_inst;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__req_mem;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_allow_in;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_data_in;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_data_out;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_ready_go;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_flush;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_nop;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_allow_in;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_ready_go;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_valid_in;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_ready_go;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_allow_in;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_valid_in;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_allow_in;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_flush;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_valid_in;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_ready_go;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_allow_in;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_flush;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_valid_in;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_flush;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_allow_out;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp_valid;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__overflow;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__itype;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluctrl_id;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_id;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rk_id;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_id;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__immout_id;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id_true;
    { int __Vi0=0; for (; __Vi0<6; ++__Vi0) {
            os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[__Vi0];
    }}
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__divNeed;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluout_ex;
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[__Vi0];
    }}
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData;
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[__Vi0];
    }}
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__pipeline_valid;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__pipeline_data;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__pipeline_valid;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__pipeline_data;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ADDI_TYPE;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ANDI_TYPE;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ORI_TYPE;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_XORI_TYPE;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LUI_TYPE;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_PCADDU12I_TYPE;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_BU_TYPE;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_HU_TYPE;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_JIRL_TYPE;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BL_TYPE;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_reg_inst;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_load_inst;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_store_inst;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_PC_BRANCH;
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[__Vi0];
    }}
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__MEM_forward_valid;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__WB_forward_valid;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT__stall;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid;
    { int __Vi0=0; for (; __Vi0<6; ++__Vi0) {
            os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[__Vi0];
    }}
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divSigned;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divEn;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT____Vcellinp__myDiv__clk;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_result;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__slt_result;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_b;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_cin;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__unnamedblk1__DOT__mul_result;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__unnamedblk2__DOT__mul_result;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_u;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__remainder_u;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__dividend_reg;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__minuend;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__count;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__minuend_shifted;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__minuend_next;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__dividend_next;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__difference;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_valid;
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[__Vi0];
    }}
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_valid;
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[__Vi0];
    }}
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req_or;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wr_r;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_size_r;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wdata_r;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wstrb_r;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__data_back;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__addr_rcv;
    os>>simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__wdata_rcv;
    os>>simu_top__DOT__soc__DOT__delay__DOT__mask_ar;
    os>>simu_top__DOT__soc__DOT__delay__DOT__mask_ar_disable;
    os>>simu_top__DOT__soc__DOT__delay__DOT__mask_aw;
    os>>simu_top__DOT__soc__DOT__delay__DOT__mask_aw_disable;
    os>>simu_top__DOT__soc__DOT__delay__DOT__mask_no_delay;
    os>>simu_top__DOT__soc__DOT__delay__DOT__mask_random;
    os>>simu_top__DOT__soc__DOT__delay__DOT__mask_random_next;
    os>>simu_top__DOT__soc__DOT__delay__DOT__mask_short_delay;
    os>>simu_top__DOT__soc__DOT__delay__DOT__mask_w;
    os>>simu_top__DOT__soc__DOT__delay__DOT__mask_w_disable;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_awready;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_wready;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_bid;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_bresp;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_bvalid;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_arready;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rid;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rdata;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rresp;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rlast;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rvalid;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_awready;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_wready;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_bid;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_bresp;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_bvalid;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_arready;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rid;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rdata;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rresp;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rlast;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rvalid;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid;
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[__Vi0];
    }}
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[__Vi0];
    }}
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[__Vi0];
    }}
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[__Vi0];
    }}
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[__Vi0];
    }}
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready;
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__BASE_ADDR[__Vi0];
    }}
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_0;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_1;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_sel_group_0;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_sel_group_1;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_empty;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_dir_ins;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_dir;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_pre_sel;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel_reg;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_dir_ins;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_pre_sel;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit_int;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound1;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound2;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound4;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound5;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound6;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound7;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound9;
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram[__Vi0];
    }}
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__i;
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram[__Vi0];
    }}
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr;
    os>>simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__i;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_rw_dma;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_dma;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_dma;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_addr_dma;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_wdata_dma;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_dma;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_ack_i;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_ce;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datai_cpu;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datao_cpu;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_word_trans_cpu;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_cpu;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_high_24b_wr;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_clk_dma;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_reset_n_dma;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_enab;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_psel;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_datai;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_ready;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm_nxt;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_w_id;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_r_id;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_wr_size;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_psel;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_enab;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datao;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__re;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__rx_en;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__tx2rx_en;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__enable;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__srx_pad;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fcr;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__infrared;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_pol;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__start_dlc;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask_d;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__trigger_level;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_reset;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tx_reset;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_reg;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_en_reg;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fi_di_reg;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__repeat_reg;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0r;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr1r;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr2r;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr3r;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr4r;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5r;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6r;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7r;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_push;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_data_out;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_out;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_in;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_overrun;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_push_pulse;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____Vcellinp__receiver__enable;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask_condition;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir_read;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr_read;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fifo_read;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fifo_write;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__delayed_modem_signals;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0_d;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr1_d;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr2_d;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr3_d;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr4_d;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5_d;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6_d;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7_d;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_cnt;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_next;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_toggle;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_d;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_d;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_d;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_d;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_d;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_pnd;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_pnd;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_pnd;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_pnd;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_pnd;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__d1_fifo_read;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__shift_out;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_pop;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_out;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_out;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_overrun;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_bak;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1;
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[__Vi0];
    }}
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__i_uart_sync_flops__DOT__flop_0;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rbit_counter;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_error;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rframing_error;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rbit_in;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_xor;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push_q;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_data_in;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_7;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_0;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__data8_out;
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vi0];
    }}
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1;
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[__Vi0];
    }}
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_int;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r0;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r1;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_type_r1;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_type_r2;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__REG_DAT_T;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_c;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_op_num;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map1;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_rdy_map0;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_rdy_map1;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__addr_in_die;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_clr_ack;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NANDtag;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT0;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT1;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT2;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT3;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT6;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT7;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT8;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT9;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT10;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT11;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_cmd_valid;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_number;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_pre_o;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY_post_i;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_I_WR;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ACK;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ERASE_SERIAL;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half;
    os>>simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob;
    os>>simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr;
    os>>simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr_incr;
    os>>simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr_next;
    os>>simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr_wrap;
    os>>simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst;
    os>>simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arid;
    os>>simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen;
    os>>simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen_last;
    os>>simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arsize;
    os>>simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_push;
    os>>simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop;
    os>>simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push;
    os>>simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas;
    os>>simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_pop;
    os>>simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_push;
    os>>simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid;
    os>>simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_valid;
    os>>simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en;
    os>>simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rcur;
    os>>simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rid;
    os>>simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rlast;
    os>>simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rvalid;
    os>>simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr;
    os>>simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_incr;
    os>>simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_next;
    os>>simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_wrap;
    os>>simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst;
    os>>simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awid;
    os>>simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awlen;
    os>>simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awsize;
    os>>simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_push;
    os>>simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop;
    os>>simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_push;
    os>>simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas;
    os>>simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_pop;
    os>>simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_push;
    os>>simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid;
    os>>simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_valid;
    os>>simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_allow_out;
    os>>simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_data;
    os>>simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop;
    os>>simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_datas;
    os>>simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_pop;
    os>>simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_push;
    os>>simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid;
    os>>simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid;
    os>>simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en;
    os>>simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_go;
    os>>simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata;
    os>>simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wlast;
    os>>simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wstrb;
    os>>simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wvalid;
    os>>simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr;
    os>>simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_incr;
    os>>simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_next;
    os>>simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_wrap;
    os>>simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst;
    os>>simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arid;
    os>>simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen;
    os>>simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen_last;
    os>>simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arsize;
    os>>simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_push;
    os>>simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop;
    os>>simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_push;
    os>>simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas;
    os>>simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_pop;
    os>>simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_push;
    os>>simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid;
    os>>simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid;
    os>>simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_en;
    os>>simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur;
    os>>simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rid;
    os>>simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rlast;
    os>>simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rvalid;
    os>>simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr;
    os>>simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_incr;
    os>>simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_next;
    os>>simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_wrap;
    os>>simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst;
    os>>simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awid;
    os>>simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awlen;
    os>>simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awsize;
    os>>simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_push;
    os>>simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop;
    os>>simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_push;
    os>>simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas;
    os>>simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_pop;
    os>>simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_push;
    os>>simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid;
    os>>simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_valid;
    os>>simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_allow_out;
    os>>simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_data;
    os>>simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop;
    os>>simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_datas;
    os>>simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_pop;
    os>>simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_push;
    os>>simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid;
    os>>simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid;
    os>>simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en;
    os>>simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_go;
    os>>simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wdata;
    os>>simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wlast;
    os>>simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wstrb;
    os>>simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wvalid;
    os>>simu_top__DOT__soc__DOT__confreg__DOT__cr0;
    os>>simu_top__DOT__soc__DOT__confreg__DOT__cr1;
    os>>simu_top__DOT__soc__DOT__confreg__DOT__cr2;
    os>>simu_top__DOT__soc__DOT__confreg__DOT__cr3;
    os>>simu_top__DOT__soc__DOT__confreg__DOT__cr4;
    os>>simu_top__DOT__soc__DOT__confreg__DOT__cr5;
    os>>simu_top__DOT__soc__DOT__confreg__DOT__cr6;
    os>>simu_top__DOT__soc__DOT__confreg__DOT__cr7;
    os>>simu_top__DOT__soc__DOT__confreg__DOT__led_data;
    os>>simu_top__DOT__soc__DOT__confreg__DOT__led_rg0_data;
    os>>simu_top__DOT__soc__DOT__confreg__DOT__led_rg1_data;
    os>>simu_top__DOT__soc__DOT__confreg__DOT__num_data;
    os>>simu_top__DOT__soc__DOT__confreg__DOT__confreg_uart_data;
    os>>simu_top__DOT__soc__DOT__confreg__DOT__confreg_uart_valid;
    os>>simu_top__DOT__soc__DOT__confreg__DOT__timer_r2;
    os>>simu_top__DOT__soc__DOT__confreg__DOT__simu_flag;
    os>>simu_top__DOT__soc__DOT__confreg__DOT__io_simu;
    os>>simu_top__DOT__soc__DOT__confreg__DOT__virtual_uart_data;
    os>>simu_top__DOT__soc__DOT__confreg__DOT__open_trace;
    os>>simu_top__DOT__soc__DOT__confreg__DOT__num_monitor;
    os>>simu_top__DOT__soc__DOT__confreg__DOT__conf_rdata_reg;
    os>>simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin;
    os>>simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r1;
    os>>simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r2;
    os>>simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r3;
    os>>simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r1;
    os>>simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r2;
    os>>simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r;
    os>>simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r1;
    os>>simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r2;
    os>>simu_top__DOT__soc__DOT__confreg__DOT__timer_r1;
    os>>simu_top__DOT__soc__DOT__confreg__DOT__timer;
    os>>simu_top__DOT__soc__DOT__confreg__DOT__write_timer;
    os>>simu_top__DOT__soc__DOT__confreg__DOT__write_uart_valid;
    os>>simu_top__DOT__soc__DOT__confreg__DOT__btn_key_r;
    os>>simu_top__DOT__soc__DOT__confreg__DOT__state;
    os>>simu_top__DOT__soc__DOT__confreg__DOT__next_state;
    os>>simu_top__DOT__soc__DOT__confreg__DOT__key_flag;
    os>>simu_top__DOT__soc__DOT__confreg__DOT__key_count;
    os>>simu_top__DOT__soc__DOT__confreg__DOT__state_count;
    os>>simu_top__DOT__soc__DOT__confreg__DOT__btn_key_tmp;
    os>>simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r;
    os>>simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r;
    os>>simu_top__DOT__soc__DOT__confreg__DOT__step0_flag;
    os>>simu_top__DOT__soc__DOT__confreg__DOT__step0_count;
    os>>simu_top__DOT__soc__DOT__confreg__DOT__step1_flag;
    os>>simu_top__DOT__soc__DOT__confreg__DOT__step1_count;
    os>>simu_top__DOT__soc__DOT__confreg__DOT__count;
    os>>simu_top__DOT__soc__DOT__confreg__DOT__scan_data;
    os>>__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__Vfuncout;
    os>>__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__valid;
    os>>__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__pre_num;
    os>>__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__Vfuncout;
    os>>__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__valid;
    os>>__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__pre_num;
    os>>__Vtableidx1;
    os>>__Vtableidx2;
    os>>__Vtableidx3;
    os>>__Vtableidx4;
    os>>__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp_valid;
    os>>__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid;
    os>>__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf__v0;
    os>>__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req;
    os>>__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_size_r;
    os>>__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r;
    os>>__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wdata_r;
    os>>__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wstrb_r;
    os>>__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr;
    os>>__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr;
    os>>__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu;
    os>>__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb;
    os>>__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32;
    os>>__Vdly__simu_top__DOT__soc__DOT__apb_s_bvalid;
    os>>__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd;
    os>>__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size;
    os>>__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count;
    os>>__Vdly__simu_top__DOT__soc__DOT__apb_s_rvalid;
    os>>__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant;
    os>>__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count;
    os>>__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop;
    os>>__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset;
    os>>__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier;
    os>>__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5r;
    os>>__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc;
    os>>__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt;
    os>>__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_pnd;
    os>>__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_pnd;
    os>>__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_pnd;
    os>>__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_pnd;
    os>>__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_pnd;
    os>>__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate;
    os>>__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time;
    os>>__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter;
    os>>__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error;
    os>>__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter;
    os>>__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor;
    os>>__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__shift_out;
    os>>__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_out;
    os>>__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    os>>__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count;
    os>>__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0;
    os>>__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate;
    os>>__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_xor;
    os>>__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift;
    os>>__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b;
    os>>__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t;
    os>>__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top;
    os>>__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    os>>__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count;
    os>>__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0;
    os>>__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16;
    os>>__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17;
    os>>__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18;
    os>>__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v19;
    os>>__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0;
    os>>__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command;
    os>>__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half;
    os>>__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob;
    os>>__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_;
    os>>__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND;
    os>>__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count;
    os>>__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR;
    os>>__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE;
    os>>__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO;
    os>>__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status;
    os>>__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM;
    os>>__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM;
    os>>__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE;
    os>>__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer;
    os>>__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ;
    os>>__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ERASE_SERIAL;
    os>>__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM;
    os>>__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT;
    os>>__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT;
    os>>__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT;
    os>>__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE;
    os>>__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM;
    os>>__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE;
    os>>__Vdly__simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rcur;
    os>>__Vdly__simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur;
    os>>__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr0;
    os>>__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr6;
    os>>__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr1;
    os>>__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr2;
    os>>__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr3;
    os>>__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr4;
    os>>__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr5;
    os>>__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr7;
    os>>__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r1;
    os>>__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__key_count;
    os>>__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__state_count;
    os>>__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__step0_count;
    os>>__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__step1_count;
    os>>__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__count;
    os>>__Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog;
    os>>__Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr;
    os>>__Vdlyvdim0__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v0;
    os>>__Vdlyvval__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v0;
    os>>__Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v0;
    os>>__Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v1;
    os>>__Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr;
    os>>__Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram__v0;
    os>>__Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram__v1;
    os>>__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__timer;
    os>>__VinpClk__TOP__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT____Vcellinp__myDiv__clk;
    os>>__Vclklast__TOP____VinpClk__TOP__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT____Vcellinp__myDiv__clk;
    os>>__Vclklast__TOP__DifftestLoadEvent__02Eclock;
    os>>__Vclklast__TOP__DifftestTrapEvent__02Eclock;
    os>>__Vclklast__TOP__DifftestStoreEvent__02Eclock;
    os>>__Vclklast__TOP__DifftestExcpEvent__02Eclock;
    os>>__Vclklast__TOP__aclk;
    os>>__Vclklast__TOP__DifftestInstrCommit__02Eclock;
    os>>__Vclklast__TOP__DifftestCSRRegState__02Eclock;
    os>>__Vclklast__TOP__DifftestGRegState__02Eclock;
    os>>__Vchglast__TOP__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT____Vcellinp__myDiv__clk;
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            os>>__Vm_traceActivity[__Vi0];
    }}
    __VlSymsp->__Vdeserialize(os);
}

void Vsimu_top::_initial__TOP__1(Vsimu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top::_initial__TOP__1\n"); );
    Vsimu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_ce = 0U;
}

void Vsimu_top::_settle__TOP__2(Vsimu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top::_settle__TOP__2\n"); );
    Vsimu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp2[3];
    WData/*95:0*/ __Vtemp3[3];
    WData/*95:0*/ __Vtemp6[3];
    WData/*95:0*/ __Vtemp7[3];
    WData/*127:0*/ __Vtemp16[4];
    WData/*127:0*/ __Vtemp17[4];
    // Body
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[0U] = 0U;
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[0U] = 0U;
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[2U] = 0U;
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[2U] = 0U;
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[3U] = 0U;
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[3U] = 0U;
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready 
        = ((0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_wready) 
              << 1U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[1U] 
        = vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_bid;
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[1U] 
        = vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_bresp;
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[1U] 
        = vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rid;
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[1U] 
        = vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rresp;
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast 
        = ((0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rlast) 
              << 1U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready 
        = ((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_wready) 
              << 4U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[4U] 
        = vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_bid;
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[4U] 
        = vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_bresp;
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[4U] 
        = vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rid;
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[4U] 
        = vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rresp;
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast 
        = ((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rlast) 
              << 4U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[1U] 
        = vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rdata;
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[4U] 
        = vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rdata;
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready 
        = ((0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_awready) 
              << 1U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready 
        = ((0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_arready) 
              << 1U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready 
        = ((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_awready) 
              << 4U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready 
        = ((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_arready) 
              << 4U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit 
        = (0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit 
        = (0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit 
        = (0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit 
        = (0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid 
        = ((0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rvalid) 
              << 1U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid 
        = ((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rvalid) 
              << 4U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[0U] 
        = vlTOPp->ram_rdata;
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__divNeed 
        = (((IData)(vlTOPp->aclk) << 1U) | (IData)(vlTOPp->aresetn));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid 
        = ((0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_bvalid) 
              << 1U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid 
        = ((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_bvalid) 
              << 4U));
    __Vtemp2[0U] = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__dividend_reg;
    __Vtemp2[1U] = (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__minuend);
    __Vtemp2[2U] = (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__minuend 
                            >> 0x20U));
    VL_SHIFTL_WWI(65,65,32, __Vtemp3, __Vtemp2, 1U);
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__dividend_next 
        = __Vtemp3[0U];
    __Vtemp6[0U] = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__dividend_reg;
    __Vtemp6[1U] = (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__minuend);
    __Vtemp6[2U] = (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__minuend 
                            >> 0x20U));
    VL_SHIFTL_WWI(65,65,32, __Vtemp7, __Vtemp6, 1U);
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__minuend_shifted 
        = (0x1ffffffffULL & (((QData)((IData)((1U & 
                                               __Vtemp7[2U]))) 
                              << 0x20U) | (QData)((IData)(
                                                          __Vtemp7[1U]))));
    vlTOPp->confreg_uart_data = vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__confreg_uart_data;
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top)));
    vlTOPp->ram_raddr = vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr;
    vlTOPp->ram_waddr = vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr;
    vlTOPp->ram_wdata = vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wdata;
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_empty 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr) 
           == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__trigger_level 
        = ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fcr))
            ? ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fcr))
                ? 0xeU : 8U) : ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fcr))
                                 ? 4U : 1U));
    vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_incr 
        = ((0xfffffffcU & vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_incr) 
           | (3U & vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr));
    vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_incr 
        = ((3U & vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_incr) 
           | (0xfffffffcU & (((IData)(1U) + (vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr 
                                             >> 2U)) 
                             << 2U)));
    vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_wrap 
        = ((0xfffffffcU & vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_wrap) 
           | (3U & vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr));
    vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_incr 
        = ((0xfffffffcU & vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_incr) 
           | (3U & vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr));
    vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_incr 
        = ((3U & vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_incr) 
           | (0xfffffffcU & (((IData)(1U) + (vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr 
                                             >> 2U)) 
                             << 2U)));
    vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_wrap 
        = ((0xfffffffcU & vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_wrap) 
           | (3U & vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr));
    vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_wrap 
        = ((3U & vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_wrap) 
           | ((0xffffffc0U & vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr) 
              | (0x3cU & ((0xfffffffcU & (vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr 
                                          & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen)) 
                                             << 2U))) 
                          | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen) 
                              & ((IData)(1U) + (vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr 
                                                >> 2U))) 
                             << 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_wrap 
        = ((3U & vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_wrap) 
           | ((0xffffffc0U & vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr) 
              | (0x3cU & ((0xfffffffcU & (vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr 
                                          & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awlen)) 
                                             << 2U))) 
                          | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awlen) 
                              & ((IData)(1U) + (vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr 
                                                >> 2U))) 
                             << 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[0U] 
        = vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_data;
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[0U] 
        = vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rid;
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast 
        = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast)) 
           | (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rlast));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready 
        = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__apb_s_wready) 
              << 2U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[2U] 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_w_id;
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[2U] 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_r_id;
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast 
        = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__apb_s_rlast) 
              << 2U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[3U] 
        = vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_data;
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[3U] 
        = vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rid;
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast 
        = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rlast) 
              << 3U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[3U] 
        = vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__conf_rdata_reg;
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[2U] 
        = ((0U == (3U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb)))
            ? vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32
            : ((1U == (3U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb)))
                ? (0xffffff00U & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                                  << 8U)) : ((2U == 
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
                                                  : 0U))));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready 
        = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__apb_s_awready) 
              << 2U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready 
        = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__apb_s_arready) 
              << 2U));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr 
        = (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7r) 
            << 7U) | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6r) 
                       << 6U) | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5r) 
                                  << 5U) | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr4r) 
                                             << 4U) 
                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr3r) 
                                                << 3U) 
                                               | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr2r) 
                                                   << 2U) 
                                                  | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr1r) 
                                                      << 1U) 
                                                     | (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0r))))))));
    vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen_last 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen) 
           == (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_pre_o 
        = ((0xeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_pre_o)) 
           | ((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_number)) 
              | (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_)));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_pre_o 
        = ((0xdU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_pre_o)) 
           | (((1U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_number)) 
               | (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_)) 
              << 1U));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_pre_o 
        = ((0xbU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_pre_o)) 
           | (((2U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_number)) 
               | (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_)) 
              << 2U));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_pre_o 
        = ((7U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_pre_o)) 
           | (((3U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_number)) 
               | (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_)) 
              << 3U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu_wvalid = (
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req) 
                                                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wr_r)) 
                                                   & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__wdata_rcv)));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr) 
           == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_dir 
        = vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram
        [(1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr))];
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr) 
           == ((2U & ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr) 
                          >> 1U)) << 1U)) | (1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr))));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr) 
           == ((2U & ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr) 
                          >> 1U)) << 1U)) | (1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu_arvalid = 
        (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req) 
          & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wr_r))) 
         & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__addr_rcv)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu_awvalid = 
        (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req) 
          & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wr_r)) 
         & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__addr_rcv)));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_enab 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)
            ? (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_dma)
            : (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_allow_in 
        = (1U & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_valid)) 
                 | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_valid)));
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0U] 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[0U];
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[1U] 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[1U];
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U] 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[2U];
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[3U] 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[3U];
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[4U] 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[4U];
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data[5U];
    } else {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0U] = 0U;
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[1U] = 0U;
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U] = 0U;
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[3U] = 0U;
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[4U] = 0U;
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] = 0U;
    }
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_psel 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)
            ? (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_dma)
            : (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu));
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_valid) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[0U] 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[0U];
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[1U] 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[1U];
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U] 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[2U];
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data[3U];
    } else {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[0U] = 0U;
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[1U] = 0U;
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U] = 0U;
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] = 0U;
    }
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__pipeline_valid)
            ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__pipeline_data
            : 0x100000ULL);
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid 
        = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid)) 
           | (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rvalid));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid 
        = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__apb_s_rvalid) 
              << 2U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid 
        = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rvalid) 
              << 3U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir 
        = vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram
        [(1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr))];
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid 
        = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__apb_s_bvalid) 
              << 2U));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_data_out 
        = (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__data8_out) 
            << 3U) | vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
           [vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom]);
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen_last 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen) 
           == (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rcur));
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_valid) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0U] 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[0U];
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[1U] 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[1U];
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U] 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data[2U];
    } else {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[0U] = 0U;
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[1U] = 0U;
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U] = 0U;
    }
    vlTOPp->open_trace = vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__open_trace;
    vlTOPp->num_monitor = vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__num_monitor;
    vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_random_next 
        = ((0x7ffffeU & (vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                         << 1U)) | (1U & ((vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                           >> 0x16U) 
                                          ^ (vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                             >> 0x11U))));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top)));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_7 
        = (7U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_0 
        = (0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1 
        = (0xfU & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16) 
                   - (IData)(1U)));
    vlTOPp->led = (0xffffU & vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__led_data);
    vlTOPp->led_rg0 = (3U & vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__led_rg0_data);
    vlTOPp->led_rg1 = (3U & vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__led_rg1_data);
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NANDtag 
        = ((IData)(vlTOPp->aresetn) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_cmd_valid));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr_incr 
        = ((0xfffffffcU & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr_incr) 
           | (3U & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr_incr 
        = ((3U & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr_incr) 
           | (0xfffffffcU & (((IData)(1U) + (vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr 
                                             >> 2U)) 
                             << 2U)));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr_wrap 
        = ((0xfffffffcU & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr_wrap) 
           | (3U & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr_wrap 
        = ((3U & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr_wrap) 
           | ((0xffffffc0U & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr) 
              | (0x3cU & ((0xfffffffcU & (vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr 
                                          & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen)) 
                                             << 2U))) 
                          | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen) 
                              & ((IData)(1U) + (vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr 
                                                >> 2U))) 
                             << 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready 
        = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready)) 
           | (1U & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid))));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready 
        = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready)) 
           | (1U & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid))));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready 
        = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready)) 
           | (8U & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid)) 
                    << 3U)));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready 
        = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready)) 
           | (8U & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid)) 
                    << 3U)));
    vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_w 
        = (1U & ((vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                  >> 4U) | (IData)(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_w_disable)));
    vlTOPp->simu_top__DOT__soc__DOT__m0_bready = (1U 
                                                  & ((vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                                      >> 2U) 
                                                     | (~ (IData)(vlTOPp->enable_delay))));
    vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_ar 
        = (1U & (vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                 | (IData)(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_ar_disable)));
    vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_aw 
        = (1U & ((vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                  >> 1U) | (IData)(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_aw_disable)));
    vlTOPp->simu_top__DOT__soc__DOT__m0_rready = (1U 
                                                  & ((vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                                      >> 3U) 
                                                     | (~ (IData)(vlTOPp->enable_delay))));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid 
        = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid)) 
           | (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid 
        = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid) 
              << 3U));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_push_pulse 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push) 
           & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push_q)));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)
            ? (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_rw_dma)
            : (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr));
    vlTOPp->num_data = vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__num_data;
    vlTOPp->btn_key_col = ((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state))
                            ? 0U : ((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state))
                                     ? 0xeU : ((2U 
                                                == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state))
                                                ? 0xdU
                                                : (
                                                   (3U 
                                                    == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state))
                                                    ? 0xbU
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state))
                                                     ? 7U
                                                     : 0U)))));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7 
        = ((0U != (((((((((((((((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0U] | vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [1U]) | vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                [2U]) | vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [3U]) | vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]) | vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                             [5U]) | vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                            [6U]) | vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                           [7U]) | vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                          [8U]) | vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                         [9U]) | vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                        [0xaU]) | vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                       [0xbU]) | vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                      [0xcU]) | vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                     [0xdU]) | vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                    [0xeU]) | vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                   [0xfU])) | (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_overrun));
    vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__btn_key_tmp 
        = (((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
            & (0xeU == (IData)(vlTOPp->btn_key_row)))
            ? 1U : (((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                     & (0xdU == (IData)(vlTOPp->btn_key_row)))
                     ? 0x10U : (((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                 & (0xbU == (IData)(vlTOPp->btn_key_row)))
                                 ? 0x100U : (((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                              & (7U 
                                                 == (IData)(vlTOPp->btn_key_row)))
                                              ? 0x1000U
                                              : (((2U 
                                                   == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                  & (0xeU 
                                                     == (IData)(vlTOPp->btn_key_row)))
                                                  ? 2U
                                                  : 
                                                 (((2U 
                                                    == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                   & (0xdU 
                                                      == (IData)(vlTOPp->btn_key_row)))
                                                   ? 0x20U
                                                   : 
                                                  (((2U 
                                                     == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                    & (0xbU 
                                                       == (IData)(vlTOPp->btn_key_row)))
                                                    ? 0x200U
                                                    : 
                                                   (((2U 
                                                      == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                     & (7U 
                                                        == (IData)(vlTOPp->btn_key_row)))
                                                     ? 0x2000U
                                                     : 
                                                    (((3U 
                                                       == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                      & (0xeU 
                                                         == (IData)(vlTOPp->btn_key_row)))
                                                      ? 4U
                                                      : 
                                                     (((3U 
                                                        == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                       & (0xdU 
                                                          == (IData)(vlTOPp->btn_key_row)))
                                                       ? 0x40U
                                                       : 
                                                      (((3U 
                                                         == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                        & (0xbU 
                                                           == (IData)(vlTOPp->btn_key_row)))
                                                        ? 0x400U
                                                        : 
                                                       (((3U 
                                                          == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                         & (7U 
                                                            == (IData)(vlTOPp->btn_key_row)))
                                                         ? 0x4000U
                                                         : 
                                                        (((4U 
                                                           == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                          & (0xeU 
                                                             == (IData)(vlTOPp->btn_key_row)))
                                                          ? 8U
                                                          : 
                                                         (((4U 
                                                            == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                           & (0xdU 
                                                              == (IData)(vlTOPp->btn_key_row)))
                                                           ? 0x80U
                                                           : 
                                                          (((4U 
                                                             == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                            & (0xbU 
                                                               == (IData)(vlTOPp->btn_key_row)))
                                                            ? 0x800U
                                                            : 
                                                           (((4U 
                                                              == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                             & (7U 
                                                                == (IData)(vlTOPp->btn_key_row)))
                                                             ? 0x8000U
                                                             : 0U))))))))))))))));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6 
        = (((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count)) 
            & (~ (IData)((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt))))) 
           & (0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate)));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int 
        = (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier) 
            & (0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t))) 
           & (0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count)));
    vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__next_state 
        = ((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state))
            ? ((1U & ((vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__key_count 
                       >> 0x13U) & (~ (IData)((0xfU 
                                               == (IData)(vlTOPp->btn_key_row))))))
                ? 1U : 0U) : ((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state))
                               ? ((0xfU == (IData)(vlTOPp->btn_key_row))
                                   ? 2U : 7U) : ((2U 
                                                  == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state))
                                                  ? 
                                                 ((0xfU 
                                                   == (IData)(vlTOPp->btn_key_row))
                                                   ? 3U
                                                   : 7U)
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state))
                                                   ? 
                                                  ((0xfU 
                                                    == (IData)(vlTOPp->btn_key_row))
                                                    ? 4U
                                                    : 7U)
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state))
                                                    ? 
                                                   ((0xfU 
                                                     == (IData)(vlTOPp->btn_key_row))
                                                     ? 0U
                                                     : 7U)
                                                    : 
                                                   ((7U 
                                                     == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state))
                                                     ? 
                                                    (((vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__key_count 
                                                       >> 0x13U) 
                                                      & (0xfU 
                                                         == (IData)(vlTOPp->btn_key_row)))
                                                      ? 0U
                                                      : 7U)
                                                     : 0U))))));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY_post_i 
        = ((0xeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY_post_i)) 
           | (1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r1)));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY_post_i 
        = ((0xdU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY_post_i)) 
           | (2U & (((0x1000U & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0)
                      ? (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r1)
                      : ((0x2000U & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0)
                          ? ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r1) 
                             >> 1U) : ((0x4000U & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0)
                                        ? ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r1) 
                                           >> 2U) : 
                                       ((~ (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0 
                                            >> 0xfU)) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r1) 
                                           >> 3U))))) 
                    << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY_post_i 
        = ((0xbU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY_post_i)) 
           | (4U & (((0x100000U & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0)
                      ? (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r1)
                      : ((0x200000U & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0)
                          ? ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r1) 
                             >> 1U) : ((0x400000U & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0)
                                        ? ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r1) 
                                           >> 2U) : 
                                       ((~ (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0 
                                            >> 0x17U)) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r1) 
                                           >> 3U))))) 
                    << 2U)));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY_post_i 
        = ((7U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY_post_i)) 
           | (8U & (((0x10000000U & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0)
                      ? (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r1)
                      : ((0x20000000U & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0)
                          ? ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r1) 
                             >> 1U) : ((0x40000000U 
                                        & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0)
                                        ? ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r1) 
                                           >> 2U) : 
                                       ((~ (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0 
                                            >> 0x1fU)) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r1) 
                                           >> 3U))))) 
                    << 3U)));
    vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_allow_out 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_valid) 
           & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid)));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_allow_out 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_valid) 
           & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid)));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_incr 
        = ((0xfffffffcU & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_incr) 
           | (3U & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_incr 
        = ((3U & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_incr) 
           | (0xfffffffcU & (((IData)(1U) + (vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr 
                                             >> 2U)) 
                             << 2U)));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_wrap 
        = ((0xfffffffcU & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_wrap) 
           | (3U & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_wrap 
        = ((3U & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_wrap) 
           | ((0xffffffc0U & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr) 
              | (0x3cU & ((0xfffffffcU & (vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr 
                                          & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awlen)) 
                                             << 2U))) 
                          | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awlen) 
                              & ((IData)(1U) + (vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr 
                                                >> 2U))) 
                             << 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode 
        = ((2U == (3U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg))) 
           | (3U == (3U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg))));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit 
        = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit)) 
           | ((0x1fe0U == (0xffffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r 
                                      >> 0x10U))) << 2U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit 
        = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit)) 
           | (((0x1fafU == (0x1fffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r 
                                       >> 0x10U))) 
               | (0x1fd0U == (0x1fffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r 
                                         >> 0x10U)))) 
              << 3U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit 
        = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit)) 
           | (1U & (~ ((0x1fe0U == (0xffffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r 
                                               >> 0x10U))) 
                       | ((0x1fafU == (0x1fffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r 
                                                  >> 0x10U))) 
                          | (0x1fd0U == (0x1fffU & 
                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r 
                                          >> 0x10U))))))));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit 
        = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit)) 
           | ((0x1fe0U == (0xffffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r 
                                      >> 0x10U))) << 2U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit 
        = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit)) 
           | (((0x1fafU == (0x1fffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r 
                                       >> 0x10U))) 
               | (0x1fd0U == (0x1fffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r 
                                         >> 0x10U)))) 
              << 3U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit 
        = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit)) 
           | (1U & (~ (((0x1fafU == (0x1fffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r 
                                                >> 0x10U))) 
                        | (0x1fd0U == (0x1fffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r 
                                                  >> 0x10U)))) 
                       | (0x1fe0U == (0xffffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r 
                                                 >> 0x10U)))))));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_next 
        = (0x1ffU & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_cnt) 
                     + (0xffU & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl 
                                 >> 0x10U))));
    if (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant) {
        vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai 
            = (0xffU & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_wdata_dma);
        vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
            = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_addr_dma;
    } else {
        vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai 
            = (0xffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datai_cpu));
        vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
            = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr;
    }
    vlTOPp->__Vtableidx3 = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr;
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value 
        = vlTOPp->__Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value
        [vlTOPp->__Vtableidx3];
    vlTOPp->__Vtableidx4 = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr;
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value 
        = vlTOPp->__Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value
        [vlTOPp->__Vtableidx4];
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_out 
        = ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
               >> 6U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT____Vcellinp__myDiv__clk 
        = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__divNeed) 
                 >> 1U));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier) 
           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count) 
              >= (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__trigger_level)));
    vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_next 
        = ((((- (IData)((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)))) 
             & vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr) 
            | ((- (IData)((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)))) 
               & vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_incr)) 
           | ((- (IData)((2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)))) 
              & vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_wrap));
    vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_next 
        = ((((- (IData)((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst)))) 
             & vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr) 
            | ((- (IData)((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst)))) 
               & vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_incr)) 
           | ((- (IData)((2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst)))) 
              & vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_wrap));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int 
        = (1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier) 
                  >> 2U) & (((((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr) 
                               >> 1U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr) 
                                         >> 2U)) | 
                             ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr) 
                              >> 3U)) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr) 
                                         >> 4U))));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int 
        = (1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier) 
                  >> 1U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr) 
                            >> 5U)));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_ce 
        = ((0xeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_ce)) 
           | (1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_pre_o)));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_ce 
        = ((0xdU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_ce)) 
           | (2U & (((0x100U & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0)
                      ? (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_pre_o)
                      : ((0x200U & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0)
                          ? ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_pre_o) 
                             >> 1U) : ((0x400U & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0)
                                        ? ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_pre_o) 
                                           >> 2U) : 
                                       ((~ (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0 
                                            >> 0xbU)) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_pre_o) 
                                           >> 3U))))) 
                    << 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_ce 
        = ((0xbU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_ce)) 
           | (4U & (((0x10000U & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0)
                      ? (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_pre_o)
                      : ((0x20000U & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0)
                          ? ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_pre_o) 
                             >> 1U) : ((0x40000U & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0)
                                        ? ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_pre_o) 
                                           >> 2U) : 
                                       ((~ (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0 
                                            >> 0x13U)) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_pre_o) 
                                           >> 3U))))) 
                    << 2U)));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_ce 
        = ((7U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_ce)) 
           | (8U & (((0x1000000U & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0)
                      ? (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_pre_o)
                      : ((0x2000000U & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0)
                          ? ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_pre_o) 
                             >> 1U) : ((0x4000000U 
                                        & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0)
                                        ? ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_pre_o) 
                                           >> 2U) : 
                                       ((~ (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0 
                                            >> 0x1bU)) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_pre_o) 
                                           >> 3U))))) 
                    << 3U)));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound5 
        = ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty)) 
           & (0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_dir)));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit 
        = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit)) 
           | (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound5));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound5 
        = ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty)) 
           & (1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_dir)));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit 
        = ((0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound5) 
              << 1U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound5 
        = ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty)) 
           & (2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_dir)));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit 
        = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound5) 
              << 2U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound5 
        = ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty)) 
           & (3U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_dir)));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit 
        = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound5) 
              << 3U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound5 
        = ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty)) 
           & (4U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_dir)));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit 
        = ((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound5) 
              << 4U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem 
        = ((0U == (3U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                         >> 0x12U))) ? ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex)
                                         ? ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex)
                                             ? 8U : 4U)
                                         : ((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex)
                                             ? 2U : 1U))
            : ((1U == (3U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                             >> 0x12U))) ? ((0U == 
                                             (3U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex))
                                             ? 3U : 
                                            ((2U == 
                                              (3U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex))
                                              ? 0xcU
                                              : 3U))
                : 0xfU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_cin 
        = (1U & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                     >> 0x1aU)) & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                       >> 0x19U)) & 
                                   ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                        >> 0x18U)) 
                                    & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                        >> 0x17U) | 
                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                        >> 0x16U))))));
    vlTOPp->debug0_wb_rf_wen = (1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[0U]);
    vlTOPp->debug0_wb_pc = ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[1U] 
                             << 0x1cU) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[0U] 
                                          >> 4U));
    vlTOPp->debug0_wb_rf_wnum = (0x1fU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                                          >> 4U));
    vlTOPp->simu_top__DOT__soc__DOT__m0_rid = 0U;
    if ((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_rid = vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid
            [0U];
    }
    if ((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_rid = vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid
            [1U];
    }
    if ((2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_rid = vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid
            [2U];
    }
    if ((3U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_rid = vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid
            [3U];
    }
    if ((4U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_rid = vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid
            [4U];
    }
    vlTOPp->simu_top__DOT__soc__DOT__m0_rresp = 0U;
    if ((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_rresp = 
            vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp
            [0U];
    }
    if ((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_rresp = 
            vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp
            [1U];
    }
    if ((2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_rresp = 
            vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp
            [2U];
    }
    if ((3U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_rresp = 
            vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp
            [3U];
    }
    if ((4U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_rresp = 
            vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp
            [4U];
    }
    vlTOPp->simu_top__DOT__soc__DOT__m0_rlast = 0U;
    if ((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_rlast = 
            (1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast));
    }
    if ((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_rlast = 
            (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast) 
                   >> 1U));
    }
    if ((2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_rlast = 
            (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast) 
                   >> 2U));
    }
    if ((3U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_rlast = 
            (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast) 
                   >> 3U));
    }
    if ((4U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_rlast = 
            (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast) 
                   >> 4U));
    }
    vlTOPp->simu_top__DOT__soc__DOT__m0_rdata = 0U;
    if ((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_rdata = 
            vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata
            [0U];
    }
    if ((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_rdata = 
            vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata
            [1U];
    }
    if ((2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_rdata = 
            vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata
            [2U];
    }
    if ((3U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_rdata = 
            vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata
            [3U];
    }
    if ((4U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_rdata = 
            vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata
            [4U];
    }
    vlTOPp->simu_top__DOT__soc__DOT__m0_rvalid = 0U;
    if ((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_rvalid 
            = (1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid));
    }
    if ((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_rvalid 
            = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid) 
                     >> 1U));
    }
    if ((2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_rvalid 
            = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid) 
                     >> 2U));
    }
    if ((3U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_rvalid 
            = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid) 
                     >> 3U));
    }
    if ((4U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_rvalid 
            = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid) 
                     >> 4U));
    }
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb 
        = ((0x200U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U])
            ? ((0x200U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U])
                ? ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[2U] 
                    << 0x1cU) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[1U] 
                                 >> 4U)) : 0U) : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[1U]);
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr_next 
        = ((((- (IData)((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst)))) 
             & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr) 
            | ((- (IData)((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst)))) 
               & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr_incr)) 
           | ((- (IData)((2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst)))) 
              & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr_wrap));
    vlTOPp->simu_top__DOT__soc__DOT__m0_wvalid = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu_wvalid) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_w) 
                                                     | (~ (IData)(vlTOPp->enable_delay))));
    vlTOPp->simu_top__DOT__soc__DOT__m0_arvalid = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu_arvalid) 
                                                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_ar) 
                                                      | (~ (IData)(vlTOPp->enable_delay))));
    vlTOPp->simu_top__DOT__soc__DOT__m0_awvalid = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu_awvalid) 
                                                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_aw) 
                                                      | (~ (IData)(vlTOPp->enable_delay))));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
        = (0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready));
    if ((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound9 
            = vlTOPp->simu_top__DOT__soc__DOT__m0_rready;
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
            = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready)) 
               | (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound9));
    }
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
        = (0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready));
    if ((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound9 
            = vlTOPp->simu_top__DOT__soc__DOT__m0_rready;
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
            = ((0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready)) 
               | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound9) 
                  << 1U));
    }
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
        = (0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready));
    if ((2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound9 
            = vlTOPp->simu_top__DOT__soc__DOT__m0_rready;
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
            = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready)) 
               | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound9) 
                  << 2U));
    }
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
        = (0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready));
    if ((3U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound9 
            = vlTOPp->simu_top__DOT__soc__DOT__m0_rready;
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
            = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready)) 
               | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound9) 
                  << 3U));
    }
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
        = (0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready));
    if ((4U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound9 
            = vlTOPp->simu_top__DOT__soc__DOT__m0_rready;
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
            = ((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready)) 
               | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound9) 
                  << 4U));
    }
    vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__pre_num 
        = vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_pre_sel;
    vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__valid 
        = (7U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid));
    vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__Vfuncout 
        = ((1U == (IData)(vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__valid))
            ? 0U : ((2U == (IData)(vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__valid))
                     ? 1U : ((4U == (IData)(vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__valid))
                              ? 2U : ((3U == (IData)(vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__valid))
                                       ? ((0U != (IData)(vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__pre_num))
                                           ? 0U : 1U)
                                       : ((6U == (IData)(vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__valid))
                                           ? ((1U != (IData)(vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__pre_num))
                                               ? 1U
                                               : 2U)
                                           : ((5U == (IData)(vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__valid))
                                               ? ((2U 
                                                   != (IData)(vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__pre_num))
                                                   ? 2U
                                                   : 0U)
                                               : ((7U 
                                                   == (IData)(vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__valid))
                                                   ? 
                                                  ((0U 
                                                    == (IData)(vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__pre_num))
                                                    ? 1U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__pre_num))
                                                     ? 2U
                                                     : 0U))
                                                   : 7U)))))));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_0 
        = vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__Vfuncout;
    vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__pre_num 
        = vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_pre_sel;
    vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__valid 
        = (3U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid) 
                 >> 3U));
    vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__Vfuncout 
        = ((1U == (IData)(vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__valid))
            ? 3U : ((2U == (IData)(vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__valid))
                     ? 4U : ((4U == (IData)(vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__valid))
                              ? 5U : ((3U == (IData)(vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__valid))
                                       ? ((3U != (IData)(vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__pre_num))
                                           ? 3U : 4U)
                                       : ((6U == (IData)(vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__valid))
                                           ? ((4U != (IData)(vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__pre_num))
                                               ? 4U
                                               : 5U)
                                           : ((5U == (IData)(vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__valid))
                                               ? ((5U 
                                                   != (IData)(vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__pre_num))
                                                   ? 5U
                                                   : 3U)
                                               : ((7U 
                                                   == (IData)(vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__valid))
                                                   ? 
                                                  ((3U 
                                                    == (IData)(vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__pre_num))
                                                    ? 4U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__pre_num))
                                                     ? 5U
                                                     : 3U))
                                                   : 7U)))))));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_1 
        = vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__Vfuncout;
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0 
        = ((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count)) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_push_pulse));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY 
        = (1U & ((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_number))
                  ? (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY_post_i)
                  : ((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_number))
                      ? ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY_post_i) 
                         >> 1U) : ((2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_number))
                                    ? ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY_post_i) 
                                       >> 2U) : ((3U 
                                                  != (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_number)) 
                                                 | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY_post_i) 
                                                    >> 3U))))));
    vlTOPp->simu_top__DOT__soc__DOT__s0_wready = (1U 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_allow_out) 
                                                     | (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wvalid))));
    vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en 
        = (((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wvalid) 
            & (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_allow_out)) 
           & (IData)(vlTOPp->aresetn));
    vlTOPp->simu_top__DOT__soc__DOT__conf_s_wready 
        = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_allow_out) 
                 | (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wvalid))));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en 
        = (((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wvalid) 
            & (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_allow_out)) 
           & (IData)(vlTOPp->aresetn));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_next 
        = ((((- (IData)((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst)))) 
             & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr) 
            | ((- (IData)((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst)))) 
               & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_incr)) 
           | ((- (IData)((2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst)))) 
              & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_wrap));
    vlTOPp->uart_rx = (((((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode) 
                          & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_reg) 
                             ^ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                                >> 3U))) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode)) 
                        & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode)) 
                       & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int 
        = (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier) 
            >> 3U) & ((2U == (3U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))
                       ? ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time) 
                            == (7U & ((IData)(1U) + (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__repeat_reg)))) 
                           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode)) 
                          & (2U == (3U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg))))
                       : (0U != (0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr)))));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5 
        = (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode)) 
            | ((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate)) 
               & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error) 
                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time) 
                      == (7U & ((IData)(1U) + (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__repeat_reg))))) 
                  | (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error))))) 
           & ((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count)) 
              & (~ (IData)((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt))))));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__rx_en 
        = (((0U == (3U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg))) 
            | (1U == (3U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode) 
              & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                 >> 2U)));
    vlTOPp->__Vtableidx1 = vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit;
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir 
        = vlTOPp->__Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir
        [vlTOPp->__Vtableidx1];
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int 
        = vlTOPp->__Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int
        [vlTOPp->__Vtableidx1];
    vlTOPp->simu_top__DOT__soc__DOT__m0_awready = 0U;
    if ((1U & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
               & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit)))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_awready 
            = (1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready));
    }
    if ((1U & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit) 
                  >> 1U)))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_awready 
            = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready) 
                     >> 1U));
    }
    if ((1U & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit) 
                  >> 2U)))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_awready 
            = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready) 
                     >> 2U));
    }
    if ((1U & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit) 
                  >> 3U)))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_awready 
            = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready) 
                     >> 3U));
    }
    if ((1U & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit) 
                  >> 4U)))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_awready 
            = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready) 
                     >> 4U));
    }
    vlTOPp->__Vtableidx2 = vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit;
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir 
        = vlTOPp->__Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir
        [vlTOPp->__Vtableidx2];
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int 
        = vlTOPp->__Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int
        [vlTOPp->__Vtableidx2];
    vlTOPp->simu_top__DOT__soc__DOT__m0_arready = 0U;
    if ((1U & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
               & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit)))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_arready 
            = (1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready));
    }
    if ((1U & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit) 
                  >> 1U)))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_arready 
            = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready) 
                     >> 1U));
    }
    if ((1U & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit) 
                  >> 2U)))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_arready 
            = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready) 
                     >> 2U));
    }
    if ((1U & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit) 
                  >> 3U)))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_arready 
            = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready) 
                     >> 3U));
    }
    if ((1U & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit) 
                  >> 4U)))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_arready 
            = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready) 
                     >> 4U));
    }
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_toggle 
        = (1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_cnt) 
                  ^ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_next)) 
                 >> 8U));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_datai 
        = ((0xffffff00U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)
                             ? (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_wdata_dma 
                                >> 8U) : vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_high_24b_wr) 
                           << 8U)) | (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_word_trans_cpu 
        = ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)) 
           & (0U != (0x3fU & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                              >> 0xeU))));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_psel 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_psel) 
           & (0U == (0x3fU & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                              >> 0xeU))));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_enab 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_enab) 
           & (0U == (0x3fU & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                              >> 0xeU))));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_enab) 
           & (0U != (0x3fU & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                              >> 0xeU))));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_psel) 
           & (0U != (0x3fU & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                              >> 0xeU))));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_in 
        = (1U & ((0x10U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr))
                  ? (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_out)
                  : ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_pol)
                      ? (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__srx_pad))
                      : (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__srx_pad))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData 
        = ((8U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem))
            ? ((4U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem))
                ? ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem))
                    ? ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem))
                        ? vlTOPp->simu_top__DOT__soc__DOT__m0_rdata
                        : 0U) : ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem))
                                  ? 0U : ((0x800U & 
                                           vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U])
                                           ? ((0x800U 
                                               & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U])
                                               ? (0xffffU 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__m0_rdata 
                                                     >> 0x10U))
                                               : 0U)
                                           : ((0xffff0000U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & (vlTOPp->simu_top__DOT__soc__DOT__m0_rdata 
                                                                 >> 0x1fU)))) 
                                                  << 0x10U)) 
                                              | (0xffffU 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__m0_rdata 
                                                    >> 0x10U))))))
                : ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem))
                    ? 0U : ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem))
                             ? 0U : ((0x800U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U])
                                      ? ((0x800U & 
                                          vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U])
                                          ? (0xffU 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__m0_rdata 
                                                >> 0x18U))
                                          : 0U) : (
                                                   (0xffffff00U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (vlTOPp->simu_top__DOT__soc__DOT__m0_rdata 
                                                                      >> 0x1fU)))) 
                                                       << 8U)) 
                                                   | (0xffU 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__m0_rdata 
                                                         >> 0x18U)))))))
            : ((4U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem))
                ? ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem))
                    ? 0U : ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem))
                             ? 0U : ((0x800U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U])
                                      ? ((0x800U & 
                                          vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U])
                                          ? (0xffU 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__m0_rdata 
                                                >> 0x10U))
                                          : 0U) : (
                                                   (0xffffff00U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (vlTOPp->simu_top__DOT__soc__DOT__m0_rdata 
                                                                      >> 0x17U)))) 
                                                       << 8U)) 
                                                   | (0xffU 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__m0_rdata 
                                                         >> 0x10U))))))
                : ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem))
                    ? ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem))
                        ? ((0x800U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U])
                            ? ((0x800U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U])
                                ? (0xffffU & vlTOPp->simu_top__DOT__soc__DOT__m0_rdata)
                                : 0U) : ((0xffff0000U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (vlTOPp->simu_top__DOT__soc__DOT__m0_rdata 
                                                            >> 0xfU)))) 
                                             << 0x10U)) 
                                         | (0xffffU 
                                            & vlTOPp->simu_top__DOT__soc__DOT__m0_rdata)))
                        : ((0x800U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U])
                            ? ((0x800U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U])
                                ? (0xffU & (vlTOPp->simu_top__DOT__soc__DOT__m0_rdata 
                                            >> 8U))
                                : 0U) : ((0xffffff00U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (vlTOPp->simu_top__DOT__soc__DOT__m0_rdata 
                                                            >> 0xfU)))) 
                                             << 8U)) 
                                         | (0xffU & 
                                            (vlTOPp->simu_top__DOT__soc__DOT__m0_rdata 
                                             >> 8U)))))
                    : ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem))
                        ? ((0x800U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U])
                            ? ((0x800U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U])
                                ? (0xffU & vlTOPp->simu_top__DOT__soc__DOT__m0_rdata)
                                : 0U) : ((0xffffff00U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (vlTOPp->simu_top__DOT__soc__DOT__m0_rdata 
                                                            >> 7U)))) 
                                             << 8U)) 
                                         | (0xffU & vlTOPp->simu_top__DOT__soc__DOT__m0_rdata)))
                        : 0U))));
    vlTOPp->debug0_wb_rf_wdata = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb;
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound6 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_wvalid) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid 
        = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid)) 
           | (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound6));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound6 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_wvalid) 
           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit) 
              >> 1U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid 
        = ((0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound6) 
              << 1U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound6 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_wvalid) 
           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit) 
              >> 2U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid 
        = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound6) 
              << 2U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound6 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_wvalid) 
           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit) 
              >> 3U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid 
        = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound6) 
              << 3U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound6 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_wvalid) 
           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit) 
              >> 4U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid 
        = ((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound6) 
              << 4U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound7 
        = (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
            & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit)) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_arvalid));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid 
        = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid)) 
           | (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound7));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound7 
        = (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
            & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit) 
               >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_arvalid));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid 
        = ((0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound7) 
              << 1U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound7 
        = (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
            & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit) 
               >> 2U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_arvalid));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid 
        = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound7) 
              << 2U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound7 
        = (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
            & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit) 
               >> 3U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_arvalid));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid 
        = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound7) 
              << 3U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound7 
        = (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
            & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit) 
               >> 4U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_arvalid));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid 
        = ((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound7) 
              << 4U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound1 
        = (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
            & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit)) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_awvalid));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid 
        = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid)) 
           | (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound1));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound1 
        = (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
            & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit) 
               >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_awvalid));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid 
        = ((0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound1) 
              << 1U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound1 
        = (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
            & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit) 
               >> 2U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_awvalid));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid 
        = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound1) 
              << 2U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound1 
        = (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
            & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit) 
               >> 3U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_awvalid));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid 
        = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound1) 
              << 3U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound1 
        = (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
            & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit) 
               >> 4U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_awvalid));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid 
        = ((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound1) 
              << 4U));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_valid) 
           & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
               >> 3U) | (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rvalid))));
    vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_en 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid) 
           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
              | (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rvalid))));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel 
        = (((7U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_0)) 
            & (7U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_1)))
            ? 7U : (((7U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_0)) 
                     & (7U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_1)))
                     ? (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_0)
                     : (((7U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_0)) 
                         & (7U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_1)))
                         ? (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_1)
                         : ((2U < (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_pre_sel))
                             ? (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_0)
                             : (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_1)))));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready 
        = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready)) 
           | (IData)(vlTOPp->simu_top__DOT__soc__DOT__s0_wready));
    vlTOPp->ram_wen = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wstrb) 
                       & (- (IData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en))));
    vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wlast));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready 
        = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_wready) 
              << 3U));
    vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wstrb) 
           & (- (IData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en))));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wlast));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____Vcellinp__receiver__enable 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__enable) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__rx_en));
    vlTOPp->simu_top__DOT__soc__DOT__uart0_txd_oe = 
        ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode) 
         & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__rx_en) 
            | (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__tx2rx_en)));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_dir_ins 
        = (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
            & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_awvalid)) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_awready));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_dir_ins 
        = (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
            & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_arvalid)) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_arready));
    __Vtemp16[0U] = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_enab;
    __Vtemp16[1U] = (IData)((((QData)((IData)((0xfU 
                                               & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr))) 
                              << 0x20U) | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw))));
    __Vtemp16[2U] = (IData)(((((QData)((IData)((0xfU 
                                                & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr))) 
                               << 0x20U) | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw))) 
                             >> 0x20U));
    __Vtemp16[3U] = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai;
    VL_EXTEND_WW(128,104, __Vtemp17, __Vtemp16);
    vlTOPp->uart_ctr_bus[0U] = __Vtemp17[0U];
    vlTOPp->uart_ctr_bus[1U] = __Vtemp17[1U];
    vlTOPp->uart_ctr_bus[2U] = __Vtemp17[2U];
    vlTOPp->uart_ctr_bus[3U] = __Vtemp17[3U];
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we 
        = (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_psel) 
            & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_enab)) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__re 
        = (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_psel) 
            & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_enab)) 
           & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw)));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_ready 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu) 
           & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)) 
              & ((0U == (0x3fU & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                  >> 0xeU))) ? (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_enab)
                  : ((0U != (0x3fU & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                      >> 0xeU))) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab)))));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab) 
           & (0x40U == (0x7ffU & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT0 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
           & (0U == (0x7ffU & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT1 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
           & (4U == (0x7ffU & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT2 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
           & (8U == (0x7ffU & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT3 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
           & (0xcU == (0x7ffU & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT6 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
           & (0x18U == (0x7ffU & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT7 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
           & (0x1cU == (0x7ffU & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT8 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
           & (0x20U == (0x7ffU & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT9 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
           & (0x24U == (0x7ffU & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT10 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
           & (0x28U == (0x7ffU & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT11 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
           & (0x2cU == (0x7ffU & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)));
    vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_go 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__s0_wready));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_go 
        = (((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
            >> 3U) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_wready));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push 
        = (1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                  >> 3U) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid))));
    vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_push 
        = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                 & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid))));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_cpu 
        = (1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr) 
                   | (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd)) 
                  | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                     >> 2U)) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                >> 2U)));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_push 
        = (1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                  >> 3U) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid))));
    vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_push 
        = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                 & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid))));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen_last));
    vlTOPp->ram_ren = vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_en;
    vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_en) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen_last));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound2 
        = (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog)) 
            & (0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel))) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog) 
              & (0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel_reg))));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit 
        = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit)) 
           | (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound2));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound2 
        = (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog)) 
            & (1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel))) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog) 
              & (1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel_reg))));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit 
        = ((0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound2) 
              << 1U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound2 
        = (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog)) 
            & (2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel))) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog) 
              & (2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel_reg))));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit 
        = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound2) 
              << 2U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound2 
        = (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog)) 
            & (3U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel))) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog) 
              & (3U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel_reg))));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit 
        = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound2) 
              << 3U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound2 
        = (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog)) 
            & (4U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel))) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog) 
              & (4U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel_reg))));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit 
        = ((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound2) 
              << 4U));
    vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_pop 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid));
    vlTOPp->simu_top__DOT__soc__DOT__m0_wready = 0U;
    if ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_wready 
            = (1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready));
    }
    if ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_wready 
            = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready) 
                     >> 1U));
    }
    if ((4U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_wready 
            = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready) 
                     >> 2U));
    }
    if ((8U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_wready 
            = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready) 
                     >> 3U));
    }
    if ((0x10U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_wready 
            = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready) 
                     >> 4U));
    }
    vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__write_timer 
        = ((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
           & (0xe000U == (0xffffU & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)));
    vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__write_uart_valid 
        = ((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
           & (0xff10U == (0xffffU & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_pop 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid));
    vlTOPp->uart_tx = (1U & (((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__uart0_txd_oe)) 
                                & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                    >> 4U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__infrared) 
                                              | (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_out)))) 
                               & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__uart0_txd_oe))) 
                              & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__uart0_txd_oe))) 
                             & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__uart0_txd_oe))));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fifo_write 
        = (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we) 
            & (0U == (7U & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr))) 
           & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                 >> 7U)));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_push 
        = (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we) 
            & (0U == (7U & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr))) 
           & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                 >> 7U)));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir_read 
        = (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__re) 
            & (2U == (7U & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr))) 
           & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                 >> 7U)));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr_read 
        = (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__re) 
            & (6U == (7U & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr))) 
           & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                 >> 7U)));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fifo_read 
        = (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__re) 
            & (0U == (7U & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr))) 
           & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                 >> 7U)));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask_condition 
        = (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__re) 
            & (5U == (7U & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr))) 
           & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                 >> 7U)));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__REG_DAT_T 
        = ((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw)) 
             & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT0)) 
            & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab))
            ? vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command
            : ((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw)) 
                 & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT1)) 
                & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab))
                ? (IData)((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_c)))
                : ((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw)) 
                     & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT2)) 
                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab))
                    ? vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r
                    : ((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw)) 
                         & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT3)) 
                        & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab))
                        ? (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)
                        : ((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw)) 
                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
                                & (0x10U == (0x7ffU 
                                             & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)))) 
                            & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab))
                            ? (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM)
                            : ((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw)) 
                                 & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
                                    & (0x14U == (0x7ffU 
                                                 & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)))) 
                                & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab))
                                ? (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status) 
                                    << 0x10U) | (0xffffU 
                                                 & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM 
                                                            >> 0x20U))))
                                : ((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw)) 
                                     & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT6)) 
                                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab))
                                    ? vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter
                                    : ((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw)) 
                                         & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT7)) 
                                        & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab))
                                        ? vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_op_num
                                        : ((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw)) 
                                             & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT8)) 
                                            & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab))
                                            ? vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0
                                            : ((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw)) 
                                                 & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT9)) 
                                                & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab))
                                                ? vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map1
                                                : (
                                                   (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw)) 
                                                     & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT10)) 
                                                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab))
                                                    ? vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_rdy_map0
                                                    : 
                                                   ((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw)) 
                                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT11)) 
                                                     & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab))
                                                     ? vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_rdy_map1
                                                     : 
                                                    ((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw)) 
                                                       & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT)) 
                                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab))
                                                      ? vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD
                                                      : 0U)))))))))))));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_push 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_push) 
           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) 
              | (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_valid))));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_push 
        = ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_push) 
             & (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_valid)) 
            & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop))) 
           & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid)));
    vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_push 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_push) 
           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) 
              | (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_valid))));
    vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_push 
        = ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_push) 
             & (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_valid)) 
            & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop))) 
           & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid)));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_pop 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_push 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push) 
           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop) 
              | (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_valid))));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_push 
        = ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push) 
             & (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_valid)) 
            & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop))) 
           & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid)));
    vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_pop 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid));
    vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_push 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_push) 
           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop) 
              | (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid))));
    vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_push 
        = ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_push) 
             & (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid)) 
            & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop))) 
           & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid)));
    vlTOPp->simu_top__DOT__soc__DOT__m0_bid = 0U;
    if ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_bid = vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid
            [0U];
    }
    if ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_bid = vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid
            [1U];
    }
    if ((4U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_bid = vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid
            [2U];
    }
    if ((8U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_bid = vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid
            [3U];
    }
    if ((0x10U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_bid = vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid
            [4U];
    }
    vlTOPp->simu_top__DOT__soc__DOT__m0_bresp = 0U;
    if ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_bresp = 
            vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp
            [0U];
    }
    if ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_bresp = 
            vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp
            [1U];
    }
    if ((4U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_bresp = 
            vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp
            [2U];
    }
    if ((8U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_bresp = 
            vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp
            [3U];
    }
    if ((0x10U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_bresp = 
            vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp
            [4U];
    }
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready 
        = (0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready));
    if ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound4 
            = vlTOPp->simu_top__DOT__soc__DOT__m0_bready;
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready 
            = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready)) 
               | (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound4));
    }
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready 
        = (0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready));
    if ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound4 
            = vlTOPp->simu_top__DOT__soc__DOT__m0_bready;
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready 
            = ((0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready)) 
               | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound4) 
                  << 1U));
    }
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready 
        = (0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready));
    if ((4U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound4 
            = vlTOPp->simu_top__DOT__soc__DOT__m0_bready;
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready 
            = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready)) 
               | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound4) 
                  << 2U));
    }
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready 
        = (0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready));
    if ((8U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound4 
            = vlTOPp->simu_top__DOT__soc__DOT__m0_bready;
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready 
            = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready)) 
               | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound4) 
                  << 3U));
    }
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready 
        = (0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready));
    if ((0x10U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound4 
            = vlTOPp->simu_top__DOT__soc__DOT__m0_bready;
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready 
            = ((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready)) 
               | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound4) 
                  << 4U));
    }
    vlTOPp->simu_top__DOT__soc__DOT__m0_bvalid = 0U;
    if ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_bvalid 
            = (1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid));
    }
    if ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_bvalid 
            = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid) 
                     >> 1U));
    }
    if ((4U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_bvalid 
            = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid) 
                     >> 2U));
    }
    if ((8U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_bvalid 
            = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid) 
                     >> 3U));
    }
    if ((0x10U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_bvalid 
            = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid) 
                     >> 4U));
    }
    vlTOPp->write_uart_valid = vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__write_uart_valid;
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask_condition) 
           & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask_d)));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datao 
        = (0xffU & ((0U == (0x3fU & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                     >> 0xeU))) ? (
                                                   (4U 
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
                                                       >> 3U)))))
                     : ((0U != (0x3fU & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                         >> 0xeU)))
                         ? vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__REG_DAT_T
                         : 0U)));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop 
        = (((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
            >> 3U) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid));
    vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm_nxt 
        = ((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm))
            ? ((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                        | (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid)) 
                       >> 2U) & ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr) 
                                     | (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd))) 
                                 & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)))))
                ? 2U : 1U) : ((2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm))
                               ? ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr)
                                   ? 8U : ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd)
                                            ? 8U : 2U))
                               : ((8U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm))
                                   ? (((((8U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm)) 
                                         & (IData)(vlTOPp->simu_top__DOT__soc__DOT__apb_s_rlast)) 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                           >> 2U)) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__apb_s_bvalid) 
                                          & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                             >> 2U)))
                                       ? 1U : 8U) : 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__data_back 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__addr_rcv) 
           & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_rvalid) 
               & ((vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                   >> 3U) | (~ (IData)(vlTOPp->enable_delay)))) 
              | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_bvalid) 
                 & ((vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                     >> 2U) | (~ (IData)(vlTOPp->enable_delay))))));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datao_cpu 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)
            ? 0U : (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datao));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_pop 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_push 
        = ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) 
             & (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid)) 
            & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop))) 
           & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid)));
    vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_pop 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid));
    vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_push 
        = ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) 
             & (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid)) 
            & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop))) 
           & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_ready_go 
        = ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req) 
             & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req_or))) 
            & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__data_back)) 
           | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp_valid));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_ready_go 
        = (1U & (((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req) 
                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req_or)) 
                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__data_back)) 
                  | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid)) 
                 | (~ ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U] 
                        >> 0xeU) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U] 
                                    >> 0xfU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_valid_in 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__pipeline_valid) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_ready_go));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_valid_in 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_valid) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_ready_go));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_allow_in 
        = (1U & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_valid)) 
                 | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_valid_in) 
                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_allow_in))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__req_mem 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_allow_in) 
           & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
               >> 0x14U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                            >> 0x15U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_ok_inst 
        = (1U & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req)) 
                 & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__req_mem))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_valid_in 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid) 
           & ((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req)) 
                & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__req_mem)) 
               & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                   >> 0x14U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                >> 0x15U))) | (~ ((
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                                   >> 0x14U) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                                     >> 0x15U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_allow_in 
        = (1U & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid)) 
                 | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_valid_in) 
                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_allow_in))));
}

void Vsimu_top::_initial__TOP__14(Vsimu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top::_initial__TOP__14\n"); );
    Vsimu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divEn 
        = ((((0xeU == (0x1fU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                >> 0x16U))) | (0x10U 
                                               == (0x1fU 
                                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                                      >> 0x16U)))) 
            | (0xfU == (0x1fU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                 >> 0x16U)))) | (0x11U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                                     >> 0x16U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divSigned 
        = ((0x10U == (0x1fU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                               >> 0x16U))) | (0x11U 
                                              == (0x1fU 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                                     >> 0x16U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__WB_forward_valid 
        = ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
            >> 0xaU) & (0U != (0x1fU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                                        >> 4U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_reg_inst 
        = (((((((((((((((((((0x20U == (0x7fU & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 0xfU)))) 
                            & (0U == (0x3ffU & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 0x16U))))) 
                           | ((0x22U == (0x7fU & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0xfU)))) 
                              & (0U == (0x3ffU & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0x16U)))))) 
                          | ((0x24U == (0x7fU & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0xfU)))) 
                             & (0U == (0x3ffU & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0x16U)))))) 
                         | ((0x25U == (0x7fU & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 0xfU)))) 
                            & (0U == (0x3ffU & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 0x16U)))))) 
                        | ((0x28U == (0x7fU & (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                       >> 0xfU)))) 
                           & (0U == (0x3ffU & (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                       >> 0x16U)))))) 
                       | ((0x29U == (0x7fU & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                      >> 0xfU)))) 
                          & (0U == (0x3ffU & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                      >> 0x16U)))))) 
                      | ((0x2aU == (0x7fU & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                     >> 0xfU)))) 
                         & (0U == (0x3ffU & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                     >> 0x16U)))))) 
                     | ((0x2bU == (0x7fU & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                    >> 0xfU)))) 
                        & (0U == (0x3ffU & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                    >> 0x16U)))))) 
                    | ((0x2eU == (0x7fU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                   >> 0xfU)))) 
                       & (0U == (0x3ffU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                   >> 0x16U)))))) 
                   | ((0x2fU == (0x7fU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                  >> 0xfU)))) 
                      & (0U == (0x3ffU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                  >> 0x16U)))))) 
                  | ((0x30U == (0x7fU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                 >> 0xfU)))) 
                     & (0U == (0x3ffU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                 >> 0x16U)))))) 
                 | ((0x38U == (0x7fU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                >> 0xfU)))) 
                    & (0U == (0x3ffU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                >> 0x16U)))))) 
                | ((0x39U == (0x7fU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                               >> 0xfU)))) 
                   & (0U == (0x3ffU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                               >> 0x16U)))))) 
               | ((0x3aU == (0x7fU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                              >> 0xfU)))) 
                  & (0U == (0x3ffU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                              >> 0x16U)))))) 
              | ((0x40U == (0x7fU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                             >> 0xfU)))) 
                 & (0U == (0x3ffU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                             >> 0x16U)))))) 
             | ((0x41U == (0x7fU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                            >> 0xfU)))) 
                & (0U == (0x3ffU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                            >> 0x16U)))))) 
            | ((0x42U == (0x7fU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                           >> 0xfU)))) 
               & (0U == (0x3ffU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                           >> 0x16U)))))) 
           | ((0x43U == (0x7fU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                          >> 0xfU)))) 
              & (0U == (0x3ffU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                          >> 0x16U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ANDI_TYPE 
        = ((5U == (7U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                 >> 0x16U)))) & (1U 
                                                 == 
                                                 (0x7fU 
                                                  & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x19U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ORI_TYPE 
        = ((6U == (7U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                 >> 0x16U)))) & (1U 
                                                 == 
                                                 (0x7fU 
                                                  & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x19U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_XORI_TYPE 
        = ((7U == (7U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                 >> 0x16U)))) & (1U 
                                                 == 
                                                 (0x7fU 
                                                  & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x19U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ADDI_TYPE 
        = ((2U == (7U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                 >> 0x16U)))) & (1U 
                                                 == 
                                                 (0x7fU 
                                                  & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x19U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_PCADDU12I_TYPE 
        = ((6U == (7U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                 >> 0x19U)))) & (1U 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x1cU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_store_inst 
        = ((((4U == (0xfU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                     >> 0x16U)))) & 
             (0xaU == (0x3fU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                        >> 0x1aU))))) 
            | ((5U == (0xfU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                       >> 0x16U)))) 
               & (0xaU == (0x3fU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                            >> 0x1aU)))))) 
           | ((6U == (0xfU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                      >> 0x16U)))) 
              & (0xaU == (0x3fU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                           >> 0x1aU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_BU_TYPE 
        = ((8U == (0xfU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                   >> 0x16U)))) & (0xaU 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                               >> 0x1aU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_HU_TYPE 
        = ((9U == (0xfU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                   >> 0x16U)))) & (0xaU 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                               >> 0x1aU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LUI_TYPE 
        = ((2U == (7U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                 >> 0x19U)))) & (1U 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x1cU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_JIRL_TYPE 
        = ((3U == (0xfU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                   >> 0x1cU)))) & (1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                               >> 0x1eU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BL_TYPE 
        = ((5U == (0xfU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                   >> 0x1cU)))) & (1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                               >> 0x1eU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__MEM_forward_valid 
        = ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U] 
            >> 0xaU) & (0U != (0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U])));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_load_inst 
        = ((((((0U == (0xfU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                       >> 0x16U)))) 
               & (0xaU == (0x3fU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                            >> 0x1aU))))) 
              | ((1U == (0xfU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                         >> 0x16U)))) 
                 & (0xaU == (0x3fU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                              >> 0x1aU)))))) 
             | ((2U == (0xfU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                        >> 0x16U)))) 
                & (0xaU == (0x3fU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                             >> 0x1aU)))))) 
            | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_BU_TYPE)) 
           | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_HU_TYPE));
}

void Vsimu_top::_settle__TOP__16(Vsimu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top::_settle__TOP__16\n"); );
    Vsimu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluctrl_id 
        = (((((((((((((((((((1U & VL_EXTENDS_II(5,1, 
                                                ((0x22U 
                                                  == 
                                                  (0x7fU 
                                                   & (IData)(
                                                             (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                              >> 0xfU)))) 
                                                 & (0U 
                                                    == 
                                                    (0x3ffU 
                                                     & (IData)(
                                                               (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                >> 0x16U))))))) 
                            | (2U & (VL_EXTENDS_II(5,1, 
                                                   ((0x24U 
                                                     == 
                                                     (0x7fU 
                                                      & (IData)(
                                                                (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                 >> 0xfU)))) 
                                                    & (0U 
                                                       == 
                                                       (0x3ffU 
                                                        & (IData)(
                                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                   >> 0x16U)))))) 
                                     | VL_EXTENDS_II(5,1, 
                                                     ((0U 
                                                       == 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                   >> 0x16U)))) 
                                                      & (1U 
                                                         == 
                                                         (0x7fU 
                                                          & (IData)(
                                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                     >> 0x19U))))))))) 
                           | (3U & (VL_EXTENDS_II(5,1, 
                                                  ((0x25U 
                                                    == 
                                                    (0x7fU 
                                                     & (IData)(
                                                               (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                >> 0xfU)))) 
                                                   & (0U 
                                                      == 
                                                      (0x3ffU 
                                                       & (IData)(
                                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                  >> 0x16U)))))) 
                                    | VL_EXTENDS_II(5,1, 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                  >> 0x16U)))) 
                                                     & (1U 
                                                        == 
                                                        (0x7fU 
                                                         & (IData)(
                                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                    >> 0x19U))))))))) 
                          | (4U & VL_EXTENDS_II(5,1, 
                                                ((0x28U 
                                                  == 
                                                  (0x7fU 
                                                   & (IData)(
                                                             (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                              >> 0xfU)))) 
                                                 & (0U 
                                                    == 
                                                    (0x3ffU 
                                                     & (IData)(
                                                               (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                >> 0x16U)))))))) 
                         | (5U & (VL_EXTENDS_II(5,1, 
                                                ((0x29U 
                                                  == 
                                                  (0x7fU 
                                                   & (IData)(
                                                             (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                              >> 0xfU)))) 
                                                 & (0U 
                                                    == 
                                                    (0x3ffU 
                                                     & (IData)(
                                                               (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                >> 0x16U)))))) 
                                  | VL_EXTENDS_II(5,1, (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ANDI_TYPE))))) 
                        | (6U & (VL_EXTENDS_II(5,1, 
                                               ((0x2aU 
                                                 == 
                                                 (0x7fU 
                                                  & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0xfU)))) 
                                                & (0U 
                                                   == 
                                                   (0x3ffU 
                                                    & (IData)(
                                                              (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                               >> 0x16U)))))) 
                                 | VL_EXTENDS_II(5,1, (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ORI_TYPE))))) 
                       | (7U & (VL_EXTENDS_II(5,1, 
                                              ((0x2bU 
                                                == 
                                                (0x7fU 
                                                 & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0xfU)))) 
                                               & (0U 
                                                  == 
                                                  (0x3ffU 
                                                   & (IData)(
                                                             (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                              >> 0x16U)))))) 
                                | VL_EXTENDS_II(5,1, (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_XORI_TYPE))))) 
                      | (8U & (VL_EXTENDS_II(5,1, (
                                                   (0x2eU 
                                                    == 
                                                    (0x7fU 
                                                     & (IData)(
                                                               (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                >> 0xfU)))) 
                                                   & (0U 
                                                      == 
                                                      (0x3ffU 
                                                       & (IData)(
                                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                  >> 0x16U)))))) 
                               | VL_EXTENDS_II(5,1, 
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
                                                               >> 0x16U))))))))) 
                     | (9U & (VL_EXTENDS_II(5,1, ((0x2fU 
                                                   == 
                                                   (0x7fU 
                                                    & (IData)(
                                                              (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                               >> 0xfU)))) 
                                                  & (0U 
                                                     == 
                                                     (0x3ffU 
                                                      & (IData)(
                                                                (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                 >> 0x16U)))))) 
                              | VL_EXTENDS_II(5,1, 
                                              ((9U 
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
                                                              >> 0x16U))))))))) 
                    | (0xaU & (VL_EXTENDS_II(5,1, (
                                                   (0x30U 
                                                    == 
                                                    (0x7fU 
                                                     & (IData)(
                                                               (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                >> 0xfU)))) 
                                                   & (0U 
                                                      == 
                                                      (0x3ffU 
                                                       & (IData)(
                                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                  >> 0x16U)))))) 
                               | VL_EXTENDS_II(5,1, 
                                               ((0x11U 
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
                                                               >> 0x16U))))))))) 
                   | (0xbU & VL_EXTENDS_II(5,1, ((0x38U 
                                                  == 
                                                  (0x7fU 
                                                   & (IData)(
                                                             (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                              >> 0xfU)))) 
                                                 & (0U 
                                                    == 
                                                    (0x3ffU 
                                                     & (IData)(
                                                               (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                >> 0x16U)))))))) 
                  | (0xcU & VL_EXTENDS_II(5,1, ((0x39U 
                                                 == 
                                                 (0x7fU 
                                                  & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0xfU)))) 
                                                & (0U 
                                                   == 
                                                   (0x3ffU 
                                                    & (IData)(
                                                              (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                               >> 0x16U)))))))) 
                 | (0xdU & VL_EXTENDS_II(5,1, ((0x3aU 
                                                == 
                                                (0x7fU 
                                                 & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0xfU)))) 
                                               & (0U 
                                                  == 
                                                  (0x3ffU 
                                                   & (IData)(
                                                             (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                              >> 0x16U)))))))) 
                | (0xeU & VL_EXTENDS_II(5,1, ((0x40U 
                                               == (0x7fU 
                                                   & (IData)(
                                                             (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                              >> 0xfU)))) 
                                              & (0U 
                                                 == 
                                                 (0x3ffU 
                                                  & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x16U)))))))) 
               | (0xfU & VL_EXTENDS_II(5,1, ((0x41U 
                                              == (0x7fU 
                                                  & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0xfU)))) 
                                             & (0U 
                                                == 
                                                (0x3ffU 
                                                 & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0x16U)))))))) 
              | (0x10U & VL_EXTENDS_II(5,1, ((0x42U 
                                              == (0x7fU 
                                                  & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0xfU)))) 
                                             & (0U 
                                                == 
                                                (0x3ffU 
                                                 & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0x16U)))))))) 
             | (0x11U & VL_EXTENDS_II(5,1, ((0x43U 
                                             == (0x7fU 
                                                 & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                            >> 0xfU)))) 
                                            & (0U == 
                                               (0x3ffU 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x16U)))))))) 
            | (0x13U & (VL_EXTENDS_II(5,1, (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BL_TYPE)) 
                        | VL_EXTENDS_II(5,1, (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_JIRL_TYPE))))) 
           | (0x12U & VL_EXTENDS_II(5,1, (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LUI_TYPE))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_id 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BL_TYPE)
            ? 1U : (0x1fU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
        = ((0x10000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U])
            ? ((0x10000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U])
                ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[0U]
                : 0U) : (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__MEM_forward_valid) 
                          & ((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U]) 
                             == (0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[3U] 
                                           << 0x16U) 
                                          | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U] 
                                             >> 0xaU)))))
                          ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[1U]
                          : (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__WB_forward_valid) 
                              & ((0x1fU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                                           >> 4U)) 
                                 == (0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[3U] 
                                               << 0x16U) 
                                              | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U] 
                                                 >> 0xaU)))))
                              ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb
                              : ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                                  << 0x11U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[4U] 
                                               >> 0xfU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex 
        = ((0x8000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U])
            ? ((0x8000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U])
                ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[1U]
                : 0U) : (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__MEM_forward_valid) 
                          & ((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U]) 
                             == (0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[3U] 
                                           << 0x1bU) 
                                          | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U] 
                                             >> 5U)))))
                          ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[1U]
                          : (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__WB_forward_valid) 
                              & ((0x1fU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                                           >> 4U)) 
                                 == (0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[3U] 
                                               << 0x1bU) 
                                              | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U] 
                                                 >> 5U)))))
                              ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb
                              : ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[4U] 
                                  << 0x11U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[3U] 
                                               >> 0xfU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__itype 
        = ((((1U & ((VL_EXTENDS_II(3,1, (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_load_inst)) 
                     | VL_EXTENDS_II(3,1, (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_store_inst))) 
                    | VL_EXTENDS_II(3,1, (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ADDI_TYPE)))) 
             | (4U & VL_EXTENDS_II(3,1, ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LUI_TYPE) 
                                         | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_PCADDU12I_TYPE))))) 
            | (3U & VL_EXTENDS_II(3,1, ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_JIRL_TYPE) 
                                        | (((((((8U 
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
                                            | ((6U 
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
                                           | ((7U == 
                                               (0xfU 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x1cU)))) 
                                              & (1U 
                                                 == 
                                                 (3U 
                                                  & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x1eU)))))))))) 
           | (6U & VL_EXTENDS_II(3,1, (((4U == (0xfU 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 0x1cU)))) 
                                        & (1U == (3U 
                                                  & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0x1eU))))) 
                                       | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BL_TYPE)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rk_id 
        = (((0U != (0x1fU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                     >> 0xaU)))) & 
            ((0x1fU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                               >> 0xaU))) == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_id)))
            ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb
            : ((0U != (0x1fU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                        >> 0xaU))))
                ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf
               [(0x1fU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                  >> 0xaU)))] : 0U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id 
        = (((0U != (0x1fU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                     >> 5U)))) & ((0x1fU 
                                                   & (IData)(
                                                             (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                              >> 5U))) 
                                                  == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_id)))
            ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb
            : ((0U != (0x1fU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                        >> 5U)))) ? 
               vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf
               [(0x1fU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                  >> 5U)))] : 0U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__difference 
        = (0x1ffffffffULL & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__minuend_shifted 
                             - (QData)((IData)(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divSigned)
                                                 ? 
                                                ((0x80000000U 
                                                  & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)
                                                  ? 
                                                 (- vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)
                                                  : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)
                                                 : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_b 
        = ((0x4000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U])
            ? ((0x2000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U])
                ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex
                : ((0x1000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U])
                    ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex
                    : ((0x800000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U])
                        ? ((0x400000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U])
                            ? 4U : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)
                        : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)))
            : ((0x2000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U])
                ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex
                : ((0x1000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U])
                    ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex
                    : ((0x800000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U])
                        ? ((0x400000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U])
                            ? (~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)
                            : (~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex))
                        : ((0x400000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U])
                            ? (~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)
                            : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__immout_id 
        = ((4U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__itype))
            ? ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__itype))
                ? ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__itype))
                    ? 0U : VL_EXTENDS_II(32,28, ((0xffc0000U 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out) 
                                                     << 0x12U)) 
                                                 | (0x3fffcU 
                                                    & ((IData)(
                                                               (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                                >> 0xaU)) 
                                                       << 2U)))))
                : ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__itype))
                    ? VL_EXTENDS_II(32,21, ((0x1f0000U 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out) 
                                                << 0x10U)) 
                                            | (0xffffU 
                                               & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0xaU)))))
                    : (0xfffff000U & ((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                               >> 5U)) 
                                      << 0xcU)))) : 
           ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__itype))
             ? ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__itype))
                 ? VL_EXTENDS_II(32,18, (0x3fffcU & 
                                         ((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                   >> 0xaU)) 
                                          << 2U))) : 
                VL_EXTENDS_II(32,16, (0xfffcU & ((IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 0xaU)) 
                                                 << 2U))))
             : ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__itype))
                 ? ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ORI_TYPE) 
                      | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_XORI_TYPE)) 
                     | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ANDI_TYPE))
                     ? (0xfffU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                          >> 0xaU)))
                     : VL_EXTENDS_II(32,12, (0xfffU 
                                             & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                        >> 0xaU)))))
                 : (0x1fU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                     >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id_true 
        = (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__MEM_forward_valid) 
            & ((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U]) 
               == (0x1fU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                    >> 5U))))) ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[1U]
            : (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__WB_forward_valid) 
                & ((0x1fU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                             >> 4U)) == (0x1fU & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                          >> 5U)))))
                ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb
                : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__minuend_next 
        = ((1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__difference 
                          >> 0x20U))) ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__minuend_shifted
            : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__difference);
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_result 
        = ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
            + vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_b) 
           + (IData)((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_cin))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__slt_result 
        = (1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                   >> 0x1fU) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex 
                                   >> 0x1fU))) | ((~ 
                                                   ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                                                     ^ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex) 
                                                    >> 0x1fU)) 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_result 
                                                     >> 0x1fU))));
    if ((0x4000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U])) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluout_ex 
            = ((0x2000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U])
                ? 0U : ((0x1000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U])
                         ? 0U : ((0x800000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U])
                                  ? ((0x400000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U])
                                      ? ((IData)(4U) 
                                         + vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)
                                      : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)
                                  : ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divSigned)
                                      ? ((0x80000000U 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                                             ^ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex))
                                          ? (- vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_u)
                                          : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_u)
                                      : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_u))));
    } else {
        if ((0x2000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U])) {
            if ((0x1000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U])) {
                if ((0x800000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U])) {
                    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluout_ex 
                        = ((0x400000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U])
                            ? ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divSigned)
                                ? ((0x80000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)
                                    ? (- vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__remainder_u)
                                    : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__remainder_u)
                                : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__remainder_u)
                            : ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divSigned)
                                ? ((0x80000000U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                                                   ^ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex))
                                    ? (- vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_u)
                                    : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_u)
                                : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_u));
                } else {
                    if ((0x400000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U])) {
                        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__unnamedblk2__DOT__mul_result 
                            = ((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)) 
                               * (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)));
                        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluout_ex 
                            = (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__unnamedblk2__DOT__mul_result 
                                       >> 0x20U));
                    } else {
                        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__unnamedblk1__DOT__mul_result 
                            = VL_MULS_QQQ(64,64,64, 
                                          (((QData)((IData)(
                                                            (- (IData)(
                                                                       (1U 
                                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                                                                           >> 0x1fU)))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex))), 
                                          (((QData)((IData)(
                                                            (- (IData)(
                                                                       (1U 
                                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex 
                                                                           >> 0x1fU)))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex))));
                        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluout_ex 
                            = (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__unnamedblk1__DOT__mul_result 
                                       >> 0x20U));
                    }
                }
            } else {
                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluout_ex 
                    = ((0x800000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U])
                        ? ((0x400000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U])
                            ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                               * vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)
                            : VL_SHIFTRS_III(32,32,5, vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex, 
                                             (0x1fU 
                                              & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)))
                        : ((0x400000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U])
                            ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                               >> (0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex))
                            : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                               << (0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex))));
            }
        } else {
            vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluout_ex 
                = ((0x1000000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U])
                    ? ((0x800000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U])
                        ? ((0x400000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U])
                            ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                               ^ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)
                            : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                               | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex))
                        : ((0x400000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U])
                            ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                               & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex)
                            : (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex 
                                  | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex))))
                    : ((0x800000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U])
                        ? ((0x400000U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U])
                            ? (1U & (~ (IData)((1ULL 
                                                & ((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex)) 
                                                     + (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_b))) 
                                                    + (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_cin))) 
                                                   >> 0x20U)))))
                            : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__slt_result)
                        : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_result));
        }
    }
}

void Vsimu_top::_initial__TOP__17(Vsimu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top::_initial__TOP__17\n"); );
    Vsimu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT__stall 
        = ((((((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                >> 0x14U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                             >> 0x10U)) & (((0x1fU 
                                             & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U]) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                           >> 5U)))) 
                                           | ((0x1fU 
                                               & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U]) 
                                              == (0x1fU 
                                                  & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                             >> 0xaU)))))) 
             | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U] 
                 >> 0xeU) & (((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U]) 
                              == (0x1fU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                   >> 5U)))) 
                             | ((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U]) 
                                == (0x1fU & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                     >> 0xaU))))))) 
            & (((((((8U == (0xfU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                            >> 0x1cU)))) 
                    & (1U == (3U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                            >> 0x1eU))))) 
                   | ((9U == (0xfU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                              >> 0x1cU)))) 
                      & (1U == (3U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                              >> 0x1eU)))))) 
                  | ((0xaU == (0xfU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                               >> 0x1cU)))) 
                     & (1U == (3U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                             >> 0x1eU)))))) 
                 | ((0xbU == (0xfU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                              >> 0x1cU)))) 
                    & (1U == (3U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                            >> 0x1eU)))))) 
                | ((6U == (0xfU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                           >> 0x1cU)))) 
                   & (1U == (3U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                           >> 0x1eU)))))) 
               | ((7U == (0xfU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                          >> 0x1cU)))) 
                  & (1U == (3U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                          >> 0x1eU))))))) 
           | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[5U] 
                >> 0x14U) & ((((~ (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_PCADDU12I_TYPE) 
                                    | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BL_TYPE)) 
                                   | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_JIRL_TYPE))) 
                               & ((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U]) 
                                  == (0x1fU & (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                       >> 5U))))) 
                              | ((~ ((((((((1U == (0x7fU 
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
                                                           >> 0x16U)))))) 
                                        | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ADDI_TYPE)) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LUI_TYPE) 
                                          | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_PCADDU12I_TYPE))) 
                                      | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_load_inst)) 
                                     | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_store_inst))) 
                                 & ((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U]) 
                                    == (0x1fU & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                         >> 0xaU)))))) 
                             | ((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out[2U]) 
                                == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_id)))) 
              & (~ (((((((8U == (0xfU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                 >> 0x1cU)))) 
                         & (1U == (3U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                 >> 0x1eU))))) 
                        | ((9U == (0xfU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                   >> 0x1cU)))) 
                           & (1U == (3U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                   >> 0x1eU)))))) 
                       | ((0xaU == (0xfU & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                    >> 0x1cU)))) 
                          & (1U == (3U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                  >> 0x1eU)))))) 
                      | ((0xbU == (0xfU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                   >> 0x1cU)))) 
                         & (1U == (3U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                 >> 0x1eU)))))) 
                     | ((6U == (0xfU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                >> 0x1cU)))) 
                        & (1U == (3U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                >> 0x1eU)))))) 
                    | ((7U == (0xfU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                               >> 0x1cU)))) 
                       & (1U == (3U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                               >> 0x1eU)))))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_PC_BRANCH 
        = (((((((((((6U == (0xfU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                            >> 0x1cU)))) 
                    & (1U == (3U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                            >> 0x1eU))))) 
                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id_true 
                      == (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__MEM_forward_valid) 
                           & ((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[2U]) 
                              == (0x1fU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                   >> 0xaU)))))
                           ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out[1U]
                           : (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__WB_forward_valid) 
                               & ((0x1fU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out[3U] 
                                            >> 4U)) 
                                  == (0x1fU & (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                       >> 0xaU)))))
                               ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb
                               : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rk_id)))) 
                  | (((7U == (0xfU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                              >> 0x1cU)))) 
                      & (1U == (3U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                              >> 0x1eU))))) 
                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id_true 
                        != (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__MEM_forward_valid) 
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
                                 : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rk_id))))) 
                 | (((8U == (0xfU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                             >> 0x1cU)))) 
                     & (1U == (3U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                             >> 0x1eU))))) 
                    & (((((0xaU == (0xfU & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                    >> 0x1cU)))) 
                          & (1U == (3U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
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
                                   : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rk_id)))) 
                       | ((~ (((0xaU == (0xfU & (IData)(
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
                                                         >> 0x1eU))))))) 
                          & VL_LTS_III(1,32,32, vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id_true, 
                                       (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__MEM_forward_valid) 
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
                                             : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rk_id))))))) 
                | (((0xaU == (0xfU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                              >> 0x1cU)))) 
                    & (1U == (3U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                            >> 0x1eU))))) 
                   & (((((0xaU == (0xfU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                   >> 0x1cU)))) 
                         & (1U == (3U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                 >> 0x1eU))))) 
                        | ((0xbU == (0xfU & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                     >> 0x1cU)))) 
                           & (1U == (3U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                   >> 0x1eU)))))) 
                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id_true 
                          < (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__MEM_forward_valid) 
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
                                  : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rk_id)))) 
                      | ((~ (((0xaU == (0xfU & (IData)(
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
                                                        >> 0x1eU))))))) 
                         & VL_LTS_III(1,32,32, vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id_true, 
                                      (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__MEM_forward_valid) 
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
                                            : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rk_id))))))) 
               | (((9U == (0xfU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                           >> 0x1cU)))) 
                   & (1U == (3U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                           >> 0x1eU))))) 
                  & (~ (((((0xaU == (0xfU & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                     >> 0x1cU)))) 
                           & (1U == (3U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
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
                                    : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rk_id)))) 
                        | ((~ (((0xaU == (0xfU & (IData)(
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
                                                          >> 0x1eU))))))) 
                           & VL_LTS_III(1,32,32, vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id_true, 
                                        (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__MEM_forward_valid) 
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
                                              : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rk_id)))))))) 
              | (((0xbU == (0xfU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                            >> 0x1cU)))) 
                  & (1U == (3U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                          >> 0x1eU))))) 
                 & (~ (((((0xaU == (0xfU & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                                    >> 0x1cU)))) 
                          & (1U == (3U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
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
                                   : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rk_id)))) 
                       | ((~ (((0xaU == (0xfU & (IData)(
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
                                                         >> 0x1eU))))))) 
                          & VL_LTS_III(1,32,32, vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id_true, 
                                       (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__MEM_forward_valid) 
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
                                             : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rk_id)))))))) 
             | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_JIRL_TYPE)) 
            | ((4U == (0xfU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                       >> 0x1cU)))) 
               & (1U == (3U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                       >> 0x1eU)))))) 
           | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BL_TYPE));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_flush 
        = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT__stall;
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_ready_go 
        = (1U & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT__stall)));
}

void Vsimu_top::_settle__TOP__18(Vsimu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top::_settle__TOP__18\n"); );
    Vsimu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_flush 
        = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT__stall;
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_ready_go 
        = (1U & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT__stall)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_PC_BRANCH)
            ? ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_PC_BRANCH)
                ? (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_JIRL_TYPE)
                     ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id_true
                     : (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out 
                                >> 0x20U))) + vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__immout_id)
                : 0U) : ((IData)(4U) + vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__pipeline_data));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_valid_in 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__pipeline_valid) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_ready_go));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_allow_in 
        = (1U & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__pipeline_valid)) 
                 | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_valid_in) 
                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_allow_in))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_allow_in 
        = (1U & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__pipeline_valid)) 
                 | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_valid_in) 
                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_allow_in))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__req_inst 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_allow_in) 
           & (IData)(vlTOPp->aresetn));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_ready_go 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_ok_inst) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__req_inst));
}

void Vsimu_top::_eval_initial(Vsimu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top::_eval_initial\n"); );
    Vsimu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[4U] = 1U;
    vlTOPp->__Vm_traceActivity[3U] = 1U;
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT____Vcellinp__myDiv__clk 
        = vlTOPp->__VinpClk__TOP__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT____Vcellinp__myDiv__clk;
    vlTOPp->__Vclklast__TOP__DifftestLoadEvent__02Eclock 
        = vlTOPp->DifftestLoadEvent__02Eclock;
    vlTOPp->__Vclklast__TOP__DifftestTrapEvent__02Eclock 
        = vlTOPp->DifftestTrapEvent__02Eclock;
    vlTOPp->__Vclklast__TOP__DifftestStoreEvent__02Eclock 
        = vlTOPp->DifftestStoreEvent__02Eclock;
    vlTOPp->__Vclklast__TOP__DifftestExcpEvent__02Eclock 
        = vlTOPp->DifftestExcpEvent__02Eclock;
    vlTOPp->__Vclklast__TOP__aclk = vlTOPp->aclk;
    vlTOPp->__Vclklast__TOP__DifftestInstrCommit__02Eclock 
        = vlTOPp->DifftestInstrCommit__02Eclock;
    vlTOPp->__Vclklast__TOP__DifftestCSRRegState__02Eclock 
        = vlTOPp->DifftestCSRRegState__02Eclock;
    vlTOPp->__Vclklast__TOP__DifftestGRegState__02Eclock 
        = vlTOPp->DifftestGRegState__02Eclock;
    vlTOPp->_initial__TOP__14(vlSymsp);
    vlTOPp->_initial__TOP__17(vlSymsp);
}

void Vsimu_top::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top::final\n"); );
    // Variables
    Vsimu_top__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vsimu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vsimu_top::_eval_settle(Vsimu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top::_eval_settle\n"); );
    Vsimu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity[4U] = 1U;
    vlTOPp->__Vm_traceActivity[3U] = 1U;
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
    vlTOPp->_settle__TOP__16(vlSymsp);
    vlTOPp->_settle__TOP__18(vlSymsp);
}

void Vsimu_top::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top::_ctor_var_reset\n"); );
    // Body
    DifftestInstrCommit__02Eclock = VL_RAND_RESET_I(1);
    DifftestInstrCommit__02Ecoreid = VL_RAND_RESET_I(8);
    DifftestInstrCommit__02Eindex = VL_RAND_RESET_I(8);
    DifftestInstrCommit__02Evalid = VL_RAND_RESET_I(1);
    DifftestInstrCommit__02Epc = VL_RAND_RESET_Q(64);
    instr = VL_RAND_RESET_I(32);
    skip = VL_RAND_RESET_I(1);
    is_TLBFILL = VL_RAND_RESET_I(1);
    TLBFILL_index = VL_RAND_RESET_I(5);
    is_CNTinst = VL_RAND_RESET_I(1);
    timer_64_value = VL_RAND_RESET_Q(64);
    wen = VL_RAND_RESET_I(1);
    wdest = VL_RAND_RESET_I(8);
    wdata = VL_RAND_RESET_Q(64);
    csr_rstat = VL_RAND_RESET_I(1);
    csr_data = VL_RAND_RESET_I(32);
    DifftestExcpEvent__02Eclock = VL_RAND_RESET_I(1);
    DifftestExcpEvent__02Ecoreid = VL_RAND_RESET_I(8);
    excp_valid = VL_RAND_RESET_I(1);
    eret = VL_RAND_RESET_I(1);
    intrNo = VL_RAND_RESET_I(32);
    cause = VL_RAND_RESET_I(32);
    exceptionPC = VL_RAND_RESET_Q(64);
    exceptionInst = VL_RAND_RESET_I(32);
    DifftestTrapEvent__02Eclock = VL_RAND_RESET_I(1);
    DifftestTrapEvent__02Ecoreid = VL_RAND_RESET_I(8);
    DifftestTrapEvent__02Evalid = VL_RAND_RESET_I(1);
    code = VL_RAND_RESET_I(3);
    DifftestTrapEvent__02Epc = VL_RAND_RESET_Q(64);
    cycleCnt = VL_RAND_RESET_Q(64);
    instrCnt = VL_RAND_RESET_Q(64);
    DifftestStoreEvent__02Eclock = VL_RAND_RESET_I(1);
    DifftestStoreEvent__02Ecoreid = VL_RAND_RESET_I(8);
    DifftestStoreEvent__02Eindex = VL_RAND_RESET_I(8);
    DifftestStoreEvent__02Evalid = VL_RAND_RESET_I(8);
    storePAddr = VL_RAND_RESET_Q(64);
    storeVAddr = VL_RAND_RESET_Q(64);
    storeData = VL_RAND_RESET_Q(64);
    DifftestLoadEvent__02Eclock = VL_RAND_RESET_I(1);
    DifftestLoadEvent__02Ecoreid = VL_RAND_RESET_I(8);
    DifftestLoadEvent__02Eindex = VL_RAND_RESET_I(8);
    DifftestLoadEvent__02Evalid = VL_RAND_RESET_I(8);
    paddr = VL_RAND_RESET_Q(64);
    vaddr = VL_RAND_RESET_Q(64);
    DifftestCSRRegState__02Eclock = VL_RAND_RESET_I(1);
    DifftestCSRRegState__02Ecoreid = VL_RAND_RESET_I(8);
    crmd = VL_RAND_RESET_Q(64);
    prmd = VL_RAND_RESET_Q(64);
    euen = VL_RAND_RESET_Q(64);
    ecfg = VL_RAND_RESET_Q(64);
    estat = VL_RAND_RESET_Q(64);
    era = VL_RAND_RESET_Q(64);
    badv = VL_RAND_RESET_Q(64);
    eentry = VL_RAND_RESET_Q(64);
    tlbidx = VL_RAND_RESET_Q(64);
    tlbehi = VL_RAND_RESET_Q(64);
    tlbelo0 = VL_RAND_RESET_Q(64);
    tlbelo1 = VL_RAND_RESET_Q(64);
    asid = VL_RAND_RESET_Q(64);
    pgdl = VL_RAND_RESET_Q(64);
    pgdh = VL_RAND_RESET_Q(64);
    save0 = VL_RAND_RESET_Q(64);
    save1 = VL_RAND_RESET_Q(64);
    save2 = VL_RAND_RESET_Q(64);
    save3 = VL_RAND_RESET_Q(64);
    tid = VL_RAND_RESET_Q(64);
    tcfg = VL_RAND_RESET_Q(64);
    tval = VL_RAND_RESET_Q(64);
    ticlr = VL_RAND_RESET_Q(64);
    llbctl = VL_RAND_RESET_Q(64);
    tlbrentry = VL_RAND_RESET_Q(64);
    dmw0 = VL_RAND_RESET_Q(64);
    dmw1 = VL_RAND_RESET_Q(64);
    DifftestGRegState__02Eclock = VL_RAND_RESET_I(1);
    DifftestGRegState__02Ecoreid = VL_RAND_RESET_I(8);
    gpr_0 = VL_RAND_RESET_Q(64);
    gpr_1 = VL_RAND_RESET_Q(64);
    gpr_2 = VL_RAND_RESET_Q(64);
    gpr_3 = VL_RAND_RESET_Q(64);
    gpr_4 = VL_RAND_RESET_Q(64);
    gpr_5 = VL_RAND_RESET_Q(64);
    gpr_6 = VL_RAND_RESET_Q(64);
    gpr_7 = VL_RAND_RESET_Q(64);
    gpr_8 = VL_RAND_RESET_Q(64);
    gpr_9 = VL_RAND_RESET_Q(64);
    gpr_10 = VL_RAND_RESET_Q(64);
    gpr_11 = VL_RAND_RESET_Q(64);
    gpr_12 = VL_RAND_RESET_Q(64);
    gpr_13 = VL_RAND_RESET_Q(64);
    gpr_14 = VL_RAND_RESET_Q(64);
    gpr_15 = VL_RAND_RESET_Q(64);
    gpr_16 = VL_RAND_RESET_Q(64);
    gpr_17 = VL_RAND_RESET_Q(64);
    gpr_18 = VL_RAND_RESET_Q(64);
    gpr_19 = VL_RAND_RESET_Q(64);
    gpr_20 = VL_RAND_RESET_Q(64);
    gpr_21 = VL_RAND_RESET_Q(64);
    gpr_22 = VL_RAND_RESET_Q(64);
    gpr_23 = VL_RAND_RESET_Q(64);
    gpr_24 = VL_RAND_RESET_Q(64);
    gpr_25 = VL_RAND_RESET_Q(64);
    gpr_26 = VL_RAND_RESET_Q(64);
    gpr_27 = VL_RAND_RESET_Q(64);
    gpr_28 = VL_RAND_RESET_Q(64);
    gpr_29 = VL_RAND_RESET_Q(64);
    gpr_30 = VL_RAND_RESET_Q(64);
    gpr_31 = VL_RAND_RESET_Q(64);
    aclk = VL_RAND_RESET_I(1);
    aresetn = VL_RAND_RESET_I(1);
    enable_delay = VL_RAND_RESET_I(1);
    random_seed = VL_RAND_RESET_I(23);
    ram_ren = VL_RAND_RESET_I(1);
    ram_raddr = VL_RAND_RESET_I(32);
    ram_rdata = VL_RAND_RESET_I(32);
    ram_wen = VL_RAND_RESET_I(4);
    ram_waddr = VL_RAND_RESET_I(32);
    ram_wdata = VL_RAND_RESET_I(32);
    debug0_wb_pc = VL_RAND_RESET_I(32);
    debug0_wb_rf_wen = VL_RAND_RESET_I(1);
    debug0_wb_rf_wnum = VL_RAND_RESET_I(5);
    debug0_wb_rf_wdata = VL_RAND_RESET_I(32);
    num_data = VL_RAND_RESET_I(32);
    open_trace = VL_RAND_RESET_I(1);
    num_monitor = VL_RAND_RESET_I(1);
    confreg_uart_data = VL_RAND_RESET_I(8);
    write_uart_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, uart_ctr_bus);
    uart_rx = VL_RAND_RESET_I(1);
    uart_tx = VL_RAND_RESET_I(1);
    led = VL_RAND_RESET_I(16);
    led_rg0 = VL_RAND_RESET_I(2);
    led_rg1 = VL_RAND_RESET_I(2);
    num_csn = VL_RAND_RESET_I(8);
    num_a_g = VL_RAND_RESET_I(7);
    __SYM__switch = VL_RAND_RESET_I(8);
    btn_key_col = VL_RAND_RESET_I(4);
    btn_key_row = VL_RAND_RESET_I(4);
    btn_step = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu_awvalid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu_wvalid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu_arvalid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__m0_awvalid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__m0_awready = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__m0_wvalid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__m0_wready = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__m0_bid = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__m0_bresp = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__m0_bvalid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__m0_bready = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__m0_arvalid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__m0_arready = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__m0_rid = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__m0_rdata = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__m0_rresp = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__m0_rlast = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__m0_rvalid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__m0_rready = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__s0_wready = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__conf_s_wready = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__apb_s_awready = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__apb_s_wready = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__apb_s_bvalid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__apb_s_arready = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__apb_s_rlast = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__apb_s_rvalid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__conf_s_ram_wen = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__UART_RI = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__uart0_int = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__uart0_txd_oe = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__debug1_wb_pc = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__debug1_wb_rf_wen = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__debug1_wb_rf_wnum = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__debug1_wb_rf_wdata = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__req_inst = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__wstrb_inst = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__wdata_inst = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__addr_ok_inst = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__req_mem = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__wstrb_mem = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_allow_in = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_data_in = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_data_out = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_ready_go = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_flush = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__preif_nop = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_allow_in = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__if_ready_go = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_valid_in = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_ready_go = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id_allow_in = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_valid_in = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_allow_in = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex_flush = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_valid_in = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_ready_go = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_allow_in = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem_flush = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_valid_in = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_flush = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb_allow_out = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__nextPC = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp_valid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__id__data_out = VL_RAND_RESET_Q(64);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__overflow = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__itype = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluctrl_id = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_no_id = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rk_id = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rd_id = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__regWriteData_wb = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__immout_id = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rj_id_true = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(189, simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__ex__data_out);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc1_ex = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluSrc2_ex = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__divNeed = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__memaddr_ex = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__aluout_ex = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(80, simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__mem__data_out);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(107, simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT____Vcellout__wb__data_out);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__pipeline_valid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__If__DOT__pipeline_data = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__pipeline_valid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__id__DOT__pipeline_data = VL_RAND_RESET_Q(64);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ADDI_TYPE = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ANDI_TYPE = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_ORI_TYPE = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_XORI_TYPE = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LUI_TYPE = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_PCADDU12I_TYPE = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_BU_TYPE = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_LD_HU_TYPE = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_JIRL_TYPE = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_BL_TYPE = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_reg_inst = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_load_inst = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_store_inst = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__control__DOT__is_PC_BRANCH = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }}
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__MEM_forward_valid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__forwarding__DOT__WB_forward_valid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__hazard_detect__DOT__stall = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(189, simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__ex__DOT__pipeline_data);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divSigned = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__divEn = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT____Vcellinp__myDiv__clk = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_result = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__slt_result = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_b = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__adder_cin = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__unnamedblk1__DOT__mul_result = VL_RAND_RESET_Q(64);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__unnamedblk2__DOT__mul_result = VL_RAND_RESET_Q(64);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__quotient_u = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__remainder_u = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__dividend_reg = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__minuend = VL_RAND_RESET_Q(33);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__count = VL_RAND_RESET_I(6);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__minuend_shifted = VL_RAND_RESET_Q(33);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__minuend_next = VL_RAND_RESET_Q(33);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__dividend_next = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT__myDiv__DOT__difference = VL_RAND_RESET_Q(33);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(80, simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__mem__DOT__pipeline_data);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(107, simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__wb__DOT__pipeline_data);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req_or = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wr_r = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_size_r = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wdata_r = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wstrb_r = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__data_back = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__addr_rcv = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__wdata_rcv = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__delay__DOT__mask_ar = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__delay__DOT__mask_ar_disable = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__delay__DOT__mask_aw = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__delay__DOT__mask_aw_disable = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__delay__DOT__mask_no_delay = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__delay__DOT__mask_random = VL_RAND_RESET_I(23);
    simu_top__DOT__soc__DOT__delay__DOT__mask_random_next = VL_RAND_RESET_I(23);
    simu_top__DOT__soc__DOT__delay__DOT__mask_short_delay = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__delay__DOT__mask_w = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__delay__DOT__mask_w_disable = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_awready = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_wready = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_bid = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_bresp = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_bvalid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_arready = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rid = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rdata = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rresp = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rlast = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rvalid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_awready = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_wready = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_bid = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_bresp = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_bvalid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_arready = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rid = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rdata = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rresp = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rlast = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rvalid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid = VL_RAND_RESET_I(5);
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[__Vi0] = VL_RAND_RESET_I(4);
    }}
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[__Vi0] = VL_RAND_RESET_I(2);
    }}
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[__Vi0] = VL_RAND_RESET_I(4);
    }}
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[__Vi0] = VL_RAND_RESET_I(2);
    }}
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready = VL_RAND_RESET_I(5);
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__BASE_ADDR[__Vi0] = VL_RAND_RESET_I(5);
    }}
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_0 = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_1 = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_sel_group_0 = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_sel_group_1 = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_empty = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_dir_ins = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_dir = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_pre_sel = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel_reg = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_dir_ins = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_pre_sel = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit_int = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound1 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound2 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound4 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound5 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound6 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound7 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound9 = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram[__Vi0] = VL_RAND_RESET_I(3);
    }}
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__i = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram[__Vi0] = VL_RAND_RESET_I(3);
    }}
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__i = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_rw_dma = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_dma = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_dma = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_addr_dma = VL_RAND_RESET_I(20);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_wdata_dma = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_dma = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_ack_i = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_ce = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datai_cpu = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datao_cpu = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_word_trans_cpu = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_cpu = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_high_24b_wr = VL_RAND_RESET_I(24);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_clk_dma = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_reset_n_dma = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_enab = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_psel = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_datai = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_ready = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm_nxt = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr = VL_RAND_RESET_I(20);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_w_id = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_r_id = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_wr_size = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_psel = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_enab = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr = VL_RAND_RESET_I(20);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datao = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__re = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__rx_en = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__tx2rx_en = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__enable = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__srx_pad = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fcr = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__infrared = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_pol = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl = VL_RAND_RESET_I(24);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__start_dlc = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask_d = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc = VL_RAND_RESET_I(16);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__trigger_level = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_reset = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tx_reset = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_reg = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_en_reg = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fi_di_reg = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__repeat_reg = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0r = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr1r = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr2r = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr3r = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr4r = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5r = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6r = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7r = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_push = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_data_out = VL_RAND_RESET_I(11);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t = VL_RAND_RESET_I(10);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_out = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_in = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_overrun = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_push_pulse = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____Vcellinp__receiver__enable = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask_condition = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir_read = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr_read = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fifo_read = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fifo_write = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__delayed_modem_signals = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0_d = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr1_d = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr2_d = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr3_d = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr4_d = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5_d = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6_d = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7_d = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_cnt = VL_RAND_RESET_I(9);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_next = VL_RAND_RESET_I(9);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_toggle = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_d = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_d = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_d = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_d = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_d = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_pnd = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_pnd = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_pnd = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_pnd = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_pnd = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__d1_fifo_read = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__shift_out = VL_RAND_RESET_I(7);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_pop = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_out = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_out = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_overrun = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_bak = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1 = VL_RAND_RESET_I(4);
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[__Vi0] = VL_RAND_RESET_I(8);
    }}
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__i_uart_sync_flops__DOT__flop_0 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16 = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rbit_counter = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_error = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rframing_error = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rbit_in = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_xor = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push_q = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_data_in = VL_RAND_RESET_I(11);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_7 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_0 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1 = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value = VL_RAND_RESET_I(10);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__data8_out = VL_RAND_RESET_I(8);
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vi0] = VL_RAND_RESET_I(3);
    }}
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1 = VL_RAND_RESET_I(4);
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[__Vi0] = VL_RAND_RESET_I(8);
    }}
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_int = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r0 = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r1 = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_type_r1 = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_type_r2 = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__REG_DAT_T = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_c = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r = VL_RAND_RESET_I(25);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_op_num = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0 = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map1 = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_rdy_map0 = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_rdy_map1 = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing = VL_RAND_RESET_I(16);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__addr_in_die = VL_RAND_RESET_Q(38);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_clr_ack = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NANDtag = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT0 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT1 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT2 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT3 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT6 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT7 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT8 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT9 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT10 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT11 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_cmd_valid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_number = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM = VL_RAND_RESET_Q(48);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_pre_o = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY_post_i = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR = VL_RAND_RESET_Q(38);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_I_WR = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ACK = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ERASE_SERIAL = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr_incr = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr_next = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr_wrap = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arid = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen_last = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arsize = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_push = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas = VL_RAND_RESET_Q(45);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_pop = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_push = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_valid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rcur = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rid = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rlast = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rvalid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_incr = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_next = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_wrap = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awid = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awlen = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awsize = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_push = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_push = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas = VL_RAND_RESET_Q(45);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_pop = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_push = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_valid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_allow_out = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_data = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_datas = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_pop = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_push = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_go = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wlast = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wstrb = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wvalid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_incr = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_next = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_wrap = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arid = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen_last = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arsize = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_push = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_push = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas = VL_RAND_RESET_Q(45);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_pop = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_push = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_en = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rid = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rlast = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rvalid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_incr = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_next = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_wrap = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awid = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awlen = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awsize = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_push = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_push = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas = VL_RAND_RESET_Q(45);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_pop = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_push = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_valid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_allow_out = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_data = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_datas = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_pop = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_push = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_go = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wdata = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wlast = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wstrb = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wvalid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__confreg__DOT__cr0 = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__confreg__DOT__cr1 = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__confreg__DOT__cr2 = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__confreg__DOT__cr3 = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__confreg__DOT__cr4 = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__confreg__DOT__cr5 = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__confreg__DOT__cr6 = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__confreg__DOT__cr7 = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__confreg__DOT__led_data = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__confreg__DOT__led_rg0_data = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__confreg__DOT__led_rg1_data = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__confreg__DOT__num_data = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__confreg__DOT__confreg_uart_data = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__confreg__DOT__confreg_uart_valid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__confreg__DOT__timer_r2 = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__confreg__DOT__simu_flag = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__confreg__DOT__io_simu = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__confreg__DOT__virtual_uart_data = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__confreg__DOT__open_trace = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__confreg__DOT__num_monitor = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__confreg__DOT__conf_rdata_reg = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r1 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r2 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r3 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r1 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r2 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r1 = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r2 = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__confreg__DOT__timer_r1 = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__confreg__DOT__timer = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__confreg__DOT__write_timer = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__confreg__DOT__write_uart_valid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__confreg__DOT__btn_key_r = VL_RAND_RESET_I(16);
    simu_top__DOT__soc__DOT__confreg__DOT__state = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__confreg__DOT__next_state = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__confreg__DOT__key_flag = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__confreg__DOT__key_count = VL_RAND_RESET_I(20);
    simu_top__DOT__soc__DOT__confreg__DOT__state_count = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__confreg__DOT__btn_key_tmp = VL_RAND_RESET_I(16);
    simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__confreg__DOT__step0_flag = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__confreg__DOT__step0_count = VL_RAND_RESET_I(20);
    simu_top__DOT__soc__DOT__confreg__DOT__step1_flag = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__confreg__DOT__step1_count = VL_RAND_RESET_I(20);
    simu_top__DOT__soc__DOT__confreg__DOT__count = VL_RAND_RESET_I(20);
    simu_top__DOT__soc__DOT__confreg__DOT__scan_data = VL_RAND_RESET_I(4);
    __Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__Vfuncout = VL_RAND_RESET_I(3);
    __Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__valid = VL_RAND_RESET_I(3);
    __Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__pre_num = VL_RAND_RESET_I(3);
    __Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__Vfuncout = VL_RAND_RESET_I(3);
    __Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__valid = VL_RAND_RESET_I(3);
    __Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__pre_num = VL_RAND_RESET_I(3);
    __Vtableidx1 = 0;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[0] = 0U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[1] = 0U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[2] = 1U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[3] = 1U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[4] = 2U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[5] = 2U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[6] = 2U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[7] = 2U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[8] = 3U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[9] = 3U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[10] = 3U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[11] = 3U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[12] = 3U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[13] = 3U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[14] = 3U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[15] = 3U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[16] = 4U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[17] = 4U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[18] = 4U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[19] = 4U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[20] = 4U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[21] = 4U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[22] = 4U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[23] = 4U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[24] = 4U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[25] = 4U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[26] = 4U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[27] = 4U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[28] = 4U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[29] = 4U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[30] = 4U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[31] = 4U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[0] = 5U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[1] = 5U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[2] = 5U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[3] = 5U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[4] = 5U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[5] = 5U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[6] = 5U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[7] = 5U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[8] = 5U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[9] = 5U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[10] = 5U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[11] = 5U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[12] = 5U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[13] = 5U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[14] = 5U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[15] = 5U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[16] = 5U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[17] = 5U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[18] = 5U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[19] = 5U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[20] = 5U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[21] = 5U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[22] = 5U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[23] = 5U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[24] = 5U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[25] = 5U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[26] = 5U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[27] = 5U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[28] = 5U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[29] = 5U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[30] = 5U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[31] = 5U;
    __Vtableidx2 = 0;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[0] = 0U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[1] = 0U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[2] = 1U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[3] = 1U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[4] = 2U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[5] = 2U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[6] = 2U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[7] = 2U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[8] = 3U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[9] = 3U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[10] = 3U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[11] = 3U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[12] = 3U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[13] = 3U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[14] = 3U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[15] = 3U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[16] = 4U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[17] = 4U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[18] = 4U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[19] = 4U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[20] = 4U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[21] = 4U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[22] = 4U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[23] = 4U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[24] = 4U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[25] = 4U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[26] = 4U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[27] = 4U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[28] = 4U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[29] = 4U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[30] = 4U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[31] = 4U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[0] = 5U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[1] = 5U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[2] = 5U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[3] = 5U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[4] = 5U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[5] = 5U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[6] = 5U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[7] = 5U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[8] = 5U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[9] = 5U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[10] = 5U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[11] = 5U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[12] = 5U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[13] = 5U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[14] = 5U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[15] = 5U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[16] = 5U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[17] = 5U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[18] = 5U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[19] = 5U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[20] = 5U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[21] = 5U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[22] = 5U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[23] = 5U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[24] = 5U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[25] = 5U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[26] = 5U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[27] = 5U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[28] = 5U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[29] = 5U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[30] = 5U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[31] = 5U;
    __Vtableidx3 = 0;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[0] = 0x5fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[1] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[2] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[3] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[4] = 0x67U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[5] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[6] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[7] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[8] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[9] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[10] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[11] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[12] = 0x77U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[13] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[14] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[15] = 0xafU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[16] = 0x5fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[17] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[18] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[19] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[20] = 0x67U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[21] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[22] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[23] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[24] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[25] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[26] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[27] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[28] = 0x77U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[29] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[30] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[31] = 0xafU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[32] = 0x5fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[33] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[34] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[35] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[36] = 0x67U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[37] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[38] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[39] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[40] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[41] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[42] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[43] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[44] = 0x77U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[45] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[46] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[47] = 0xafU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[48] = 0x5fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[49] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[50] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[51] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[52] = 0x67U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[53] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[54] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[55] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[56] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[57] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[58] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[59] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[60] = 0x77U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[61] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[62] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[63] = 0xafU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[64] = 0x5fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[65] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[66] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[67] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[68] = 0x67U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[69] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[70] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[71] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[72] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[73] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[74] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[75] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[76] = 0x77U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[77] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[78] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[79] = 0xafU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[80] = 0x5fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[81] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[82] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[83] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[84] = 0x67U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[85] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[86] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[87] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[88] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[89] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[90] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[91] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[92] = 0x77U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[93] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[94] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[95] = 0xafU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[96] = 0x5fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[97] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[98] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[99] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[100] = 0x67U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[101] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[102] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[103] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[104] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[105] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[106] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[107] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[108] = 0x77U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[109] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[110] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[111] = 0xafU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[112] = 0x5fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[113] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[114] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[115] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[116] = 0x67U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[117] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[118] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[119] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[120] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[121] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[122] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[123] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[124] = 0x77U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[125] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[126] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[127] = 0xafU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[128] = 0x5fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[129] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[130] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[131] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[132] = 0x67U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[133] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[134] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[135] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[136] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[137] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[138] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[139] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[140] = 0x77U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[141] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[142] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[143] = 0xafU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[144] = 0x5fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[145] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[146] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[147] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[148] = 0x67U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[149] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[150] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[151] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[152] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[153] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[154] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[155] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[156] = 0x77U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[157] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[158] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[159] = 0xafU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[160] = 0x5fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[161] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[162] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[163] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[164] = 0x67U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[165] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[166] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[167] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[168] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[169] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[170] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[171] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[172] = 0x77U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[173] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[174] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[175] = 0xafU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[176] = 0x5fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[177] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[178] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[179] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[180] = 0x67U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[181] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[182] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[183] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[184] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[185] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[186] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[187] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[188] = 0x77U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[189] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[190] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[191] = 0xafU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[192] = 0x5fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[193] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[194] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[195] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[196] = 0x67U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[197] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[198] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[199] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[200] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[201] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[202] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[203] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[204] = 0x77U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[205] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[206] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[207] = 0xafU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[208] = 0x5fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[209] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[210] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[211] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[212] = 0x67U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[213] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[214] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[215] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[216] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[217] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[218] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[219] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[220] = 0x77U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[221] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[222] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[223] = 0xafU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[224] = 0x5fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[225] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[226] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[227] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[228] = 0x67U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[229] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[230] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[231] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[232] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[233] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[234] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[235] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[236] = 0x77U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[237] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[238] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[239] = 0xafU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[240] = 0x5fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[241] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[242] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[243] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[244] = 0x67U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[245] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[246] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[247] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[248] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[249] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[250] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[251] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[252] = 0x77U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[253] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[254] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[255] = 0xafU;
    __Vtableidx4 = 0;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[0] = 0x1bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[1] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[2] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[3] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[4] = 0x1dfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[5] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[6] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[7] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[8] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[9] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[10] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[11] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[12] = 0x21fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[13] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[14] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[15] = 0x2ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[16] = 0x1bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[17] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[18] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[19] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[20] = 0x1dfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[21] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[22] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[23] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[24] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[25] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[26] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[27] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[28] = 0x21fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[29] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[30] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[31] = 0x2ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[32] = 0x1bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[33] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[34] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[35] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[36] = 0x1dfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[37] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[38] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[39] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[40] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[41] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[42] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[43] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[44] = 0x21fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[45] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[46] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[47] = 0x2ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[48] = 0x1bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[49] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[50] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[51] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[52] = 0x1dfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[53] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[54] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[55] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[56] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[57] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[58] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[59] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[60] = 0x21fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[61] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[62] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[63] = 0x2ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[64] = 0x1bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[65] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[66] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[67] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[68] = 0x1dfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[69] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[70] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[71] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[72] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[73] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[74] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[75] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[76] = 0x21fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[77] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[78] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[79] = 0x2ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[80] = 0x1bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[81] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[82] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[83] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[84] = 0x1dfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[85] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[86] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[87] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[88] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[89] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[90] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[91] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[92] = 0x21fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[93] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[94] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[95] = 0x2ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[96] = 0x1bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[97] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[98] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[99] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[100] = 0x1dfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[101] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[102] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[103] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[104] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[105] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[106] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[107] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[108] = 0x21fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[109] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[110] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[111] = 0x2ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[112] = 0x1bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[113] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[114] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[115] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[116] = 0x1dfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[117] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[118] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[119] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[120] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[121] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[122] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[123] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[124] = 0x21fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[125] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[126] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[127] = 0x2ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[128] = 0x1bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[129] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[130] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[131] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[132] = 0x1dfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[133] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[134] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[135] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[136] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[137] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[138] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[139] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[140] = 0x21fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[141] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[142] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[143] = 0x2ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[144] = 0x1bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[145] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[146] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[147] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[148] = 0x1dfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[149] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[150] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[151] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[152] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[153] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[154] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[155] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[156] = 0x21fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[157] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[158] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[159] = 0x2ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[160] = 0x1bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[161] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[162] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[163] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[164] = 0x1dfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[165] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[166] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[167] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[168] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[169] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[170] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[171] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[172] = 0x21fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[173] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[174] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[175] = 0x2ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[176] = 0x1bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[177] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[178] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[179] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[180] = 0x1dfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[181] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[182] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[183] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[184] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[185] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[186] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[187] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[188] = 0x21fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[189] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[190] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[191] = 0x2ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[192] = 0x1bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[193] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[194] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[195] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[196] = 0x1dfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[197] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[198] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[199] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[200] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[201] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[202] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[203] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[204] = 0x21fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[205] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[206] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[207] = 0x2ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[208] = 0x1bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[209] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[210] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[211] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[212] = 0x1dfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[213] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[214] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[215] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[216] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[217] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[218] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[219] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[220] = 0x21fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[221] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[222] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[223] = 0x2ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[224] = 0x1bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[225] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[226] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[227] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[228] = 0x1dfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[229] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[230] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[231] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[232] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[233] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[234] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[235] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[236] = 0x21fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[237] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[238] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[239] = 0x2ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[240] = 0x1bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[241] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[242] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[243] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[244] = 0x1dfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[245] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[246] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[247] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[248] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[249] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[250] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[251] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[252] = 0x21fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[253] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[254] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[255] = 0x2ffU;
    __Vtable5_num_a_g[0] = 0U;
    __Vtable5_num_a_g[1] = 0x7eU;
    __Vtable5_num_a_g[2] = 0U;
    __Vtable5_num_a_g[3] = 0x30U;
    __Vtable5_num_a_g[4] = 0U;
    __Vtable5_num_a_g[5] = 0x6dU;
    __Vtable5_num_a_g[6] = 0U;
    __Vtable5_num_a_g[7] = 0x79U;
    __Vtable5_num_a_g[8] = 0U;
    __Vtable5_num_a_g[9] = 0x33U;
    __Vtable5_num_a_g[10] = 0U;
    __Vtable5_num_a_g[11] = 0x5bU;
    __Vtable5_num_a_g[12] = 0U;
    __Vtable5_num_a_g[13] = 0x5fU;
    __Vtable5_num_a_g[14] = 0U;
    __Vtable5_num_a_g[15] = 0x70U;
    __Vtable5_num_a_g[16] = 0U;
    __Vtable5_num_a_g[17] = 0x7fU;
    __Vtable5_num_a_g[18] = 0U;
    __Vtable5_num_a_g[19] = 0x7bU;
    __Vtable5_num_a_g[20] = 0U;
    __Vtable5_num_a_g[21] = 0x77U;
    __Vtable5_num_a_g[22] = 0U;
    __Vtable5_num_a_g[23] = 0x1fU;
    __Vtable5_num_a_g[24] = 0U;
    __Vtable5_num_a_g[25] = 0x4eU;
    __Vtable5_num_a_g[26] = 0U;
    __Vtable5_num_a_g[27] = 0x3dU;
    __Vtable5_num_a_g[28] = 0U;
    __Vtable5_num_a_g[29] = 0x4fU;
    __Vtable5_num_a_g[30] = 0U;
    __Vtable5_num_a_g[31] = 0x47U;
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__instr_temp_valid = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__readData_temp_valid = VL_RAND_RESET_I(1);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__rf__DOT__rf__v0 = 0;
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_req = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_size_r = VL_RAND_RESET_I(2);
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_addr_r = VL_RAND_RESET_I(32);
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wdata_r = VL_RAND_RESET_I(32);
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cpu_axi_interface_u__DOT__do_wstrb_r = VL_RAND_RESET_I(4);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr = VL_RAND_RESET_I(20);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb = VL_RAND_RESET_I(4);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 = VL_RAND_RESET_I(32);
    __Vdly__simu_top__DOT__soc__DOT__apb_s_bvalid = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size = VL_RAND_RESET_I(3);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count = VL_RAND_RESET_I(3);
    __Vdly__simu_top__DOT__soc__DOT__apb_s_rvalid = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count = VL_RAND_RESET_I(8);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier = VL_RAND_RESET_I(4);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5r = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc = VL_RAND_RESET_I(16);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt = VL_RAND_RESET_I(8);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_pnd = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_pnd = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_pnd = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_pnd = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_pnd = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate = VL_RAND_RESET_I(3);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time = VL_RAND_RESET_I(3);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter = VL_RAND_RESET_I(5);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter = VL_RAND_RESET_I(3);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__shift_out = VL_RAND_RESET_I(7);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_out = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = VL_RAND_RESET_I(4);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count = VL_RAND_RESET_I(5);
    __Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate = VL_RAND_RESET_I(4);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_xor = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift = VL_RAND_RESET_I(8);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b = VL_RAND_RESET_I(8);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t = VL_RAND_RESET_I(10);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top = VL_RAND_RESET_I(4);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom = VL_RAND_RESET_I(4);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count = VL_RAND_RESET_I(5);
    __Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v19 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command = VL_RAND_RESET_I(32);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = VL_RAND_RESET_I(8);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count = VL_RAND_RESET_I(14);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR = VL_RAND_RESET_Q(38);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status = VL_RAND_RESET_I(8);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM = VL_RAND_RESET_I(8);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM = VL_RAND_RESET_I(8);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = VL_RAND_RESET_I(5);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer = VL_RAND_RESET_I(2);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ERASE_SERIAL = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM = VL_RAND_RESET_I(32);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT = VL_RAND_RESET_I(3);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT = VL_RAND_RESET_I(14);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT = VL_RAND_RESET_I(14);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM = VL_RAND_RESET_I(3);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = VL_RAND_RESET_I(5);
    __Vdly__simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rcur = VL_RAND_RESET_I(4);
    __Vdly__simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur = VL_RAND_RESET_I(4);
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr0 = VL_RAND_RESET_I(32);
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr6 = VL_RAND_RESET_I(32);
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr1 = VL_RAND_RESET_I(32);
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr2 = VL_RAND_RESET_I(32);
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr3 = VL_RAND_RESET_I(32);
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr4 = VL_RAND_RESET_I(32);
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr5 = VL_RAND_RESET_I(32);
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr7 = VL_RAND_RESET_I(32);
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r1 = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__key_count = VL_RAND_RESET_I(20);
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__state_count = VL_RAND_RESET_I(4);
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__step0_count = VL_RAND_RESET_I(20);
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__step1_count = VL_RAND_RESET_I(20);
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__count = VL_RAND_RESET_I(20);
    __Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr = VL_RAND_RESET_I(2);
    __Vdlyvdim0__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v0 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v0 = VL_RAND_RESET_I(3);
    __Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v0 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v1 = 0;
    __Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr = VL_RAND_RESET_I(2);
    __Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram__v0 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram__v1 = 0;
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__timer = VL_RAND_RESET_I(32);
    __VinpClk__TOP__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT____Vcellinp__myDiv__clk = VL_RAND_RESET_I(1);
    __Vchglast__TOP__simu_top__DOT__soc__DOT__cpu__DOT__cpu_sram_u__DOT__alu__DOT____Vcellinp__myDiv__clk = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}

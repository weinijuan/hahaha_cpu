// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsimu_top.h"
#include "Vsimu_top__Syms.h"
#include "verilated_fst_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vsimu_top::Vsimu_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsimu_top__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , aclk{vlSymsp->TOP.aclk}
    , resetn{vlSymsp->TOP.resetn}
    , inst_req{vlSymsp->TOP.inst_req}
    , inst_wr{vlSymsp->TOP.inst_wr}
    , inst_size{vlSymsp->TOP.inst_size}
    , inst_wstrb{vlSymsp->TOP.inst_wstrb}
    , inst_addr_ok{vlSymsp->TOP.inst_addr_ok}
    , inst_data_ok{vlSymsp->TOP.inst_data_ok}
    , data_req{vlSymsp->TOP.data_req}
    , data_wr{vlSymsp->TOP.data_wr}
    , data_size{vlSymsp->TOP.data_size}
    , data_wstrb{vlSymsp->TOP.data_wstrb}
    , data_addr_ok{vlSymsp->TOP.data_addr_ok}
    , data_data_ok{vlSymsp->TOP.data_data_ok}
    , arid{vlSymsp->TOP.arid}
    , arlen{vlSymsp->TOP.arlen}
    , arsize{vlSymsp->TOP.arsize}
    , arburst{vlSymsp->TOP.arburst}
    , arlock{vlSymsp->TOP.arlock}
    , arcache{vlSymsp->TOP.arcache}
    , arprot{vlSymsp->TOP.arprot}
    , arvalid{vlSymsp->TOP.arvalid}
    , arready{vlSymsp->TOP.arready}
    , rid{vlSymsp->TOP.rid}
    , rresp{vlSymsp->TOP.rresp}
    , rlast{vlSymsp->TOP.rlast}
    , rvalid{vlSymsp->TOP.rvalid}
    , rready{vlSymsp->TOP.rready}
    , awid{vlSymsp->TOP.awid}
    , awlen{vlSymsp->TOP.awlen}
    , awsize{vlSymsp->TOP.awsize}
    , awburst{vlSymsp->TOP.awburst}
    , awlock{vlSymsp->TOP.awlock}
    , awcache{vlSymsp->TOP.awcache}
    , awprot{vlSymsp->TOP.awprot}
    , awvalid{vlSymsp->TOP.awvalid}
    , awready{vlSymsp->TOP.awready}
    , wid{vlSymsp->TOP.wid}
    , wstrb{vlSymsp->TOP.wstrb}
    , wlast{vlSymsp->TOP.wlast}
    , wvalid{vlSymsp->TOP.wvalid}
    , wready{vlSymsp->TOP.wready}
    , bid{vlSymsp->TOP.bid}
    , bresp{vlSymsp->TOP.bresp}
    , bvalid{vlSymsp->TOP.bvalid}
    , bready{vlSymsp->TOP.bready}
    , aresetn{vlSymsp->TOP.aresetn}
    , enable_delay{vlSymsp->TOP.enable_delay}
    , ram_ren{vlSymsp->TOP.ram_ren}
    , ram_wen{vlSymsp->TOP.ram_wen}
    , debug0_wb_rf_wen{vlSymsp->TOP.debug0_wb_rf_wen}
    , debug0_wb_rf_wnum{vlSymsp->TOP.debug0_wb_rf_wnum}
    , open_trace{vlSymsp->TOP.open_trace}
    , num_monitor{vlSymsp->TOP.num_monitor}
    , confreg_uart_data{vlSymsp->TOP.confreg_uart_data}
    , write_uart_valid{vlSymsp->TOP.write_uart_valid}
    , uart_rx{vlSymsp->TOP.uart_rx}
    , uart_tx{vlSymsp->TOP.uart_tx}
    , led_rg0{vlSymsp->TOP.led_rg0}
    , led_rg1{vlSymsp->TOP.led_rg1}
    , num_csn{vlSymsp->TOP.num_csn}
    , num_a_g{vlSymsp->TOP.num_a_g}
    , __SYM__switch{vlSymsp->TOP.__SYM__switch}
    , btn_key_col{vlSymsp->TOP.btn_key_col}
    , btn_key_row{vlSymsp->TOP.btn_key_row}
    , btn_step{vlSymsp->TOP.btn_step}
    , led{vlSymsp->TOP.led}
    , inst_addr{vlSymsp->TOP.inst_addr}
    , inst_wdata{vlSymsp->TOP.inst_wdata}
    , inst_rdata{vlSymsp->TOP.inst_rdata}
    , data_addr{vlSymsp->TOP.data_addr}
    , data_wdata{vlSymsp->TOP.data_wdata}
    , data_rdata{vlSymsp->TOP.data_rdata}
    , araddr{vlSymsp->TOP.araddr}
    , rdata{vlSymsp->TOP.rdata}
    , awaddr{vlSymsp->TOP.awaddr}
    , wdata{vlSymsp->TOP.wdata}
    , random_seed{vlSymsp->TOP.random_seed}
    , ram_raddr{vlSymsp->TOP.ram_raddr}
    , ram_rdata{vlSymsp->TOP.ram_rdata}
    , ram_waddr{vlSymsp->TOP.ram_waddr}
    , ram_wdata{vlSymsp->TOP.ram_wdata}
    , debug0_wb_pc{vlSymsp->TOP.debug0_wb_pc}
    , debug0_wb_rf_wdata{vlSymsp->TOP.debug0_wb_rf_wdata}
    , num_data{vlSymsp->TOP.num_data}
    , uart_ctr_bus{vlSymsp->TOP.uart_ctr_bus}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vsimu_top::Vsimu_top(const char* _vcname__)
    : Vsimu_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsimu_top::~Vsimu_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vsimu_top___024root___eval_debug_assertions(Vsimu_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vsimu_top___024root___eval_static(Vsimu_top___024root* vlSelf);
void Vsimu_top___024root___eval_initial(Vsimu_top___024root* vlSelf);
void Vsimu_top___024root___eval_settle(Vsimu_top___024root* vlSelf);
void Vsimu_top___024root___eval(Vsimu_top___024root* vlSelf);

void Vsimu_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsimu_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsimu_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vsimu_top___024root___eval_static(&(vlSymsp->TOP));
        Vsimu_top___024root___eval_initial(&(vlSymsp->TOP));
        Vsimu_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vsimu_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vsimu_top::eventsPending() { return false; }

uint64_t Vsimu_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vsimu_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vsimu_top___024root___eval_final(Vsimu_top___024root* vlSelf);

VL_ATTR_COLD void Vsimu_top::final() {
    Vsimu_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsimu_top::hierName() const { return vlSymsp->name(); }
const char* Vsimu_top::modelName() const { return "Vsimu_top"; }
unsigned Vsimu_top::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vsimu_top::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vsimu_top___024root__trace_init_top(Vsimu_top___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vsimu_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsimu_top___024root*>(voidSelf);
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vsimu_top___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vsimu_top___024root__trace_register(Vsimu_top___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vsimu_top::trace(VerilatedFstC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vsimu_top::trace()' shall not be called after 'VerilatedFstC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vsimu_top___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}

//============================================================
// Model serialization

VerilatedSerialize& operator<<(VerilatedSerialize& os, Vsimu_top& rhs) {
    Verilated::quiesce();
    rhs.vlSymsp->__Vserialize(os);
    return os;
}

VerilatedDeserialize& operator>>(VerilatedDeserialize& os, Vsimu_top& rhs) {
    Verilated::quiesce();
    rhs.vlSymsp->__Vdeserialize(os);
    return os;
}

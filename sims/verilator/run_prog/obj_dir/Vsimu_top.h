// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VSIMU_TOP_H_
#define VERILATED_VSIMU_TOP_H_  // guard

#include "verilated.h"
#include "verilated_save.h"
#include "svdpi.h"

class Vsimu_top__Syms;
class Vsimu_top___024root;
class VerilatedFstC;
class Vsimu_top___024unit;


// This class is the main interface to the Verilated model
class Vsimu_top VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vsimu_top__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&aclk,0,0);
    VL_IN8(&resetn,0,0);
    VL_IN8(&inst_req,0,0);
    VL_IN8(&inst_wr,0,0);
    VL_IN8(&inst_size,1,0);
    VL_IN8(&inst_wstrb,3,0);
    VL_OUT8(&inst_addr_ok,0,0);
    VL_OUT8(&inst_data_ok,0,0);
    VL_IN8(&data_req,0,0);
    VL_IN8(&data_wr,0,0);
    VL_IN8(&data_size,1,0);
    VL_IN8(&data_wstrb,3,0);
    VL_OUT8(&data_addr_ok,0,0);
    VL_OUT8(&data_data_ok,0,0);
    VL_OUT8(&arid,3,0);
    VL_OUT8(&arlen,7,0);
    VL_OUT8(&arsize,2,0);
    VL_OUT8(&arburst,1,0);
    VL_OUT8(&arlock,1,0);
    VL_OUT8(&arcache,3,0);
    VL_OUT8(&arprot,2,0);
    VL_OUT8(&arvalid,0,0);
    VL_IN8(&arready,0,0);
    VL_IN8(&rid,3,0);
    VL_IN8(&rresp,1,0);
    VL_IN8(&rlast,0,0);
    VL_IN8(&rvalid,0,0);
    VL_OUT8(&rready,0,0);
    VL_OUT8(&awid,3,0);
    VL_OUT8(&awlen,7,0);
    VL_OUT8(&awsize,2,0);
    VL_OUT8(&awburst,1,0);
    VL_OUT8(&awlock,1,0);
    VL_OUT8(&awcache,3,0);
    VL_OUT8(&awprot,2,0);
    VL_OUT8(&awvalid,0,0);
    VL_IN8(&awready,0,0);
    VL_OUT8(&wid,3,0);
    VL_OUT8(&wstrb,3,0);
    VL_OUT8(&wlast,0,0);
    VL_OUT8(&wvalid,0,0);
    VL_IN8(&wready,0,0);
    VL_IN8(&bid,3,0);
    VL_IN8(&bresp,1,0);
    VL_IN8(&bvalid,0,0);
    VL_OUT8(&bready,0,0);
    VL_IN8(&aresetn,0,0);
    VL_IN8(&enable_delay,0,0);
    VL_OUT8(&ram_ren,0,0);
    VL_OUT8(&ram_wen,3,0);
    VL_OUT8(&debug0_wb_rf_wen,0,0);
    VL_OUT8(&debug0_wb_rf_wnum,4,0);
    VL_OUT8(&open_trace,0,0);
    VL_OUT8(&num_monitor,0,0);
    VL_OUT8(&confreg_uart_data,7,0);
    VL_OUT8(&write_uart_valid,0,0);
    VL_INOUT8(&uart_rx,0,0);
    VL_INOUT8(&uart_tx,0,0);
    VL_OUT8(&led_rg0,1,0);
    VL_OUT8(&led_rg1,1,0);
    VL_OUT8(&num_csn,7,0);
    VL_OUT8(&num_a_g,6,0);
    VL_IN8(&__SYM__switch,7,0);
    VL_OUT8(&btn_key_col,3,0);
    VL_IN8(&btn_key_row,3,0);
    VL_IN8(&btn_step,1,0);
    VL_OUT16(&led,15,0);
    VL_IN(&inst_addr,31,0);
    VL_IN(&inst_wdata,31,0);
    VL_OUT(&inst_rdata,31,0);
    VL_IN(&data_addr,31,0);
    VL_IN(&data_wdata,31,0);
    VL_OUT(&data_rdata,31,0);
    VL_OUT(&araddr,31,0);
    VL_IN(&rdata,31,0);
    VL_OUT(&awaddr,31,0);
    VL_OUT(&wdata,31,0);
    VL_IN(&random_seed,22,0);
    VL_OUT(&ram_raddr,31,0);
    VL_IN(&ram_rdata,31,0);
    VL_OUT(&ram_waddr,31,0);
    VL_OUT(&ram_wdata,31,0);
    VL_OUT(&debug0_wb_pc,31,0);
    VL_OUT(&debug0_wb_rf_wdata,31,0);
    VL_OUT(&num_data,31,0);
    VL_OUTW(&uart_ctr_bus,127,0,4);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vsimu_top___024unit* const __PVT____024unit;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vsimu_top___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vsimu_top(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vsimu_top(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vsimu_top();
  private:
    VL_UNCOPYABLE(Vsimu_top);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedFstC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Serialization functions
    friend VerilatedSerialize& operator<<(VerilatedSerialize& os, Vsimu_top& rhs);
    friend VerilatedDeserialize& operator>>(VerilatedDeserialize& os, Vsimu_top& rhs);

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard

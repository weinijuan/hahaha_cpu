// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsimu_top.h for the primary calling header

#ifndef _VSIMU_TOP___024UNIT_H_
#define _VSIMU_TOP___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_save.h"
#include "Vsimu_top__Dpi.h"

//==========

class Vsimu_top__Syms;
class Vsimu_top_VerilatedFst;


//----------

VL_MODULE(Vsimu_top___024unit) {
  public:
    
    // INTERNAL VARIABLES
  private:
    Vsimu_top__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vsimu_top___024unit);  ///< Copying not allowed
  public:
    Vsimu_top___024unit(const char* name = "TOP");
    ~Vsimu_top___024unit();
    
    // INTERNAL METHODS
    void __Vconfigure(Vsimu_top__Syms* symsp, bool first);
    void __Vdpiimwrap_v_difftest_CSRRegState_TOP____024unit(const CData/*7:0*/ coreid, const QData/*63:0*/ crmd, const QData/*63:0*/ prmd, const QData/*63:0*/ euen, const QData/*63:0*/ ecfg, const QData/*63:0*/ estat, const QData/*63:0*/ era, const QData/*63:0*/ badv, const QData/*63:0*/ eentry, const QData/*63:0*/ tlbidx, const QData/*63:0*/ tlbehi, const QData/*63:0*/ tlbelo0, const QData/*63:0*/ tlbelo1, const QData/*63:0*/ asid, const QData/*63:0*/ pgdl, const QData/*63:0*/ pgdh, const QData/*63:0*/ save0, const QData/*63:0*/ save1, const QData/*63:0*/ save2, const QData/*63:0*/ save3, const QData/*63:0*/ tid, const QData/*63:0*/ tcfg, const QData/*63:0*/ tval, const QData/*63:0*/ ticlr, const QData/*63:0*/ llbctl, const QData/*63:0*/ tlbrentry, const QData/*63:0*/ dmw0, const QData/*63:0*/ dmw1);
    void __Vdpiimwrap_v_difftest_ExcpEvent_TOP____024unit(const CData/*7:0*/ coreid, const CData/*7:0*/ excp_valid, const CData/*0:0*/ eret, const IData/*31:0*/ intrNo, const IData/*31:0*/ cause, const QData/*63:0*/ exceptionPC, const IData/*31:0*/ exceptionInst);
    void __Vdpiimwrap_v_difftest_GRegState_TOP____024unit(const CData/*7:0*/ coreid, const QData/*63:0*/ gpr_0, const QData/*63:0*/ gpr_1, const QData/*63:0*/ gpr_2, const QData/*63:0*/ gpr_3, const QData/*63:0*/ gpr_4, const QData/*63:0*/ gpr_5, const QData/*63:0*/ gpr_6, const QData/*63:0*/ gpr_7, const QData/*63:0*/ gpr_8, const QData/*63:0*/ gpr_9, const QData/*63:0*/ gpr_10, const QData/*63:0*/ gpr_11, const QData/*63:0*/ gpr_12, const QData/*63:0*/ gpr_13, const QData/*63:0*/ gpr_14, const QData/*63:0*/ gpr_15, const QData/*63:0*/ gpr_16, const QData/*63:0*/ gpr_17, const QData/*63:0*/ gpr_18, const QData/*63:0*/ gpr_19, const QData/*63:0*/ gpr_20, const QData/*63:0*/ gpr_21, const QData/*63:0*/ gpr_22, const QData/*63:0*/ gpr_23, const QData/*63:0*/ gpr_24, const QData/*63:0*/ gpr_25, const QData/*63:0*/ gpr_26, const QData/*63:0*/ gpr_27, const QData/*63:0*/ gpr_28, const QData/*63:0*/ gpr_29, const QData/*63:0*/ gpr_30, const QData/*63:0*/ gpr_31);
    void __Vdpiimwrap_v_difftest_InstrCommit_TOP____024unit(const CData/*7:0*/ coreid, const CData/*7:0*/ index, const CData/*0:0*/ valid, const QData/*63:0*/ pc, const IData/*31:0*/ instr, const CData/*0:0*/ skip, const CData/*0:0*/ is_TLBFILL, const CData/*7:0*/ TLBFILL_index, const CData/*0:0*/ is_CNTinst, const QData/*63:0*/ timer_64_value, const CData/*0:0*/ wen, const CData/*7:0*/ wdest, const QData/*63:0*/ wdata, const CData/*0:0*/ csr_rstat, const IData/*31:0*/ csr_data);
    void __Vdpiimwrap_v_difftest_LoadEvent_TOP____024unit(const CData/*7:0*/ coreid, const CData/*7:0*/ index, const CData/*7:0*/ valid, const QData/*63:0*/ paddr, const QData/*63:0*/ vaddr);
    void __Vdpiimwrap_v_difftest_StoreEvent_TOP____024unit(const CData/*7:0*/ coreid, const CData/*7:0*/ index, const CData/*7:0*/ valid, const QData/*63:0*/ storePAddr, const QData/*63:0*/ storeVAddr, const QData/*63:0*/ storeData);
    void __Vdpiimwrap_v_difftest_TrapEvent_TOP____024unit(const CData/*7:0*/ coreid, const CData/*0:0*/ valid, const CData/*7:0*/ code, const QData/*63:0*/ pc, const QData/*63:0*/ cycleCnt, const QData/*63:0*/ instrCnt);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void traceInit(VerilatedFst* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedFst* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedFst* vcdp, void* userthis, uint32_t code);
    void __Vserialize(VerilatedSerialize& os);
    void __Vdeserialize(VerilatedDeserialize& os);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard

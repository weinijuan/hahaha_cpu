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
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->DifftestInstrCommit__02Eclock) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__DifftestInstrCommit__02Eclock)));
    vlSelf->__VactTriggered.at(1U) = ((IData)(vlSelf->DifftestExcpEvent__02Eclock) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__DifftestExcpEvent__02Eclock)));
    vlSelf->__VactTriggered.at(2U) = ((IData)(vlSelf->DifftestTrapEvent__02Eclock) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__DifftestTrapEvent__02Eclock)));
    vlSelf->__VactTriggered.at(3U) = ((IData)(vlSelf->DifftestStoreEvent__02Eclock) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__DifftestStoreEvent__02Eclock)));
    vlSelf->__VactTriggered.at(4U) = ((IData)(vlSelf->DifftestLoadEvent__02Eclock) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__DifftestLoadEvent__02Eclock)));
    vlSelf->__VactTriggered.at(5U) = ((IData)(vlSelf->DifftestCSRRegState__02Eclock) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__DifftestCSRRegState__02Eclock)));
    vlSelf->__VactTriggered.at(6U) = ((IData)(vlSelf->DifftestGRegState__02Eclock) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__DifftestGRegState__02Eclock)));
    vlSelf->__VactTriggered.at(7U) = ((IData)(vlSelf->aclk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__aclk)));
    vlSelf->__Vtrigrprev__TOP__DifftestInstrCommit__02Eclock 
        = vlSelf->DifftestInstrCommit__02Eclock;
    vlSelf->__Vtrigrprev__TOP__DifftestExcpEvent__02Eclock 
        = vlSelf->DifftestExcpEvent__02Eclock;
    vlSelf->__Vtrigrprev__TOP__DifftestTrapEvent__02Eclock 
        = vlSelf->DifftestTrapEvent__02Eclock;
    vlSelf->__Vtrigrprev__TOP__DifftestStoreEvent__02Eclock 
        = vlSelf->DifftestStoreEvent__02Eclock;
    vlSelf->__Vtrigrprev__TOP__DifftestLoadEvent__02Eclock 
        = vlSelf->DifftestLoadEvent__02Eclock;
    vlSelf->__Vtrigrprev__TOP__DifftestCSRRegState__02Eclock 
        = vlSelf->DifftestCSRRegState__02Eclock;
    vlSelf->__Vtrigrprev__TOP__DifftestGRegState__02Eclock 
        = vlSelf->DifftestGRegState__02Eclock;
    vlSelf->__Vtrigrprev__TOP__aclk = vlSelf->aclk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsimu_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vsimu_top___024unit____Vdpiimwrap_v_difftest_LoadEvent_TOP____024unit(CData/*7:0*/ coreid, CData/*7:0*/ index, CData/*7:0*/ valid, QData/*63:0*/ paddr, QData/*63:0*/ vaddr);

VL_INLINE_OPT void Vsimu_top___024root___nba_sequent__TOP__0(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___nba_sequent__TOP__0\n"); );
    // Body
    Vsimu_top___024unit____Vdpiimwrap_v_difftest_LoadEvent_TOP____024unit(vlSelf->DifftestLoadEvent__02Ecoreid, (IData)(vlSelf->DifftestLoadEvent__02Eindex), vlSelf->DifftestLoadEvent__02Evalid, vlSelf->paddr, vlSelf->vaddr);
}

void Vsimu_top___024unit____Vdpiimwrap_v_difftest_TrapEvent_TOP____024unit(CData/*7:0*/ coreid, CData/*0:0*/ valid, CData/*7:0*/ code, QData/*63:0*/ pc, QData/*63:0*/ cycleCnt, QData/*63:0*/ instrCnt);

VL_INLINE_OPT void Vsimu_top___024root___nba_sequent__TOP__1(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___nba_sequent__TOP__1\n"); );
    // Body
    Vsimu_top___024unit____Vdpiimwrap_v_difftest_TrapEvent_TOP____024unit(vlSelf->DifftestTrapEvent__02Ecoreid, (IData)(vlSelf->DifftestTrapEvent__02Evalid), vlSelf->code, vlSelf->DifftestTrapEvent__02Epc, vlSelf->cycleCnt, vlSelf->instrCnt);
}

void Vsimu_top___024unit____Vdpiimwrap_v_difftest_StoreEvent_TOP____024unit(CData/*7:0*/ coreid, CData/*7:0*/ index, CData/*7:0*/ valid, QData/*63:0*/ storePAddr, QData/*63:0*/ storeVAddr, QData/*63:0*/ storeData);

VL_INLINE_OPT void Vsimu_top___024root___nba_sequent__TOP__2(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___nba_sequent__TOP__2\n"); );
    // Body
    Vsimu_top___024unit____Vdpiimwrap_v_difftest_StoreEvent_TOP____024unit(vlSelf->DifftestStoreEvent__02Ecoreid, (IData)(vlSelf->DifftestStoreEvent__02Eindex), vlSelf->DifftestStoreEvent__02Evalid, vlSelf->storePAddr, vlSelf->storeVAddr, vlSelf->storeData);
}

void Vsimu_top___024unit____Vdpiimwrap_v_difftest_ExcpEvent_TOP____024unit(CData/*7:0*/ coreid, CData/*7:0*/ excp_valid, CData/*0:0*/ eret, IData/*31:0*/ intrNo, IData/*31:0*/ cause, QData/*63:0*/ exceptionPC, IData/*31:0*/ exceptionInst);

VL_INLINE_OPT void Vsimu_top___024root___nba_sequent__TOP__3(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___nba_sequent__TOP__3\n"); );
    // Body
    Vsimu_top___024unit____Vdpiimwrap_v_difftest_ExcpEvent_TOP____024unit(vlSelf->DifftestExcpEvent__02Ecoreid, (IData)(vlSelf->excp_valid), vlSelf->eret, vlSelf->intrNo, vlSelf->cause, vlSelf->exceptionPC, vlSelf->exceptionInst);
}

void Vsimu_top___024unit____Vdpiimwrap_v_difftest_InstrCommit_TOP____024unit(CData/*7:0*/ coreid, CData/*7:0*/ index, CData/*0:0*/ valid, QData/*63:0*/ pc, IData/*31:0*/ instr, CData/*0:0*/ skip, CData/*0:0*/ is_TLBFILL, CData/*7:0*/ TLBFILL_index, CData/*0:0*/ is_CNTinst, QData/*63:0*/ timer_64_value, CData/*0:0*/ wen, CData/*7:0*/ wdest, QData/*63:0*/ wdata, CData/*0:0*/ csr_rstat, IData/*31:0*/ csr_data);

VL_INLINE_OPT void Vsimu_top___024root___nba_sequent__TOP__4(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___nba_sequent__TOP__4\n"); );
    // Body
    if (vlSelf->DifftestInstrCommit__02Evalid) {
        Vsimu_top___024unit____Vdpiimwrap_v_difftest_InstrCommit_TOP____024unit(vlSelf->DifftestInstrCommit__02Ecoreid, (IData)(vlSelf->DifftestInstrCommit__02Eindex), vlSelf->DifftestInstrCommit__02Evalid, vlSelf->DifftestInstrCommit__02Epc, vlSelf->instr, (IData)(vlSelf->skip), vlSelf->is_TLBFILL, (IData)(vlSelf->TLBFILL_index), vlSelf->is_CNTinst, vlSelf->timer_64_value, (IData)(vlSelf->wen), vlSelf->wdest, vlSelf->wdata, (IData)(vlSelf->csr_rstat), vlSelf->csr_data);
    }
}

void Vsimu_top___024unit____Vdpiimwrap_v_difftest_CSRRegState_TOP____024unit(CData/*7:0*/ coreid, QData/*63:0*/ crmd, QData/*63:0*/ prmd, QData/*63:0*/ euen, QData/*63:0*/ ecfg, QData/*63:0*/ estat, QData/*63:0*/ era, QData/*63:0*/ badv, QData/*63:0*/ eentry, QData/*63:0*/ tlbidx, QData/*63:0*/ tlbehi, QData/*63:0*/ tlbelo0, QData/*63:0*/ tlbelo1, QData/*63:0*/ asid, QData/*63:0*/ pgdl, QData/*63:0*/ pgdh, QData/*63:0*/ save0, QData/*63:0*/ save1, QData/*63:0*/ save2, QData/*63:0*/ save3, QData/*63:0*/ tid, QData/*63:0*/ tcfg, QData/*63:0*/ tval, QData/*63:0*/ ticlr, QData/*63:0*/ llbctl, QData/*63:0*/ tlbrentry, QData/*63:0*/ dmw0, QData/*63:0*/ dmw1);

VL_INLINE_OPT void Vsimu_top___024root___nba_sequent__TOP__5(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___nba_sequent__TOP__5\n"); );
    // Body
    Vsimu_top___024unit____Vdpiimwrap_v_difftest_CSRRegState_TOP____024unit(vlSelf->DifftestCSRRegState__02Ecoreid, vlSelf->crmd, vlSelf->prmd, vlSelf->euen, vlSelf->ecfg, vlSelf->estat, vlSelf->era, vlSelf->badv, vlSelf->eentry, vlSelf->tlbidx, vlSelf->tlbehi, vlSelf->tlbelo0, vlSelf->tlbelo1, vlSelf->asid, vlSelf->pgdl, vlSelf->pgdh, vlSelf->save0, vlSelf->save1, vlSelf->save2, vlSelf->save3, vlSelf->tid, vlSelf->tcfg, vlSelf->tval, vlSelf->ticlr, vlSelf->llbctl, vlSelf->tlbrentry, vlSelf->dmw0, vlSelf->dmw1);
}

void Vsimu_top___024unit____Vdpiimwrap_v_difftest_GRegState_TOP____024unit(CData/*7:0*/ coreid, QData/*63:0*/ gpr_0, QData/*63:0*/ gpr_1, QData/*63:0*/ gpr_2, QData/*63:0*/ gpr_3, QData/*63:0*/ gpr_4, QData/*63:0*/ gpr_5, QData/*63:0*/ gpr_6, QData/*63:0*/ gpr_7, QData/*63:0*/ gpr_8, QData/*63:0*/ gpr_9, QData/*63:0*/ gpr_10, QData/*63:0*/ gpr_11, QData/*63:0*/ gpr_12, QData/*63:0*/ gpr_13, QData/*63:0*/ gpr_14, QData/*63:0*/ gpr_15, QData/*63:0*/ gpr_16, QData/*63:0*/ gpr_17, QData/*63:0*/ gpr_18, QData/*63:0*/ gpr_19, QData/*63:0*/ gpr_20, QData/*63:0*/ gpr_21, QData/*63:0*/ gpr_22, QData/*63:0*/ gpr_23, QData/*63:0*/ gpr_24, QData/*63:0*/ gpr_25, QData/*63:0*/ gpr_26, QData/*63:0*/ gpr_27, QData/*63:0*/ gpr_28, QData/*63:0*/ gpr_29, QData/*63:0*/ gpr_30, QData/*63:0*/ gpr_31);

VL_INLINE_OPT void Vsimu_top___024root___nba_sequent__TOP__6(Vsimu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top___024root___nba_sequent__TOP__6\n"); );
    // Body
    Vsimu_top___024unit____Vdpiimwrap_v_difftest_GRegState_TOP____024unit(vlSelf->DifftestGRegState__02Ecoreid, vlSelf->gpr_0, vlSelf->gpr_1, vlSelf->gpr_2, vlSelf->gpr_3, vlSelf->gpr_4, vlSelf->gpr_5, vlSelf->gpr_6, vlSelf->gpr_7, vlSelf->gpr_8, vlSelf->gpr_9, vlSelf->gpr_10, vlSelf->gpr_11, vlSelf->gpr_12, vlSelf->gpr_13, vlSelf->gpr_14, vlSelf->gpr_15, vlSelf->gpr_16, vlSelf->gpr_17, vlSelf->gpr_18, vlSelf->gpr_19, vlSelf->gpr_20, vlSelf->gpr_21, vlSelf->gpr_22, vlSelf->gpr_23, vlSelf->gpr_24, vlSelf->gpr_25, vlSelf->gpr_26, vlSelf->gpr_27, vlSelf->gpr_28, vlSelf->gpr_29, vlSelf->gpr_30, vlSelf->gpr_31);
}

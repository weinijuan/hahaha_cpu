// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimu_top.h for the primary calling header

#include "Vsimu_top___024unit.h"
#include "Vsimu_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vsimu_top___024unit) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vsimu_top___024unit::__Vconfigure(Vsimu_top__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vsimu_top___024unit::~Vsimu_top___024unit() {
}

// Savable
void Vsimu_top___024unit::__Vserialize(VerilatedSerialize& os) {
    vluint64_t __Vcheckval = VL_ULL(0xe3b0c44298fc1c14);
    os<<__Vcheckval;
}
void Vsimu_top___024unit::__Vdeserialize(VerilatedDeserialize& os) {
    vluint64_t __Vcheckval = VL_ULL(0xe3b0c44298fc1c14);
    os.readAssert(__Vcheckval);
}

VL_INLINE_OPT void Vsimu_top___024unit::__Vdpiimwrap_v_difftest_InstrCommit_TOP____024unit(const CData/*7:0*/ coreid, const CData/*7:0*/ index, const CData/*0:0*/ valid, const QData/*63:0*/ pc, const IData/*31:0*/ instr, const CData/*0:0*/ skip, const CData/*0:0*/ is_TLBFILL, const CData/*7:0*/ TLBFILL_index, const CData/*0:0*/ is_CNTinst, const QData/*63:0*/ timer_64_value, const CData/*0:0*/ wen, const CData/*7:0*/ wdest, const QData/*63:0*/ wdata, const CData/*0:0*/ csr_rstat, const IData/*31:0*/ csr_data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsimu_top___024unit::__Vdpiimwrap_v_difftest_InstrCommit_TOP____024unit\n"); );
    // Body
    char coreid__Vcvt;
    coreid__Vcvt = coreid;
    char index__Vcvt;
    index__Vcvt = index;
    unsigned char valid__Vcvt;
    valid__Vcvt = valid;
    long long pc__Vcvt;
    pc__Vcvt = pc;
    int instr__Vcvt;
    instr__Vcvt = instr;
    unsigned char skip__Vcvt;
    skip__Vcvt = skip;
    unsigned char is_TLBFILL__Vcvt;
    is_TLBFILL__Vcvt = is_TLBFILL;
    char TLBFILL_index__Vcvt;
    TLBFILL_index__Vcvt = TLBFILL_index;
    unsigned char is_CNTinst__Vcvt;
    is_CNTinst__Vcvt = is_CNTinst;
    long long timer_64_value__Vcvt;
    timer_64_value__Vcvt = timer_64_value;
    unsigned char wen__Vcvt;
    wen__Vcvt = wen;
    char wdest__Vcvt;
    wdest__Vcvt = wdest;
    long long wdata__Vcvt;
    wdata__Vcvt = wdata;
    unsigned char csr_rstat__Vcvt;
    csr_rstat__Vcvt = csr_rstat;
    int csr_data__Vcvt;
    csr_data__Vcvt = csr_data;
    v_difftest_InstrCommit(coreid__Vcvt, index__Vcvt, valid__Vcvt, pc__Vcvt, instr__Vcvt, skip__Vcvt, is_TLBFILL__Vcvt, TLBFILL_index__Vcvt, is_CNTinst__Vcvt, timer_64_value__Vcvt, wen__Vcvt, wdest__Vcvt, wdata__Vcvt, csr_rstat__Vcvt, csr_data__Vcvt);
}

VL_INLINE_OPT void Vsimu_top___024unit::__Vdpiimwrap_v_difftest_ExcpEvent_TOP____024unit(const CData/*7:0*/ coreid, const CData/*7:0*/ excp_valid, const CData/*0:0*/ eret, const IData/*31:0*/ intrNo, const IData/*31:0*/ cause, const QData/*63:0*/ exceptionPC, const IData/*31:0*/ exceptionInst) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsimu_top___024unit::__Vdpiimwrap_v_difftest_ExcpEvent_TOP____024unit\n"); );
    // Body
    char coreid__Vcvt;
    coreid__Vcvt = coreid;
    char excp_valid__Vcvt;
    excp_valid__Vcvt = excp_valid;
    unsigned char eret__Vcvt;
    eret__Vcvt = eret;
    int intrNo__Vcvt;
    intrNo__Vcvt = intrNo;
    int cause__Vcvt;
    cause__Vcvt = cause;
    long long exceptionPC__Vcvt;
    exceptionPC__Vcvt = exceptionPC;
    int exceptionInst__Vcvt;
    exceptionInst__Vcvt = exceptionInst;
    v_difftest_ExcpEvent(coreid__Vcvt, excp_valid__Vcvt, eret__Vcvt, intrNo__Vcvt, cause__Vcvt, exceptionPC__Vcvt, exceptionInst__Vcvt);
}

VL_INLINE_OPT void Vsimu_top___024unit::__Vdpiimwrap_v_difftest_TrapEvent_TOP____024unit(const CData/*7:0*/ coreid, const CData/*0:0*/ valid, const CData/*7:0*/ code, const QData/*63:0*/ pc, const QData/*63:0*/ cycleCnt, const QData/*63:0*/ instrCnt) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsimu_top___024unit::__Vdpiimwrap_v_difftest_TrapEvent_TOP____024unit\n"); );
    // Body
    char coreid__Vcvt;
    coreid__Vcvt = coreid;
    unsigned char valid__Vcvt;
    valid__Vcvt = valid;
    char code__Vcvt;
    code__Vcvt = code;
    long long pc__Vcvt;
    pc__Vcvt = pc;
    long long cycleCnt__Vcvt;
    cycleCnt__Vcvt = cycleCnt;
    long long instrCnt__Vcvt;
    instrCnt__Vcvt = instrCnt;
    v_difftest_TrapEvent(coreid__Vcvt, valid__Vcvt, code__Vcvt, pc__Vcvt, cycleCnt__Vcvt, instrCnt__Vcvt);
}

VL_INLINE_OPT void Vsimu_top___024unit::__Vdpiimwrap_v_difftest_StoreEvent_TOP____024unit(const CData/*7:0*/ coreid, const CData/*7:0*/ index, const CData/*7:0*/ valid, const QData/*63:0*/ storePAddr, const QData/*63:0*/ storeVAddr, const QData/*63:0*/ storeData) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsimu_top___024unit::__Vdpiimwrap_v_difftest_StoreEvent_TOP____024unit\n"); );
    // Body
    char coreid__Vcvt;
    coreid__Vcvt = coreid;
    char index__Vcvt;
    index__Vcvt = index;
    char valid__Vcvt;
    valid__Vcvt = valid;
    long long storePAddr__Vcvt;
    storePAddr__Vcvt = storePAddr;
    long long storeVAddr__Vcvt;
    storeVAddr__Vcvt = storeVAddr;
    long long storeData__Vcvt;
    storeData__Vcvt = storeData;
    v_difftest_StoreEvent(coreid__Vcvt, index__Vcvt, valid__Vcvt, storePAddr__Vcvt, storeVAddr__Vcvt, storeData__Vcvt);
}

VL_INLINE_OPT void Vsimu_top___024unit::__Vdpiimwrap_v_difftest_LoadEvent_TOP____024unit(const CData/*7:0*/ coreid, const CData/*7:0*/ index, const CData/*7:0*/ valid, const QData/*63:0*/ paddr, const QData/*63:0*/ vaddr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsimu_top___024unit::__Vdpiimwrap_v_difftest_LoadEvent_TOP____024unit\n"); );
    // Body
    char coreid__Vcvt;
    coreid__Vcvt = coreid;
    char index__Vcvt;
    index__Vcvt = index;
    char valid__Vcvt;
    valid__Vcvt = valid;
    long long paddr__Vcvt;
    paddr__Vcvt = paddr;
    long long vaddr__Vcvt;
    vaddr__Vcvt = vaddr;
    v_difftest_LoadEvent(coreid__Vcvt, index__Vcvt, valid__Vcvt, paddr__Vcvt, vaddr__Vcvt);
}

VL_INLINE_OPT void Vsimu_top___024unit::__Vdpiimwrap_v_difftest_CSRRegState_TOP____024unit(const CData/*7:0*/ coreid, const QData/*63:0*/ crmd, const QData/*63:0*/ prmd, const QData/*63:0*/ euen, const QData/*63:0*/ ecfg, const QData/*63:0*/ estat, const QData/*63:0*/ era, const QData/*63:0*/ badv, const QData/*63:0*/ eentry, const QData/*63:0*/ tlbidx, const QData/*63:0*/ tlbehi, const QData/*63:0*/ tlbelo0, const QData/*63:0*/ tlbelo1, const QData/*63:0*/ asid, const QData/*63:0*/ pgdl, const QData/*63:0*/ pgdh, const QData/*63:0*/ save0, const QData/*63:0*/ save1, const QData/*63:0*/ save2, const QData/*63:0*/ save3, const QData/*63:0*/ tid, const QData/*63:0*/ tcfg, const QData/*63:0*/ tval, const QData/*63:0*/ ticlr, const QData/*63:0*/ llbctl, const QData/*63:0*/ tlbrentry, const QData/*63:0*/ dmw0, const QData/*63:0*/ dmw1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsimu_top___024unit::__Vdpiimwrap_v_difftest_CSRRegState_TOP____024unit\n"); );
    // Body
    char coreid__Vcvt;
    coreid__Vcvt = coreid;
    long long crmd__Vcvt;
    crmd__Vcvt = crmd;
    long long prmd__Vcvt;
    prmd__Vcvt = prmd;
    long long euen__Vcvt;
    euen__Vcvt = euen;
    long long ecfg__Vcvt;
    ecfg__Vcvt = ecfg;
    long long estat__Vcvt;
    estat__Vcvt = estat;
    long long era__Vcvt;
    era__Vcvt = era;
    long long badv__Vcvt;
    badv__Vcvt = badv;
    long long eentry__Vcvt;
    eentry__Vcvt = eentry;
    long long tlbidx__Vcvt;
    tlbidx__Vcvt = tlbidx;
    long long tlbehi__Vcvt;
    tlbehi__Vcvt = tlbehi;
    long long tlbelo0__Vcvt;
    tlbelo0__Vcvt = tlbelo0;
    long long tlbelo1__Vcvt;
    tlbelo1__Vcvt = tlbelo1;
    long long asid__Vcvt;
    asid__Vcvt = asid;
    long long pgdl__Vcvt;
    pgdl__Vcvt = pgdl;
    long long pgdh__Vcvt;
    pgdh__Vcvt = pgdh;
    long long save0__Vcvt;
    save0__Vcvt = save0;
    long long save1__Vcvt;
    save1__Vcvt = save1;
    long long save2__Vcvt;
    save2__Vcvt = save2;
    long long save3__Vcvt;
    save3__Vcvt = save3;
    long long tid__Vcvt;
    tid__Vcvt = tid;
    long long tcfg__Vcvt;
    tcfg__Vcvt = tcfg;
    long long tval__Vcvt;
    tval__Vcvt = tval;
    long long ticlr__Vcvt;
    ticlr__Vcvt = ticlr;
    long long llbctl__Vcvt;
    llbctl__Vcvt = llbctl;
    long long tlbrentry__Vcvt;
    tlbrentry__Vcvt = tlbrentry;
    long long dmw0__Vcvt;
    dmw0__Vcvt = dmw0;
    long long dmw1__Vcvt;
    dmw1__Vcvt = dmw1;
    v_difftest_CSRRegState(coreid__Vcvt, crmd__Vcvt, prmd__Vcvt, euen__Vcvt, ecfg__Vcvt, estat__Vcvt, era__Vcvt, badv__Vcvt, eentry__Vcvt, tlbidx__Vcvt, tlbehi__Vcvt, tlbelo0__Vcvt, tlbelo1__Vcvt, asid__Vcvt, pgdl__Vcvt, pgdh__Vcvt, save0__Vcvt, save1__Vcvt, save2__Vcvt, save3__Vcvt, tid__Vcvt, tcfg__Vcvt, tval__Vcvt, ticlr__Vcvt, llbctl__Vcvt, tlbrentry__Vcvt, dmw0__Vcvt, dmw1__Vcvt);
}

VL_INLINE_OPT void Vsimu_top___024unit::__Vdpiimwrap_v_difftest_GRegState_TOP____024unit(const CData/*7:0*/ coreid, const QData/*63:0*/ gpr_0, const QData/*63:0*/ gpr_1, const QData/*63:0*/ gpr_2, const QData/*63:0*/ gpr_3, const QData/*63:0*/ gpr_4, const QData/*63:0*/ gpr_5, const QData/*63:0*/ gpr_6, const QData/*63:0*/ gpr_7, const QData/*63:0*/ gpr_8, const QData/*63:0*/ gpr_9, const QData/*63:0*/ gpr_10, const QData/*63:0*/ gpr_11, const QData/*63:0*/ gpr_12, const QData/*63:0*/ gpr_13, const QData/*63:0*/ gpr_14, const QData/*63:0*/ gpr_15, const QData/*63:0*/ gpr_16, const QData/*63:0*/ gpr_17, const QData/*63:0*/ gpr_18, const QData/*63:0*/ gpr_19, const QData/*63:0*/ gpr_20, const QData/*63:0*/ gpr_21, const QData/*63:0*/ gpr_22, const QData/*63:0*/ gpr_23, const QData/*63:0*/ gpr_24, const QData/*63:0*/ gpr_25, const QData/*63:0*/ gpr_26, const QData/*63:0*/ gpr_27, const QData/*63:0*/ gpr_28, const QData/*63:0*/ gpr_29, const QData/*63:0*/ gpr_30, const QData/*63:0*/ gpr_31) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsimu_top___024unit::__Vdpiimwrap_v_difftest_GRegState_TOP____024unit\n"); );
    // Body
    char coreid__Vcvt;
    coreid__Vcvt = coreid;
    long long gpr_0__Vcvt;
    gpr_0__Vcvt = gpr_0;
    long long gpr_1__Vcvt;
    gpr_1__Vcvt = gpr_1;
    long long gpr_2__Vcvt;
    gpr_2__Vcvt = gpr_2;
    long long gpr_3__Vcvt;
    gpr_3__Vcvt = gpr_3;
    long long gpr_4__Vcvt;
    gpr_4__Vcvt = gpr_4;
    long long gpr_5__Vcvt;
    gpr_5__Vcvt = gpr_5;
    long long gpr_6__Vcvt;
    gpr_6__Vcvt = gpr_6;
    long long gpr_7__Vcvt;
    gpr_7__Vcvt = gpr_7;
    long long gpr_8__Vcvt;
    gpr_8__Vcvt = gpr_8;
    long long gpr_9__Vcvt;
    gpr_9__Vcvt = gpr_9;
    long long gpr_10__Vcvt;
    gpr_10__Vcvt = gpr_10;
    long long gpr_11__Vcvt;
    gpr_11__Vcvt = gpr_11;
    long long gpr_12__Vcvt;
    gpr_12__Vcvt = gpr_12;
    long long gpr_13__Vcvt;
    gpr_13__Vcvt = gpr_13;
    long long gpr_14__Vcvt;
    gpr_14__Vcvt = gpr_14;
    long long gpr_15__Vcvt;
    gpr_15__Vcvt = gpr_15;
    long long gpr_16__Vcvt;
    gpr_16__Vcvt = gpr_16;
    long long gpr_17__Vcvt;
    gpr_17__Vcvt = gpr_17;
    long long gpr_18__Vcvt;
    gpr_18__Vcvt = gpr_18;
    long long gpr_19__Vcvt;
    gpr_19__Vcvt = gpr_19;
    long long gpr_20__Vcvt;
    gpr_20__Vcvt = gpr_20;
    long long gpr_21__Vcvt;
    gpr_21__Vcvt = gpr_21;
    long long gpr_22__Vcvt;
    gpr_22__Vcvt = gpr_22;
    long long gpr_23__Vcvt;
    gpr_23__Vcvt = gpr_23;
    long long gpr_24__Vcvt;
    gpr_24__Vcvt = gpr_24;
    long long gpr_25__Vcvt;
    gpr_25__Vcvt = gpr_25;
    long long gpr_26__Vcvt;
    gpr_26__Vcvt = gpr_26;
    long long gpr_27__Vcvt;
    gpr_27__Vcvt = gpr_27;
    long long gpr_28__Vcvt;
    gpr_28__Vcvt = gpr_28;
    long long gpr_29__Vcvt;
    gpr_29__Vcvt = gpr_29;
    long long gpr_30__Vcvt;
    gpr_30__Vcvt = gpr_30;
    long long gpr_31__Vcvt;
    gpr_31__Vcvt = gpr_31;
    v_difftest_GRegState(coreid__Vcvt, gpr_0__Vcvt, gpr_1__Vcvt, gpr_2__Vcvt, gpr_3__Vcvt, gpr_4__Vcvt, gpr_5__Vcvt, gpr_6__Vcvt, gpr_7__Vcvt, gpr_8__Vcvt, gpr_9__Vcvt, gpr_10__Vcvt, gpr_11__Vcvt, gpr_12__Vcvt, gpr_13__Vcvt, gpr_14__Vcvt, gpr_15__Vcvt, gpr_16__Vcvt, gpr_17__Vcvt, gpr_18__Vcvt, gpr_19__Vcvt, gpr_20__Vcvt, gpr_21__Vcvt, gpr_22__Vcvt, gpr_23__Vcvt, gpr_24__Vcvt, gpr_25__Vcvt, gpr_26__Vcvt, gpr_27__Vcvt, gpr_28__Vcvt, gpr_29__Vcvt, gpr_30__Vcvt, gpr_31__Vcvt);
}

void Vsimu_top___024unit::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsimu_top___024unit::_ctor_var_reset\n"); );
}

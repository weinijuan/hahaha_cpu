// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimu_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vsimu_top__Syms.h"
#include "Vsimu_top_cpuDefine.h"

void Vsimu_top_cpuDefine___ctor_var_reset(Vsimu_top_cpuDefine* vlSelf);

Vsimu_top_cpuDefine::Vsimu_top_cpuDefine(Vsimu_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsimu_top_cpuDefine___ctor_var_reset(this);
}

void Vsimu_top_cpuDefine::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vsimu_top_cpuDefine::~Vsimu_top_cpuDefine() {
}

// Savable
void Vsimu_top_cpuDefine::__Vserialize(VerilatedSerialize& os) {
    uint64_t __Vcheckval = 0xbaa3a9d009bb2cedULL;
    os << __Vcheckval;
    os << vlSymsp->_vm_contextp__;
    os<<__PVT__FlushOp;
    os<<__PVT__ExCode;
}
void Vsimu_top_cpuDefine::__Vdeserialize(VerilatedDeserialize& os) {
    uint64_t __Vcheckval = 0xbaa3a9d009bb2cedULL;
    os.readAssert(__Vcheckval);
    os >> vlSymsp->_vm_contextp__;
    os>>__PVT__FlushOp;
    os>>__PVT__ExCode;
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsimu_top.h for the primary calling header

#ifndef VERILATED_VSIMU_TOP_CPUDEFINE_H_
#define VERILATED_VSIMU_TOP_CPUDEFINE_H_  // guard

#include "verilated.h"
#include "verilated_save.h"

class Vsimu_top__Syms;

class Vsimu_top_cpuDefine final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*2:0*/ __PVT__FlushOp;
    CData/*5:0*/ __PVT__ExCode;

    // INTERNAL VARIABLES
    Vsimu_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsimu_top_cpuDefine(Vsimu_top__Syms* symsp, const char* v__name);
    ~Vsimu_top_cpuDefine();
    VL_UNCOPYABLE(Vsimu_top_cpuDefine);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __Vserialize(VerilatedSerialize& os);
    void __Vdeserialize(VerilatedDeserialize& os);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vsimu_top__Syms.h"
#include "Vsimu_top.h"
#include "Vsimu_top___024unit.h"


void Vsimu_top__Syms::__Vserialize(VerilatedSerialize& os) {
    // LOCAL STATE
    os<<__Vm_activity;
    os<<__Vm_didInit;
    // SUBCELL STATE
    TOP____024unit.__Vserialize(os);
}
void Vsimu_top__Syms::__Vdeserialize(VerilatedDeserialize& os) {
    // LOCAL STATE
    os>>__Vm_activity;
    os>>__Vm_didInit;
    // SUBCELL STATE
    TOP____024unit.__Vdeserialize(os);
}


// FUNCTIONS
Vsimu_top__Syms::Vsimu_top__Syms(Vsimu_top* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_activity(false)
    , __Vm_didInit(false)
    // Setup submodule names
    , TOP____024unit(Verilated::catName(topp->name(), "$unit"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->__PVT____024unit = &TOP____024unit;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP____024unit.__Vconfigure(this, true);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
    }
}

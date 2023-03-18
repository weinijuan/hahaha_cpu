`include "cpu.svh"

import cpuDefine::*;
module Control (
    input  Instr   instr,
    input  logic   zero,
    input  logic   lt,
    output PcSel   pcsel,
    output Itype   itype,
    output logic   branch,
    output logic   regWriteEn,
    output logic   memWriteEn,
    output AluSel1 alusel1,
    output AluSel2 alusel2
);

endmodule

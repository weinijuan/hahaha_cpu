`include "cpu.svh"

module Comparator
    import cpuDefine::*;
(
    input  DType rj,
    input DType rd,
    input  logic unsign,
    output logic eq,
    output logic lt
);
    assign eq = (rj == rd);
    assign lt = (unsign & (rj < rd)) | (~unsign & ($signed(rj) < $signed(rd)));

endmodule

`include "cpu.svh"

import cpuDefine::*;
module Comparator (
    input  DType rj,
    rk,
    input  logic unsign,
    output logic zero,
    lt
);
    assign zero = (rj == rk);
    assign lt = (unsign & (rj < rk)) | (~unsign & ($signed(rj) < $signed(rk)));

endmodule

// `include "cpu.svh"

// module PcUpdate
//     import cpuDefine::*;
// (
//     input  logic aclk,
//     input logic aresetn,
//     input logic en,
//     input  DType data,
//     output DType pc
// );

//     always_ff @(posedge aclk) begin
//         if (~aresetn) begin
//             pc <= '0;
//         end else if (en) begin
//             pc <= data;
//         end
//     end

// endmodule

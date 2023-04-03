`include "cpu.svh"

module regfile
    import cpuDefine::*;
(
    input logic clk,
    input logic reset,
    input Gr rd_in,
    input Gr rj_in,
    input Gr rk_in,
    input logic regWriteEn,
    input DType regWriteData,
    output DType rj,
    output DType rk,
    output DType rd
);

    DType rf[rfNum-1:0];

    // posedge ? negedge?
    always @(negedge clk)
        if (regWriteEn) begin
            if (rd_in != 0) begin
                rf[rd_in] <= regWriteData;
            end
        end

  always_comb begin 
    if (rj_in != 0 && rj_in == rd_in) begin
        rj = regWriteData;
    end else if (rj_in != 0)
    begin
        rj = rf[rj_in];
    end
    else begin
      rj = '0;
    end

    if (rk_in != 0 && rk_in == rd_in) begin
      rk = regWriteData;
    end else if (rk_in != 0) begin
        rk = rf[rk_in];
    end
    else begin
      rk = '0;
    end
  end

endmodule

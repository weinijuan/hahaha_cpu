`include "cpu.svh"

module regfile
    import cpuDefine::*;
(
    input logic aclk,
    input logic aresetn,
    input Gr rd_in,
    input Gr rj_in,
    input Gr rk_in,
    input Gr rd_csr_in,
    input Gr rj_csr_in,
    input Gr rk_csr_in,
    // 写回寄存器编号
    input Gr rd_wb_in,
    input logic regWriteEn,
    input DType regWriteData,
    output DType rj,
    output DType rk,
    output DType rd,
    output DType rd_csr,
    output DType rj_csr,
    output DType rk_csr
);

    DType rf[rfNum-1:0];
    //reg[31:0] rf[rfNum-1:0];
    // posedge ? negedge? 统一使用 posedge aclk, 我们使用了
    // 特殊的方式使之能够同时读写
    always @(posedge aclk)
        if (regWriteEn & (rd_wb_in !=0)) begin
//            if (rd_wb_in != 0) begin
                rf[rd_wb_in] <= regWriteData;
//            end
        end

  always_comb begin 
    if (rj_in != 0 && rj_in == rd_wb_in&&regWriteEn) begin
        rj = regWriteData;
    end else if (rj_in != 0)
    begin
        rj = rf[rj_in];
    end
    else begin
      rj = '0;
    end

    if (rk_in != 0 && rk_in == rd_wb_in&&regWriteEn) begin
      rk = regWriteData;
    end else if (rk_in != 0) begin
        rk = rf[rk_in];
    end
    else begin
      rk = '0;
    end


  if (rd_in != 0 && rd_in == rd_wb_in&&regWriteEn) begin
      rd = regWriteData;
  end else if (rd_in != 0) begin
      rd = rf[rd_in];
  end
  else begin
      rd = '0;
  end

  
  if(rd_csr_in!=0)begin
      rd_csr = rf[rd_csr_in];
  end else begin
      rd_csr= '0;
  end
  if(rj_csr_in!=0)begin
      rj_csr = rf[rj_csr_in];
  end else begin
      rj_csr= '0;
  end
  if(rk_csr_in!=0)begin
      rk_csr = rf[rk_csr_in];
  end else begin
      rk_csr = '0;    
  end
  end

endmodule

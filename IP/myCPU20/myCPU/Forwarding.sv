`include "cpu.svh"
module Forwarding
    import cpuDefine::*;
    (
    input Gr rj_no_id, rd_no_id,rk_no_id,
    input Gr rj_no_ex, rk_no_ex,rd_no_ex,
    input DType rj_id, rd_id,rk_id,
    input DType rj_ex, rk_ex, rd_ex,
    input logic regWriteEn_mem, 
    input DType aluout,
    input Gr rd_no_mem,
    input logic regWriteEn_wb,
    input Gr rd_no_wb,
    input DType regWriteData,
    output DType rj_id_true,
    output DType rd_id_true,
    output DType rk_id_true,
    output DType rj_ex_true, rk_ex_true, rd_ex_true,
    input logic ex_finish,
    input logic aclk,
    input logic memRead
);

// logic forJEn_id,
// logic forKEn_id,
// DType forJ_id,
// DType forK_id,
// logic forJEn_ex, forKEn_ex,forDEn_ex
// DType forJ_ex, forK_ex, forD_ex



wire MEM_forward_valid =  regWriteEn_mem && (rd_no_mem != 0);
wire WB_forward_valid = regWriteEn_wb && (rd_no_wb != 0) ;

logic[31:0] rj_ex_true_temp;
logic rj_ex_true_temp_valid;
logic[31:0] rk_ex_true_temp;
//logic rk_ex_true_temp_valid;
logic[31:0] rd_ex_true_temp;
//logic rd_ex_true_temp_valid;



always_comb begin
    if (MEM_forward_valid && (rd_no_mem == rj_no_id)) begin
        rj_id_true = aluout;
    end
    else if (WB_forward_valid && (rd_no_wb == rj_no_id) ) begin
        rj_id_true = regWriteData;
    end
    else begin
        rj_id_true = rj_id;
    end
end




always_comb begin
    if (MEM_forward_valid && (rd_no_mem == rk_no_id)) begin
        rk_id_true = aluout;
    end
    else if (WB_forward_valid && (rd_no_wb == rk_no_id) ) begin
        rk_id_true = regWriteData;
    end
    else begin
        rk_id_true = rk_id;
    end
end


always_comb begin
    if (MEM_forward_valid && (rd_no_mem == rd_no_id)) begin
        rd_id_true = aluout;
    end
    else if (WB_forward_valid && (rd_no_wb == rd_no_id) ) begin
        rd_id_true = regWriteData;
    end
    else begin
        rd_id_true = rd_id;
    end
end



always_ff @(posedge aclk) begin
    if (~ex_finish) begin
        rj_ex_true_temp <= rj_ex_true;
        rj_ex_true_temp_valid <= 1;
        rk_ex_true_temp <= rk_ex_true;
        //rk_ex_true_temp_valid <= 1;
        rd_ex_true_temp <= rd_ex_true;
        //rd_ex_true_temp_valid <= 1;
    end
    else begin
       rj_ex_true_temp_valid <= 0;
       //rk_ex_true_temp_valid <= 0;
       //rd_ex_true_temp_valid <= 0;
    end
end

always_comb begin
    if (MEM_forward_valid && (rd_no_mem == rj_no_ex) && ~memRead) begin
        rj_ex_true = aluout;
    end
    else if (WB_forward_valid && (rd_no_wb == rj_no_ex) ) begin
        rj_ex_true = regWriteData;
    end
    else if (rj_ex_true_temp_valid) begin
        rj_ex_true = rj_ex_true_temp;
    end
    else begin
        rj_ex_true = rj_ex;
    end
end

always_comb begin
    if (MEM_forward_valid && (rd_no_mem == rk_no_ex)&& ~memRead) begin
        rk_ex_true = aluout;
    end
    else if (WB_forward_valid && (rd_no_wb == rk_no_ex) ) begin
        rk_ex_true = regWriteData;
    end
    else if (rj_ex_true_temp_valid) begin
        rk_ex_true = rk_ex_true_temp;
    end
    else begin
        rk_ex_true = rk_ex;
    end
end


always_comb begin
    if (MEM_forward_valid && (rd_no_mem == rd_no_ex) && ~memRead) begin
        rd_ex_true = aluout;
    end
    else if (WB_forward_valid && (rd_no_wb == rd_no_ex) ) begin
        rd_ex_true = regWriteData;
    end
    else if (rj_ex_true_temp_valid) begin
        rd_ex_true = rd_ex_true_temp;
    end
    else begin
        rd_ex_true = rd_ex;
    end
end

endmodule
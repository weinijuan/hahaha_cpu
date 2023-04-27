`include "cpu.svh"
module Forwarding
    import cpuDefine::*;
    (
    input Gr rj_no_id, rd_no_id,
    input Gr rj_no_ex, rk_no_ex,rd_no_ex,
    input DType rj_id, rd_id,
    input DType rj_ex, rk_ex, rd_ex,
    input logic regWriteEn_mem, 
    input DType aluout,
    input Gr rd_no_mem,
    input logic regWriteEn_wb,
    input Gr rd_no_wb,
    input DType regWriteData,
    output DType rj_id_true,
    output DType rd_id_true,
    output DType rj_ex_true, rk_ex_true, rd_ex_true
);

// logic forJEn_id,
// logic forKEn_id,
// DType forJ_id,
// DType forK_id,
// logic forJEn_ex, forKEn_ex,forDEn_ex
// DType forJ_ex, forK_ex, forD_ex



wire MEM_forward_valid =  regWriteEn_mem && (rd_no_mem != 0);
wire WB_forward_valid = regWriteEn_wb && (rd_no_wb != 0) ;

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

always_comb begin
    if (MEM_forward_valid && (rd_no_mem == rj_no_ex)) begin
        rj_ex_true = aluout;
    end
    else if (WB_forward_valid && (rd_no_wb == rj_no_ex) ) begin
        rj_ex_true = regWriteData;
    end
    else begin
        rj_ex_true = rj_ex;
    end
end

always_comb begin
    if (MEM_forward_valid && (rd_no_mem == rk_no_ex)) begin
        rk_ex_true = aluout;
    end
    else if (WB_forward_valid && (rd_no_wb == rk_no_ex) ) begin
        rk_ex_true = regWriteData;
    end
    else begin
        rk_ex_true = rk_ex;
    end
end


always_comb begin
    if (MEM_forward_valid && (rd_no_mem == rd_no_ex)) begin
        rd_ex_true = aluout;
    end
    else if (WB_forward_valid && (rd_no_wb == rd_no_ex) ) begin
        rd_ex_true = regWriteData;
    end
    else begin
        rd_ex_true = rd_ex;
    end
end

endmodule
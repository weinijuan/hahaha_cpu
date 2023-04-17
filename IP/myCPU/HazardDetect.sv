`include "cpu.svh"
module HazardDetect
    import cpuDefine::*;
(
    input Gr rd_no_ex,
    input logic memRead_ex,
    input logic regWriteEn_ex,
    input is_compare,
    input PcSel pcsel,
    input Gr rj_no_id,
    input Gr rk_no_id,
    input Gr rd_no_id,
    input Gr rd_no_mem,
    input AluSel1 alusel1_id,
    input AluSel2 alusel2_id,
    input logic memRead_mem,

    output logic IDFlush,
    output logic IDWriteEn,
    output logic EXFlush
);

    // rd will have load-use hazard 
    logic hazard_ex = (rd_no_ex == rj_no_id) || (rd_no_ex == rk_no_id);
    logic hazard_mem = (rd_no_mem == rj_no_id) || (rd_no_mem == rk_no_id);
    logic hazard_load_use = ((alusel1_id == ALU_SEL_RJ) && (rd_no_ex == rj_no_id)) 
                        || ((alusel2_id == ALU_SEL_RK) && (rd_no_ex == rk_no_id)) 
                        || (rd_no_ex == rd_no_id);
    // branch : 1. ex is load 2. ex is write reg 3. mem is load
    // load-use: 1. ex is load and id need rj/rk/rd
    logic stall = (memRead_ex && hazard_ex && is_compare)
             || (!memRead_ex && regWriteEn_ex && hazard_ex && is_compare) 
             || (memRead_mem && hazard_mem && is_compare) 
             || (memRead_ex && hazard_load_use && (!is_compare)) ;
    always_comb begin
        if (stall) begin
            // IDWriteEn 就是 ID流水线的ready_go, 将其置为0同时flush为1
            // 前者使流水线不会接收错误的数据。后者将流水线清空为无效数据。
            // 其实只需要后者也可以，会将错误数据一起清空
            // 但是通过前者可以通过逐级互锁，使前面的IF流水线可无法修改
            IDWriteEn = 0;
            EXFlush   = 1;
        end else begin
            IDWriteEn = 1;
            EXFlush   = 0;
        end

        if (pcsel == PC_BRANCH) begin
            IDFlush = 1;
        end else begin
            IDFlush = 0;
        end
    end


endmodule

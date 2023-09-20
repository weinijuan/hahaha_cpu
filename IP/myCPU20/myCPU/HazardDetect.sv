`include "cpu.svh"
module HazardDetect
    import cpuDefine::*;
(
    input resetn,
    input aclk,
    input Gr rd_no_ex,
    input logic memRead_ex,
    input logic regWriteEn_ex,
    input is_compare,
    input PcSel pcsel,
    input Gr rj_no_id,
    input Gr rk_no_id,
    input Gr rd_no_id,
    input Gr rd_no_mem,
    input Gr rj_no_ex,
    input Gr rk_no_ex,
    input AluSel1 alusel1_id,
    input AluSel2 alusel2_id,
    input AluSel1 alusel1_ex,
    input AluSel2 alusel2_ex,
    input logic memRead_mem,
    input logic id_is_exc,
    input logic ex_is_exc,
    input logic mem_is_exc, 
    input logic wb_is_exc,
    input logic ex_is_csr,
    input logic mem_is_csr,
    input logic mem_is_ertn,
    input logic wb_is_ertn,
    output logic IDFlush,
    output logic IDWriteEn,
    output logic EXFlush,
    output logic IFFlush,
    output logic MEMFlush,
    output logic WBFlush,
    input logic if_ready_go,
    input logic data_ok_inst,
    input logic ex_valid_out,
    input logic ex_allow_in,
    input logic id_allow_in,
    input logic if_allow_in,
    input logic if_pipeline_valid,
    input logic error_inst_in_if,
    output logic brstall,
    output logic EXWriteEn,
    input logic mem_allow_in,
    input logic  mem_valid_out,
    input logic wb_is_idle,
    input logic mem_is_idle,
    input logic branchPcFromJ // jirl performance test 
);
   // logic tag = 0;
    logic cancel = 0;
    // rd will have load-use hazard 
    wire hazard_ex = (rd_no_ex == rj_no_id) || (rd_no_ex == rd_no_id);
    wire hazard_mem = (rd_no_mem == rj_no_id) || (rd_no_mem == rd_no_id);
    wire hazard_load_use_id = ((alusel1_id == ALU_SEL_RJ) && (rd_no_ex == rj_no_id)) 
                        || ((alusel2_id == ALU_SEL_RK) && (rd_no_ex == rk_no_id)) 
                        || (rd_no_ex == rd_no_id);
    wire hazard_load_use_ex = ((alusel1_ex == ALU_SEL_RJ) && (rd_no_mem == rj_no_ex)) 
                        || ((alusel2_ex == ALU_SEL_RK) && (rd_no_mem == rk_no_ex)) 
                        || (rd_no_mem == rd_no_ex);



    wire hazard_csr_ex = (rd_no_ex == rj_no_id) || (rd_no_ex == rk_no_id) || (rd_no_ex == rd_no_id);
    wire hazard_csr_mem = (rd_no_mem == rj_no_id) || (rd_no_mem == rk_no_id) || (rd_no_mem == rd_no_id);
    // the stall_ex = memRead_mem && hazard_load_use_ex && !is_compare_ex may be better without no-meaning branch stall
    wire stall_ex = memRead_mem && hazard_load_use_ex ;
    // branch : 1. ex is load 2. ex is write reg 3. mem is load
    // load-use: 1. ex is load and id need rj/rk/rd


    assign brstall = (memRead_ex && hazard_ex && is_compare)
             || (!memRead_ex && regWriteEn_ex && hazard_ex && is_compare) 
             || (memRead_mem && hazard_mem && is_compare) 
             
             || (memRead_ex && (rd_no_ex == rj_no_id) && branchPcFromJ) // jirl performance test 
             || (!memRead_ex && regWriteEn_ex && (rd_no_ex == rj_no_id)&& branchPcFromJ )// jirl performance test 
             || (memRead_mem && (rd_no_mem == rj_no_id) && branchPcFromJ)// jirl performance test 
             
             
             ;

    wire stall_id = brstall
             || (memRead_ex && hazard_load_use_id && (!is_compare)) 
             ||  (hazard_csr_ex && ex_is_csr) 
             ||  (hazard_csr_mem && mem_is_csr);
             
             
             
    always_comb begin
        if(wb_is_idle|mem_is_idle|mem_is_exc|mem_is_ertn|wb_is_ertn|wb_is_exc)begin
            MEMFlush = 1;
            EXWriteEn = 0;
        end
        else if (stall_ex & ~ex_is_exc) begin
            if (mem_allow_in && mem_valid_out) begin
                EXWriteEn = 0;
                MEMFlush = 1;
            end
            else begin 
                EXWriteEn = 0;
                MEMFlush = 0;
            end
        end else begin
            EXWriteEn = 1;
            MEMFlush   = 0;
        end
    end


    always_comb begin
        if (wb_is_idle|mem_is_idle|mem_is_exc | wb_is_exc | mem_is_ertn|wb_is_ertn) begin
           EXFlush = 1;
           IDWriteEn = 0; // 这是随便给的
        end
        // 这里的时序可以进行修改，就是利用ex执行的多个周期从而避免停顿，但是太复杂，不做
        else if (stall_id & ~id_is_exc) begin
            // IDWriteEn 就是 ID流水线的ready_go, 将其置为0同时flush为1
            // 前者使流水线不会接收错误的数据。后者将流水线清空为无效数据。
            // 其实只需要后者也可以，会将错误数据一起清空
            // 但是通过前者可以通过逐级互锁，使前面的IF流水线可无法修改
            // ex_allow_in &&  ex_valid_out说明ex任务完成可以走，可以用id_allow_in替代
            if (ex_allow_in && ex_valid_out) begin
                IDWriteEn = 0;
                EXFlush   = 1;
            end
            else begin
                IDWriteEn = 0;
                EXFlush = 0;
            end
        end else begin
            IDWriteEn = 1;
            EXFlush   = 0;
        end
         
        if (wb_is_idle|mem_is_idle|mem_is_exc | wb_is_exc | mem_is_ertn|wb_is_ertn) begin
            IDFlush = 1;
        end
        // IDWriteEn = id_ready_go 可以后续用id_valid_out来替换更强
        else if (pcsel == PC_BRANCH && ~EXFlush && id_allow_in && IDWriteEn && if_ready_go && error_inst_in_if)  begin
            IDFlush = 1;
        end 
        // else if (cancel && data_ok_inst && ~if_ready_go) begin
        else if (cancel && if_ready_go && if_allow_in) begin
            IDFlush = 1;
        end
        else begin
            IDFlush = 0;
        end

        if (wb_is_idle|mem_is_idle|mem_is_exc | wb_is_exc | mem_is_ertn|wb_is_ertn) begin
            IFFlush = 1;
        end
        /*else if (pcsel == PC_BRANCH && ~EXFlush)begin
            IFFlush = 1;
        end*/
        else begin
            IFFlush = 0;
        end


//        if(wb_is_fetch_again|mem_is_fetch_again|mem_is_exc|mem_is_ertn|wb_is_ertn|wb_is_exc)begin
//            MEMFlush = 1;
//        end
//        else begin
//            MEMFlush = 0;
//        end

        if (wb_is_idle|wb_is_exc|wb_is_ertn) begin
            WBFlush = 1;
        end
        else begin
            WBFlush = 0;
        end
    end


    always_ff @(posedge aclk) begin
        // 当id可以流向下一个阶段同时id是一个要跳转的同时id允许上一条进入，也就是id可以走且是branch，则要cancel下一条指令
        if (pcsel == PC_BRANCH && ~EXFlush && id_allow_in && IDWriteEn && error_inst_in_if)  begin
            if (~if_ready_go) begin
                cancel <= 1;
            end
        end 
        // 
        if (cancel && if_ready_go && if_allow_in) begin
            cancel <= 0;
        end
    end

  // Because it's not enough to avoid the load-use hazard by inserting a nop, so we need add a machanism to detect the 
  // load use hazard and stall the pipeline
  
   


endmodule

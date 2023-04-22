`include "cpu.svh"

module cpu_sram
    import cpuDefine::*;
(
    input logic aclk,
    input logic aresetn,
    // inst sram
    output logic req_inst,
    output logic wr_inst,
    output logic [1:0] size_inst,
    output logic [31:0] addr_inst,
    output logic [3:0] wstrb_inst,
    output logic [31:0] wdata_inst,
    input logic addr_ok_inst,
    input logic data_ok_inst,
    input logic [31:0] rdata_inst,
    // data sram
    output logic req_mem,
    output logic wr_mem,
    output logic [1:0] size_mem,
    output logic [31:0] addr_mem,
    output logic [3:0] wstrb_mem,
    output logic [31:0] wdata_mem,
    input logic addr_ok_mem,
    input logic data_ok_mem,
    input logic [31:0] rdata_mem,
    //debug info
    output [31:0] debug0_wb_pc,
    output [3:0] debug0_wb_rf_wen,
    output [4:0] debug0_wb_rf_wnum,
    output [31:0] debug0_wb_rf_wdata
);


    // preif will have : allow_out and valid_in is no drive
    logic preif_allow_in;
    logic preif_valid;
    DType preif_data_in;
    DType preif_data_out;
    logic preif_ready_go;
    logic preif_flush;
    DType preif_nop;

    logic if_allow_in;
    logic if_valid_in;
    DType if_data_in;

    DType if_data_out;
    logic if_ready_go;
    logic if_flush;
    DType if_nop;

    logic id_valid_in;
    ID_DATA id_data_in;
    ID_DATA id_data_out;
    logic id_ready_go;
    logic id_allow_in;
    logic id_flush;
    ID_DATA id_nop;

    logic ex_valid_in;
    EX_DATA ex_data_in;
    EX_DATA ex_data_out;
    logic ex_ready_go;
    logic ex_allow_in;
    logic ex_flush;
    EX_DATA ex_nop;

    logic mem_valid_in;
    MEM_DATA mem_data_in;
    MEM_DATA mem_data_out;
    logic mem_ready_go;
    logic mem_allow_in;
    logic mem_flush;
    MEM_DATA mem_nop;

    // write back will have valid_out and allow_in is no drive
    logic wb_valid_in;
    WB_DATA wb_data_in;
    WB_DATA wb_data_out;
    logic wb_ready_go;
    logic wb_allow_in;
    logic wb_flush;
    WB_DATA wb_nop;
    logic wb_valid_out;
    logic wb_allow_out;


    // preif   signal 
    DType pc_if;
    DType nextPC;
    PcSel pcsel;
    DType pcAdd;
    DType branchPC;



    // preif pipelined signal 

    assign preif_ready_go = addr_ok_inst & req_inst ;
    // 复位时不能发请求
    assign req_inst = preif_allow_in & aresetn;
    assign preif_valid = 1;

    // if  signal 
    DType instr;
    DType instr_temp;
    DType instr_if;
    logic instr_temp_valid;

    // instr sram 
    assign wr_inst = 0;
    assign size_inst = 2;
    assign addr_inst = nextPC;
    assign instr = rdata_inst;

    // if pipelined signal 
    assign if_valid_in = preif_ready_go && preif_valid;
    assign if_data_in = nextPC;
    assign if_nop = 32'h1bfffffc;
    assign if_ready_go = data_ok_inst || instr_temp_valid;
    assign if_flush = 0;

    Pipeline #(
        // .WIDTH($bits(nextPC)),
        .T(DType),
        .reset_value(32'h1bfffffc),
        .isPc(1)
    ) If (
        .aclk(aclk),
        .aresetn(aresetn),
        .valid_in(if_valid_in),
        .data_in(if_data_in),
        .ready_go(if_ready_go),
        .nop_data(if_nop),
        .allow_in(if_allow_in),
        .flush(if_flush),
        .valid_out(id_valid_in),
        .data_out(if_data_out),
        .allow_out(preif_allow_in)
    );

    assign pc_if = if_data_out;
    assign pcAdd = pc_if + 4;
    always_comb begin
        unique case (pcsel)
            PC_ADD4:   nextPC = pcAdd;
            PC_BRANCH: nextPC = branchPC;
            default:   nextPC = '0;
        endcase
    end

    always_ff @(posedge aclk) begin
        if (if_ready_go && ~if_allow_in) begin
            instr_temp <= instr;
            instr_temp_valid <= 1;
        end else if (instr_temp_valid && if_allow_in) begin
            instr_temp_valid <= 0;
        end
    end

    always_comb begin
        unique case (instr_temp_valid)
            1'b0: begin
                instr_if = instr;
            end
            1'b1: begin
                instr_if = instr_temp;
            end
            default instr_if = '0;
        endcase
    end

    // ID


    assign id_data_in = '{pc: pc_if, instr: instr_if};
    // add x0, x0, x0
    assign id_nop = '{pc: '0, instr: 32'h00100000};
    Pipeline #(
        // .WIDTH($bits(id_data_in))
        .T(ID_DATA)
    ) id (
        .aclk(aclk),
        .aresetn(aresetn),
        .valid_in(id_valid_in),
        .allow_out(if_allow_in),
        .valid_out(ex_valid_in),
        .allow_in(id_allow_in),
        .data_in(id_data_in),
        .ready_go(id_ready_go),
        .flush(id_flush),
        .nop_data(id_nop),
        .data_out(id_data_out)
    );

    Instr instr_id = id_data_out.instr;
    DType pc_id = id_data_out.pc;
    logic zero, lt, overflow;
    Itype itype;
    logic regWriteEn_id, memWriteEn_id, memRead_id;
    AluSel1 alusel1_id;
    AluSel2 alusel2_id;
    AluCtrl aluctrl_id;
    RegWriteDataSel regWriteDataSel_id;
    logic unsignBranchCmp;
    logic reglink;
    // logic inst_ram_en, inst_ram_wen;
    logic is_unsign_imm;
    logic branchPcFromJ;
    logic is_compare;
    logic [1:0] size_mem_id;
    logic is_unsign_load_id;
    Control control (
        .instr(instr_id),
        .zero(zero),
        .lt(lt),
        .pcsel(pcsel),
        .itype(itype),
        .regWriteEn(regWriteEn_id),
        .memWriteEn(memWriteEn_id),
        .memRead(memRead_id),
        .alusel1(alusel1_id),
        .alusel2(alusel2_id),
        .aluctrl(aluctrl_id),
        .regWriteDataSel(regWriteDataSel_id),
        .unsignBranchCmp(unsignBranchCmp),
        .reglink(reglink),
        // .inst_ram_en(inst_ram_en),
        // .inst_ram_wen(inst_ram_wen),
        .is_unsign_imm(is_unsign_imm),
        .branchPcFromJ(branchPcFromJ),
        .is_compare(is_compare),
        .size_mem(size_mem_id),
        .is_unsign_load(is_unsign_load_id)
    );


    // bl and jirl is write x1 register
    Gr rd_no_id, rj_no_id, rk_no_id;
    DType rj_id, rk_id, rd_id;

    assign rj_no_id = instr_id[9:5];
    assign rk_no_id = instr_id[14:10];
    always_comb begin
        if (reglink) begin
            rd_no_id = 5'b00001;
        end else begin
            rd_no_id = instr_id[4:0];
        end
    end


    logic regWriteEn_wb;
    DType regWriteData_wb;
    regfile rf (
        .aclk(aclk),
        .aresetn(aresetn),
        .rd_in(rd_no_id),
        .rj_in(rj_no_id),
        .rk_in(rk_no_id),
        .rd_wb_in(rd_no_wb),
        .regWriteEn(regWriteEn_wb),
        .regWriteData(regWriteData_wb),
        .rj(rj_id),
        .rk(rk_id),
        .rd(rd_id)
    );

    DType immout_id;
    ImmGen immgen (
        .instr(instr_id),
        .itype(itype),  // from control
        .is_unsign(is_unsign_imm),  // from control
        .immout(immout_id)
    );

    DType rj_id_true, rk_id_true, rj_ex_true, rk_ex_true, rd_ex_true;

    Gr rd_no_mem, rd_no_wb;
    logic regWriteEn_mem;
    DType aluout_mem;

    Forwarding forwarding (
        .rj_no_id(rj_no_id),
        .rk_no_id(rk_no_id),
        .rj_no_ex(rj_no_ex),
        .rk_no_ex(rk_no_ex),
        .rd_no_ex(rd_no_ex),
        .rj_id(rj_id),
        .rk_id(rk_id),
        .rj_ex(rj_ex),
        .rk_ex(rk_ex),
        .rd_ex(rd_ex),
        .regWriteEn_mem(regWriteEn_mem),
        .aluout(aluout_mem),
        .rd_no_mem(rd_no_mem),
        .regWriteEn_wb(regWriteEn_wb),
        .rd_no_wb(rd_no_wb),
        .regWriteData(regWriteData_wb),
        .rj_id_true(rj_id_true),
        .rk_id_true(rk_id_true),
        .rj_ex_true(rj_ex_true),
        .rk_ex_true(rk_ex_true),
        .rd_ex_true(rd_ex_true)
    );

    Comparator comp (
        .rj(rj_id_true),
        .rk(rk_id_true),
        .unsign(unsignBranchCmp),
        .zero(zero),
        .lt(lt)
    );

    DType pcSrc1_id;
    always_comb begin
        if (branchPcFromJ) begin
            pcSrc1_id = rj_id_true;
        end else begin
            pcSrc1_id = pc_id;
        end
    end
    assign branchPC = pcSrc1_id + immout_id;


    logic memRead_ex, regWriteEn_ex;

    HazardDetect hazard_detect (
        .rd_no_ex(rd_no_ex),
        .memRead_ex(memRead_ex),
        .regWriteEn_ex(regWriteEn_ex),
        .is_compare(is_compare),
        .pcsel(pcsel),
        .rj_no_id(rj_no_id),
        .rk_no_id(rk_no_id),
        .rd_no_id(rd_no_id),
        .rd_no_mem(rd_no_mem),
        .alusel1_id(alusel1_id),
        .alusel2_id(alusel2_id),
        .memRead_mem(memRead_mem),
        //todo
        .IDFlush(id_flush),
        .IDWriteEn(id_ready_go),
        // .pcWriteEn(pcWriteEn),
        .EXFlush(ex_flush)
    );

    //  EX

    EX_CONTROL_DATA ex_control_data_id, ex_nop_control_data;
    MEM_CONTROL_DATA mem_control_data_id, mem_nop_control_data;
    WB_CONTROL_DATA wb_control_data_id, wb_nop_control_data;

    assign ex_control_data_id = '{
            alusel1: alusel1_id,
            alusel2: alusel2_id,
            aluctrl: aluctrl_id
        };
    assign ex_nop_control_data = '{
            alusel1: ALU_SEL_RJ,
            alusel2: ALU_SEL_RK,
            aluctrl: ALU_ADD
        };

    assign mem_control_data_id = '{
            memWriteEn: memWriteEn_id,
            memRead: memRead_id,
            size_mem: size_mem_id,
            is_unsign_load: is_unsign_load_id
        };

    assign mem_nop_control_data = '{
            memWriteEn: 0,
            memRead: 0,
            size_mem : 0,
            is_unsign_load: 0
        };
    assign wb_control_data_id = '{
            regWriteEn: regWriteEn_id,
            regWriteDataSel: regWriteDataSel_id
        };
    assign wb_nop_control_data = '{
            regWriteEn: 0,
            regWriteDataSel: REG_WRITE_ALU
        };
    assign ex_data_in = '{
            ex_control_data: ex_control_data_id,
            mem_control_data: mem_control_data_id,
            wb_control_data: wb_control_data_id,
            rj: rj_id,
            rk: rk_id,
            rd: rd_id,
            rjNo: rj_no_id,
            rkNo: rk_no_id,
            rdNo: rd_no_id,
            immout: immout_id,
            pc: pc_id
        };

    assign ex_nop = '{
            ex_control_data: ex_nop_control_data,
            mem_control_data: mem_nop_control_data,
            wb_control_data: wb_nop_control_data,
            rj: '0,
            rk: '0,
            rd: '0,
            rjNo: '0,
            rkNo: '0,
            rdNo: '0,
            immout: '0,
            pc: '0
        };

    Pipeline #(
        // .WIDTH($bits(ex_data_in))
        .T(EX_DATA)
    ) ex (
        .aclk(aclk),
        .aresetn(aresetn),
        .valid_in(ex_valid_in),
        .data_in(ex_data_in),
        .ready_go(ex_ready_go),
        .nop_data(ex_nop),
        .allow_in(ex_allow_in),
        .valid_out(mem_valid_in),
        .data_out(ex_data_out),
        .allow_out(id_allow_in),
        .flush(ex_flush)
    );



    EX_CONTROL_DATA ex_control_data_ex;
    MEM_CONTROL_DATA mem_control_data_ex;
    WB_CONTROL_DATA wb_control_data_ex;
    AluSel1 alusel1_ex;
    AluSel2 alusel2_ex;
    AluCtrl aluctrl_ex;

    DType aluSrc1_ex, aluSrc2_ex;
    DType pc_ex;
    DType rj_ex, rk_ex, rd_ex;
    Gr rj_no_ex, rk_no_ex, rd_no_ex;
    DType immout_ex;

    logic memWriteEn_ex;
    logic [1:0] size_mem_ex;
    logic is_unsign_load_ex;

    logic regWriteDataSel_ex;

    assign ex_control_data_ex = ex_data_out.ex_control_data;
    assign mem_control_data_ex = ex_data_out.mem_control_data;
    assign wb_control_data_ex = ex_data_out.wb_control_data;
    assign rj_ex = ex_data_out.rj;
    assign rk_ex = ex_data_out.rk;
    assign rd_ex = ex_data_out.rd;
    assign rj_no_ex = ex_data_out.rjNo;
    assign rk_no_ex = ex_data_out.rkNo;
    // rd_no_ex将送到hazard detection
    assign rd_no_ex = ex_data_out.rdNo;
    assign immout_ex = ex_data_out.immout;
    assign pc_ex = ex_data_out.pc;
    assign alusel1_ex = ex_control_data_ex.alusel1;
    assign alusel2_ex = ex_control_data_ex.alusel2;
    assign aluctrl_ex = ex_control_data_ex.aluctrl;

    assign memWriteEn_ex = mem_control_data_ex.memWriteEn;
    // memRead_ex将送到hazard detection
    assign memRead_ex = mem_control_data_ex.memRead;
    assign size_mem_ex = mem_control_data_ex.size_mem;
    assign is_unsign_load_ex = mem_control_data_ex.is_unsign_load;

    // regWriteEn_ex将送到hazard detection
    assign regWriteEn_ex = wb_control_data_ex.regWriteEn;
    assign regWriteDataSel_ex = wb_control_data_ex.regWriteDataSel;




    always_comb begin
        unique case (alusel1_ex)
            ALU_SEL_RJ: aluSrc1_ex = rj_ex_true;
            ALU_SEL_PC: aluSrc1_ex = pc_ex;
            default: aluSrc1_ex = '0;
        endcase
    end

    always_comb begin
        unique case (alusel2_ex)
            ALU_SEL_RK: aluSrc2_ex = rk_ex_true;
            ALU_SEL_IMMOUT: aluSrc2_ex = immout_ex;
            default: aluSrc2_ex = '0;
        endcase
    end


    DivNeed divNeed;
    assign divNeed.aclk = aclk;
    // 不知道怎么填
    assign divNeed.aresetn = aresetn;
    DType memaddr_ex;
    DType aluout_ex;
    alu alu (
        .aluSrc1 (aluSrc1_ex),
        .aluSrc2 (aluSrc2_ex),
        .aluctrl (aluctrl_ex),
        .divNeed (divNeed),
        .aluout  (aluout_ex),
        .overflow(overflow),
        .memaddr (memaddr_ex)
    );


    //MEM

    // MEM阶段需要根据总线接口重新设计
    // wstrb 即可以作为写片选信号，也可以作为读片选信号


    // EX_DATA ex_data_in;
    assign mem_data_in = '{
            mem_control_data: mem_control_data_ex,
            wb_control_data: wb_control_data_ex,
            rdNo: rd_no_ex,
            aluout: aluout_ex,
            wstrb_mem: wstrb_mem,
            pc : pc_ex
        };
    assign mem_nop = '{
            mem_control_data: mem_nop_control_data,
            wb_control_data: wb_nop_control_data,
            rdNo: 0,
            aluout: '0,
            wstrb_mem: 4'b0000,
            pc: '0
        };

    // sram_mem 
    assign wr_mem = memWriteEn_ex;
    assign addr_mem = memaddr_ex;
    assign wdata_mem = rd_ex_true;
    assign size_mem = size_mem_ex;


    always_comb begin
        unique case (size_mem)
            2'd0: begin
                unique case (addr_mem[1:0])
                    2'd0: begin
                        wstrb_mem = 4'b0001;
                    end
                    2'd1: begin
                        wstrb_mem = 4'b0010;
                    end
                    2'd2: begin
                        wstrb_mem = 4'b0100;
                    end
                    2'd3: begin
                        wstrb_mem = 4'b1000;
                    end
                    default: begin
                        wstrb_mem = 4'b0001;
                    end
                endcase
            end
            2'd1: begin
                unique case (addr_mem[1:0])
                    2'd0: begin
                        wstrb_mem = 4'b0011;
                    end
                    2'd2: begin
                        wstrb_mem = 4'b1100;
                    end
                    default: begin
                        wstrb_mem = 4'b0011;
                    end
                endcase
            end
            2'd2: begin
                wstrb_mem = 4'b1111;
            end
            default: begin
                wstrb_mem = 4'b1111;
            end
        endcase
    end




    // pipelined signal 这里改动了，与preif不完全相同
    assign ex_ready_go = (addr_ok_mem & req_mem & (memRead_ex | memWriteEn_ex) ) 
                        | (~(memRead_ex | memWriteEn_ex));
    assign req_mem = ex_allow_in & (memRead_ex | memWriteEn_ex);
    assign mem_ready_go = data_ok_mem || readData_temp_valid || (~(memRead_mem | memWriteEn_mem));


    Pipeline #(
        // .WIDTH($bits(mem_data_in))
        .T(MEM_DATA)
    ) mem (
        .aclk(aclk),
        .aresetn(aresetn),
        .valid_in(mem_valid_in),
        .data_in(mem_data_in),
        .ready_go(mem_ready_go),
        .nop_data(mem_nop),
        .allow_in(mem_allow_in),
        .valid_out(wb_valid_in),
        .data_out(mem_data_out),
        .allow_out(ex_allow_in),
        .flush(mem_flush)
    );


    logic [3:0] wstrb_mem_mem;
    logic is_unsign_load_mem;
    logic memRead_mem;
    logic memWriteEn_mem;
    WB_CONTROL_DATA wb_control_data_mem;
    MEM_CONTROL_DATA mem_control_data_mem;
    assign wb_control_data_mem = mem_data_out.wb_control_data;
    assign mem_control_data_mem = mem_data_out.mem_control_data;
    assign rd_no_mem = mem_data_out.rdNo;
    assign aluout_mem = mem_data_out.aluout;
    assign wstrb_mem_mem = mem_data_out.wstrb_mem;
    assign is_unsign_load_mem = mem_control_data_mem.is_unsign_load;
    assign regWriteEn_mem = wb_control_data_mem.regWriteEn;
    assign memRead_mem = mem_control_data_mem.memRead;
    assign memWriteEn_mem = mem_control_data_mem.memWriteEn;
    DType pc_mem = mem_data_out.pc;


    // mem signal
    DType readData_temp;
    logic readData_temp_valid;
    DType readData_mem;
    DType readData;

    //  readData 通过 rdata_mem生成。注意：1. 是否进行无符号扩展还是符号扩展 。ok
    //  2. 将相应的位进行移动到低位中，并进行拼接.ok
    //  3. 如何判断究竟是哪个字节有效呢？发送的请求会发生变化吗.ok
    //  4. 检查这些 ready_go 的代码逻辑是否有问题,尤其是memRead和memWriteEn的使用。
    //  5. 将 readData_mem 写入到 WB阶段的data_in 中去。

    extend_memData extend_memData_u (
        .wstrb(wstrb_mem),
        .is_unsign_load(is_unsign_load_mem),
        .rdata_mem(rdata_mem),
        .readData(readData)
    );

    // 这里也改动了，与preif不完全相同
    always_ff @(posedge aclk) begin
        if (mem_ready_go && ~ex_allow_in && (memRead_mem | memWriteEn_mem)) begin
            readData_temp <= readData;
            readData_temp_valid <= 1;
        end else if (readData_temp_valid && ex_allow_in) begin
            readData_temp_valid <= 0;
        end
    end

    always_comb begin
        unique case (readData_temp_valid)
            1'b0: begin
                readData_mem = readData;
            end
            1'b1: begin
                readData_mem = readData_temp;
            end
            default readData_mem = '0;
        endcase
    end




    // WB

    assign wb_data_in = '{
            wb_control_data: wb_control_data_mem,
            rdNo: rd_no_mem,
            aluout: aluout_mem,
            readData: readData_mem,
            pc: pc_mem,
            wstrb: wstrb_mem
        };

    assign wb_nop = '{
            wb_control_data: wb_nop_control_data,
            rdNo: 0,
            aluout: 0,
            readData: 0,
            pc: 0,
            wstrb:'0
        };

    assign wb_allow_in = 1;
    assign wb_ready_go = 1;

    Pipeline #(
        // .WIDTH($bits(wb_data_in))
        .T(WB_DATA)
    ) wb (
        .aclk(aclk),
        .aresetn(aresetn),
        .valid_in(wb_valid_in),
        .data_in(wb_data_in),
        .ready_go(wb_ready_go),
        .nop_data(wb_nop),
        .allow_in(wb_allow_in),
        .valid_out(wb_valid_out),
        .data_out(wb_data_out),
        .allow_out(mem_allow_in),
        .flush(wb_flush)
    );

    WB_CONTROL_DATA wb_control_data_wb;
    DType aluout_wb;
    DType readData_wb;
    assign wb_control_data_wb = wb_data_out.wb_control_data;
    assign rd_no_wb = wb_data_out.rdNo;
    assign aluout_wb = wb_data_out.aluout;
    assign readData_wb = wb_data_out.readData;
    assign regWriteEn_wb = wb_control_data_wb.regWriteEn;
    RegWriteDataSel regWriteDataSel_wb = wb_control_data_wb.regWriteDataSel;
    DType pc_wb = wb_data_out.pc;
    logic[3:0] wstrb_wb = wb_data_out.wstrb;
    assign debug0_wb_pc = pc_wb;
    assign debug0_wb_rf_wen = wstrb_wb;
    assign debug0_wb_rf_wdata = regWriteData_wb;
    assign debug0_wb_rf_wnum = rd_no_wb;





    always_comb begin
        unique case (regWriteDataSel_wb)
            REG_WRITE_ALU: regWriteData_wb = aluout_wb;
            REG_WRITE_MEM: regWriteData_wb = readData_wb;
            default: regWriteData_wb = '0;
        endcase
    end


endmodule

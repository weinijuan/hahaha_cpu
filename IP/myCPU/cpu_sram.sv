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
    output [31:0] debug0_wb_rf_wdata,
    output [31:0] debug0_wb_inst
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
    DType branchPC_temp;
    logic branchPC_temp_valid;



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
        if (branchPC_temp_valid) begin
            nextPC = branchPC_temp;
        end
        else begin
        unique case (pcsel)
            PC_ADD4:   nextPC = pcAdd;
            PC_BRANCH: nextPC = branchPC;
            default:   nextPC = '0;
        endcase
        end
    end

    // ex_flush=0表示此时在id阶段执行的指令有效，也就是没发生危害的情况。
    always_ff @(posedge aclk) begin
        if ((pcsel == PC_BRANCH)&&(~if_valid_in || ~preif_allow_in)&&(~ex_flush)) begin
            branchPC_temp <= branchPC;
            branchPC_temp_valid <= 1;
        end else if (branchPC_temp_valid && preif_allow_in && if_valid_in) begin
            branchPC_temp_valid <= 0;
        end
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
    logic eq, lt, overflow;
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
    logic[7:0] load_valid_diff_id;
    logic[7:0] store_valid_diff_id;
    Control control (
        .instr(instr_id),
        .eq(eq),
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
        .is_unsign_load(is_unsign_load_id),
        .load_valid_diff(load_valid_diff_id),
        .store_valid_diff(store_valid_diff_id)
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

    DType rj_id_true, rd_id_true, rj_ex_true, rk_ex_true, rd_ex_true;

    Gr rd_no_mem, rd_no_wb;
    logic regWriteEn_mem;
    DType aluout_mem;

    Forwarding forwarding (
        .rj_no_id(rj_no_id),
        .rd_no_id(rd_no_id),
        .rj_no_ex(rj_no_ex),
        .rk_no_ex(rk_no_ex),
        .rd_no_ex(rd_no_ex),
        .rj_id(rj_id),
        .rd_id(rd_id),
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
        .rd_id_true(rd_id_true),
        .rj_ex_true(rj_ex_true),
        .rk_ex_true(rk_ex_true),
        .rd_ex_true(rd_ex_true)
    );

    Comparator comp (
        .rj(rj_id_true),
        .rd(rd_id_true),
        .unsign(unsignBranchCmp),
        .eq(eq),
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
            regWriteDataSel: regWriteDataSel_id, 
            load_valid_diff:load_valid_diff_id,
            store_valid_diff:store_valid_diff_id
        };
    assign wb_nop_control_data = '{
            regWriteEn: 0,
            regWriteDataSel: REG_WRITE_ALU,
            load_valid_diff:'0,
            store_valid_diff:'0
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
            pc: pc_id,
            instr : instr_id
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
            pc: '0,
            instr : '0
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
    // Instr instr;

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
    Instr instr_ex = ex_data_out.instr;
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
    logic alu_ready_go;
    alu alu (
        .aluSrc1 (aluSrc1_ex),
        .aluSrc2 (aluSrc2_ex),
        .aluctrl (aluctrl_ex),
        .divNeed (divNeed),
        .aluout  (aluout_ex),
        .overflow(overflow),
        .memaddr (memaddr_ex),
        .ready_go(alu_ready_go)
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
            pc : pc_ex,
            instr: instr_ex,
            memaddr: memaddr_ex,
            rd:rd_ex_true
        };
    assign mem_nop = '{
            mem_control_data: mem_nop_control_data,
            wb_control_data: wb_nop_control_data,
            rdNo: 0,
            aluout: '0,
            wstrb_mem: 4'b0000,
            pc: '0,
            instr: '0,
            memaddr: '0,
            rd:'0
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
                        | (~(memRead_ex | memWriteEn_ex) & alu_ready_go);
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
    Instr instr_mem;
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
    assign instr_mem = mem_data_out.instr;
    DType pc_mem = mem_data_out.pc;
    DType memaddr_mem = mem_data_out.memaddr;
    DType rd_mem = mem_data_out.rd;


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


    // wstrb_mem是传递给sram总线的片选信号
    // wstrb_mem_mem是表示在mem阶段的wstrb_mem信号，是流水线中真正要用到的片选信号


    extend_memData extend_memData_u (
        .wstrb(wstrb_mem_mem),
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
            wstrb: wstrb_mem_mem,
            instr:instr_mem,
            memaddr:memaddr_mem, 
            rd: rd_mem
        };

    assign wb_nop = '{
            wb_control_data: wb_nop_control_data,
            rdNo: 0,
            aluout: 0,
            readData: 0,
            pc: 0,
            wstrb:'0,
            instr:'0,
            memaddr:'0,
            rd:'0
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
    assign debug0_wb_rf_wen = {4{regWriteEn_wb}};
    assign debug0_wb_rf_wdata = regWriteData_wb;
    assign debug0_wb_rf_wnum = rd_no_wb;
    Instr instr_wb = wb_data_out.instr;
    assign debug0_wb_inst = instr_wb;
    DType memaddr_wb = wb_data_out.memaddr;
    logic [7:0] load_valid_diff_wb = wb_control_data_wb.load_valid_diff;
    logic [7:0] store_valid_diff_wb = wb_control_data_wb.store_valid_diff;
    DType rd_wb = wb_data_out.rd;

    always_comb begin
        unique case (regWriteDataSel_wb)
            REG_WRITE_ALU: regWriteData_wb = aluout_wb;
            REG_WRITE_MEM: regWriteData_wb = readData_wb;
            default: regWriteData_wb = '0;
        endcase
    end



// to difftest



    // difftest


    `ifdef DIFFTEST_EN

// 一些尚未定义的信号
    logic excp_flush               ;
    logic ertn_flush               ;
    logic [5:0] ws_csr_ecode       ;
    logic tlbfill_en               ;
    logic[4:0] rand_index          ;


    assign st_vaddr_diff = memaddr_wb;
    assign st_paddr_diff = memaddr_wb;
    assign ld_vaddr_diff = memaddr_wb;
    assign ld_paddr_diff = memaddr_wb;
    assign inst_ld_en_diff = load_valid_diff_wb;
    assign inst_st_en_diff = store_valid_diff_wb;
    assign st_data_diff =  rd_wb;




// from wb_stage
    // wire            ws_valid_diff       ;
    wire            cnt_inst_diff       ;
    wire    [63:0]  timer_64_diff       ;
    wire    [ 7:0]  inst_ld_en_diff     ;
    wire    [31:0]  ld_paddr_diff       ;
    wire    [31:0]  ld_vaddr_diff       ;
    wire    [ 7:0]  inst_st_en_diff     ;
    wire    [31:0]  st_paddr_diff       ;
    wire    [31:0]  st_vaddr_diff       ;
    wire    [31:0]  st_data_diff        ;
    wire            csr_rstat_en_diff   ;
    wire    [31:0]  csr_data_diff       ;

    wire inst_valid_diff = wb_valid_out ;
    reg             cmt_valid           ;
    reg             cmt_cnt_inst        ;
    reg     [63:0]  cmt_timer_64        ;
    reg     [ 7:0]  cmt_inst_ld_en      ;
    reg     [31:0]  cmt_ld_paddr        ;
    reg     [31:0]  cmt_ld_vaddr        ;
    reg     [ 7:0]  cmt_inst_st_en      ;
    reg     [31:0]  cmt_st_paddr        ;
    reg     [31:0]  cmt_st_vaddr        ;
    reg     [31:0]  cmt_st_data         ;
    reg             cmt_csr_rstat_en    ;
    reg     [31:0]  cmt_csr_data        ;

    reg             cmt_wen             ;
    reg     [ 7:0]  cmt_wdest           ;
    reg     [31:0]  cmt_wdata           ;
    reg     [31:0]  cmt_pc              ;
    reg     [31:0]  cmt_inst            ;

    reg             cmt_excp_flush      ;
    reg             cmt_ertn            ;
    reg     [5:0]   cmt_csr_ecode       ;
    reg             cmt_tlbfill_en      ;
    reg     [4:0]   cmt_rand_index      ;

// to difftest debug
    reg             trap                ;
    reg     [ 7:0]  trap_code           ;
    reg     [63:0]  cycleCnt            ;
    reg     [63:0]  instrCnt            ;

// from regfile
    wire    [31:0]  regs[31:0]          ;
    assign regs = rf.rf;

// from csr
    wire    [31:0]  csr_crmd_diff_0     ;
    wire    [31:0]  csr_prmd_diff_0     ;
    wire    [31:0]  csr_ectl_diff_0     ;
    wire    [31:0]  csr_estat_diff_0    ;
    wire    [31:0]  csr_era_diff_0      ;
    wire    [31:0]  csr_badv_diff_0     ;
    wire	[31:0]  csr_eentry_diff_0   ;
    wire 	[31:0]  csr_tlbidx_diff_0   ;
    wire 	[31:0]  csr_tlbehi_diff_0   ;
    wire 	[31:0]  csr_tlbelo0_diff_0  ;
    wire 	[31:0]  csr_tlbelo1_diff_0  ;
    wire 	[31:0]  csr_asid_diff_0     ;
    wire 	[31:0]  csr_save0_diff_0    ;
    wire 	[31:0]  csr_save1_diff_0    ;
    wire 	[31:0]  csr_save2_diff_0    ;
    wire 	[31:0]  csr_save3_diff_0    ;
    wire 	[31:0]  csr_tid_diff_0      ;
    wire 	[31:0]  csr_tcfg_diff_0     ;
    wire 	[31:0]  csr_tval_diff_0     ;
    wire 	[31:0]  csr_ticlr_diff_0    ;
    wire 	[31:0]  csr_llbctl_diff_0   ;
    wire 	[31:0]  csr_tlbrentry_diff_0;
    wire 	[31:0]  csr_dmw0_diff_0     ;
    wire 	[31:0]  csr_dmw1_diff_0     ;
    wire 	[31:0]  csr_pgdl_diff_0     ;
    wire 	[31:0]  csr_pgdh_diff_0     ;

    always @(posedge aclk) begin
    if (~aresetn) begin
    {cmt_valid, cmt_cnt_inst, cmt_timer_64, cmt_inst_ld_en, cmt_ld_paddr, cmt_ld_vaddr, cmt_inst_st_en, cmt_st_paddr, cmt_st_vaddr, cmt_st_data, cmt_csr_rstat_en, cmt_csr_data} <= 0;
    {cmt_wen, cmt_wdest, cmt_wdata, cmt_pc, cmt_inst} <= 0;
    {trap, trap_code, cycleCnt, instrCnt} <= 0;
    end else if (~trap) begin
    cmt_valid       <= inst_valid_diff          ;
    cmt_cnt_inst    <= cnt_inst_diff            ;
    cmt_timer_64    <= timer_64_diff            ;
    cmt_inst_ld_en  <= inst_ld_en_diff          ;
    cmt_ld_paddr    <= ld_paddr_diff            ;
    cmt_ld_vaddr    <= ld_vaddr_diff            ;
    cmt_inst_st_en  <= inst_st_en_diff          ;
    cmt_st_paddr    <= st_paddr_diff            ;
    cmt_st_vaddr    <= st_vaddr_diff            ;
    cmt_st_data     <= st_data_diff             ;
    cmt_csr_rstat_en<= csr_rstat_en_diff        ;
    cmt_csr_data    <= csr_data_diff            ;

    cmt_wen     <=  debug0_wb_rf_wen            ;
    cmt_wdest   <=  {3'd0, debug0_wb_rf_wnum}   ;
    cmt_wdata   <=  debug0_wb_rf_wdata          ;
    cmt_pc      <=  debug0_wb_pc                ;
    cmt_inst    <=  debug0_wb_inst              ;

    cmt_excp_flush  <= excp_flush               ;
    cmt_ertn        <= ertn_flush               ;
    cmt_csr_ecode   <= ws_csr_ecode             ;
    cmt_tlbfill_en  <= tlbfill_en               ;
    cmt_rand_index  <= rand_index               ;

    trap            <= 0                        ;
    trap_code       <= regs[10][7:0]            ;
    cycleCnt        <= cycleCnt + 1             ;
    instrCnt        <= instrCnt + inst_valid_diff;
    end
    end

    DifftestInstrCommit DifftestInstrCommit(
    .clock              (aclk           ),
    .coreid             (0              ),
    .index              (0              ),
    .valid              (cmt_valid      ),
    .pc                 (cmt_pc         ),
    .instr              (cmt_inst       ),
    .skip               (0              ),
    .is_TLBFILL         (cmt_tlbfill_en ),
    .TLBFILL_index      (cmt_rand_index ),
    .is_CNTinst         (cmt_cnt_inst   ),
    .timer_64_value     (cmt_timer_64   ),
    .wen                (cmt_wen        ),
    .wdest              (cmt_wdest      ),
    .wdata              (cmt_wdata      ),
    .csr_rstat          (cmt_csr_rstat_en),
    .csr_data           (cmt_csr_data   )
    );

    DifftestExcpEvent DifftestExcpEvent(
    .clock              (aclk           ),
    .coreid             (0              ),
    .excp_valid         (cmt_excp_flush ),
    .eret               (cmt_ertn       ),
    .intrNo             (csr_estat_diff_0[12:2]),
    .cause              (cmt_csr_ecode  ),
    .exceptionPC        (cmt_pc         ),
    .exceptionInst      (cmt_inst       )
    );

    DifftestTrapEvent DifftestTrapEvent(
    .clock              (aclk           ),
    .coreid             (0              ),
    .valid              (trap           ),
    .code               (trap_code      ),
    .pc                 (cmt_pc         ),
    .cycleCnt           (cycleCnt       ),
    .instrCnt           (instrCnt       )
    );

    DifftestStoreEvent DifftestStoreEvent(
    .clock              (aclk           ),
    .coreid             (0              ),
    .index              (0              ),
    .valid              (cmt_inst_st_en ),
    .storePAddr         (cmt_st_paddr   ),
    .storeVAddr         (cmt_st_vaddr   ),
    .storeData          (cmt_st_data    )
    );

    DifftestLoadEvent DifftestLoadEvent(
    .clock              (aclk           ),
    .coreid             (0              ),
    .index              (0              ),
    .valid              (cmt_inst_ld_en ),
    .paddr              (cmt_ld_paddr   ),
    .vaddr              (cmt_ld_vaddr   )
    );

    DifftestCSRRegState DifftestCSRRegState(
    .clock              (aclk               ),
    .coreid             (0                  ),
    .crmd               (csr_crmd_diff_0    ),
    .prmd               (csr_prmd_diff_0    ),
    .euen               (0                  ),
    .ecfg               (csr_ectl_diff_0    ),
    .estat              (csr_estat_diff_0   ),
    .era                (csr_era_diff_0     ),
    .badv               (csr_badv_diff_0    ),
    .eentry             (csr_eentry_diff_0  ),
    .tlbidx             (csr_tlbidx_diff_0  ),
    .tlbehi             (csr_tlbehi_diff_0  ),
    .tlbelo0            (csr_tlbelo0_diff_0 ),
    .tlbelo1            (csr_tlbelo1_diff_0 ),
    .asid               (csr_asid_diff_0    ),
    .pgdl               (csr_pgdl_diff_0    ),
    .pgdh               (csr_pgdh_diff_0    ),
    .save0              (csr_save0_diff_0   ),
    .save1              (csr_save1_diff_0   ),
    .save2              (csr_save2_diff_0   ),
    .save3              (csr_save3_diff_0   ),
    .tid                (csr_tid_diff_0     ),
    .tcfg               (csr_tcfg_diff_0    ),
    .tval               (csr_tval_diff_0    ),
    .ticlr              (csr_ticlr_diff_0   ),
    .llbctl             (csr_llbctl_diff_0  ),
    .tlbrentry          (csr_tlbrentry_diff_0),
    .dmw0               (csr_dmw0_diff_0    ),
    .dmw1               (csr_dmw1_diff_0    )
    );

    DifftestGRegState DifftestGRegState(
    .clock              (aclk       ),
    .coreid             (0          ),
    .gpr_0              (0          ),
    .gpr_1              (regs[1]    ),
    .gpr_2              (regs[2]    ),
    .gpr_3              (regs[3]    ),
    .gpr_4              (regs[4]    ),
    .gpr_5              (regs[5]    ),
    .gpr_6              (regs[6]    ),
    .gpr_7              (regs[7]    ),
    .gpr_8              (regs[8]    ),
    .gpr_9              (regs[9]    ),
    .gpr_10             (regs[10]   ),
    .gpr_11             (regs[11]   ),
    .gpr_12             (regs[12]   ),
    .gpr_13             (regs[13]   ),
    .gpr_14             (regs[14]   ),
    .gpr_15             (regs[15]   ),
    .gpr_16             (regs[16]   ),
    .gpr_17             (regs[17]   ),
    .gpr_18             (regs[18]   ),
    .gpr_19             (regs[19]   ),
    .gpr_20             (regs[20]   ),
    .gpr_21             (regs[21]   ),
    .gpr_22             (regs[22]   ),
    .gpr_23             (regs[23]   ),
    .gpr_24             (regs[24]   ),
    .gpr_25             (regs[25]   ),
    .gpr_26             (regs[26]   ),
    .gpr_27             (regs[27]   ),
    .gpr_28             (regs[28]   ),
    .gpr_29             (regs[29]   ),
    .gpr_30             (regs[30]   ),
    .gpr_31             (regs[31]   )
    );
    `endif






endmodule : cpu_sram

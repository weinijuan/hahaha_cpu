`include "cpu.svh"
//`define usetlb
module cpu_sram
    import cpuDefine::*;
(
    input logic aclk,
    input logic aresetn,
    // inst sram
    output logic  req_inst,
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
    
    output [31:0] debug_wb_pc,
    output [3:0] debug_wb_rf_we,
    output [4:0] debug_wb_rf_wnum,
    output [31:0] debug_wb_rf_wdata,
    output [31:0] debug_wb_inst,

    output i_uncached,
    output d_uncached,

    output cacheop_i_or_d,
    output cacheop,
    output cacheop_index,
    output cacheop_hit,
    output cacheop_wb,
    output [31:0]cacheop_addr,
    //input cacheop_ok1,
    input cacheop_ok2
);
   
    
    assign cacheop_i_or_d = mem_data_in.tlbctrl.i_or_d;
    assign cacheop = mem_data_in.tlbctrl.is_cacop&~wb_data_in.tlbctrl.is_cacop;
    assign cacheop_index = ~mem_data_in.tlbctrl.cacop_code[1];
    assign cacheop_hit = mem_data_in.tlbctrl.cacop_code[1];
    assign cacheop_addr = mem_data_in.tlbctrl.cache_addr;
    assign cacheop_wb = mem_data_in.tlbctrl.i_or_d&(mem_data_in.tlbctrl.cacop_code!=2'b00);
    assign wstrb_inst = 4'b0000;
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
    IF_DATA if_data_in;
    logic [5:0] if_excode;
    logic if_is_exc;
    CsrMsg if_csrmsgin;
    CsrMsg if_csrmsgout;

    IF_DATA if_data_out;
    logic if_ready_go;
    logic if_flush;
    IF_DATA if_nop;

    logic id_valid_in;
    ID_DATA id_data_in;
    ID_DATA id_data_out;
    logic [5:0] id_excode;
    logic id_is_exc;
    logic id_ready_go;
    logic id_allow_in;
    logic id_flush;
    ID_DATA id_nop;
    CsrMsg id_csrmsgin;
    CsrMsg id_csrmsgout;

    logic ex_valid_in;
    EX_DATA ex_data_in;
    EX_DATA ex_data_out;
    logic [5:0] ex_excode;
    logic ex_is_exc;
    logic ex_ready_go;
    logic ex_allow_in;
    logic ex_flush;
    EX_DATA ex_nop;
    CsrMsg ex_csrmsgin;
    CsrMsg ex_csrmsgout;
    CsrCtrl ex_csrctrl;
    TlbCtrl ex_tlbctrl;

    logic mem_valid_in;
    MEM_DATA mem_data_in;
    MEM_DATA mem_data_out;
    logic [5:0] mem_excode;
    logic  mem_exsubcode;
    logic [31:0] mem_badvaddr;
    logic mem_is_exc;
    logic mem_ready_go;
    logic mem_allow_in;
    logic mem_flush;
    MEM_DATA mem_nop;
    CsrMsg mem_csrmsgin;
    CsrMsg mem_csrmsgout;
    //CsrCtrl mem_csrctrl;
    //TlbCtrl mem_tlbctrl;

    // write back will have valid_out and allow_in is no drive
    logic wb_valid_in;
    WB_DATA wb_data_in;
    WB_DATA wb_data_out;
    logic [5:0] wb_excode;
    logic [11:0] wb_intercode;
    logic wb_is_exc;
    logic wb_ready_go;
    logic wb_allow_in;
    logic wb_flush;
    WB_DATA wb_nop;
    logic wb_valid_out;
    logic wb_allow_out;
    CsrMsg wb_csrmsgin;
    CsrMsg wb_csrmsgout;
    //CsrCtrl wb_csrctrl;
    //TlbCtrl wb_tlbctrl;
    
    
//csr
    //wire [31:0] csrout_id;
    wire[31:0] csrout_wb;
/*
    for exception to if
*/
    wire [31:0]exaddr;              //
    reg exlike;                    //
/*
    for exception from wb
*/
/*
    for csr wire
*/
    wire   [1:0]plv;
    wire   [9:0]asid;
    wire   da;
    wire   pg;
    //instr to tlb 
    
    //just skip now
    PcSelHigh pcselHigh;
    assign pcselHigh = exlike?PC_CSR:PC_NORMAL;
    //for interrupt 
    logic[11:0] lie;
    logic [11:0] is;
    logic ie;

    //for tlb
    logic [TLBNUMSIZE-1:0] nextPC_tlb_ind;
    PhytranItem nextPC_tlb_phytranitem;
    logic nextPC_tlb_ne;
    logic nextPC_is_usetlb;
    logic [TLBNUMSIZE-1:0]memaddr_tlb_ind;
    PhytranItem memaddr_tlb_phytranitem;
    logic memaddr_tlb_ne;
    logic memaddr_is_usetlb;
    //
    logic[TLBNUMSIZE-1:0]r_index;
    logic[5:0] r_ps;
    logic[9:0] r_asid;
    logic r_ne;
    PhytranItem r_phytran0;
    PhytranItem r_phytran1;
    logic r_g;
    logic[18:0] r_vppn;
    //
    logic [TLBNUMSIZE-1:0] w_index;
    PhytranItem w_phytran0;
    PhytranItem w_phytran1;
    logic w_ne;
    logic [5:0] w_ps;
    logic [9:0]w_asid;
    logic [18:0]w_vppn;
    logic w_g;
    //
    logic [9:0]f_asid;
    logic [18:0] f_va;
    //
    logic [31:0]counter_lower;
    logic [31:0]counter_higher;
    //
    logic [31:0]csr_writedata;
    logic [31:0]csr_musk;
    logic [31:0]csr_rk;
    logic [31:0]tid;
    assign w_asid = asid;
    assign f_asid = csr_musk[9:0];
    assign f_va = csr_rk[31:13];

    logic [1:0] mat_i;
    logic [1:0] mat_d;

    logic [1:0] mat_true_i;
    logic [1:0] mat_true_d;

    assign i_uncached = ~mat_true_i[0];
    assign d_uncached = ~mat_true_d[0];
    
    logic is_sc_type_wb;
    logic llbit_wb;

    logic llbit;

//didn't use tlb
`ifdef usetlb
    tlb_ tlb(
    //search0 for instr tlb
    .clk(aclk),
    .reset(~aresetn),
    .s0_vppn(nextPC[31:13]),
    .s0_asid(asid),
    .s0_odd(nextPC[12]),
    .s0_index(nextPC_tlb_ind),
    .s0_phytran(nextPC_tlb_phytranitem), 
    .s0_ne(nextPC_tlb_ne),
    //search1 instrsearch and for mem tlb
    .s1_vppn({19{wb_data_out.tlbctrl.tlb_sen}}&csr.csr.TLBEHI[31:13]|{19{~wb_data_out.tlbctrl.tlb_sen}}&memaddr_ex[31:13]),
    .s1_asid(asid),//do not worry r-w corrupt,because w must has a fetch_again,
    .s1_odd(memaddr_ex[12]),//tlbsearch would not use this bit
    .s1_index(memaddr_tlb_ind),
    .s1_phytran(memaddr_tlb_phytranitem), 
    .s1_ne(memaddr_tlb_ne),
    //read 
    .r_index(r_index),
    .r_ps(r_ps),
    .r_asid(r_asid),
    .r_ne(r_ne),
    .r_phytran0(r_phytran0),
    .r_phytran1(r_phytran1),
    .r_g(r_g),
    .r_vppn(r_vppn),
    //write 
    .we(wb_data_out.tlbctrl.tlb_wen),
    .w_index(w_index),
    .w_ps(w_ps),
    .w_ne(w_ne),
    .w_asid(w_asid),
    .w_vppn(w_vppn),
    .w_g(w_g),
    .w_phytran0(w_phytran0),
    .w_phytran1(w_phytran1),
    //                          s2_isfill,��ʵ��STLB��MTLB������ָ��ò��ûɶ��
    //flush
    .fe(wb_data_out.tlbctrl.tlb_fen),
    .f_asid(f_asid),
    .f_va(f_va),
    .f_op(wb_data_out.csrctrl.csrnum[2:0])//if instr controller is right, csrnum will equal to the f_op
    );
`endif   

    
    csr_ csr(
    .clk(aclk),
    .reset(~aresetn),
    .csrnum_r(wb_data_out.csrctrl.csrnum),//in wb stage read and write csr
    .csrnum_w(wb_data_out.csrctrl.csrnum),
    .csrwe(wb_data_out.csrctrl.csr_wen),
    .csrme(wb_data_out.csrctrl.is_musk),        
    .musk(csr_musk),
    .csrin(csr_writedata),
    .csrout(csrout_wb),//output in id
//    for exception to if
    .exaddr(exaddr),
    .exlike(exlike),
//    for exception from wb
    .is_ertn(wb_data_out.csrctrl.is_ertn),
    .is_fetch_again(wb_data_out.tlbctrl.is_fetch_again),
    .is_idle(wb_data_out.tlbctrl.is_idle),
    .inter(wb_intercode),
    .excode(wb_csrmsgout.excode),
    .esubcode(wb_csrmsgout.exsubcode),
    .badvaddr(wb_csrmsgout.badvaddr),
    .csr_pc(wb_csrmsgout.pc),
    .is_exc(wb_csrmsgout.is_exc),
    // for tlb instr
    //search1      import csr_tlbDefines::*;
    .s1e(wb_data_out.tlbctrl.tlb_sen),
    .s1_index(memaddr_tlb_ind), 
    .s1_ne(memaddr_tlb_ne),
    //readmem_csrctrl
    .r_index(r_index),
    .re(wb_data_out.tlbctrl.tlb_ren),
    .r_ps(r_ps),
    .r_asid(r_asid),
    .r_ne(r_ne),
    .r_phytran0(r_phytran0),
    .r_phytran1(r_phytran1),
    .r_g(r_g),
    .r_vppn(r_vppn),
    //write
    .w_index(w_index),
    .w_ps(w_ps),
    .w_ne(w_ne),
    //.w_asid(w_asid),
    .w_vppn(w_vppn),
    .w_g(w_g),
    .w_phytran0(w_phytran0),
    .w_phytran1(w_phytran1),
    //flush
    // for csr output
    .plv(plv),
    .asid(asid),
    .da(da),
    .pg(pg),
    // for interrupt
    .lie(lie),
    .is(is),
    .ie(ie),
    .counter_higher(counter_higher),
    .counter_lower(counter_lower),
    .mat_d(mat_d),
    .mat_i(mat_i),
    .tid(tid),
    
    .llbit(llbit),
    .is_llw(wb_data_out.tlbctrl.is_llw),
    .is_scw(is_sc_type_wb)
    );//
    //csr
    
    // preif   signal 
    DType pc_if;
    DType nextPC;
    PcSel pcsel;
    DType pcAdd;
    DType branchPC;
    DType branchPC_temp;
    logic branchPC_temp_valid;

    reg pc_have_exc;
    wire pc_end_exc;
    reg wb_tmp_valid;
    reg[5:0] wb_excode_tmp;
    logic brstall;
    assign pc_end_exc = exlike;
    always_ff@(posedge aclk) begin
        if (pc_end_exc) begin
            pc_have_exc <= 0;
        end
        else if (ex_data_out.tlbctrl.is_idle||ex_data_out.tlbctrl.is_fetch_again||wb_is_exc||mem_is_exc||ex_is_exc||id_is_exc || pc_have_exc) begin
            pc_have_exc <= 1;
        end
        else begin
            pc_have_exc <= 0;
        end
    end

    // preif pipelined signal 
    assign preif_ready_go = (addr_ok_inst & req_inst) ;
    // 复位时不能发请求
    assign req_inst = preif_allow_in & aresetn & (~pc_have_exc|wb_tmp_valid) & (~brstall);
    assign preif_valid = 1;

    // if  signal 
    DType instr;
    DType instr_temp;
    DType instr_if;
    logic instr_temp_valid;

    // instr sram 
    assign wr_inst = 0;
    assign size_inst = 2;

    
    //add addrtrans
    logic[31:0] nextPC_addr_phyaddr;
    logic nextPC_is_dmw;
    
    reg into_linux;
    always_ff@(posedge aclk)begin
        if(~aresetn)begin
            into_linux<=1'b0;
        end
        else if(nextPC>32'ha000_0000)begin
            into_linux<=1'b1;
        end
    end
    addr_trans addr_trans_pc(
        .en_tlb(into_linux),
        .virt_addr(nextPC),
        .phy_addr(nextPC_addr_phyaddr),
        .da(da),
        .pg(pg),
        .dmw0(csr.csr.DMW0),
        .dmw1(csr.csr.DMW1),
        .plv(plv),
        .mat_phytran(nextPC_tlb_phytranitem.MAT),
        .mat_csr(mat_i),
    //TLB
        .pfn(nextPC_tlb_phytranitem.PPN),
        .is_dmw(nextPC_is_dmw),
        //.tlb_ne(nextPC_tlb_ne),
        .is_usetlb(nextPC_is_usetlb),
        .mat_true(mat_true_i)
    );
    assign addr_inst = nextPC_addr_phyaddr;
    
    
    assign instr = rdata_inst;

    // if pipelined signal 
    assign if_valid_in = preif_ready_go && preif_valid;
    assign if_nop = '{
        pc: 0
    };
    assign if_ready_go = data_ok_inst || instr_temp_valid ||id_is_exc;
    //assign if_flush = 0;
    
    always_comb begin
        if((nextPC[1:0]!=2'b0)&~nextPC_is_dmw)begin//realy don't know how many is suitable,but can guess from test.s
//            if_is_exc = 1'b1;
            if_excode = ADEF_ADEM;
        end
        else begin
//            if_is_exc = 1'b0;
            if_excode = 0;
        end
        // final_change
        if_is_exc = (nextPC[1:0]!=2'b0)&~nextPC_is_dmw;
    end
    //if exc justify
    assign if_csrmsgin = '{
        badvaddr: {32{if_is_exc}} & nextPC,
        pc: nextPC,
        excode: if_excode,
        exsubcode: '0,
        is_exc:if_is_exc,
        asid: asid
    };
    assign if_data_in = '{pc: nextPC};
    




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
        .allow_out(preif_allow_in),
        .csrmsg_in(if_csrmsgin),
        .csrmsg_out(if_csrmsgout)
    );
    assign pc_if = if_data_out.pc;//
    assign pcAdd = pc_if + 4;
    always_comb begin
        if(pcselHigh == PC_CSR)begin
            nextPC = exaddr;
        end
        else if (branchPC_temp_valid) begin
            nextPC = branchPC_temp;
        end
        else begin
            
            begin
                unique case (pcsel)
                    PC_ADD4:   nextPC = pcAdd;
                    PC_BRANCH: nextPC = branchPC;
                    default:   nextPC = '0;
                endcase
            end
        end
    end

    // ex_flush=0 
    always_ff @(posedge aclk) begin
        // 只有id阶段是跳转指令且id阶段完成任务以后，才可以保存branchPC, 放置出现id阶段时不正确的中间状态
        if ((pcselHigh == PC_CSR||pcselHigh==PC_NORMAL&pcsel == PC_BRANCH)&&(~if_valid_in || ~preif_allow_in)&&(~ex_flush)
            && (id_ready_go && id_allow_in)
        ) begin
            if(exlike)
            begin 
                branchPC_temp <= exaddr;
            end
            // add a condition of ~branchPC_temp @huang
            else if (~branchPC_temp_valid) begin
                branchPC_temp <= branchPC;
            end
            /*csraddr*/
            branchPC_temp_valid <= 1;
        end else if (branchPC_temp_valid && preif_allow_in && if_valid_in) begin
            branchPC_temp_valid <= 0;
        end
    end


    always_ff @(posedge aclk) begin
        // add a condition of ~instr_temp_valid @huangwei
        if(~aresetn)begin
            instr_temp_valid <= 0;
        end
        if (if_ready_go && ~if_allow_in && ~instr_temp_valid) begin
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
            default instr_if = 0;
        endcase
    end

    // ID
    
    always_comb begin
//        if(if_csrmsgout.is_exc)begin 
//        id_excode = if_csrmsgout.excode; 
//        id_is_exc = 1'b1;
//        end else begin
//        id_excode = if_csrmsgout.excode; 
//        id_is_exc = 1'b0;
//        end
        id_is_exc = if_csrmsgout.is_exc;
        id_excode = {32{if_csrmsgout.is_exc}}&if_csrmsgout.excode;
        //csr justify
    end
    
    assign id_csrmsgin = '{
        badvaddr: if_csrmsgout.badvaddr,
        pc: if_csrmsgout.pc,
        excode: id_excode,
        exsubcode: '0,
        is_exc:id_is_exc,
        asid: if_csrmsgout.asid
    };
    assign id_data_in = '{
    pc: pc_if, 
    instr: instr_if
    };
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
        .ready_go(id_ready_go|ex_is_exc),
        .flush(id_flush),
        .nop_data(id_nop),
        .data_out(id_data_out),
        .csrmsg_in(id_csrmsgin),
        .csrmsg_out(id_csrmsgout)
    );

    Instr instr_id;
    assign instr_id = id_data_out.instr;
    DType pc_id;
    assign pc_id = id_data_out.pc;
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
    logic is_privil_id;//instr privil
    logic is_ertn_id;
    logic is_syscall_id;
    logic is_brk_id;
    logic is_ine_id;
    logic is_tlb_fen_id;//invtlb
    logic is_tlb_wen_id;//fill and write is same
    logic is_tlb_sen_id;//search
    logic is_tlb_ren_id;
    logic is_csr_wen_id;//writeen
    logic is_csr_ren_id;
    logic is_csrMusk_id;//csrxchg
    logic is_rdcnth;
    logic is_rdcntl;
    logic is_rdcntid;
    logic is_cacop;
    logic [1:0]cacop_code;
    logic i_or_d;
    logic is_idle;
    logic is_ll_type_id;
    logic is_sc_type_id;
    logic brfinish;
    assign brfinish = id.pipeline_valid&If.pipeline_valid & (branchPC == If.pipeline_data);
    
    logic [ALUCTRL_STATENUM-1:0]aluctrl_bits;
    Sec_AluCtrl is_two_circles;
    Control control (
        .aresetn(aresetn),
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
        .store_valid_diff(store_valid_diff_id),
        .is_privil(is_privil_id),//instr privil
        .is_ertn(is_ertn_id),
        .is_syscall(is_syscall_id),
        .is_brk(is_brk_id),
        .is_ine(is_ine_id),
        .tlb_fen(is_tlb_fen_id),//invtlb
        .tlb_wen(is_tlb_wen_id),//fill and write is same
        .tlb_sen(is_tlb_sen_id),//search
        .tlb_ren(is_tlb_ren_id),
        .csr_wen(is_csr_wen_id),//writeen
        .csr_ren(is_csr_ren_id),
        .is_csrMusk(is_csrMusk_id),//csrxchg
        .is_rdcnth(is_rdcnth),
        .is_rdcntl(is_rdcntl),
        .is_rdcntid(is_rdcntid),
        
        .is_cacop(is_cacop),
        
        .cacop_code(cacop_code),
        .i_or_d(i_or_d),
        
        .is_idle(is_idle),
        .is_ll_type(is_ll_type_id),
        .is_sc_type(is_sc_type_id),
        .brfinish(brfinish),
        .aluctrl_bits(aluctrl_bits),
        .is_two_circles(is_two_circles)
    );
    
    
    // bl and jirl is write x1 register
    Gr rd_no_id, rj_no_id, rk_no_id;
    DType rj_id, rk_id, rd_id;

    assign rj_no_id = instr_id[9:5];
    assign rk_no_id = instr_id[14:10];
    always_comb begin
        if (reglink) begin
            rd_no_id = 5'b00001;
        end else if(is_rdcntid)begin
            rd_no_id = rj_no_id;
        end 
        else begin
            rd_no_id = instr_id[4:0];
        end
    end


    logic regWriteEn_wb;
    DType regWriteData_wb;
    Gr rd_no_mem, rd_no_wb;
    regfile rf (
        .aclk(aclk),
        .aresetn(aresetn),
        .rd_in(rd_no_id),
        .rj_in(rj_no_id),
        .rk_in(rk_no_id),
        .rd_csr_in(wb_data_out.csrctrl.regnum),
        .rj_csr_in(wb_data_out.csrctrl.regnum0),
        .rk_csr_in(wb_data_out.csrctrl.regnum1),
        .rd_wb_in(rd_no_wb),
        .regWriteEn(regWriteEn_wb),
        .regWriteData(regWriteData_wb),
        .rj(rj_id),
        .rk(rk_id),
        .rd(rd_id),
        .rd_csr(csr_writedata),
        .rj_csr(csr_musk),
        .rk_csr(csr_rk)
    );

    DType immout_id;
    ImmGen immgen (
        .instr(instr_id),
        .itype(itype),  // from control
        .is_unsign(is_unsign_imm),  // from control
        .is_csrtype(is_csr_ren_id|is_csr_wen_id),
        .is_tlbinv(is_tlb_fen_id),
        .immout(immout_id)
    );

    DType rj_id_true, rd_id_true,rk_id_true, rj_ex_true, rk_ex_true, rd_ex_true;

  
    DType rj_ex, rk_ex, rd_ex;
    Gr rj_no_ex, rk_no_ex, rd_no_ex;
    logic regWriteEn_mem;
    DType aluout_mem;
    logic memRead_ex, regWriteEn_ex;
    logic memRead_mem;
    

    Forwarding forwarding (
        .rj_no_id(rj_no_id),
        .rd_no_id(rd_no_id),
        .rk_no_id(rk_no_id),
        .rj_no_ex(rj_no_ex),
        .rk_no_ex(rk_no_ex),
        .rd_no_ex(rd_no_ex),
        .rj_id(rj_id),
        .rd_id(rd_id),
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
        .rd_id_true(rd_id_true),
        .rk_id_true(rk_id_true),
        .rj_ex_true(rj_ex_true),
        .rk_ex_true(rk_ex_true),
        .rd_ex_true(rd_ex_true),
        .aclk(aclk),
        .ex_finish(id_allow_in),
        .memRead(memRead_mem)
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



    
    logic[31:0] error_addr ;

    assign error_addr = id.pipeline_data.pc+4;

    wire error_inst_in_if = If.pipeline_valid && (error_addr == If.pipeline_data) && id.pipeline_valid;

    AluSel1 alusel1_ex;
    AluSel2 alusel2_ex;
    AluCtrl aluctrl_ex;
    // logic mem_is_exc;
    // logic wb_is_exc;
    logic EXWriteEn;
    HazardDetect hazard_detect (
        .resetn(aresetn),
        .aclk(aclk),
        .rd_no_ex(rd_no_ex),
        .memRead_ex(memRead_ex),
        .regWriteEn_ex(regWriteEn_ex),
        .is_compare(is_compare),
        .pcsel(pcsel),
        .rj_no_id(rj_no_id),
        .rk_no_id(rk_no_id),
        .rd_no_id(rd_no_id),
        .rd_no_mem(rd_no_mem),
        .rj_no_ex(rj_no_ex),
        .rk_no_ex(rk_no_ex),
        .alusel1_id(alusel1_id),
        .alusel2_id(alusel2_id),
        .alusel1_ex(alusel1_ex),
        .alusel2_ex(alusel2_ex),
        .memRead_mem(memRead_mem),
        .id_is_exc(ex_csrmsgin.is_exc),
        .ex_is_exc(mem_csrmsgin.is_exc|ex_data_out.tlbctrl.is_fetch_again),
        .mem_is_exc(mem_csrmsgout.is_exc|mem_data_out.tlbctrl.is_fetch_again),
        .wb_is_exc(wb_csrmsgout.is_exc|wb_data_out.tlbctrl.is_fetch_again),
        .ex_is_csr(ex_data_out.csrctrl.csr_ren),
        .mem_is_csr(mem_data_out.csrctrl.csr_ren),
        .mem_is_ertn(mem_data_out.csrctrl.is_ertn),
        .wb_is_ertn(wb_data_out.csrctrl.is_ertn),
        //todo
        .IDFlush(id_flush),
        .IFFlush(if_flush),
        .EXFlush(ex_flush),
        .MEMFlush(mem_flush),
        .IDWriteEn(id_ready_go),
        .WBFlush(wb_flush),
        .if_ready_go(if_ready_go),
        .data_ok_inst(data_ok_inst),
        .ex_valid_out(mem_valid_in),
        .ex_allow_in(ex_allow_in),
        .id_allow_in(id_allow_in),
        .if_allow_in(if_allow_in),
        .if_pipeline_valid(If.pipeline_valid),
        .error_inst_in_if(error_inst_in_if),
        .brstall(brstall),
        .EXWriteEn(EXWriteEn),
        .mem_allow_in(mem_allow_in),
        .mem_valid_out(wb_valid_in),
        
        .mem_is_idle(mem_data_out.tlbctrl.is_idle),
        .wb_is_idle(wb_data_out.tlbctrl.is_idle),
        .branchPcFromJ(branchPcFromJ) // jirl performance test 
    );




    //  EX

    EX_CONTROL_DATA ex_control_data_id, ex_nop_control_data;
    MEM_CONTROL_DATA mem_control_data_id, mem_nop_control_data;
    WB_CONTROL_DATA wb_control_data_id, wb_nop_control_data;

    assign ex_control_data_id = '{
            alusel1: alusel1_id,
            alusel2: alusel2_id,
            aluctrl: aluctrl_id,
            is_two_circles:is_two_circles
        };
    assign ex_nop_control_data = '{
            alusel1: ALU_SEL_RJ,
            alusel2: ALU_SEL_RK,
            aluctrl: ALU_ADD,
            is_two_circles: 0
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
            load_valid_diff: 0,
            store_valid_diff:'0
        };
    always_comb begin
        if(id_csrmsgout.is_exc)begin
            ex_excode = id_csrmsgout.excode;
            ex_is_exc = 1'b1;
        end
        else if(is_syscall_id)begin
            ex_excode = SYS;
            ex_is_exc = 1'b1;
        end
        else if(is_brk_id)begin
            ex_excode = BRK;
            ex_is_exc = 1'b1;
        end
        else if(is_ine_id|(is_tlb_fen_id&(immout_id[13:3]!=11'b0|immout_id[2:0]==3'b111)))begin
            ex_excode = INE;
            ex_is_exc = 1'b1;
        end
        /*else if(is_privil_id&id_csrmsgout.plv!=2'b0)begin
            ex_excode = IPE;
            ex_is_exc = 1'b1;
        end*/
        else begin
            ex_excode = id_csrmsgout.excode;
            ex_is_exc = 1'b0;
        end
    end
    assign ex_csrmsgin = '{
        pc: id_csrmsgout.pc,
        badvaddr: id_csrmsgout.badvaddr,
        excode: ex_excode,
        exsubcode: 0,
        is_exc:ex_is_exc,
        asid: id_csrmsgout.asid
    };
    logic csr_hazard;
    /*always_comb begin
        if(is_csr_wen_id)begin
            csr_hazard = immout_id[13:0]==DMW1|immout_id[13:0]==DMW0|immout_id[13:0]==ASID|immout_id[13:0]==CRMD;
        end 
        else begin
            csr_hazard = 1'b0;
        end
    end*/
    assign csr_hazard = is_csr_wen_id&(immout_id[13:0]==DMW1|immout_id[13:0]==DMW0|immout_id[13:0]==ASID|immout_id[13:0]==CRMD);
    assign ex_tlbctrl = '{
        tlb_ren:is_tlb_ren_id,
        tlb_sen:is_tlb_sen_id,
        tlb_wen:is_tlb_wen_id,
        tlb_fen:is_tlb_fen_id,
        cacop_code:cacop_code,
        is_cacop:is_cacop,
        i_or_d:i_or_d,
        cache_addr: 0,
        ind: 0,
        ne: 0,
        is_fetch_again:is_sc_type_id|is_ll_type_id|csr_hazard|is_cacop|is_rdcntl|is_rdcntid|is_rdcnth|is_tlb_fen_id|is_tlb_ren_id|is_tlb_sen_id|is_tlb_wen_id,
        is_idle:is_idle,
        is_llw:is_ll_type_id
    };
    assign ex_csrctrl = '{
        is_rdcnth: is_rdcnth,
        is_rdcntl: is_rdcntl,
        is_ertn: is_ertn_id,
        is_musk: is_csrMusk_id,
        csr_wen: is_csr_wen_id,
        csr_ren: is_csr_ren_id,
        csrnum: immout_id[13:0],
        regnum: rd_no_id,
        regnum0: rj_no_id,
        regnum1: rk_no_id
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
            instr : instr_id,
            csrctrl: ex_csrctrl,
            tlbctrl: ex_tlbctrl,
            is_ll_type:is_ll_type_id,
            is_sc_type:is_sc_type_id,
            aluctrl_bits:aluctrl_bits
    };
    
    
    assign ex_nop = '{
            ex_control_data: ex_nop_control_data,
            mem_control_data: mem_nop_control_data,
            wb_control_data: wb_nop_control_data,
            rj: 0,
            rk: 0,
            rd: 0,
            rjNo: 0,
            rkNo: 0,
            rdNo: 0,
            immout: 0,
            pc: 0,
            instr : 0,
            csrctrl: 0,
            tlbctrl: 0,
            is_ll_type:0,
            is_sc_type:0,
            aluctrl_bits:0
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
        .flush(ex_flush),
        .csrmsg_in(ex_csrmsgin),
        .csrmsg_out(ex_csrmsgout)
       
    );
    


    EX_CONTROL_DATA ex_control_data_ex;
    MEM_CONTROL_DATA mem_control_data_ex;
    WB_CONTROL_DATA wb_control_data_ex;


    DType aluSrc1_ex, aluSrc2_ex;
    DType pc_ex;

    DType immout_ex;
    // Instr instr;

    logic memWriteEn_ex;
    logic [1:0] size_mem_ex;
    logic is_unsign_load_ex;
    logic is_ll_type_ex;
    logic is_sc_type_ex;
    assign is_ll_type_ex = ex_data_out.is_ll_type;
    assign is_sc_type_ex = ex_data_out.is_sc_type;

    logic [1:0]regWriteDataSel_ex;

    assign ex_control_data_ex = ex_data_out.ex_control_data;
    assign mem_control_data_ex = ex_data_out.mem_control_data;
    assign wb_control_data_ex = ex_data_out.wb_control_data;
    assign rj_ex = ex_data_out.rj;
    assign rk_ex = ex_data_out.rk;
    assign rd_ex = ex_data_out.rd;
    assign rj_no_ex = ex_data_out.rjNo;
    assign rk_no_ex = ex_data_out.rkNo;
    Instr instr_ex = ex_data_out.instr;
    // rd_no_ex将�?�到hazard detection
    assign rd_no_ex = ex_data_out.rdNo;
    assign immout_ex = ex_data_out.immout;
    assign pc_ex = ex_data_out.pc;
    assign alusel1_ex = ex_control_data_ex.alusel1;
    assign alusel2_ex = ex_control_data_ex.alusel2;
    assign aluctrl_ex = ex_control_data_ex.aluctrl;

    assign memWriteEn_ex = mem_control_data_ex.memWriteEn;
    // memRead_ex将�?�到hazard detection
    assign memRead_ex = mem_control_data_ex.memRead;
    assign size_mem_ex = mem_control_data_ex.size_mem;
    assign is_unsign_load_ex = mem_control_data_ex.is_unsign_load;

    // regWriteEn_ex将�?�到hazard detection
    assign regWriteEn_ex = wb_control_data_ex.regWriteEn;
    assign regWriteDataSel_ex = wb_control_data_ex.regWriteDataSel;



    always_comb begin
        unique case (alusel1_ex)
            ALU_SEL_RJ: aluSrc1_ex = rj_ex_true;
            ALU_SEL_PC: aluSrc1_ex = pc_ex;
            default: aluSrc1_ex = 0;
        endcase
    end

    always_comb begin
        unique case (alusel2_ex)
            ALU_SEL_RK: aluSrc2_ex = rk_ex_true;
            ALU_SEL_IMMOUT: aluSrc2_ex = immout_ex;
            default: aluSrc2_ex = 0;
        endcase
    end


    logic[31:0] sec_result;
    logic[31:0] sec_aluSrc1;
    logic[31:0] sec_aluSrc2;
    wire sec_is_valid;
    reg flag;
    assign sec_is_valid = ex_control_data_ex.is_two_circles.is_mul|
        ex_control_data_ex.is_two_circles.is_mulhu|
        ex_control_data_ex.is_two_circles.is_mulh;
    
    Sec_AluCtrl sec_aluctrl_reg;
    always_ff@(posedge aclk)begin
        if(~aresetn)begin
            sec_aluSrc1<=0;
            sec_aluSrc2<=0;
            sec_aluctrl_reg<=0;
            flag<=1;//0 go 1 wait
        end
        if(sec_is_valid)begin
        sec_aluSrc1<=aluSrc1_ex;
        sec_aluSrc2<=aluSrc2_ex;
        sec_aluctrl_reg<=ex_control_data_ex.is_two_circles;
        end
        if(sec_is_valid)flag<=0;
        else flag<=1;
    end


    wire[63:0] unsigned_mul_result;
    wire[63:0] signed_mul_result;
	assign unsigned_mul_result = sec_aluSrc1*sec_aluSrc2;	
    assign signed_mul_result = $signed(sec_aluSrc1) * $signed(sec_aluSrc2);
    mux_1h #(.num_port(3), .data_width('d32)) sec_mux
           (
               .select(
                   {sec_aluctrl_reg.is_mul,
                    sec_aluctrl_reg.is_mulh,
                    sec_aluctrl_reg.is_mulhu
                   }),
               .in(
                   {
                    signed_mul_result[31:0],
                    signed_mul_result[63:32],
                    unsigned_mul_result[63:32]
                   }),
               .out(sec_result)
      );
    
    
    


    DivNeed divNeed;
    assign divNeed.aclk = aclk;
    // 不知道�?�么�????
    assign divNeed.aresetn = aresetn;
    DType memaddr_ex;
    DType aluout_ex;
    logic alu_ready_go;
    alu alu (
        .aluSrc1 (aluSrc1_ex),
        .aluSrc2 (aluSrc2_ex),
        //.aluctrl (aluctrl_ex),
        .aluctrl_bits(ex_data_out.aluctrl_bits),
        .divNeed (divNeed),
        .aluout  (aluout_ex),
        .overflow(overflow),
        .memaddr (memaddr_ex),
        .ready_go(alu_ready_go),
        .outer_result(sec_result),
        .sec_is_valid(sec_is_valid&flag)
    );


    //MEM

    // MEM阶�?��??要根�??????�线接口重新设�??
    // wstrb 即可以作为写片�?�信号，也可以作为�?�片??�信�????
    logic [31:0] memaddr_addr_phyaddr;
    logic memaddr_is_dmw;
    logic readData_temp_valid;
    logic memWriteEn_mem;
   
     wire access_ex;
    assign access_ex = memWriteEn_ex | memRead_ex;
    
    // final change
    always_comb begin
        if(ex_csrmsgout.is_exc)begin
           mem_excode = ex_csrmsgout.excode;
//           mem_exsubcode = 1'b0;
           mem_is_exc = 1'b1;
        end
        else if(EXWriteEn&ex_allow_in&((memaddr_ex[1:0]!=2'b0&size_mem==2'd2)|((memaddr_ex[0]!=1'b0)&size_mem==2'd1))&(~memaddr_is_dmw &  access_ex))begin
                mem_excode = ALE;
//                mem_exsubcode = 1'b0;
                mem_is_exc = 1'b1;
        end
        else begin
            mem_excode = 32'b0;
//            mem_exsubcode = 1'b0;
            mem_is_exc = 1'b0;
        end
        mem_exsubcode = 1'b0;
    end
    always_comb begin 
        if(ex_csrmsgout.is_exc)begin
            mem_badvaddr = ex_csrmsgout.badvaddr;
        end
        else if(((ex_data_out.tlbctrl.cacop_code==2'b10)&ex_data_out.tlbctrl.is_cacop|memWriteEn_ex|memRead_ex))begin
            mem_badvaddr = memaddr_ex;
        end
        else begin
            mem_badvaddr = ex_csrmsgout.badvaddr;
        end
    end
    
    // EX_DATA ex_data_in;
    assign mem_csrmsgin = '{
        pc:ex_csrmsgout.pc,
        badvaddr: mem_badvaddr,
        excode: mem_excode,
        exsubcode: {8'b0,mem_exsubcode},
        is_exc:mem_is_exc,
        asid :ex_csrmsgout.asid
    };
    TlbCtrl mem_tlbctrlin;
    assign mem_tlbctrlin = '{
        tlb_ren:ex_data_out.tlbctrl.tlb_ren,
        tlb_sen:ex_data_out.tlbctrl.tlb_sen,
        tlb_wen:ex_data_out.tlbctrl.tlb_wen,
        tlb_fen:ex_data_out.tlbctrl.tlb_fen,
        is_cacop:ex_data_out.tlbctrl.is_cacop,
        cacop_code:ex_data_out.tlbctrl.cacop_code,
        i_or_d:ex_data_out.tlbctrl.i_or_d,
        cache_addr:memaddr_addr_phyaddr,
        ind: memaddr_tlb_ind,
        ne: memaddr_tlb_ne,
        is_fetch_again:ex_data_out.tlbctrl.is_fetch_again,
        is_idle:ex_data_out.tlbctrl.is_idle,
        is_llw:ex_data_out.tlbctrl.is_llw
    };
    
    
    
    DType aluout_ex_wrap ;
    always_comb begin 
        if (is_sc_type_ex ) begin
            aluout_ex_wrap = llbit; //always success    
        end
        else begin
            aluout_ex_wrap = aluout_ex;
        end
    end
    
   WB_CONTROL_DATA wb_control_data_ex_wrap;
   always_comb begin
//        if (is_sc_type_ex) begin
//            wb_control_data_ex_wrap.regWriteEn = 1;
//        end
//        else begin
//              wb_control_data_ex_wrap.regWriteEn = wb_control_data_ex.regWriteEn;
//        end
        wb_control_data_ex_wrap.regWriteEn = is_sc_type_ex | wb_control_data_ex.regWriteEn;
        wb_control_data_ex_wrap.regWriteDataSel = wb_control_data_ex.regWriteDataSel;
        wb_control_data_ex_wrap.load_valid_diff = wb_control_data_ex.load_valid_diff;
        wb_control_data_ex_wrap.store_valid_diff = wb_control_data_ex.store_valid_diff;
   end
    


    assign mem_data_in = '{
            mem_control_data: mem_control_data_ex,
            wb_control_data: wb_control_data_ex_wrap,
            rdNo: rd_no_ex,
            aluout: aluout_ex_wrap,
            wstrb_mem: wstrb_mem,
            pc : pc_ex,
            instr: instr_ex,
            memaddr_virt: memaddr_ex,
            memaddr_phy: memaddr_addr_phyaddr,
            rd:rd_ex_true,
            store_data:wdata_mem,
            csrctrl: ex_data_out.csrctrl,
            tlbctrl: mem_tlbctrlin,
            is_sc_type:is_sc_type_ex,
            is_ll_type:is_ll_type_ex,
            llbit:llbit
        };
    assign mem_nop = '{
            mem_control_data: mem_nop_control_data,
            wb_control_data: wb_nop_control_data,
            rdNo: 0,
            aluout: 0,
            wstrb_mem: 4'b0000,
            pc: 0,
            instr: 0,
            store_data:0,
            memaddr_virt: 0,
            memaddr_phy: 0,
            rd:0,
            csrctrl:0,
            tlbctrl:0,
            is_sc_type:0,
            is_ll_type:0,
            llbit:0
        };

    // sram_mem 
    
    //addr_trans
    
    addr_trans addr_trans_memaddr(
    .en_tlb(into_linux),
    .virt_addr(memaddr_ex),
    .phy_addr(memaddr_addr_phyaddr),
    .da(da),
    .pg(pg),
    .dmw0(csr.csr.DMW0),
    .dmw1(csr.csr.DMW1),
    .plv(plv),
    .mat_csr(mat_d),
    .mat_phytran(memaddr_tlb_phytranitem.MAT),
    //TLB
    //.vpn2(),
    //.odd_page,
    .pfn(memaddr_tlb_phytranitem.PPN),
    //.tlb_ne(memaddr_tlb_ne),
    .is_dmw(memaddr_is_dmw),
    .is_usetlb(memaddr_is_usetlb),
    .mat_true(mat_true_d)
    );
    assign wr_mem = memWriteEn_ex;
    assign addr_mem = memaddr_addr_phyaddr;//memaddr_ex
    // assign wdata_mem = rd_ex_true;
    assign size_mem = size_mem_ex;

    extend_store extend_store_u (
        .wstrb(wstrb_mem),
        .size(size_mem),
        .origin_data(rd_ex_true),
        .extend_data(wdata_mem)
    );



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




    // pipelined signal 这里改动了，与preif不完全相�????
    wire cacop_check;
    assign cacop_check = ex_data_out.tlbctrl.is_cacop&cacheop_ok2;//&cacheop_ok2;
    
    wire fix_check_;
    assign fix_check_ = data_ok_mem;//|~memWriteEn_mem&fix_check;
    

    wire access_mem ;
    logic is_sc_type_mem;
    assign access_mem = memWriteEn_mem | memRead_mem;

    logic is_ll_type_mem;
    logic is_ll_type_wb;
    logic llbit_mem;
    assign ex_ready_go = ((((((addr_ok_mem & req_mem) & (~is_sc_type_ex | is_sc_type_ex & llbit)) | is_sc_type_ex & ~llbit) & access_ex ) 
                        | (~access_ex & alu_ready_go))& EXWriteEn & ~ex_data_out.tlbctrl.is_cacop) |cacop_check | mem_is_exc | ex_data_out.tlbctrl.is_fetch_again;
                        
    assign req_mem = ex_allow_in & (access_ex &(~is_sc_type_ex | (is_sc_type_ex & llbit) ) ) & ~mem_is_exc& ~wb_is_exc;
    assign mem_ready_go = fix_check_ || (is_sc_type_mem && ~llbit_mem)  || readData_temp_valid || ~access_mem ||wb_is_exc|| mem_data_out.tlbctrl.is_fetch_again;
    
    

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
        .flush(mem_flush),
        .csrmsg_in(mem_csrmsgin),
        .csrmsg_out(mem_csrmsgout)
    );


    logic [3:0] wstrb_mem_mem;
    logic is_unsign_load_mem;


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
    DType pc_mem;
    assign pc_mem = mem_data_out.pc;
    DType memaddr_mem_virt;
    assign memaddr_mem_virt = mem_data_out.memaddr_virt;
    DType memaddr_mem_phy ;
    assign memaddr_mem_phy= mem_data_out.memaddr_phy;
    DType rd_mem;
    assign rd_mem = mem_data_out.rd;
    DType store_data_mem;
    assign store_data_mem = mem_data_out.store_data;
//    logic is_sc_type_mem;
//    logic is_ll_type_mem;
//    logic llbit_mem;
    assign is_sc_type_mem = mem_data_out.is_sc_type;
    assign is_ll_type_mem = mem_data_out.is_ll_type;
    assign llbit_mem = mem_data_out.llbit;

    // mem signal
    DType readData_temp;

    DType readData_mem;
    DType readData;



    extend_memData extend_memData_u (
        .wstrb(wstrb_mem_mem),
        .is_unsign_load(is_unsign_load_mem),
        .rdata_mem(rdata_mem),
        .readData(readData)
    );

    // 这里也改动了，与preif不完全相�????
    always_ff @(posedge aclk) begin
        if(~aresetn)begin
            readData_temp_valid <= 0;
        end
        // add a condition  of ~readData_temp_valid
        if (fix_check_ && ~ex_allow_in && (access_mem&&~(~llbit_mem&&is_sc_type_mem)) && ~readData_temp_valid) begin
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
            default readData_mem = 0;
        endcase
    end
    always_ff @(posedge aclk)begin
        if(~aresetn)
        wb_intercode <=0;
    end

    always_comb begin
        /*if(wb_tmp_valid&wb_valid_in)begin
             wb_excode = wb_excode_tmp;
             wb_is_exc = 1'b1;
        end
        else*/
        if(mem_csrmsgout.is_exc)begin
             wb_excode = mem_csrmsgout.excode;
             wb_is_exc = 1'b1;
        end
        else if((({12{ie}}&is&lie)!=12'b0))begin//interrupt
             wb_excode = INT;
             wb_is_exc = 1'b1;
        end
        else begin
             wb_excode = mem_csrmsgout.excode;
             wb_is_exc = 1'b0;
        end
    end
    //reg wb_is_exc_last;//record last wb exc to check wb exc before if exc
    
    always_ff@(posedge aclk)begin //just be used for interrupt
        //wb_is_exc_last <= wb_is_exc;
        if((mem_csrmsgout.is_exc|(({12{ie}}&is&lie)!=12'b0))&~wb_valid_in)begin
            wb_tmp_valid <= 1'b1;
            wb_excode_tmp <= wb_excode;
        end 
        else if(wb_valid_in)wb_tmp_valid <= 1'b0;
        else if(!ie)wb_tmp_valid<=1'b0;
    end 
    
    assign wb_csrmsgin = '{
        pc: mem_csrmsgout.pc,
        badvaddr: mem_csrmsgout.badvaddr,
        excode: wb_excode,
        exsubcode: wb_tmp_valid?wb_excode_tmp:mem_csrmsgout.exsubcode,
        is_exc:wb_tmp_valid?1'b1     :wb_is_exc,
        asid :mem_csrmsgout.asid
    };
    assign wb_data_in = '{
            wb_control_data: wb_control_data_mem,
            rdNo: rd_no_mem,
            aluout: aluout_mem,
            readData: readData_mem,
            pc: pc_mem,
            wstrb: wstrb_mem_mem,
            instr:instr_mem,
            //instr:sec_result,
            memaddr_virt:memaddr_mem_virt, 
            memaddr_phy:memaddr_mem_phy,
            rd: rd_mem,
            store_data:store_data_mem,
            csrctrl: mem_data_out.csrctrl,
            tlbctrl: mem_data_out.tlbctrl,
            is_ll_type:is_ll_type_mem,
            is_sc_type:is_sc_type_mem,
            llbit:llbit_mem
        };

    assign wb_nop = '{
            wb_control_data: wb_nop_control_data,
            rdNo: 0,
            aluout: 0,
            readData: 0,
            pc: 0,
            wstrb:0,
            instr:0,
            memaddr_virt:0,
            memaddr_phy:0,
            store_data:0,
            rd:0,
            csrctrl:0,
            tlbctrl:0,
            is_ll_type:0,
            is_sc_type:0,
            llbit:0
        };

    assign wb_allow_in = 1;
    assign wb_ready_go = 1;//~(wb_is_exc_last&if_is_exc);
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
        .flush(wb_flush),
        .csrmsg_in(wb_csrmsgin),
        .csrmsg_out(wb_csrmsgout)
    );

    WB_CONTROL_DATA wb_control_data_wb;
    DType aluout_wb;
    DType readData_wb;
    assign wb_control_data_wb = wb_data_out.wb_control_data;
    assign rd_no_wb = wb_data_out.rdNo;
    assign aluout_wb = wb_data_out.aluout;
    assign readData_wb = wb_data_out.readData;
    assign regWriteEn_wb = wb_control_data_wb.regWriteEn;
    RegWriteDataSel regWriteDataSel_wb ;
    assign regWriteDataSel_wb = wb_control_data_wb.regWriteDataSel;
    DType pc_wb;
    assign pc_wb = wb_data_out.pc;
    logic[3:0] wstrb_wb ;
    assign wstrb_wb = wb_data_out.wstrb;
    assign debug_wb_pc = wb_data_out.pc;//////
    assign debug_wb_rf_we = {4{regWriteEn_wb}};
    assign debug_wb_rf_wdata = rf.rf[16];
    assign debug_wb_rf_wnum = rd_no_wb;
    Instr instr_wb = wb_data_out.instr;
    assign debug_wb_inst = instr_wb;
    DType memaddr_wb_virt = wb_data_out.memaddr_virt;
    DType memaddr_wb_phy = wb_data_out.memaddr_phy;
    logic [7:0] load_valid_diff_wb = wb_control_data_wb.load_valid_diff;
    logic [7:0] store_valid_diff_wb = wb_control_data_wb.store_valid_diff;
    DType rd_wb = wb_data_out.rd;
    DType store_data_wb;
    assign store_data_wb = wb_data_out.store_data;
    
//    logic is_ll_type_wb;

    
    
    assign is_ll_type_wb = wb_data_out.is_ll_type;
    assign is_sc_type_wb = wb_data_out.is_sc_type;
    assign llbit_wb = wb_data_out.llbit;
    
    always_comb begin
        unique case (regWriteDataSel_wb)
            REG_WRITE_ALU: regWriteData_wb = aluout_wb;
            REG_WRITE_MEM: regWriteData_wb = readData_wb;
            REG_WRITE_CSR: regWriteData_wb = csrout_wb;
            REG_WRITE_CNT: begin
                            if(wb_data_out.csrctrl.is_rdcnth)regWriteData_wb = counter_higher;
                            else if(wb_data_out.csrctrl.is_rdcntl)regWriteData_wb = counter_lower;
                            else regWriteData_wb = tid;
            end//no rdid,because it always be zero;
            default: regWriteData_wb = 0;
        endcase
    end







endmodule : cpu_sram

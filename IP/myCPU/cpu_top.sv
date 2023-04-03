`include "cpu.svh"


module core_top
    import cpuDefine::*;
(
    input           aclk,
    input           aresetn,
    input    [ 7:0] intrpt, 
    //AXI interface 
    //read reqest
    output   [ 3:0] arid,
    output   [31:0] araddr,
    output   [ 7:0] arlen,
    output   [ 2:0] arsize,
    output   [ 1:0] arburst,
    output   [ 1:0] arlock,
    output   [ 3:0] arcache,
    output   [ 2:0] arprot,
    output          arvalid,
    input           arready,
    //read back
    input    [ 3:0] rid,
    input    [31:0] rdata,
    input    [ 1:0] rresp,
    input           rlast,
    input           rvalid,
    output          rready,
    //write request
    output   [ 3:0] awid,
    output   [31:0] awaddr,
    output   [ 7:0] awlen,
    output   [ 2:0] awsize,
    output   [ 1:0] awburst,
    output   [ 1:0] awlock,
    output   [ 3:0] awcache,
    output   [ 2:0] awprot,
    output          awvalid,
    input           awready,
    //write data
    output   [ 3:0] wid,
    output   [31:0] wdata,
    output   [ 3:0] wstrb,
    output          wlast,
    output          wvalid,
    input           wready,
    //write back
    input    [ 3:0] bid,
    input    [ 1:0] bresp,
    input           bvalid,
    output          bready,
    //debug info
    output [31:0] debug0_wb_pc,
    output [ 3:0] debug0_wb_rf_wen,
    output [ 4:0] debug0_wb_rf_wnum,
    output [31:0] debug0_wb_rf_wdata
    ,
    output [31:0] debug1_wb_pc,
    output [ 3:0] debug1_wb_rf_wen,
    output [ 4:0] debug1_wb_rf_wnum,
    output [31:0] debug1_wb_rf_wdata
);


// module cpu_top
//     import cpuDefine::*;
// (
//     input logic clk,
//     input logic reset
// );


// IF
DType pc_if;
DType nextPC;
PcSel pcsel;
logic pcWriteEn;
DType pcAdd;


DType pcBranch;
assign pcAdd = pc_if+4;
always_comb begin 
    unique case (pcsel)
        PC_ADD4: nextPC = pcAdd;
        PC_BRANCH: nextPC = pcBranch;
        default: nextPC = '0;
    endcase
end
PcUpdate pcupdate(
    .clk(clk),
    .reset(reset),
    .en(pcWriteEn),
    .data(nextPC),
    .pc(pc_if)
);

Instr instr_if;
ICache icache(
    .clk(clk), 
    .addr(nextPC),
    .instr(instr_if)
);

    // ID

logic if_valid_out, if_allow_in ;





logic id_valid_in;
ID_DATA id_data_in, id_data_out;
logic id_ready_go;
logic id_allow_out;
ID_DATA id_nop;

logic ex_valid_in;
EX_DATA ex_data_in,ex_data_out;
logic ex_ready_go;
logic ex_allow_out;
EX_DATA ex_nop;

logic mem_valid_in;
MEM_DATA mem_data_in, mem_data_out;
logic mem_ready_go;
logic mem_allow_out;
MEM_DATA mem_nop;

logic wb_valid_in;
WB_DATA wb_data_in, wb_data_out;
logic wb_ready_go;
logic wb_allow_out;
WB_DATA wb_nop;


assign id_valid_in = 1;
assign id_ready_go = 1;
assign ex_ready_go = 1;
assign mem_ready_go = 1;
assign wb_ready_go = 1;
assign wb_allow_out = 1;



assign id_data_in = '{pc:pc_if, instr:instr_if};
// add x0, x0, x0
assign id_nop = '{pc:'0, instr:32'h00100000};
Pipeline #
(
    .WIDTH($bits(id_data_in))
)  
id 
(
    .clk(clk),
    .reset(IDFlush),
    .valid_in(if_valid_out),
    .allow_out(if_allow_in),
    .valid_out(ex_valid_in),
    .allow_in(ex_allow_out),
    .data_in(id_data_in),
    .ready_go(id_ready_go),
    .nop_data('0),
    .data_out(id_data_out)
);



Instr instr_id = id_data_out.instr;
DType pc_id = id_data_out.pc;
logic zero, lt;
Itype itype;
logic regWriteEn_id, memWriteEn_id, memRead_id;
AluSel1 alusel1_id;
AluSel2 alusel2_id;
AluCtrl aluctrl_id;
RegWriteDataSel regWriteDataSel_id;
logic unsignBranchCmp;
logic reglink;
logic inst_ram_en,inst_ram_wen;
logic is_unsign_imm;
logic branchPcFromJ;
logic is_compare;
Control control(
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
    .inst_ram_en(inst_ram_en),
    .inst_ram_wen(inst_ram_wen),
    .is_unsign_imm(is_unsign_imm),
    .branchPcFromJ(branchPcFromJ),
    .is_compare(is_compare)
);


// bl and jirl is write x1 register
logic[4:0] rd_no_id, rj_no_id,rk_no_id;
DType rj_id, rk_id, rd_id;

assign rj_no_id = instr_id[9:5];
assign rk_no_id = instr_id[14:10];
always_comb begin
    if (reglink) begin
        rd_no_id = 5'b00001;
    end
    else begin
        rd_no_id = instr_id[4:0];
    end
end


logic regWriteEn_wb;
DType regWriteData_wb;
regfile rf(
    .clk(clk),
    .reset(reset),
    .rd_in(rd_no_id),
    .rj_in(rj_no_id),
    .rk_in(rk_no_id),
    .regWriteEn(regWriteEn_wb),
    .regWriteData(regWriteData_wb),
    .rj(rj_id),
    .rk(rk_id),
    .rd(rd_id)
);

DType immout_id;
ImmGen immgen(
    .instr(instr_id), 
    .itype(itype), // from control
    .is_unsign(is_unsign_imm), // from control
    .immout(immout_id)
);

DType rj_id_true, rk_id_true, rj_ex_true, rk_ex_true, rd_ex_true;
Gr rj_no_ex, rk_no_ex, rd_no_ex; 
DType rj_ex, rk_ex, rd_ex;

Gr rd_no_mem, rd_no_wb;
logic regWriteEn_mem, regWriteEn_wb;
DType aluout_mem, regWriteData_wb;

Forwarding forwarding(
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

logic zero, lt, unsignBranchCmp;
Comparator comp(
    .rj(rj_id_true), 
    .rk(rk_id_true),
    .unsign(unsignBranchCmp),
    .zero(zero), .lt(lt)
);

DType pcSrc1_id;
always_comb begin
    if (branchPcFromJ) begin
        pcSrc1_id = rj_id_true;
    end
    else begin
        pcSrc1_id = pc_id;
    end
end
assign pcBranch = pcSrc1_id + immout_id;


logic memRead_ex,regWriteEn_ex;

HazardDetect hazard_detect(
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
    .IDFlush(IDFlush),
    .IDWriteEn(id_allow_out),
    .pcWriteEn(pcWriteEn),
    .EXFlush(EXFlush)
);

//  EX

EX_CONTROL_DATA ex_control_data_id;
MEM_CONTROL_DATA mem_control_data_id;
WB_CONTROL_DATA wb_control_data_id;

assign ex_control_data_id = '{alusel1:alusel1_id, alusel2:alusel2_id, aluctrl:aluctrl_id};
assign mem_control_data_id = '{memWriteEn:memWriteEn_id, memRead:memRead_id};
assign wb_control_data_id = '{regWriteEn:regWriteEn_id, regWriteDataSel:regWriteDataSel_id};
EX_DATA ex_data_in;
assign ex_data_in = '{ex_control_data:ex_control_data_id,
                    mem_control_data:mem_control_data_id,
                    wb_control_data:wb_control_data_id,
                    rj:rj_id,
                    rk:rk_id,
                    rd:rd_id,
                    rjNo: rj_no_id,
                    rkNo:rk_no_id,
                    rdNo: rd_no_id,
                    immout:immout_id,
                    pc:pc_id
};



Pipeline  #(
    .WIDTH($bits(ex_data_in))
)
ex
(
    .clk(clk),
    .reset(EXFlush),
    .valid_in(ex_valid_in),
    .data_in(ex_data_in),
    .ready_go(ex_ready_go),
    .nop_data('0),
    .allow_in(id_allow_out),
    .valid_out(mem_valid_in),
    .data_out(ex_data_out),
    .allow_out(ex_allow_out)
);



EX_CONTROL_DATA ex_control_data_ex;
EX_CONTROL_DATA mem_control_data_ex;
EX_CONTROL_DATA wb_control_data_ex;
AluSel1 alusel1_ex;
AluSel2 alusel2_ex;
AluCtrl aluctrl_ex;

DType aluSrc1_ex, aluSrc2_ex, aluctrl_ex;
DType pc_ex;
DType rj_ex, rk_ex, rd_ex;
Gr rj_no_ex, rk_no_ex,  rd_no_ex;
DType immout_ex;


assign ex_control_data_ex = ex_data_out.ex_control_data;
assign mem_control_data_ex = ex_data_out.mem_control_data;
assign wb_control_data_ex = ex_data_out.wb_control_data;
assign rj_ex = ex_data_out.rj;
assign rk_ex = ex_data_out.rk;
assign rd_ex = ex_data_out.rd;
assign rj_no_ex = ex_data_out.rjNo;
assign rk_no_ex = ex_data_out.rkNo;
assign rd_no_ex = ex_data_out.rdNo;
assign immout_ex = ex_data_out.immout;
assign pc_ex = ex_data_out.pc;
assign alusel1_ex = ex_control_data_ex.alusel1_ex;
assign alusel2_ex = ex_control_data_ex.alusel2_ex;
assign aluctrl_ex = ex_control_data_ex.aluctrl_ex;


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
assign divNeed.clk = clk;
// 不知道怎么填
assign divNeed.reset = reset;
DType memaddr_ex;
DType aluout_ex;
ALU alu(
    .aluSrc1(aluSrc1_ex), 
    .aluSrc2(aluSrc2_ex),
    .aluctrl(aluctrl_ex),
    .divNeed(divNeed),
    .aluout(aluout_ex),
    .overflow(overflow),
    .memaddr(memaddr_ex)
);


//MEM




// assign mem_control_data_ex = '{memWriteEn:memWriteEn_ex, memRead:memRead_ex};
// assign wb_control_data_ex = '{regWriteEn:regWriteEn_ex, regWriteDataSel:regWriteDataSel_ex};
// EX_DATA ex_data_in;
MEM_DATA mem_data_in;
assign mem_data_in = '{
                    mem_control_data:mem_control_data_ex,
                    wb_control_data:wb_control_data_ex,
                    rdNo: rd_ex_true,
                    aluout: aluout_ex,
                    memaddr: memaddr_ex
};

MEM_DATA mem_data_out;
Pipeline  #(
    .WIDTH($bits(mem_data_in))
)
mem
(
    .clk(clk),
    .reset(MEMFlush),
    .valid_in(mem_valid_in),
    .data_in(mem_data_in),
    .ready_go(mem_ready_go),
    .nop_data('0),
    .allow_in(ex_allow_out),
    .valid_out(wb_valid_in),
    .data_out(mem_data_out),
    .allow_out(mem_allow_out)
);


MEM_CONTROL_DATA mem_control_data_mem;
WB_CONTROL_DATA wb_control_data_mem;
Gr rd_no_mem;
DType aluout_mem;
DType memaddr_mem;
assign mem_control_data_mem = mem_data_out.mem_control_data;
assign wb_control_data_mem = mem_data_out.wb_control_data;
assign rd_no_mem = mem_data_out.rdNo;
assign memaddr_mem = mem_data_out.memaddr;

logic memWriteEn_mem = mem_control_data_mem.memWriteEn;
logic memRead_mem = mem_control_data_mem.memRead;



DType memReadData_mem;
// before mem to read
DCache dcache(
    .clk(clk),
    .memWriteEn(memWriteEn_ex),
    .readAddr(memaddr_ex),
    .writeAddr(memaddr_ex),
    .writeData(rd_ex),
    .readData(memReadData_ex)
);



    // WB

WB_DATA wb_data_in;
assign wb_data_in = '{wb_control_data:wb_control_data_mem,
                    rdNo:rd_no_mem,
                    aluout:aluout_mem,
                    memReadData:memReadData_mem
            };
WB_DATA wb_data_out;

Pipeline  #(
    .WIDTH($bits(wb_data_in))
)
wb
(
    .clk(clk),
    .reset(WBFlush),
    .valid_in(wb_valid_in),
    .data_in(wb_data_ink),
    .ready_go(wb_ready_go),
    .nop_data('0),
    .allow_in(mem_allow_out),
    .valid_out(1),
    .data_out(wb_data_out),
    .allow_out(wb_allow_out)
);

WB_CONTROL_DATA wb_control_data_wb;
Gr rd_no_wb;
DType aluout_wb;
DType memReadData_wb;
assign wb_control_data_wb = wb_data_out.wb_control_data;
assign rd_no_wb = wb_data_out.rdNo;
assign aluout_wb = wb_data_out.aluout;
assign memReadData_wb = wb_data_out.memReadData;
logic regWriteEn_wb = wb_control_data.regWriteEn;
RegWriteDataSel regWriteDataSel_wb = wb_control_data.regWriteDataSel;



always_comb begin
    unique case (regWriteDataSel_wb)       
       REG_WRITE_ALU : regWriteData_wb = aluout_mem;
       REG_WRITE_MEM : regWriteData_wb = memReadData_mem;
        default: regWriteData_wb = '0;
    endcase
end


endmodule
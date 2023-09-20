`include "cpu.svh"

import cpuDefine::*;
module Control(
    input Instr instr,
    input logic eq,
    input logic lt,
    output PcSelBit pcsel,
    output ItypeBit itype,
    output logic regWriteEn,
    output logic memWriteEn,
    output logic memRead,
    output AluSel1Bit alusel1,
    output AluSel2Bit alusel2,
    output AluCtrlBit aluctrl,
    output RegWriteDataSelBit regWriteDataSel,
    output logic unsignBranchCmp,
    output logic reglink,
    // output logic inst_ram_en,
    // output logic inst_ram_wen,
    output logic signed is_unsign_imm,
    output logic branchPcFromJ,
    output logic signed is_compare,

    //tlb csr 
    output logic is_privil,//instr privil
    output logic is_ertn,
    output logic is_syscall,
    output logic is_brk,
    output logic is_ine,
    output logic tlb_fen,//invtlb
    output logic tlb_wen,//fill and write is same
    output logic tlb_sen,//search
    output logic tlb_ren,
    output logic csr_wen,//writeen
    output logic csr_ren,
    output logic is_csrMusk,//csrxchg

    output logic [1:0] size_mem,
    output logic is_unsign_load,
    output logic [7:0] load_valid_diff,
    output logic [7:0] store_valid_diff

);



    /*
            这里是一级译码
    */
    // please look for the encode table in our github repository

    wire signed is_3R_TYPE = (instr[31:22] == _3R_TYPE);
    wire signed is_2RI8_TYPE = (instr[31:22] == _2RI8_TYPE);
    wire signed is_2RI12_TYPE_1 = (instr[31:25] == _2RI12_TYPE_1);
    wire signed is_U_TYPE = (instr[31:28] == U_TYPE);
    wire signed is_2RI14_TYPE = (instr[31:25] == _2RI14_TYPE);
    wire signed is_2RI12_TYPE_2 = (instr[31:26] == _2RI12_TYPE_2);
    wire signed is_BRANCH_TYPE = (instr[31:30] == BRANCH_TYPE);
    wire signed is_TLB_TYPEH = (instr[31:20]==TLB_TYPEH);
    wire signed is_CSR_TYPE = (instr[31:24]==CSR_TYPE);
    // wire signed is_1RI21_TYPE = (instr[31:27] == 1RI21_TYPE);
    // wire signed is_I26_TYPE = (instr[31:27] == I26_TYPE);
    // wire signed is_2RI16_TYPE_1 = ((instr[31:27] == 2RI16_TYPE_1));
    // wire signed is_2RI16_TYPE_2 = ((instr[31:28] == 2RI16_TYPE_2));

    // _3R_TYPE_low
    wire [6:0] _3R_TYPE_low = instr[21:15];
    wire signed is_ADD_TYPE = (_3R_TYPE_low == ADD_TYPE) & is_3R_TYPE;
    wire signed is_SUB_TYPE = (_3R_TYPE_low == SUB_TYPE) & is_3R_TYPE;
    wire signed is_SLT_TYPE = (_3R_TYPE_low == SLT_TYPE) & is_3R_TYPE;
    wire signed is_SLTU_TYPE = (_3R_TYPE_low == SLTU_TYPE) & is_3R_TYPE;
    wire signed is_NOR_TYPE = (_3R_TYPE_low == NOR_TYPE) & is_3R_TYPE;
    wire signed is_AND_TYPE = (_3R_TYPE_low == AND_TYPE) & is_3R_TYPE;
    wire signed is_OR_TYPE = (_3R_TYPE_low == OR_TYPE) & is_3R_TYPE;
    wire signed is_XOR_TYPE = (_3R_TYPE_low == XOR_TYPE) & is_3R_TYPE;
    wire signed is_SLL_TYPE = (_3R_TYPE_low == SLL_TYPE) & is_3R_TYPE;
    wire signed is_SRL_TYPE = (_3R_TYPE_low == SRL_TYPE) & is_3R_TYPE;
    wire signed is_SRA_TYPE = (_3R_TYPE_low == SRA_TYPE) & is_3R_TYPE;
    wire signed is_MUL_TYPE = (_3R_TYPE_low == MUL_TYPE) & is_3R_TYPE;
    wire signed is_MULH_TYPE = (_3R_TYPE_low == MULH_TYPE) & is_3R_TYPE;
    wire signed is_MULHU_TYPE = (_3R_TYPE_low == MULHU_TYPE) & is_3R_TYPE;
    wire signed is_DIV_TYPE = (_3R_TYPE_low == DIV_TYPE) & is_3R_TYPE;
    wire signed is_MOD_TYPE = (_3R_TYPE_low == MOD_TYPE) & is_3R_TYPE;
    wire signed is_DIVU_TYPE = (_3R_TYPE_low == DIVU_TYPE) & is_3R_TYPE;
    wire signed is_MODU_TYPE = (_3R_TYPE_low == MODU_TYPE) & is_3R_TYPE;
    //BRK SYSCALL
    wire signed is_BRK_TYPE = (_3R_TYPE_low == BREAK_TYPE) & is_3R_TYPE;
    wire signed is_SYSCALL_TYPE = (_3R_TYPE_low ==SYSCALL_TYPE)& is_3R_TYPE;
    // _2RI8_TYPE_low
    wire [6:0] _2RI8_TYPE_low = instr[21:15];
    wire signed is_SLLI_TYPE = (_2RI8_TYPE_low == SLLI_TYPE) & is_2RI8_TYPE;
    wire signed is_SRLI_TYPE = (_2RI8_TYPE_low == SRLI_TYPE) & is_2RI8_TYPE;
    wire signed is_SRAI_TYPE = (_2RI8_TYPE_low == SRAI_TYPE) & is_2RI8_TYPE;

    // _2RI12_TYPE_1_low
    wire [2:0] _2RI12_TYPE_1_low = instr[24:22];
    wire signed is_SLTI_TYPE = (_2RI12_TYPE_1_low == SLTI_TYPE) & is_2RI12_TYPE_1;
    wire signed is_SLTUI_TYPE = (_2RI12_TYPE_1_low == SLTUI_TYPE) & is_2RI12_TYPE_1;

    wire signed is_ADDI_TYPE = (_2RI12_TYPE_1_low == ADDI_TYPE) & is_2RI12_TYPE_1;

    wire signed is_ANDI_TYPE = (_2RI12_TYPE_1_low == ANDI_TYPE) & is_2RI12_TYPE_1;
    wire signed is_ORI_TYPE = (_2RI12_TYPE_1_low == ORI_TYPE) & is_2RI12_TYPE_1;
    wire signed is_XORI_TYPE = (_2RI12_TYPE_1_low == XORI_TYPE) & is_2RI12_TYPE_1;

    // UTYPR_low
    wire [2:0] UTYPR_low = instr[27:25];
    wire signed is_LUI_TYPE = (UTYPR_low == LUI_TYPE) & is_U_TYPE;
    wire signed is_PCADDU12I_TYPE = (UTYPR_low == PCADDU12I_TYPE) & is_U_TYPE;

    // _2RI14_TYPE_low
    wire _2RI14_TYPE_low = instr[24];
    wire is_LL_TYPE = (_2RI14_TYPE_low == LL_TYPE) & is_2RI14_TYPE;
    wire is_SC_TYPE = (_2RI14_TYPE_low == SC_TYPE) & is_2RI14_TYPE;

    // _2RI12_TYPE_1_low
    wire [3:0] _2RI12_TYPE_2_low = instr[25:22];
    wire signed is_LD_B_TYPE = (_2RI12_TYPE_2_low == LD_B_TYPE) & is_2RI12_TYPE_2;
    wire signed is_LD_H_TYPE = (_2RI12_TYPE_2_low == LD_H_TYPE) & is_2RI12_TYPE_2;
    wire signed is_LD_W_TYPE = (_2RI12_TYPE_2_low == LD_W_TYPE) & is_2RI12_TYPE_2;
    wire signed is_ST_B_TYPE = (_2RI12_TYPE_2_low == ST_B_TYPE) & is_2RI12_TYPE_2;
    wire signed is_ST_H_TYPE = (_2RI12_TYPE_2_low == ST_H_TYPE) & is_2RI12_TYPE_2;
    wire signed is_ST_W_TYPE = (_2RI12_TYPE_2_low == ST_W_TYPE) & is_2RI12_TYPE_2;
    wire signed is_LD_BU_TYPE = (_2RI12_TYPE_2_low == LD_BU_TYPE) & is_2RI12_TYPE_2;
    wire signed is_LD_HU_TYPE = (_2RI12_TYPE_2_low == LD_HU_TYPE) & is_2RI12_TYPE_2;

    // BRANCH
    wire [3:0] BRANCH_TYPE_low = instr[29:26];
    wire signed is_JIRL_TYPE = (BRANCH_TYPE_low == JIRL_TYPE) & is_BRANCH_TYPE;
    wire signed is_B_TYPE = (BRANCH_TYPE_low == B_TYPE) & is_BRANCH_TYPE;
    wire signed is_BL_TYPE = (BRANCH_TYPE_low == BL_TYPE) & is_BRANCH_TYPE;
    wire signed is_BEQ_TYPE = (BRANCH_TYPE_low == BEQ_TYPE) & is_BRANCH_TYPE;
    wire signed is_BNE_TYPE = (BRANCH_TYPE_low == BNE_TYPE) & is_BRANCH_TYPE;
    wire signed is_BLT_TYPE = (BRANCH_TYPE_low == BLT_TYPE) & is_BRANCH_TYPE;
    wire signed is_BGE_TYPE = (BRANCH_TYPE_low == BGE_TYPE) & is_BRANCH_TYPE;
    wire signed is_BLTU_TYPE = (BRANCH_TYPE_low == BLTU_TYPE) & is_BRANCH_TYPE;
    wire signed is_BGEU_TYPE = (BRANCH_TYPE_low == BGEU_TYPE) & is_BRANCH_TYPE;

    // CSR
    wire [4:0] CSR_TYPE_low = instr[9:5];
    wire signed is_CSRRD_TYPE   = (CSR_TYPE_low==CSRRD_TYPE)&is_CSR_TYPE;
    wire signed is_CSRWR_TYPE   = (CSR_TYPE_low==CSRWR_TYPE)&is_CSR_TYPE;
    wire signed is_CSRXCHG_TYPE = (~is_CSRRD_TYPE)&(~is_CSRWR_TYPE)&is_CSR_TYPE;

    // TLB
    wire signed is_TLB_TYPEM = (instr[19:15]==TLB_TYPEM)&is_TLB_TYPEH;
    wire [4:0] TLB_TYPEL_low = instr[14:10];
    wire signed is_TLBSRCH_TYPE = (TLB_TYPEL_low==TLBSRCH_TYPE)&is_TLB_TYPEM;
    wire signed is_TLBRD_TYPE =  (TLB_TYPEL_low==TLBRD_TYPE)&is_TLB_TYPEM;
    wire signed is_TLBWR_TYPE = (TLB_TYPEL_low==TLBWR_TYPE)&is_TLB_TYPEM;
    wire signed is_TLBFILL_TYPE = (TLB_TYPEL_low==TLBFILL_TYPE)&is_TLB_TYPEM;
    wire signed is_ERTN_TYPE = (TLB_TYPEL_low==ERTN_TYPE)&is_TLB_TYPEM;
    wire signed is_IDLE_TYPEM = (instr[19:15]==IDLE_TYPEM)&is_TLB_TYPEH;
    wire signed is_TLBINV_TYPEM = (instr[19:15]==TLB_INV_TYPEM)&is_TLB_TYPEH;



    /*
    这里是二级译码部分
*/

    wire signed is_reg_inst = is_ADD_TYPE | is_SUB_TYPE | is_SLT_TYPE |
        is_SLTU_TYPE | is_NOR_TYPE | is_AND_TYPE |
        is_OR_TYPE | is_XOR_TYPE | is_SLL_TYPE | is_SRL_TYPE | is_SRA_TYPE |
        is_MUL_TYPE | is_MULH_TYPE | is_MULHU_TYPE | is_DIV_TYPE | is_MOD_TYPE |
        is_DIVU_TYPE | is_MODU_TYPE;
    wire signed is_shamt_inst = is_SLLI_TYPE | is_SRLI_TYPE | is_SRAI_TYPE;
    wire signed is_regimm_inst = is_SLTI_TYPE | is_SLTUI_TYPE | is_ADDI_TYPE | is_ANDI_TYPE | is_ORI_TYPE
        | is_XORI_TYPE;
    //wire a = 1'b1;
    wire signed is_u_inst = is_LUI_TYPE | is_PCADDU12I_TYPE;
    wire signed is_load_inst = is_LD_B_TYPE | is_LD_H_TYPE | is_LD_W_TYPE | is_LD_BU_TYPE | is_LD_HU_TYPE;
    wire signed is_store_inst = is_ST_B_TYPE | is_ST_H_TYPE | is_ST_W_TYPE;
    wire signed is_b_inst = is_B_TYPE | is_BL_TYPE;
    wire signed is_branch_inst = is_BLT_TYPE | is_BGE_TYPE | is_BLTU_TYPE | is_BGEU_TYPE | is_BEQ_TYPE | is_BNE_TYPE;
    wire signed is_j_inst = is_JIRL_TYPE;
    
    /*
        这里是控制信号的生成

    */






    always_comb begin
        if (is_LD_B_TYPE | is_LD_BU_TYPE | is_ST_B_TYPE) begin
            size_mem = 0;
        end else if (is_LD_H_TYPE | is_LD_HU_TYPE | is_ST_H_TYPE) begin
            size_mem = 1;
        end else if (is_LD_W_TYPE | is_ST_W_TYPE) begin
            size_mem = 2;
        end else begin
            size_mem = 0;
        end
    end

    assign is_unsign_load = is_LD_BU_TYPE | is_LD_HU_TYPE | is_CSR_TYPE;

    // assign inst_ram_en = 1;
    // assign inst_ram_wen = 0;

    assign branchPcFromJ = is_JIRL_TYPE;
    // assign is_compare = is_BEQ_TYPE | is_BNE_TYPE | is_BLT_TYPE | is_BLTU_TYPE | is_BGE_TYPE | is_BGEU_TYPE;
    assign is_compare = is_branch_inst;


    //!!!!!!!!!!!!!!!!!!!!!! This control have problem !!!!!!!!!!!!!!!!!!!!!!!!!!!
    // (is_PC_ADD4 & PC_ADD4) is error because is_PC_ADD4 will eq-extend

    // unsignBranchCmp is used for branch such as bgeu/bltu
    // is_bl_type is used for regfile for bl and jirl 


    // ----------- pcsel-------------

    wire signed is_PC_ADD4 = is_reg_inst | is_shamt_inst | is_regimm_inst | is_u_inst | is_load_inst | is_store_inst;

    // beq/blt ~eq 等价于 eq==0
    assign unsignBranchCmp = is_BLTU_TYPE | is_BGEU_TYPE;
    wire signed is_PC_BRANCH = (is_BEQ_TYPE & eq) | (is_BNE_TYPE & (~eq)) | (is_BLT_TYPE & lt)
        | (is_BLTU_TYPE & lt) | (is_BGE_TYPE & ~lt) | (is_BGEU_TYPE & ~lt) | is_JIRL_TYPE | is_B_TYPE | is_BL_TYPE;

    // this sentence can be optimized by using system verilog ? I forget

    // assign pcsel = PcSel'((is_PC_ADD4 & wire'(PC_ADD4)) | (is_PC_BRANCH & wire'(PC_BRANCH)));
    // assign pcsel = (is_PC_ADD4 & PC_ADD4) | (is_PC_BRANCH&PC_BRANCH);
    assign pcsel = (is_PC_ADD4 & PC_ADD4) | (is_PC_BRANCH & PC_BRANCH);

    // ------------itype-----------------

    wire signed is_2RI16_inst;
    wire signed is_I26_inst;
    assign is_2RI16_inst = is_j_inst | is_branch_inst;
    assign is_I26_inst = is_b_inst;


    // I21/I14 don't make
    assign itype = Itype'(3'(is_shamt_inst) & I8
        | ((3'(is_load_inst) | 3'(is_store_inst) | 3'(is_regimm_inst))& (I12))
        | (3'(is_u_inst) & I20)
        | (3'(is_2RI16_inst) & I16)
        | (3'(is_b_inst) & I26));


    // -----------regWriteEn--------------
    // wire signed is_LOAD_TYPE = is_LD_B_TYPE  | is_LD_H_TYPE | is_LD_W_TYPE | is_LD_BU_TYPE | is_LD_HU_TYPE;
    assign regWriteEn = is_regimm_inst | is_reg_inst |
        is_shamt_inst |
        is_load_inst | is_BL_TYPE |
        is_JIRL_TYPE |
        is_u_inst | is_CSR_TYPE;


    // -----------memWriteEn--------------
    // wire signed is_STORE_TYPE = is_ST_B_TYPE | is_ST_H_TYPE | is_ST_W_TYPE;
    assign memWriteEn = is_store_inst;

    // -----------memRead-----------------

    assign memRead = is_load_inst;

    // -----------alusel1------------------
    wire signed is_ALU_SEL_RJ = is_reg_inst | is_shamt_inst | is_regimm_inst | is_load_inst | is_store_inst;
    wire signed is_ALU_SEL_PC = is_PCADDU12I_TYPE | is_BL_TYPE | is_JIRL_TYPE;
    assign alusel1 = (is_ALU_SEL_RJ & ALU_SEL_RJ) | (is_ALU_SEL_PC & ALU_SEL_PC);


    // -----------alusel2------------------
    wire signed is_ALU_SEL_RK = is_reg_inst;
    wire signed is_ALU_SEL_IMMOUT = is_shamt_inst | is_regimm_inst | is_u_inst | is_load_inst | is_store_inst;
    assign alusel2 = (is_ALU_SEL_RK & ALU_SEL_RK) | (is_ALU_SEL_IMMOUT & ALU_SEL_IMMOUT);

    // -----------aluctrl-------------------

    wire signed is_OTHER_ALU_ADD_TYPE = is_PCADDU12I_TYPE | is_load_inst | is_store_inst;
    assign aluctrl = ((5'(is_ADD_TYPE) | 5'(is_ADDI_TYPE) | 5'(is_OTHER_ALU_ADD_TYPE))& ALU_ADD) |
        (5'(is_SUB_TYPE) & ALU_SUB) |
        ((5'(is_SLT_TYPE) | 5'(is_SLTI_TYPE))& ALU_SLT) |
        ((5'(is_SLTU_TYPE) | 5'(is_SLTUI_TYPE))& ALU_SLTU) |
        (5'(is_NOR_TYPE) & ALU_NOR) |
        ((5'(is_AND_TYPE) | 5'(is_ANDI_TYPE))& ALU_AND) |
        ((5'(is_OR_TYPE) | 5'(is_ORI_TYPE))& ALU_OR) |
        ((5'(is_XOR_TYPE) | 5'(is_XORI_TYPE))& ALU_XOR) |
        ((5'(is_SLL_TYPE) | 5'(is_SLLI_TYPE))& ALU_SLL) |
        ((5'(is_SRL_TYPE) | 5'(is_SRLI_TYPE))& ALU_SRL) |
        ((5'(is_SRA_TYPE) | 5'(is_SRAI_TYPE))& ALU_SRA) |
        (5'(is_MUL_TYPE) & ALU_MUL) |
        (5'(is_MULH_TYPE) & ALU_MULH) |
        (5'(is_MULHU_TYPE) & ALU_MULHU) |
        (5'(is_DIV_TYPE) & ALU_DIV) |
        (5'(is_MOD_TYPE) & ALU_MOD) |
        (5'(is_DIVU_TYPE) & ALU_DIVU) |
        (5'(is_MODU_TYPE) & ALU_MODU) |
        ((5'(is_BL_TYPE) | 5'(is_JIRL_TYPE))& ALU_PCADD4) |
        (5'(is_LUI_TYPE) & ALU_LUI);

    // ----------regWriteDataSel----------------
    wire signed is_bl_type = is_BL_TYPE;
    // this is used for selecting data not enable signal (enable signal must explictly use the instruction type)
    assign regWriteDataSel =
        ((REG_WRITE_ALU & (~{2{is_load_inst}})) |
            (REG_WRITE_MEM & {2{is_load_inst}}))|(REG_WRITE_CSR&({2{is_CSR_TYPE}}));//csr read


    // ---------is_unsign_imm-------------------
    assign is_unsign_imm = is_ORI_TYPE | is_XORI_TYPE | is_ANDI_TYPE;


    //---------is bl type---------------------
    assign reglink = is_bl_type;


    // --------load_valid_diff-----------
    assign load_valid_diff = {2'b0, is_LL_TYPE, is_LD_W_TYPE, is_LD_HU_TYPE, is_LD_H_TYPE, is_LD_BU_TYPE, is_LD_B_TYPE};
    assign store_valid_diff = {4'b0, is_SC_TYPE, is_ST_W_TYPE, is_ST_H_TYPE, is_ST_B_TYPE};
//     -  {4'b0, llbit && sc_w, st_w, st_h, st_b}
// -  {2'b0, ll_w, ld_w, ld_hu, ld_h, ld_bu, ld_b}

    assign is_privil = is_TLB_TYPEM|is_CSR_TYPE;
    assign is_syscall = is_SYSCALL_TYPE;
    assign is_brk = is_BRK_TYPE;
    assign is_ine = ~(is_IDLE_TYPEM|is_b_inst|is_j_inst|is_branch_inst|regWriteEn|memWriteEn|tlb_wen|tlb_fen|tlb_sen|tlb_ren|csr_wen|is_syscall|is_brk);
    assign tlb_fen = is_TLBINV_TYPEM;//invtlb
    assign is_ertn = is_ERTN_TYPE;
    assign tlb_wen = is_TLBWR_TYPE|is_TLBFILL_TYPE;//fill and write is same
    assign tlb_sen = is_TLBSRCH_TYPE;//search
    assign tlb_ren = is_TLBRD_TYPE;
    assign csr_wen = is_CSRWR_TYPE|is_CSRXCHG_TYPE;//writeen
    assign csr_ren = is_CSR_TYPE;
    assign is_csrMusk = is_CSRXCHG_TYPE;//csrxchg
endmodule


`include "cpu.svh"


import cpuDefine::*;
module Control (
    input Instr instr,
    input logic zero,
    input logic lt,
    output PcSel pcsel,
    output Itype itype,
    output logic regWriteEn,
    output logic memWriteEn,
    output logic memRead,
    output AluSel1 alusel1,
    output AluSel2 alusel2,
    output AluCtrl aluctrl,
    output RegWriteDataSel regWriteDataSel,
    output logic unsignBranchCmp,
    output logic reglink,
    // output logic inst_ram_en,
    // output logic inst_ram_wen,
    output logic signed is_unsign_imm,
    output logic branchPcFromJ,
    output logic signed is_compare,
    output logic [1:0] size_mem,
    output logic is_unsign_load
);

    always_comb begin
        if (is_LD_B_TYPE || is_LD_BU_TYPE || is_ST_B_TYPE) begin
            size_mem = 0;
        end else if (is_LD_H_TYPE || is_LD_HU_TYPE || is_ST_H_TYPE) begin
            size_mem = 1;
        end else if (is_LD_W_TYPE || is_ST_W_TYPE) begin
            size_mem = 2;
        end else begin
            size_mem = 0;
        end
    end

    assign is_unsign_load = is_LD_BU_TYPE || is_LD_HU_TYPE;

    // assign inst_ram_en = 1;
    // assign inst_ram_wen = 0;

    assign branchPcFromJ = is_JIRL_TYPE;
    assign is_compare = is_BEQ_TYPE || is_BNE_TYPE || is_BLT_TYPE || is_BLTU_TYPE || is_BGE_TYPE || is_BGEU_TYPE;


    //!!!!!!!!!!!!!!!!!!!!!! This control have problem !!!!!!!!!!!!!!!!!!!!!!!!!!!
    // (is_PC_ADD4 & PC_ADD4) is error because is_PC_ADD4 will zero-extend

    // unsignBranchCmp is used for branch such as bgeu/bltu
    // is_bl_type is used for regfile for bl and jirl 



    // ----------- pcsel------------- 

    logic signed is_PC_ADD4 = is_3R_TYPE | is_2RI8_TYPE | is_2RI12_TYPE_1 | is_U_TYPE | is_2RI12_TYPE_2 ;
    // beq/blt
    assign unsignBranchCmp = is_BLTU_TYPE | is_BGEU_TYPE;
    logic signed is_PC_BRANCH = (is_BEQ_TYPE & zero) | (is_BNE_TYPE & ~zero) | (is_BLT_TYPE & lt) | (is_BLTU_TYPE & lt) | (is_BGE_TYPE & ~lt) | (is_BGEU_TYPE & ~lt) | is_JIRL_TYPE | is_B_TYPE | is_BL_TYPE;

    // this sentence can be optimized by using system verilog ? I forget

    assign pcsel = (is_PC_ADD4 & PC_ADD4) | (is_PC_BRANCH & PC_BRANCH);

    // ------------itype-----------------

    logic signed is_2RI16_TYPE;
    logic signed is_I26_TYPE;
    assign is_2RI16_TYPE = is_JIRL_TYPE | is_BEQ_TYPE | is_BNE_TYPE | is_BLT_TYPE | is_BGE_TYPE | is_BLTU_TYPE | is_BGEU_TYPE;
    assign is_I26_TYPE = is_B_TYPE | is_BL_TYPE;

    // I21 don't make
    assign itype = (3'(is_2RI8_TYPE) & I8) | ((3'(is_2RI12_TYPE_2) | 3'(is_2RI12_TYPE_1))& I12) | (3'(is_U_TYPE) & I20)| (3'(is_2RI14_TYPE) & I14) | (3'(is_2RI16_TYPE) & I16) | (3'(is_I26_TYPE) & I26);


    // -----------regWriteEn--------------
    logic signed is_LOAD_TYPE = is_LD_B_TYPE  | is_LD_H_TYPE | is_LD_W_TYPE | is_LD_BU_TYPE | is_LD_HU_TYPE;
    assign regWriteEn = is_3R_TYPE | is_2RI8_TYPE | is_2RI12_TYPE_1 | is_LOAD_TYPE | is_BL_TYPE | is_JIRL_TYPE | is_U_TYPE;

    // -----------memWriteEn--------------
    logic signed is_STORE_TYPE = is_ST_B_TYPE | is_ST_H_TYPE | is_ST_W_TYPE;
    assign memWriteEn = is_STORE_TYPE;

    // -----------memRead-----------------

    assign memRead = is_LOAD_TYPE;

    // -----------alusel1------------------
    logic signed is_ALU_SEL_RJ = is_3R_TYPE | is_2RI8_TYPE | is_2RI12_TYPE_1 | is_2RI12_TYPE_2 ;
    logic signed is_ALU_SEL_PC = is_PCADDU12I_TYPE | is_BL_TYPE | is_JIRL_TYPE;
    assign alusel1 = (is_ALU_SEL_RJ & ALU_SEL_RJ) | (is_ALU_SEL_PC & ALU_SEL_PC);


    // -----------alusel2------------------
    logic signed is_ALU_SEL_RK = is_3R_TYPE;
    logic signed is_ALU_SEL_IMMOUT = is_2RI8_TYPE | is_2RI12_TYPE_1 | is_U_TYPE | is_2RI12_TYPE_2;
    assign alusel2 = (is_ALU_SEL_RK & ALU_SEL_RK) | (is_ALU_SEL_IMMOUT & ALU_SEL_IMMOUT);

    // -----------aluctrl-------------------

    logic signed is_OTHER_ALU_ADD_TYPE = is_PCADDU12I_TYPE | is_LOAD_TYPE | is_STORE_TYPE ;
    assign aluctrl =    ((5'(is_ADD_TYPE )| 5'(is_ADDI_TYPE )| 5'(is_OTHER_ALU_ADD_TYPE) )& ALU_ADD) | 
                    (5'(is_SUB_TYPE  )& ALU_SUB) | 
                    ((5'(is_SLT_TYPE )| 5'(is_SLTI_TYPE) )& ALU_SLT) | 
                    ((5'(is_SLTU_TYPE )| 5'(is_SLTUI_TYPE)  )& ALU_SLTU) | 
                    (5'(is_NOR_TYPE  )& ALU_NOR) | 
                    ((5'(is_AND_TYPE )| 5'(is_ANDI_TYPE) )& ALU_AND) | 
                    ((5'(is_OR_TYPE )| 5'(is_ORI_TYPE) )& ALU_OR) | 
                    ((5'(is_XOR_TYPE )| 5'(is_XORI_TYPE) )& ALU_XOR) | 
                    ((5'(is_SLL_TYPE )| 5'(is_SLLI_TYPE) )& ALU_SLL) | 
                    ((5'(is_SRL_TYPE )| 5'(is_SRLI_TYPE) )& ALU_SRL) | 
                    ((5'(is_SRA_TYPE )| 5'(is_SRAI_TYPE) )& ALU_SRA) | 
                    (5'(is_MUL_TYPE  )& ALU_MUL) | 
                    (5'(is_MULH_TYPE  )& ALU_MULH) | 
                    (5'(is_MULHU_TYPE  )& ALU_MULHU) | 
                    (5'(is_DIV_TYPE  )& ALU_DIV) | 
                    (5'(is_MOD_TYPE   )& ALU_MOD) | 
                    (5'(is_DIVU_TYPE  )& ALU_DIVU) | 
                    (5'(is_MODU_TYPE )& ALU_MODU) |
                    ((5'(is_BL_TYPE )| 5'(is_JIRL_TYPE) )& ALU_PCADD4) |
                    (5'(is_LUI_TYPE )& ALU_LUI);

    // ----------regWriteDataSel----------------
    logic signed is_bl_type = is_BL_TYPE;
    // this is used for selecting data not enable signal (enable signal must explictly use the instruction type)
    assign regWriteDataSel = 
                         (REG_WRITE_ALU & (~is_LOAD_TYPE)) | 
                         (REG_WRITE_MEM  & (is_LOAD_TYPE));



    // ---------is_unsign_imm-------------------
    assign is_unsign_imm = is_ORI_TYPE | is_XORI_TYPE | is_ANDI_TYPE;



    //---------is bl type---------------------
    assign reglink = is_bl_type;






    // --------------    instruction decoder    --------------------

    // please look for the encode table in our github repository

    logic signed is_3R_TYPE = (instr[31:22] == _3R_TYPE);
    logic signed is_2RI8_TYPE = (instr[31:22] == _2RI8_TYPE);
    logic signed is_2RI12_TYPE_1 = (instr[31:25] == _2RI12_TYPE_1);
    logic signed is_U_TYPE = (instr[31:28] == U_TYPE);
    logic signed is_2RI14_TYPE = (instr[31:25] == _2RI14_TYPE);
    logic signed is_2RI12_TYPE_2 = (instr[31:26] == _2RI12_TYPE_2);
    logic signed is_BRANCH_TYPE = (instr[31:30] == BRANCH_TYPE);
    // logic signed is_1RI21_TYPE = (instr[31:27] == 1RI21_TYPE);
    // logic signed is_I26_TYPE = (instr[31:27] == I26_TYPE);
    // logic signed is_2RI16_TYPE_1 = ((instr[31:27] == 2RI16_TYPE_1));
    // logic signed is_2RI16_TYPE_2 = ((instr[31:28] == 2RI16_TYPE_2));

    // _3R_TYPE_low
    logic [6:0] _3R_TYPE_low = instr[21:15];
    logic signed is_ADD_TYPE = (_3R_TYPE_low == ADD_TYPE) & is_3R_TYPE;
    logic signed is_SUB_TYPE = (_3R_TYPE_low == SUB_TYPE) & is_3R_TYPE;
    logic signed is_SLT_TYPE = (_3R_TYPE_low == SLT_TYPE) & is_3R_TYPE;
    logic signed is_SLTU_TYPE = (_3R_TYPE_low == SLTU_TYPE) & is_3R_TYPE;
    logic signed is_NOR_TYPE = (_3R_TYPE_low == NOR_TYPE) & is_3R_TYPE;
    logic signed is_AND_TYPE = (_3R_TYPE_low == AND_TYPE) & is_3R_TYPE;
    logic signed is_OR_TYPE = (_3R_TYPE_low == OR_TYPE) & is_3R_TYPE;
    logic signed is_XOR_TYPE = (_3R_TYPE_low == XOR_TYPE) & is_3R_TYPE;
    logic signed is_SLL_TYPE = (_3R_TYPE_low == SLL_TYPE) & is_3R_TYPE;
    logic signed is_SRL_TYPE = (_3R_TYPE_low == SRL_TYPE) & is_3R_TYPE;
    logic signed is_SRA_TYPE = (_3R_TYPE_low == SRA_TYPE) & is_3R_TYPE;
    logic signed is_MUL_TYPE = (_3R_TYPE_low == MUL_TYPE) & is_3R_TYPE;
    logic signed is_MULH_TYPE = (_3R_TYPE_low == MULH_TYPE) & is_3R_TYPE;
    logic signed is_MULHU_TYPE = (_3R_TYPE_low == MULHU_TYPE) & is_3R_TYPE;
    logic signed is_DIV_TYPE = (_3R_TYPE_low == DIV_TYPE) & is_3R_TYPE;
    logic signed is_MOD_TYPE = (_3R_TYPE_low == MOD_TYPE) & is_3R_TYPE;
    logic signed is_DIVU_TYPE = (_3R_TYPE_low == DIVU_TYPE) & is_3R_TYPE;
    logic signed is_MODU_TYPE = (_3R_TYPE_low == MODU_TYPE) & is_3R_TYPE;

    // _2RI8_TYPE_low
    logic [6:0] _2RI8_TYPE_low = instr[21:15];
    logic signed is_SLLI_TYPE = (_2RI8_TYPE_low == SLLI_TYPE) & is_2RI8_TYPE;
    logic signed is_SRLI_TYPE = (_2RI8_TYPE_low == SRLI_TYPE) & is_2RI8_TYPE;
    logic signed is_SRAI_TYPE = (_2RI8_TYPE_low == SRAI_TYPE) & is_2RI8_TYPE;

    // _2RI12_TYPE_1_low
    logic [2:0] _2RI12_TYPE_1_low = instr[24:22];
    logic signed is_SLTI_TYPE = (_2RI12_TYPE_1_low == SLTI_TYPE) & is_2RI12_TYPE_1;
    logic signed is_SLTUI_TYPE = (_2RI12_TYPE_1_low == SLTUI_TYPE) & is_2RI12_TYPE_1;
    logic signed is_ADDI_TYPE = (_2RI12_TYPE_1_low == ADDI_TYPE) & is_2RI12_TYPE_1;
    logic signed is_ANDI_TYPE = (_2RI12_TYPE_1_low == ANDI_TYPE) & is_2RI12_TYPE_1;
    logic signed is_ORI_TYPE = (_2RI12_TYPE_1_low == ORI_TYPE) & is_2RI12_TYPE_1;
    logic signed is_XORI_TYPE = (_2RI12_TYPE_1_low == XORI_TYPE) & is_2RI12_TYPE_1;

    // UTYPR_low
    logic [2:0] UTYPR_low = instr[27:25];
    logic signed is_LUI_TYPE = (UTYPR_low == LUI_TYPE) & is_U_TYPE;
    logic signed is_PCADDU12I_TYPE = (UTYPR_low == PCADDU12I_TYPE) & is_U_TYPE;

    // _2RI14_TYPE_low
    logic _2RI14_TYPE_low = instr[24];
    logic is_LL_TYPE = (_2RI14_TYPE_low == LL_TYPE) & is_2RI14_TYPE;
    logic is_SC_TYPE = (_2RI14_TYPE_low == SC_TYPE) & is_2RI14_TYPE;

    // _2RI12_TYPE_1_low
    logic [3:0] _2RI12_TYPE_2_low = instr[25:22];
    logic is_LD_B_TYPE = (_2RI12_TYPE_2_low == LD_B_TYPE) & is_2RI12_TYPE_2;
    logic is_LD_H_TYPE = (_2RI12_TYPE_2_low == LD_H_TYPE) & is_2RI12_TYPE_2;
    logic is_LD_W_TYPE = (_2RI12_TYPE_2_low == LD_W_TYPE) & is_2RI12_TYPE_2;
    logic is_ST_B_TYPE = (_2RI12_TYPE_2_low == ST_B_TYPE) & is_2RI12_TYPE_2;
    logic is_ST_H_TYPE = (_2RI12_TYPE_2_low == ST_H_TYPE) & is_2RI12_TYPE_2;
    logic is_ST_W_TYPE = (_2RI12_TYPE_2_low == ST_W_TYPE) & is_2RI12_TYPE_2;
    logic is_LD_BU_TYPE = (_2RI12_TYPE_2_low == LD_BU_TYPE) & is_2RI12_TYPE_2;
    logic is_LD_HU_TYPE = (_2RI12_TYPE_2_low == LD_HU_TYPE) & is_2RI12_TYPE_2;

    // BRANCH
    logic [3:0] BRANCH_TYPE_low = instr[31:28];
    logic signed is_JIRL_TYPE = (BRANCH_TYPE_low == JIRL_TYPE) & is_BRANCH_TYPE;
    logic signed is_B_TYPE = (BRANCH_TYPE_low == B_TYPE) & is_BRANCH_TYPE;
    logic signed is_BL_TYPE = (BRANCH_TYPE_low == BL_TYPE) & is_BRANCH_TYPE;
    logic signed is_BEQ_TYPE = (BRANCH_TYPE_low == BEQ_TYPE) & is_BRANCH_TYPE;
    logic signed is_BNE_TYPE = (BRANCH_TYPE_low == BNE_TYPE) & is_BRANCH_TYPE;
    logic signed is_BLT_TYPE = (BRANCH_TYPE_low == BLT_TYPE) & is_BRANCH_TYPE;
    logic signed is_BGE_TYPE = (BRANCH_TYPE_low == BGE_TYPE) & is_BRANCH_TYPE;
    logic signed is_BLTU_TYPE = (BRANCH_TYPE_low == BLTU_TYPE) & is_BRANCH_TYPE;
    logic signed is_BGEU_TYPE = (BRANCH_TYPE_low == BGEU_TYPE) & is_BRANCH_TYPE;



endmodule


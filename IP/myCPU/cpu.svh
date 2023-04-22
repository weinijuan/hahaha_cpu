`ifndef _CPU_VH
`define _CPU_VH

package cpuDefine;
    typedef logic [4:0] Gr;  // reg type 
    typedef logic [31:0] DType;  // normal 32 bit data type
    parameter int rfNum = 32;
    typedef logic [31:0] Instr;
    typedef logic [31:0] Addr;
    parameter int instrNum = 1024;
    parameter int instrLen = 32;
    parameter int addrLen = 32;
    typedef enum logic [2:0] {
        I8,
        I12,
        I14,
        I16,
        I20,
        I21,
        I26
    } Itype;
    typedef union packed {
        logic[2:0] itype_bits;
        Itype itype;
    } ItypeBit;
    typedef enum logic [4:0] {
        ALU_ADD,
        ALU_SUB,
        ALU_SLT,
        ALU_SLTU,
        ALU_NOR,
        ALU_AND,
        ALU_OR,
        ALU_XOR,
        ALU_SLL,
        ALU_SRL,
        ALU_SRA,
        ALU_MUL,
        ALU_MULH,
        ALU_MULHU,
        ALU_DIV,
        ALU_MOD,
        ALU_DIVU,
        ALU_MODU,
        ALU_LUI,
        ALU_PCADD4
    } AluCtrl;

    typedef union packed {
        logic[4:0] aluctrl_bit;
        AluCtrl aluctrl;
    } AluCtrlBit;

    typedef enum logic {
        ALU_SEL_RJ,
        ALU_SEL_PC
    } AluSel1;

    typedef union packed {
        logic alusel1_bit;
        AluSel1 alusel1;
    } AluSel1Bit;

    typedef enum logic {
        ALU_SEL_RK,
        ALU_SEL_IMMOUT
    } AluSel2;

    typedef union packed {
        logic alusel2_bit;
        AluSel2 alusel2;
    } AluSel2Bit;

    // attention: enum + data type, the data type is modified for enum element not the number of element
    typedef enum logic {
        PC_ADD4,
        PC_BRANCH
    } PcSel;

    typedef union packed{
        logic pcsel_bits;
        PcSel pcsel;
    } PcSelBit;
    // typedef enum logic[1:0] { REG_WRITE_IMM, REG_WRITE_ALU,REG_WRITE_MEM, REG_WRITE_PC } RegWriteDataSel;
    // lui: immout write into reg directly -> alu.add(immout,0) get aluout to reg so don't need REG_WRITE_IMM
    // jirl and bl : pc + 4 can be computed by alu so don't need REG_WRITE_PC
    typedef enum logic {
        REG_WRITE_ALU,
        REG_WRITE_MEM
    } RegWriteDataSel;

    typedef union packed{
        logic regWriteDataSel_bit;
        RegWriteDataSel regWriteDataSel;
    } RegWriteDataSelBit;


    typedef struct packed {
        DType pc;
        Instr instr;
    } ID_DATA;

    typedef struct packed {
        AluSel1 alusel1;
        AluSel2 alusel2;
        AluCtrl aluctrl;
    } EX_CONTROL_DATA;

    typedef struct packed {
        logic memWriteEn;
        logic memRead;
        logic[1:0] size_mem;
        logic is_unsign_load;
    } MEM_CONTROL_DATA;

    typedef struct packed {
        logic regWriteEn;
        RegWriteDataSel regWriteDataSel;
    } WB_CONTROL_DATA;

    typedef struct packed {
        EX_CONTROL_DATA ex_control_data;
        MEM_CONTROL_DATA mem_control_data;
        WB_CONTROL_DATA wb_control_data;
        DType rj, rk, rd;
        Gr rjNo, rkNo, rdNo;
        DType immout;
        DType pc;
    } EX_DATA;

    typedef struct packed {
        MEM_CONTROL_DATA mem_control_data;
        WB_CONTROL_DATA wb_control_data;
        logic [3:0] wstrb_mem; 
        Gr rdNo;
        DType aluout;
        DType pc;
    } MEM_DATA;

    typedef struct packed {
        WB_CONTROL_DATA wb_control_data;
        Gr rdNo;
        DType aluout;
        DType readData;
        DType pc;
        logic[3:0] wstrb;
    } WB_DATA;

    // nop define


















    typedef struct packed {
        logic aclk;
        logic aresetn;
    } DivNeed;

    // please look for the encode table in our github repository

    parameter logic [9:0] _3R_TYPE = 10'b0000000000;
    parameter logic [9:0] _2RI8_TYPE = 10'b0000000001;
    parameter logic [6:0] _2RI12_TYPE_1 = 7'b0000001;
    parameter logic [3:0] U_TYPE = 4'b0001;
    parameter logic [6:0] _2RI14_TYPE = 7'b0010000;
    parameter logic [5:0] _2RI12_TYPE_2 = 6'b001010;
    parameter logic [1:0] BRANCH_TYPE = 2'b01;


    // low bits of 3R opcode 
    parameter logic [6:0] ADD_TYPE = 7'b0100000;
    parameter logic [6:0] SUB_TYPE = 7'b0100010;
    parameter logic [6:0] SLT_TYPE = 7'b0100100;
    parameter logic [6:0] SLTU_TYPE = 7'b0100101;
    parameter logic [6:0] NOR_TYPE = 7'b0101000;
    parameter logic [6:0] AND_TYPE = 7'b0101001;
    parameter logic [6:0] OR_TYPE = 7'b0101010;
    parameter logic [6:0] XOR_TYPE = 7'b0101011;
    parameter logic [6:0] SLL_TYPE = 7'b0101110;
    parameter logic [6:0] SRL_TYPE = 7'b0101111;
    parameter logic [6:0] SRA_TYPE = 7'b0110000;
    parameter logic [6:0] MUL_TYPE = 7'b0111000;
    parameter logic [6:0] MULH_TYPE = 7'b0111001;
    parameter logic [6:0] MULHU_TYPE = 7'b0111010;
    parameter logic [6:0] DIV_TYPE = 7'b1000000;
    parameter logic [6:0] MOD_TYPE = 7'b1000001;
    parameter logic [6:0] DIVU_TYPE = 7'b1000010;
    parameter logic [6:0] MODU_TYPE = 7'b1000011;

    // low bits of 2RI8

    parameter logic [6:0] SLLI_TYPE = 7'b0000001;
    parameter logic [6:0] SRLI_TYPE = 7'b0001001;
    parameter logic [6:0] SRAI_TYPE = 7'b0010001;

    // low bits of 2RI12_1

    parameter logic [2:0] SLTI_TYPE = 3'b000;
    parameter logic [2:0] SLTUI_TYPE = 3'b001;
    parameter logic [2:0] ADDI_TYPE = 3'b010;
    parameter logic [2:0] ANDI_TYPE = 3'b101;
    parameter logic [2:0] ORI_TYPE = 3'b110;
    parameter logic [2:0] XORI_TYPE = 3'b111;

    // low bits of UTYPR

    parameter logic [2:0] LUI_TYPE = 3'b010;
    parameter logic [2:0] PCADDU12I_TYPE = 3'b110;

    // low bits of 2RI14 TYPE

    parameter logic LL_TYPE = 1'b0;
    parameter logic SC_TYPE = 1'b1;

    // low bits of 2RI12_2 TYPE

    parameter logic [3:0] LD_B_TYPE = 4'b0000;
    parameter logic [3:0] LD_H_TYPE = 4'b0001;
    parameter logic [3:0] LD_W_TYPE = 4'b0010;
    parameter logic [3:0] ST_B_TYPE = 4'b0100;
    parameter logic [3:0] ST_H_TYPE = 4'b0101;
    parameter logic [3:0] ST_W_TYPE = 4'b0110;
    parameter logic [3:0] LD_BU_TYPE = 4'b1000;
    parameter logic [3:0] LD_HU_TYPE = 4'b1001;


    // low bits of BRANCH TYPE 
    parameter logic [3:0] JIRL_TYPE = 4'b0011;
    parameter logic [3:0] B_TYPE = 4'b0100;
    parameter logic [3:0] BL_TYPE = 4'b0101;
    parameter logic [3:0] BEQ_TYPE = 4'b0110;
    parameter logic [3:0] BNE_TYPE = 4'b0111;
    parameter logic [3:0] BLT_TYPE = 4'b1000;
    parameter logic [3:0] BGE_TYPE = 4'b1001;
    parameter logic [3:0] BLTU_TYPE = 4'b1010;
    parameter logic [3:0] BGEU_TYPE = 4'b1011;


endpackage : cpuDefine


`endif 
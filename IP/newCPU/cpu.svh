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
    typedef enum logic [4:0] {
        ALU_ADD,
        ALU_SUB,
        ALU_SLT,
        ALU_SLTU,
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
        ALU_MODU
    } AluCtrl;

    typedef enum logic [2:0] {
        PC_ALUOUT,
        PC_LUI,
        PC_ADD4
    } PcSel;
    typedef enum logic [1:0] {
        ALU_SEL_RJ,
        ALU_SEL_PC
    } AluSel1;
    typedef enum logic [1:0] {
        ALU_SEL_RK,
        ALU_SEL_IMMOUT
    } AluSel2;
    typedef enum logic [2:0] {
        REG_WRITE_IMM,
        REG_WRITE_ALU,
        REG_WRITE_MEM,
        REG_WRITE_PC
    } RegWriteDataSel;
endpackage : cpuDefine

`endif

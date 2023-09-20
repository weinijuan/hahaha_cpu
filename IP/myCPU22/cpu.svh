`ifndef _CPU_VH
`define _CPU_VH
package cpuDefine;
    
localparam TLBNUM = 16;
localparam TLBNUMSIZE = $clog2(TLBNUM);
localparam TIMESIZE = 12;
localparam CRMD_RM = {{23'b0},{9{1'b1}}};
localparam PRMD_RM = {{29'b0},{3{1'b1}}};
localparam ECFG_RM = {19'b0,{2{1'b1}},1'b0,{10{1'b1}}}; 
localparam ESTAT_RM = {1'b0,{15{1'b1}},3'b0,{2{1'b1}},1'b0,{10{1'b1}}};
localparam ERA_RM  = {32{1'b1}};
localparam BADV_RM = {32{1'b1}};
localparam EENTRY_RM = {{26{1'b1}},6'b0};
localparam TLBIDX_RM = {1'b1,1'b0,{6{1'b1}},{(24-TLBNUMSIZE){1'b0}},{TLBNUMSIZE{1'b1}}};
localparam TLBEHI_RM = {{19{1'b1}},13'b0};
localparam TLBELO0_RM = {4'b0,{20{1'b1}},1'b0,{7{1'b1}}};
localparam TLBELO1_RM = {4'b0,{20{1'b1}},1'b0,{7{1'b1}}};
localparam ASID_RM = {8'b0,{8{1'b1}},6'b0,{10{1'b1}}};
localparam PGDL_RM = {{20{1'b1}},12'b0};
localparam PGDH_RM = {{20{1'b1}},12'b0};
localparam PGD_RM = {{20{1'b1}},12'b0};
localparam SAVE0_RM = {32{1'b1}};
localparam SAVE1_RM = {32{1'b1}};
localparam SAVE2_RM = {32{1'b1}};
localparam SAVE3_RM = {32{1'b1}};
localparam TID_RM = {32{1'b1}};
localparam TCFG_RM = {{(30-TIMESIZE){1'b0}},{(TIMESIZE+2){1'b1}}};
localparam TVAL_RM = {{(32-TIMESIZE){1'b0}},{TIMESIZE{1'b1}}};
localparam TICLR_RM = 32'b0;
localparam TLBRENTRY_RM = {{26{1'b1}},6'b0};
localparam DMW0_RM = {{3{1'b1}},1'b0,{3{1'b1}},19'b0,{3{1'b1}},2'b0,1'b1};
localparam DMW1_RM = {{3{1'b1}},1'b0,{3{1'b1}},19'b0,{3{1'b1}},2'b0,1'b1};
localparam LLBCTL_RM = {32{1'b1}};

localparam    CRMD_WM = {{23{1'b0}},{9{1'b1}}};
localparam    PRMD_WM = {{29{1'b0}},{3{1'b1}}};
localparam    EUEN_WM = {{31{1'b0}},1'b1};
 localparam   ECFG_WM = {{19{1'b0}},{2{1'b1}},{11{1'b1}}};
localparam    ESTAT_WM = {{30{1'b0}},{2{1'b1}}};
 localparam   ERA_WM = {32{1'b1}};
  localparam  BADV_WM = {32{1'b1}};
 localparam   EENTRY_WM = {{26{1'b1}},{6{1'b0}}};
 localparam   TLBIDX_WM = {1'b1,1'b0,{6{1'b1}},{24-TLBNUMSIZE{1'b0}},{TLBNUMSIZE{1'b1}}};
 localparam   TLBEHI_WM = {{19{1'b1}},{13{1'b0}}};
 localparam   TLBELO0_WM = {{4{1'b0}},{20{1'b1}},1'b0,{7{1'b1}}};
  localparam  TLBELO1_WM = {{4{1'b0}},{20{1'b1}},1'b0,{7{1'b1}}};
 localparam   ASID_WM = {{22{1'b0}},{10{1'b1}}};
 localparam   PGDL_WM = {{20{1'b1}},{12{1'b0}}};
 localparam   PGDH_WM = {{20{1'b1}},{12{1'b0}}};
 localparam   PGD_WM = {{20{1'b1}},{12{1'b0}}};
 localparam   SAVE0_WM = {32{1'b1}};
 localparam   SAVE1_WM = {32{1'b1}};
  localparam  SAVE2_WM = {32{1'b1}};
  localparam  SAVE3_WM = {32{1'b1}};
  localparam  TID_WM = {32{1'b1}};
 localparam   TCFG_WM = {{(30-TIMESIZE){1'b0}},{(TIMESIZE+2){1'b1}}};
 localparam   LLBCTL_WM = {{29{1'b0}},{2{1'b1}},1'b0};
 localparam   TLBRENTRY_WM = {{26{1'b1}},{6{1'b0}}};
  localparam  DMW0_WM = {{3{1'b1}},1'b0,{3{1'b1}},{19{1'b0}},{3{1'b1}},{2{1'b0}},1'b1}; 
 localparam   DMW1_WM = {{3{1'b1}},1'b0,{3{1'b1}},{19{1'b0}},{3{1'b1}},{2{1'b0}},1'b1};
  typedef logic[13:0] CsrAddr;
    parameter logic[13:0] CRMD = 14'h0000;
    parameter logic[13:0] PRMD = 14'h0001;
    parameter logic[13:0] EUEN = 14'h0002;
    parameter logic[13:0] ECFG = 14'h0004;
    parameter logic[13:0] ESTAT = 14'h0005;
    parameter logic[13:0] ERA = 14'h0006;
    parameter logic[13:0] BADV = 14'h0007;
    parameter logic[13:0] EENTRY = 14'h000c;
    parameter logic[13:0] TLBIDX = 14'h0010;
    parameter logic[13:0] TLBEHI = 14'h0011;
    parameter logic[13:0] TLBELO0 = 14'h0012;
    parameter logic[13:0] TLBELO1 = 14'h0013;
    parameter logic[13:0] ASID = 14'h0018;
    parameter logic[13:0] PGDL = 14'h0019;
    parameter logic[13:0] PGDH = 14'h001a;
    parameter logic[13:0] PGD = 14'h001b;
    parameter logic[13:0] CPUID = 14'h0020;
    parameter logic[13:0] SAVE0 = 14'h0030;
    parameter logic[13:0] SAVE1 = 14'h0031;
    parameter logic[13:0] SAVE2 = 14'h0032;
    parameter logic[13:0] SAVE3 = 14'h0033;
    parameter logic[13:0] TID = 14'h0040;
    parameter logic[13:0] TCFG = 14'h0041;
    parameter logic[13:0] TVAL = 14'h0042;
    parameter logic[13:0] TICLR = 14'h0044;
    parameter logic[13:0] LLBCTL = 14'h0060;
    parameter logic[13:0] TLBRENTRY = 14'h0088;
    parameter logic[13:0] CTAG = 14'h0098;
    parameter logic[13:0] DMW0 = 14'h0180; 
    parameter logic[13:0] DMW1 = 14'h0181;

    parameter[2:0] CLEAR_ALL0 = 3'b000;
    parameter[2:0] CLEAR_ALL1 = 3'b001;
    parameter[2:0] CLEAR_G1 = 3'b010;
    parameter[2:0] CLEAR_G0 = 3'b011;
    parameter[2:0] CLEAR_G0_AND_ASID = 3'b0100;
    parameter[2:0] CLEAR_G0_AND_ASID_AND_VA = 3'b0101;
    parameter[2:0] CLEAR_G1_OR_ASID_AND_VA = 3'b110;
    typedef logic [4:0] Gr;  // reg type 
    typedef logic [31:0] DType;  // normal 32 bit data type
    parameter int rfNum = 32;
    typedef logic [31:0] Instr;
    typedef logic [31:0] Addr;
    parameter int instrNum = 1024;
    parameter int instrLen = 32;
    parameter int addrLen = 32;
typedef struct packed {
    reg E;
    reg [9:0] ASID;
    reg G;
    reg [5:0] PS;
    reg [18:0] VPPN;
} CompareItem;
typedef struct packed {
    logic V;
    logic D;
    logic [1:0] MAT;
    logic [1:0] PLV;
    logic [19:0] PPN;
} PhytranItem;
typedef struct packed{
     CompareItem CI;
     PhytranItem PI0;
     PhytranItem PI1;
} TlbItem;
typedef struct packed {
  logic [31:0] badvaddr;
  logic [31:0] pc;
  logic [5:0] excode;  
  logic [8:0] exsubcode;
  logic is_exc;
  logic [9:0]asid;
}CsrMsg;//coundn't be flush
typedef struct packed {
    logic is_rdcnth;
    logic is_rdcntl;
    logic is_ertn;
    logic is_musk;
    logic csr_wen;
    logic csr_ren;
    logic [13:0]csrnum;
    Gr regnum;
    Gr regnum0;
    Gr regnum1;
}CsrCtrl;//could be flush
typedef struct packed {
    logic tlb_fen;
    logic tlb_ren;
    logic tlb_wen;
    logic tlb_sen;
    logic [1:0]cacop_code;
    logic [31:0]cache_addr;
    logic i_or_d;
    logic is_cacop;
    logic is_fetch_again;
    logic ne;
    logic [TLBNUMSIZE-1:0]ind;
    logic is_idle;
    logic is_llw;
} TlbCtrl;
parameter[5:0] INT = 6'b0000000;
parameter[5:0] PIL = 6'b000001;
parameter[5:0] PIS = 6'b000010;
parameter[5:0] PIF = 6'b000011;
parameter[5:0] PME = 6'b000100;
parameter[5:0] PPI = 6'b000111;
parameter[5:0] ADEF_ADEM = 6'b001000;
parameter[5:0] ALE = 6'b001001;
parameter[5:0] SYS = 6'b001011;
parameter[5:0] BRK = 6'b001100;
parameter[5:0] INE = 6'b001101;
parameter[5:0] IPE = 6'b001110;
parameter[5:0] FPD = 6'b001111;//
parameter[5:0] FPE = 6'b010010;//
parameter[5:0] TLBR= 6'b111111;
typedef struct packed{  
    reg [31:0] CRMD;   
    reg [31:0] PRMD;
    reg [31:0] ECFG;
    reg [31:0] EUEN;
    reg [31:0] ESTAT;
    reg [31:0] ERA;
    reg [31:0] BADV;
    reg [31:0] EENTRY;  
    reg [31:0] TLBIDX;
    reg [31:0] TLBEHI;
    reg [31:0] TLBELO0;
    reg [31:0] TLBELO1;
    reg [31:0] ASID;    
    reg [31:0] PGDL;
    reg [31:0] PGDH;
    reg [31:0] PGD;
    reg [31:0] CPUID;
    reg [31:0] SAVE0;
    reg [31:0] SAVE1;  
    reg [31:0] SAVE2;  
    reg [31:0] SAVE3;    
    reg [31:0] TID;    
    reg [31:0] TCFG;
    reg [31:0] TVAL;
    reg [31:0] TICLR;
    reg [31:0] LLBCTL;  
    reg [31:0] TLBRENTRY;   
    reg [31:0] CTAG;  
    reg [31:0] DMW0;  
    reg [31:0] DMW1;
} CSR;


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
    
    parameter ALUCTRL_STATENUM = 20;
    parameter ALUCTRL_BITS = 5;
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
    typedef enum logic{
        PC_CSR,
        PC_NORMAL
    } PcSelHigh;

    typedef union packed{
        logic pcsel_bits;
        PcSel pcsel;
    } PcSelBit;
    // typedef enum logic[1:0] { REG_WRITE_IMM, REG_WRITE_ALU,REG_WRITE_MEM, REG_WRITE_PC } RegWriteDataSel;
    // lui: immout write into reg directly -> alu.add(immout,0) get aluout to reg so don't need REG_WRITE_IMM
    // jirl and bl : pc + 4 can be computed by alu so don't need REG_WRITE_PC
    typedef enum logic[1:0] {
        REG_WRITE_ALU,
        REG_WRITE_MEM,
        REG_WRITE_CSR,
        REG_WRITE_CNT
    } RegWriteDataSel;

    typedef union packed{
        logic [1:0] regWriteDataSel_bit;
        RegWriteDataSel regWriteDataSel;
    } RegWriteDataSelBit;

    typedef struct packed {
        DType pc;
        // CsrMsg csrmsg;
    } IF_DATA;


    typedef struct packed {
        logic is_mul;
        logic is_mulh;
        logic is_mulhu;
    }Sec_AluCtrl;

    typedef struct packed {
        DType pc;
        Instr instr;
    } ID_DATA;

    typedef struct packed {
        AluSel1 alusel1;
        AluSel2 alusel2;
        AluCtrl aluctrl;
        Sec_AluCtrl is_two_circles;
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
        logic [7:0] load_valid_diff; 
        logic [7:0] store_valid_diff; 
    } WB_CONTROL_DATA;
    
    typedef struct packed {
        EX_CONTROL_DATA ex_control_data;
        MEM_CONTROL_DATA mem_control_data;
        WB_CONTROL_DATA wb_control_data;
        DType rj, rk, rd;
        Gr rjNo, rkNo, rdNo;
        DType immout;
        DType pc;
        Instr instr;
        CsrCtrl csrctrl;
        TlbCtrl tlbctrl;
        logic is_sc_type;
        logic is_ll_type;
        logic[ALUCTRL_STATENUM-1:0]aluctrl_bits;
    } EX_DATA;

    typedef struct packed {
        MEM_CONTROL_DATA mem_control_data;
        WB_CONTROL_DATA wb_control_data;
        logic [3:0] wstrb_mem; 
        Gr rdNo;
        DType aluout;
        DType pc;
        Instr instr;
        DType memaddr_virt;
        DType memaddr_phy;
        DType rd;
        DType store_data;
        CsrCtrl csrctrl;
        TlbCtrl tlbctrl;
        logic is_sc_type;
        logic is_ll_type;
        logic llbit;
    } MEM_DATA;

    typedef struct packed {
        WB_CONTROL_DATA wb_control_data;
        Gr rdNo;
        DType aluout;
        DType readData;
        DType pc;
        logic[3:0] wstrb;
        Instr instr;
        DType memaddr_virt;
        DType memaddr_phy;     
        DType rd;
        DType store_data;
        CsrCtrl csrctrl;
        TlbCtrl tlbctrl;
        logic is_sc_type;
        logic is_ll_type;
        logic llbit;
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
    parameter logic [7:0] CSR_TYPE = 8'b00000100;
    parameter logic [11:0] TLB_TYPEH = 12'b0000_0110_0100;
    parameter logic [16:0] RDCNT_TYPE = 17'b0000_0000_0000_0000_000;
    //mid bits of idle and tlbinvt
    parameter logic [4:0] TLB_TYPEM = 5'b10000;
    parameter logic [4:0] TLB_INV_TYPEM = 5'b10011;
    parameter logic [4:0] IDLE_TYPEM = 5'b10001;
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
    parameter logic [6:0] BREAK_TYPE = 7'b1010100;
    parameter logic [6:0] SYSCALL_TYPE = 7'b1010110;

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
    //low bits of TLBTYPE
    parameter logic [4:0] ERTN_TYPE = 5'b01110;
    parameter logic [4:0] TLBSRCH_TYPE = 5'b01010;
    parameter logic [4:0] TLBRD_TYPE = 5'b01011;
    parameter logic [4:0] TLBWR_TYPE = 5'b01100;
    parameter logic [4:0] TLBFILL_TYPE = 5'b01101;
    //low bits of CSRTYPE
    parameter logic [4:0] CSRRD_TYPE = 5'b00000;
    parameter logic [4:0] CSRWR_TYPE = 5'b00001;
    parameter logic [9:0] CACOP_TYEP = 10'b0000011000;
endpackage : cpuDefine


`endif 
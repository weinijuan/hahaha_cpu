package csr_tlbDefines;

localparam TLBNUM = 16;
localparam TLBNUMSIZE = $clog2(TLBNUM);
localparam TIMESIZE = 5;
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

localparam    CRMD_WM = {{23{1'b0}},{9{1'b1}}};
localparam    PRMD_WM = {{29{1'b0}},{3{1'b1}}};
localparam    EUEN_WM = {{31{1'b0}},1'b1};
 localparam   ECFG_WM = {{19{1'b0}},{2{1'b1}},1'b0,{10{1'b1}}};
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
enum logic[13:0]{//δʵ�ֵļĴ��� EUEN LLBCTL CTAG
    CRMD = 14'h0000,
    PRMD = 14'h0001,
    EUEN = 14'h0002,
    ECFG = 14'h0004,
    ESTAT = 14'h0005,
    ERA = 14'h0006,
    BADV = 14'h0007,
    EENTRY = 14'h000c,
    TLBIDX = 14'h0010,
    TLBEHI = 14'h0011,
    TLBELO0 = 14'h0012,
    TLBELO1 = 14'h0013,
    ASID = 14'h0018,
    PGDL = 14'h0019,
    PGDH = 14'h001a,
    PGD = 14'h001b,
    CPUID = 14'h0020,
    SAVE0 = 14'h0030,
    SAVE1 = 14'h0031,
    SAVE2 = 14'h0032,
    SAVE3 = 14'h0033,
    TID = 14'h0040,
    TCFG = 14'h0041,
    TVAL = 14'h0042,
    TICLR = 14'h0044,
    LLBCTL = 14'h0060,
    TLBRENTRY = 14'h0088,
    CTAG = 14'h0098,
    DMW0 = 14'h0180, 
    DMW1 = 14'h0181
}CsrAddr;
enum logic[2:0]{
    CLEAR_ALL0 = 3'b000,
    CLEAR_ALL1 = 3'b001,
    CLEAR_G1   = 3'b010,
    CLEAR_G0   = 3'b011,
    CLEAR_G0_AND_ASID = 3'b100,
    CLEAR_G0_AND_ASID_AND_VA = 3'b101,
    CLEAR_G1_OR_ASID_AND_VA = 3'b110
} FlushOp;
typedef struct packed {
    reg E;
    reg [9:0] ASID;
    reg G;
    reg [5:0] PS;
    reg [18:0] VPPN;
} CompareItem;
typedef struct packed {
    reg V;
    reg D;
    reg [1:0] MAT;
    reg [1:0] PLV;
    reg [19:0] PPN;
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
  logic is_fetch_again;
  logic [1:0]plv;
  logic da;
  logic pg;
  logic [9:0]asid;
}CsrMsg;//coundn't be flush
typedef struct packed {
    logic is_ertn;
    logic is_musk;
    logic csr_wen;
    logic csr_ren;
    logic [31:0]musk;
    logic [13:0]csrnum;
    logic [31:0]csr_writedata;
}CsrCtrl;//could be flush
typedef struct packed {
    logic tlb_fen;
    logic tlb_ren;
    logic tlb_wen;
    logic tlb_sen;
    logic [TLBNUMSIZE-1:0]ind;
    logic ne;
} TlbCtrl;
enum logic[5:0]{
  INT = 6'h00,
  PIL = 6'h01,
  PIS = 6'h02,
  PIF = 6'h03,
  PME = 6'h04,
  PPI = 6'h07,
  ADEF_ADEM = 6'h08,
  ALE = 6'h09,
  SYS = 6'h0B,
  BRK = 6'h0C,
  INE = 6'h0D,
  IPE = 6'h0E,
  FPD = 6'h0F,//
  FPE = 6'h12,//���㣬����
  TLBR = 6'h3F
} ExCode;
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

endpackage : csr_tlbDefines

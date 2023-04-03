`timescale 1ns / 1ps

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
    logic E;
    logic [9:0] ASID;
    logic G;
    logic [5:0] PS;
    logic [18:0] VPPN;
} CompareItem;
typedef struct packed {
    logic V;
    logic D;
    logic [1:0] MAT;
    logic [1:0] PLV;
    logic [19:0] PPN;
} PhytranItem;
typedef struct {
     CompareItem ci;
     PhytranItem pi0;
     PhytranItem pi1;
} TlbItem;
enum logic[7:0]{
  INTE = 8'h00,
  PIL = 8'h01,
  PIS = 8'h02,
  PIF = 8'h03,
  PME = 8'h04,
  PPI = 8'h07,
  ADEF = 8'h08,
  ADEM = 8'h08,
  ALE = 8'h09,
  SYS = 8'h0B,
  BRK = 8'h0C,
  INE = 8'h0D,
  IPE = 8'h0E,
  FPD = 8'h0F,
  FPE = 8'h12,
  TLBR = 8'h3F
} ExCode;
typedef struct {  //crmd prmd euen misc ecfg estat era badv badi 
    logic [31:0] CRMD;   //0X0->0X7
    logic [31:0] PRMD;
    logic [31:0] ECFG;
    logic [31:0] ESTAT;
    logic [31:0] ERA;
    logic [31:0] BADV;
} CSR0;
typedef struct {  //eentry
    logic [31:0] EENTRY;  //CSR1 0XC 貌似要配置，但是这个要怎么配置？
} CSR1;
typedef struct {  //tlbidx tlbehi tlbelo0 tlbelo1 
    logic [31:0] TLBIDX;
    logic [31:0] TLBEHI;
    logic [31:0] TLBELO0;
    logic [31:0] TLBELO1;
} CSR2;  //0X10->0x13
typedef struct{//asid pgdl pgdh pgd pwcl pwch stlbps rvacfg cpuid prcfg1 prcfg2 prcfg3
    logic [31:0] ASID;    //0X18->0X23
    logic [31:0] PGDL;
    logic [31:0] PGDH;
    logic [31:0] PGD;
    logic [31:0] CPUID;//处理器核编号
} CSR3;
typedef struct {
    logic [31:0] SAVE0;  //0x30+0->15 PRCFG1中获知 saven
} CSR4;
typedef struct {  //tid tcfg tval cntc ticlr
    logic [31:0] TID;    //0x40->0x44
    logic [31:0] TCFG;
    logic [31:0] TVAL;
    logic [31:0] TICLR;
} CSR5;
typedef struct {
    logic [31:0] LLBCTL;  //0X60 llbctl
} CSR6;
typedef struct{//tlbentry tlbrbadv tlbrera tlbrsave tlbrelo0 tlberlo1 tlbehi tlbrprmd merrctrrl merrinfo1 merrinfo2 merrentry merrera merrsave 
    logic [31:0] TLBENTRY;   //0x88->0x95 about exception
} CSR7;
typedef struct {  //ctag
    logic [31:0] CTAG;  //0x98
} CSR8;
typedef struct {  //dmwn
    logic [31:0] DMW0;  //0X180->0X183
    logic [31:0] DMW1;
} CSR9;

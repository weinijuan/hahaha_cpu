`timescale 1ns / 1ps
`define LOAD 2'b01
`define STORE 2'b10
`define FETCH 2'b00
/*


有个小问题，怎么判断一个异常处理完毕了？


*/
typedef struct{//crmd prmd euen misc ecfg estat era badv badi 
    logic[31:0] CRMD;//0X0->0X8
    logic[31:0] PRMD;
    logic[31:0] EUEN;
    logic[31:0] MISC;
    logic[31:0] ECFG;
    logic[31:0] ESTAT;
    logic[31:0] ERA;
    logic[31:0] BADV;
    logic[31:0] BADI;
}CSR_0;
typedef struct{//eentry
    logic[31:0] EENTRY;//CSR1 0XC
}CSR_1;
typedef struct{//tlbidx tlbehi tlbelo0 tlbelo1 
    logic[31:0] TLBIDX;
    logic[31:0] TLBEHI;
    logic[31:0] TLBELO0;
    logic[31:0] TLBELO1;
}CSR_2;//0X10->0x13
typedef struct{//asid pgdl pgdh pgd pwcl pwch stlbps rvacfg cpuid prcfg1 prcfg2 prcfg3
    logic[31:0] ASID;//0X18->0X23
    logic[31:0] PGDL;
    logic[31:0] PGDH;
    logic[31:0] PGD;
    logic[31:0] PWCL;
    logic[31:0] PWCH;
    logic[31:0] STLBPS;
    logic[31:0] RVACFG;
    logic[31:0] CPUID;
    logic[31:0] PRCFG1;
    logic[31:0] PRCFG2;
    logic[31:0] PRCFG3;
}CSR_3;
typedef struct{
    logic[31:0] SAVE0;//0x30+0->15 PRCFG1中获知 saven
}CSR_4;
typedef struct{//tid tcfg tval cntc ticlr
    logic[31:0] TID;//0x40->0x44
    logic[31:0] TCFG;
    logic[31:0] TVAL;
    logic[31:0] CNTC;
    logic[31:0] TICLR;
}CSR_5;
typedef struct{
    logic[31:0]LLBCTL;//0X60 llbctl
}CSR_6;
typedef struct{
    logic[31:0]IMPCTL1;//0x80->0x81
    logic[31:0]IMPCTL2;
}CSR_7;
typedef struct{//tlbentry tlbrbadv tlbrera tlbrsave tlbrelo0 tlberlo1 tlbehi tlbrprmd merrctrrl merrinfo1 merrinfo2 merrentry merrera merrsave 
    logic[31:0] TLBENTRY;//0x88->0x95 about exception
    logic[31:0] TLBRBADV;
    logic[31:0] TLBRERA;
    logic[31:0] TLBRSAVE;
    logic[31:0] TLBRELO0;
    logic[31:0] TLBRELO1;
    logic[31:0] TLBREHI;
    logic[31:0] TLBRPRMD;
    logic[31:0] MERRCTL;
    logic[31:0] MERRINFO1;
    logic[31:0] MERRINFO2;
    logic[31:0] MERRENTRY;
    logic[31:0] MERRERA;
    logic[31:0] MERRSAVE;
}CSR_8;
typedef struct{//ctag
   logic[31:0]CTAG;//0x98
}CSR_9;
typedef struct{//dmwn
    logic[31:0]DMW0;//0X180->0X183
    logic[31:0]DMW1;
    logic[31:0]DMW2;
    logic[31:0]DMW3;
}CSR_10;


//后面的先不写了，不知道哪个有用
module exception#(TLBNUM = 16)(//包括检测exception
        input clk,
        input reset,
        input logic [29:0]pc,//PC四字节对齐
        //TLB read port
        input logic [1:0]              TLB_memtype,
        input logic [9:0]              TLB_s1_ASID,
        input logic                    TLB_s1_NE,
        input  phytran_item            TLB_s1_phytran0,
        input  phytran_item            TLB_s1_phytran1, 
        input logic                    TLB_s1_G,
        input logic[31:0]              TLB_virtaddr,

        input logic [13:0]csr_num,
        input logic [4:0] excode,
        input logic TLBR,
        output logic [31:0]csr_output,//csrread
        output logic[31:0]exec_addr
);
CSR_0 CSR0;CSR_1 CSR1;CSR_2 CSR2;CSR_3 CSR3;CSR_4 CSR4;CSR_5 CSR5;
CSR_6 CSR6;CSR_7 CSR7;CSR_8 CSR8;CSR_9 CSR3;CSR_9 CSR4;CSR_10 CSR10;
always_comb begin//该模块产生excode
    if(TLB_virtaddr[12]==0)begin
         if(TLB_s1_phytran0.V==0)begin
            case (TLB_memtype)
                `FETCH:CSR0.ESTAT[21:16]=5'h3;
                `LOAD:CSR0.ESTAT[21:16]=5'h1;
                `STORE:CSR0.ESTAT[21:16]=5'h2;
            endcase
         end 
         else if(TLB_memtype==`STORE&&TLB_s1_phytran0.D==0&&(CSR0.CRMD[1:0]==3||CSR0.MISC[16+CSR0.CRMD[1:0]]==0))
         CSR0.ESTAT[21:16] = 5'h4;  
    end
    else begin
        if(TLB_s1_phytran1.V==0)begin
            case (TLB_memtype)
                `FETCH:CSR0.ESTAT[21:16]=5'h3;
                `LOAD:CSR0.ESTAT[21:16]=5'h1;
                `STORE:CSR0.ESTAT[21:16]=5'h2;
            endcase
         end 
         else if(TLB_memtype==`STORE&&TLB_s1_phytran1.D==0&&(CSR0.CRMD[1:0]==3||CSR0.MISC[16+CSR0.CRMD[1:0]]==0))
         CSR0.ESTAT[21:16] = 5'h4;  
    end
end

always_comb begin//该模块产生地址,并生成例外判断
    if(TLBR)
    CSR8.TLBRERA[0] = TLBR;//地址判断
    exec_addr = CSR8.TLBENTRY;
end

always_comb begin//该模块进行异常处理
    if(CSR8.TLBRERA[0])begin//TLBR可以与其他并行处理
        CSR8.TLBRPRMD[1:0] = CSR0.CRMD[1:0];//PLV
        CSR8.TLBRPRMD[2] = CSR0.CRMD[2];//IE
        CSR8.TLBRERA[31:2] = pc; 
        CSR8.TLBRPRMD[4] = CSR0.CRMD[9];//WE        
        CSR8.TLBRBADV = TLB_virtaddr; 
        CSR8.TLBREHI[31:13] = TLB_virtaddr[31:13];
        CSR0.CRMD[2:0] = 3'b0;
        CSR0.CRMD[3] = 1;//DA
        CSR0.CRMD[4] = 0;//PG
        CSR0.CRMD[9] = 0;//指令和数据监视使能位
    end
end
endmodule
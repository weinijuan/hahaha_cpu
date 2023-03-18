`timescale 1ns / 1ps
typedef struct packed {
    logic E;
    logic [9:0] ASID;
    logic G;
    logic [18:0] VPPN;
} compare_item;
typedef struct packed {
    logic V;
    logic D;
    logic [1:0] MAT;
    logic [1:0] PLV;
    logic [19:0] PPN;
} phytran_item;  //在哪里检测风险？？
module TLB #(
    parameter TLBNUM = 16
) (
    input                                    clk,
    input                                    rst,
    //search//TLBR除TLBR以外所有的exception都不在TLB中检测  
    input               [              18:0] s0_VPPN,
    input               [               9:0] s0_ASID,
    output logic        [$clog2(TLBNUM)-1:0] s0_index,
    output logic                             s0_NE,
    //read
    input  logic        [$clog2(TLBNUM)-1:0] s1_index,
    output logic        [               9:0] s1_ASID,
    output logic                             s1_NE,
    output phytran_item                      s1_phytran0,
    output phytran_item                      s1_phytran1,
    output logic                             s1_G,
    output logic        [              18:0] s1_VPPN,
    //write
    input  logic        [$clog2(TLBNUM)-1:0] s2_index,
    input                                    s2_NE,
    input               [               9:0] s2_ASID,
    input               [              18:0] s2_VPPN,
    input                                    s2_G,
    input  phytran_item                      s2_phytran0,
    input  phytran_item                      s2_phytran1,
    //input                           s2_isfill,不实现STLB，MTLB，这条指令貌似没啥用
    //flush
    input                                    s3_index,
    input               [               9:0] s3_ASID,
    input                                    s3_G,
    input               [              18:0] s3_va,
    input               [               2:0] s3_op,
    //input                           s3_isinv//由于只有一个TLB，不需要判断               
    //exception                    
    output logic                             TLBR
);
    typedef struct {
        compare_item ci;
        phytran_item pi0;
        phytran_item pi1;
    } tlb_item;
    tlb_item tlb[$clog2(TLBNUM)-1:0];
    integer  i;
    always_comb begin  //search
        for (i = 0; i < TLBNUM; i = i + 1) begin
            if((tlb[i].ci.E)&&(tlb[i].ci.G||tlb[i].ci.ASID==s0_ASID)&&(tlb[i].ci.VPPN==s0_VPPN))begin//&(tlb[i].ci.VPPN==VPPN
                s0_index = i;
                break;
            end
        end
        TLBR  = (i == TLBNUM);
        s0_NE = (i == TLBNUM);
    end
    always_comb begin  //read
        if ((tlb[s1_index].ci.E)) begin
            s1_ASID = tlb[s1_index].ci.ASID;
            s1_phytran0 = tlb[s1_index].pi0;
            s1_phytran1 = tlb[s1_index].pi1;
            s1_NE = 0;
            s1_VPPN = tlb[s1_index].ci.VPPN;
            s1_G = tlb[s1_index].ci.G;
        end else s1_NE = 1;
    end
    always_ff @(posedge clk) begin  //write
        tlb[s2_index].ci.ASID = s2_ASID;
        tlb[s2_index].pi0  = s2_phytran0;
        tlb[s2_index].pi1  = s2_phytran1;
        tlb[s2_index].ci.E    = s2_NE;
        tlb[s2_index].ci.G    = s2_G;
        tlb[s2_index].ci.VPPN = s2_VPPN;
    end
    always_comb begin  //flush
        //INVTLB 由于只有一组 TLBCLR等于op == 3'b100// TLBFLUSH等于op == 3'b000
        for (int i = 0; i < TLBNUM; i++) begin
            case (s3_op)
                3'b000: tlb[i].ci.E = 0;
                3'b001: tlb[i].ci.E = 0;
                3'b010: tlb[i].ci.E = tlb[i].ci.G == 1;
                3'b011: tlb[i].ci.E = tlb[i].ci.G == 0;
                3'b100:
                tlb[i].ci.E = tlb[i].ci.G == 0 & tlb[i].ci.ASID == s3_ASID;
                3'b101:
                tlb[i].ci.E = tlb[i].ci.G==0&tlb[i].ci.ASID==s3_ASID&tlb[i].ci.VPPN==s3_va;
                3'b110:
                tlb[i].ci.E = tlb[i].ci.G==1&tlb[i].ci.ASID==s3_ASID&tlb[i].ci.VPPN==s3_va;
            endcase
        end
    end
endmodule

`include "cpu.svh"
import cpuDefine::*;
module tlb_( 
    //search0 instr
    input clk,
    input reset,
    input          [              18:0] s0_vppn,
    input          [               9:0] s0_asid,
    input                               s0_odd,
    output reg         [TLBNUMSIZE-1:0] s0_index,
    output PhytranItem                        s0_phytran, 
    output reg                             s0_ne,
    //search1 mem
    input          [              18:0] s1_vppn,
    input          [               9:0] s1_asid,
    input                               s1_odd,
    output reg        [TLBNUMSIZE-1:0] s1_index,
    output PhytranItem                       s1_phytran, 
    output reg                             s1_ne,
    //read
    input             [TLBNUMSIZE-1:0]     r_index,
    output reg        [               5:0] r_ps,
    output reg        [               9:0] r_asid,
    output reg                             r_ne,
    output PhytranItem                     r_phytran0,
    output PhytranItem                     r_phytran1,
    output reg                             r_g,
    output reg        [              18:0] r_vppn,
    //write 
    input                                we,
    input          [TLBNUMSIZE-1:0] w_index,
    input          [               5:0] w_ps,
    input                               w_ne,
    input          [               9:0] w_asid,
    input          [              18:0] w_vppn,
    input                               w_g,
    input  PhytranItem                       w_phytran0,
    input  PhytranItem                       w_phytran1,
    //input                           s2_isfill,��ʵ��STLB��MTLB������ָ��ò��ûɶ��
    //flush
    input                               fe,
    input          [               9:0] f_asid,
    input          [              18:0] f_va,
    input          [               2:0] f_op
);
    TlbItem tlb[TLBNUM-1:0];
    integer i;
    reg tmp0;
    reg tmp1;
    always_comb begin
        tmp0 = 1;
        for (i = 0; i < TLBNUM; i = i + 1)begin
            if((tlb[i].CI.E)&&(tlb[i].CI.G||tlb[i].CI.ASID==s1_asid)&&(tlb[i].CI.VPPN==s1_vppn))begin//&(tlb[i].ci.VPPN==VPPN
                tmp0 = tmp0&0;
                if(s1_odd==0)
                    s1_phytran=tlb[i].PI0;
                else
                    s1_phytran=tlb[i].PI1;
                s1_index = i[TLBNUMSIZE-1:0]; 
            end
            else begin
                s1_phytran = 0;
                s1_index = 0;
            end
        end
        s1_ne = tmp0;
    end
    always_comb begin  //search
        tmp1 = 1;
        for (i = 0; i < TLBNUM; i = i + 1) begin
            if((tlb[i].CI.E)&&(tlb[i].CI.G||tlb[i].CI.ASID==s0_asid)&&(tlb[i].CI.VPPN==s0_vppn))begin//&(tlb[i].ci.VPPN==VPPN
                tmp1 = tmp1&0;
                if(s0_odd==0)
                    s0_phytran = tlb[i].PI0;
                else 
                    s0_phytran = tlb[i].PI1;
                s0_index = i[TLBNUMSIZE-1:0];
            end
            else begin
                s0_phytran = 0;
                s0_index = 0;
            end
        end
        s0_ne = tmp1;
    end
    always_comb begin  //read
            r_ps = tlb[r_index].CI.PS;
            r_asid = tlb[r_index].CI.ASID;
            r_phytran0 = tlb[r_index].PI0;
            r_phytran1 = tlb[r_index].PI1;
            r_ne = !tlb[r_index].CI.E;
            r_vppn = tlb[r_index].CI.VPPN;
            r_g = tlb[r_index].CI.G;
    end
    always_ff @(posedge clk) begin  //write
    if(we)begin
        tlb[w_index].CI.PS <= w_ps;
        tlb[w_index].CI.ASID <= w_asid;
        tlb[w_index].PI0 <= w_phytran0;
        tlb[w_index].PI1 <= w_phytran1;
        tlb[w_index].CI.E <= !w_ne;
        tlb[w_index].CI.G <= w_g;
        tlb[w_index].CI.VPPN <= w_vppn;
    end
    end
    always_ff@(posedge clk) begin  //flush
        //INVTLB ����ֻ��һ�� TLBCLR����op == 3'b100// TLBFLUSH����op == 3'b000
      if(fe)begin
        for (i = 0;i < TLBNUM; i = i+1) begin
            case (f_op)
                CLEAR_ALL0: tlb[i].CI.E <= 0;
                CLEAR_ALL1: tlb[i].CI.E <= 0;
                CLEAR_G1: tlb[i].CI.E <= ~(tlb[i].CI.G == 1);
                CLEAR_G0: tlb[i].CI.E <= ~(tlb[i].CI.G == 0);
                CLEAR_G0_AND_ASID:
                tlb[i].CI.E <= ~(tlb[i].CI.G == 0 & tlb[i].CI.ASID == f_asid);
                CLEAR_G0_AND_ASID_AND_VA:
                tlb[i].CI.E <= ~(tlb[i].CI.G==0&tlb[i].CI.ASID==f_asid&tlb[i].CI.VPPN==f_va);
                CLEAR_G1_OR_ASID_AND_VA:
                tlb[i].CI.E <= ~((tlb[i].CI.G==1|tlb[i].CI.ASID==f_asid)&tlb[i].CI.VPPN==f_va);
                default: tlb[i].CI.E <= tlb[i].CI.E;
            endcase
        end
        end
     end
endmodule

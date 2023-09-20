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
    //logic[TLBNUMSIZE-1:0][TLBNUM-1:0] s1_index_a;
    integer i = 0;
    integer j = 0;
    integer k = 0;
    reg tmp0;
    reg tmp1;
    always_comb begin
        tmp0 = 1;
        for (i = 0; i < TLBNUM; i = i + 1)begin
            if((tlb[i].CI.E)&(tlb[i].CI.G|tlb[i].CI.ASID==s1_asid)&(tlb[i].CI.VPPN==s1_vppn))begin//&(tlb[i].ci.VPPN==VPPN
                tmp0 = tmp0&0;
                s1_index = i;
            end
            else begin
                s1_index |= 0;
            end
        end  
        s1_phytran = s1_odd?tlb[s1_index].PI1:tlb[s1_index].PI0;
        s1_ne = tmp0;
    end
    always_comb begin  //search
        tmp1 = 1;
        for (j = 0; j < TLBNUM; j = j + 1) begin
            if((tlb[j].CI.E)&(tlb[j].CI.G|tlb[j].CI.ASID==s0_asid)&(tlb[j].CI.VPPN==s0_vppn))begin//&(tlb[i].ci.VPPN==VPPN
                tmp1 = tmp1&0;
                s0_index = j;
            end
            else begin
                s0_index |= 0;
            end
        end
        s0_phytran = s0_odd?tlb[s0_index].PI1:tlb[s0_index].PI0;
        s0_ne = tmp1;
    end
    always_comb begin  //read
    r_ne = ~tlb[r_index].CI.E;
        if(tlb[r_index].CI.E)begin
            r_ps = tlb[r_index].CI.PS;
            r_asid = tlb[r_index].CI.ASID;
            r_phytran0 = tlb[r_index].PI0;
            r_phytran1 = tlb[r_index].PI1;
            r_vppn = tlb[r_index].CI.VPPN;
            r_g = tlb[r_index].CI.G;
        end
        else begin
            r_ps = '0;
            r_asid = '0;
            r_phytran0 = '0;
            r_phytran1 = '0;
            r_vppn = '0;
            r_g = '0;
        end
    end
    always_ff@(posedge clk) begin  //flush
        //INVTLB ����ֻ��һ�� TLBCLR����op == 3'b100// TLBFLUSH����op == 3'b000
      if(we)begin
        tlb[w_index].CI.PS <= w_ps;
        tlb[w_index].CI.ASID <= w_asid;
        tlb[w_index].PI0 <= w_phytran0;
        tlb[w_index].PI1 <= w_phytran1;
        tlb[w_index].CI.E <= ~w_ne;
        tlb[w_index].CI.G <= w_g;
        tlb[w_index].CI.VPPN <= w_vppn;
      end
     else if(fe)begin
        for (k = 0;k < TLBNUM; k = k+1) begin
            case (f_op)
                CLEAR_ALL0: tlb[k].CI.E <= 0;
                CLEAR_ALL1: tlb[k].CI.E <= 0;
                CLEAR_G1: tlb[k].CI.E <= (~tlb[k].CI.G)&(tlb[k].CI.E);
                CLEAR_G0: tlb[k].CI.E <= (tlb[k].CI.G)&(tlb[k].CI.E);
                CLEAR_G0_AND_ASID:
                tlb[k].CI.E <= (~(~tlb[k].CI.G & tlb[k].CI.ASID == f_asid))&(tlb[k].CI.E);
                CLEAR_G0_AND_ASID_AND_VA:
                tlb[k].CI.E <= (~(~tlb[k].CI.G&tlb[k].CI.ASID==f_asid&tlb[k].CI.VPPN==f_va))&(tlb[k].CI.E);
                CLEAR_G1_OR_ASID_AND_VA:
                tlb[k].CI.E <= (~((tlb[k].CI.G|tlb[k].CI.ASID==f_asid)&tlb[k].CI.VPPN==f_va))&(tlb[k].CI.E);
                default: tlb[k].CI.E <= tlb[k].CI.E;
            endcase
        end
        end
     end
endmodule

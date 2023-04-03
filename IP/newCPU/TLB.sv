`timescale 1ns / 1ps
`include "defines.sv"
module TLB #(
    parameter TLBNUM = 16
) ( 
    input clk,
    input reset,
    exception_tlb.search0_port s0_port,
    exception_tlb.search1_port s1_port,
    exception_tlb.read_port r_port,
    exception_tlb.write_port w_port,
    exception_tlb.flush_port f_port
);

    TlbItem tlb[$clog2(TLBNUM)-1:0];
    integer  i;
    always_comb begin
        for (i = 0; i < TLBNUM; i = i + 1)begin
            if((tlb[i].ci.E)&&(tlb[i].ci.G||tlb[i].ci.ASID==s1_port.s1_asid)&&(tlb[i].ci.VPPN==s1_port.s1_vppn))begin//&(tlb[i].ci.VPPN==VPPN
                if(s1_port.s1_odd==0)
                    s1_port.s1_phytran=tlb[i].pi0; 
                else
                    s1_port.s1_phytran=tlb[i].pi1;
                break;
            end
        end
        s1_port.s1_tlbr =  i==TLBNUM;
        s1_port.s1_ne = i==TLBNUM;
    end
    integer j;
    always_comb begin  //search
        for (j = 0; j < TLBNUM; j = j + 1) begin
            if((tlb[i].ci.E)&&(tlb[i].ci.G||tlb[i].ci.ASID==s0_port.s0_asid)&&(tlb[i].ci.VPPN==s0_port.s0_vppn))begin//&(tlb[i].ci.VPPN==VPPN
                s0_port.s0_index = i;
            end
            break;
        end
        s0_port.s0_tlbr =  i==TLBNUM;
        s0_port.s0_ne = i==TLBNUM;
    end
    always_comb begin  //read
        if ((tlb[r_port.r_index].ci.E)) begin
            r_port.r_ps = tlb[r_port.r_index].ci.PS;
            r_port.r_asid = tlb[r_port.r_index].ci.ASID;
            r_port.r_phytran0 = tlb[r_port.r_index].pi0;
            r_port.r_phytran1 = tlb[r_port.r_index].pi1;
            r_port.r_ne = 0;
            r_port.r_vppn = tlb[r_port.r_index].ci.VPPN;
            r_port.r_g = tlb[r_port.r_index].ci.G;
        end else r_port.r_ne = 1;
    end
    always_ff @(posedge clk) begin  //write
        tlb[w_port.w_index].ci.PS = w_port.w_ps;
        tlb[w_port.w_index].ci.ASID = w_port.w_asid;
        tlb[w_port.w_index].pi0 = w_port.w_phytran0;
        tlb[w_port.w_index].pi1 = w_port.w_phytran1;
        tlb[w_port.w_index].ci.E = w_port.w_ne;
        tlb[w_port.w_index].ci.G = w_port.w_g;
        tlb[w_port.w_index].ci.VPPN = w_port.w_vppn;
    end
    always_comb begin  //flush
        //INVTLB 由于只有一组 TLBCLR等于op == 3'b100// TLBFLUSH等于op == 3'b000
        for (int i = 0; i < TLBNUM; i++) begin
            case (f_port.f_op)
                CLEAR_ALL0: tlb[i].ci.E = 0;
                CLEAR_ALL1: tlb[i].ci.E = 0;
                CLEAR_G1: tlb[i].ci.E = tlb[i].ci.G == 1;
                CLEAR_G0: tlb[i].ci.E = tlb[i].ci.G == 0;
                CLEAR_G0_AND_ASID:
                tlb[i].ci.E = tlb[i].ci.G == 0 & tlb[i].ci.ASID == f_port.f_asid;
                CLEAR_G0_AND_ASID_AND_VA:
                tlb[i].ci.E = tlb[i].ci.G==0&tlb[i].ci.ASID==f_port.f_asid&tlb[i].ci.VPPN==f_port.f_va;
                CLEAR_G1_OR_ASID_AND_VA:
                tlb[i].ci.E = (tlb[i].ci.G==1|tlb[i].ci.ASID==f_port.f_asid)&tlb[i].ci.VPPN==f_port.f_va;
            endcase
        end
    end
endmodule

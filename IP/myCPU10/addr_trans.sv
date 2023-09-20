//`timescale 1ns / 1ps
module addr_trans(
    input  logic[31:0]virt_addr,
    output logic[31:0]phy_addr,
    input da,
    input pg,
    input logic[31:0]dmw0,
    input logic[31:0]dmw1,
    input [1:0]plv,
    input [1:0]mat_phytran,
    input [1:0]mat_csr,
    //TLB
    //output [18:0] vpn2,
    //output odd_page,
    input [19:0] pfn,
    //input logic tlb_ne,
    output logic is_dmw,
    output logic is_usetlb,
    output [1:0]mat_true
);
//assign {vpn2,odd_page} = virt_addr[31:12];
always_comb begin
    if(da&~pg)begin
        phy_addr = virt_addr;
        is_dmw = 0;
        is_usetlb = 0;
        mat_true = mat_csr;
    end
    else begin
        if(dmw0[31:29]==virt_addr[31:29]&dmw0[{3'b0,plv}])begin
        phy_addr = {dmw0[27:25],virt_addr[28:0]};
        is_dmw = 1;
        is_usetlb = 0;
        mat_true = dmw0[5:4];
        end
        else if(dmw1[31:29]==virt_addr[31:29]&dmw1[{3'b0,plv}])begin
        phy_addr = {dmw1[27:25],virt_addr[28:0]};
        is_dmw = 1;
        is_usetlb = 0;
        mat_true = dmw1[5:4];
        end
        else begin
        phy_addr = {pfn,virt_addr[11:0]};
        is_dmw = 0;
        is_usetlb = 1;
        mat_true = mat_phytran;
        end
    end
end
endmodule
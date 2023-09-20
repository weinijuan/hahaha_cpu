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
reg [1:0] mat_true_reg;
assign mat_true =  mat_true_reg;

logic [31:0] trans_addr;
logic trans_is_dmw;
logic trans_is_usetlb;
logic [1:0] trans_mat_true_reg; 
logic is_dmw0;
logic is_dmw1;
// always_comb begin//dmw0
//     if(dmw0[31:29]==virt_addr[31:29]&dmw0[{3'b0,plv}])begin
//         is_dmw0 = 1;
//     end
//     else begin
//         is_dmw0 = 0;
//     end
    
//     if(dmw1[31:29]==virt_addr[31:29]&dmw1[{3'b0,plv}])begin
//         is_dmw1 = 1;
//     end
//     else begin
//         is_dmw1 = 0;
//     end
// end

assign is_dmw0 = dmw0[31:29]==virt_addr[31:29]&dmw0[{3'b0,plv}];
assign is_dmw1 = dmw1[31:29]==virt_addr[31:29]&dmw1[{3'b0,plv}];





always_comb begin//tlb
    if(is_dmw1|is_dmw0)begin
        trans_is_usetlb = 0;
        trans_addr = {32{is_dmw1}}&{dmw1[27:25],virt_addr[28:0]}|{32{is_dmw0}}&{dmw0[27:25],virt_addr[28:0]};
        trans_mat_true_reg = {2{is_dmw1}}&dmw1[5:4]|{{2{is_dmw0}}}&dmw0[5:4];
    end
    else begin
        trans_is_usetlb = 1;
        trans_addr = {pfn,virt_addr[11:0]};
        `ifdef usetlb
        trans_mat_true_reg = mat_phytran;
        `else 
        trans_mat_true_reg = mat_csr;
        `endif
    end
end
always_comb begin
    if(da&~pg)begin
        phy_addr = virt_addr;
        is_dmw = 0;
        is_usetlb = 0;
        mat_true_reg = mat_csr;
    end
    else begin
        phy_addr = trans_addr;
        is_dmw = is_dmw1|is_dmw0;
        is_usetlb = trans_is_usetlb;
        mat_true_reg = trans_mat_true_reg;
    end
end
endmodule
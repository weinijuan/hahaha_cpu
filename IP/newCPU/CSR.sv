`timescale 1ns / 1ps
`define LOAD 2'b01
`define STORE 2'b10
`define FETCH 2'b00
`include "defines.sv"
interface exception_tlb#(
    parameter TLBNUM=16
)(  
    //search1
    input logic        [              18:0] s1_vppn,
    input logic        [               9:0] s1_asid,
    input logic                             s1_odd,
    output PhytranItem                      s1_phytran,//这4个直接对外连接，其余只与exception连接 
    
    //read 
    input logic        [               1:0] r_memtype,
    input logic                             r_odd,
    output CSR0                             csr0,
    output CSR1                             csr1,
    output CSR2                             csr2,
    output CSR3                             csr3
);   
    //TLB
    //search0
          logic        [              18:0] s0_vppn;
          logic        [               9:0] s0_asid;
          logic        [$clog2(TLBNUM)-1:0] s0_index;
          logic                             s0_ne;
          logic                             s0_tlbr;
    //search1
          logic                             s1_ne;
          logic                             s1_tlbr;
    //read
          logic        [$clog2(TLBNUM)-1:0] r_index;
          logic        [               5:0] r_ps;
          logic        [               9:0] r_asid;
          logic                             r_ne;
          PhytranItem                       r_phytran0;
          PhytranItem                       r_phytran1;
          logic                             r_g;
          logic        [              18:0] r_vppn;
    //write
          logic        [$clog2(TLBNUM)-1:0] w_index;
          logic        [               5:0] w_ps;
          logic                             w_ne;
          logic        [               9:0] w_asid;
          logic        [              18:0] w_vppn;
          logic                             w_g;
          PhytranItem                       w_phytran0;
          PhytranItem                       w_phytran1;
    //flush
          logic                             f_index;
          logic        [               9:0] f_asid;
          logic                             f_g;
          logic        [              18:0] f_va;
          logic        [               2:0] f_op;  
        
    
    always_comb begin //该模块使用csr寄存器对tlb的input接口进行装填
          
          
    end
    
    
    modport search0_port(//s0内存搜索，需要从CSR中获取信息
    input                                    s0_vppn,
    input                                    s0_asid,
    output                                   s0_index,
    output                                   s0_ne,
    output                                   s0_tlbr
);
    modport search1_port(//s1指令直接搜索，不从csr中获取信息
    input                                    s1_vppn,
    input                                    s1_asid,
    input                                    s1_odd,
    output                                   s1_phytran, 
    output                                   s1_ne,
    output                                   s1_tlbr
);
    modport read_port(
    input                                    r_index,
    output                                   r_ps,
    output                                   r_asid,
    output                                   r_ne,
    output                                   r_phytran0,
    output                                   r_phytran1,
    output                                   r_g,
    output                                   r_vppn
);
    modport write_port(
    input                                    w_index,
    input                                    w_ps,
    input                                    w_ne,
    input                                    w_asid,
    input                                    w_vppn,
    input                                    w_g,
    input                                    w_phytran0,
    input                                    w_phytran1
);
    modport flush_port(
    input                                    f_index,
    input                                    f_asid,
    input                                    f_g,
    input                                    f_va,
    input                                    f_op
);
    modport tlb_port_to_csr(
    input                                    s0_index,
    input                                    s0_ne,
    input                                    s0_tlbr,
    input                                    s1_tlbr,
    input                                    s1_phytran,
    input                                    r_ps,
    input                                    r_asid,
    input                                    r_ne,
    input                                    r_memtype,
    input                                    r_odd,
    input                                    r_phytran0,
    input                                    r_phytran1,
    input                                    r_g,
    input                                    r_vppn
);  
    modport csr_port_to_outer(
    output                                   csr0,
    output                                   csr1,
    output                                   csr2,
    output                                   csr3
);
endinterface
module csr #(
    TLBNUM = 16
) (  //包括检测exception
    exception_tlb.tlb_port_to_csr        t_port,  
    input                                clk,
    input                                reset,
    input logic                          ertn
);
    CSR0  csr0;
    CSR1  csr1;
    CSR2  csr2;
    CSR3  csr3;
    CSR4  csr4;
    CSR5  csr5;
    CSR6  csr6;
    CSR7  csr7;
    CSR8  csr8;
    CSR9  csr9;
    logic[11:0]inter;
    always_comb begin//该模块在接口内部对CSR寄存器进行直接装填
        csr2.TLBIDX[$clog2(TLBNUM)-1:0] = t_port.s0_index;
        csr2.TLBIDX[29:24] = t_port.r_ps;
    end
    always_comb begin//该模块对中断信号做单独处理
        if(csr0.ECFG[12]&csr0.ESTAT[12])inter = 12'h800; 
        else if(csr0.ECFG[11]&csr0.ESTAT[11])inter = 12'h400;
        else if(csr0.ECFG[9]&csr0.ESTAT[9])inter = 12'h200;
        else if(csr0.ECFG[8]&csr0.ESTAT[8])inter = 12'h100;
        else if(csr0.ECFG[7]&csr0.ESTAT[7])inter = 12'h080;
        else if(csr0.ECFG[6]&csr0.ESTAT[6])inter = 12'h040;
        else if(csr0.ECFG[5]&csr0.ESTAT[5])inter = 12'h020;
        else if(csr0.ECFG[4]&csr0.ESTAT[4])inter = 12'h010;  
        else if(csr0.ECFG[3]&csr0.ESTAT[3])inter = 12'h008;
        else if(csr0.ECFG[2]&csr0.ESTAT[2])inter = 12'h004;
        else if(csr0.ECFG[1]&csr0.ESTAT[1])inter = 12'h002;
        else if(csr0.ECFG[0]&csr0.ESTAT[0])inter = 12'h001;
    end
    always_comb begin  //该模块产生excode
     if(inter!=12'h0&&csr0.CRMD[2])
        csr0.ESTAT[21:16] = INTE;//中断例外优先检测
     else begin      
        if(t_port.s1_phytran.V==0) csr0.ESTAT[21:16] = PIF;//指令缺页
        else if (t_port.r_odd == 0) begin//其余TLB错
                if (t_port.r_phytran0.V == 0) begin
                    case (t_port.r_memtype)
                        `LOAD:  csr0.ESTAT[21:16] = PIL;
                        `STORE: csr0.ESTAT[21:16] = PIS;
                    endcase
                end
                else if(csr0.CRMD[1:0]>t_port.r_phytran0.PLV)begin
                    csr0.ESTAT[21:16] = PPI;
                end
                else if(t_port.r_memtype==`STORE&&t_port.r_phytran0.D==0)
                    csr0.ESTAT[21:16] = PME;
                end
        else begin
                if (t_port.r_phytran1.V == 0) begin
                    case (t_port.r_memtype)
                        `LOAD:  csr0.ESTAT[21:16] = PIL;
                        `STORE: csr0.ESTAT[21:16] = PIS;
                    endcase
                end 
                else if(csr0.CRMD[1:0]>t_port.r_phytran1.PLV)begin
                    csr0.ESTAT[21:16] = PPI;
                end
                else if(t_port.r_memtype==`STORE&&t_port.r_phytran1.D==0)
                    csr0.ESTAT[21:16] = PME;
            end
        end
        end
    always_comb begin  //该模块产生地址,并生成例外判断
        
    end
    always_comb begin  //该模块进行异常处理
        
    end
endmodule

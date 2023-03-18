`include "cpu.svh"

import cpuDefine::*;

module cpu_top (
    input logic clk,
    reset
);


    // IF
    DType pc;
    DType nextPC;
    PcSel pcsel;
    logic pcEn;
    DType pcAdd;
    DType aluout;



    assign pcAdd = pc + 4;
    always_comb begin
        unique case (pcsel)
            PC_ALUOUT: nextPC = aluout;
            PC_LUI: nextPC = immout;
            PC_ADD4: nextPC = pcAdd;
            default: nextPC = '0;
        endcase
    end
    PcUpdate pcupdate (
        .clk(clk),
        .reset(reset),
        .en(pcEn),
        .data(nextPC),
        .pc(pc)
    );

    Instr instr;
    ICache icache (
        .clk  (clk),
        .addr (pc),
        .instr(instr)
    );

    // ID

    DType rj, rk, rd, immout;

    RF rf (
        .clk(clk),
        .reset(reset),
        .rd_in(instr[4:0]),
        .rj_in(instr[9:5]),
        .rk_in(instr[14:10]),
        .regWriteEn(regWriteEn),
        .regWriteData(regWriteData),
        .rj(rj),
        .rk(rk),
        .rd(rd)
    );
    ImmGen immgen (
        .instr(instr),
        .itype(itype),  // from control
        .unsign(unsignImm),  // from control
        .immout(immout)
    );
    logic zero, lt;
    Comparator comp (
        .rj(rj),
        .rk(rk),
        .unsign(unsignComp),
        .zero(zero),
        .lt(lt)
    );

    Control control (
        .instr(instr),
        .zero(zero),
        .lt(lt),
        .pcsel(pcsel),
        .itype(itype),
        .branch(branch),
        .regWriteEn(regWriteEn),
        .memWriteEn(memWriteEn),
        .alusel1(alusel1),
        .alusel2(alusel2)
    );


    // EX

    DType aluSrc1, aluSrc2;
    always_comb begin
        unique case (alusel1)
            ALU_SEL_RJ: aluSrc1 = rj;
            ALU_SEL_PC: aluSrc1 = pc;
            default: aluSrc1 = '0;
        endcase
    end

    always_comb begin
        unique case (alusel2)
            ALU_SEL_RK: aluSrc2 = rk;
            ALU_SEL_IMMOUT: aluSrc2 = immout;
            default: aluSrc2 = '0;
        endcase
    end


    ALU alu (
        .aluSrc1 (aluSrc1),
        .aluSrc2 (aluSrc2),
        .aluctrl (aluctrl),
        .aluout  (aluout),
        .overflow(overflow)
    );


    //MEM
    DType memReadData;
    DCache dcache (
        .clk(clk),
        .memWriteEn(memWriteEn),
        .readAddr(aluout),
        .writeAddr(aluout),
        .writeData(rd),
        .readData(memReadData)
    );



    // WB

    DType regWriteData;
    RegWriteDataSel regWriteDataSel;
    always_comb begin
        unique case (regWriteDataSel)
            REG_WRITE_IMM: regWriteData = immout;
            REG_WRITE_ALU: regWriteData = aluout;
            REG_WRITE_MEM: regWriteData = memReadData;
            REG_WRITE_PC: regWriteData = pcAdd;
            default: regWriteData = '0;
        endcase
    end


endmodule

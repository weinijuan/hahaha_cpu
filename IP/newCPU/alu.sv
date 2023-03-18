import cpuDefine::*;
module alu (
    input  DType   aluSrc1,
    input  DType   aluSrc2,
    input  AluCtrl aluctrl,
    output DType   aluout,
    output logic   overflow
);


    always_comb begin
        unique case (aluctrl)
            ALU_ADD: begin
                aluout = aluSrc1 + aluSrc2;
            end
            ALU_SUB: begin
                aluout = aluSrc1 - aluSrc2;
            end
            ALU_SLT: begin
                aluout = ($signed(aluSrc1) < $signed(aluSrc2));
            end
            ALU_SLTU: begin
                aluout = aluSrc1 < aluSrc2;
            end
            ALU_AND: begin
                aluout = aluSrc1 & aluSrc2;
            end
            ALU_OR: begin
                aluout = aluSrc1 | aluSrc2;
            end
            ALU_XOR: begin
                aluout = aluSrc1 ^ aluSrc2;
            end
            ALU_SLL: begin
                aluout = aluSrc1 << aluSrc2[4:0];
            end
            ALU_SRL: begin
                aluout = aluSrc1 >> aluSrc2[4:0];
            end
            ALU_SRA: begin
                aluout = $signed(aluSrc1) >>> aluSrc2[4:0];
            end
            ALU_MUL: begin

            end
            ALU_MULH: begin

            end
            ALU_MULHU: begin

            end
            ALU_DIV: begin

            end
            ALU_MOD: begin

            end
            ALU_DIVU: begin

            end
            ALU_MODU: begin

            end
            default: aluout = '0;
        endcase
    end


endmodule

`include "cpu.svh"

module alu
    import cpuDefine::*;
    (
        input DType aluSrc1,
        input DType aluSrc2,
        input AluCtrl aluctrl,
        input DivNeed divNeed,
        output DType aluout,
        output logic overflow,
        output DType memaddr
    );

    // -------------------div-----------------------
    logic divSigned = (aluctrl == ALU_DIVU) | (aluctrl == ALU_MODU);
    logic divEn = (aluctrl == ALU_DIV) | (aluctrl == ALU_DIVU) | (aluctrl == ALU_MOD) | (aluctrl == ALU_MODU);
    // what happened when quotient is zero ?
    DType quotient;
    DType remainder;
    logic completed;
    div myDiv(
        .clk(divNeed.aclk),
        .reset(divNeed.aresetn),
        .en(divEn),
        .is_signed(divSigned),
        .dividend(aluSrc1),
        .divisor(aluSrc2),
        .quotient(quotient),
        .remainder(remainder),
        .complete(completed)
    );


    //-------------------adder------------------------

    DType adder_result;
    DType slt_result;
    DType sltu_result;

    DType adder_a;
    DType adder_b;
    logic adder_cout;
    assign adder_a = aluSrc1;
    logic adder_cin;

    always_comb begin
        unique case (aluctrl)
            ALU_SUB: begin
                adder_b = ~aluSrc2;
                adder_cin = 1;
            end
            ALU_SLT: begin
                adder_b = ~aluSrc2;
                adder_cin = 1;
            end
            ALU_SLTU: begin
                adder_b = ~aluSrc2;
                adder_cin = 1;
            end
            ALU_PCADD4: begin
                adder_b = 4;
                adder_cin = 0;
            end

            default: begin
                adder_b = aluSrc2;
                adder_cin = 0;
            end

        endcase
    end

    assign {adder_cout, adder_result} = adder_a+adder_b+{31'b0, adder_cin};
    assign slt_result[31:1] = 31'b0;
    assign slt_result[0] = (aluSrc1[31] & ~aluSrc2[31])
        | (~(aluSrc1[31] ^ aluSrc2[31]) & adder_result[31]);
    assign sltu_result = {31'b0, ~adder_cout};

    logic [63:0] mul_result;


    // what happened when div not completed in a cycle?

    // 乘法器有问题,需要修改
    always_comb begin
        unique case (aluctrl)
            ALU_MUL: begin
                mul_result = aluSrc1*aluSrc2;
            end
            ALU_MULH: begin
                mul_result =($signed({{32{aluSrc1[31]}}, aluSrc1})
                        *$signed({{32{aluSrc2[31]}}, aluSrc2}));
                end
            ALU_MULHU: begin
                mul_result = {32'b0, aluSrc1}*{32'b0, aluSrc2};
            end
            default: begin
                mul_result = '0;
            end
        endcase
    end



    always_comb begin
        unique case (aluctrl)
            ALU_ADD: begin
                aluout = adder_result;
                memaddr = aluout;
            end
            ALU_SUB: begin
                aluout = adder_result;
            end
            ALU_SLT: begin
                aluout = slt_result;
            end
            ALU_SLTU: begin
                aluout = sltu_result;
            end
            ALU_NOR: begin
                aluout = ~(aluSrc1 | aluSrc2);
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
                aluout = ($signed(aluSrc1)) >>> aluSrc2[4:0];
            end
            ALU_MUL: begin
                aluout = mul_result;
            end
            ALU_MULH: begin
                 aluout = mul_result[63:32] ;
            end
            ALU_MULHU: begin
                 aluout = mul_result[63:32];
        end
            ALU_DIV: begin
                aluout = quotient;
            end
            ALU_MOD: begin
                aluout = remainder;
            end
            ALU_DIVU: begin
                aluout = quotient;
            end
            ALU_MODU: begin
                aluout = quotient;
            end
            ALU_LUI: begin
                aluout = aluSrc2;
            end
            ALU_PCADD4: begin
                aluout = aluSrc1+4;
            end
            default:begin
                aluout = '0;
                memaddr = '0;
            end
        endcase
    end


endmodule

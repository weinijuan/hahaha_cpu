
`include "cpu.svh"

module alu
    import cpuDefine::*;
    (
        input DType aluSrc1,
        input DType aluSrc2,
        //input AluCtrl aluctrl,
        input logic[ALUCTRL_STATENUM-1:0]aluctrl_bits,
        input DivNeed divNeed,
        output DType aluout,
        output logic overflow,
        output DType memaddr,
        output logic ready_go,
        input  logic[31:0] outer_result,
        input logic sec_is_valid
    );
    

 wire divEn = aluctrl_bits[2]|aluctrl_bits[3]|aluctrl_bits[4]|aluctrl_bits[5];
 //(aluctrl == ALU_DIV) | (aluctrl == ALU_DIVU) | (aluctrl == ALU_MOD) | (aluctrl == ALU_MODU);
 logic completed;
    assign ready_go = (divEn && completed) ||(~divEn)&(~sec_is_valid);

    // -------------------div-----------------------
    wire divUnsigned = //aluctrl[4:1] == div_check_u;
    aluctrl_bits[3]|aluctrl_bits[2];

    DType quotient;
    DType remainder;
    
    div myDiv(
        .clk(divNeed.aclk),
        .reset(~divNeed.aresetn),
        .en(divEn),
        .is_signed(~divUnsigned),
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
    

    wire [31:0]m0 = {32{(aluctrl_bits[18]|aluctrl_bits[17]|aluctrl_bits[16])}};
    wire [31:0]m1 = {32{aluctrl_bits[0]}};
    wire [31:0]m2 = ~(m0|m1);
    assign adder_b = m2&aluSrc2|m0&(~aluSrc2)|m1&('d4);
    assign adder_cin = (aluctrl_bits[18]|aluctrl_bits[17]|aluctrl_bits[16]);

    assign {adder_cout, adder_result} = adder_a+adder_b+{31'b0, adder_cin};
//    assign {adder_cout, adder_result} = adder_a;

    assign slt_result[31:1] = 31'b0;
    assign slt_result[0] = (aluSrc1[31] & ~aluSrc2[31])
        | (~(aluSrc1[31] ^ aluSrc2[31]) & adder_result[31]);
    assign sltu_result = {31'b0, ~adder_cout};
    assign overflow = adder_cout;



        
         mux_1h #(.num_port(ALUCTRL_STATENUM-2-2), .data_width('d32)) aluout_mux
           (
               .select(
                   {
                       aluctrl_bits[19]|aluctrl_bits[18]|aluctrl_bits[0],
                       //aluctrl_bits[18],
                       aluctrl_bits[17],
                       aluctrl_bits[16],
                       aluctrl_bits[15],
                       aluctrl_bits[14],
                       aluctrl_bits[13],
                       aluctrl_bits[12],
                       aluctrl_bits[11],
                       aluctrl_bits[10],
                       aluctrl_bits[9],
                       aluctrl_bits[8],
                       aluctrl_bits[7],
                       aluctrl_bits[6],
                       aluctrl_bits[5]|aluctrl_bits[3],
                       aluctrl_bits[4]|aluctrl_bits[2],
                       //aluctrl_bits[3],
                       //aluctrl_bits[2],
                       aluctrl_bits[1]
                       //aluctrl_bits[0]
                   }),
               .in(
                   {
                       adder_result,
                       //adder_result,
                       slt_result,
                       sltu_result,
                       ~(aluSrc1 | aluSrc2),
                       aluSrc1 & aluSrc2,
                       aluSrc1 | aluSrc2,
                       aluSrc1 ^ aluSrc2,
                       aluSrc1 << aluSrc2[4:0],
                       aluSrc1 >> aluSrc2[4:0],
                       ($signed(aluSrc1)) >>> aluSrc2[4:0],
                       outer_result,
                       outer_result,
                       outer_result,
                       quotient,
                       remainder,
                       //quotient,
                       //remainder,
                       aluSrc2
                       //adder_result
                   }),
               .out(aluout)
      );

assign memaddr = adder_result;
endmodule
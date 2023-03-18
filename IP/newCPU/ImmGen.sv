`include "cpu.svh"

module ImmGen
    import cpuDefine::*;
(
    // verilator lint_off UNUSED
    input Instr instr,
    // verilator lint_on UNUSED
    Itype itype,
    logic unsign,
    output DType immout
);
    localparam width = $bits(DType);
    always_comb begin
        unique case (itype)
            // I8 must sll/sra/srl , unsigned extend
            I8: begin
                immout = width'(instr[14:10]);
            end
            I12: begin
                if (unsign) immout = width'(instr[21:10]);
                else immout = width'(signed'(instr[21:10]));
            end
            I14: begin
                immout = width'(signed'({instr[23:10], 2'b0}));
            end
            I16: begin
                immout = width'(signed'({instr[25:10], 2'b0}));
            end
            I20: begin
                immout = {instr[24:5], 12'b0};
            end
            I21: begin
                immout = width'(signed'({instr[4:0], instr[25:10]}));
            end
            I26: begin
                immout = width'(signed'({instr[9:0], instr[25:10], 2'b0}));
            end
            default: begin
                immout = '0;
            end
        endcase
    end

endmodule

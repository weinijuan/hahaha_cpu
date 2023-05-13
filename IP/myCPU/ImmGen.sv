`include "cpu.svh"
module ImmGen
    import cpuDefine::*;

(
    input  Instr instr,
    input  Itype itype,
    input  logic is_csrtype,
    input  logic is_unsign,
    input  logic is_tlbinv,
    output DType immout
);
    localparam width = $bits(DType);
    always_comb begin
        if(is_csrtype)
            immout = width'(instr[23:10]);
        else if(is_tlbinv)
            immout = width'(instr[4:0]);
        else begin
        unique case (itype)
            // I8 must sll/sra/srl , unsigned extend
            I8: begin
                immout = width'(instr[14:10]);
            end
            I12: begin
                if (is_unsign) immout = width'(instr[21:10]);
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
    end

endmodule

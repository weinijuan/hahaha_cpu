import cpuDefine::*;
module ImmGen (
    input Instr instr,
    Itype,
    itype,
    logic unsign,
    output DType immout
);
    always_comb begin
        unique case (itype)
            // I8 must sll/sra/srl , unsigned extend
            I8: begin
                immout = instr[14:10];
            end
            I12: begin
                if (unsign) immout = instr[21:10];
                else immout = {{20{instr[21]}}, instr[21:10]};
            end
            I14: begin
                immout = {{16{instr[23]}}, instr[23:10], 2'b0};
            end
            I16: begin
                immout = {{14{instr[25]}}, instr[25:10], 2'b0};
            end
            I20: begin
                immout = {instr[24:5], 12'b0};
            end
            I21: begin
                immout = {{11{instr[4]}}, instr[4:0], instr[25:10]};
            end
            I26: begin
                immout = {{4{instr[9]}}, instr[9:0], instr[25:10], 2'b0};
            end
            default: begin
                immout = '0;
            end
        endcase
    end

endmodule

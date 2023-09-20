`include "cpu.svh"

module extend_memData
    import cpuDefine::*;
(
    input logic [3:0] wstrb,
    input logic is_unsign_load,
    input DType rdata_mem,
    output DType readData
);

    always_comb begin
        unique case (wstrb)
            4'b0001: begin
                unique case (is_unsign_load)
                    1'b0: begin
                        readData = {{24{rdata_mem[7]}}, rdata_mem[7:0]};
                    end
                    1'b1: begin
                        readData = {24'b0, rdata_mem[7:0]};
                    end
                    default: readData = '0;
                endcase
            end
            4'b0010: begin
                unique case (is_unsign_load)
                    1'b0: begin
                        readData = {{24{rdata_mem[15]}}, rdata_mem[15:8]};
                    end
                    1'b1: begin
                        readData = {24'b0, rdata_mem[15:8]};
                    end
                    default: readData = '0;
                endcase
            end
            4'b0100: begin
                unique case (is_unsign_load)
                    1'b0: begin
                        readData = {{24{rdata_mem[23]}}, rdata_mem[23:16]};
                    end
                    1'b1: begin
                        readData = {24'b0, rdata_mem[23:16]};
                    end
                    default: readData = '0;
                endcase
            end
            4'b1000: begin
                unique case (is_unsign_load)
                    1'b0: begin
                        readData = {{24{rdata_mem[31]}}, rdata_mem[31:24]};
                    end
                    1'b1: begin
                        readData = {24'b0, rdata_mem[31:24]};
                    end
                    default: readData = '0;
                endcase
            end
            4'b0011: begin
                unique case (is_unsign_load)
                    1'b0: begin
                        readData = {{16{rdata_mem[15]}}, rdata_mem[15:0]};
                    end
                    1'b1: begin
                        readData = {16'b0, rdata_mem[15:0]};
                    end
                    default: readData = '0;
                endcase
            end
            4'b1100: begin
                unique case (is_unsign_load)
                    1'b0: begin
                        readData = {{16{rdata_mem[31]}}, rdata_mem[31:16]};
                    end
                    1'b1: begin
                        readData = {16'b0, rdata_mem[31:16]};
                    end
                    default: readData = '0;
                endcase
            end
            4'b1111: begin
                readData = rdata_mem;
            end
            default: 
                readData = '0;
        endcase
    end

endmodule

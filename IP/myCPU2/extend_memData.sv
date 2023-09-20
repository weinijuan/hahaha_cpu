`include "cpu.svh"

module extend_memData
    import cpuDefine::*;
(
    input logic [3:0] wstrb,
    input logic is_unsign_load,
    input DType origin_data,
    output DType extend_data
);

    always_comb begin
        unique case (wstrb)
            4'b0001: begin
                unique case (is_unsign_load)
                    1'b0: begin
                        extend_data = {{24{origin_data[7]}}, origin_data[7:0]};
                    end
                    1'b1: begin
                        extend_data = {24'b0, origin_data[7:0]};
                    end
                    default: extend_data = '0;
                endcase
            end
            4'b0010: begin
                unique case (is_unsign_load)
                    1'b0: begin
                        extend_data = {{24{origin_data[15]}}, origin_data[15:8]};
                    end
                    1'b1: begin
                        extend_data = {24'b0, origin_data[15:8]};
                    end
                    default: extend_data = '0;
                endcase
            end
            4'b0100: begin
                unique case (is_unsign_load)
                    1'b0: begin
                        extend_data = {{24{origin_data[23]}}, origin_data[23:16]};
                    end
                    1'b1: begin
                        extend_data = {24'b0, origin_data[23:16]};
                    end
                    default: extend_data = '0;
                endcase
            end
            4'b1000: begin
                unique case (is_unsign_load)
                    1'b0: begin
                        extend_data = {{24{origin_data[31]}}, origin_data[31:24]};
                    end
                    1'b1: begin
                        extend_data = {24'b0, origin_data[31:24]};
                    end
                    default: extend_data = '0;
                endcase
            end
            4'b0011: begin
                unique case (is_unsign_load)
                    1'b0: begin
                        extend_data = {{16{origin_data[15]}}, origin_data[15:0]};
                    end
                    1'b1: begin
                        extend_data = {16'b0, origin_data[15:0]};
                    end
                    default: extend_data = '0;
                endcase
            end
            4'b1100: begin
                unique case (is_unsign_load)
                    1'b0: begin
                        extend_data = {{16{origin_data[31]}}, origin_data[31:16]};
                    end
                    1'b1: begin
                        extend_data = {16'b0, origin_data[31:16]};
                    end
                    default: extend_data = '0;
                endcase
            end
            4'b1111: begin
                extend_data = origin_data;
            end
            default: 
                extend_data = '0;
        endcase
    end
    

endmodule

`include "cpu.svh"

module extend_store
    import cpuDefine::*;
(
    input logic [3:0] wstrb,
    input logic[1:0] size,
    input DType origin_data,
    output DType extend_data
);

always_comb begin
    unique case (size)
        2'd0: begin
            unique case (wstrb)
            4'b0001:begin
                extend_data = {24'b0,origin_data[7:0]} ;
            end
            4'b0010:begin
                extend_data = {16'b0,origin_data[7:0], 8'b0};
            end
            4'b0100:begin
                extend_data = {8'b0, origin_data[7:0], 16'b0};
            end
            4'b1000:begin
                extend_data = {origin_data[7:0], 24'b0};
            end
            default: begin
                extend_data = '0;
            end
            endcase
        end
        2'd1: begin
            unique case(wstrb)
            4'b0011: begin
                extend_data = {16'b0, origin_data[15:0]};
            end
            4'b1100: begin
                extend_data = {origin_data[15:0], 16'b0};
            end
            default: begin
                extend_data = '0;
            end
            endcase
        end
        2'd2: begin
            extend_data = origin_data;
        end
        default: begin
            extend_data = '0;
        end
    endcase
end




endmodule : extend_store
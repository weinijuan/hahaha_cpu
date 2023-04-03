`include "cpu.svh"
module Pipeline
    import cpuDefine::*;
#(
    parameter WIDTH = 100
) (
    input logic clk,
    input logic reset,
    input logic valid_in,
    input logic[WIDTH-1:0] data_in,
    input logic ready_go,
    input logic[WIDTH-1:0] nop_data,
    input logic allow_in,
    output logic valid_out,
    output logic[WIDTH-1:0] data_out,
    output logic allow_out
);

    // valid = request and allow = response
    // valid_out = next valid_in != pipeline_valid

    logic pipeline_valid;
    logic[WIDTH-1:0] pipeline_data;
    // allow pre to this 
    assign allow_out = !pipeline_valid || (valid_out && allow_in);
    assign valid_out = pipeline_valid && ready_go;


    always_ff @(posedge clk) begin
        if (reset) begin
            pipeline_valid <= 1'b0;
        end else if (allow_out) begin
            pipeline_valid <= valid_in;
        end

        if (allow_out && valid_in) begin
            pipeline_data <= data_in;
        end
    end


    always_comb begin
        if (pipeline_valid) begin
            data_out = pipeline_data;
        end else begin
            data_out = nop_data;
        end
    end



endmodule

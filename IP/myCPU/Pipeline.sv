`include "cpu.svh"
module Pipeline
    import cpuDefine::*;
#(
    parameter WIDTH = 100,
    parameter reset_value = 0,
    parameter logic isPc = 0
) (
    input logic aclk,
    input logic aresetn,
    input logic valid_in,
    input logic [WIDTH-1:0] data_in,
    input logic ready_go,
    input logic [WIDTH-1:0] nop_data,
    input logic allow_in,
    input logic flush,
    output logic valid_out,
    output logic [WIDTH-1:0] data_out,
    output logic allow_out
);
// allow_in 和 valid_in 系列参与了逐级互锁机制，因此不能动
// 停顿， 让ready_go = 0即可
// 清空， 让flush = 0进而置 valid = 0.要注意 flush 和 ready_go
// 不要一直为0

    // valid = request and allow = response
    // valid_out = next valid_in != pipeline_valid

    logic pipeline_valid;
    logic [WIDTH-1:0] pipeline_data;
    // allow pre to this , allow_in = ~stall
    assign allow_out = !pipeline_valid || (valid_out && allow_in);
    assign valid_out = pipeline_valid && ready_go;


    always_ff @(posedge aclk) begin
        if (~aresetn || flush) begin
            pipeline_valid <= 1'b0;
            pipeline_data <= reset_value;
        end else if (allow_out) begin
            pipeline_valid <= valid_in;
        end

        if (allow_out && valid_in && aresetn) begin
            pipeline_data <= data_in;
        end
    end

    // not valid = nop 
    always_comb begin
        if (pipeline_valid || isPc) begin
            data_out = pipeline_data;
        end  else begin
            data_out = nop_data;
        end
    end



endmodule

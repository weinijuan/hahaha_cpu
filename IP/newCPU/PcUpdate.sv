import cpuDefine::*;
module PcUpdate(
    input logic clk, reset, en,
    input DType data, 
    output DType  pc
);

always_ff @(posedge clk ) begin 
    if (reset) begin
        pc <= '0;
    end else if (en) begin
        pc <= data;
    end
end

endmodule
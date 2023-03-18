import cpuDefine::*;
module DCache (
    input  logic clk,
    memWriteEn,
    input  Addr  readAddr,
    writeAddr,
    input  DType writeData,
    output DType readData
);
    // word align 
    DType RAM[addrLen-3:0];
    always @(posedge clk) begin
        if (memWriteEn) begin
            RAM[writeAddr[addrLen-1:2]] <= writeData;
        end
    end

    assign readData = RAM[readAddr];

endmodule

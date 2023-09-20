module debug_signal (
    input wire[31:0] pc,
    input wire[31:0] data,
    input wire[1:0] src,
    input wire en
);

wire[31:0] pc_r;
wire[31:0] data_r;
wire[1:0] src_r;
wire en_r;
assign pc_r = pc;
assign data_r = data;
assign src_r = data;
assign en_r = en; 




endmodule
module core_top
(
    input         aclk,
    input         aresetn,
    input  [ 7:0] intrpt,
    //AXI interface 
    //read reqest
    output [ 3:0] arid,
    output [31:0] araddr,
    output [ 7:0] arlen,
    output [ 2:0] arsize,
    output [ 1:0] arburst,
    output [ 1:0] arlock,
    output [ 3:0] arcache,
    output [ 2:0] arprot,
    output        arvalid,
    input         arready,
    //read back
    input  [ 3:0] rid,
    input  [31:0] rdata,
    input  [ 1:0] rresp,
    input         rlast,
    input         rvalid,
    output        rready,
    //write request
    output [ 3:0] awid,
    output [31:0] awaddr,
    output [ 7:0] awlen,
    output [ 2:0] awsize,
    output [ 1:0] awburst,
    output [ 1:0] awlock,
    output [ 3:0] awcache,
    output [ 2:0] awprot,
    output        awvalid,
    input         awready,
    //write data
    output [ 3:0] wid,
    output [31:0] wdata,
    output [ 3:0] wstrb,
    output        wlast,
    output        wvalid,
    input         wready,
    //write back
    input  [ 3:0] bid,
    input  [ 1:0] bresp,
    input         bvalid,
    output        bready,
    //debug info
    output [31:0] debug0_wb_pc,
    output [ 3:0] debug0_wb_rf_wen,
    output [ 4:0] debug0_wb_rf_wnum,
    output [31:0] debug0_wb_rf_wdata,
    output [31:0] debug1_wb_pc,
    output [ 3:0] debug1_wb_rf_wen,
    output [ 4:0] debug1_wb_rf_wnum,
    output [31:0] debug1_wb_rf_wdata
);


    // inst sram
    wire req_inst;
    wire wr_inst;
    wire [1:0] size_inst;
    wire [31:0] addr_inst;
    wire [3:0] wstrb_inst;
    wire [31:0] wdata_inst;
    wire addr_ok_inst;
    wire data_ok_inst;
    wire [31:0] rdata_inst;
    // data sram
    wire req_mem;
    wire wr_mem;
    wire [1:0] size_mem;
    wire [31:0] addr_mem;
    wire [3:0] wstrb_mem;
    wire [31:0] wdata_mem;
    wire addr_ok_mem;
    wire data_ok_mem;
    wire [31:0] rdata_mem;



    cpu_sram cpu_sram_u (
        .aclk(aclk),
        .aresetn(aresetn),
        .req_inst(req_inst),
        .wr_inst(wr_inst),
        .size_inst(size_inst),
        .addr_inst(addr_inst),
        .wstrb_inst(wstrb_inst),
        .wdata_inst(wdata_inst),
        .addr_ok_inst(addr_ok_inst),
        .data_ok_inst(data_ok_inst),
        .rdata_inst(rdata_inst),
        // data sram
        .req_mem(req_mem),
        .wr_mem(wr_mem),
        .size_mem(size_mem),
        .addr_mem(addr_mem),
        .wstrb_mem(wstrb_mem),
        .wdata_mem(wdata_mem),
        .addr_ok_mem(addr_ok_mem),
        .data_ok_mem(data_ok_mem),
        .rdata_mem(rdata_mem),
        .debug0_wb_pc(debug0_wb_pc) ,
        .debug0_wb_rf_wdata(debug0_wb_rf_wdata),
        .debug0_wb_rf_wen(debug0_wb_rf_wen),
        .debug0_wb_rf_wnum(debug0_wb_rf_wnum)
    );

    cpu_axi_interface cpu_axi_interface_u (
        .clk(aclk),
        .resetn(aresetn),
        .inst_req(req_inst),
        .inst_wr(wr_inst),
        .inst_size(size_inst),
        .inst_addr(addr_inst),
        .inst_wdata(wdata_inst),
        .inst_wstrb(wstrb_inst),
        .inst_rdata(rdata_inst),
        .inst_addr_ok(addr_ok_inst),
        .inst_data_ok(data_ok_inst),
        .data_req(req_mem),
        .data_wr(wr_mem),
        .data_size(size_mem),
        .data_wstrb(wstrb_mem),
        .data_addr(addr_mem),
        .data_wdata(wdata_mem),
        .data_rdata(rdata_mem),
        .data_addr_ok(addr_ok_mem),
        .data_data_ok(data_ok_mem),
        //axi
        //ar
        .arid(arid),
        .araddr(araddr),
        .arlen(arlen),
        .arsize(arsize),
        .arburst(arburst),
        .arlock(arlock),
        .arcache(arcache),
        .arprot(arprot),
        .arvalid(arvalid),
        .arready(arready),
        //r
        .rid(rid),
        .rdata(rdata),
        .rresp(rresp),
        .rlast(rlast),
        .rvalid(rvalid),
        .rready(rready),
        //aw
        .awid(awid),
        .awaddr(awaddr),
        .awlen(awlen),
        .awsize(awsize),
        .awburst(awburst),
        .awlock(awlock),
        .awcache(awcache),
        .awprot(awprot),
        .awvalid(awvalid),
        .awready(awready),
        //w
        .wid(wid),
        .wdata(wdata),
        .wstrb(wstrb),
        .wlast(wlast),
        .wvalid(wvalid),
        .wready(wready),
        //b
        .bid(bid),
        .bresp(bresp),
        .bvalid(bvalid),
        .bready(bready)
    );
endmodule

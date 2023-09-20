//`include "cache/sram_to_axi.v"
`define usetlb
module mycpu_top
(
    input         aclk,
    input         aresetn,
    input  [ 7:0] ext_int,
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
    input [7:0 ] intrpt,
    output [31:0] debug_wb_pc,
    output [ 3:0] debug_wb_rf_wen,
    output [ 3:0] debug_wb_rf_we,
    output [ 4:0] debug_wb_rf_wnum,
    output [31:0] debug_wb_rf_wdata
);
    assign debug_wb_rf_wen = ~debug_wb_rf_we;
    // inst sram
    wire req_inst;//i_req
    wire wr_inst;//i_wr
    wire [1:0] size_inst;//i_size
    wire [31:0] addr_inst;//i_addr
    wire [3:0] wstrb_inst;//i_wstrb
    wire [31:0] wdata_inst;//i_wdata
    wire addr_ok_inst;//i_addr_ok
    wire data_ok_inst;//i_data_ok
    wire [31:0] rdata_inst;//i_rdata
    // data sram
    wire req_mem;//d_req
    wire wr_mem;//d_wr
    wire [1:0] size_mem;//d_size
    wire [31:0] addr_mem;//d_addr
    wire [3:0] wstrb_mem;//d_wstrb
    wire [31:0] wdata_mem;//d_wdata
    wire addr_ok_mem;//d_addr_ok
    wire data_ok_mem;//d_data_ok
    wire [31:0] rdata_mem;//d_data


    logic i_uncached;
    logic d_uncached;

    wire cacheop_i_or_d;
    wire cacheop;
    wire cacheop_index;
    wire cacheop_hit;
    wire cacheop_wb;
    wire [31:0]cacheop_addr;
    wire i_cacheop_ok1;
    wire d_cacheop_ok1;
    wire i_cacheop_ok2;
    wire d_cacheop_ok2;
    wire cacheop_ok2;
    wire cacheop_ok1;
    assign cacheop_ok1 = i_cacheop_ok1|d_cacheop_ok1;
    assign cacheop_ok2 = i_cacheop_ok2|d_cacheop_ok2;
    //assign cacheop_addr = sram_to_axi.last_send;
    //wire fix_check;
    wire should_wb;
    /*cache_fixer cf(
       .reset(~aresetn),
       .clk(aclk),
       .valid(arvalid|awvalid),
       .req_ok(d_cacheop_ok2),
       .should_wb(should_wb)
    );*/
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
        .debug_wb_pc(debug_wb_pc) ,
        .debug_wb_rf_wdata(debug_wb_rf_wdata),
        .debug_wb_rf_we(debug_wb_rf_we),
        .debug_wb_rf_wnum(debug_wb_rf_wnum),
        .i_uncached(i_uncached),
        .d_uncached(d_uncached),
        .cacheop_i_or_d(cacheop_i_or_d),
        .cacheop(cacheop),
        .cacheop_index(cacheop_index),
        .cacheop_hit(cacheop_hit),
        .cacheop_wb(cacheop_wb),
        .cacheop_addr(cacheop_addr),
        //.cacheop_ok1(cacheop_ok1),
        .cacheop_ok2(cacheop_ok2)
    );
    sram_to_axi sram_to_axi_u(
        .clk(aclk),
        .reset(~aresetn),

        //i_cache
        .i_req(req_inst),
        .i_wr(wr_inst),
        .i_size(size_inst),
        .i_addr(addr_inst),
        .i_wdata(wdata_inst),
        .i_wstrb(wstrb_inst),
        .i_rdata(rdata_inst),
        .i_addr_ok(addr_ok_inst),
        .i_data_ok(data_ok_inst),
        .i_uncached(i_uncached),
        .i_cacheop(cacheop&~cacheop_i_or_d),
        .i_cacheop_index(cacheop_index),
        .i_cacheop_hit(cacheop_hit),
        .i_cacheop_wb(cacheop_wb),
        .i_cacheop_addr(cacheop_addr),
        .i_cacheop_ok1(i_cacheop_ok1),
        .i_cacheop_ok2(i_cacheop_ok2),
        
        //d_cache
        .d_req(req_mem),
        .d_wr(wr_mem),
        .d_size(size_mem),
        .d_addr(addr_mem),
        .d_wdata(wdata_mem),
        .d_wstrb(wstrb_mem),
        .d_rdata(rdata_mem),
        .d_addr_ok(addr_ok_mem),
        .d_data_ok(data_ok_mem),
        .d_uncached(d_uncached),
        .d_cacheop(cacheop&cacheop_i_or_d),
        .d_cacheop_index(cacheop_index),
        .d_cacheop_hit(cacheop_hit),
        .d_cacheop_wb(cacheop_wb),
        .d_cacheop_addr(cacheop_addr),
        .d_cacheop_ok1(d_cacheop_ok1),
        .d_cacheop_ok2(d_cacheop_ok2),

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
    
    /*
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
     );*/
     endmodule

module ICache(
    input logic clk, 
    input Addr addr, 
    output Instr instr
);
    Instr RAM[instrNum-1:0];
    // todo there will have problem because RAM don't have all address space 
    // so need change addrLen below
    assign instr = RAM[addr[addrLen-1:2]];

endmodule


-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2019.2 (lin64) Build 2708876 Wed Nov  6 21:39:14 MST 2019
-- Date        : Sun Aug 13 11:55:34 2023
-- Host        : weinijuan-A29R running 64-bit Ubuntu 23.04
-- Command     : write_vhdl -force -mode synth_stub
--               /home/weinijuan/cpu/fpga/loongson/system_run/system_run.runs/sram_32x52bit_synth_1/sram_32x52bit_stub.vhdl
-- Design      : sram_32x52bit
-- Purpose     : Stub declaration of top-level module interface
-- Device      : xc7a200tfbg676-2
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity sram_32x52bit is
  Port ( 
    clka : in STD_LOGIC;
    ena : in STD_LOGIC;
    wea : in STD_LOGIC_VECTOR ( 0 to 0 );
    addra : in STD_LOGIC_VECTOR ( 4 downto 0 );
    dina : in STD_LOGIC_VECTOR ( 51 downto 0 );
    douta : out STD_LOGIC_VECTOR ( 51 downto 0 )
  );

end sram_32x52bit;

architecture stub of sram_32x52bit is
attribute syn_black_box : boolean;
attribute black_box_pad_pin : string;
attribute syn_black_box of stub : architecture is true;
attribute black_box_pad_pin of stub : architecture is "clka,ena,wea[0:0],addra[4:0],dina[51:0],douta[51:0]";
attribute x_core_info : string;
attribute x_core_info of stub : architecture is "blk_mem_gen_v8_4_4,Vivado 2019.2";
begin
end;

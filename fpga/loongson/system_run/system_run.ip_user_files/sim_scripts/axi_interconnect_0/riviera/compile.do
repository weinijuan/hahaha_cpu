vlib work
vlib riviera

vlib riviera/xpm
vlib riviera/fifo_generator_v13_2_5
vlib riviera/axi_interconnect_v1_7_17
vlib riviera/xil_defaultlib

vmap xpm riviera/xpm
vmap fifo_generator_v13_2_5 riviera/fifo_generator_v13_2_5
vmap axi_interconnect_v1_7_17 riviera/axi_interconnect_v1_7_17
vmap xil_defaultlib riviera/xil_defaultlib

vlog -work xpm  -sv2k12 \
"/home/weinijuan/open/vivado/Vivado/2019.2/data/ip/xpm/xpm_cdc/hdl/xpm_cdc.sv" \
"/home/weinijuan/open/vivado/Vivado/2019.2/data/ip/xpm/xpm_memory/hdl/xpm_memory.sv" \

vcom -work xpm -93 \
"/home/weinijuan/open/vivado/Vivado/2019.2/data/ip/xpm/xpm_VCOMP.vhd" \

vlog -work fifo_generator_v13_2_5  -v2k5 \
"../../../ipstatic/simulation/fifo_generator_vlog_beh.v" \

vcom -work fifo_generator_v13_2_5 -93 \
"../../../ipstatic/hdl/fifo_generator_v13_2_rfs.vhd" \

vlog -work fifo_generator_v13_2_5  -v2k5 \
"../../../ipstatic/hdl/fifo_generator_v13_2_rfs.v" \

vlog -work axi_interconnect_v1_7_17  -v2k5 \
"../../../ipstatic/hdl/axi_interconnect_v1_7_vl_rfs.v" \

vlog -work xil_defaultlib  -v2k5 \
"../../../ip/axi_interconnect_0/sim/axi_interconnect_0.v" \

vlog -work xil_defaultlib \
"glbl.v"


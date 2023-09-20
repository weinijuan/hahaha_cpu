# 
# Synthesis run script generated by Vivado
# 

set TIME_start [clock seconds] 
proc create_report { reportName command } {
  set status "."
  append status $reportName ".fail"
  if { [file exists $status] } {
    eval file delete [glob $status]
  }
  send_msg_id runtcl-4 info "Executing : $command"
  set retval [eval catch { $command } msg]
  if { $retval != 0 } {
    set fp [open $status w]
    close $fp
    send_msg_id runtcl-5 warning "$msg"
  }
}
set_param chipscope.maxJobs 2
set_param tcl.collectionResultDisplayLimit 0
set_param xicom.use_bs_reader 1
create_project -in_memory -part xc7a200tfbg676-2

set_param project.singleFileAddWarning.threshold 0
set_param project.compositeFile.enableAutoGeneration 0
set_param synth.vivado.isSynthRun true
set_msg_config -source 4 -id {IP_Flow 19-2162} -severity warning -new_severity info
set_property webtalk.parent_dir /home/weinijuan/cpu/fpga/loongson/system_run/system_run.cache/wt [current_project]
set_property parent.project_path /home/weinijuan/cpu/fpga/loongson/system_run/system_run.xpr [current_project]
set_property XPM_LIBRARIES {XPM_CDC XPM_MEMORY} [current_project]
set_property default_lib xil_defaultlib [current_project]
set_property target_language Verilog [current_project]
set_property ip_output_repo /home/weinijuan/cpu/fpga/loongson/system_run/system_run.cache/ip [current_project]
set_property ip_cache_permissions {read write} [current_project]
read_verilog {
  /home/weinijuan/cpu/chip/soc_demo/loongson/config.h
  /home/weinijuan/cpu/IP/APB_DEV/URT/uart_defines.h
  /home/weinijuan/cpu/IP/myCPU/cpu.svh
}
set_property file_type "Verilog Header" [get_files /home/weinijuan/cpu/chip/soc_demo/loongson/config.h]
set_property file_type "Verilog Header" [get_files /home/weinijuan/cpu/IP/APB_DEV/URT/uart_defines.h]
set_property file_type "Verilog Header" [get_files /home/weinijuan/cpu/IP/myCPU/cpu.svh]
read_verilog -library xil_defaultlib -sv {
  /home/weinijuan/cpu/IP/myCPU/Comparator.sv
  /home/weinijuan/cpu/IP/myCPU/Control.sv
  /home/weinijuan/cpu/IP/myCPU/Forwarding.sv
  /home/weinijuan/cpu/IP/myCPU/HazardDetect.sv
  /home/weinijuan/cpu/IP/myCPU/ImmGen.sv
  /home/weinijuan/cpu/IP/myCPU/Pipeline.sv
  /home/weinijuan/cpu/IP/myCPU/addr_trans.sv
  /home/weinijuan/cpu/IP/myCPU/alu.sv
  /home/weinijuan/cpu/IP/myCPU/cpu_sram.sv
  /home/weinijuan/cpu/IP/myCPU/csr_.sv
  /home/weinijuan/cpu/IP/myCPU/extend_memData.sv
  /home/weinijuan/cpu/IP/myCPU/extend_store.sv
  /home/weinijuan/cpu/IP/myCPU/mycpu_top.sv
  /home/weinijuan/cpu/IP/myCPU/regfile.sv
  /home/weinijuan/cpu/IP/myCPU/signed_to_abs.sv
  /home/weinijuan/cpu/IP/myCPU/tlb_.sv
}
read_verilog -library xil_defaultlib {
  /home/weinijuan/cpu/IP/myCPU/addr_parse.v
  /home/weinijuan/cpu/IP/APB_DEV/apb_dev_top_with_nand.v
  /home/weinijuan/cpu/IP/APB_DEV/apb_mux2.v
  /home/weinijuan/cpu/IP/AMBA/axi2apb.v
  /home/weinijuan/cpu/IP/AMBA/axi_mux_syn.v
  /home/weinijuan/cpu/IP/myCPU/axi_wr.v
  /home/weinijuan/cpu/IP/MAC/utility.v
  /home/weinijuan/cpu/IP/MAC/bd.v
  /home/weinijuan/cpu/IP/myCPU/bin_to_1h.v
  /home/weinijuan/cpu/IP/myCPU/bram.v
  /home/weinijuan/cpu/IP/myCPU/cache.v
  /home/weinijuan/cpu/IP/myCPU/cache_table.v
  /home/weinijuan/cpu/IP/CONFREG/confreg_syn.v
  /home/weinijuan/cpu/IP/MAC/csr.v
  /home/weinijuan/cpu/IP/myCPU/div.v
  /home/weinijuan/cpu/IP/DMA/dma.v
  /home/weinijuan/cpu/IP/MAC/dma.v
  /home/weinijuan/cpu/IP/MAC/ethernet_top.v
  /home/weinijuan/cpu/IP/SPI/godson_sbridge_spi.v
  /home/weinijuan/cpu/IP/myCPU/isolate_rightmost.v
  /home/weinijuan/cpu/IP/myCPU/lfsr.v
  /home/weinijuan/cpu/IP/MAC/mac.v
  /home/weinijuan/cpu/IP/MAC/mac2axi.v
  /home/weinijuan/cpu/IP/MAC/mac_axi.v
  /home/weinijuan/cpu/IP/MAC/mac_top.v
  /home/weinijuan/cpu/IP/MAC/maccsr2axi.v
  /home/weinijuan/cpu/IP/MAC/macdata2axi.v
  /home/weinijuan/cpu/IP/myCPU/mux_1h.v
  /home/weinijuan/cpu/IP/APB_DEV/NAND/nand.v
  /home/weinijuan/cpu/IP/APB_DEV/nand_module.v
  /home/weinijuan/cpu/IP/APB_DEV/URT/raminfr.v
  /home/weinijuan/cpu/IP/MAC/rc.v
  /home/weinijuan/cpu/IP/myCPU/replace_way_gen.v
  /home/weinijuan/cpu/IP/MAC/rfifo.v
  /home/weinijuan/cpu/IP/MAC/rlsm.v
  /home/weinijuan/cpu/IP/MAC/rstc.v
  /home/weinijuan/cpu/IP/myCPU/sram_to_axi.v
  /home/weinijuan/cpu/IP/MAC/tc.v
  /home/weinijuan/cpu/IP/MAC/tfifo.v
  /home/weinijuan/cpu/IP/MAC/tlsm.v
  /home/weinijuan/cpu/IP/APB_DEV/URT/uart_receiver.v
  /home/weinijuan/cpu/IP/APB_DEV/URT/uart_regs.v
  /home/weinijuan/cpu/IP/APB_DEV/URT/uart_rfifo.v
  /home/weinijuan/cpu/IP/APB_DEV/URT/uart_sync_flops.v
  /home/weinijuan/cpu/IP/APB_DEV/URT/uart_tfifo.v
  /home/weinijuan/cpu/IP/APB_DEV/URT/uart_top.v
  /home/weinijuan/cpu/IP/APB_DEV/URT/uart_transmitter.v
  /home/weinijuan/cpu/chip/soc_demo/loongson/soc_top.v
}
read_ip -quiet /home/weinijuan/cpu/IP/xilinx_ip/axi_clock_converter_0/axi_clock_converter_0/axi_clock_converter_0.xci
set_property used_in_synthesis false [get_files -all /home/weinijuan/cpu/IP/xilinx_ip/axi_clock_converter_0/axi_clock_converter_0/axi_clock_converter_0_clocks.xdc]
set_property used_in_implementation false [get_files -all /home/weinijuan/cpu/IP/xilinx_ip/axi_clock_converter_0/axi_clock_converter_0/axi_clock_converter_0_clocks.xdc]
set_property used_in_implementation false [get_files -all /home/weinijuan/cpu/IP/xilinx_ip/axi_clock_converter_0/axi_clock_converter_0/axi_clock_converter_0_ooc.xdc]

read_ip -quiet /home/weinijuan/cpu/IP/xilinx_ip/axi_interconnect_0/axi_interconnect_0.xci
set_property used_in_synthesis false [get_files -all /home/weinijuan/cpu/IP/xilinx_ip/axi_interconnect_0/axi_interconnect_0_impl_clocks.xdc]
set_property used_in_implementation false [get_files -all /home/weinijuan/cpu/IP/xilinx_ip/axi_interconnect_0/axi_interconnect_0_impl_clocks.xdc]
set_property used_in_implementation false [get_files -all /home/weinijuan/cpu/IP/xilinx_ip/axi_interconnect_0/axi_interconnect_0_ooc.xdc]
set_property used_in_implementation false [get_files -all /home/weinijuan/cpu/IP/xilinx_ip/axi_interconnect_0/axi_interconnect_0_clocks.xdc]

read_ip -quiet /home/weinijuan/cpu/IP/xilinx_ip/clk_pll_33/clk_pll_33.xci
set_property used_in_implementation false [get_files -all /home/weinijuan/cpu/IP/xilinx_ip/clk_pll_33/clk_pll_33_board.xdc]
set_property used_in_implementation false [get_files -all /home/weinijuan/cpu/IP/xilinx_ip/clk_pll_33/clk_pll_33.xdc]
set_property used_in_implementation false [get_files -all /home/weinijuan/cpu/IP/xilinx_ip/clk_pll_33/clk_pll_33_ooc.xdc]

read_ip -quiet /home/weinijuan/cpu/IP/xilinx_ip/clk_wiz_0_loongson/clk_wiz_0.xci
set_property used_in_implementation false [get_files -all /home/weinijuan/cpu/IP/xilinx_ip/clk_wiz_0_loongson/clk_wiz_0_board.xdc]
set_property used_in_implementation false [get_files -all /home/weinijuan/cpu/IP/xilinx_ip/clk_wiz_0_loongson/clk_wiz_0.xdc]
set_property used_in_implementation false [get_files -all /home/weinijuan/cpu/IP/xilinx_ip/clk_wiz_0_loongson/clk_wiz_0_late.xdc]
set_property used_in_implementation false [get_files -all /home/weinijuan/cpu/IP/xilinx_ip/clk_wiz_0_loongson/clk_wiz_0_ooc.xdc]

read_ip -quiet /home/weinijuan/cpu/IP/xilinx_ip/dpram_512x32/dpram_512x32.xci
set_property used_in_implementation false [get_files -all /home/weinijuan/cpu/IP/xilinx_ip/dpram_512x32/dpram_512x32_ooc.xdc]

read_ip -quiet /home/weinijuan/cpu/IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32.xci
set_property used_in_implementation false [get_files -all /home/weinijuan/cpu/IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/constraints/mig_axi_32_ooc.xdc]
set_property used_in_implementation false [get_files -all /home/weinijuan/cpu/IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/constraints/mig_axi_32.xdc]

# Mark all dcp files as not used in implementation to prevent them from being
# stitched into the results of this synthesis run. Any black boxes in the
# design are intentionally left as such for best results. Dcp files will be
# stitched into the design at a later time, either when this synthesis run is
# opened, or when it is stitched into a dependent implementation run.
foreach dcp [get_files -quiet -all -filter file_type=="Design\ Checkpoint"] {
  set_property used_in_implementation false $dcp
}
read_xdc /home/weinijuan/cpu/fpga/loongson/soc_up.xdc
set_property used_in_implementation false [get_files /home/weinijuan/cpu/fpga/loongson/soc_up.xdc]

set_param ips.enableIPCacheLiteLoad 1
close [open __synthesis_is_running__ w]

synth_design -top soc_top -part xc7a200tfbg676-2


# disable binary constraint mode for synth run checkpoints
set_param constraints.enableBinaryConstraints false
write_checkpoint -force -noxdef soc_top.dcp
create_report "synth_1_synth_report_utilization_0" "report_utilization -file soc_top_utilization_synth.rpt -pb soc_top_utilization_synth.pb"
file delete __synthesis_is_running__
close [open __synthesis_is_complete__ w]
vlib questa_lib/work
vlib questa_lib/msim

vlib questa_lib/msim/xpm
vlib questa_lib/msim/xil_defaultlib

vmap xpm questa_lib/msim/xpm
vmap xil_defaultlib questa_lib/msim/xil_defaultlib

vlog -work xpm -64 -sv \
"/home/weinijuan/open/vivado/Vivado/2019.2/data/ip/xpm/xpm_cdc/hdl/xpm_cdc.sv" \
"/home/weinijuan/open/vivado/Vivado/2019.2/data/ip/xpm/xpm_memory/hdl/xpm_memory.sv" \

vcom -work xpm -64 -93 \
"/home/weinijuan/open/vivado/Vivado/2019.2/data/ip/xpm/xpm_VCOMP.vhd" \

vlog -work xil_defaultlib -64 \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/phy/mig_7series_v4_2_ddr_phy_wrlvl.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/phy/mig_7series_v4_2_poc_cc.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/phy/mig_7series_v4_2_ddr_of_pre_fifo.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/phy/mig_7series_v4_2_ddr_mc_phy_wrapper.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/phy/mig_7series_v4_2_ddr_if_post_fifo.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/phy/mig_7series_v4_2_ddr_phy_init.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/phy/mig_7series_v4_2_ddr_byte_group_io.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/phy/mig_7series_v4_2_ddr_prbs_gen.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/phy/mig_7series_v4_2_ddr_phy_ocd_lim.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/phy/mig_7series_v4_2_ddr_phy_ocd_po_cntlr.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/phy/mig_7series_v4_2_ddr_phy_dqs_found_cal.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/phy/mig_7series_v4_2_poc_meta.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/phy/mig_7series_v4_2_ddr_skip_calib_tap.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/phy/mig_7series_v4_2_ddr_phy_rdlvl.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/phy/mig_7series_v4_2_ddr_mc_phy.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/phy/mig_7series_v4_2_poc_edge_store.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/phy/mig_7series_v4_2_ddr_phy_ck_addr_cmd_delay.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/phy/mig_7series_v4_2_ddr_phy_oclkdelay_cal.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/phy/mig_7series_v4_2_poc_top.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/phy/mig_7series_v4_2_poc_pd.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/phy/mig_7series_v4_2_ddr_byte_lane.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/phy/mig_7series_v4_2_ddr_phy_4lanes.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/phy/mig_7series_v4_2_ddr_phy_dqs_found_cal_hr.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/phy/mig_7series_v4_2_ddr_phy_wrlvl_off_delay.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/phy/mig_7series_v4_2_ddr_phy_top.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/phy/mig_7series_v4_2_ddr_phy_wrcal.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/phy/mig_7series_v4_2_ddr_phy_prbs_rdlvl.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/phy/mig_7series_v4_2_ddr_phy_ocd_mux.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/phy/mig_7series_v4_2_ddr_phy_ocd_edge.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/phy/mig_7series_v4_2_poc_tap_base.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/phy/mig_7series_v4_2_ddr_phy_tempmon.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/phy/mig_7series_v4_2_ddr_phy_ocd_samp.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/phy/mig_7series_v4_2_ddr_phy_ocd_cntlr.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/phy/mig_7series_v4_2_ddr_calib_top.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/phy/mig_7series_v4_2_ddr_phy_ocd_data.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/ecc/mig_7series_v4_2_ecc_gen.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/ecc/mig_7series_v4_2_ecc_buf.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/ecc/mig_7series_v4_2_ecc_dec_fix.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/ecc/mig_7series_v4_2_ecc_merge_enc.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/ecc/mig_7series_v4_2_fi_xor.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/ip_top/mig_7series_v4_2_mem_intfc.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/ip_top/mig_7series_v4_2_memc_ui_top_axi.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/axi/mig_7series_v4_2_ddr_r_upsizer.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/axi/mig_7series_v4_2_axi_mc_wr_cmd_fsm.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/axi/mig_7series_v4_2_ddr_carry_latch_and.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/axi/mig_7series_v4_2_ddr_a_upsizer.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/axi/mig_7series_v4_2_axi_mc_incr_cmd.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/axi/mig_7series_v4_2_ddr_comparator_sel.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/axi/mig_7series_v4_2_axi_mc_cmd_translator.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/axi/mig_7series_v4_2_axi_ctrl_top.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/axi/mig_7series_v4_2_axi_ctrl_reg.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/axi/mig_7series_v4_2_ddr_comparator_sel_static.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/axi/mig_7series_v4_2_axi_ctrl_addr_decode.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/axi/mig_7series_v4_2_axi_ctrl_write.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/axi/mig_7series_v4_2_axi_mc_cmd_fsm.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/axi/mig_7series_v4_2_ddr_comparator.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/axi/mig_7series_v4_2_axi_mc_r_channel.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/axi/mig_7series_v4_2_axi_mc_wrap_cmd.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/axi/mig_7series_v4_2_ddr_carry_or.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/axi/mig_7series_v4_2_axi_mc_aw_channel.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/axi/mig_7series_v4_2_ddr_axi_register_slice.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/axi/mig_7series_v4_2_ddr_carry_latch_or.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/axi/mig_7series_v4_2_ddr_w_upsizer.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/axi/mig_7series_v4_2_axi_mc.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/axi/mig_7series_v4_2_ddr_carry_and.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/axi/mig_7series_v4_2_axi_mc_cmd_arbiter.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/axi/mig_7series_v4_2_axi_mc_simple_fifo.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/axi/mig_7series_v4_2_axi_ctrl_reg_bank.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/axi/mig_7series_v4_2_axi_mc_w_channel.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/axi/mig_7series_v4_2_ddr_axi_upsizer.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/axi/mig_7series_v4_2_axi_mc_fifo.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/axi/mig_7series_v4_2_axi_mc_b_channel.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/axi/mig_7series_v4_2_axi_mc_ar_channel.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/axi/mig_7series_v4_2_axi_ctrl_read.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/axi/mig_7series_v4_2_ddr_axic_register_slice.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/axi/mig_7series_v4_2_ddr_command_fifo.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/controller/mig_7series_v4_2_round_robin_arb.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/controller/mig_7series_v4_2_bank_queue.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/controller/mig_7series_v4_2_arb_mux.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/controller/mig_7series_v4_2_bank_state.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/controller/mig_7series_v4_2_arb_row_col.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/controller/mig_7series_v4_2_bank_common.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/controller/mig_7series_v4_2_arb_select.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/controller/mig_7series_v4_2_rank_cntrl.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/controller/mig_7series_v4_2_mc.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/controller/mig_7series_v4_2_bank_mach.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/controller/mig_7series_v4_2_rank_mach.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/controller/mig_7series_v4_2_rank_common.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/controller/mig_7series_v4_2_col_mach.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/controller/mig_7series_v4_2_bank_compare.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/controller/mig_7series_v4_2_bank_cntrl.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/ui/mig_7series_v4_2_ui_cmd.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/ui/mig_7series_v4_2_ui_rd_data.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/ui/mig_7series_v4_2_ui_wr_data.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/ui/mig_7series_v4_2_ui_top.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/clocking/mig_7series_v4_2_clk_ibuf.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/clocking/mig_7series_v4_2_tempmon.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/clocking/mig_7series_v4_2_iodelay_ctrl.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/clocking/mig_7series_v4_2_infrastructure.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/mig_axi_32_mig_sim.v" \
"../../../../../../../IP/xilinx_ip/mig_axi_32_loongson/mig_axi_32/user_design/rtl/mig_axi_32.v" \

vlog -work xil_defaultlib \
"glbl.v"

#!/bin/bash -f
# ****************************************************************************
# Vivado (TM) v2019.2 (64-bit)
#
# Filename    : simulate.sh
# Simulator   : Xilinx Vivado Simulator
# Description : Script for simulating the design by launching the simulator
#
# Generated by Vivado on Tue Aug 15 11:19:23 CST 2023
# SW Build 2708876 on Wed Nov  6 21:39:14 MST 2019
#
# Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
#
# usage: simulate.sh
#
# ****************************************************************************
set -Eeuo pipefail
echo "xsim soc_top_behav -key {Behavioral:sim_1:Functional:soc_top} -tclbatch soc_top.tcl -log simulate.log"
xsim soc_top_behav -key {Behavioral:sim_1:Functional:soc_top} -tclbatch soc_top.tcl -log simulate.log

#!/bin/sh

set -eu

# cleanup
rm -rf obj_dir
rm -f dfinal.vcd

#run Verilator to translate Verilog into C++, including C++ testbench
verilator -Wall --cc --trace dfinal.sv --exe --build dfinal_tb.cpp


#run executable sim file
obj_dir/Vdfinal

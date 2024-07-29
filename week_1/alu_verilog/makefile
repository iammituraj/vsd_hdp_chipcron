#==================================================================================
# File         : Makefile to compile, simulate Verilog modules
# Developer    : Mitu Raj
# Date         : July-2024
# Dependencies : All source files & sim directory should be in the same folder
#==================================================================================
.ONESHELL:

# DIR paths
SIM_DIR = $(shell pwd)/sim

# Default
VVP = example

compile:
	@echo "| INFO: Compiling all source files..."
	iverilog -o $(SIM_DIR)/$(VVP).vvp *.v
	cp *.vcd $(SIM_DIR)

sim:
	@echo "| INFO: Launching simulation with GTKWave..."
	vvp sim/$(VVP).vvp

clean:
	@rm -rf $(SIM_DIR)/*
	@rm *.vcd
	echo "| INFO: Cleaned sim directory!"

.PHONY: compile sim clean
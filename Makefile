# Verification tool configuration
VERILATOR = verilator
CXX = g++
FLAGS = -Wall -Wno-fatal --trace --cc -CFLAGS "-I../../tb -I../../src"

# Project directories
SRC_DIR = src
TB_DIR = tb
SIM_DIR = sim

.PHONY: all compile run view clean

all: run

compile:
	@mkdir -p $(SIM_DIR)
	$(VERILATOR) $(FLAGS) \
		-I$(SRC_DIR) \
		-I$(TB_DIR) \
		$(SRC_DIR)/top_accelerator.sv \
		$(SRC_DIR)/mac_unit.sv \
		$(SRC_DIR)/sync_fifo.sv \
		--exe ../../$(TB_DIR)/tb_top.cpp \
		--Mdir $(SIM_DIR)/obj_dir
	$(MAKE) -C $(SIM_DIR)/obj_dir -f Vtop_accelerator.mk Vtop_accelerator

run: compile
	@echo "--- Running Simulation ---"
	./$(SIM_DIR)/obj_dir/Vtop_accelerator

view:
	@echo "--- Opening Waveform in GTKWave ---"
	gtkwave $(SIM_DIR)/waveform.vcd

clean:
	rm -rf $(SIM_DIR)
REP_INC_DIR += src/core/board/virt_qemu_riscv

SRC_CC += spec/riscv/timer.cc

include $(REP_DIR)/lib/mk/spec/riscv/core-hw.mk

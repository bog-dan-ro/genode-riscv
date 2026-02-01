REP_INC_DIR += src/core/board/migv

SRC_CC += board/migv/timer.cc

vpath board/migv/timer.cc $(REP_DIR)/src/core

include $(REP_DIR)/lib/mk/spec/riscv/core-hw.mk

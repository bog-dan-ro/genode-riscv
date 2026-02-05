/*
 * \brief   RISC-V Qemu specific board definitions
 * \author  Sebastian Sumpf
 * \author  Stefan Kalkowski
 * \date    2021-02-09
 */

/*
 * Copyright (C) 2021 Genode Labs GmbH
 *
 * This file is part of the Genode OS framework, which is distributed
 * under the terms of the GNU Affero General Public License version 3.
 */

#ifndef _SRC__INCLUDE__HW__SPEC__RISCV__MILKV_MEGREZ_BOARD_H_
#define _SRC__INCLUDE__HW__SPEC__RISCV__MILKV_MEGREZ_BOARD_H_

#include <hw/spec/riscv/boot_info.h>
#include <hw/spec/riscv/cpu.h>
#include <hw/spec/riscv/page_table.h>
#include <hw/spec/riscv/sbi.h>

namespace Hw::Riscv_board {

    enum {
        RAM_BASE  = 0x0000000080080000,
        RAM_SIZE  = 0x00000007fff80000, // 32Gb
        TIMER_HZ  = 0x000f4240,
        PLIC_BASE = 0x0c000000,
        PLIC_SIZE = 0x04000000,
    };

    static constexpr Genode::size_t NR_OF_CPUS = 1;

    enum { UART_BASE, UART_CLOCK };

    struct Serial : Hw::Riscv_uart
    {
        Serial(Genode::addr_t, Genode::size_t, unsigned) {}
    };

    using Cpu = Hw::Riscv_cpu;
}

#endif /* _SRC__INCLUDE__HW__SPEC__RISCV__MILKV_MEGREZ_BOARD_H_ */

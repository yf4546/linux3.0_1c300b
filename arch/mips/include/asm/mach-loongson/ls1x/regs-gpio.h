/*
 * Copyright (c) 2012 Tang, Haifeng <tanghaifeng-gz@loongson.cn>
 * Loongson 1 GPIO Register Definitions.
 *
 * This program is free software; you can redistribute  it and/or modify it
 * under  the terms of  the GNU General  Public License as published by the
 * Free Software Foundation;  either version 2 of the  License, or (at your
 * option) any later version.
 */

#ifndef __ASM_MACH_LOONGSON1_REGS_GPIO_H
#define __ASM_MACH_LOONGSON1_REGS_GPIO_H

#define LS1X_GPIO_REG(x) \
		((void __iomem *)KSEG1ADDR(LS1X_GPIO_BASE + (x)))

/* GPIO 0-31 */
#define LS1X_GPIO_CFG0		LS1X_GPIO_REG(0x0)	/* 配置寄存器 */
#define LS1X_GPIO_OE0		LS1X_GPIO_REG(0x10)	/* 输入使能寄存器 */
#define LS1X_GPIO_IN0		LS1X_GPIO_REG(0x20)	/* 输入寄存器 */
#define LS1X_GPIO_OUT0		LS1X_GPIO_REG(0x30)	/* 输出寄存器 */
/* 复用PAD */
#if defined(CONFIG_LS1A_MACH)
	#define INIT0_OFFSET	(0)
	#define INIT1_OFFSET	(1)
	#define LCD_OFFSET	(2)
	#define INIT0_MASK	(0x1)
	#define INIT1_MASK	(0x1)
	#define LCD_MASK	(0x3fffffff)
#elif	defined(CONFIG_LS1B_MACH)

#endif

/* GPIO 32-63 */
#define LS1X_GPIO_CFG1		LS1X_GPIO_REG(0x4)
#define LS1X_GPIO_OE1		LS1X_GPIO_REG(0x14)
#define LS1X_GPIO_IN1		LS1X_GPIO_REG(0x24)
#define LS1X_GPIO_OUT1		LS1X_GPIO_REG(0x34)
/* 复用PAD */
#if defined(CONFIG_LS1A_MACH)
	#define KB_OFFSET	(0)
	#define MB_OFFSET	(2)
	#define AC97_OFFSET	(4)
	#define SPI0_OFFSET	(8)
	#define SPI1_OFFSET	(12)
	#define UART0_OFFSET	(16)
	#define UART1_OFFSET	(24)
	#define UART2_OFFSET	(28)
	#define UART3_OFFSET	(30)
	#define KB_MASK	(0x3)
	#define MB_MASK	(0x3)
	#define AC97_MASK	(0xf)
	#define SPI0_MASK	(0xf)
	#define SPI1_MASK	(0xf)
	#define UART0_MASK	(0xff)
	#define UART1_MASK	(0xf)
	#define UART2_MASK	(0x3)
	#define UART3_MASK	(0x3)
#elif	defined(CONFIG_LS1B_MACH)

#endif

#ifdef CONFIG_LS1A_MACH
/* GPIO 63-87 */
#define LS1X_GPIO_CFG2		LS1X_GPIO_REG(0x8)
#define LS1X_GPIO_OE2		LS1X_GPIO_REG(0x18)
#define LS1X_GPIO_IN2		LS1X_GPIO_REG(0x28)
#define LS1X_GPIO_OUT2		LS1X_GPIO_REG(0x38)
	#define I2C_OFFSET	(0)
	#define CAN0_OFFSET	(2)
	#define CAN1_OFFSET	(4)
	#define LPC_OFFSET	(6)
	#define NAND_OFFSET	(12)
	#define PWM_OFFSET	(20)
	#define I2C_MASK	(0x3)
	#define CAN0_MASK	(0x3)
	#define CAN1_MASK	(0x3)
	#define LPC_MASK	(0x3f)
	#define NAND_MASK	(0xff)
	#define PWM_MASK	(0xf)
#endif

#ifdef CONFIG_LS1C_MACH
/* GPIO 63-87 */
#define LS1X_GPIO_CFG3		LS1X_GPIO_REG(0x8)
#define LS1X_GPIO_OE3		LS1X_GPIO_REG(0x18)
#define LS1X_GPIO_IN3		LS1X_GPIO_REG(0x28)
#define LS1X_GPIO_OUT3		LS1X_GPIO_REG(0x38)
#endif

#endif

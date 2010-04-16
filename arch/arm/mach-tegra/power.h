/*
 * arch/arm/mach-tegra/power.h
 *
 * Declarations for power state transition code
 *
 * Copyright (c) 2010, NVIDIA Corporation.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef __MACH_TEGRA_POWER_H
#define __MACH_TEGRA_POWER_H

#define TEGRA_POWER_SDRAM_SELFREFRESH	0x400 /* SDRAM is in self-refresh */

#define TEGRA_POWER_PWRREQ_POLARITY	0x1   /* core power request polarity */
#define TEGRA_POWER_PWRREQ_OE		0x2   /* core power request enable */
#define TEGRA_POWER_SYSCLK_POLARITY	0x4   /* sys clk polarity */
#define TEGRA_POWER_SYSCLK_OE		0x8   /* system clock enable */
#define TEGRA_POWER_PWRGATE_DIS		0x10  /* power gate disabled */
#define TEGRA_POWER_EFFECT_LP0		0x40  /* enter LP0 when CPU pwr gated */
#define TEGRA_POWER_CPU_PWRREQ_POLARITY 0x80  /* CPU power request polarity */
#define TEGRA_POWER_CPU_PWRREQ_OE	0x100 /* CPU power request enable */


#ifndef __ASSEMBLY__
void tegra_lp2_set_trigger(unsigned long cycles);
void __cortex_a9_save(unsigned int mode);
void tegra_lp2_startup(void);
#endif

#endif

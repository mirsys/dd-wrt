/*
 *  linux/arch/arm/mach-cns3xxx/localtimer.c
 *
 *  Copyright (C) 2002 ARM Ltd.
 *  Copyright 2011 Gateworks Corporation
 *		   Chris Lang <clang@gateworks.com>
 *
 *  All Rights Reserved
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#include <linux/init.h>
#include <linux/smp.h>
#include <linux/clockchips.h>

#include <asm/smp_twd.h>

/*
 * Setup the local clock events for a CPU.
 */
int local_timer_setup(struct clock_event_device *evt)
{
	evt->irq = IRQ_LOCALTIMER;
	twd_timer_setup(evt);
	return 0;
}

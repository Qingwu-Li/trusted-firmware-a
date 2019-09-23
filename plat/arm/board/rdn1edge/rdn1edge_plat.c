/*
 * Copyright (c) 2018-2020, ARM Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <plat/common/platform.h>
#include <sgi_plat.h>

unsigned int plat_arm_sgi_get_platform_id(void)
{
	return mmio_read_32(SID_REG_BASE + SID_SYSTEM_ID_OFFSET)
				& SID_SYSTEM_ID_PART_NUM_MASK;
}

unsigned int plat_arm_sgi_get_config_id(void)
{
	return mmio_read_32(SID_REG_BASE + SID_SYSTEM_CFG_OFFSET);
}

void bl31_platform_setup(void)
{
	sgi_bl31_common_platform_setup();
}

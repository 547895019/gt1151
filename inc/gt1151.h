/*
 * Copyright (c) 2006-2018, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2019-06-01     tyustli     the first version
 */

#ifndef __GT1151_H_
#define __GT1151_H_
#include <rtthread.h>
#include "touch.h"

#define GTP_ADDR_LENGTH        (2)
#define GT1151_MAX_TOUCH       (5)
#define GT1151_POINT_INFO_NUM  (8)

#define GT1151_ADDRESS     (0x14)

#define GT1151_COMMAND         (0x8040)
#define GT1151_CONFIG          (0x8050)

#define GT9XX_PRODUCT_ID       (0x8140)
#define GT1151_READ_STATUS     (0x814E)

#define GT1151_POINT1_REG      (0x814F)


#define GT1151_CHECK_SUM       (0X813C)

int rt_hw_gt1151_init(const char *name, struct rt_touch_config *cfg);

#endif

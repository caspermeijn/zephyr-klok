/*
 * Copyright (c) 2021 Nordic Semiconductor ASA
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr.h>
#include <drivers/sensor.h>

#include "app_version.h"

#include <logging/log.h>
LOG_MODULE_REGISTER(main, CONFIG_APP_LOG_LEVEL);

void main(void)
{
	int ret;
	const struct device *sensor;

	printk("Zephyr Example Application %s\n", APP_VERSION_STR);
}


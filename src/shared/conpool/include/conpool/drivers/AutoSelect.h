/*
 * Copyright (c) 2015 Ember
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */

#pragma once

#ifdef DB_MYSQL
	#include "MySQLDriver.h"
#elif DB_POSTGRESQL
	#include "PostgreSQLDriver.h"
#endif

namespace ember { namespace drivers {

#ifdef DB_MYSQL
	typedef ember::drivers::MySQL DriverType;
#elif DB_POSTGRESQL
	typedef ember::drivers::PostgreSQL DriverType;
#endif

}} //drivers, ember

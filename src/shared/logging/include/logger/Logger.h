/*
 * Copyright (c) 2015 Ember
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */

#pragma once 

#include <logger/Severity.h>
#include <memory>
#include <string>

namespace ember { namespace log {

class Sink;

class Logger {
	class impl;
	std::unique_ptr<impl> pimpl_;

public:
	Logger();
	~Logger();

	Logger& operator <<(Logger& (*m)(Logger&));
	Logger& operator <<(Severity severity);
	Logger& operator <<(Filter record_type);
	template<typename T> Logger& operator <<(T data);
	Logger& operator <<(const std::string& data);
	Logger& operator <<(const char* data);
	void add_sink(std::unique_ptr<Sink> sink);
	Severity severity();
	Filter filter();
	void thread_exit();
	void finalise();
	void finalise_sync();

	Logger(const impl&) = delete;
	Logger& operator=(const Logger&) = delete;

	friend Logger& flush(Logger& out);
	friend Logger& flush_sync(Logger& out);
};

Logger& flush(Logger& out);
Logger& flush_sync(Logger& out);

}} //log, ember
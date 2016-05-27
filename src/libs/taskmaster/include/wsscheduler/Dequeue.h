/*
 * Copyright (c) 2016 Ember
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */

#pragma once

#include <shared/threading/Spinlock.h>
#include <atomic>
#include <deque> // todo
#include <mutex>
#include <cstddef>
#include <iostream>
namespace ember { namespace task { namespace ws {

template<typename T>
class Dequeue {
	std::deque<T> container_; // temp
	Spinlock lock_;
	std::atomic<std::size_t> size_;

public:
	bool try_steal(T& element) {
		

		return true;
	}

	bool try_pop_back(T& element) {
		std::lock_guard<Spinlock> guard(lock_);


		return true;
	}

	void push_back(T element) {
		std::lock_guard<Spinlock> guard(lock_);

	}

	std::size_t size() {
		return size_;
	}
};

}}} // ws, task, ember
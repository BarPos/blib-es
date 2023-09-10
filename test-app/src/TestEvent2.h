#pragma once

#include <blib/EventSystem.h>

class TestEvent2 : public blib::es::Event {
public:
	TestEvent2(std::string testString)
		:testString(testString) {}

	std::string testString;

	std::string toString() override {
		return "Test String 2: " + testString;
	}
};
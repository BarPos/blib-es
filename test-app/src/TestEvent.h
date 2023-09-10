#pragma once

#include <blib/EventSystem.h>

class TestEvent : public blib::es::Event {
public:
	TestEvent(std::string testString)
		:testString(testString) {}

	std::string testString;

	std::string toString() override {
		return "Test String: " + testString;
	}
};
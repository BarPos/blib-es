#pragma once

#include <blib/EventSystem.h>

#include "TestEvent2.h"

class TestEvent2Listener : public blib::es::EventListener {
public:
	void handle(blib::es::Event* event) override {
		TestEvent2* e = blib::es::EventListener::getEvent<TestEvent2>(event);

		printf((e->toString() + "\n").c_str());
	}

	bool isEventType(blib::es::Event* event) override {
		return blib::es::EventListener::isEventType<TestEvent2>(event);
	}
private:
};
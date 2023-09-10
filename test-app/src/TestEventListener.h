#pragma once

#include <blib/EventSystem.h>

#include "TestEvent.h"

class TestEventListener : public blib::es::EventListener {
public:
	void handle(blib::es::Event* event) override {
		TestEvent* e = blib::es::EventListener::getEvent<TestEvent>(event);

		printf((e->toString() + "\n").c_str());
	}

	bool isEventType(blib::es::Event* event) override {
		return blib::es::EventListener::isEventType<TestEvent>(event);
	}
private:
};
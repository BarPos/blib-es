#include <iostream>

#include <blib/EventSystem.h>

#include "TestEventListener.h"
#include "TestEvent2Listener.h"

int main(int argc, char** argv) {
	blib::es::EventDispatcher::registerEventListener(new TestEventListener());
	blib::es::EventDispatcher::registerEventListener(new TestEvent2Listener());

	blib::es::EventDispatcher::dispatchEvent(new TestEvent("Test Event"));
	blib::es::EventDispatcher::dispatchEvent(new TestEvent2("Test Event 2"));

	return 0;
}
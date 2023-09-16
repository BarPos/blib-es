#pragma once

#include <vector>

#include "EventListener.h"

namespace blib {
	namespace es {
		namespace EventDispatcher {
			namespace {
				std::vector<EventListener*> eventListeners;
			}

			void registerEventListener(EventListener* eventListener) {
				eventListeners.push_back(eventListener);
			}

			void dispatchEvent(Event* event) {
				for (auto listener : eventListeners)
				{
					if (event->isCanceled()) break;
					if (listener->isEventType(event)) {
						listener->handle(event);
					}
				}
				delete event;
			}
		}
	}
}
#pragma once

#include "Event.h"

namespace blib {
	namespace es {
		class EventListener {
		public:
			virtual void handle(Event* event) = 0;

			virtual bool isEventType(Event* event) = 0;

			template <class T>
			static bool isEventType(Event* event)
			{
				if (getEvent<T>(event) == nullptr) return false;
				return true;
			}

			template <class T>
			static T* getEvent(Event* event) {
				if (dynamic_cast<T*>(event) == nullptr) return nullptr;
				return dynamic_cast<T*>(event);
			}
		private:

		};
	}
}
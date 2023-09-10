#pragma once

#include <iostream>

namespace blib {
	namespace es {
		class Event {
		public:
			Event() {}

			bool isCanceled() { return canceled; }
			void setCanceled(bool c) { canceled = c; }

			virtual std::string toString() {
				return "";
			}

		private:
			bool canceled = false;
		};
	}
}
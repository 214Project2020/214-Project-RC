#ifndef EUROPEAN_H
#define EUROPEAN_H

#include "Logistics.h"

class European : public Logistics {
	public:
		void transportContainers();
		void preperation();
		void serviceCar();
};

#endif

#ifndef EUROPEAN_H
#define EUROPEAN_H

#include "logistics.h"

class european : public logistics {
	void transportContainers();
	void preperation();
	void serviceCar();
};

#endif
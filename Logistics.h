#ifndef LOGISTICS_H
#define LOGISTICS_H


#include "Track.h"

using namespace std;

class Logistics {
	private:
		Track* tr;
	public:
		Logistics();
		Track* getTrack();
		void setTrack(Track* a);
		virtual void transportContainers() = 0;
		virtual void preperation() = 0;
		virtual void serviceCar() = 0;
};

#endif

//Virtual class
#ifndef LOGISTICS_H
#define LOGISTICS_H


#include "Track.h"

using namespace std;

class Logistics {
	private:
		track* t;
	public:
		Logistics();
		~Logistics();
		track* getTrack(){return t;}
		void setTrack(track* a){t = a;}
		virtual void transportContainers() = 0;
		virtual void preperation() = 0;
		virtual void serviceCar() = 0;
};

#endif

//Virtual class

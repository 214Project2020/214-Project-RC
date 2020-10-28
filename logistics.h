#ifndef LOGISTICS_H
#define LOGISTICS_H


#include "track.h"

using namespace std;

class logistics {
	private:
		track* t;
	public:
		logistics();
		track* getTrack(){return t;}
		void setTrack(track* a){t = a;}
		virtual void transportContainers() = 0;
		virtual void preperation() = 0;
		virtual void serviceCar() = 0;
};

#endif

//Virtual class
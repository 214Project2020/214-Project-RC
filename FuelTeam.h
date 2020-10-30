#ifndef FUELTEAM_H
#define FUELTEAM_H

#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "TechTeam.h"

using namespace std;

class FuelTeam : public TechTeam
{	
	public:
        FuelTeam();
        ~FuelTeam();

        void update();
};
#endif
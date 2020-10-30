#ifndef BRAKESTEAM_H
#define BRAKESTEAM_H

#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "TechTeam.h"

using namespace std;

class BrakesTeam : public TechTeam
{	
	public:
        BrakesTeam();
        ~BrakesTeam();

        void update();
};
#endif
#ifndef HEATTEAM_H
#define HEATTEAM_H

#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "TechTeam.h"

using namespace std;

class HeatTeam : public TechTeam
{	
	public:
        HeatTeam();
        ~HeatTeam();

        void update();
};
#endif
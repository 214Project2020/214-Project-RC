#ifndef TYRETEAM_H
#define TYRETEAM_H

#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "TechTeam.h"

using namespace std;

class TyreTeam : public TechTeam
{	
	public:
        TyreTeam();
        ~TyreTeam();

        void update();
};
#endif
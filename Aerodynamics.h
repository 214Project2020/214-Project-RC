#ifndef AERODYNAMICS_H
#define AERODYNAMICS_H

#include "EngineeringDepartment.h"
#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;
class Aerodynamics : public EngineeringDepartment
{
public:
    Aerodynamics();
    ~Aerodynamics();
    virtual CurrentSeasonDepartment * createCurrentSeason();
    virtual NextSeasonDepartment * createNextSeason();
};

#endif
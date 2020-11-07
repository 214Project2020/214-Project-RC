#ifndef CHASSIS_H
#define CHASSIS_H

#include "EngineeringDepartment.h"

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;
class Chassis : public EngineeringDepartment
{
public:
    Chassis();
    ~Chassis();
    virtual CurrentSeasonDepartment * createCurrentSeason();
    virtual NextSeasonDepartment * createNextSeason();
};

#endif
#ifndef AERODYNAMICSNEXTSEASON_H
#define AERODYNAMICSNEXTSEASON_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "NextSeasonDepartment.h"

using namespace std;
class AerodynamicsNextSeason : public NextSeasonDepartment
{
public:
    AerodynamicsNextSeason();
    ~AerodynamicsNextSeason();
    virtual void improve();
};

#endif
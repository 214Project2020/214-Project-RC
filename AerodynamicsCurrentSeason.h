#ifndef AERODYNAMICSCURRENTSEASON_H
#define AERODYNAMICSCURRENTSEASON_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "CurrentSeasonDepartment.h"

using namespace std;
class AerodynamicsCurrentSeason : public CurrentSeasonDepartment
{
private:

public:
    AerodynamicsCurrentSeason();
    ~AerodynamicsCurrentSeason();
    virtual void improve();
};

#endif
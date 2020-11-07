#ifndef CHASSISCURRENTSEASON_H
#define CHASSISCURRENTSEASON_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "CurrentSeasonDepartment.h"

using namespace std;
class ChassisCurrentSeason : public CurrentSeasonDepartment
{
public:
    ChassisCurrentSeason();
    ~ChassisCurrentSeason();
    virtual void improve();
};

#endif
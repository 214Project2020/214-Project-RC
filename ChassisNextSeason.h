#ifndef CHASSISNEXTSEASON_H
#define CHASSISNEXTSEASON_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "NextSeasonDepartment.h"

using namespace std;
class ChassisNextSeason : public NextSeasonDepartment
{
private:

public:
    ChassisNextSeason();
    ~ChassisNextSeason();
    virtual void improve();
};

#endif
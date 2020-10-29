#ifndef CHASSISNEXTSEASON_H
#define CHASSISNEXTSEASON_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "Chassis.h"

using namespace std;
class ChassisNextSeason : public Chassis
{
private:

public:
    ChassisNextSeason();
    ~ChassisNextSeason();
    virtual void ChassisImprove();
};

#endif
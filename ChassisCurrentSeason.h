#ifndef CHASSISCURRENTSEASON_H
#define CHASSISCURRENTSEASON_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "Chassis.h"

using namespace std;
class ChassisCurrentSeason : public Chassis
{
private:

public:
    ChassisCurrentSeason();
    ~ChassisCurrentSeason();
    virtual void ChassisImprove();
};

#endif
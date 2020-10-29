#ifndef CHASSIS_H
#define CHASSIS_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;
class Chassis
{
private:

public:
    Chassis();
    ~Chassis();
    virtual void ChassisImprove()=0;
};

#endif
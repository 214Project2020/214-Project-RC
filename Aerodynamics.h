#ifndef AERODYNAMICS_H
#define AERODYNAMICS_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;
class Aerodynamics
{
private:

public:
    Aerodynamics();
    ~Aerodynamics();
    virtual void AeroImprove()=0;
};

#endif
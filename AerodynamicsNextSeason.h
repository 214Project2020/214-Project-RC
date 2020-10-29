#ifndef AERODYNAMICSNEXTSEASON_H
#define AERODYNAMICSNEXTSEASON_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "Aerodynamics.h"

using namespace std;
class AerodynamicsNextSeason : public Aerodynamics
{
private:

public:
    AerodynamicsNextSeason();
    ~AerodynamicsNextSeason();
    virtual void AeroImprove();
};

#endif
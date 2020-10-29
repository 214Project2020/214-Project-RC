#ifndef AERODYNAMICSCURRENTSEASON_H
#define AERODYNAMICSCURRENTSEASON_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "Aerodynamics.h"

using namespace std;
class AerodynamicsCurrentSeason : public Aerodynamics
{
private:

public:
    AerodynamicsCurrentSeason();
    ~AerodynamicsCurrentSeason();
    virtual void AeroImprove();
};

#endif
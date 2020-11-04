#ifndef NEXTSEASONCAR_H
#define NEXTSEASONCAR_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "F1Car.h"

#include "Aerodynamics.h"
#include "Engine.h"
#include "Electronics.h"
#include "Chassis.h"
#include "AerodynamicsNextSeason.h"
#include "EngineNextSeason.h"
#include "ElectronicsNextSeason.h"
#include "ChassisNextSeason.h"

using namespace std;
class NextSeasonCar : public F1Car
{
private:
    Chassis *chas;
    Engine *engi;
    Aerodynamics *aero;
    Electronics *elec;
    

public:
    NextSeasonCar();
    ~NextSeasonCar();
    Chassis* getChas();
    Engine* getEngi();
    Aerodynamics* getAero();
    Electronics* getElec();

    virtual void aeroImprover();
    virtual void elecImprover();
    virtual void engiImprover();
    virtual void chasImprover();
};

#endif


#ifndef CURRENTSEASONCAR_H
#define CURRENTSEASONCAR_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "F1Car.h"
#include "Aerodynamics.h"
#include "Engine.h"
#include "Electronics.h"
#include "Chassis.h"
#include "AerodynamicsCurrentSeason.h"
#include "EngineCurrentSeason.h"
#include "ElectronicsCurrentSeason.h"
#include "ChassisCurrentSeason.h"

using namespace std;
class CurrentSeasonCar : public F1Car
{
private:
    Chassis *chas;
    Engine *engi;
    Aerodynamics *aero;
    Electronics *elec;
    

public:
    CurrentSeasonCar();
    ~CurrentSeasonCar();
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
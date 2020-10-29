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
class CurrentSeasonCar
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
    
};

#endif
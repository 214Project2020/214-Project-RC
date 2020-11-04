#ifndef F1CAR_H
#define F1CAR_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "Aerodynamics.h"
#include "Engine.h"
#include "Electronics.h"
#include "Chassis.h"

#include "AerodynamicsCurrentSeason.h"
#include "EngineCurrentSeason.h"
#include "ElectronicsCurrentSeason.h"
#include "ChassisCurrentSeason.h"
#include "AerodynamicsNextSeason.h"
#include "EngineNextSeason.h"
#include "ElectronicsNextSeason.h"
#include "ChassisNextSeason.h"
#include "NextSeasonCar.h"
#include "CurrentSeasonCar.h"


using namespace std;
class F1Car
{
private:
    Chassis* chas;
    Engine* engi;
    Aerodynamics* aero;
    Electronics* elec;



public:
    F1Car();
    F1Car(CurrentSeasonCar *carCS);
    F1Car(NextSeasonCar *carNS);
    ~F1Car();
    void aeroImprover();
    void elecImprover();
    void engiImprover();
    void chasImprover();
    
};

#endif


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
#include "EngineeringDepartment.h"

using namespace std;

class NextSeasonCar : public F1Car
{
private:
    NextSeasonDepartment *chas;
    NextSeasonDepartment *engi;
    NextSeasonDepartment *aero;
    NextSeasonDepartment *elec;
    Chassis * chassisCreator;
    Aerodynamics * aeroCreator;
    Engine * engineCreator;
    Electronics * electronicsCreator;

    //singleton implementation
    static NextSeasonCar *onlyInstance;
public:
    NextSeasonCar();
    
    ~NextSeasonCar();
    NextSeasonDepartment* getChas();
    NextSeasonDepartment* getEngi();
    NextSeasonDepartment* getAero();
    NextSeasonDepartment* getElec();

    virtual void aeroImprover();
    virtual void elecImprover();
    virtual void engiImprover();
    virtual void chasImprover();

    //singleton implementation
    NextSeasonCar(const NextSeasonCar*){};
    NextSeasonCar& operator=(const NextSeasonCar*){};
    static NextSeasonCar *getInstance();
};

#endif


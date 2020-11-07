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
    string name;
    string engine;
    string suspension;
    string brakes;
    CurrentSeasonDepartment *chas;
    CurrentSeasonDepartment *engi;
    CurrentSeasonDepartment *aero;
    CurrentSeasonDepartment *elec;
    Chassis * chassisCreator;
    Aerodynamics * aeroCreator;
    Engine * engineCreator;
    Electronics * electronicsCreator;

    //singleton implementation
    static CurrentSeasonCar *onlyInstance;
public:
    CurrentSeasonCar();
    ~CurrentSeasonCar();
    CurrentSeasonDepartment* getChas();
    CurrentSeasonDepartment* getEngi();
    CurrentSeasonDepartment* getAero();
    CurrentSeasonDepartment* getElec();

    void setName(string n);
    void setEngine(string e);
    void setSuspension(string s);
    void setBrakes(string b);

    virtual void aeroImprover();
    virtual void elecImprover();
    virtual void engiImprover();
    virtual void chasImprover();

    void printCarDetails();

    //singleton implementation
    CurrentSeasonCar(const CurrentSeasonCar*){};
    CurrentSeasonCar& operator=(const CurrentSeasonCar*){};
    static CurrentSeasonCar *getInstance();
    
};

#endif
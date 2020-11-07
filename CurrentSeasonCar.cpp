#include <iostream>
#include "CurrentSeasonCar.h"


using namespace std;


CurrentSeasonCar::CurrentSeasonCar(){
    chassisCreator = new Chassis();
    engineCreator = new Engine();
    aeroCreator = new Aerodynamics();
    electronicsCreator = new Electronics();
    chas = chassisCreator->createCurrentSeason();
    engi = engineCreator->createCurrentSeason();
    aero = aeroCreator->createCurrentSeason();
    elec = electronicsCreator->createCurrentSeason();
}

CurrentSeasonCar::~CurrentSeasonCar(){
    delete chassisCreator;
    delete engineCreator;
    delete aeroCreator;
    delete electronicsCreator;
    delete chas;
    delete engi;
    delete aero;
    delete elec;
}

CurrentSeasonDepartment* CurrentSeasonCar::getChas(){
    return chas;
}

CurrentSeasonDepartment* CurrentSeasonCar::getElec(){
    return elec;
}

CurrentSeasonDepartment* CurrentSeasonCar::getEngi(){
    return engi;
}

CurrentSeasonDepartment* CurrentSeasonCar::getAero(){
    return aero;
}

void CurrentSeasonCar::aeroImprover(){
    aero->improve();
}

void CurrentSeasonCar::elecImprover(){
    elec->improve();
}

void CurrentSeasonCar::chasImprover(){
    chas->improve();
}

void CurrentSeasonCar::engiImprover(){
    engi->improve();
}
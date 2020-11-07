#include <iostream>
#include "NextSeasonCar.h"


using namespace std;


NextSeasonCar::NextSeasonCar(){
    chassisCreator = new Chassis();
    engineCreator = new Engine();
    aeroCreator = new Aerodynamics();
    electronicsCreator = new Electronics();
    chas = chassisCreator->createNextSeason();
    engi = engineCreator->createNextSeason();
    aero = aeroCreator->createNextSeason();
    elec = electronicsCreator->createNextSeason();
}

NextSeasonCar::~NextSeasonCar(){
    delete chassisCreator;
    delete engineCreator;
    delete aeroCreator;
    delete electronicsCreator;
    delete chas;
    delete engi;
    delete aero;
    delete elec;
}

NextSeasonDepartment* NextSeasonCar::getChas(){
    return chas;
}

NextSeasonDepartment* NextSeasonCar::getElec(){
    return elec;
}

NextSeasonDepartment* NextSeasonCar::getEngi(){
    return engi;
}

NextSeasonDepartment* NextSeasonCar::getAero(){
    return aero;
}

void NextSeasonCar::aeroImprover(){
    aero->improve();
}

void NextSeasonCar::elecImprover(){
    elec->improve();
}

void NextSeasonCar::chasImprover(){
    chas->improve();
}

void NextSeasonCar::engiImprover(){
    engi->improve();
}
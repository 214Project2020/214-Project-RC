#include <iostream>
#include "CurrentSeasonCar.h"


using namespace std;


CurrentSeasonCar::CurrentSeasonCar(){
    chas = new ChassisCurrentSeason();
    engi = new EngineCurrentSeason();
    aero = new AerodynamicsCurrentSeason();
    elec = new ElectronicsCurrentSeason();
    
}


Chassis* CurrentSeasonCar::getChas(){
    return chas;
}

Electronics* CurrentSeasonCar::getElec(){
    return elec;
}

Engine* CurrentSeasonCar::getEngi(){
    return engi;
}

Aerodynamics* CurrentSeasonCar::getAero(){
    return aero;
}

void CurrentSeasonCar::aeroImprover(){
    aero->AeroImprove();
}

void CurrentSeasonCar::elecImprover(){
    elec->ElecImprove();
}

void CurrentSeasonCar::chasImprover(){
    chas->ChassisImprove();
}

void CurrentSeasonCar::engiImprover(){
    engi->EngineImprove();
}
#include <iostream>
#include "NextSeasonCar.h"


using namespace std;


NextSeasonCar::NextSeasonCar(){
    chas = new ChassisNextSeason();
    engi = new EngineNextSeason();
    aero = new AerodynamicsNextSeason();
    elec = new ElectronicsNextSeason();
    
}


Chassis* NextSeasonCar::getChas(){
    return chas;
}

Electronics* NextSeasonCar::getElec(){
    return elec;
}

Engine* NextSeasonCar::getEngi(){
    return engi;
}

Aerodynamics* NextSeasonCar::getAero(){
    return aero;
}

void NextSeasonCar::aeroImprover(){
    aero->AeroImprove();
}

void NextSeasonCar::elecImprover(){
    elec->ElecImprove();
}

void NextSeasonCar::chasImprover(){
    chas->ChassisImprove();
}

void NextSeasonCar::engiImprover(){
    engi->EngineImprove();
}
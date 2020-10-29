#include <iostream>
#include "NextSeasonCar.h"


using namespace std;

NextSeasonCar::NextSeasonCar(){
    Chassis *chassisCS = new ChassisNextSeason();
    Engine *engineCS = new EngineNextSeason();
    Aerodynamics *aeroCS = new AerodynamicsNextSeason();
    Electronics *elecCS = new ElectronicsNextSeason();

    chas = chassisCS;
    engi = engineCS;
    aero = aeroCS;
    elec = elecCS;
    
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

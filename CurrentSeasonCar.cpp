#include <iostream>
#include "CurrentSeasonCar.h"


using namespace std;

CurrentSeasonCar::CurrentSeasonCar(){
    Chassis *chassisCS = new ChassisCurrentSeason();
    Engine *engineCS = new EngineCurrentSeason();
    Aerodynamics *aeroCS = new AerodynamicsCurrentSeason();
    Electronics *elecCS = new ElectronicsCurrentSeason();

    chas = chassisCS;
    engi = engineCS;
    aero = aeroCS;
    elec = elecCS;
    
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

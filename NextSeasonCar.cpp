#include <iostream>
#include "NextSeasonCar.h"


using namespace std;


NextSeasonCar::NextSeasonCar(){

}


/**
 * @brief Singleton
 * 
 * @return NextSeasonCar* 
 */
NextSeasonCar * NextSeasonCar::getInstance(){
     if (onlyInstance == nullptr){
        onlyInstance = new NextSeasonCar();    
        onlyInstance->chassisCreator = new Chassis();
        onlyInstance->engineCreator = new Engine();
        onlyInstance->aeroCreator = new Aerodynamics();
        onlyInstance->electronicsCreator = new Electronics();
        onlyInstance->chas = onlyInstance->chassisCreator->createNextSeason();
        onlyInstance->engi = onlyInstance->engineCreator->createNextSeason();
        onlyInstance->aero = onlyInstance->aeroCreator->createNextSeason();
        onlyInstance->elec = onlyInstance->electronicsCreator->createNextSeason();
     } else {
        return onlyInstance;
    }
}


/**
 * @brief Singleton
 * 
 */
NextSeasonCar* NextSeasonCar::onlyInstance = nullptr;

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
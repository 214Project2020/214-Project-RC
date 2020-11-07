#include <iostream>
#include "CurrentSeasonCar.h"


using namespace std;


CurrentSeasonCar::CurrentSeasonCar(){
    
}

/**
 * @brief Singleton
 * 
 * @return NextSeasonCar* 
 */
CurrentSeasonCar * CurrentSeasonCar::getInstance(){
     if (onlyInstance == nullptr){
        onlyInstance = new CurrentSeasonCar();    
        onlyInstance->chassisCreator = new Chassis();
        onlyInstance->engineCreator = new Engine();
        onlyInstance->aeroCreator = new Aerodynamics();
        onlyInstance->electronicsCreator = new Electronics();
        onlyInstance->chas = onlyInstance->chassisCreator->createCurrentSeason();
        onlyInstance->engi = onlyInstance->engineCreator->createCurrentSeason();
        onlyInstance->aero = onlyInstance->aeroCreator->createCurrentSeason();
        onlyInstance->elec = onlyInstance->electronicsCreator->createCurrentSeason();
     } else {
        return onlyInstance;
    }
}


/**
 * @brief Singleton
 * 
 */
CurrentSeasonCar* CurrentSeasonCar::onlyInstance = nullptr;

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

void CurrentSeasonCar::setName(string n){
    name = n;
}

void CurrentSeasonCar::setEngine(string e){
    engine = e;
}

void CurrentSeasonCar::setSuspension(string s){
    suspension = s;
}

void CurrentSeasonCar::setBrakes(string b){
    brakes = b;
}

void CurrentSeasonCar::printCarDetails(){
    cout << "Car Details:" << endl;
    cout << "Name: " << name << endl;
    cout << "Engine: " << engine << endl;
    cout << "Suspension: " << suspension << endl;
    cout << "Brakes: " << brakes << endl;
}
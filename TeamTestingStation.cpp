#include "TeamTestingStation.h"
/**
 * @brief Construct a new Team Testing Station:: Team Testing Station object
 * @brief Concrete Subject
 * 
 * @param newCar 
 */

TeamTestingStation::TeamTestingStation(F1Car * newCar){
    car = newCar;
}

TeamTestingStation::~TeamTestingStation(){
    if (car != nullptr)
        delete car;
}

F1Car * TeamTestingStation::getCar(){
    return car;
}

void TeamTestingStation::setCar(F1Car * c){
    if (car != nullptr)
        delete car;

    car = c;
}
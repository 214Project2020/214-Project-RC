#include "TeamTestingStation.h"
/**
 * @brief Construct a new Team Testing Station:: Team Testing Station object
 * @brief Concrete Subject
 * 
 */

TeamTestingStation::TeamTestingStation(){
}

TeamTestingStation::~TeamTestingStation(){
}

F1Car * TeamTestingStation::getCurrentCar(){
    return CurrentSeasonCar::getInstance();
}

F1Car * TeamTestingStation::getNextCar(){
    return NextSeasonCar::getInstance();
}
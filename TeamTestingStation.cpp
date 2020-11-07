#include "TeamTestingStation.h"
/**
 * @brief Construct a new Team Testing Station:: Team Testing Station object
 * @brief Concrete Subject
 * 
 */

TeamTestingStation::TeamTestingStation(){
    carCurrentSeason = new CurrentSeasonCar();
    carNextSeason = new NextSeasonCar();
}

TeamTestingStation::~TeamTestingStation(){
    if (carCurrentSeason != nullptr)
        delete carCurrentSeason;
    if (carNextSeason != nullptr)
        delete carNextSeason;
}

F1Car * TeamTestingStation::getCurrentCar(){
    return carCurrentSeason;
}

F1Car * TeamTestingStation::getNextCar(){
    return carCurrentSeason;
}
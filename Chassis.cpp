#include "Chassis.h"
#include <iostream>
using namespace std;

/**
 * @brief Construct a new Chassis:: Chassis object
 * @brief ConcreteFactory
 * 
 */

Chassis::Chassis(){
    
}

Chassis::~Chassis(){
    
}

CurrentSeasonDepartment * Chassis::createCurrentSeason(){
    cout << "Creating Current Season Chassis Department." << endl;
    return new ChassisCurrentSeason();
}

NextSeasonDepartment * Chassis::createNextSeason(){
    cout << "Creating Next Season Chassis Department." << endl;
    return new ChassisNextSeason();
}
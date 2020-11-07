#include "Aerodynamics.h"
#include <iostream>
using namespace std;

/**
 * @brief Construct a new Aerodynamics:: Aerodynamics object
 * @brief ConcreteFactory
 * 
 */

Aerodynamics::Aerodynamics(){
    
}

Aerodynamics::~Aerodynamics(){
    
}

CurrentSeasonDepartment * Aerodynamics::createCurrentSeason(){
    cout << "Creating Current Season Aerodynamics Department." << endl;
    return new AerodynamicsCurrentSeason();
}

NextSeasonDepartment * Aerodynamics::createNextSeason(){
    cout << "Creating Next Season Aerodynamics Department." << endl;
    return new AerodynamicsNextSeason();
}
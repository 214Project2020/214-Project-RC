#include <iostream>
#include "EngineNextSeason.h"

using namespace std;

/**
 * @brief Construct a new Engine Next Season:: Engine Next Season object
 * @brief ConcreteProduct
 */

EngineNextSeason::EngineNextSeason(){
    cout << "Engine Engineering department created for next season." << endl;
    
}

void EngineNextSeason::improve(){
    cout << "Electronics Department (Next Season): Upgraded using testing data and statistics." << endl;
}

EngineNextSeason::~EngineNextSeason(){
}
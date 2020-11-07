#include "Electronics.h"

/**
 * @brief Construct a new Electronics:: Electronics object
 * @brief ConcreteFactory
 * 
 */

Electronics::Electronics(){
    
}

Electronics::~Electronics(){
    
}

CurrentSeasonDepartment * Electronics::createCurrentSeason(){
    cout << "Creating Current Season Electronics Department." << endl;
    return new ElectronicsCurrentSeason();
}

NextSeasonDepartment * Electronics::createNextSeason(){
    cout << "Creating Next Season Electronics Department." << endl;
    return new ElectronicsNextSeason();
}
#include "Engine.h"
#include <iostream>
using namespace std;

/**
 * @brief Construct a new Engine:: Engine object
 * @brief ConcreteFactory
 * 
 */

Engine::Engine(){
    
}

Engine::~Engine(){

}

CurrentSeasonDepartment * Engine::createCurrentSeason(){
    cout << "Creating Current Season Engine Department." << endl;
    return new EngineCurrentSeason();
}

NextSeasonDepartment * Engine::createNextSeason(){
    cout << "Creating Next Season Engine Department." << endl;
    return new EngineNextSeason();
}
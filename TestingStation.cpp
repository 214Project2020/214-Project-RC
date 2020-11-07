#include "TestingStation.h"

/**
 * @brief Construct a new Testing Station:: Testing Station object
 * @brief Subject
 * 
 */

TestingStation::TestingStation(){
}

TestingStation::~TestingStation(){
}

void TestingStation::addType(TestingType * type){
    typeList.push_back(type);
}

void TestingStation::removeType(TestingType * type){
    for(int i=0; i < typeList.size(); i++){
        if (typeList[i] == type)
        {    
            typeList.erase(typeList.begin() + i);
        }
    }
}

void TestingStation::notify(){
    for(int i=0; i < typeList.size(); i++){
        typeList[i]->updateTesting();
    }
}
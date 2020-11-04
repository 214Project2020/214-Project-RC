#include "TestingType.h"

/**
 * @brief Construct a new Testing Type:: Testing Type object
 * 
 * @param acc 
 * @param curr 
 * @param next 
 */

TestingType::TestingType(int acc, CurrentSeasonCar * curr, NextSeasonCar * next){
    accuracy = acc;
    numUsed = 0;
    currSeason = curr;
    nextSeason = next;
}

TestingType::~TestingType(){
    if (currSeason != nullptr)
        delete currSeason;
    currSeason = nullptr;

    if (nextSeason != nullptr)
        delete nextSeason;
    nextSeason = nullptr;
}

void TestingType::setAccuracy(int acc){
    accuracy = acc;
}

int TestingType::getAccuracy(){
    return accuracy;
}

void TestingType::incNum(){
    numUsed++;
}

int TestingType::getNum(){
    return numUsed;
}

int TestingType::generateRandom(){
    static random_device rd;
    static mt19937 gen(rd());
    uniform_int_distribution<> dis(0,4);
    return dis(gen);
}

F1Car * TestingType::getCurrCar(){
    return currSeason;
}

F1Car * TestingType::getNextCar(){
    return nextSeason;
}
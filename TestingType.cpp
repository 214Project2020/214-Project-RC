#include "TestingType.h"

/**
 * @brief Construct a new Testing Type:: Testing Type object
 * 
 */

TestingType::TestingType(){
    numUsed = 0;
}

TestingType::~TestingType(){
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
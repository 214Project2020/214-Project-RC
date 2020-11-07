#ifndef TestingType_h
#define TestingType_h
#include "F1Car.h"
#include "CurrentSeasonCar.h"
#include "NextSeasonCar.h"

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <random>

using namespace std;

class TestingType{
private:
    int numUsed; //amount of times a particular test has been used
public:
    TestingType();
    virtual ~TestingType();
    virtual void runCurrentSeasonTest() = 0;
    virtual void runNextSeasonTest() = 0;
    virtual void updateTesting() = 0;
    void incNum();
    int getNum();
    int generateRandom();
};

#endif
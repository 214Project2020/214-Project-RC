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
    int accuracy; //specific to a particular type of test, the higher the accuracy the better the chances of car improving in test
    int numUsed; //amount of times a particular test has been used
    F1Car * currSeason;
    F1Car * nextSeason;
public:
    TestingType(int acc, CurrentSeasonCar * curr, NextSeasonCar * next);
    virtual ~TestingType();
    virtual void run() = 0;
    virtual void updateTesting() = 0;
    void setAccuracy(int acc);
    void incNum();
    int getNum();
    int getAccuracy();
    int generateRandom();
    F1Car * getCurrCar();
    F1Car * getNextCar();
};

#endif
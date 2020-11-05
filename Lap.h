#ifndef LAP_H
#define LAP_H
#include "Crash.h"
#include "Switch.h"
#include "CrashCommand.h"
#include "StopCrashCommand.h"
#include "Command.h"
using namespace std;

class Lap {

private:
    float lapTime;
    Lap* nextLap;  //used for iterator
    static int addRandom;
    int lapNumber;
    Crash* crash;
    CrashCommand* crashComm;
    StopCrashCommand* stopCrashComm;
    Switch* switchCont;

    //functions below is commented out for testing purposes and possiblitity of change
/**
    string tyreType  //for the current lap
    int gearbox
    int tyreNumber    //how many tyres has already been replaced...remember theres a limit
**/

public:
    Lap(float time);  //create Lap with time of lap passed in
    Lap();  //generates a lap with random lapTime generated at construction
    ~Lap();
    float getLapTime();
    Lap* getNextLap();
    void setNextLap(Lap * l);
    void setLapTime(float time);
    void showLapTime();
    void calculateCrashPossibility();

    // string getTyreType();
    // void setTyreType();
    //RaceStrategy* getRaceStrategy();
    //void calculateCrashPossibility(string weatherCondition)
    //virtual void executeCrash();

};

#endif

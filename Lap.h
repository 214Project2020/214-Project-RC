#ifndef LAP_H
#define LAP_H

using namespace std;

class Lap {

private:
    float lapTime;
    Lap* nextLap;  //used for iterator
    static int addRandom;
    int lapNumber;

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

    // string getTyreType();
    // void setTyreType();
    //RaceStrategy* getRaceStrategy();
    void calculateCrashPossibility();
    //virtual void executeCrash();

};

#endif

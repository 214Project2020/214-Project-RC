#include "WindTunnel.h"
/**
 * @brief Construct a new Wind Tunnel:: Wind Tunnel object
 * @brief Concrete Observer
 * 
 * @param TTS 
 * @param accuracy 
 * @param lim 
 * @param curr 
 * @param next 
 */

WindTunnel::WindTunnel(TeamTestingStation * TTS, int accuracy, int lim, CurrentSeasonCar * curr, NextSeasonCar * next) : TestingType(accuracy, curr, next){
    station = TTS;
    limit = lim;
}

WindTunnel::~WindTunnel(){
    if (station != nullptr)
        delete station;
    station = nullptr;   
}

/**
 * @brief 
 * Checks if there are tests available.
 * Then conducts a test using the accuracy which is used as a probability that the cars performance variable will improve.
 * Increments numUses and calls notify
 */

void WindTunnel::runCurrentSeasonTest(){
    if (getNum() < getLimit()){
        cout << "Conducting Wind Tunnel Test On Current Season Car" << endl;

        /*
            Link to engineering departments
        */
        int random = generateRandom();


        if (random < 1)
        {
            cout << "Wind Tunnel Test Failed" << endl;
        } else if (random < 2) {
            cout << "Wind Tunnel Test Successful" << endl;
            cout << "Calling Aero Department in Engineering" << endl;
            getCurrCar()->aeroImprover();
        } else if (random < 3) {
            cout << "Wind Tunnel Test Successful" << endl;
            cout << "Calling Aero Department in Engineering" << endl;
            getCurrCar()->aeroImprover();
            cout << "Calling Chassis Department in Engineering" << endl;
            getCurrCar()->chasImprover();
        } else if (random < 4) {
            cout << "Wind Tunnel Test Successful" << endl;
            cout << "Calling Aero Department in Engineering" << endl;
            getCurrCar()->aeroImprover();
            cout << "Calling Chassis Department in Engineering" << endl;
            getCurrCar()->chasImprover();
            cout << "Calling Engine Department in Engineering" << endl;
            getCurrCar()->engiImprover();
        } else if (random < 5){
            cout << "Wind Tunnel Test Successful" << endl;
            cout << "Calling Aero Department in Engineering" << endl;
            getCurrCar()->aeroImprover();
            cout << "Calling Chassis Department in Engineering" << endl;
            getCurrCar()->chasImprover();
            cout << "Calling Engine Department in Engineering" << endl;
            getCurrCar()->engiImprover();
            cout << "Calling Electronics Department in Engineering" << endl;
            getCurrCar()->elecImprover();
        }

        cout << endl;

        incNum();
    } else {
        cout << "Wind Tunnel testing limit has been reached for the season..." << endl << endl;;
    }
    station->notify();
}

void WindTunnel::runNextSeasonTest(){
    if (getNum() < getLimit()){
        cout << "Conducting Wind Tunnel Test On Next Season Car" << endl;

        /*
            Link to engineering departments
        */
        int random = generateRandom();


        if (random < 1)
        {
            cout << "Wind Tunnel Test Failed" << endl;
        } else if (random < 2) {
            cout << "Wind Tunnel Test Successful" << endl;
            cout << "Calling Aero Department in Engineering" << endl;
            getNextCar()->aeroImprover();
        } else if (random < 3) {
            cout << "Wind Tunnel Test Successful" << endl;
            cout << "Calling Aero Department in Engineering" << endl;
            getNextCar()->aeroImprover();
            cout << "Calling Chassis Department in Engineering" << endl;
            getNextCar()->chasImprover();
        } else if (random < 4) {
            cout << "Wind Tunnel Test Successful" << endl;
            cout << "Calling Aero Department in Engineering" << endl;
            getNextCar()->aeroImprover();
            cout << "Calling Chassis Department in Engineering" << endl;
            getNextCar()->chasImprover();
            cout << "Calling Engine Department in Engineering" << endl;
            getNextCar()->engiImprover();
        } else if (random < 5){
            cout << "Wind Tunnel Test Successful" << endl;
            cout << "Calling Aero Department in Engineering" << endl;
            getNextCar()->aeroImprover();
            cout << "Calling Chassis Department in Engineering" << endl;
            getNextCar()->chasImprover();
            cout << "Calling Engine Department in Engineering" << endl;
            getNextCar()->engiImprover();
            cout << "Calling Electronics Department in Engineering" << endl;
            getNextCar()->elecImprover();
        }

        cout << endl;

        incNum();
    } else {
        cout << "Wind Tunnel testing limit has been reached for the season..." << endl << endl;;
    }
    station->notify();
}

/**
 * @brief gives current status desciption of test
 * 
 */

void WindTunnel::updateTesting(){
    cout << "Wind Tunnel Update Statistics:" << endl;
    if (getNum() < getLimit())
    {
        cout << "Status: Available" << endl;
    } else {
         cout << "Status: Unavailable" << endl;
    }

    cout << "Used: " << getNum() << " out of " << getLimit() << " tests" << endl << endl;
}

void WindTunnel::efficiency(){
    /*
    Connect to race and limit number of wind tunnel uses per race
    */
}

void WindTunnel::decrementLimit(){
    limit--;
}

int WindTunnel::getLimit(){
    return limit;
}
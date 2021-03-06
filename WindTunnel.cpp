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

WindTunnel::WindTunnel(TeamTestingStation * ts){
    station = ts;
    limit = 400;
}

WindTunnel::~WindTunnel(){
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
            cout << "Wind Tunnel Test Failed (No Improvements Will Be Made)" << endl;
        } else if (random < 2) {
            cout << "Wind Tunnel Test Successful (25% Improvement)" << endl;
            cout << "Calling Aero Department in Engineering" << endl;
            station->getCurrentCar()->aeroImprover();
        } else if (random < 3) {
            cout << "Wind Tunnel Test Successful (50% Improvement)" << endl;
            cout << "Calling Aero Department in Engineering" << endl;
            station->getCurrentCar()->aeroImprover();
            cout << "Calling Chassis Department in Engineering" << endl;
            station->getCurrentCar()->chasImprover();
        } else if (random < 4) {
            cout << "Wind Tunnel Test Successful (75% Improvement)" << endl;
            cout << "Calling Aero Department in Engineering" << endl;
            station->getCurrentCar()->aeroImprover();
            cout << "Calling Chassis Department in Engineering" << endl;
            station->getCurrentCar()->chasImprover();
            cout << "Calling Engine Department in Engineering" << endl;
            station->getCurrentCar()->engiImprover();
        } else if (random < 5){
            cout << "Wind Tunnel Test Successful (100% Improvement)" << endl;
            cout << "Calling Aero Department in Engineering" << endl;
            station->getCurrentCar()->aeroImprover();
            cout << "Calling Chassis Department in Engineering" << endl;
            station->getCurrentCar()->chasImprover();
            cout << "Calling Engine Department in Engineering" << endl;
            station->getCurrentCar()->engiImprover();
            cout << "Calling Electronics Department in Engineering" << endl;
            station->getCurrentCar()->elecImprover();
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
            cout << "Wind Tunnel Test Failed (No Improvements Will Be Made)" << endl;
        } else if (random < 2) {
            cout << "Wind Tunnel Test Successful (25% Improvement)" << endl;
            cout << "Calling Aero Department in Engineering" << endl;
            station->getNextCar()->aeroImprover();
        } else if (random < 3) {
            cout << "Wind Tunnel Test Successful (50% Improvement)" << endl;
            cout << "Calling Aero Department in Engineering" << endl;
            station->getNextCar()->aeroImprover();
            cout << "Calling Chassis Department in Engineering" << endl;
            station->getNextCar()->chasImprover();
        } else if (random < 4) {
            cout << "Wind Tunnel Test Successful (75% Improvement)" << endl;
            cout << "Calling Aero Department in Engineering" << endl;
            station->getNextCar()->aeroImprover();
            cout << "Calling Chassis Department in Engineering" << endl;
            station->getNextCar()->chasImprover();
            cout << "Calling Engine Department in Engineering" << endl;
            station->getNextCar()->engiImprover();
        } else if (random < 5){
            cout << "Wind Tunnel Test Successful (100% Improvement)" << endl;
            cout << "Calling Aero Department in Engineering" << endl;
            station->getNextCar()->aeroImprover();
            cout << "Calling Chassis Department in Engineering" << endl;
            station->getNextCar()->chasImprover();
            cout << "Calling Engine Department in Engineering" << endl;
            station->getNextCar()->engiImprover();
            cout << "Calling Electronics Department in Engineering" << endl;
            station->getNextCar()->elecImprover();
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
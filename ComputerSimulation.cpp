#include "ComputerSimulation.h"

/**
 * @brief Construct a new Computer Simulation:: Computer Simulation object
 * @brief Concrete Observer
 * 
 * @param TTS 
 * @param accuracy 
 */

ComputerSimulation::ComputerSimulation(TeamTestingStation * ts){
    station = ts;
}

ComputerSimulation::~ComputerSimulation(){
}

/**
 * @brief 
 * Checks if there are tests available.
 * Then conducts a test using the accuracy which is used as a probability that the cars performance variable will improve.
 * Increments numUses and calls notify
 */

void ComputerSimulation::runCurrentSeasonTest(){

        cout << "Conducting Computer Simulation Test On Current Season Car" << endl;

        /*
            Link to engineering departments
        */
        int random = generateRandom();


        if (random < 1)
        {
            cout << "Computer Simulation Test Failed (No Improvements Will Be Made)" << endl;
        } else if (random < 2) {
            cout << "Computer Simulation Test Successful (25% Improvement)" << endl;
            cout << "Calling Aero Department in Engineering" << endl;
            station->getCurrentCar()->aeroImprover();
        } else if (random < 3) {
            cout << "Computer Simulation Test Successful (50% Improvement)" << endl;
            cout << "Calling Aero Department in Engineering" << endl;
            station->getCurrentCar()->aeroImprover();
            cout << "Calling Chassis Department in Engineering" << endl;
            station->getCurrentCar()->chasImprover();
        } else if (random < 4) {
            cout << "Computer Simulation Test Successful (75% Improvement)" << endl;
            cout << "Calling Aero Department in Engineering" << endl;
            station->getCurrentCar()->aeroImprover();
            cout << "Calling Chassis Department in Engineering" << endl;
            station->getCurrentCar()->chasImprover();
            cout << "Calling Engine Department in Engineering" << endl;
            station->getCurrentCar()->engiImprover();
        } else if (random < 5){
            cout << "Computer Simulation Test Successful (100% Improvement)" << endl;
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

    station->notify();
}

void ComputerSimulation::runNextSeasonTest(){
        cout << "Conducting Computer Simulation Test On Next Season Car" << endl;

        /*
            Link to engineering departments
        */
        int random = generateRandom();


        if (random < 1)
        {
            cout << "Computer Simulation Test Failed (No Improvements Will Be Made)" << endl;
        } else if (random < 2) {
            cout << "Computer Simulation Test Successful (25% Improvement)" << endl;
            cout << "Calling Aero Department in Engineering" << endl;
            station->getNextCar()->aeroImprover();
        } else if (random < 3) {
            cout << "Computer Simulation Test Successful (50% Improvement)" << endl;
            cout << "Calling Aero Department in Engineering" << endl;
            station->getNextCar()->aeroImprover();
            cout << "Calling Chassis Department in Engineering" << endl;
            station->getNextCar()->chasImprover();
        } else if (random < 4) {
            cout << "Computer Simulation Test Successful (75% Improvement)" << endl;
            cout << "Calling Aero Department in Engineering" << endl;
            station->getNextCar()->aeroImprover();
            cout << "Calling Chassis Department in Engineering" << endl;
            station->getNextCar()->chasImprover();
            cout << "Calling Engine Department in Engineering" << endl;
            station->getNextCar()->engiImprover();
        } else if (random < 5){
            cout << "Computer Simulation Test Successful (100% Improvement)" << endl;
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

    station->notify();
}

/**
 * @brief Called after every run, called from the notify function and gives decription of current status of various tests
 * 
 */

void ComputerSimulation::updateTesting(){
    cout << "Computer Simulation Update Statistics:" << endl;
    cout << "Status: Available" << endl;
    cout << "Used: " << getNum() << " times this season" << endl << "Unlimited Uses Allowed" << endl << endl;
}

void ComputerSimulation::efficiency(){
    /*
    Connect to race and limit number of wind tunnel uses per race
    */
}

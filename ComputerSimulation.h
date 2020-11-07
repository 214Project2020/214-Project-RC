#ifndef ComputerSimulation_h
#define ComputerSimulation_h

#include "TeamTestingStation.h"
#include "TestingType.h"

class ComputerSimulation : public TestingType{
private:
    TeamTestingStation * station; //Relevant station for test
public:
    ComputerSimulation(TeamTestingStation *);
    virtual ~ComputerSimulation();
    virtual void runCurrentSeasonTest();
    virtual void runNextSeasonTest();
    virtual void updateTesting();
    void efficiency();
};

#endif
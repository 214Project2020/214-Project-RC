#ifndef WindTunnel_h
#define WindTunnel_h

#include "TeamTestingStation.h"
#include "TestingType.h"

class WindTunnel : public TestingType{
private:
    TeamTestingStation * station; //relevant TeamTestingStation for the test which will call notify function
    int limit; //number of attemps allowed for particular test
public:
    WindTunnel(TeamTestingStation *);
    virtual ~WindTunnel();
    virtual void runCurrentSeasonTest();
    virtual void runNextSeasonTest();
    virtual void updateTesting();
    void efficiency();
    void decrementLimit();
    int getLimit();
};

#endif
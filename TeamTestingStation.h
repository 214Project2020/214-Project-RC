#ifndef TeamTestingStation_h
#define TeamTestingStation_h

#include "F1Car.h"
#include "TestingStation.h"

class TeamTestingStation : public TestingStation{
public:
    TeamTestingStation();
    virtual ~TeamTestingStation();
    F1Car * getCurrentCar();
    F1Car * getNextCar();
};

#endif
#ifndef TeamTestingStation_h
#define TeamTestingStation_h

#include "F1Car.h"
#include "TestingStation.h"

class TeamTestingStation : public TestingStation{
private:
    F1Car * car;
public:
    TeamTestingStation(F1Car * newCar);
    virtual ~TeamTestingStation();
    F1Car * getCar();
    void setCar(F1Car * c);
};

#endif
#ifndef CURRENTSEASONWORKSHOP_H
#define CURRENTSEASONWORKSHOP_H

#include <string>
#include <iostream>
#include "Builder.h"
#include "CurrentSeasonCar.h"

using namespace std;

class CurrentSeasonWorkshop: public Builder         
{	
    private:
        CurrentSeasonCar* car;
    public:
        CurrentSeasonWorkshop();
        ~CurrentSeasonWorkshop();
        virtual void setName(string name);
        virtual void addEngine(string name);
        virtual void addSuspension(string name);
        virtual void addBrakes(string name);
        CurrentSeasonCar* getCar();
};
#endif
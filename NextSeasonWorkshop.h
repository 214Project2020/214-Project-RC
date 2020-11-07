#ifndef NEXTSEASONWORKSHOP_H
#define NEXTSEASONWORKSHOP_H

#include <string>
#include <iostream>
#include "Builder.h"
#include "NextSeasonCar.h"

using namespace std;

class NextSeasonWorkshop: public Builder         
{	
    private:
        NextSeasonCar* car;
    public:
        NextSeasonWorkshop();
        ~NextSeasonWorkshop();
        virtual void setName(string name);
        virtual void addEngine(string name);
        virtual void addSuspension(string name);
        virtual void addBrakes(string name);
        NextSeasonCar* getCar();
};
#endif
#ifndef MYTEAM_H
#define MYTEAM_H

#include <string>
#include <iostream>
#include "F1CarVirtual.h"

using namespace std;

class MyTeam
{	
    protected:
        F1CarVirtual* car;

    public:
        MyTeam();
        MyTeam(F1CarVirtual* car);
        virtual ~MyTeam();
        void setCar(F1CarVirtual* car);
        bool checkTyre();
        bool checkBrakes();
        bool checkHeat();
        bool checkFuel();
        void setTyre();
        void setBrakes();
        void setHeat();
        void setFuel();

};
#endif
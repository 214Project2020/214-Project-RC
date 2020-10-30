#ifndef F1CARVIRTUAL_H
#define F1CARVIRTUAL_H

#include <string>
#include <iostream>

using namespace std;

class F1CarVirtual
{	
    private:
        float distanceTraveled;
        string name;
        bool tyre;
        bool heat;                                  
        bool brakes;  
        bool fuel;                          

    public:
        F1CarVirtual(string name);
        ~F1CarVirtual();
        float getDistance();
        void setDistance(float distance);
        string getName();
        void setName(string name);
        bool getTyre();
        void setTyre(bool opt);
        bool getHeat();
        void setHeat(bool opt);
        bool getBrakes();
        void setBrakes(bool opt);
        bool getFuel();
        void setFuel(bool opt);

};
#endif
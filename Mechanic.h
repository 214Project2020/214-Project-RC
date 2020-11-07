#ifndef MECHANIC_H
#define MECHANIC_H

#include <string>
#include <iostream>
#include "Builder.h"

using namespace std;

class Mechanic
{	
    private:
        Builder* carBuilder;

    public:
        Mechanic();
        ~Mechanic();
        void engineer(string name ,string engine, string suspension, string brakes);
        void setBuilder(Builder* build);


};
#endif
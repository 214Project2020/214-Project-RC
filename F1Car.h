#ifndef F1CAR_H
#define F1CAR_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "Aerodynamics.h"
#include "Engine.h"
#include "Electronics.h"
#include "Chassis.h"

using namespace std;
class F1Car
{
public:
    F1Car();
    ~F1Car();
    virtual void aeroImprover()=0;
    virtual void elecImprover()=0;
    virtual void engiImprover()=0;
    virtual void chasImprover()=0;
    
};

#endif


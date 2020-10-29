#ifndef ELECTONICS_H
#define ELECTONICS_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;
class Electronics
{
private:

public:
    Electronics();
    ~Electronics();
    virtual void ElecImprove()=0;
};

#endif
#ifndef RACE_H
#define RACE_H

#include "Iterator.h"
#include "Lap.h"

using namespace std;

class Race
{
public:
    Race();
    ~Race();
    virtual Iterator* createIterator()=0;
    virtual void addLap(Lap* l)=0;
 
};

#endif
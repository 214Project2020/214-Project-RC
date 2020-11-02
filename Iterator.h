#ifndef ITERATOR_H
#define ITERATOR_H

#include "Lap.h"
using namespace std;

class Iterator
{ public:
    Iterator();
    ~Iterator();
    virtual void first()=0;
    virtual void next()=0;
    virtual bool hasNext()=0;
    virtual Lap* getCurrentLap()=0;
    virtual bool isDone()=0;
    //virtual void hasNext()=0;  //not neccesary
    
};

#endif
#ifndef RACE_H
#define RACE_H
#include "Iterator.h"

using namespace std;

class Race {
private:

public:
 Race();
 ~Race();
 virtual Iterator* CreateIterator()=0;
 virtual int count()=0;
 virtual void appendLap(Lap* lap)=0;

};

#endif
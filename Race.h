#ifndef RACE_H
#define RACE_H
#include "Iterator.h"

using namespace std;

class Race {
 Race();
 ~Race();
 Iterator* CreateIterator();
 virtual int count()=0;
 virtual void appendLap(Lap* lap)=0;

};

#endif
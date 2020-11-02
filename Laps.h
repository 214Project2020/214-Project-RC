#ifndef LAPS_H
#define LAPS_H

#include "Iterator.h"
#include "Lap.h"
#include "Race.h"
#include "lapIterator.h"

using namespace std;

class Laps : public Race
{
    private:
        Lap* startingLap;
        Lap* newestLap;
        
    public:
        Laps(Lap *l);
        ~Laps();
        lapIterator* createIterator();
        void addLap(Lap* l); //first add all laps then create iterator
 
};

#endif
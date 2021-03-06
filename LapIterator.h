#ifndef LAPSITERATOR_H
#define LAPSITERATOR_H

#include "Iterator.h"
#include "Lap.h"

using namespace std;

class lapIterator : public Iterator
{
    private:
        Lap* firstLap;
        Lap* currentLap;
        float totalTime;
        float fastestTime;
    public:
        lapIterator(Lap *l); //recieves the first lap newly created by Laps
        ~lapIterator();
        void first();
        void next();
        bool hasNext();
        bool isDone();
        Lap* getCurrentLap();
        void addTime();
        void displayTotalTime();
        void displayFastestTime();
        float getFastestTime();
        float getTotalTime();
};

#endif

#ifndef LAPS_H
#define LAPS_H
#include <vector>

#include "Iterator.h"
#include "Lap.h"
#include "Race.h"

class Laps :public Race
{
    private:
        vector<Lap> lapVector;
    public:
        Laps();
        ~Laps();
        Iterator* CreateIterator(); //why did Jody want to make it virtual?
        int count();
        void appendLap(Lap* lap);
        Lap* GetLap(int lapNum);

}
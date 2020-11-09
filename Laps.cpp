#include "Laps.h"
#include "LapIterator.h"
#include "Lap.h"

using namespace std;

Laps::Laps(Lap* l){
    this->startingLap = l; //initial time is -1 because lap hasnt taken place yet
this->newestLap = l;
}

Laps::~Laps(){
    delete startingLap;
}

void Laps::addLap(Lap* l){
    newestLap->setNextLap(l);
    newestLap= l;

}

lapIterator* Laps::createIterator(){
    return (new lapIterator(this->startingLap));    
}
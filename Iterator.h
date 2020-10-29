#ifndef ITERATOR_H
#define ITERATOR_H

using namespace std;
//iterator is accesed through client
//this is abstarct parent class for LapIterator
class Iterator {
 Iterator();
~Iterator();
 virtual void first()=0;
 virtual void next()=0;
 virtual bool isDone()=0;
 virtual Lap* currentLap()=0;
virtual int getBestTime()=0;

};

#endif
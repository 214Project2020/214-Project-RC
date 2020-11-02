#include "Lap.h"
#include "lapIterator.h"
#include <iostream>
using namespace std;

lapIterator::lapIterator(Lap* l)
{
 this->firstLap= l;
this->currentLap = l;
}

lapIterator::~lapIterator()
{
    
}

void lapIterator::first()
{
    this->currentLap = this->firstLap;
}

void lapIterator::next()
{

//     cout<<"next lap has time of : "<<this->currentLap->getNextLap()->getLapTime()<<"s"<<endl;
    this->currentLap= (this->currentLap->getNextLap());
//    cout<<"current lap has time of : "<<this->currentLap->getLapTime()<<"s"<<endl;
}

bool lapIterator::hasNext()
{
    return (this->currentLap->getNextLap()!=nullptr);
}

bool lapIterator::isDone()
{
    return (this->currentLap==nullptr);
}

Lap* lapIterator::getCurrentLap()
{
    return (this->currentLap);
}
#include "Lap.h"
#include "lapIterator.h"
#include <iostream>
#include <cmath>

using namespace std;

lapIterator::lapIterator(Lap* l)
{
    this->firstLap= l;
    this->currentLap = l;
    totalTime = 0;
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
        this->addTime();
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

void lapIterator::addTime() {
    // float timeHolder = this->getCurrentLap()->getLapTime();
        float timeHolder = this->currentLap->getLapTime();
    int secondHolder = 0;
    if ((fmod(timeHolder,1) + fmod(totalTime,1))> 0.59)
    {
        secondHolder = 1;
        float milHolder = (fmod(timeHolder,1) + fmod(totalTime,1)) - 0.60;
        int totTime = trunc(totalTime);
        int newTime = trunc(timeHolder);
        totalTime = totTime + newTime + milHolder + 1;

    }
    else
    {
        totalTime += timeHolder;
    }
}

void lapIterator::displayTotalTime() {
    int milliSecondPart = fmod(totalTime,1)*100;

    //milliSecondPart = std::ceil(milliSecondPart * 100.0) / 100.0;
    float totalTimeHolder = totalTime - fmod(totalTime,1);
    float minuteConvert = totalTimeHolder/60;
    int secondPart = fmod(minuteConvert,1)*60;
    int minutePart = trunc(minuteConvert);

    cout << endl << "----------------------------------------------------------------" << endl;
    cout << "RACE HAS ENDED" << endl;
    //cout << "total time: " << totalTime << endl;
    cout << "Final Time: " << minutePart << " minutes "  << secondPart << "." << milliSecondPart << " seconds" << endl;
    cout << "----------------------------------------------------------------" << endl;
}

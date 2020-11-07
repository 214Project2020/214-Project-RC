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
    fastestTime = 900000000000;
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

void lapIterator::addTime() {
    float timeHolder = this->getCurrentLap()->getLapTime();

    if (timeHolder < fastestTime)
    {
        fastestTime = timeHolder;
    }

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
    float hourConvert = minutePart/60;
    int redoMinute = fmod(hourConvert,1)*60;
    int hourPart = hourConvert;

    cout << endl << "----------------------------------------------------------------" << endl;
    cout << "RACE HAS ENDED" << endl;
    //cout << "total time: " << minutePart << endl;
    cout << "Final Time: " << minutePart << " minutes "  << secondPart << "." << milliSecondPart << " seconds" << endl;

}

void lapIterator::displayFastestTime() {
    int milliSecondPart = fmod(fastestTime,1)*100;

    //milliSecondPart = std::ceil(milliSecondPart * 100.0) / 100.0;
    float totalTimeHolder = fastestTime - fmod(fastestTime,1);
    float minuteConvert = totalTimeHolder/60;
    int secondPart = fmod(minuteConvert,1)*60;
    int minutePart = trunc(minuteConvert);
    float hourConvert = minutePart/60;
    int redoMinute = fmod(hourConvert,1)*60;
    int hourPart = hourConvert;

    if (minutePart == 0){
        cout << "Fastest Lap: " << minutePart << " minute "  << secondPart << "." << milliSecondPart << " seconds" << endl;
        cout << "----------------------------------------------------------------" << endl;
    }
    else {
        //cout << "total time: " << minutePart << endl;
        cout << "Fastest Lap: " << minutePart << " minutes "  << secondPart << "." << milliSecondPart << " seconds" << endl;
        cout << "----------------------------------------------------------------" << endl;
    }
}

float lapIterator::getFastestTime() {
    return fastestTime;
}

float lapIterator::getTotalTime() {
    return totalTime;
}

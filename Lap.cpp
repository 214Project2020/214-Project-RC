#include "Lap.h"
#include <iostream>
using namespace std;


Lap::Lap(float time)
{
    this->lapTime= time;
    this->nextLap = nullptr;
    //this->lapNumber = this->addRandom++;

}

 int Lap::addRandom= 0;

void Lap::setNextLap(Lap * l){
this->nextLap = l;
}

void Lap::showLapTime()
{
    
        cout<<"Lap number "<<this->lapNumber<<" has time of : "<<this->lapTime<<"s"<<endl;   
}

Lap::Lap()
{

  srand((unsigned) time(0)+this->addRandom++);
  int randomInt = rand()%(100);
  float randomFloat= rand()%(100);
  
  randomFloat = (float)randomFloat/100;
  float time = randomInt +randomFloat;
  
    this->lapTime =time ;
    this->nextLap = nullptr;
    this->lapNumber = this->addRandom++;
    //cout <<time <<"s"<<endl;
 
}

float Lap::getLapTime()
{
    return this->lapTime;
}

void Lap::setLapTime(float time)
{
    this->lapTime = time;
}

Lap* Lap::getNextLap()
{
  return this->nextLap;
}

Lap::~Lap(){}

// string Lap::getTyreType()
// {}

// void Lap::setTyreType()
// {}

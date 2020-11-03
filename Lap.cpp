#include "Lap.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "Crash.h"
#include "crashCommand.h"
#include "StopCrashCommand.h"
using namespace std;


Lap::Lap(float time)
{
    this->lapTime= time;
    this->nextLap = nullptr;
    //this->lapNumber = this->addRandom++;
    Crash* crash = new Crash();
    CrashCommand* crashCommand = new crashCommand(crash);
    StopCrashCommand* stopCrashCommand = new stopCrashCommand(crash);
    Switch* switchCont = new Switch(crashCommand, stopCrashCommand);
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

void Lap::calculateCrashPossibility() {
    srand( (unsigned)time( NULL ) );
    int crashPossibility = (rand() % 40) + 1;


    if (crashPossibility > 35) {
        //High possibility of crash, execute crash command - still chance of recovery, calculated later
        srand( (unsigned)time( NULL ) );
        int crashRecovery = (rand() % 40) + 1;
        if (crashRecovery > 10) {       //Recovers from crash
            switchCont->stopComm();


        }
        else {
            switchCont->startComm();
        }
    }
}

// string Lap::getTyreType()
// {}

// void Lap::setTyreType()
// {}

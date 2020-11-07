#include "Lap.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctime>
#include <iostream>
#include "Crash.h"
#include "Switch.h"
#include "CrashCommand.h"
#include "StopCrashCommand.h"
#include "Command.h"

using namespace std;


Lap::Lap(float time)
{
    this->lapTime= time;
    this->nextLap = nullptr;
    cout << "HELLO" <<endl;
    Crash* crash = new Crash();

    crash->startCrash();
    cout << "HERE";

    //this->lapNumber = this->addRandom++;

}

 int Lap::addRandom= 0;

void Lap::setNextLap(Lap * l){
this->nextLap = l;
}

void Lap::showLapTime()
{
        
      int evenNumber =   (this->lapNumber)/2;
cout<<"Lap number "<<evenNumber<<" has time of : "<<this->lapTime<<"s"<<endl;
        //cout<<"hiii"<<endl;
             
}

Lap::Lap()
{

  srand((unsigned) time(0)+this->addRandom++);
  /*int randomInt = rand()%(100);
  float randomFloat= rand()%(100);

  randomFloat = (float)randomFloat/100;
  float time = randomInt +randomFloat;*/
  int intPart = (rand() % (180 +60)) + 60;
  float floatPart = (rand() % 59);
  floatPart = floatPart/100;
  float time = intPart + floatPart;

    this->lapTime =time ;
    this->nextLap = nullptr;
    this->lapNumber = this->addRandom++;
    //cout <<time <<"s"<<endl;
    this->crash = new Crash();

    this->crashComm = new CrashCommand(crash);
    this->stopCrashComm = new StopCrashCommand(crash);
    this->switchCont = new Switch (crashComm, stopCrashComm);

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
    srand ( time(NULL) );
    srand((unsigned) time(0)+this->addRandom++);

    int crashPossibility = (rand() % 40) + 1;
    //cout << endl << "NUMBER: " << crashPossibility << endl << endl;

    if (crashPossibility > 35) {
        //High possibility of crash, execute crash command - still chance of recovery, calculated later
        //srand((unsigned) time(0)+this->addRandom++);
        int crashRecovery = (rand() % 40) + 1;
        //cout << endl << "NUMBER: " << crashRecovery << endl << endl;
        if (crashRecovery > 5) {       //Recovers from crash

           switchCont->stopComm();


        }
        else {
            switchCont->startComm();        // Have crash
        }
    }
}

// string Lap::getTyreType()
// {}

// void Lap::setTyreType()
// {}

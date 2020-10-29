#include "Laps.h"

using namespace std;

Laps::Laps(){}
int Laps::count(){
    //return total items in the lapVector
return this->lapVector.size();
}

Iterator* Laps::CreateIterator(){
return new LapIterator(this);
}

void Laps::appendLap(lap* lap){
this->lapVector.push_back(lap);
}

void Laps::GetLap(int lapNum){
return this->lapVector[lapNum];
}
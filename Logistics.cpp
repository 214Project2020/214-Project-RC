#include "Logistics.h"

using namespace std;

Logistics::Logistics(){
  this->tr = NULL;
}

Track* Logistics::getTrack(){

  return this->tr;
}

void Logistics::setTrack(Track* a){

  this->tr = a;
}
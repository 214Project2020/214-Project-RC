#include "Logistics"

using namespace std;

Logistics::Logistics(){
  this->tr = NULL;
}

track* Logistics::getTrack(){

  return this->tr;
}

void Logistics::setTrack(Track* a){

  this->tr = a;
}

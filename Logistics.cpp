#include "Logistics"

using namespace std;

Logistics::Logistics(Track* track){
  this->t = track;
}

Logistics::~Logistics(){

}

track* Logistics::getTrack(){

  return this->t;
}

void Logistics::setTrack(Track* a){

  this->t = a;
}

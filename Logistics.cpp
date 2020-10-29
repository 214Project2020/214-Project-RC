#include "Logistics"

using namespace std;

Logistics::Logistics(){

}

Logistics::~Logistics(){

}

track* Logistics::getTrack(){

  return this->t;
}

void Logistics::setTrack(track* a){

  this->t = a;
}

#include "NextSeasonWorkshop.h"

NextSeasonWorkshop::NextSeasonWorkshop()
{
    car = NextSeasonCar::getInstance();
}

NextSeasonWorkshop::~NextSeasonWorkshop()
{

}
void NextSeasonWorkshop::setName(string name)
{
    car->setName(name);
}
void NextSeasonWorkshop::addEngine(string name)
{
    car->setEngine(name);
}
void NextSeasonWorkshop::addSuspension(string name)
{
    car->setSuspension(name);
}

void NextSeasonWorkshop::addBrakes(string name){
    car->setBrakes(name);
}

NextSeasonCar* NextSeasonWorkshop::getCar(){
    return car;
}
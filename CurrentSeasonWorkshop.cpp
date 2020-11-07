#include "CurrentSeasonWorkshop.h"

CurrentSeasonWorkshop::CurrentSeasonWorkshop()
{
    car = CurrentSeasonCar::getInstance();
}

CurrentSeasonWorkshop::~CurrentSeasonWorkshop()
{

}
void CurrentSeasonWorkshop::setName(string name)
{
    car->setName(name);
}
void CurrentSeasonWorkshop::addEngine(string name)
{
    car->setEngine(name);
}
void CurrentSeasonWorkshop::addSuspension(string name)
{
    car->setSuspension(name);
}

void CurrentSeasonWorkshop::addBrakes(string name){
    car->setBrakes(name);
}

CurrentSeasonCar* CurrentSeasonWorkshop::getCar(){
    return car;
}
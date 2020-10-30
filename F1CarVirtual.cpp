#include "F1CarVirtual.h"

F1CarVirtual::F1CarVirtual(string name)
{
    this->name = name;
    this->tyre = true;
    this->brakes = true;
    this->heat = true;
    this->fuel = true;
}
F1CarVirtual::~F1CarVirtual()
{

}
float F1CarVirtual::getDistance()
{
    return this->distanceTraveled;
}
void F1CarVirtual::setDistance(float distance)
{
    this->distanceTraveled = distance;
}
string F1CarVirtual::getName()
{
    return this->name;
}
void F1CarVirtual::setName(string name)
{
    this->name = name;
}
bool F1CarVirtual::getTyre()
{
    return tyre;
}
void F1CarVirtual::setTyre(bool opt)
{
    this->tyre = opt;
}
bool F1CarVirtual::getHeat()
{
    return heat;
}
void F1CarVirtual::setHeat(bool opt)
{
    this->heat = opt;
}
bool F1CarVirtual::getBrakes()
{
    return brakes;
}
void F1CarVirtual::setBrakes(bool opt)
{
    this->brakes = opt;
}
bool F1CarVirtual::getFuel()
{
    return fuel;
}
void F1CarVirtual::setFuel(bool opt)
{
    this->fuel = opt;
}


#include "MyTeam.h"
MyTeam::MyTeam()
{

}
MyTeam::~MyTeam()
{

}
MyTeam::MyTeam(F1CarVirtual* car)
{
    this->car = car;
}
bool MyTeam::checkTyre()
{
    return car->getTyre();
}
bool MyTeam::checkBrakes()
{
    return car->getFuel();
}
bool MyTeam::checkHeat()
{
    return car->getHeat();
}
bool MyTeam::checkFuel()
{
    return car->getFuel();
}
void MyTeam::setTyre()
{
    car->setTyre(true);
}
void MyTeam::setBrakes()
{
    car->setTyre(true);
}
void MyTeam::setHeat()
{
    car->setTyre(true);
}
void MyTeam::setFuel()
{
    car->setTyre(true);
}
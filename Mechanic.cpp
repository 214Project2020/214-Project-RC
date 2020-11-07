#include "Mechanic.h"

Mechanic::Mechanic()
{
    carBuilder = nullptr;
}
Mechanic::~Mechanic()
{

}
void Mechanic::engineer(string name ,string engine, string suspension, string brakes)
{
    carBuilder->setName(name);
    carBuilder->addEngine(engine);
    carBuilder->addBrakes(brakes);
    carBuilder->addSuspension(suspension);
}
void Mechanic::setBuilder(Builder* build)
{
    carBuilder = build;
}
#include "FuelTeam.h"

FuelTeam::FuelTeam()
{

}
FuelTeam::~FuelTeam()
{
    
}
void FuelTeam::update()
{
    if (belongsTo->checkFuel() == false)                    //tyres are worn
    {
        cout<<"Driver Went a bit heavy on the fuel this section"<<endl;
        belongsTo->setFuel();
    }
}
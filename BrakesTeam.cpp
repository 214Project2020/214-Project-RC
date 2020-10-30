#include "BrakesTeam.h"

BrakesTeam::BrakesTeam()
{

}
BrakesTeam::~BrakesTeam()
{
    
}
void BrakesTeam::update()
{
    if (belongsTo->checkBrakes() == false)                    //tyres are worn
    {
        cout<<"Brake calipers were worn after this section"<<endl;
        belongsTo->setBrakes();
    }
}
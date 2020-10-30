#include "HeatTeam.h"

HeatTeam::HeatTeam()
{

}
HeatTeam::~HeatTeam()
{
    
}
void HeatTeam::update()
{
    if (belongsTo->checkHeat() == false)                    //tyres are worn
    {
        cout<<"Car showed signs of over heating in this section"<<endl;
        belongsTo->setHeat();
    }
}
#include "TyreTeam.h"

TyreTeam::TyreTeam()
{

}
TyreTeam::~TyreTeam()
{
    
}
void TyreTeam::update()
{
    if (belongsTo->checkTyre() == false)                    //tyres are worn
    {
        cout<<"Tyres took strain in this section keep it on the track a little more"<<endl;
        belongsTo->setTyre();
    }
}
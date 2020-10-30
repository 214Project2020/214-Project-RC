#include "CheckPointHandler.h"

CheckPointHandler::CheckPointHandler()
{
    timer = 0;
}
CheckPointHandler::~CheckPointHandler()
{

}
void CheckPointHandler::handleRequest(F1CarVirtual* car,int point,float time)
{

}
void CheckPointHandler::add(CheckPointHandler* next)
{
    if(succesor)
    {
        succesor->add(next);
    }
    else
    {
        this->succesor = next;
    }
    
}
void CheckPointHandler::setTeam(AnalysisTeam* team)
{
    this->observerTeam = team;                                      //set the observer team
}
float CheckPointHandler::getTime()
{
    return this->timer;
}
void CheckPointHandler::setTime(float timer)
{
    this->timer=timer;
}
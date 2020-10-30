#include "AnalysisTeam.h"

AnalysisTeam::AnalysisTeam()
{

}
AnalysisTeam::AnalysisTeam(F1CarVirtual* car)
{
    this->car = car;
}
AnalysisTeam::~AnalysisTeam()
{

}
void AnalysisTeam::attach(TechTeam* observer)                                   //attach the observer to the list
{
    crew.push_back(observer);
    observer->registerTeam(this);
}
void AnalysisTeam::detach(TechTeam* observer)                                      //detach the observer from the list
{
    bool found = false;
    vector<TechTeam*>::iterator it=crew.begin();
    while((it != crew.end()) && (!found))
    {
        if (*it == observer)
        {
            found = true;
            crew.erase(it);
        }
    }
}
void AnalysisTeam::notify()                                                 //update all the observers
{
    vector<TechTeam*>::iterator it=crew.begin();
    for (it = crew.begin() ; it != crew.end() ; it++)
    {
        (*it)->update();
    }
}
bool AnalysisTeam::checkTyre()
{
    return car->getTyre();
}
bool AnalysisTeam::checkBrakes()
{
    return car->getBrakes();
}
bool AnalysisTeam::checkHeat()
{
    return car->getHeat();
}
bool AnalysisTeam::checkFuel()
{
    return car->getFuel();
}
#include "CheckPoint3.h"

CheckPoint3::CheckPoint3()
{

}
CheckPoint3::~CheckPoint3()
{
    
}

void CheckPoint3::handleRequest(F1CarVirtual* car,int point, float timer)
{
    if (point == 3)                                 //car at current checkpoint
    {
        cout<<"Sector 3:"<<endl;
        //random integer
        srand((unsigned) time(0)); 
        int randInt = (rand() % (13-10+1))+10; 
        //random float
        float randFloat = (float) rand()/RAND_MAX;
        //final random time
        float randomTime = randInt + randFloat;
        this->setTime(timer + randomTime);
        cout<< car->getName() << " passed CheckPoint3 in time " << randomTime << "s" <<endl;
        cout<<"Current lap Time: "<<this->getTime()<<"s"<<endl;


        //get random value for if a car is driven wrong in testing (50% probability of bad driving)
        srand((unsigned) time(0)+1); 
        randInt = (rand() % (8-1 + 1))+1;
        if(randInt == 1)
        {
           car->setBrakes(false);                           //brakes get worn
        }
        if(randInt == 2)
        {
            car->setHeat(false);                            //car gets over heated
        }
        if(randInt == 3)
        {
            car->setTyre(false);                            //car tyres are getting damaged
        }
        if(randInt == 4)
        {
            car->setFuel(false);                            //car using too much fuel
        }
        observerTeam->notify();
    }
    else                                            //pass to next checkpoint
    {
        if(succesor)
        {
            succesor->handleRequest(car,point,this->getTime());
        }
    }
    
}
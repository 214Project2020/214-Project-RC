#include "CheckPoint2.h"

CheckPoint2::CheckPoint2()
{

}
CheckPoint2::~CheckPoint2()
{
    
}

void CheckPoint2::handleRequest(F1CarVirtual* car,int point, float timer)
{
    if (point == 2)                                 //car at current checkpoint
    {
        cout<<"Sector 2:"<<endl;
        //random integer
        srand((unsigned) time(0)); 
        int randInt = (rand() % (15-11+1))+11; 
        //random float
        float randFloat = (float) rand()/RAND_MAX;
        //final random time
        float randomTime = randInt + randFloat;
        this->setTime(timer + randomTime);
        cout<< car->getName() << " passed CheckPoint2 in time " << randomTime <<"s" << endl;
        cout<<"Current lap Time: "<<this->getTime()<<"s"<<endl;


        //get random value for if a car is driven wrong in testing (50% probability of bad driving)
        srand((unsigned) time(0)+2); 
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

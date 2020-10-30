#ifndef CHECKPOINTHANDLER_H
#define CHECKPOINTHANDLER_H

#include <string>
#include <iostream>
#include "F1CarVirtual.h"
#include "AnalysisTeam.h"

using namespace std;
class F1CarVirtual;

class CheckPointHandler
{	
    protected:
        CheckPointHandler* succesor;                                         //for the chain
        AnalysisTeam* observerTeam;
        float timer;

    public:
        CheckPointHandler();
        virtual ~CheckPointHandler();

        virtual void handleRequest(F1CarVirtual* car,int point, float time);                                        //action
        virtual void add(CheckPointHandler* next);
        void setTeam(AnalysisTeam* team);
        float getTime();
        void setTime(float timer);
};
#endif
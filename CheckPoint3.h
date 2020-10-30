#ifndef CHECKPOINT3_H
#define CHECKPOINT3_H

#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "CheckPointHandler.h"

using namespace std;

class CheckPoint3 : public CheckPointHandler
{	
	public:
        CheckPoint3();
        ~CheckPoint3();

        void handleRequest(F1CarVirtual* car,int point, float timer);                                        //action
};
#endif
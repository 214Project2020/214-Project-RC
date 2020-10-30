#ifndef CHECKPOINT1_H
#define CHECKPOINT1_H

#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "CheckPointHandler.h"

using namespace std;

class CheckPoint1 : public CheckPointHandler
{	
	public:
        CheckPoint1();
        ~CheckPoint1();

        void handleRequest(F1CarVirtual* car,int point, float timer);                                        //action
};
#endif
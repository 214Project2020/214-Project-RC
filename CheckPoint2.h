#ifndef CHECKPOINT2_H
#define CHECKPOINT2_H

#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "CheckPointHandler.h"

using namespace std;

class CheckPoint2 : public CheckPointHandler
{	
	public:
        CheckPoint2();
        ~CheckPoint2();

        void handleRequest(F1CarVirtual* car,int point, float timer);                                        //action
};
#endif
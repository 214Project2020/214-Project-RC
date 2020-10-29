#ifndef ENGINECURRENTSEASON_H
#define ENGINECURRENTSEASON_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "Engine.h"

using namespace std;
class EngineCurrentSeason : public Engine
{
private:

public:
    EngineCurrentSeason();
    ~EngineCurrentSeason();
    virtual void EngineImprove();
};

#endif
#ifndef ENGINENEXTSEASON_H
#define ENGINENEXTSEASON_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "Engine.h"

using namespace std;
class EngineNextSeason : public Engine
{
private:

public:
    EngineNextSeason();
    ~EngineNextSeason();
    virtual void EngineImprove();
};

#endif
#ifndef ENGINENEXTSEASON_H
#define ENGINENEXTSEASON_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "NextSeasonDepartment.h"

using namespace std;
class EngineNextSeason : public NextSeasonDepartment
{
private:

public:
    EngineNextSeason();
    ~EngineNextSeason();
    virtual void improve();
};

#endif
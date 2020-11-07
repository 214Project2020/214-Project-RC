#ifndef ENGINECURRENTSEASON_H
#define ENGINECURRENTSEASON_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "CurrentSeasonDepartment.h"

using namespace std;
class EngineCurrentSeason : public CurrentSeasonDepartment
{
public:
    EngineCurrentSeason();
    ~EngineCurrentSeason();
    virtual void improve();
};

#endif
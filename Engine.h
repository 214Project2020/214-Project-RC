#ifndef ENGINE_H
#define ENGINE_H

#include "EngineeringDepartment.h"
#include "CurrentSeasonDepartment.h"
#include "NextSeasonDepartment.h"

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;
class Engine : public EngineeringDepartment
{
public:
    Engine();
    ~Engine();
    virtual CurrentSeasonDepartment * createCurrentSeason();
    virtual NextSeasonDepartment * createNextSeason();
};

#endif
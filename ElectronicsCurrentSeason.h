#ifndef ELECTRONICSCURRENTSEASON_H
#define ELECTRONICSCURRENTSEASON_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "CurrentSeasonDepartment.h"

using namespace std;
class ElectronicsCurrentSeason : public CurrentSeasonDepartment
{
private:

public:
    ElectronicsCurrentSeason();
    ~ElectronicsCurrentSeason();
    virtual void improve();
};

#endif
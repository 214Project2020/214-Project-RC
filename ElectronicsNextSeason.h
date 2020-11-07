#ifndef ELECTRONICSNEXTSEASON_H
#define ELECTRONICSNEXTSEASON_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "NextSeasonDepartment.h"

using namespace std;
class ElectronicsNextSeason : public NextSeasonDepartment
{
public:
    ElectronicsNextSeason();
    ~ElectronicsNextSeason();
    virtual void improve();
};

#endif
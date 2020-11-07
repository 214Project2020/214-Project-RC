#ifndef ENGINEERINGDEPARTMENT_H
#define ENGINEERINGDEPARTMENT_H

#include "CurrentSeasonDepartment.h"
#include "NextSeasonDepartment.h"
#include "ElectronicsCurrentSeason.h"
#include "AerodynamicsCurrentSeason.h"
#include "EngineCurrentSeason.h"
#include "ChassisCurrentSeason.h"
#include "ElectronicsNextSeason.h"
#include "AerodynamicsNextSeason.h"
#include "EngineNextSeason.h"
#include "ChassisNextSeason.h"


class EngineeringDepartment{
public:
    EngineeringDepartment();
    ~EngineeringDepartment();
    virtual CurrentSeasonDepartment * createCurrentSeason() = 0;
    virtual NextSeasonDepartment * createNextSeason() = 0;
};

#endif
#ifndef ELECTRONICS_H
#define ELECTRONICS_H

#include "EngineeringDepartment.h"

#include <iostream>

class Electronics : public EngineeringDepartment{
public:
    Electronics();
    ~Electronics();
    virtual CurrentSeasonDepartment * createCurrentSeason();
    virtual NextSeasonDepartment * createNextSeason();
};

#endif
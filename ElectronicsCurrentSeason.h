#ifndef ELECTRONICSCURRENTSEASON_H
#define ELECTRONICSCURRENTSEASON_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "Electronics.h"

using namespace std;
class ElectronicsCurrentSeason : public Electronics
{
private:

public:
    ElectronicsCurrentSeason();
    ~ElectronicsCurrentSeason();
    virtual void ElecImprove();
};

#endif
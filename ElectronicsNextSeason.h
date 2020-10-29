#ifndef ELECTRONICSNEXTSEASON_H
#define ELECTRONICSNEXTSEASON_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "Electronics.h"

using namespace std;
class ElectronicsNextSeason : public Electronics
{
private:

public:
    ElectronicsNextSeason();
    ~ElectronicsNextSeason();
    virtual void ElecImprove();
};

#endif
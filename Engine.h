#ifndef ENGINE_H
#define ENGINE_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;
class Engine
{
private:

public:
    Engine();
    ~Engine();
    virtual void EngineImprove()=0;
};

#endif
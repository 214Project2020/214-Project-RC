#ifndef BUILDER_H
#define BUILDER_H

#include <string>
#include <iostream>


using namespace std;

class Builder
{
public:
    virtual void setName(string name) = 0;
    virtual void addEngine(string name) = 0;
    virtual void addSuspension(string name) = 0;
    virtual void addBrakes(string name) = 0;
};
#endif
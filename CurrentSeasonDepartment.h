#ifndef CurrentSeasonDepartment_h
#define CurrentSeasonDepartment_h

#include <iostream>

using namespace std;

class CurrentSeasonDepartment{
public:
    CurrentSeasonDepartment();
    ~CurrentSeasonDepartment();
    virtual void improve() = 0;
};

#endif
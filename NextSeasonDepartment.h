#ifndef NextSeasonDepartment_h
#define NextSeasonDepartment_h

#include <iostream>

using namespace std;

class NextSeasonDepartment{
public:
    NextSeasonDepartment();
    ~NextSeasonDepartment();
    virtual void improve() = 0;
};

#endif
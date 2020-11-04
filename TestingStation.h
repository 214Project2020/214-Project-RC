#ifndef TestingStation_h
#define TestingStation_h

#include <vector>
#include "TestingType.h"

class TestingStation{
private:
    vector<TestingType *> typeList;
public:
    TestingStation();
    virtual ~TestingStation();
    void addType(TestingType * type);
    void removeType(TestingType * type);
    void notify();
};

#endif
#ifndef TYRES_H_INCLUDED
#define TYRES_H_INCLUDED
#include "racingStrategyState.h"
#include <iostream>
class Tyres {
private:
    int currentTyres;
    int type;
    racingStrategyState* state;
    vector<int> tyreVect;
public:
    Tyres(racingStrategyState* state, int type, int starting);
    void changeTyres(int tyreChange);
    int getTotalRemainingTyres();
    void changeTyresAndDefault(int tyreChange);
};

#endif // TYRES_H_INCLUDED

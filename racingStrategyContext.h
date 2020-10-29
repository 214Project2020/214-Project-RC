#ifndef RACINGSTRATEGYCONTEXT_H
#define RACINGSTRATEGYCONTEXT_H

#include "track.h"
#include "racingStrategyState.h"
#include "Session.h"

using namespace std;

class racingStrategyState;

class racingStrategyContext {
private:
	track* t;
	racingStrategyState* st;
	Session* s;
public:
	racingStrategyContext(track*, Session*);
	~racingStrategyContext();
	void setStrategy(racingStrategyState*);
	void chooseStrategy();
	racingStrategyState* getStrategy();
};

#endif
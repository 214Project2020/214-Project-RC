#ifndef RACINGSTRATEGYCONTEXT_H
#define RACINGSTRATEGYCONTEXT_H

#include "Track.h"
#include "racingStrategyState.h"
#include "Session.h"

using namespace std;

class racingStrategyState;

class racingStrategyContext {
private:
	Track* t;
	racingStrategyState* st;
	Session* s;
public:
	racingStrategyContext(Track*, Session*);
	~racingStrategyContext();
	void setStrategy(racingStrategyState*);
	void chooseStrategy();
	racingStrategyState* getStrategy();
};

#endif
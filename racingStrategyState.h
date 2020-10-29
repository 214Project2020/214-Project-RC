#ifndef RACINGSTRATEGYSTATE_H
#define RACINGSTRATEGYSTATE_H

#include "Session.h"
#include "racingStrategyContext.h"

using namespace std;
class racingStrategyContext;

class racingStrategyState {
private:
	Session* s;
public:
	racingStrategyState();
	Session* getSession();
	virtual void handleChange(racingStrategyContext*) = 0;
	virtual void handleState() = 0;
};


class twoPitStopStrat : public racingStrategyState {
public:
	void handleState();
	void handleChange(racingStrategyContext*);
};

class onePitStopStrat : public racingStrategyState {
public:
	void handleState();
	void handleChange(racingStrategyContext*);
};

#endif

//for some reason the implementation of handleChange() was giving me errors when I defined the two concrete class in two different .h files. If you have a solution to this problem, feel free to update it.
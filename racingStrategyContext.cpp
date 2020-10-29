#include "racingStrategyContext.h"

racingStrategyContext::racingStrategyContext(track* t, Session* s){
	this->t  = t;
	this->st = new twoPitStopStrat();
	this->s = s;
}

void racingStrategyContext::setStrategy(racingStrategyState* st){
	delete this->st;
	this->st = st;
}

void racingStrategyContext::chooseStrategy(){
	int laps = this->t->getNumLaps();
	if(laps < 45){
		this->st->handleChange(this);
		this->st->handleState();
	}
	else {
		this->st->handleState();
	}
}

racingStrategyState* racingStrategyContext::getStrategy(){
	return this->st;
}
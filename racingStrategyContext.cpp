#include "racingStrategyContext.h"

racingStrategyContext::racingStrategyContext(Track* t, Session* s){
	this->t  = t;
	this->st = new twoPitStopStrat();
	this->s = s;
	this->st->setSession(this->s);
}

void racingStrategyContext::setStrategy(racingStrategyState* st){
	delete this->st;
	this->st = st;
	this->st->setSession(this->s);
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

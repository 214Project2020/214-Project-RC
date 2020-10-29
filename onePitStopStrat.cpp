#include "racingStrategyState.h"

void onePitStopStrat::handleState(){
	this->getSession()->setPractice(0, 1, 1);
	this->getSession()->setQuali(0,1,0);
	this->getSession()->setRace(2,0,0);
}

void onePitStopStrat::handleChange(racingStrategyContext* c){
	c->setStrategy(new twoPitStopStrat());
}
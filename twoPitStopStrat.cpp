#include "racingStrategyState.h"

void twoPitStopStrat::handleState(){
	this->getSession()->setPractice(0, 1, 1);
	this->getSession()->setQuali(1,0,0);
	this->getSession()->setRace(1,1,0);
}

void twoPitStopStrat::handleChange(racingStrategyContext* c){
	c->setStrategy(new onePitStopStrat());
}
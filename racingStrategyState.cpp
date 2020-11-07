#include "racingStrategyState.h"

racingStrategyState::racingStrategyState(){
	this->s = NULL;
}

Session* racingStrategyState::getSession() {
	return this->s;
}

void racingStrategyState::setSession(Session* s){
	this->s = s;
}
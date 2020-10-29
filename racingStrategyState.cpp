#include "racingStrategyState.h"

racingStrategyState::racingStrategyState(){
	this->s = new Session();
}

Session* racingStrategyState::getSession() {
	return this->s;
}
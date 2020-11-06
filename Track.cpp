#include "Track.h"
#include <string>

using namespace std;

Track::Track(){
	this->trackName = "";
	this->numLaps = 0;
	this->isEuro = NULL;
	this->country = "";
}

Track::Track(string name, int num, bool flag, string c){
	this->trackName = name;
	this->numLaps = num;
	this->isEuro = flag;
    this->country = c;
}

string Track::getTrackName(){
	return this->trackName;
}
void Track::setTrackName(string name){
	this->trackName = name;
}
int Track::getNumLaps(){
	return this->numLaps;
}
void Track::setNumLaps(int num){
	this->numLaps = num;
}
bool Track::getIsEuro(){
	return this->isEuro;
}
void Track::setIsEuro(bool flag){
	this->isEuro = flag;
}

string Track::getCountry(){
    return this->country;
}

void Track::setCountry(string c){
    this->country = c;
}

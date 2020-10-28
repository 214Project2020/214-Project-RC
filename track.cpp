#include "track.h"
#include <string>

using namespace std;

track::track(){
	this->trackName = "";
	this->numLaps = 0;
	this->isEuro = NULL;
	this->country = "";
}

track::track(string name, int num, bool flag, string c){
	this->trackName = name;
	this->numLaps = num;
	this->isEuro = flag;
    this->country = c;
}

string track::getTrackName(){
	return this->trackName;
}
void track::setTrackName(string name){
	this->trackName = name;
}
int track::getNumLaps(){
	return this->numLaps;
}
void track::setNumLaps(int num){
	this->numLaps = num;
}
bool track::getIsEuro(){
	return this->isEuro;
}
void track::setIsEuro(bool flag){
	this->isEuro = flag;
}

string track::getCountry(){
    return this->country;
}

void track::setCountry(string c){
    this->country = c;
}
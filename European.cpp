#include "European.h"

#include <iostream>

void European::transportContainers(){
	cout << "Transportation: The containers were transported by trucks." << endl;
}

void European::preperation(){
	   cout << "------------------------------------------" << endl;
    cout << "STARTING RACE IN " << this->getTrack()->getCountry() << endl;
    cout << "Category: European" << endl;
    cout << "The car is transported by charted plane to "<< this->getTrack()->getTrackName() << endl;
    transportContainers();
    cout << "------------------------------------------" << endl;
}

void European::serviceCar(){
	cout << "------------------------------------------" << endl;
	cout << "The Car is transported back to the factory for servicing" << endl;
	cout << "------------------------------------------" << endl;
}
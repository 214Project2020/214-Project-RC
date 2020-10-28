#include "european.h"

#include <iostream>

void european::transportContainers(){
	cout << "Transportation: The containers were transported by trucks." << endl;
}

void european::preperation(){
	   cout << "------------------------------------------" << endl;
    cout << "STARTING RACE IN " << this->getTrack()->getCountry() << endl;
    cout << "Category: European" << endl;
    cout << "The car is transported by charted plane to track";
    transportContainers();
    cout << "------------------------------------------" << endl;
}

void european::serviceCar(){
	cout << "------------------------------------------" << endl;
	cout << "The Car is transported back to the factory for servicing" << endl;
	cout << "------------------------------------------" << endl;
}
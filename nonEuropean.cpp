#include "nonEuropean.h"

#include <iostream>

void nonEuropean::transportContainers(){
	cout << "Transportation: The containers were transported by ship." << endl;
}

void nonEuropean::preperation(){
	   cout << "------------------------------------------" << endl;
    cout << "STARTING RACE IN " << this->getTrack()->getCountry() << endl;// getTrack() is from the parent class Logistics
    cout << "Category: Non-European" << endl;
    cout << "The car is transported by charted plane to "<< this->getTrack()->getTrackName() << endl;
    transportContainers();
    cout << "------------------------------------------" << endl;
}


void nonEuropean::serviceCar(){
	cout << "------------------------------------------" << endl;
	cout << "The Car is transported back to the factory for servicing" << endl;
	cout << "------------------------------------------" << endl;
}

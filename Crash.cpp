#include "CrashCommand.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "Crash.h"
using namespace std;

Crash::Crash() {

}

void Crash::startCrash() {
    cout << "----------------------------------------------------------" <<endl;
    cout << "Your car has suffered been in an unrecoverable crash." << endl;
    cout << "You have to drop out of the race and the season has ended for you."<<endl;
    cout << "----------------------------------------------------------" <<endl;
       
    cout << "--------------------PROGRAM IS OVER-----------------------" <<endl;
    cout << "----------------------------------------------------------" <<endl;
    cout << "-----------------(thank you for racing)-------------------" <<endl;    
   
    cout << "----------------------------------------------------------" <<endl;

    
    exit(1);
}

void Crash::stopCrash() {
    cout << "----------------------------------------------------------" <<endl;
    cout << "Your car nearly suffered from an unrecoverable crash but your driver recovered from it" << endl;
     cout << "----------------------------------------------------------" <<endl;
}


#include "CrashCommand.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

CrashCommand::CrashCommand(Crash* crash){
    crashObj = crash;

}

void CrashCommand::execute() {
    /*cout << "----------------------------------------------------------" <<endl;
    cout << "Your car has suffered been in an unrecoverable race." << endl;
    cout << "You have to drop out of the race and the season has ended for you." << endl;
    exit(1);*/
    crashObj->startCrash();
}

/*Lap* CrashCommand::getReciever() {
    return reciever;
}

void CrashCommand::setReciever(Lap* lapSend) {
    reciever = lapSend;
}
*/

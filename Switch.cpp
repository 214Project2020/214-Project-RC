#include "Switch.h"

using namespace std;

Switch::Switch(Command* start, Command* stop) {
    startCommand = start;
    stopCommand = stop;
}

void Switch::startComm()
{
    startCommand->execute();
}

void Switch::stopComm() {
    stopCommand->execute();
}

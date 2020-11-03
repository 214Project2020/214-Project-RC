#ifndef SWITCH_H_INCLUDED
#define SWITCH_H_INCLUDED
#include "Command.h"

class Switch {
private:
    Command* startCommand;
    Command* stopCommand;
public:
    Switch(Command* start, Command* stop);
    void startComm();
    void stopComm();
};

#endif // SWITCH_H_INCLUDED

#ifndef STOPCRASHCOMMAND_H_INCLUDED
#define STOPCRASHCOMMAND_H_INCLUDED
#include "Crash.h"
#include "Command.h"
using namespace std;
class StopCrashCommand : public Command
{
private:
    Crash* crashObj;
public:
    StopCrashCommand(Crash* crash) : Command(){crashObj = crash;};
    void execute();

};

#endif // STOPCRASHCOMMAND_H_INCLUDED

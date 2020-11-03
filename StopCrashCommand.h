#ifndef STOPCRASHCOMMAND_H_INCLUDED
#define STOPCRASHCOMMAND_H_INCLUDED
#include "Crash.h"

Class StopCrashCommand {
private:
    Crash* crashObj;
public:
    StopCrashCommand(Crash* crash);
    void execute();

}

#endif // STOPCRASHCOMMAND_H_INCLUDED

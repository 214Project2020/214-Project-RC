#ifndef CRASHCOMMAND_H_INCLUDED
#define CRASHCOMMAND_H_INCLUDED
#include "Command.h"
#include "Crash.h"

class CrashCommand : public Command
{
private:
    Crash* crashObj;
public:
    CrashCommand(Crash* crash);
    void execute();
    /*virtual void undo() = 0;
    Lap* getReciever();
    void setReciever(Lap* lapSend);*/
};


#endif // CRASHCOMMAND_H_INCLUDED

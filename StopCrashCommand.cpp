#include "StopCrashCommand.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

StopCrashCommand::StopCrashCommand(Crash* crash){
    crashObj = crash;

}

void StopCrashCommand::execute() {
    crashObj->stopCrash();
}

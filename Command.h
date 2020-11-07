#ifndef COMMAND_H_INCLUDED
#define COMMAND_H_INCLUDED


class Command {
public:
    Command(){};
    virtual void execute() = 0;

};

#endif // COMMAND_H_INCLUDED

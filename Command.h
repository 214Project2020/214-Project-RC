#ifndef COMMAND_H_INCLUDED
#define COMMAND_H_INCLUDED


class Command {
public:
    Command();  //removed the curly brackets
    virtual void execute() = 0;

};

#endif // COMMAND_H_INCLUDED

//
// Created by Admin on 06.01.2024.
//

#ifndef CARPROJECT_COMMAND_H
#define CARPROJECT_COMMAND_H

class Command{
public:
    virtual ~Command();

    virtual void Execute() = 0;

protected:
    Command();
};

#endif //CARPROJECT_COMMAND_H

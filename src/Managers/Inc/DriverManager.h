//
// Created by Admin on 06.01.2024.
//

#ifndef CARPROJECT_CARCLIENT_H
#define CARPROJECT_CARCLIENT_H

#include "Command.h"

class DriveManager{
public:

    DriveManager();

    virtual void addCommand(Command* );

    virtual void registerListener();



};
#endif //CARPROJECT_CARCLIENT_H

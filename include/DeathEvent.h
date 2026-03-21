#pragma once
#include "IEvent.h"

class DeathEvent: public IEvent{
public:
    int id;
    DeathEvent(int id): id(id) {}
};
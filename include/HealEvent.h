#pragma once
#include "IEvent.h"

class HealEvent: public IEvent{
public:
    int id;
    int amount;

    HealEvent(int id, int amount): id(id),amount(amount){}
};
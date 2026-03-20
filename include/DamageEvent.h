#pragma once
#include "IEvent.h"

class DamageEvent: public IEvent{
public:
    int id;
    int damage;

    DamageEvent(int id, int damage): id(id), damage(damage){}
};
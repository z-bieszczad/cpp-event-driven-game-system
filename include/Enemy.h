#pragma once
#include "EventBus.h"

class Enemy{
public:
    Enemy(int id, int hp, EventBus& bus);
    void takeDamage(int dmg);

private:
    int id;
    int hp;
    bool alive=true;
    EventBus& bus;
};

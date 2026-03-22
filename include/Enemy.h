#pragma once
#include "EventBus.h"

class Enemy{
public:
    Enemy(int id, int hp, EventBus& bus);
    void takeDamage(int dmg);
    
    //
    Enemy& operator-=(int dmg);//operator obrazen enemy
    //gettery
    int getId();
    bool isAlive();

private:
    int id;
    int hp;
    bool alive=true;
    EventBus& bus;
};

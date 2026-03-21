#pragma once
#include <string>
#include "EventBus.h"

class Player{
public:
    Player(int id, int hp, EventBus& bus);
    void heal(int value);
    void pickItem(const std:: string& item);
    
private:
    int id;
    int hp;
    EventBus& bus;
    // 
    std::vector<std::string> inventory;

};


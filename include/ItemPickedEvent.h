#pragma once
#include "IEvent.h"
#include <string>

class ItemPickedEvent: public IEvent{
public:
    int id;
    std::string itemName;

    ItemPickedEvent(int id, const std::string& itemName): id(id),itemName(itemName){}


};
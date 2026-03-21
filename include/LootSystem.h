#pragma once
#include "IEvent.h"
#include "ItemPickedEvent.h"
#include <iostream>

class LootSystem{
public:
    static void handleEvent(IEvent *e);
};
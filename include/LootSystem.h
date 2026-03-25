#pragma once
#include "IEvent.h"
#include "ItemPickedEvent.h"
#include <iostream>

//system reakcyjny dla itemow
class LootSystem{
public:
    static void handleEvent(IEvent *e);
};
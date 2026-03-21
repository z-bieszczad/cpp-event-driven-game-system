#pragma once
#include "IEvent.h"
#include "DamageEvent.h"
#include "HealEvent.h"
#include <iostream>

class SoundSystem{
public:
    static void handleEvent(IEvent* e);
};
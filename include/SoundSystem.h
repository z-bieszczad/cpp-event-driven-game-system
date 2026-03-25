#pragma once
#include "IEvent.h"
#include "DamageEvent.h"
#include "HealEvent.h"
#include <iostream>

// system reakcyjny dla dzwiekow gry
class SoundSystem{
public:
    static void handleEvent(IEvent* e);
};
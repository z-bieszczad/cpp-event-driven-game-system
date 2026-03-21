#pragma once
#include <iostream>
#include "IEvent.h"
#include "DamageEvent.h"

class ScoreSystem{
public:
    static void handleEvent(IEvent* e);
    static int getScore();

private:
    static int score;
};
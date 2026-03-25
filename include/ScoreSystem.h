#pragma once
#include <iostream>
#include "IEvent.h"
#include "DamageEvent.h"

//system reakcyjny dla dzwiekow
class ScoreSystem{
public:
    static void handleEvent(IEvent* e);
    static int getScore();

private:
    static int score;
};
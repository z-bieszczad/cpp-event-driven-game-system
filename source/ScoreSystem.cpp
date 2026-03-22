#include "ScoreSystem.h"
#include "DeathEvent.h"
#include <iostream>

int ScoreSystem::score=0;

void ScoreSystem::handleEvent(IEvent* e){
    if(auto dmg=dynamic_cast<DamageEvent*>(e)){
        // wstepna logika obrazen
        score+=dmg->damage;

        std::cout<<"[ScoreSystem] added "<<dmg->damage<<" points total score: "<<score<<"\n";
    }

    
    // else if (auto killEv = dynamic_cast<EnemyKilledEvent*>(e)) {
    //     score += 100; // Bonus za fraga
    //     std::cout << "[ScoreSystem] Enemy killed! Bonus 100 pts. Total: " << score << "\n";
    // }
    if(auto death=dynamic_cast<DeathEvent*>(e)){
        score+=100;
        std::cout<<"[ScoreSystem] entity "<<death->id<<" died. +100 points (total score: )"<<score<<")\n";
    }
}

int ScoreSystem::getScore(){
    return score;
}
#include "SoundSystem.h"

void SoundSystem::handleEvent(IEvent* e){
    if(dynamic_cast<DamageEvent*>(e)){
        std::cout<<"[soundsystem] play damage sound \n";

    }
    if(dynamic_cast<DamageEvent*>(e)){
        std::cout<<"[SoundSystem] play heal sound \n";
    }
}
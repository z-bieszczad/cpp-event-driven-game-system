#include "SoundSystem.h"
#include "DeathEvent.h"

void SoundSystem::handleEvent(IEvent* e){
    if(dynamic_cast<DamageEvent*>(e)){
        std::cout<<"[soundsystem] play damage sound \n";

    }
    if(dynamic_cast<HealEvent*>(e)){
        std::cout<<"[SoundSystem] play heal sound \n";
    }

    if(dynamic_cast<DeathEvent*>(e)){
        std::cout<<"[SoundSystem] death sound\n";
    }
}
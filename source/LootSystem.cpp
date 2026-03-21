#include "LootSystem.h"
#include "DeathEvent.h"

void LootSystem::handleEvent(IEvent* e){
    if(auto death=dynamic_cast<DeathEvent*>(e)){
        std::cout<<"[LootSystem] "<<death->id<<" dropped item\n";
    }
    if(auto item=dynamic_cast<ItemPickedEvent*>(e)){
        std::cout<<"[lootSystem] entity"<< item->id<<"picked item: "<<item->itemName<<"\n";

    }
    
}
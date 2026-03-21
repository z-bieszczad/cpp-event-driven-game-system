#include "LootSystem.h"

void LootSystem::handleEvent(IEvent* e){
    if(auto item=dynamic_cast<ItemPickedEvent*>(e)){
        std::cout<<"[loootSystem] entity"<< item->id<<"picked item: "<<item->itemName<<"\n";

    }
}
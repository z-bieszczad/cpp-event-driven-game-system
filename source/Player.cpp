#include "Player.h"
#include "HealEvent.h"
#include "ItemPickedEvent.h"

Player::Player(int id, int hp, EventBus& bus): id(id), hp(hp), bus(bus){}


void Player:: heal(int value){
    hp+=value;
    bus.emit(new HealEvent(id, value));

}

void Player::pickItem(const std:: string& item){
    inventory.push_back(item);
    bus.emit(new ItemPickedEvent(id, item));
}
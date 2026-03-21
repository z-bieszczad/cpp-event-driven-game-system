#include "Player.h"
#include "HealEvent.h"
#include "ItemPickedEvent.h"
#include "DamageEvent.h"
#include "DeathEvent.h"

Player::Player(int id, int hp, EventBus& bus): id(id), hp(hp), bus(bus){}


void Player:: heal(int value){
    if (!alive) return;
    hp+=value;
    bus.emit(new HealEvent(id, value));

}

void Player::pickItem(const std:: string& item){
    if (!alive) return;
    inventory.push_back(item);
    bus.emit(new ItemPickedEvent(id, item));
    
}

void Player:: takeDamage(int dmg) {
    if (!alive) return;

    hp-=dmg;

    bus.emit(new DamageEvent(id, dmg));

    if (hp <= 0) {
        alive = false;
        bus.emit(new DeathEvent(id));
    }
}
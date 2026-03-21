#include "Enemy.h"
#include "DamageEvent.h"

Enemy::Enemy(int id, int hp, EventBus& bus)
    :id(id), hp(hp), bus(bus) {}

void Enemy::takeDamage(int dmg){
    hp-=dmg;
    bus.emit(new DamageEvent(id, dmg));
}



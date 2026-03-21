#include "Enemy.h"
#include "DamageEvent.h"
#include "DeathEvent.h"

Enemy::Enemy(int id, int hp, EventBus& bus)
    :id(id), hp(hp), bus(bus) {}

void Enemy::takeDamage(int dmg){
    if(!alive){
        return;
    }
    hp-=dmg;
    bus.emit(new DamageEvent(id, dmg));

    if(hp<=0){
        alive=false;
        bus.emit(new DeathEvent(id));
    }
}



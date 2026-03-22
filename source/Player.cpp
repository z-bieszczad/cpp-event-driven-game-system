#include "Player.h"
#include "HealEvent.h"
#include "ItemPickedEvent.h"
#include "DamageEvent.h"
#include "DeathEvent.h"

Player::Player(int id, int hp, EventBus& bus): id(id), hp(hp), bus(bus){}

// Player::Player(const Player& other): id(other.id), hp(other.hp), bus(other.bus) {}



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

// operatory 
Player& Player:: operator-=(int dmg){
    hp-=dmg;
    bus.emit(new DamageEvent(id, dmg));
    if(hp<=0){
        alive=false;
        bus.emit(new DeathEvent(id));
    }
    return *this;
}

Player& Player:: operator+=(int val){
    hp+=val;
    bus.emit(new HealEvent(id,val));
    return *this;
}

Player& Player:: operator+=(std:: string item){
    inventory.push_back(item);
    return *this;
}
    


std::ostream& operator<<(std::ostream& os, const Player& player){
    os<<"player {id=}"<<player.id<<", hp"<<player.hp<<"players inventory: \n";
    for(int i=0; i<player.inventory.size(); i++){
        os<<" "<<player.inventory[i]<<" ";
    }
    return os;

}

std::string& Player:: operator[](size_t index){
    if(index<inventory.size()){
        return inventory[index];
    }
    return inventory[0];
    
}
std::string Player:: operator[](size_t index)const{
    if(index<inventory.size()){
        return inventory[index];
    }
    return inventory[0];
    
}


//------------------METODA ATTACK--------------- 
void Player::attack(Enemy& enemy){
    //int damage = rand() %41+ 10;
    if(!alive)return;
    if(!enemy.isAlive()) return;
    enemy.takeDamage(power);
    
}





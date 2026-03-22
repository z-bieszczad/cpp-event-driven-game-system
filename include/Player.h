#pragma once
#include <string>
#include "EventBus.h"
#include "Enemy.h"
#include <ostream>

class Player{
public:

    Player(int id, int hp, EventBus& bus);// konstruktor kopiujacy
    //
    //Player(const Player& other);
    void heal(int value);// teoda zwiekszajaca zrowie
    void pickItem(const std:: string& item);// metoda obslugujaca podnoszenie przediptow
    void takeDamage(int dmg); //metoda obslugujaca obrazenia postaci
    Player* clone()const;// metoda klonujaca

    //
    void attack(Enemy& enemy);// metoda obslugujaca atak

    //
    Player& operator-=(int dmg);// operator dla otrzymywania obrazen
    Player& operator+=(int val);//operator dla leczenia
    Player& operator+=(std:: string item);//operator dodania do ekwipunku
    std::string& operator[](size_t index);// operatory dostepu do ekwipunku
    std::string operator[](size_t index)const;

    friend std::ostream& operator<<(std::ostream& os, const Player& player);
    
private:
    int id;
    int hp;
    EventBus& bus;
    // 
    std::vector<std::string> inventory;
    bool alive=true;
    //
    int power=20;

};


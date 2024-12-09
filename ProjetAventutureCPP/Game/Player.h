#pragma once
#include <iostream>
#include "enemy.h"

class Player
{
private:
    std::string name;
    float health;
    float attack;
    float defense;
    int useItem;
    std::string attackType;

    
    
public:

    Player();
    ~Player();

    std::string getName();
    float getHealth();
    float getAttack();
    float getDefense();
    int getUseItem();
    void setName(std::string n);
    void setHealth(float h);
    void setAttack(float a);
    void setDefense(float d);
    void setUseItem(int uItem);
    void reduceHealth(float amount);
    std::string getattackType();
    void setattackType(std::string a_type, enemy& target);

    friend std::ostream& operator <<(std::ostream& out,Player& self);
};
 
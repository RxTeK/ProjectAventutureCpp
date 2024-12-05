#pragma once
#include <iostream>
#include "Player.h"

class enemy
{
private:
    std::string name;
    float health;
    float attack;
    float defense;
    
public:

    enemy();
    virtual ~enemy();
    
    std::string getname();
    float gethealth();
    float getattack();
    float getdefense();
    void setName(std::string n);
    void sethealth(float h_health);
    void setattack(float a_attack);
    void setdefense(float d_defense);
    void reduceHealth(float amount);
    
    
};

#pragma once
#include <iostream>

class Player
{
private:
    std::string name;
    float health;
    float attack;
    float defense;
    int useItem;

    
    
public:

    Player();
    ~Player();

    std::string getName();
    float getHealth();
    float getAttack();
    float getDefense();
    int getUseItem();
    void setName(std::string name);
    void setHealth(float h);
    void setAttack(float a);
    void setDefense(float d);
    void setUseItem(int uItem);
    void reduceHealth(float amount);
};

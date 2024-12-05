#pragma once
#include <iostream>

class enemy
{
private:
    std::string name;
    float maxHealth;
    float health;
    float attack;
    float defense;
    
public:

    enemy();
    virtual ~enemy();
    
    std::string getname();
    float getmaxHealth();
    float gethealth();
    float getattack();
    float getdefense();
    void setName(std::string n);
    void setmaxhealth(float m_maxhealth);
    void sethealth(float h_health);
    void setattack(float a_attack);
    void setdefense(float d_defense);
};

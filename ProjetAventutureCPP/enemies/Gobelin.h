#pragma once
#include "enemy.h" 
class Gobelin : public enemy
{
private:
    std::string name;
    float maxHealth;
    float health;
    float attack;
    float defense;
    

public:
    Gobelin();
    ~Gobelin();

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
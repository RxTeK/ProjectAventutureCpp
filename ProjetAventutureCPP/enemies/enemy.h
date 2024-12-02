#pragma once
#include <string>

class enemy
{
protected:
    std::string name;
    int maxhealth = 0;
    float health = 0.0;
    float attack = 0.0;
    float defense = 0.0;
    bool alive;
    
public:
    
    enemy ();
    virtual ~enemy();

    std::string getName();
    void setName(const std::string& name);
    
    virtual int getmaxhealth() = 0;
    void setmaxhealth(int m_maxhealth);
    
    virtual float getheath() = 0;
    void sethealth(float h_health);

    virtual float getattack() = 0;
    void setattack(float a_attack);

    virtual float getdefense() = 0;
    void setdefense(float d_defense);
};

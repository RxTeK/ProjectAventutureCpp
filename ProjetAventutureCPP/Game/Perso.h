#pragma once
#include <iostream>

class Perso
{
private:
    std::string name;
    float health;
    float attack;
    float defense;
    std::string attackType;
    
public:
    Perso();
    
    std::string getname();
    float gethealth();
    float getattack();
    float getdefense();
    std::string getattackType();
    virtual void setname(std::string n);
    virtual void sethealth(float h_health);
    virtual void setattack(float a_attack);
    virtual void setdefense(float d_defense);
    virtual void reduceHealth(float amount);
    virtual void setattackType(std::string a_type, Perso& target);

    friend std::ostream& operator <<(std::ostream& out,Perso& self);
};

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
    float maxHealth;
    
public:
    Perso();
    virtual ~Perso();
    std::string getname();
    float gethealth();
    float getattack();
    float getdefense();
    bool dead();
    std::string getattackType();
    float getmaxHealth();
    void setname(std::string n);
    void sethealth(float h_health);
    void setattack(float a_attack);
    void setdefense(float d_defense);
    void reduceHealth(float amount);
    void addHealth(float amount);
    void addAttack(float amount);
    void addDefense(float amount);
    virtual void setattackType(std::string a_type, Perso& target)=0;
    void setmaxHealth(float maxH);

    friend std::ostream& operator <<(std::ostream& out,Perso& self);
};

#pragma once
#include "enemy.h"

class Slime : public enemy
{
private:
    
    std::string attackType;
    
public:
    Slime();
    ~Slime();

    std::string getattackType();
    void setattackType(std::string a_type, Player& Target);
};

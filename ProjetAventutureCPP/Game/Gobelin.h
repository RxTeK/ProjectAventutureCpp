#pragma once
#include <set>

#include "enemy.h" 
class Gobelin : public enemy
{
private:
    std::string attackType;

public:
    Gobelin();


    std::string getattackType();
    void setattackType(std::string a_type, Player& target);
    
};

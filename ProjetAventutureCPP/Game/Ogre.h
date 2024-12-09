#pragma once
#include "enemy.h"

class Ogre : public enemy
{
private:
    std::string attackType;
    
public:
    Ogre();

    std::string getattackType();
    void setattackType(std::string a_type, Player& target);
    
};

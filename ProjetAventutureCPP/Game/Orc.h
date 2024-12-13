#pragma once
#include "enemy.h"

class Orc : public enemy
{
public:
    Orc();

    virtual void setattackType(std::string a_type, Perso& target);
    
};

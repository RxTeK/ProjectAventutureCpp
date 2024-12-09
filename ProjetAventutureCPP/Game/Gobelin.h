#pragma once
#include "enemy.h"

class Gobelin : public enemy
{

public:
    Gobelin();

    
    virtual void setattackType(std::string a_type, Perso& target);
};

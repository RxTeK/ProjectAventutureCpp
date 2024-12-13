#pragma once
#include "enemy.h"

class Dragon : public enemy
{
public:
    Dragon();

    virtual void setattackType(std::string a_type, Perso& target);
    
};

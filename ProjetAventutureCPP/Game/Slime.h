#pragma once
#include "enemy.h"

class Slime : public enemy
{
  
public:
    Slime();

    
    virtual void setattackType(std::string a_type, Perso& target);
};

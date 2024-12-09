#pragma once
#include "enemy.h"

class Ogre : public enemy
{
    
public:
    Ogre();

    
    virtual void setattackType(std::string a_type, Perso& target);
};

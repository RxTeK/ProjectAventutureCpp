#include "Ogre.h"

Ogre::Ogre()
{
    setName("Ogre");
    sethealth(50.0);
    setattack(22.0);
    setdefense(25.0);
}

std::string Ogre::getattackType()
{
    return attackType;
}

void Ogre::setattackType(std::string a_type, Player& target)
{
    this -> attackType = a_type;
    
    if (a_type == "Punch")
    {
        target.reduceHealth(getattack()/(target.getDefense()/100+1));
    }
}
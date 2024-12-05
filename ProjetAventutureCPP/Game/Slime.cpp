#include "Slime.h"


Slime::Slime()
{
    setName("Slime");
    sethealth(20.0);
    setattack(6.0);
    setdefense(20.0);
}

Slime::~Slime()
{
}

std::string Slime::getattackType()
{
    return attackType;
}

void Slime::setattackType(std::string a_type, Player& target)
{
    this -> attackType = a_type;
    
    if (a_type == "Head butt")
    {
        target.reduceHealth(getattack()/(target.getDefense()/100+1));
    }
    
}

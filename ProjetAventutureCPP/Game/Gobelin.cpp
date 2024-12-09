#include "Gobelin.h"

Gobelin::Gobelin()
{
    setName("Gobelin");
    sethealth(30.0);
    setattack(15.0);
    setdefense(18.0);
}

std::string Gobelin::getattackType()
{
    return attackType;
}

void Gobelin::setattackType(std::string a_type, Player& target)
{
    this -> attackType = a_type;
    
    if (a_type == "Bite")
    {
        target.reduceHealth(getattack()/(target.getDefense()/100+1));
    }
}


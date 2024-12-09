#include "Gobelin.h"

Gobelin::Gobelin()
{
    setname("Gobelin");
    sethealth(30.0);
    setattack(15.0);
    setdefense(18.0);
}



void Gobelin::setattackType(std::string a_type, Perso& target)
{
    if (a_type == "Head butt")
    {
        target.reduceHealth(getattack()/(target.getdefense()/100+1));
        std::cout << getname() << " attack " << target.getname() << " dealing " << roundf(getattack()/(target.getdefense()/100+1)) << " damage" << "\n";
    }
}


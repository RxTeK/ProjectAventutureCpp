#include "Slime.h"


Slime::Slime()
{
    setname("Slime");
    sethealth(20.0);
    setattack(6.0);
    setdefense(20.0);
}

void Slime::setattackType(std::string a_type, Perso& target)
{
    
    if (a_type == "Head butt")
    {
        target.reduceHealth(getattack()/(target.getdefense()/100+1));
        std::cout << getname() << " attack " << target.getname() << " dealing " << roundf(getattack()/(target.getdefense()/100+1)) << " damage" << "\n";
    }
}

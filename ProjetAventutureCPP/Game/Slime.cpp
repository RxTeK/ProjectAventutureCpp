#include "Slime.h"


Slime::Slime()
{
    setname("Slime");
    sethealth(10.0);
    setattack(5.0);
    setdefense(20.0);
}

void Slime::setattackType(std::string a_type, Perso& target)
{
    
    if (a_type == "Head butt")
    {
        target.reduceHealth(getattack()/(target.getdefense()/100+1));
        std::cout << getname() << " attack " << target.getname() << " with Head Butt dealing " << roundf(getattack()/(target.getdefense()/100+1)) << " damage" << "\n";
    }
}

#include "Orc.h"

Orc::Orc()
{
    setname("Orc");
    sethealth(20.0); //40
    setattack(18.0);
    setdefense(20.0);
}

void Orc::setattackType(std::string a_type, Perso& target)
{
    if (a_type == "Head butt")
    {
        target.reduceHealth(getattack()/(target.getdefense()/100+1));
        std::cout << getname() << " attack " << target.getname() << " with Crushing Weight dealing " << roundf(getattack()/(target.getdefense()/100+1)) << " damage" << "\n";
    }
}

#include "Dragon.h"

Dragon::Dragon()
{
    setname("Dragon");
    sethealth(100.0);
    setattack(25.0);
    setdefense(0.0);
}

void Dragon::setattackType(std::string a_type, Perso& target)
{
    if (a_type == "Head butt")
    {
        target.reduceHealth(getattack()/(target.getdefense()/100+1));
        std::cout << getname() << " attack " << target.getname() << " with Fire Breath dealing " << roundf(getattack()/(target.getdefense()/100+1)) << " damage" << "\n";
    }
}

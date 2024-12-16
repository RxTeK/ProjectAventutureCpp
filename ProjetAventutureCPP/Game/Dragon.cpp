#include "Dragon.h"

Dragon::Dragon()
{
    setname("Dragon");
    sethealth(60.0);
    setattack(22.0);
    setdefense(10.0);
}

void Dragon::setattackType(std::string a_type, Perso& target)
{
    if (a_type == "Head butt")
    {
        target.reduceHealth(getattack()/(target.getdefense()/100+1));
        std::cout << getname() << " attack " << target.getname() << " with Fire Breath dealing " << roundf(getattack()/(target.getdefense()/100+1)) << " damage" << "\n";
    }
}

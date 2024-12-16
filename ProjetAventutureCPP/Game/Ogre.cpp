#include "Ogre.h"

Ogre::Ogre()
{
    setname("Ogre");
    sethealth(20.0);
    setattack(20.0);
    setdefense(15.0);
}

void Ogre::setattackType(std::string a_type, Perso& target)
{
    if (a_type == "Head butt")
    {
        target.reduceHealth(getattack()/(target.getdefense()/100+1));
        std::cout << getname() << " attack " << target.getname() << " with Mega Punch dealing " << roundf(getattack()/(target.getdefense()/100+1)) << " damage" << "\n";
    }
}

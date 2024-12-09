#include "Ogre.h"

Ogre::Ogre()
{
    setname("Ogre");
    sethealth(50.0);
    setattack(22.0);
    setdefense(25.0);
}

void Ogre::setattackType(std::string a_type, Perso& target)
{
    if (a_type == "Head butt")
    {
        target.reduceHealth(getattack()/(target.getdefense()/100+1));
        std::cout << getname() << " attack " << target.getname() << " dealing " << roundf(getattack()/(target.getdefense()/100+1)) << " damage" << "\n";
    }
}

#include "Sword.h"

Sword::Sword()
{
    setName("UpgradeSword");
    setDescription("A better sword for better damage.");
}

void Sword::seteffectType(std::string e_Type, Perso& target)
{
    if (e_Type == "Effect")
    {
        target.addAttack(3);
        std::cout << "You Gained 3 extra DMG with Sword Upgrade. \n";
    }
}
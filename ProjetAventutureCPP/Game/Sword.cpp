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
        target.addAttack(10);
        std::cout << "You Gained 5 extra DMG with Sword Upgrade. \n";
    }
}
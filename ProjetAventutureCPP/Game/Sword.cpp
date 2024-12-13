#include "Sword.h"

Sword::Sword()
{
    setName("UpgradeSword");
    setDescription("A better sword for better damage.");
}

void Sword::seteffectType(std::string e_Type, Player& target)
{
    if (e_Type == "AttackEffect")
    {
        target.setaddAttack(3.0);
        std::cout << "You Gained 3 extra DMG with Sword Upgrade. \n";
    }
}

#include "Armor.h"

Armor::Armor()
{
    // Initialisation des valeurs
    setName("Upgrade Armor");
    setDescription("A sturdy piece of armor which lower your chance to lose limbs.");
}

void Armor::seteffectType(std::string e_Type, Perso& target)
{
    if (e_Type == "Effect")
    {
        target.addDefense(5);
        std::cout << "You Gained 5 extra DEF with Armor Upgrade. \n";
    }
}



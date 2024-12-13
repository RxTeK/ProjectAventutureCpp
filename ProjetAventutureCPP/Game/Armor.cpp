
#include "Armor.h"

Armor::Armor()
{
    // Initialisation des valeurs
    setName("Upgrade Armor");
    setDescription("A sturdy piece of armor which lower your chance to lose limbs.");
}

void Armor::seteffectType(std::string e_Type, Player& target)
{
    if (e_Type == "DefenseEffect")
    {
        target.setaddDefense(5.0);
        std::cout << "You Gained 5 extra DEF with Armor Upgrade. \n";
    }
}



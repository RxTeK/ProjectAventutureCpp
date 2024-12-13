#include "Heal.h"

Heal::Heal()
{
    // Initialisation des valeurs
    setName("Health Potion");
    setDescription("A potion to add 10 extra health health.");
}

void Heal::seteffectType(std::string e_Type, Player& target)
{
    if (e_Type == "HealEffect")
    {
        target.setaddHealth(10.0);
        std::cout << "You Gained 10 extra HP with Health Potion. \n";
    }
}
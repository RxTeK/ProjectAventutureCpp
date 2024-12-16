#include "Heal.h"

Heal::Heal()
{
    // Initialisation des valeurs
    setName("Health Potion");
    setDescription("A potion to add extra health health.");
}

void Heal::seteffectType(std::string e_Type, Perso& target)
{
    if (e_Type == "Effect")
    {
        target.addHealth(10);
        std::cout << "You Gained 10 extra HP with Health Potion (max : 100). \n";
        target.setmaxHealth(target.getmaxHealth()+10);
    }
}
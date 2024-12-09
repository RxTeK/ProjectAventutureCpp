
#include "Armor.h"

Armor::Armor()
{
    // Initialisation des valeurs
    setName("Armor");
    setDescription("A sturdy piece of armor which increases defense.");
    setUpgrade(5);
}

int Armor::getprotectionEffect()
{
    return protectionEffect;
}

void Armor::setprotectionEffect(int d_Effect, Player& target)
{
    protectionEffect = d_Effect;
    target.setaddDefense(5.0);
}



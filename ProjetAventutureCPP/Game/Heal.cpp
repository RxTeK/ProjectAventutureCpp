#include "Heal.h"

Heal::Heal()
{
    // Initialisation des valeurs
    setName("Heal");
    setDescription("A potion for heal.");
    setUpgrade(10);
}

int Heal::getHealEffect()
{
    return healEffect;
}

void Heal::setHealEffect(int h_Effect, Player& target)
{
    healEffect = h_Effect;
    target.setaddHealth(10.0);
}

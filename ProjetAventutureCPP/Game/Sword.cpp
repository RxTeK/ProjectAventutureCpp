#include "Sword.h"

Sword::Sword()
{
    setName("Sword");
    setDescription("A sword to hit stronger.");
    setUpgrade(2);
}

int Sword::getdamageEffect()
{
    return damageEffect;
}

void Sword::setdamageEffect(int d_Effect, Player& target)
{
    damageEffect = d_Effect;
    target.setaddAttack(2.0);
}
#pragma once
#include "Item.h"
#include "player.h"

class Heal : public Item
{
private:
    int healEffect;
public:
    Heal(); // Constructor

    int getHealEffect();
    void setHealEffect(int h_Effect, Player& target);
};
    
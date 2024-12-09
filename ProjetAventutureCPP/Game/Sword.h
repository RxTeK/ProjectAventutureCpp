#pragma once
#include "Item.h"
#include "player.h"

class Sword : public Item
{
private:
    int damageEffect;
public:
   Sword(); // Constructor

    int getdamageEffect();
    void setdamageEffect(int d_Effect, Player& target);
};
#pragma once
#include "Item.h"
#include "player.h"

class Armor : public Item
{
private:
    int protectionEffect;
public:
    Armor(); // Constructor

    int getprotectionEffect();
    void setprotectionEffect(int d_Effect, Player& target);
};
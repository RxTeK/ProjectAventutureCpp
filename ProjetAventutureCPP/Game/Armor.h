#pragma once
#include "Item.h"
#include "player.h"

class Armor : public Item
{
public:
    Armor(); // Constructor

    virtual void seteffectType(std::string e_Type, Perso& target);
};
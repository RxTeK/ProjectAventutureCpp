#pragma once
#include "Item.h"

class Heal : public Item
{
public:
    Heal(); // Constructor

    virtual void seteffectType(std::string e_Type, Player& target);
};
    
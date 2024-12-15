#pragma once
#include "Item.h"

class Sword : public Item
{
public:
   Sword(); // Constructor

   virtual void seteffectType(std::string e_Type, Perso& target);
};
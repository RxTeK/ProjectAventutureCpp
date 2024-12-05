#include "Item.h"

std::string Item::getName()
{
    return name;
}

void Item::setName(std::string name)
{
    this->name = name;
}

std::string Item::getDescription()
{
    return description;
}

void Item::setDescription(std::string description)
{
    this->description = description;
}

int Item::getUpgrade()
{
    return upgrade;
}

void Item::setUpgrade(int upgrade)
{
    this->upgrade = upgrade;
}

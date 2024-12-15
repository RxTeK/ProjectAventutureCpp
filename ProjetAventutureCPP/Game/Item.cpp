#include "Item.h"

Item::Item()
{
    setName("Item");
    setDescription("An Item");
}

Item::~Item()
{
}

std::string Item::getName()
{
    return name;
}

void Item::setName(std::string n)
{
    this->name = n;
}

std::string Item::getDescription()
{
    return description;
}

void Item::setDescription(std::string des)
{
    this->description = des;
}

std::string Item::geteffectType()
{
    return effectType;
}

void Item::seteffectType(std::string e_Type, Perso& target)
{
    this -> effectType = e_Type;
}

std::ostream& operator<<(std::ostream& out, Item& self)
{
    out << "\n";
    std::cout << self.getName()<<"\n";
    std::cout << "Description : "<< self.getDescription() << "\n";
    std::cout << "\n";
    return out;
}
#pragma once
#include <string>
#include "Perso.h"

class Item
{
protected:
    std::string name;
    std::string description;
    std::string effectType;

public:
    Item();
    virtual ~Item();
    
    std::string getName();
    void setName(std::string name);

    
    std::string getDescription();
    void setDescription(std::string description);
    std::string geteffectType();
    virtual void seteffectType(std::string e_Type, Perso& target) = 0;

    friend std::ostream& operator <<(std::ostream& out,Item& target);
};

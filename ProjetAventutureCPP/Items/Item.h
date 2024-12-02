#pragma once
#include <string>

class Item
{
    
protected:
    std::string name;
    std::string description;
    int upgrade;

public:
    Item();
    Item(std::string Name);
    std::string getDescription();
    int getUpgrade();
};

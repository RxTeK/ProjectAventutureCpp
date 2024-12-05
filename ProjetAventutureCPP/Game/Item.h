// #pragma once
//
// #include <string>
// #include <iostream>
// #include <vector>
//
// class Item
// {
//     
// protected:
//     std::string name;
//     std::string description;
//     int upgrade;
//
// public:
//     std::string getName();
//     void setName(std::string name);
//     std::string getDescription();
//     void setDescription(std::string description);
//     int getUpgrade();
//     void setUpgrade(int upgrade);
// };

#pragma once
#include <string>

class Item
{
protected:
    std::string name;
    std::string description;
    int upgrade;

public:
    std::string getName();
    void setName(std::string name);

    std::string getDescription();
    void setDescription(std::string description);

    int getUpgrade();
    void setUpgrade(int upgrade);
};

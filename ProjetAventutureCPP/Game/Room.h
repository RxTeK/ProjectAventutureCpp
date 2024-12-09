#pragma once
#include <iostream>

class Room
{
protected:

    std::string name;
    int numberEnemy;
    int enemyStreght;
    int reward;

public:

    std::string getName();
    int getnumberEnemy();
    int getenemyStreght();
    int getreward();
    void setName(std::string name);
    void setnumberEnemy(int number);
    void setenemyStreght(int streght);
    void setreward(int r);
};

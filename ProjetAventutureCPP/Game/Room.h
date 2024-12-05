#pragma once
#include <iostream>

class Room
{
private:

    std::string name;
    int numberEnemy;
    int enemyStreght;
    int reward;

public:
    Room();
    virtual ~Room();

    std::string getName();
    int getnumberEnemy();
    int getenemyStreght();
    int getreward();
    void setName(std::string name);
    void setnumberEnemy(int number);
    void setenemyStreght(int streght);
    void setreward(int r);
};

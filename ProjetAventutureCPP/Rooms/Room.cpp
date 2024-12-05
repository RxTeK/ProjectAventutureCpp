#include "Room.h"

std::string Room::getName()
{
    return name;
}

int Room::getnumberEnemy()
{
    return numberEnemy;
}

int Room::getenemyStreght()
{
    return enemyStreght;
}

int Room::getreward()
{
    return reward;
}

void Room::setName(std::string n)
{
    name = n;
}

void Room::setnumberEnemy(int number)
{
    numberEnemy = number;
}

void Room::setenemyStreght(int streght)
{
    enemyStreght = streght;
}

void Room::setreward(int r)
{
    reward = r;
}

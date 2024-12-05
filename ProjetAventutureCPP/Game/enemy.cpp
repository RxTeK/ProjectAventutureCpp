#include "enemy.h"
#include <iostream>

enemy::enemy()
{
}

enemy::~enemy()
{
}

std::string enemy::getname()
{
    return name;
}

float enemy::gethealth()
{
    return health;
}

float enemy::getattack()
{
    return attack;
}

float enemy::getdefense()
{
    return defense;
}

void enemy::setName(std::string n)
{
    name = n;
}

void enemy::sethealth(float h_health)
{
    health = h_health < 0 ? 0 : h_health;
}

void enemy::setattack(float a_attack)
{
    attack = a_attack;
}

void enemy::setdefense(float d_defense)
{
    defense = d_defense;
}

void enemy::reduceHealth(float amount)
{
    health -= amount;
    if (health < 0) health = 0;
}




#include "enemy.h"
#include <iostream>


enemy::enemy()
{
    std::cout << "constructor" << "\n";
}

enemy::~enemy()
{
    std::cout << "destructor" << "\n";
}

std::string enemy::getName()
{
    return name;
}

void enemy::setName(const std::string& n)
{
    if (name.empty())
        name = "DEFAULT";
    else name = n;
}

void enemy::setmaxhealth(int m_maxhealth)
{
    maxhealth = m_maxhealth < 0 ? 0 : m_maxhealth;
}

void enemy::sethealth(float h_health)
{
    health = h_health;
}

void enemy::setattack(float a_attack)
{
    attack = a_attack;
}

void enemy::setdefense(float d_defense)
{
    defense = d_defense;
}


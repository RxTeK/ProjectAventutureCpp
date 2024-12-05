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

float enemy::getmaxHealth()
{
    return maxHealth;
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

void enemy::setmaxhealth(float m_maxhealth)
{
    maxHealth = m_maxhealth < 0 ? 0 : m_maxhealth;
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


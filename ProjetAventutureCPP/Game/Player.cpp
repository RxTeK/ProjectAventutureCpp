#include "Player.h"

#include <iomanip>

Player::Player()
{
    setName("Player");
    setHealth(30.0);
    setAttack(15.0);
    setDefense(15.0);
    
}

Player::~Player()
{
}

std::string Player::getName()
{
    return name;
}

float Player::getHealth()
{
    return health;
}

float Player::getAttack()
{
    return attack;
}

float Player::getDefense()
{
    return defense;
}

int Player::getUseItem()
{
    return useItem;
}

void Player::setName(std::string name)
{
    Player::name = name;
}

void Player::setHealth(float h)
{
    health = h;
}

void Player::setAttack(float a)
{
    attack = a;
}

void Player::setDefense(float d)
{
    defense = d;
}

void Player::setUseItem(int uItem)
{
    useItem = uItem;
}

void Player::reduceHealth(float amount)
{
    health -= amount;
    if (health < 0) health = 0;
}

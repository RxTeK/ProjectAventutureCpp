#include "Player.h"

#include <iomanip>

Player::Player()
{
    setname("Player");
    sethealth(30.0);
    setattack(15.0);
    setdefense(15.0);
    
}

int Player::getUseItem()
{
    return useItem;
}

int Player::getchooseAttack()
{
    return chooseAttack;
}

std::string Player::getattackName()
{
    return attackName;
}

void Player::setUseItem(int uItem)
{
    useItem = uItem;
}

void Player::setattackName(std::string aName)
{
    attackName=aName;
}

void Player::setchooseAttack(int aType)
{
    attackName=aType;
    if (aType == 1)
    {
        setattackName("Punch");
    }
    if (aType == 2)
    {
        setattackName("Slash");
    }
}

#include "Player.h"

#include <iomanip>

Player::Player()
{
    setname("Player");
    setmaxHealth(30.0);
    sethealth(30.0);
    setattack(10.0);
    setdefense(30.0);
    
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

void Player::setchooseAttack(int a_Type)
{
    attackName= a_Type;
    if (a_Type == 1)
    {
        setattackName("Punch");
    }
    if (a_Type == 2)
    {
        setattackName("Slash");
    }
}

void Player::setattackType(std::string a_type, Perso& target)
{
    if (a_type == "Punch")
    {
        target.reduceHealth(getattack()-(getattack()*target.getdefense()/100));
        std::cout << getname() << " attack " << target.getname() << " with Punch dealing " << roundf(getattack()-(getattack()*target.getdefense()/100)) << " damage" << "\n";
    }
    if (a_type == "Slash")
    {
        target.reduceHealth(getattack()-(getattack()*target.getdefense()/90));
        std::cout << getname() << " attack " << target.getname() << " with Slash dealing " << roundf(getattack()-(getattack()*target.getdefense()/90)) << " damage" << "\n";
    }
}
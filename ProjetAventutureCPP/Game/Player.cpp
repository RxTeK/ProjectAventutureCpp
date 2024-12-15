#include "Player.h"

#include <iomanip>

Player::Player()
{
    setname("Player");
    sethealth(30.0);
    setattack(17.0);
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

void Player::setchooseAttack(int a_Type)
{
    attackName=a_Type;
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
        target.reduceHealth(getattack()/(target.getdefense()/100+1));
        std::cout << getname() << " attack " << target.getname() << " with Punch dealing " << roundf(getattack()/(target.getdefense()/100+1)) << " damage" << "\n";
    }
    if (a_type == "Slash")
    {
        target.reduceHealth((getattack()*1.2)/(target.getdefense()/100+1));
        std::cout << getname() << " attack " << target.getname() << " with Slash dealing " << roundf((getattack()*1.2)/(target.getdefense()/100+1)) << " damage" << "\n";
    }
}

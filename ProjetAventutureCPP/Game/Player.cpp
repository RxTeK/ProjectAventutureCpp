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

float Player::getaddHealth()
{
    return addHealth;
}

float Player::getaddAttack()
{
    return addAttack;
}

float Player::getaddDefense()
{
    return addDefense;
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

void Player::setattackType(std::string a_type, Perso& target)
{
    if (a_type == "Punch")
    {
        target.reduceHealth(getattack()/(target.getdefense()/100+1));
        std::cout << getname() << " attack " << target.getname() << " dealing " << roundf(getattack()/(target.getdefense()/100+1)) << " damage" << "\n";
    }
    if (a_type == "Slash")
    {
        target.reduceHealth((getattack()*1.2)/(target.getdefense()/100+1));
        std::cout << getname() << " attack " << target.getname() << " dealing " << roundf((getattack()*1.2)/(target.getdefense()/100+1)) << " damage" << "\n";
    }
}

void Player::setaddHealth(float a_Health)
{
    addHealth = a_Health;
    sethealth(gethealth()+addHealth);
}

void Player::setaddAttack(float a_Attack)
{
    addAttack = a_Attack;
    setattack(getattack()+addAttack);
}

void Player::setaddDefense(float a_defense)
{
    addDefense = a_defense;
    setdefense(getdefense()+addDefense);
}

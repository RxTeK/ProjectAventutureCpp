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

void Player::setName(std::string n)
{
    Player::name = n;
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

std::string Player::getattackType()
{
    return attackType;
}

void Player::setattackType(std::string a_type, enemy& target)
{
    this -> attackType = a_type;
    
    if (a_type == "Head butt")
    {
        target.reduceHealth(getAttack()/(target.getdefense()/100+1));
    }
}

std::ostream& operator<<(std::ostream& out, Player& self)
{
    out<<"Le nom du player est : "<< self.getName()<<"\n";
    std::cout << "Player health is " << roundf(self.getHealth()) << "\n";
    std::cout << "Player attack is " << roundf(self.getAttack()) << "\n";
    std::cout << "Player defense is " << roundf(self.getDefense()) << "\n";
    return out;
}

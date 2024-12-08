#include "Perso.h"

Perso::Perso()
{
    setname("BaseName");

    setattack(10.0);
    setdefense(10.0);
}

Perso::~Perso()
{
}

std::string Perso::getname()
{
    return name;
}

float Perso::gethealth()
{
    return health;
}

float Perso::getattack()
{
    return attack;
}

float Perso::getdefense()
{
    return defense;
}

bool Perso::dead()
{
    if (health <= 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Perso::setname(std::string n)
{
    name = n;
}

void Perso::sethealth(float h_health)
{
    health = h_health < 0 ? 0 : h_health;
}

void Perso::setattack(float a_attack)
{
    attack = a_attack;
}

void Perso::setdefense(float d_defense)
{
    defense = d_defense > 80 ? 80 : d_defense;
    
}

void Perso::reduceHealth(float amount)
{
    health -= amount;
    if (health < 0) health = 0;
}

std::string Perso::getattackType()
{
    return attackType;
}

void Perso::setattackType(std::string a_type, Perso& target)
{
    this -> attackType = a_type;
}

std::ostream& operator<<(std::ostream& out, Perso& self)
{
    out << "\n";
    std::cout << self.getname()<<"\n";
    std::cout << self.getname() <<" health is " << roundf(self.gethealth()) << "\n";
    std::cout << self.getname() <<" attack is " << roundf(self.getattack()) << "\n";
    std::cout << self.getname() <<" defense is " << roundf(self.getdefense()) << "\n";
    std::cout << "\n";
    return out;
}
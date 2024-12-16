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
    health = h_health > 100 ? 100 : h_health;
}

void Perso::setattack(float a_attack)
{
    attack = a_attack > 25 ? 25 : a_attack;
}

void Perso::setdefense(float d_defense)
{
    defense = d_defense > 70 ? 70 : d_defense;
    
}

void Perso::reduceHealth(float amount)
{
    health -= amount;
    if (health < 0) health = 0;
}

void Perso::addHealth(float amount)
{
    health > 100 ? 100 : health += amount;
}

void Perso::addAttack(float amount)
{
    attack > 25 ? 25 : attack += amount;
}

void Perso::addDefense(float amount)
{
    defense > 70 ? 70 : defense += amount;
}

std::string Perso::getattackType()
{
    return attackType;
}

float Perso::getmaxHealth()
{
    return maxHealth;
}

void Perso::setattackType(std::string a_type, Perso& target)
{
    this -> attackType = a_type;
}

void Perso::setmaxHealth(float maxH)
{
    maxHealth = maxH;
}

std::ostream& operator<<(std::ostream& out, Perso& self)
{
    std::cout << "# "<< self.getname()<<"                #\n";
    std::cout << "# "<< self.getname() <<" health is: " << roundf(self.gethealth()) <<"  #"<<"\n";
    std::cout << "# "<< self.getname() <<" attack is: " << roundf(self.getattack()) <<"  #"<<"\n";
    std::cout << "# "<< self.getname() <<" defense is: " << roundf(self.getdefense()) <<" #"<<"\n";
    return out;
}

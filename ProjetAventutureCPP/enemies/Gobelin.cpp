#include "Gobelin.h"

Gobelin::Gobelin()
{
    setName("Gobelin");
    setmaxhealth(30.0);
    sethealth(30.0);
    setattack(10);
    setdefense(10);
}

Gobelin::~Gobelin()
{
}

std::string Gobelin::getname()
{
    return name;
}

float Gobelin::getmaxHealth()
{
    return maxHealth;
}

float Gobelin::gethealth()
{
    return health;
}

float Gobelin::getattack()
{
    return attack;
}

float Gobelin::getdefense()
{
    return defense;
}

void Gobelin::setName(std::string n)
{
   name = n;
}

void Gobelin::setmaxhealth(float m_maxhealth)
{
    maxHealth = m_maxhealth < 0 ? 0 : m_maxhealth;
}

void Gobelin::sethealth(float h_health)
{
    health = h_health < 0 ? 0 : h_health;
}

void Gobelin::setattack(float a_attack)
{
    attack = a_attack;
}

void Gobelin::setdefense(float d_defense)
{
    defense = d_defense;
}

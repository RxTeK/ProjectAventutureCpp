#include <iostream>

#include "enemies/Gobelin.h"
#include "Items/Armor.h"
#include "Items/Heal.h"
#include "Items/Item.h"

int main()
{
    std::cout <<" "<< std::endl;
    Armor shield;
    std::cout << "Name: " << shield.getName() << std::endl;
    std::cout << "Description: " << shield.getDescription() << std::endl;
    std::cout << "Upgrade: " << shield.getUpgrade() << std::endl;
    std::cout <<" "<< std::endl;

    Heal Potion;
    std::cout << "Name: " << Potion.getName() << std::endl;
    std::cout << "Description: " << Potion.getDescription() << std::endl;
    std::cout << "Upgrade: " << Potion.getUpgrade() << std::endl;
    std::cout <<" "<< std::endl;
    
    
 Gobelin g1;

    std::cout << "Enemy name is : " << g1.getname() << "\n";
    std::cout << "Enemy Health is : " << g1.gethealth() << "\n";
    std::cout << "Enemy attack is : " << g1.getattack()<< "\n";
    std::cout << "Enemy Deffence is : " << g1.getdefense()<< "\n";
    return 0;
}     

#include <iostream>

#include "Gobelin.h"
#include "Ogre.h"
#include "Slime.h"
#include "Armor.h"
#include "Heal.h"
#include "Item.h"

int main()
{
    // std::cout <<" "<< std::endl;
    // Armor shield;
    // std::cout << "Name: " << shield.getName() << std::endl;
    // std::cout << "Description: " << shield.getDescription() << std::endl;
    // std::cout << "Upgrade: " << shield.getUpgrade() << std::endl;
    // std::cout <<" "<< std::endl;
    //
    // Heal Potion;
    // std::cout << "Name: " << Potion.getName() << std::endl;
    // std::cout << "Description: " << Potion.getDescription() << std::endl;
    // std::cout << "Upgrade: " << Potion.getUpgrade() << std::endl;
    // std::cout <<" "<< std::endl;
    //
    //
    // Slime s1;
    //
    // std::cout << "Enemy name is : " << s1.getname() << "\n";
    // std::cout << "Enemy Health is : " << s1.gethealth() << "\n";
    // std::cout << "Enemy attack is : " << s1.getattack()<< "\n";
    // std::cout << "Enemy Deffence is : " << s1.getdefense()<< "\n";
    //
    // std::cout << "\n";
    //
    // Gobelin g1;
    //
    // std::cout << "Enemy name is : " << g1.getname() << "\n";
    // std::cout << "Enemy Health is : " << g1.gethealth() << "\n";
    // std::cout << "Enemy attack is : " << g1.getattack()<< "\n";
    // std::cout << "Enemy Deffence is : " << g1.getdefense()<< "\n";
    //
    // std::cout << "\n";
    //
    // Ogre o1;
    //
    // std::cout << "Enemy name is : " << o1.getname() << "\n";
    // std::cout << "Enemy Health is : " << o1.gethealth() << "\n";
    // std::cout << "Enemy attack is : " << o1.getattack()<< "\n";
    // std::cout << "Enemy Deffence is : " << o1.getdefense()<< "\n";
    //
    // std::cout << "\n";

    Slime s1;
    Player p1;
    

        std::cout << p1 << "\n";
        s1.setattackType("Head butt",p1);
        std::cout << p1 << "\n";
        std::cout << s1 << "\n";
        p1.setattackType("Head button",s1);
        std::cout << s1 << "\n";
    
    return 1;
}


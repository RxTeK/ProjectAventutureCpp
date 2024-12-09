#include <iostream>
<<<<<<< Updated upstream
#include "Perso.h"
=======
#include <vector>
>>>>>>> Stashed changes
#include "Gobelin.h"
#include "Ogre.h"
#include "Slime.h"
#include "Armor.h"
#include "BossRoom.h"
#include "Heal.h"
#include "IntermediateRoom.h"
#include "Item.h"
<<<<<<< Updated upstream
#include "Player.h"

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
        p1.setattackType("Head butt",s1);
        std::cout << s1 << "\n";
    
    return 1;
=======
#include "LargeRoom.h"
#include "LittleRoom.h"
#include "Room.h"
#include<random>

//create vector rooms
void initializeRooms(std::vector<Room*>& rooms)
{
    LittleRoom littleRoom;
    IntermediateRoom intermediateRoom;
    LargeRoom largeRoom;
    BossRoom bossRoom;
    for (size_t i = 0; i < 5; ++i)
    {
        //random
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dis(1, 3);
        int randomVal = dis(gen);
        
        switch (randomVal)
        {
        case 1:
            rooms.push_back(&littleRoom);
            break;
        case 2:
            rooms.push_back(&intermediateRoom);
            break;
        case 3:
            rooms.push_back(&largeRoom);
            break;
        }
        
        //print
        std::cout << rooms[i]->getName() << std::endl;
        std::cout << rooms[i]->getnumberEnemy() << std::endl;
        std::cout <<" "<< std::endl;
    }
    rooms.push_back(&bossRoom);
    for (size_t i = 0; i < rooms.size(); ++i)
    {
        std::cout << rooms[i]->getName() << std::endl;
    }
}


int main()
{
    // int choice;
    // std::cout << std::endl
    // std::cin << choice;
    std::vector<Room*> rooms;
    initializeRooms(rooms);
        
    return 0;
>>>>>>> Stashed changes
}
        


    
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
        
//     return 0;
// }


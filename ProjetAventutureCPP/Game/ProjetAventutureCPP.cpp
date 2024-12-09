#include <iostream>
#include "Perso.h"
#include <vector>
#include "Gobelin.h"
#include "Ogre.h"
#include "Slime.h"
#include "Armor.h"
#include "BossRoom.h"
#include "Heal.h"
#include "IntermediateRoom.h"
#include "Item.h"
#include "Player.h"
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
    Slime s1;
    Player p1;
    

    std::cout << p1 << "\n";
    s1.setattackType("Head butt",p1);
    std::cout << p1 << "\n";
    std::cout << s1 << "\n";
    p1.setattackType("Head butt",s1);
    std::cout << s1 << "\n";
    
    // int choice;
    // std::cout << std::endl
    // std::cin << choice;
    std::vector<Room*> rooms;
    initializeRooms(rooms);
}






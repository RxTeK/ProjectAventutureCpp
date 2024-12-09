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
    std::vector<Room*> rooms;
    while (true)
    {
        int choice;
        std::cout << "play or quit: "<< std::endl;
        std::cin >> choice;
        switch (choice)
        {
        case 1:
            std::cout << p1 << "\n";
            s1.setattackType("Head butt",p1);
            std::cout << p1 << "\n";
            std::cout << s1 << "\n";
            std::cout << "Player attack turn :" << "\n" << "1.Punch      2.Slash" << "\n";
            std::cin >> p1.attackNumber;
            p1.setchooseAttack(p1.attackNumber);
            p1.setattackType(p1.getattackName(),s1);
            std::cout << s1 << "\n";
            std::cout << std::endl;
            initializeRooms(rooms);
            break;
        case 2:
            return 0;
        }
    }
}

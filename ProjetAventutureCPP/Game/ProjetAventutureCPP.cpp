#include <iostream>
#include <random>
#include <windows.h>
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

#define KEY_UP 'z'
#define KEY_DOWN 's'
#define KEY_LEFT 'q'
#define KEY_RIGHT 'd'

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
    }
    rooms.push_back(&bossRoom);
    for (size_t i = 0; i < rooms.size(); ++i)
    {
        std::cout << rooms[i]->getName() << std::endl;
    }
}
void fight(Player* player, Perso* enemy, bool& isDead)
{
    isDead = false;

    // Affichage du joueur et de l'ennemi
    system("cls");
    std::cout << *player;
    Sleep(500);
    std::cout << *enemy << "\n";
    Sleep(500);

    // Tour du joueur
    std::cout << "Player attack turn:\n1.Punch      2.Slash\n";
    std::cin >> player->attackNumber;
    system("cls");
    player->setchooseAttack(player->attackNumber);
    player->setattackType(player->getattackName(), *enemy);

    // Vérifie si l'ennemi est mort
    if (enemy->dead())
    {
        std::cout << "Enemy is dead.\n";
        isDead = true;
        return;
    }

    // Tour de l'ennemi
    Sleep(2000);
    system("cls");
    enemy->setattackType("Head butt", *player);

    // Vérifie si le joueur est mort
    if (player->dead())
    {
        std::cout << "You are dead! Game Over.\n";
        exit(0);
    }

    Sleep(2000);
    system("cls");
}
int main()
{
    Player p1_obj;
    Player* p1 = &p1_obj;
    std::vector<Perso*> monsters;
    monsters.push_back(new Slime());
    monsters.push_back(new Gobelin());
    monsters.push_back(new Slime());
    std::vector<Room*> rooms;
    initializeRooms(rooms);
    bool isDead = false;
    
    // Tick
    while (true)
    {
        char c;
        bool isDead = false;
        std::cout << "Press 'q' to play, 'd' to quit): ";
        std::cin >> c;
        switch (c)
        {
        case KEY_LEFT:
            // Room
                while(rooms.size() > 0)
                {
                    std::cout << rooms.back()->getName() << "\n";
                    std::cout << "Room 1: " << rooms[0]->getnumberEnemy() << " enemies." << std::endl;
                  
                    while (rooms[0]->getnumberEnemy() > 0)
                    {
                       
                        if (!monsters.empty())
                        {
                          
                            enemy* lastEnemy = dynamic_cast<enemy*>(monsters.back());
                            if (lastEnemy)
                            {
                                bool enemyIsDead = false;
                                fight(p1, lastEnemy, enemyIsDead);
                                if (enemyIsDead)
                                {
                                    std::cout << "An enemy is dead." << std::endl;
                                    monsters.pop_back();
                                    delete lastEnemy;
                                    rooms[0]->setnumberEnemy(rooms[0]->getnumberEnemy() - 1);
                                }
                            }
                            else
                            {
                                std::cout << "Error: Monster is not of type enemy.\n";
                                break;
                            }
                        }
                        else
                        {
                            // NON : Il n'y a plus d'ennemis
                            std::cout << "No more enemies to fight in this room.\n";
                            break;
                        }
                    }

                    if (rooms[0]->getnumberEnemy() == 0)
                    {
                        std::cout << "Room cleared!\n";
                    }

                    // Enlève la salle après le combat
                    rooms.erase(rooms.begin());  // Supprimer la salle actuelle après l'avoir terminée
                }

            // Quit
        case KEY_RIGHT:
            return 0;

            // Invalid input
        default:
            std::cout << "Invalid input. Try again.\n";
            break;
        }
    }
}

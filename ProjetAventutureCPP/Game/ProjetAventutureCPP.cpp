#include <iostream>
#include <random>
#include <windows.h>
#include <mmsystem.h>
#include "Perso.h"
#include <vector>
#include "Dragon.h"
#include "Orc.h"
#include "Gobelin.h"
#include "Ogre.h"
#include "Slime.h"
#include "BossRoom.h"
#include "Item.h"
#include "Armor.h"
#include "Heal.h"
#include "Sword.h"
#include "IntermediateRoom.h"
#include "Player.h"
#include "LargeRoom.h"
#include "LittleRoom.h"
#include "Room.h"
#include <conio.h>
#define KEY_LEFT 'q'
#define KEY_RIGHT 'd'

#pragma comment(lib, "Winmm.lib")

void text (std::string text)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    for (int i = 0; i < text.size()+4; ++i)
    {
        SetConsoleTextAttribute(hConsole, 4);
        std::cout << "#";
    }
    std::cout <<std::endl;
    std::cout <<"# ";
    SetConsoleTextAttribute(hConsole, 2);
    std::cout << text;
    SetConsoleTextAttribute(hConsole, 4);
    std::cout<<" #"<<std::endl;
    
    for (int i = 0; i < text.size()+4; ++i)
    {
        std::cout << "#";
    }
    SetConsoleTextAttribute(hConsole, 3);
}

//create vector rooms
void initializeRooms(std::vector<Room*>& rooms, BossRoom)
{
    LittleRoom littleRoom;
    IntermediateRoom intermediateRoom;
    LargeRoom largeRoom;
    for (int i = 0; i < 4; ++i)
    {
        //random
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dis(1, 3);
        int randomVal = dis(gen);
                        
        switch (randomVal)
        {
        case 1:
            rooms.push_back(new LittleRoom());
            break;
        case 2:
            rooms.push_back(new IntermediateRoom());
            break;
        case 3:
            rooms.push_back(new LargeRoom());
            break;
        }
    }
    rooms.push_back(new BossRoom());
    for (int i = 0; i < rooms.size(); ++i)
    {
        std::cout << rooms[i]->getName() << "\n";
    }
}

//fight
void fight(Player* player, Perso* enemy, bool& isDead)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    isDead = false;

    // Affichage du joueur et de l'ennemi
    ("cls");
    SetConsoleTextAttribute(hConsole, 2);
    std::cout << "#########################" << std::endl;
    std::cout << *player;
    std::cout << "#########################" << std::endl;
    std::cout << std::endl;
    Sleep(500);
    SetConsoleTextAttribute(hConsole, 4);
    std::cout << "########################" << std::endl;
    std::cout << *enemy;
    std::cout << "########################" << std::endl;
    Sleep(500);
    SetConsoleTextAttribute(hConsole, 3);

    // Tour du joueur
        SetConsoleTextAttribute(hConsole, 3);
        std::cout << "Player attack turn:\nq. Punch      d. Slash\n";
        char attak = '^';
        attak = _getch();
        switch ( attak)
        {
        case KEY_LEFT:
            player->attackNumber = 1;
            break;
        case KEY_RIGHT:
            player->attackNumber = 2;
            break;
        default:
            std::cout << "tu cherche aussi";
        }
    system("cls");
    SetConsoleTextAttribute(hConsole, 2);
    player->setchooseAttack(player->attackNumber);
    player->setattackType(player->getattackName(), *enemy);
    SetConsoleTextAttribute(hConsole, 3);

    // Vérifie si l'ennemi est mort
    if (enemy->dead())
    {
        SetConsoleTextAttribute(hConsole, 4);
        std::cout << "Enemy is dead.\n";
        SetConsoleTextAttribute(hConsole, 15);
        isDead = true;
        Sleep(4000);
        return;
    }

    // Tour de l'ennemi
    Sleep(2000);
    system("cls");
    SetConsoleTextAttribute(hConsole, 4);
    enemy->setattackType("Head butt", *player);
    SetConsoleTextAttribute(hConsole, 15);
    // Vérifie si le joueur est mort
    if (player->dead())
    {
        SetConsoleTextAttribute(hConsole,3);
        text("You are dead! Game Over.");
        Sleep(5000);
        exit(0);
    }
    Sleep(2000);
    system("cls");
}

//create vector enemies
void initializeEnemies(std::vector<enemy*>& enemies, std::vector<Room*>& rooms)
{
    Slime slime;
    Gobelin gobelin;
    Orc orc;
    Ogre ogre;

    for (size_t i = 0; i < rooms[0]->getnumberEnemy(); ++i)
    {
        //random
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dis(1, 4);
        int randomVal = dis(gen);

        switch (randomVal)
        {
        case 1:
            enemies.push_back(new Slime);
            break;
        case 2:
            enemies.push_back(new Gobelin);
            break;
        case 3:
            enemies.push_back(new Orc);
            break;
        case 4:
            enemies.push_back(new Ogre);
            break;
        default:
            return;
        }
    }
}

//reward
void chooseReward(Player &player)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    Heal healthPotion;
    Sword sword;
    Armor armor;
    int rewardChoice;
    std::cout << "Choose your Reward.\n" << "q." << healthPotion << "s." << sword << "d." << armor <<"\n";
    SetConsoleTextAttribute(hConsole, 1);
    while (true)
    {
        char potionC = '^';
        potionC = _getch();
            switch (potionC)
            {
            case 'q':
                healthPotion.seteffectType("Effect",player);
                break;
            case 's':
                sword.seteffectType("Effect",player);
                break;
            case 'd':
                armor.seteffectType("Effect",player);
                break;
            default:
                std::cout << "Choose y";
            }
        break;
    }
}

//heal
void clearHeal(Player &player)
{
    if (player.gethealth()<player.getmaxHealth())
    {
        player.sethealth(player.getmaxHealth());
        std::cout << "You have been healed\n";
    }
}

int main()
{
    PlaySound(TEXT("NormalFightMusique.wav"),NULL,SND_FILENAME|SND_ASYNC | SND_LOOP);
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 3);
    int nbrRoom = 1;
    Player p1_obj;
    Player* p1 = &p1_obj;
    std::vector<enemy*> monsters;
    std::vector<Room*> rooms;
    BossRoom bossRoom;
    initializeRooms(rooms, bossRoom);
    
    // Tick
    while (true)
    {
        char ch = ',';
        text ("Press q to play, or d to quit): ");
        std::cout << std::endl;
        ch = _getch();
        switch (ch)
        {
        case KEY_LEFT:
            system("cls");
            // Room
                while(!rooms.empty())
                {
                    std::cout << rooms[0]->getName() << "\n";
                    std::cout << "Room " << nbrRoom << ": " << rooms[0]->getnumberEnemy() << " enemies." << "\n";
                
                    if (rooms[0]->getName() == bossRoom.getName() )
                    {
                        PlaySound(0,0,0);
                        monsters.push_back(new Dragon);
                        PlaySound(TEXT("BossFightMusique.wav"),NULL,SND_FILENAME|SND_ASYNC | SND_LOOP);
                    }
                    else
                    {
                        initializeEnemies(monsters, rooms);
                    }
                
                    while (rooms[0]->getnumberEnemy() > 0)
                    {
                       
                        if (!monsters.empty())
                        {
                            enemy* lastEnemy = monsters.back();
                            bool enemyIsDead = false;
                            fight(p1, lastEnemy, enemyIsDead);
                        
                            if (enemyIsDead)
                            {
                                std::cout << "An enemy is dead." << "\n";
                                monsters.pop_back();
                                delete lastEnemy;
                                rooms[0]->setnumberEnemy(rooms[0]->getnumberEnemy() - 1);
                            }
                        }
                        else
                        {
                            // NON
                            std::cout << "No more enemies to fight in this room.\n";
                            return 0;
                        }
                    }
    
                    if (rooms[0]->getnumberEnemy() == 0)
                    {
                        std::cout << "Room cleared!\n";
                        if (rooms[0]->getName() == bossRoom.getName() )
                        {
                            SetConsoleTextAttribute(hConsole, 2);
                            std::cout << "You have WIN!\n";
                            Sleep(2000);
                            return 0;
                        }
                        rooms.erase(rooms.begin());
                        clearHeal(*p1);
                        chooseReward(*p1);
                        nbrRoom++; 
                    }
                }
    
            // Quit
        case KEY_RIGHT:
            return 0;
    
            // Invalid input
        default:
            std::cout << "Invalid input. Try again.\n";
            system("cls");
        }
    }
}

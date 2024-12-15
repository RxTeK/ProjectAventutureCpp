#pragma once
#include "Perso.h"

class Player : public Perso
{
private:
    int chooseAttack;
    std::string attackName;
    int useItem;
    float addHealth;
    float addAttack;
    float addDefense;
    
public:

    Player();
    int attackNumber;
    int getUseItem();
    int getchooseAttack();
    std::string getattackName();
    void setUseItem(int uItem);
    void setattackName(std::string aName);
    void setchooseAttack(int aType);
    virtual void setattackType(std::string a_type, Perso& target);
};
 
#pragma once
#include "Perso.h"

class Player : public Perso
{
private:
    int useItem;
    
public:

    Player();

    int getUseItem();
    void setUseItem(int uItem);
};
 
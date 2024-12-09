#include "Player.h"

#include <iomanip>

Player::Player()
{
    setname("Player");
    sethealth(30.0);
    setattack(15.0);
    setdefense(15.0);
    
}

int Player::getUseItem()
{
    return useItem;
}

void Player::setUseItem(int uItem)
{
    useItem = uItem;
}

#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

#include <string>
#include "room.h"
//#include "game.h"

using namespace std;


class Player
{
private:
    string descriptions;

public:
    Player();
    Room* location;
};

#endif // PLAYER_H_INCLUDED

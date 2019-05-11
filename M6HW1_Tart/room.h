#ifndef ROOM_H_INCLUDED
#define ROOM_H_INCLUDED
#include <string>
//#include "game.h"
//#include "player.h"

using namespace std;

class Room
{
public:
    Room();
    Room(string, string, int);
    string names;
    string descriptions;
    string exits;
    string PrintInfo();
    int locationId;

    Room* north;
    Room* south;
    Room* east;
    Room* west;
    Room* n;
    Room* s;
    Room* e;
    Room* w;


};


#endif // ROOM_H_INCLUDED

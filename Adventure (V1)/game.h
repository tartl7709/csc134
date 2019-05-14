#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

#include <vector>
#include <string>
#include <iostream>

#include "room.h"
#include "player.h"
#include "constants.h"
#include "item.h"


using namespace std;

//const int NUM_ROOMS = 5;

class Game
{
private:
    vector <Room*> rooms;
    Player player;
    int score;
    bool gameIsRunning;
    void commandGo(string);
    void commandExamine(string);
    void commandLook();
    void commandScore();
    void commandRestart();
    void commandGet(string);
    void commandDrop(string);
    void commandInventory();

    ItemList itemList;



public:
    Game();
    ~Game();
    void startGame();
    void gameOver();
    bool isRunning();
    void doNextTurn();

    int getScore();
};


#endif // GAME_H_INCLUDED

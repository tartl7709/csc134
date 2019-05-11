#include <iostream>
#include "game.h"
//#include "room.h"
//#include <vector>
using namespace std;



//void testRoom();

int main()
{
    //cout << "game" << endl;
     Game g;
    g.startGame();

    // main game loop
    while (g.isRunning() == true)
    {
        g.doNextTurn();
    }
    g.gameOver();


    return 0;
}


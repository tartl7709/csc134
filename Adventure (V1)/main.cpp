#include <iostream>
#include "game.h"

using namespace std;

int main()
{
    //cout << "game" << endl;
     Game g;
    g.startGame();

    while (g.isRunning() == true)
    {
        g.doNextTurn();
    }
    g.gameOver();


    return 0;
}


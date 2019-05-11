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


   /* //const int Num_Rooms = 5;
    string names[Num_Rooms] = {"Living room", "Bathroom", "Master Bedroom", "Kitchen", "Laundry room"};
    string descriptions[Num_Rooms];
    string exits[Num_Rooms] = {"nsew", "north", "south", "east", "west"};

    names[0] = "Living room";
    descriptions[0] = "There are two sofas and a TV";
    exits[0] = "ews";//, "east", "west", "south";

    names[1] = "Bathroom";
    descriptions[1] = "There is a shower and a sink";
    exits[1] = "w";// "west";

    names[2] = "Master Bedroom";
    descriptions[2] = "There is a large bed and dresser";
    exits[2] = "n";//, "north";

    names[3] = "Kitchen";
    descriptions[3] = "There is a full fridge and hot oven";
    exits[3] = "ne";//, "north", "east";

    names[4] = "Laundry room";
    descriptions[4] = "There is a mountain of laundry on the floor";
    exits[4] = "s";//, "south";


    for (int i = 0; i < Num_Rooms; i++) {
        cout << names[i] << endl;
        cout << descriptions[i] << endl;
        cout << exits[i] << endl;
    }



  //  vector<Room*> rooms(Num_Rooms);

    // now we have a vector of 4 blank rooms.
    // let's configure it with our names and descriptions
  //  for (int i=0; i < Num_Rooms; i++) {
        rooms[i] = new Room();
        rooms[i]->name = names[i];
        rooms[i]->descriptions = descriptions[i];
    }

    testRoom();*/

    return 0;
}
/*
void testRoom()
{
    Room* a = new Room("A","Living Room");
    Room* b = new Room("B","Bathroom");
    Room* c = new Room("C", "Master Bedroom");
    Room* d = new Room("D", "Kitchen");
    Room* e = new Room("E", "Laundry Room");

    a->west = b;
    b->east = a;
    c->south = a;
    a->north = c;
    d->west = a;
    a->east = d;
    d->south = e;
    e->north = d;

    Room* myLocation = a;
    cout << myLocation->PrintInfo() << endl;

    cout << "going east" << endl;
    myLocation = myLocation->east;

    cout << myLocation->PrintInfo() << endl;
}*/


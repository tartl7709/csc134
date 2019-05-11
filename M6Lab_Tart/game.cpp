#include "game.h"
//#include "room.h"
#include "constants.h"
//#include "player.h"
#include "item.h"

Game::Game()
{
    // create the game object
    gameIsRunning = false;
    vector<Room*> rooms (NUM_ROOMS);
    //this ->rooms = rooms;


    this ->rooms = rooms;
}


Game::~Game()
{
    // destructor -- clean up heap memory
}

void Game::startGame()
{
    cout << "Starting Game" << endl;
    gameIsRunning = true;
    score = 0;
    /*Room* a = new Room("A","Living Room");
    Room* b = new Room("B","Bathroom");
    Room* c = new Room("C", "Master Bedroom");
    Room* d = new Room("D", "Kitchen");
    Room* e = new Room("E", "Laundry Room");*/

    string names[NUM_ROOMS] = {"Living room", "Bathroom", "Master Bedroom", "Kitchen", "Laundry room"};
    string descriptions[NUM_ROOMS] = {"There are two sofas and a TV", "There is a shower and a sink", "There is a large bed and dresser",
    "There is a big fridge and an oven", "There is a mountain of laundry on the floor"};
    //string exits[Num_Rooms] = {"nsew", "north", "south", "east", "west"};

    const int LIVING_ROOM = 0;
    const int BATHROOM = 1;
    const int MASTER_BEDROOM = 2;
    const int KITCHEN = 3;
    const int LAUNDRY_ROOM = 4;

    int locationIds[] = {LIVING_ROOM, BATHROOM, MASTER_BEDROOM, KITCHEN, LAUNDRY_ROOM};
    /*
    names[0] = "Living room";
    descriptions[0] = "There are two sofas and a TV";
   // exits[0] = "ews";//, "east", "west", "south";

    names[1] = "Bathroom";
    descriptions[1] = "There is a shower and a sink";
   // exits[1] = "w";// "west";

    names[2] = "Master Bedroom";
    descriptions[2] = "There is a large bed and dresser";
    //exits[2] = "n";//, "north";

    names[3] = "Kitchen";
    descriptions[3] = "There is a full fridge and hot oven";
    //exits[3] = "ne";//, "north", "east";

    names[4] = "Laundry room";
    descriptions[4] = "There is a mountain of laundry on the floor";*/
    //exits[4] = "s";//, "south";

    for (int i=0; i < NUM_ROOMS; i++) {
        rooms[i] = new Room();
        rooms[i]->names = names[i];
        rooms[i]->descriptions = descriptions[i];}
    /*
    Room* a = rooms[0];
    Room* b = rooms[1];
    Room* c = rooms[2];
    Room* d = rooms[3];
    Room* e = rooms[4];*/

    rooms[LIVING_ROOM]->west = rooms[BATHROOM];
    rooms[BATHROOM]->east = rooms[LIVING_ROOM];

    rooms[MASTER_BEDROOM]->south = rooms[LIVING_ROOM];
    rooms[LIVING_ROOM]->north = rooms[MASTER_BEDROOM];

    rooms[KITCHEN]->west = rooms[LIVING_ROOM];
    rooms[LIVING_ROOM]->east = rooms[KITCHEN];

    rooms[KITCHEN]->south = rooms[LAUNDRY_ROOM];
    rooms[LAUNDRY_ROOM]->north = rooms[KITCHEN];

    Item protein_bar = Item("protein bar", "a not-so-healthy protein bar", KITCHEN);
    itemList._items.push_back(protein_bar);

    itemList.printAllItems();

    player.location = rooms[LIVING_ROOM];

    commandLook();

    /*Room* myLocation = a;
    cout << myLocation->PrintInfo() << endl;

    cout << "going west" << endl;
    myLocation = myLocation->west;

    cout << myLocation->PrintInfo() << endl;*/
}


void Game::gameOver()
{
    cout << "Game over" << endl;
    gameIsRunning = false;
}

bool Game::isRunning()
{
    return gameIsRunning;
}

int Game::getScore() {
    return score;
}

void Game::doNextTurn()
{
    // take user input

    // process next turn
    /*cout << "This is a game turn." << endl;
    cout << "Keep playing? Y/N ";
    char input;
    cin >> input;
    if (input == 'N') {
        gameIsRunning = false;
    }*/
    cout << "> ";
    string verb = "";
    string noun = "";
    cin >> verb;
    if (verb == "go") {
        cin >> noun;
        commandGo(noun);
    }
    else if (verb == "quit") {
        gameIsRunning = false;
        cout << "Quitting" << endl;
    }
    else if (verb == "look") {
        //cout << "Looking" << endl;
        commandLook();
    }
    else if (verb == "score") {
        commandScore();
    }
    else if (verb == "help") {
        cout << "Help is not implemented yet." << endl;
    }
    else {
        cout << "I don't understand the word \"" << verb << "\". You can type help." << endl;
    }

}

void Game::commandGo(string direction) {


    /*cout << "Trying to go: " << direction << endl;
    if (direction == "east") {
        if (player.location->east == 0) {
            cout << "You can't go east here." << endl;
        }
        else {
            player.location = player.location->east;
        }
    }

    else if (direction == "west")  {
        if (player.location->west == 0) {
            cout << "You can't go west here." << endl;
        }
        else {
            player.location = player.location->west;
        }
    }
    else {
        cout << "I don't know that direction" << endl;
    }*/

    bool verbose = true;
    bool justMoved = false;
    bool illegalMove = false;

    // cout << "Trying to go: " << direction << endl;
    if (direction == "east") {
        if (player.location->east == 0) {
            illegalMove = true;
        }
        else {
            player.location = player.location->east;
            justMoved = true;
        }
    /*Item protein_bar = Item("protein bar", "a not-so-healthy protein bar", LIVING_ROOM);
    itemList._items.push_back(protein_bar);*/

    itemList.printAllItems();
    }

    else if (direction == "west")  {
        if (player.location->west == 0) {
            illegalMove = true;
        }
        else {
            player.location = player.location->west;
            justMoved = true;
        }
    }

    else if (direction == "north")  {
        if (player.location->north == 0) {
            illegalMove = true;
        }
        else {
            player.location = player.location->north;
            justMoved = true;
        }
    }

    else if (direction == "south")  {
        if (player.location->south == 0) {
            illegalMove = true;
        }
        else {
            player.location = player.location->south;
            justMoved = true;
        }
    }

    else {
        cout << "I don't know that direction" << endl;
    }

    // tell the player if the move was illegal
    if (illegalMove == true) {
        cout << "You can't go " << direction << endl;
    }

    // If we moved, and we're verbose, then look
    if (verbose == true and justMoved == true) {
        commandLook();
    }

}



void Game::commandLook() {
    //cout << "Looking around" << endl;
    cout << player.location->PrintInfo();
    itemList.printItemsInLocation(player.location->locationId);
}

void Game::commandScore() {
   cout << "Your score is: " << getScore() << endl;
}

void Game::commandRestart() {
    startGame();
}

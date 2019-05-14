#include "game.h"

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
    // destructor
}

void Game::startGame()
{
    cout << "~~Starting Game~~" << endl;
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


    for (int i=0; i < NUM_ROOMS; i++) {
        rooms[i] = new Room(names[i], descriptions[i], locationIds[i]);
    }
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

    player.location = rooms[LIVING_ROOM];

    Item belt = Item("belt", "no one can tell its fake Gucci", MASTER_BEDROOM);

    itemList.add(belt);

    Item keys = Item("keys", "your keys to the flex mobile", LIVING_ROOM);

    itemList.add(keys);

    Item bar = Item("bar", "a not-so-healthy protein bar", KITCHEN);
    //itemList._items.push_back(protein_bar);
    itemList.add(bar);

  //  itemList.printAllItems();

    commandLook();

    /*Room* myLocation = a;
    cout << myLocation->PrintInfo() << endl;

    cout << "going west" << endl;
    myLocation = myLocation->west;

    cout << myLocation->PrintInfo() << endl;*/
}


void Game::gameOver()
{
    cout << "GaMe OvEr :'(" << endl;
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
        cout << "~~Quitting Game~~" << endl;
    }
    else if (verb == "look") {
        //cout << "Looking" << endl;
        commandLook();
    }
    else if (verb == "examine") {
            cin >> noun;
        commandExamine(noun);
    }
    else if (verb == "score") {
        commandScore();
    }
    else if (verb == "inventory" or verb == "i") {
        commandInventory();
    }
    else if (verb == "get") {
        cin >> noun;
        commandGet(noun);
    }
    else if (verb == "drop") {
        cin >> noun;
        commandDrop(noun);
    }
    else if (verb == "help") {
        cout << "Help is not implemented yet." << endl;
    }
    else {
        cout << "I don't understand the word \"" << verb << "\". You can type help or try adding verb such as 'go' before command." << endl;
    }

}

void Game::commandExamine(string noun) {

    if (itemList.isItemHere(noun, player.location->locationId)) {

        // TODO: print the description of that item
        cout << itemList.getItemDescription(noun) << endl;
        cout << "It's on the floor here." << endl;
    }
    else if (itemList.isItemHere(noun, INVENTORY))
    {

        // print the description of that item
        cout << itemList.getItemDescription(noun) << endl;
        cout << "You're carrying that." << endl;
    }
    else
    {
        cout << "That is not here." << endl;
    }
}

void Game::commandInventory() {
    // list all items your player is carrying
    cout << "You check your belongings." << endl;
    itemList.printItemsInLocation(INVENTORY);
}

void Game::commandGet(string noun) {

    //cout << "TODO: implement get" << endl;
    if (itemList.isItemHere(noun, player.location->locationId)){
        // item is here
        cout << "Done." << endl;
        // change the item's locationID to INVENTORY
        itemList.updateLocation(noun, INVENTORY);
    }
    else if (itemList.isItemHere(noun, INVENTORY)){
        cout << "You're already carrying the " << noun << endl;
    }
    else {
        cout << "The " << noun << " is not here." << endl;
    }

}

void Game::commandDrop(string noun) {
    cout << "Dropped." << endl;
    itemList.updateLocation(noun,player.location->locationId);
}

void Game::commandGo(string direction) {


    bool verbose = true;
    bool justMoved = false;
    bool illegalMove = false;


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

    if (illegalMove == true) {
        cout << "You can't go " << direction << endl;
    }

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

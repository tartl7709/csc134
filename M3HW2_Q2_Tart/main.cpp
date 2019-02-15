#include <iostream>
// CSC 134
// Choose Your Own Adventure
// 02/12/19
// L Tart

// aiming for silver!

using namespace std;
/* The adventure game has 5 rooms
gate     <->     house
    ^                  ^
gazebo <-> garden <-> shed

the winning condition is to acquire the key from the shed
to open the gate
*/
// each room has its own function
// function prototypes

void gazebo();
void garden();
void shed();
void house();
void gate();
void outside();
void well();

bool firstPlay = true;
bool hasKey = false;

int main()
{

    //start in garden
    garden();
    return 0;
}

void garden ()
{
    string command;
   do {
    cout << "Welcome player!" << endl;
    cout << "You are standing in the garden." << endl;
    cout << "Your mission is to find the key and open the gate." << endl;
    cout << "Beware of the well on your journey." << endl;
    cout << "You can go EAST to go to a shed or WEST to go to the gazebo." << endl;

    cin >> command;
    }
    while (command != "east" && command != "west"); {
    if (command == "east")
    {
        shed();
    }
    else if (command == "west")
    {
        gazebo();
    }

    }
}

void gazebo ()
{
    string command;
    do {
    cout << "You have arrived at the gazebo." << endl;
    cout << "You can go NORTH to go to the gate or EAST to return to the garden." << endl;
    cin >> command;
    }

    while (command != "north" && command != "east"); {
    if (command == "north")
    {
        gate();
    }
    else if (command == "east")
    {
        garden();
    }
    }
}
void shed()
{
    string command;
    do {
    cout << "You have arrived in the shed." << endl;
    cout << "You find a KEY on the ground." << endl;
    cout << "You can go WEST to return to the garden or go NORTH to enter the house." << endl;
    cin >> command;
    }
    while (command != "west" && command != "north" && command != "key");{
    if (command == "west")
    {
        garden();
    }
    else if (command == "north")
    {
        house();
    }
    else if (command == "key")
    {
        hasKey = true;
        gate();
    }
    }

}
void gate()
{
    string command;
    cout << "You are now at the gate." << endl;
    cout << "The GATE is locked tightly." << endl;
    cout << "You can go EAST to enter the house or go SOUTH to return to the gazebo." << endl;
    cin >> command;

     (command != "east" && command != "south");
        if (command == "gate")
           {if (hasKey)
           {
            outside();
           }
        else if (command == "east")
        {
            house();
        }
        else if (command == "south")
        {
            gazebo();
        }
        else
        {
            cout << "The gate is locked." << endl;
        }
     }

}
void house()
{
    string command;
    do {
    cout << "You are standing in the house." << endl;
    cout << "You can go WEST to go to the gate, NORTH to go to the well," << endl;
    cout << "or SOUTH to return to the shed." << endl;
    cin >> command;
    }
    while (command != "west" && command != "south" && command != "north"); {
        if (command == "west")
        {
            gate();
        }
        else if (command == "south")
        {
            shed();
        }
        else //if (command == "south")
        {
            well();
        }

    }
}
void outside()
{
    cout << "Congratulations! You unlocked the gate and made it outside." << endl;

}
void well()
{
    cout << "Oops, you lose! You got too close to the well and fell in." << endl;
}

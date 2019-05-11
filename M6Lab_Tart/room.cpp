#include <iostream>
#include "room.h"
#include <vector>
using namespace std;

/*void Rooms() {
    Room livingRoom;
    livingRoom.name = "Living room";
    livingRoom.descriptions = "There is a tv and two sofas.";
    livingRoom.exits = "ews";

    Room bathroom;
    bathroom.name = "Bathroom";
    bathroom.descriptions = "There is a shower and a sink";
    bathroom.exits = "w";

    Room masterBedroom;
    masterBedroom.name = "Master Bedroom";
    masterBedroom.descriptions = "There is a large bed and dresser";
    masterBedroom.exits = "n";

    Room kitchen;
    kitchen.name = "Kitchen";
    kitchen.descriptions = "There is a full fridge and a hot oven";
    kitchen.exits = "ne";//, "north", "east";

    Room laundryRoom;
    laundryRoom.name = "Laundry room";
    laundryRoom.descriptions = "There is a mountain of laundry on the floor";
    laundryRoom.exits = "s";
}*/
Room::Room() {

    names = "Dull room";
    descriptions = "There is nothing here.";
    locationId = 0;

    // null pointer (zero) exits don't lead anywhere
    north = 0;
    south = 0;
    east = 0;
    west = 0;
}

Room::Room(string names, string descriptions, int locationId) {


    this->names = names;
    this->descriptions = descriptions;
    this->locationId = locationId;

    north = 0;
    south = 0;
    east = 0;
    west = 0;
}

string Room::PrintInfo()
{
    string endl = "\n";
    string space = " ";

    string output = names + endl
                    + descriptions + endl;

     output += "Exits: ";
    if (north != 0) {
        output += "north" + space;
    }
    if (south != 0) {
        output += "south" + space;
    }
    if (east != 0) {
        output += "east" + space;
    }
    if (west != 0) {
        output += "west" + space;
    }
    output += endl;

    return output;
}

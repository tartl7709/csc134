#include <iostream>
#include "room.h"
#include <vector>
using namespace std;


Room::Room() {

    names = "Empty room";
    descriptions = "There is literally nothing here.";
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

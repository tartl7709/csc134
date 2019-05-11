#include "item.h"
#include <iostream>

using namespace std;

Item::Item()
{
    // default constructor for an Item
    // probably never used -- all our
    // items need specific information
    _name = "Generic Item";
    _description = "A featureless blob";
    _locationId = 0;
}

Item::Item(string name, string description, int locationId)
{
    // note that if our member variables didn't have underscores,
    // we'd need to say "this->name" to distinguish it from
    // the local variable "name".
    // since we named our member vars differently, it's not needed.
    // either approach is fine.

    _name = name;
    _description = description;
    _locationId = locationId;
}

string Item::getName()
{
    return _name;
}

string Item::getDescription()
{
    return _description;
}

int Item::getLocationId()
{
    return _locationId;
}


/////////////////////////////////////////////////////
/////////// ItemList
/////////////////////////////////////////////////////
void ItemList::printAllItems()
{
    // we use an iterator to step through the vector
    // from begin() to end(), incrementing iter each time
    cout << "Printing all items" << endl;

    vector<Item>::iterator itemIter = _items.begin();

    while (itemIter != _items.end())
    {
        string name = itemIter->getName(); // get the name of this item
        cout << name << endl;
        itemIter++; // go to next item
    }


}
void ItemList::printItemsInLocation(int currentLocationId)
{
    // we use an iterator to step through the vector
    cout << "Printing items in room " << currentLocationId << endl;

    vector<Item>::iterator itemIter = _items.begin();

    while (itemIter != _items.end())
    {
        string itemName = itemIter->getName(); // name of item
        int itemLocationId = itemIter->getLocationId(); // loc of item

        if (itemLocationId == currentLocationId) {
            cout << itemName << endl;
        }
        itemIter++; // go to next item
    }

}

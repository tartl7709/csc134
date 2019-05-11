#include "item.h"
#include <iostream>

using namespace std;

Item::Item()
{

    _name = "Generic Item";
    _description = "A featureless item";
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

void Item::setLocationId(int locId)
{
    _locationId = locId;
}

// ITEM LIST //

void ItemList::printAllItems()
{
    // we use an iterator to step through the vector
    // from begin() to end(), incrementing iter each time
    cout << "Printing all items: " << endl;

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
    cout << "Items in your current room: " << currentLocationId << endl;

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

void ItemList::add(Item item)
{
    _items.push_back(item);
}

bool ItemList::isItemHere(string itemName, int locationId)
{

    vector<Item>::iterator itemIter = _items.begin();

    while (itemIter != _items.end())
    {
        if (itemName == itemIter->getName()) {
            // an item of that name exists
            // is it here?
            if (locationId == itemIter->getLocationId() )
            {
                return true; // right name and right location
            } // item wasn't in this room
        } // item didn't have that name

        itemIter++; // go to next item
    }
    return false; // we didn't find it
}

string ItemList::getItemDescription(string itemName)
{
    // input: the name of an item
    // output: its description
    string description = "NOT FOUND";

    vector<Item>::iterator itemIter = _items.begin();

    while (itemIter != _items.end())
    {
        if (itemIter->getName() == itemName)
        {
            description = itemIter->getDescription();
        }
        itemIter++; // go to next item
    }

    return description;
}

void ItemList::updateLocation(string itemName, int locId) {
        vector<Item>::iterator itemIter = _items.begin();

    while (itemIter != _items.end())
    {
        if (itemIter->getName() == itemName)
        {
            itemIter->setLocationId(locId);
        }
        itemIter++; // go to next item
    }
}

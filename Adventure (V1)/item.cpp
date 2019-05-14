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

    cout << "Printing all items: " << endl;

    vector<Item>::iterator itemIter = _items.begin();

    while (itemIter != _items.end())
    {
        string name = itemIter->getName();
        cout << name << endl;
        itemIter++;
    }

}
void ItemList::printItemsInLocation(int currentLocationId)
{

    cout << "Items in your current room: " << endl;

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

            if (locationId == itemIter->getLocationId() )
            {
                return true;
            }
        }

        itemIter++;
    }
    return false;
}

string ItemList::getItemDescription(string itemName)
{

    string description = "NOT FOUND";

    vector<Item>::iterator itemIter = _items.begin();

    while (itemIter != _items.end())
    {
        if (itemIter->getName() == itemName)
        {
            description = itemIter->getDescription();
        }
        itemIter++;
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
        itemIter++;
    }
}

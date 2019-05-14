#ifndef ITEM_H_INCLUDED
#define ITEM_H_INCLUDED

#include <string>
#include <vector>

using namespace std;

class Item
{
public:
    Item();
    Item(string, string, int);

    string getName();
    string getDescription();
    int getLocationId();
    void setLocationId(int);

private:
    string  _name;
    string  _description;
    int     _locationId;

};

class ItemList
{
    // Book IV, Chapter 6,
    // Listing 6-6

public:
    void printAllItems();
    void printItemsInLocation(int);
    void add(Item);
    bool isItemHere(string, int);
    string getItemDescription(string);
    void updateLocation(string, int);



private:
    vector<Item> _items;

};

#endif // ITEM_H_INCLUDED



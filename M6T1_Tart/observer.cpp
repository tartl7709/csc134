#include <iostream>
#include "observer.h"

void Dog::Respond()
{
    cout << "Bark bark" << endl;
}

void Police::Respond()
{
    cout << name << ": 'Drop the weapon! Now!'" << endl;
}

void Subject::AddObserver(Observer *Item)
{
    List[Count] = Item;
    Count++;
}

void Subject::RemoveObserver(Observer *Item)
{
    int i;
    bool found = false;
    for (i=0; i < Count; i++)
    {
        if (found)
        {
        }
        else if (List[i] == Item)
        {
            found = true;
        List[i] = List[i+1];
        }
    }

    if (found)
    {
        Count--;
    }
}

void Subject::Event()
{
    int i;
    for (i=0; i < Count; i++)
    {
        List[i]->Respond();
    }
}

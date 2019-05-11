#include <iostream>
#include "observer.h"
using namespace std;

int main()
{
    Subject Alarm;
    Subject Donut;
    Dog *Fido = new Dog(&Alarm, "Fido");
    Police *TJHooker = new Police(&Donut, "TJ");
    Police *JoeFriday = new Police(&Alarm, "Joe");
   // Police TJHooker("TJ");
    //Police JoeFriday("Joe");

   // Alarm.AddObserver(&Fido);
    //Alarm.AddObserver(&JoeFriday);
    //Donut.AddObserver(&TJHooker);

    Alarm.Event();

    //cout << "TJ on the beat" << endl;
    //Alarm.Event();
    //cout << endl;
    //cout << "TJ off for the day" << endl;
    //delete TJHooker;
    //Alarm.Event();

    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int i;
    cout << "IfElse" << endl;
    cout << "Type any number: ";
    cin >> i;

    if (i > 10)
    {
        cout << "It's greater than 10." << endl;
    }
    else
    {
        cout << "It's not greater than 10." << endl;
    }

    cout << "IfElse2" << endl;
    cout << "Type any number: ";
    cin >> i;

    if (i > 10)
    {
        cout << "It's greater than 10." << endl;
    }
    else if (i == 10)
    {
        cout << "It's equal to 10." << endl;
    }
    else
    {
        cout << "It's less than 10." << endl;
    }

    cout << "IfElse3" << endl;
    cout << "Type any number: ";
    cin >> i;

    if (i > 100)
    {
        cout << "It's greater than 100." << endl;
    }
    else if (i > 10)
    {
        cout << "It's greater than 10" << endl;
    }
    else
    {
        cout<< "It's neither greater than 100 nor greater than 10." << endl;
    }

    cout << "ForLoop" << endl;
    int x = 0;
    //int i;

    for (i = 1; i <= 100; i++)
    {
        x += i;
    }
    cout << x << endl;

    cout << "ForCountdown" << endl;
    //int i;

    for (i = 10; i >= 5; i--)
    {
        cout << i << endl;
    }

   // for (i = 0; i <= 100; i++)
   // {
   //     x += i;
   // }
   // for (i = 200; i <= 300; i++)
   // {
   //     x += i;
   // }

    cout << "ForLoop2" << endl;
    // changed the variable from p. 90 from x to y and from i to j
    double y = 0.0;
    double j;
    for (j = 0.0; j <= 100; j += 0.1)
    {
        y += j;
    }
    cout << y << endl;

    cout << "WhileLoop" << endl;
    int k = 0;

    while (k <= 10)
    {
        cout << k << endl;
        k++;
    }

    cout << "All finished!" << endl;

    cout << "DoWhileLoop" << endl;

    do
    {
        cout << k << endl;
        k++;
    }
    while (k <= 10);

    cout << "All finished (for real this time)!" << endl;
    return 0;
}

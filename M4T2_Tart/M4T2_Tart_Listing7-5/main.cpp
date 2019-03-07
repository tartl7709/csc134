#include <iostream>
// CSC 134
// M4T2 Listing 7-5
// L Tart
// 02/23/19


using namespace std;

int main()
{
    string HorribleMovie;
    string *ptrToString;

    HorribleMovie = "L.A. Confidential";
    ptrToString = &HorribleMovie;

    for (unsigned i = 0; i < HorribleMovie.length(); i++)
    {
        cout << (*ptrToString) [i] << " ";
    }
    cout << endl;
    return 0;
}

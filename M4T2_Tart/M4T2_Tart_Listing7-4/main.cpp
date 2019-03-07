#include <iostream>
// CSC 134
// M4T2 Listing 7-4
// L Tart
// 02/23/19


using namespace std;

int main()
{
    string GoodMovie;
    string *ptrToString;
    GoodMovie = "Best in Show";
    ptrToString = &GoodMovie;
    cout << *ptrToString << endl;
    return 0;
}

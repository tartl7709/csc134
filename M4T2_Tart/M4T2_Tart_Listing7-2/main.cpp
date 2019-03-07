#include <iostream>
// CSC 134
// M4T2 Listing 7-2
// L Tart
// 02/23/19

using namespace std;

int main()
{
    int NumberOfPotholes;
    int *ptr;
    ptr = &NumberOfPotholes;
    *ptr = 6087;
    cout << NumberOfPotholes << endl;
    return 0;
}

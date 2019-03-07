#include <iostream>
// CSC 134
// M4T2 Listing 7-3
// L Tart
// 02/23/19


using namespace std;

int main()
{
    int NumberOfPotholes;
    int *ptr = &NumberOfPotholes;
    int SaveForLater;
    *ptr = 6087;
    SaveForLater = *ptr;
    cout << SaveForLater << endl;
    *ptr = 7000;
    cout << *ptr << endl;
    cout << SaveForLater << endl;
    return 0;
}

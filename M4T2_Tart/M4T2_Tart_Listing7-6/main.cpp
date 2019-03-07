#include <iostream>
// CSC 134
// M4T2 Listing 7-6
// L Tart
// 02/23/19

using namespace std;

int main()
{
    int ExpensiveComputer;
    int CheapComputer;
    int *ptrToComp;

    ptrToComp = &ExpensiveComputer;
    *ptrToComp = 2000;
    cout << *ptrToComp << endl;

    ptrToComp = &CheapComputer;
    *ptrToComp = 500;
    cout << *ptrToComp << endl;

    ptrToComp = &ExpensiveComputer;
    cout << *ptrToComp << endl;

    return 0;
}

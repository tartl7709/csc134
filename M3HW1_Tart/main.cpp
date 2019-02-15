#include <iostream>
#include <math.h>

using namespace std;

int AddOne (int start)
    {
        int newnumber;
        newnumber = start +1;
        return newnumber;
    }

int main()
{
    cout << "Listing 5-1" << endl;
    cout << fabs(-10.5) << endl;
    cout << fabs(10.5) << endl;

    cout << "Listing 5-2" << endl;
    double mynumber;
    mynumber = fabs(-23.87);
    cout << mynumber << endl;

    cout << "Listing 5-3" << endl;
    double start;
    double finish;
    start = -253.895;
    finish = fabs(start);
    cout << finish << endl;

    cout << "Listing 5-4" << endl;
    double number = 10.0;
    double exponent = 3.0;
    cout << pow(number, exponent) << endl;

    cout << "Listing 5-5" << endl;
    int testnumber;
    int result;
    testnumber = 20;
    result = AddOne(testnumber);
    cout << result << endl;

    return 0;
}

#include <iostream>

using namespace std;

void payChartWithFor()
{
    cout << "This is the pay chart using For" << endl;
    int hours = 30;
    float gross;
    float pay;
    cout << "Please enter your hourly pay: ";
    cin >> pay;
    cout << "Hours \t \t Gross" << endl;
    cout << "_ _ _ _ _ _ _ _ _ _ _" << endl;
    for (hours = 30; hours <= 40; hours ++)
    {
        gross = hours * pay;
        cout << hours << "\t \t" << gross << endl;
    }

}

void payChartWithWhile()
{
    cout << "This is the pay chart using While" << endl;
    int hours = 30;
    float gross;
    float pay;
    cout << "Please enter your hourly pay: ";
    cin >> pay;

    gross = hours * pay;

    cout << "Hours \t \t Gross" << endl;
    cout << "_ _ _ _ _ _ _ _ _ _ _" << endl;
    while (hours <= 40)
    {
        cout << hours << "\t \t" << gross << endl;
        gross = hours * pay;
        hours ++;
    }


    // ask user for hourly pay
    // loop through and show pay for each

}
int main()
{
    // print the user's hours worked and total gross pay
    // using a for loop and then a while loop

    payChartWithFor();


    payChartWithWhile();

    return 0;
}


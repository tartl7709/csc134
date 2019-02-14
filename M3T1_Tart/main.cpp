#include <iostream>
// CSC 134
// L Tart
// M3T1
// 02/05/19

using namespace std;

int main()
{
    //This program should ask the user how many tests to enter.

    //Then within the loop, it will ask for a test grade, and add it to a total score.

    //After the loop completes, it will divide the total by number of tests in order to find an average.

    //Build two versions of this program -- one using while to loop, the other using for.

    int grade, numTests, average;
    int total = 0; // accumulator
    cout << "For Loop Version" << endl;
    cout << "How many tests to average? ";
    cin >> numTests;

    for (int count=1; count <= numTests; count++)
    {
        cout << "Grade for test # " << count << endl;
        cin >> grade;

        total = total + grade;
    }

    cout << "Total = " << total << endl;

    average = total / numTests;

    cout << "The average is " << average << endl;


    cout << "While Loop Version" << endl;

    int count = 1;
    total = 0;
    while (count <= numTests)
    {
        cout << "Grade for test #" << count << endl;
        cin >> grade;
        count ++;
        total = total + grade;
    }

    cout << "Total = " << total << endl;

    average = total / numTests;

    cout << "The average is " << average << endl;



    return 0;
}

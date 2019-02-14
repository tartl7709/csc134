#include <iostream>
// CSC134
// L Tart
// M2Lab3 Grade Calculator
// 1/31/19

using namespace std;

int main()
{

    float numberGrade;
    char letterGrade;
    int testNum;
    cout << "Grade Entry Program" << endl;
    cout << "Enter the number of tests you would like to receive a letter grade for: ";
    cin >> testNum;

    for (int count = 1; count <= testNum; count++)
    {   cout << "Enter your number grade: ";
        cin >> numberGrade;


    if (numberGrade >= 89.5)
    {
        letterGrade = 'A';
    }
    else if (numberGrade >= 79.5)
    {
        letterGrade = 'B';
    }
    else if (numberGrade >= 69.5)
    {
        letterGrade = 'C';
    }
    else if (numberGrade >= 59.5)
    {
        letterGrade = 'D';
    }
    else if (numberGrade <= 59.5)
    {
        letterGrade = 'F';
    }

    cout << "Your letter grade for this test is: " << letterGrade << endl;
    }

    //cout << "Your letter grade for test " << letterGrade << "is: " << letterGrade << endl;

    return 0;
}

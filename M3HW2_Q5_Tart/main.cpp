#include <iostream>
// CSC 134
// M3 HW2 Question 5
// L Tart
// 02/13/19

using namespace std;

int getNumberGrade();
char convertNumberToLetterGrade(int);

int main()
{

    int numberGrade;
    char letterGrade;
    //int testNum;
    cout << "Grade Entry Program" << endl;
    //cout << "Enter the number of tests you would like to receive a letter grade for: ";
    //cin >> testNum;
    cout << "Enter your number grade: " << endl;
    numberGrade = getNumberGrade();
    //cout << numberGrade << endl;
    letterGrade = convertNumberToLetterGrade(numberGrade);
    cout << "Your letter grade for this test is: " << letterGrade << endl;

    return 0;
}
int getNumberGrade()
{
    //cin >> testNum;
    int numberGrade;
    cin >> numberGrade;
    return numberGrade;
}
char convertNumberToLetterGrade(int numberGrade)
{
    char letterGrade;
    while(numberGrade >= 100);
    {
    //{  // cout << "Enter your number grade: ";
        //cin >> numberGrade;

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
    }
    return letterGrade;
    }

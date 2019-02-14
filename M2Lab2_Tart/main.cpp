#include <iostream>

using namespace std;

int main()
{
    float numberGrade;
    char letterGrade;
    // set numerical grade
    cout << "Type a numerical grade: ";
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

    else
    {
        letterGrade = 'F';
    }
    cout << "Letter grade is: " << letterGrade << endl;

    return 0;
}

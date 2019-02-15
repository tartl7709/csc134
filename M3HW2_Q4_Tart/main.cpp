#include <iostream>
// CSC 134
// M3 HW2 Question 4
// L Tart
// 02/13/19

using namespace std;

//Write a program which has a value-returning method calcArea() with two parameters, length and width.
//The method should calculate and return the area of a rectangle. Then write a program that uses this method.

int calcArea(float, float);

int main()
{
    int valueOne, valueTwo, Area;
    cout << "This program will calculate area of a rectangle." << endl;
    cout << "Please enter the length and width separated by a space: ";
    cin >> valueOne >> valueTwo;
    Area = calcArea(valueOne, valueTwo);

    cout << "The area is: " << endl;
    cout << Area << endl;

    return 0;
}
int calcArea(float length, float width)
{
    return length * width;
}

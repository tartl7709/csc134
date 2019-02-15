#include <iostream>
// CSC 134
// M3HW1
// L Tart
// 2/13/19

using namespace std;
//Write a program which has a void method printArea() with two parameters, length and width.
//The method should calculate and print the area of a rectangle. Then write a program that uses this method.

void printArea (float length, float width);

int main()
{
    int valueOne, valueTwo;
    cout << "This program will calculate area of a rectangle." << endl;
    cout << "Please enter the length and width separated by a space: ";
    cin >> valueOne >> valueTwo;

    printArea (valueOne, valueTwo);

    return 0;
}

void printArea(float length, float width)
{
    cout << "The area is: " << endl;
    cout << (length *  width) << endl;
}

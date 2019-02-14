#include <iostream>

using namespace std;

int main()
{
    float length, width, area;
    cout << "Enter the length and the width of the rectangle: ";
    cin >> length >> width;
    area = length * width;
    cout << "The area of the rectangle is " << area << endl;

    int farenheight, celsius;
    cout << "Enter temperature in Celsius to convert to Farenheight: ";
    cin >> celsius;
    farenheight = (9.0/5.0) * celsius + 32;
    // when using division the complier will throw away any remainder so add a decimal place so it is treated as a float
    cout << "Farenheight conversion is: " << farenheight << endl;

    float firstGrade, secondGrade, thirdGrade, newGrade;
    cout << "Enter three numerical grades with a space in between each: ";
    cin >> firstGrade >> secondGrade >> thirdGrade;
    newGrade = (firstGrade + secondGrade + thirdGrade) / (3.0);
    cout << "Your average grade is: " << newGrade << endl;

    int walls;
    cout << "Enter number of walls you want to paint: ";
    cin >> walls;
    float squareFeet;
    cout << "Enter the length and width of one wall in feet separated by a space: ";
    cin >> length >> width;
    squareFeet = (length * width) * (walls);
    cout << "The square footage of the wall(s) is: " << squareFeet << endl;
    float gallonPrimer;
    gallonPrimer = (squareFeet / 200.0);
    cout << "The number of gallons of primer needed to paint the wall(s) is: " << gallonPrimer << endl;
    float gallonPaint;
    gallonPaint = (squareFeet / 350.0);
    cout << "The number of gallons of paint needed to paint the wall(s) is: " << gallonPaint << endl;



    return 0;
}


#include <iostream>
#include "Arithmetic.h"
#include "temperature.h"
// CSC 134
// M4Lab - Dataman
// L Tart
// 02/21/19


/*
Changes to make program more user friendly:

added 'x' for multiplication
added '#' after option to indicate that a number is required
*/
using namespace std;

void main_menu();

int main_arithmetic ();

void print_main_menu(); // to display menu

int main_arithmetic()
{
    // main calculator loop
    float num1, num2;
    char opcode;
    //cout << add(1, 1) << endl;
    //cout << "I will add two numbers together." << endl;
    //cout << "Please enter two whole numbers separated by a space." << endl;
    cout << "Enter a mathematical expression, for example 2 + 2 or 10 / 2: " << endl;
    cin >> num1 >> opcode >> num2;
    if (opcode == '+') {
        add(num1, num2);
    cout << add(num1, num2) << endl;}
    //answer = add(num1, num2);
    //cout << "The answer to your expression is " << add(num1, num2) << endl;
    //int sub1, sub2;
    //cout << "Enter a mathematical subtraction expression, for example 4 - 3" << endl;
    //cin >> sub1 >> opcode >> sub2;
    else if (opcode == '-') {
        subtract(num1, num2);
     cout << subtract(num1, num2) << endl;}
    else if (opcode == '/') {
        divide(num1, num2);
    cout << divide(num1, num2) << endl;
    }
    else if (opcode == '*') {
        multiply(num1, num2);
    cout << multiply(num1, num2) << endl;
    }
    else if (opcode == 'x') {
        multiply(num1, num2);
    cout << multiply(num1, num2) << endl;
    }


    return 0;
}



int main ()
{
    // call the main menu
    main_menu();
    return 0;
}

void main_menu()
{
    int choice;
    do
    {

      print_main_menu();
      cout << "Option #: ";
      cin >> choice;
      switch (choice)
      {
    case 1:
        main_arithmetic();
        break;
    case 2:
        //cout << "Temperature Converter" << endl;
        tempConvertMenu();
        break;
    case 0:
        cout << "Exiting" << endl;
        break;
    default:
        cout << "Invaild option" << endl;

      }
    }
    while (choice!= 0);

}

void print_main_menu()
{
    // display main menu
    cout << "----DATAMAN MAIN MENU----" << endl;
    cout << "1. Arithmetic Calculator" << endl;
    cout << "2. Temperature Converter" << endl;
    cout << "0. Exit" << endl;
}


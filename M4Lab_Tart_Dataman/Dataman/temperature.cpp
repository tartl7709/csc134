#include <iostream>
using namespace std;
#include "temperature.h"

// converting celsius to kelvin and kelvin to celsius for dataman
// also includes menu for temperature converter function

void print_convert_menu()
{
    cout << "----TEMPERATURE CONVERTER----" << endl;
    cout << "1. Convert Kelvin to Celsius" << endl;
    cout << "2. Convert Celsius to Kelvin" << endl;
    cout << "3. Convert Fahrenheit to Celsius" << endl;
    cout << "4. Convert Celsius to Fahrenheit" << endl;
    cout << "0. Back to Main Menu" << endl;
}

void tempConvertMenu()
{
    int choice;
    do{
        print_convert_menu();
        cout << "Option #: ";
        cin >> choice;
    switch(choice)
    {
        case 1:
            KtoCmenu();
        break;
        case 2:
            CtoKmenu();
        break;
        case 3:
            FtoCmenu();
        break;
        case 4:
            CtoFmenu();
        break;
        case 0:
            cout << "Exiting" << endl;
        default:
            cout << "Invalid option" << endl;
    }
    }
    while (choice != 0);

}

void KtoCmenu()
{
    int tempK;
    cout << "Enter a temperature in Kelvin to convert to Celsius: " << endl;
    //float tempC;
    cin >> tempK;
    //tempC = tempK - 273.15;
    cout << convertKtoC(tempK) << endl;
    //return tempC;
}

float convertKtoC(float tempK)
{
    //cout << "Enter a temperature in Kelvin to convert to Celsius" << endl;
    float tempC;
    //cin >> tempK;
    tempC = tempK - 273.15;
    //cout << convertKtoC(float tempK) << endl;
    return tempC;
}

void CtoKmenu()
{
    int tempC;
    cout << "Enter a temperature in Celsius to convert to Kelvin: " << endl;
    //float tempK;
    cin >> tempC;
    //tempK = tempC + 273.15;
    cout << convertCtoK(tempC) << endl;
}

float convertCtoK(float tempC)
{
    //cout << "Enter a temperature in Celsius to convert to Kelvin" << endl;
    float tempK;
    //cin >> tempC;
    tempK = tempC + 273.15;
    //cout << convertCtoK(float tempC) << endl;
    return tempK;
}

void FtoCmenu()
{
    int tempF;
    cout << "Enter a temperature in Fahrenheit to convert to Celsius: " << endl;
    cin >> tempF;
    cout << convertFtoC(tempF) << endl;
}

float convertFtoC(float tempF)
{
    float tempCel;
    tempCel = (tempF - 32.0) * 0.556;
    return tempCel;
}

void CtoFmenu()
{
    int tempCel;
    cout << "Enter a temperature in Celsius to convert to Fahrenheit:" << endl;
    cin >> tempCel;
    cout << convertCtoF(tempCel) << endl;
}

float convertCtoF(float tempCel)
{
    float tempF;
    //float tempCel;
    tempF = tempCel * 1.8 + 32;
    return tempF;
}



#include <iostream>

// CSC 134
// M2 Lab1
// L Tart
// 1/22/19

using namespace std;

int main()
{
    string movieName;
    movieName = "LaLaLand";
    int year = 2016;
    double rating = 8.1;
    char firstLetter = movieName[0];
    cout << "Enter a movie name: ";
    cin >> movieName;
    cout << "The movie you entered is " << movieName << endl;
    cout << "Enter the year it was released: ";
    cin >> year;
    cout << "It was released in " << year << endl;
    cout << "Enter the IMDB rating: ";
    cin >> rating;
    cout << "The IMDB rating is " << rating << endl;
    cout << "I would file this movie under \"" << firstLetter << "\"" << endl;

    return 0;
}

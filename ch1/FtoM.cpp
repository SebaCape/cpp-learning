/*
    Project 1-1
    Simple program to convert
    feet to meters.
*/

#include <iostream>
using namespace std;

int main()
{
    //Declare variables
    double f;
    double m;

    //Take user input for feet
    cout << "Enter the length in feet: ";
    cin >> f;

    //Apply conversion
    m = f / 3.28;

    cout << f << " feet is equal to " << m << " meters.";

    return 0;
}
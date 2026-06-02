/*
    Interactive program that computes the
    area of a rectangle.
*/

#include <iostream>
using namespace std;

int main()
{
    //Variable declaration
    int length;
    int width;

    cout << "Enter some length: ";
    cin >> length;

    cout << "Enter some width: ";
    cin >> width;

    cout << "Your rectangle area is " << length * width;

    return 0;
}
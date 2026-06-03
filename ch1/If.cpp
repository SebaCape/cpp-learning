/*
    This program demonstrates the if.
*/

#include <iostream>
using namespace std;

int main()
{
    //Declare and define initial variables
    int a, b, c;
    a = 2;
    b = 3;

    //Run a comparison with output
    if (a < b)
        cout << "a is less than b\n";
    else if (a == b)
        cout << "a is equal to b\n";

    //Create c with new value
    c = a - b;

    //Run another comparison with output
    if (c >= 0)
        cout << "c is positive\n";
    else
        cout << "c is negative\n";

    return 0;
}
/*
    This program illustrates the differences
    between int and double.
*/

#include <iostream>
using namespace std;

int main()
{
    //Declare variables
    int ivar;
    double dvar;

    //Assign values
    ivar = 100;
    dvar = 100.0;

    //Showcase original values
    cout << "Original value of ivar: " << ivar << "\n";
    cout << "Original value of dvar: " << dvar << "\n";
    cout << "\n";

    //Apply division operations
    ivar /= 3;
    dvar /= 3;

    //Note difference despite same starting number
    cout << "ivar after division: " << ivar << "\n";
    cout << "dvar after division: " << dvar << "\n";

    return 0;
}
/*
    Project 1-2
    Program that converts a table of
    feet values to meters.
*/

#include <iostream>
using namespace std;

int main()
{
    for (int f = 1; f <= 100; f++)
    {
        cout << f << " feet is " << f / 3.28 << " meters\n";
        if (f % 25 == 0)
            cout << "\n";
    }

    return 0;
}
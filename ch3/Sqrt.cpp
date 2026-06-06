/*
    Show square roots of 1 to 100.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        cout << i << " " << sqrt((double)(i)) << "\n";
    }
    return 0;
}
/*
    This program uses the Pythagorean
    Theorem to find the length of the 
    hypotenuse given the length of the
    two opposing sides.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //Declare variables
    int a, b, c;

    //Calculate hypotenuse with math function
    a = 3.0;
    b = 4.0;
    c = sqrt(a * a + b * b);

    //Output results
    cout << "lengths: " << a << ", " << b << ", " << c;
    cout << "\nhypotenuse is " << c;

    return 0;
}
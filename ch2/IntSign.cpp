/*
    This program shows the difference between
    signed and unsigned integers.
*/

#include <iostream>
using namespace std;

int main()
{
    //Declare vars
    short int i;
    unsigned short int j;

    //Set unsigned int to 60000 and signed int to the same value
    j = 60000;
    i = j;

    //Illustrate overflow
    cout << "signed short: " << i << "\nunsigned short: " << j;

    return 0;
}
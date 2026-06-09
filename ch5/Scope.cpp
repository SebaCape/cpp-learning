/*
    Program demonstrating
    function scope.
*/

#include <iostream>
using namespace std;

int f1();

int main()
{
    //Define variable val and assign value
    int val = 10;

    //Print values from main() and f1() functions to illustrate scope
    cout << "val in main(): " << val;
    cout << "\nval in f1(): " << f1();
    cout << "\nval in main() after f1(): " << val; 

    return 0;
}

//Define function with same variable name
int f1()
{
    int val = 99;
    return val;
}
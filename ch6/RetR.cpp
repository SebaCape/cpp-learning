/*
    Program demonstrating a function
    that returns a reference.
*/

#include <iostream>
using namespace std;

double &f(); 

auto val = 100.0;

int main()
{
    cout << f() << "\n"; //display value of val

    f() = 99.1;
    cout << f() << "\n"; //display new val

    return 0;
}

double &f()
{
    return val; //Returns reference to val
}
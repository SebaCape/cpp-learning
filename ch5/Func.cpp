/*
    Program demonstrating the use of a
    custon C++ function.
*/

#include <iostream>
using namespace std;

void myfunc(); //Funk the func when you dunk the funk

int main()
{
    cout << "in main()\n";
    myfunc(); //Call the funk
    cout << "back in main()\n";

    return 0;
}

//Func the funk
void myfunc()
{
    cout << "in myfunc()\n";
}
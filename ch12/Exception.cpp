/*
    Example of exception handling 
    with try catch blocks.
*/

#include <iostream>
using namespace std;

void Xhandler(int test)
{
    try
    {
        //We will throw some arbitrary values
        if(test == 1)
            throw 'a';
        if(test == 2)
            throw test;
        if(test == 3)
            throw 123.23;

        cout << "Function call successful\n";
    }
    //Notice the ellipsis allows us to catch any exception type
    catch(...)
    {
        cout << "Caught an exception\n";
    }
}

int main()
{
    //Run our function with variant inputs
    Xhandler(0);
    Xhandler(1);
    Xhandler(2);
    Xhandler(3);

    return 0;
}
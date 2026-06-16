/*
    Program demonstrating dynamic allocation.
*/

#include <iostream>
using namespace std;

int main()
{
    int *v;

    //Try to allocate memory for and initialize our new integer
    try
    {
        v = new int (25);
    }
    catch(bad_alloc xa)
    {
        cout << "Allocation failure.";
        return -1;
    }

    //Print value
    cout << "at " << v << " is value " << *v;
    //Free memory
    delete v;

    return 0;
}
/*
    Program demonstrating command line
    arguments being passed to main().
*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    //Print all arguments stored in our array
    for (int i = 0; i < argc; i++)
        cout << argv[i] << "\n";

    return 0;
}

//NOTE: Numeric command line args can be passed with <cstdlib>.
/*
    Project 3-1

    A simple help system.
*/

#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Help on: \n" << "\t1. if\n" << "\t2. switch\n" << "Choose one: ";
    cin >> num;

    switch(num)
    {
        case 1:
            cout << "if (condition)\n" << "\tbehavior;";
            break;
        case 2:
            cout << "switch(expression)\n" << "{\n" << "\t case constant:\n" << "\t\t behavior; \n}";
            break;
        case 3:
            cout << "Invalid input. Input a number corresponding to program options.";
            break;
    }

    return 0;

}
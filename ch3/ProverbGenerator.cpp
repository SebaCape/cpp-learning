/*
    A simple proverb generator that
    demonstrates a switch statement.
*/

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number from 1 to 3 inclusive: ";
    cin >> num;

    switch(num)
    {
        case 1:
            cout << "A rolling stone gathers no moss.\n";
            break;
        case 2:
            cout << "A bird in hand is worth two in the bush.\n";
            break;
        case 3:
            cout << "A fool and his money are soon parted.\n";
            break;
        default:
            cout << "Enter 1, 2, or 3, and try again.";
            break;
    }

    return 0;
}
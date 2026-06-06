/*
    Program to count periods typed until user types a dollar sign ($)
*/

#include <iostream>
using namespace std;

int main()
{
    unsigned char ch;
    int ct = 0;

    //Count periods input until user types a dollar sign ($)
    do
    {
        cout << "Type a character: ";
        cin >> ch;

        if (ch == '.')
            ct++;
    } while (ch != '$');

    cout << ct << " periods typed.";
    
    return 0;
}
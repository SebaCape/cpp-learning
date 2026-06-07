/*
    Program showcasing string input 
    handling with whitespace.
*/

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    char str[80];

    cout << "Input your string here (less than 80 characters please!): ";
    gets(str);
    cout << "This was your string:\n" << str;

    return 0;
}
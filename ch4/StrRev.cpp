/*
    Project 4-2

    Program that uses pointers to 
    reverse a string in place.
*/

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    //Variable declaration
    char str[] = "this is a test";
    char *start, *end;
    int len;
    char t;

    //Print original string and get its length
    cout << "Original: " << str << "\n";
    len = strlen(str);

    //Get the starting and ending addresses of str and store them in pointers
    start = str;
    end = &str[len - 1];

    //Reverse our string
    while(start < end)
    {
        t = *start;
        *start = *end;
        *end = t;

        start++;
        end--;
    }

    //Output reversed string and terminate
    cout << "Reversed: " << str;

    return 0;
}

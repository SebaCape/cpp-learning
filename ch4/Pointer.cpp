/*
    Program that demonstrates the use of a pointer.
*/

#include <iostream>
using namespace std;

int main()
{
    int total, val;
    int *ptr;

    val = 3200;
    ptr = &val;
    total = *ptr;

    cout << "val, total --> " << val << " " << total;

    return 0;
}
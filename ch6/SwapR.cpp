/*
    Program demonstrating passing reference
    parameters into a function.
*/

#include <iostream>
using namespace std;

void swap(int &x, int &y);

int main()
{
    int x = 10, y = 20;

    cout << "x & y: " << x << ", " << y;
    swap(x, y);
    cout << "\nnew x & y: " << x << ", " << y;

    return 0;
}

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
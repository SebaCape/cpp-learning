/*
    Sample program for an array.
*/

#include <iostream>
using namespace std;

int main()
{
    int sample[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        sample[i] = i;
        cout << "sample[" << i << "] == " << sample[i] << "\n";
    }

    return 0;
}
/*
    Program demonstrating
    static variables.
*/

#include <iostream>
using namespace std;

double avg(double input);

int main()
{
    double val;

    do
    {
        cout << "Enter a number (-1 to exit): ";
        cin >> val;
        if(val != -1)
            cout << "Current average: " << avg(val) << "\n";
    } while (val != -1);
    

    return 0;
}

double avg(double input)
{   
    //Static storage class specifier means values are initialized once, then maintained between calls
    static double sum = 0, count = 0;

    count++;
    sum = sum + input;

    return sum / count;
}
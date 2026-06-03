/*
    Program for computing the regular
    payments of a loan.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //Variable declaration
    double Principal, IntRate, PayPerYear, NumYears, Payment;
    double numer, denom;
    double b, e;

    //Take user input for first line of variables
    cout << "Enter principal: ";
    cin >> Principal;

    cout << "Enter interest rate: ";
    cin >> IntRate;

    cout << "Enter number of payments per year: ";
    cin >> PayPerYear;

    cout << "Enter number of years: ";
    cin >> NumYears;

    //Financial calculation
    numer = IntRate * (Principal / PayPerYear);

    b = (IntRate / PayPerYear) + 1;
    e = -(PayPerYear * NumYears);

    denom = 1 - pow(b, e);

    Payment = numer / denom;

    //Output result
    cout << "Payment is " << Payment << "$";

    return 0;
}
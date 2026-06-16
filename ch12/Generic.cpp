/*
    Program demonstrating the use of
    generics in a user function.
*/

#include <iostream>
using namespace std;

//Using generic template to swap values of two variables of identical type
template <class X> void swapargs(X &a, X &b)
{
    X temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    //Declare test variables
    int i = 10, j = 20;
    float x = 4.5, y = 7.6;
    char a = 'a', b = 'b';

    //Show original values
    cout << "i j Original values: " << i << " " << j << "\n";
    cout << "x y Original values: " << x << " " << y << "\n";
    cout << "a b Original values: " << a << " " << b << "\n";

    //Swap using generic function
    swapargs(i, j);
    swapargs(x, y);
    swapargs(a, b);
    cout << "\n";

    //Output new values
    cout << "i j New values: " << i << " " << j << "\n";
    cout << "x y New values: " << x << " " << y << "\n";
    cout << "a b New values: " << a << " " << b << "\n";

    return 0;
}
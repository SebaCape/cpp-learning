/*
    Program defining a friend function.
*/

#include <iostream>
using namespace std;

class MyClass
{

    int a, b; //a and b have private access modifiers by default

    public:
        MyClass (int i, int j) {a = i; b = j;}
        friend int comDenom(MyClass x); //Denote friend function pre-signature

        int getA()
        {
            return a;
        }

        int getB()
        {
            return b;
        }
};

//Define comDenom outside of all class members
int comDenom(MyClass x)
{

    //Find the max value member of instance x of our MyClass object
    int max = x.a < x.b ? x.a : x.b; //Notice private variables are accessible by the friend

    //Find our common denominator of the two numbers (lcd/lcm)
    for (int i = 2; i <= max; i++)
    {
        if((x.a % i) == 0 && (x.b % i) == 0)
            return i;
    }

    //Return 1 if none exists
    return 1;
}

//Test our friend function
int main()
{
    //Shorthand declaration
    MyClass n(18, 111);

    cout << "Our common denominator of our numbers " << n.getA() << " and " << n.getB() << " is " << comDenom(n) << ".";

    return 0;
}

//If you are a wandering person reading this, ask me about chess. (contact at sebacape dot github dot io.)
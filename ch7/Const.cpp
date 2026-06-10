/*
    Program demonstrating a 
    const pointer parameter.
*/

#include <iostream>
using namespace std;

//Declare function signature with const pointer parameter
int negate(const int *val);

int main()
{
    //Variable declaration
    int result;
    int v = 10;

    //Try to set result to a negated v (use :: for global scope)
    result = ::negate(&v);

    //Notice that v itself is not mutated in its output
    cout << v << " negated is " << result;

    return 0;
}

int negate(const int *val)
{
    //If we were to prepend *val = -*val in this line, the program would not work since the pointer is const
    return -*val;
}
/*
    Creating XOR in C++ using
    logical operators.
*/

#include <iostream>
using namespace std;

bool XOR(bool b1, bool b2);

int main()
{
    //Boolean declaration
    bool p, q;

    //And -> False
    p = true;
    q = true;
    cout << "p xor q is " << XOR(p, q) << " when both are true.\n";

    //Xor -> true
    p = true;
    q = false;
    cout << "p xor q is " << XOR(p, q) << " when one is true.\n";

    //Nor -> false
    p = false;
    q = false;
    cout << "p xor q is " << XOR(p, q) << " when both are false.";
    
    return 0;
}

//Helper function for XOR logic
bool XOR(bool b1, bool b2)
{
    return (b1 || b2) && !(b1 && b2);
}
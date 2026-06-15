/*
    Program demonstrating operator overloading 
    of the I/O inserter via a friend function.
*/
#include <iostream>
using namespace std;

class ThreeD
{
    //These members are private by default
    int x, y, z;

    public:
        //Constructor declaration
        ThreeD(int a, int b, int c)
        {
            x = a;
            y = b;
            z = c;
        }

        //Initialize function signature for friend function to overload insert operator
        friend ostream &operator<<(ostream &stream, ThreeD obj);
};

//Define our friend function outside of the class
ostream &operator<<(ostream &stream, ThreeD obj)
{
    //Define our overloaded insertion behavior
    stream << obj.x << ", ";
    stream << obj.y << ", ";
    stream << obj.z << "\n";

    //We must return a reference to our stream at the end of I/O overloaders
    return stream; 
}

//Demonstrate overloaded inserter behavior
int main()
{
    ThreeD td(1, 3, 7);
    cout << "Our 3D object: " << td;
    return 0;
}
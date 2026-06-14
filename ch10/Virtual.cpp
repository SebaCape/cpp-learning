/*
    Program demonstrating runtime polymorphism in functions 
    of derived classes via the 'virtual' keyword.
*/

#include <iostream>
using namespace std;

//Create class with virtual member function
class B
{
    public: 
        virtual void who()
        {
            cout << "Base class.\n";
        }
};

//Create derived classes with overridden virtual function from parent
class D1 : public B
{
    public:
        void who()
        {
            cout << "First derivation.\n";
        }
};

class D2 : public B
{
    public:
        void who()
        {
            cout << "Second derivation.\n";
        }
};

//Demonstrate runtime polymorphism
int main()
{
    //Initialize class instances and base class pointer
    B base;
    B *p;
    D1 d1;
    D2 d2;

    //Point base class pointer to each instance and demonstrate runtime polymorphism
    p = &base;
    p->who();

    p = &d1;
    p->who();

    p = & d2;
    p->who();

    return 0;
}
/*
    Program demonstrating declaration
    of a custom namespace.
*/

#include<iostream>
using namespace std;

//User defined counter namespace
namespace CounterNameSpace
{
    //Define variable members
    int upperbound, lowerbound;

    //Define counter object class
    class counter
    {
        int count;
        public:
            //Constructor (uses upper bound for count value ceiling)
            counter(int n)
            {
                if(n <= upperbound)
                    count = n;
                else
                    count = upperbound;
            }

            //Member function that counts down unless lowerbound is reached
            int run()
            {
                if(count > lowerbound)
                    return count--;
                else
                    return lowerbound;
            }
    };
}

//Use our self defined namespace
using namespace CounterNameSpace;

int main()
{
    //Define members based on namespace 
    upperbound = 100;
    lowerbound = 20;
    counter c1 = 120; //Should be truncated to upperbound initially
    int i;

    //Run while loop that counts down until lowerbound is reached
    do
    {
        i = c1.run();
        cout << i << " ";
    } while (i > lowerbound);
    cout << endl;

    return 0;
}
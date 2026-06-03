/*
    Program to calculate how long it would
    take someone to communicate from Earth
    to Mars via radio signal.
*/

#include <iostream>
using namespace std;

int main()
{
    //Declare variables
    double distance, lightspeed, delay, delay_in_minutes;

    //Start with our constant instantiation
    distance = 34000000;
    lightspeed = 186000;

    //Use defined constant to mathematically determine delays
    delay = distance / lightspeed;
    delay_in_minutes = delay / 60;

    cout << "It would take " << delay << " seconds to communicate with mars via radio. (or, " << delay_in_minutes << " minutes.)";

    return 0;
}
/*
    Program utilizing a class to
    create two vehicle objects.
*/

#include <iostream>
using namespace std;

class Vehicle
{
    public:
        int passengers; //Passenger count
        int fuelcap;//Fuel capacity in gallons
        int mpg; //Miles per gallon fuel consumption
};

int main()
{
    Vehicle minivan;
    int range;

    minivan.passengers = 7;
    minivan.fuelcap = 16;
    minivan.mpg = 21;

    //Compute potential travel range with full gas
    range = minivan.fuelcap * minivan.mpg;
    cout << "Minivan can carry " << minivan.passengers << " passengers for " << range << " miles.";

    return 0;
}
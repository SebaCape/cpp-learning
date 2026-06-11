/*
    Program that demonstrates
    an enumeration.
*/

#include <iostream>
using namespace std;

int main()
{
    //Create vehicle enum
    enum transport {
        car,
        truck,
        plane,
        train,
        boat
    };

    //Initialize strings array
    char name[][7] = {
        "\nCar",
        "\nTruck",
        "\nPlane",
        "\nTrain",
        "\nBoat"
    };

    //Create a "transport" enum object and showcase value variance to index our strings array
    transport how;

    how = car;
    cout << name[how];
    how = boat;
    cout << name[boat];
    how = train;
    cout << name[plane];

    return 0;
}
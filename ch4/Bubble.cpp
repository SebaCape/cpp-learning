/*
    Project 4-1
    Bubble sorting algorithm program.
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    //Declare input and count to handle dynamic array creation
    unsigned char input;
    int ct = 0;

    cout << "Input a number for your array length to sort: ";
    cin >> ct;

    //Initialize array and populate with random values, printing as it populates
    int arr[ct];

    cout << "\nArray values: \n";

    for(int i = 0; i < ct; i++)
    {
        arr[i] = rand();
        cout << arr[i] << " ";
    }

    //Enact bubble sorting logic on array
    bool sorted = false;

    while(!sorted)
    {
        sorted = true;
        for(int i = 0; i < ct - 1; i++)
        {
            //Define for possible storage in swap operation
            int temp;

            if (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                sorted = false; //This wasn't a sorted iteration if any values swap places
            }
        }
    }

    //Output new sorted array and terminate
    cout << "\n\nSORTED ARRAY:\n";

    for(int i = 0; i < ct; i++)
        cout << arr[i] << " ";

    cout << "\n";
    
    return 0;
}
/*
    Sample program demonstrating a 2D array.
*/

#include <iostream>
using namespace std;

int main()
{
    int nums[3][4];
    int row, col;

    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 4; col++)
        {
            nums[row][col] = (row * 4) + col + 1;
            cout << "Row " << row + 1 << " Column " << col + 1 << ": " << nums[row][col] << "\n";
        }
        cout << "\n";
    }

    return 0;
}
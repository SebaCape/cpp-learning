//Pass a pointer to a function.

#include <iostream>
using namespace std;

//Define function signature with pointer
void PFunc(int *j);

int main()
{
    int val = 10;

    //Print before and after PFunc with val address passed
    cout << "cur val: " << val;
    PFunc(&val);
    cout << "\nval after PFunc: " << val;

    return 0;
}

void PFunc(int *j)
{
    *j += 25;
}
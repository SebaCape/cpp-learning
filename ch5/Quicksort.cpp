/*
    Project 5-1

    Quicksort program.
*/

#include <iostream>
#include <cstring>
using namespace std;

//Function signatures
void quicksort(char *items, int len);
void qs(char *items, int left, int right);

int main()
{
    //Declare randomly ordered string
    char str[] = "sdkajfpohpoqnakdfdafhpoanefiowianixcovbuwapzlty";


    //Show string before and after applying quicksort algorithm
    cout << "Original order: " << str;
    quicksort(str, strlen(str));
    cout << "\nSorted order: " << str;

    return 0;
}

//Function declarations
void qs(char *items, int left, int right)
{
    //Create array bound variables + midpoint to partition around
    int i, j;
    char x, y;

    i = left;
    j = right;
    x = items[(left + right) / 2];

    //Organize around partition boundaries until values are valid
    do
    {
        while((items[i] < x) && (i < right))
            i++;
        while((items[j] > x) && (j > left))
            j--;
        
        if(i <= j)
        {
            y = items[i];
            items[i] = items[j];
            items[j] = y;
            i++;
            j--;
        }
    } while (i <= j);

    //Recursive calls
    if(left < j)
        qs(items, left, j);
    if(i < right)
        qs(items, i, right);
}

//Initial qs call
void quicksort(char *items, int len)
{
    qs(items, 0, len - 1);
}
/*
    Project 8-2

    Class implementing a queue data structure.
*/

#include <iostream>
using namespace std;

const int MAXSIZE = 100;

class Queue
{
    char q[MAXSIZE]; //Holds queue
    int size; //Max elements in this queue
    int putloc, getloc; //Put and get indices of our queue

    public:
        //Constructor
        Queue(int len)
        {
            if (len > MAXSIZE)
                len = MAXSIZE;
            else if (len <= 0)
                len = 1;
            
            size = len;
            putloc = getloc = 0;
        }

        //Setter
        void put(char ch)
        {
            if (putloc == size)
            {
                cout << "-- Queue is full.\n";
                return;
            }

            putloc++;
            q[putloc] = ch;
        }

        //Getter
        char get()
        {
            if(getloc == putloc)
            {
                cout << "-- Queue is empty.";
                return NULL;
            }
            getloc++;
            return q[getloc];
        }
};

//Demonstrate queue
int main()
{
    //Create queue of length 100
    Queue bigQ = 100;
    char ch;
    int i;

    cout << "Using bigQ to store alphabet.";
    for (i = 0; i < 26; i++)
        bigQ.put('A' + i);
    
    //Display elements from bigQ
    cout << "Current contents of bigQ: \n";
    for (i = 0; i < 26; i++)
    {
        ch = bigQ.get();
        if (ch != 0) cout << ch;
    }

    //Showcase now empty queue
    cout << "\n";
    bigQ.get();

    return 0;
}


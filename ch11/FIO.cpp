/*
    Program demonstrating read/write
    operations on a text file.
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //Create and open a file to insert output into and later read from (flag accordingly)
    fstream file("test.txt", std::ios::in | std::ios::out);

    //File open failure (use endl for important errors)
    if(!file)
    {
        cout << "Cannot open file." << endl;
        return -1;
    }

    //Write data to our file (use \n for non critical output)
    file << 10 << " " << 123.23 << "$\n";
    file << "This is a short text file.";

    //Reset file pointer to beginning
    file.seekg(0, ios::beg);

    //Define variables to fill with data read from our newly created file
    char ch;
    int i;
    float f;
    char str[80];

    //Stream data from our file into our instantiated vars
    file >> i;
    file >> f;
    file >> ch;
    file.get(); //Consume newline (\n) for proper string reading
    file.getline(str, 80);

    //Show variable output to prove operations have worked
    cout << i << " " << f << " " << ch << "\n";
    cout << str;

    return 0;
}
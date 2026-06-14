/*
    Program demonstrating
    basic inheritance.
*/
#include <iostream>
#include <cstring>
using namespace std;

//base/parent/super class
class TwoDShape
{
    public:
        double width, height;
        void showDim()
        {
            cout << "Width: " << width << "\nHeight: " << height;
        }

};

//derived/child/sub class (inherits from TwoDShape)
class Triangle : public TwoDShape
{
    public:
        char style[20];

        double area()
        {
            return width * height / 2;
        }

        void showStyle()
        {
            cout << "Triangle is " << style;
        }
};

//Demonstrate inheritance
int main()
{
    //Instantiate triangles with separate styles
    Triangle tri1, tri2;

    tri1.width = 4.0;
    tri1.height = 4.0;
    strcpy(tri1.style, "isosceles");

    tri2.width = 8.0;
    tri2.height = 12.0;
    strcpy(tri2.style, "right");


    //Showcase triangle characteristics
    cout << "Triangle 1 area is " << tri1.area() << "\n";
    tri1.showStyle();

    cout << "\nTriangle 2 area is " << tri2.area() << "\n";
    tri2.showStyle();

    return 0;
}
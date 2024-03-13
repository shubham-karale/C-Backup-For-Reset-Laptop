/*

Q1. Write a menu driven program to calculate volume of the box(length * width * height).
Provide necessary constructors.

*/

#include <iostream>

using namespace std;

class Box
{
public:
    float length, width, height;

    Box()
    {
        length = 0;
        width = 0;
        height = 0;
    }

    Box(float l, float w, float h)
    {
        length = l;
        width = w;
        height = h;
    }
};

int main()
{

    // Menu Driven Program
    Box b;
    int choice;

    do
    {

        cout << "0. Calculate Volume" << endl;
        cout << "1. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 0:
            float l, w, h;
            cout << "Enter length: ";
            cin >> l;
            cout << "Enter width: ";
            cin >> w;
            cout << "Enter height: ";
            cin >> h;

            b = Box(l, w, h);
            cout << "Volume: " << b.length * b.width * b.height << endl;
            break;
        case 1:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
        }

    } while (choice != 0);

    return 0;
}
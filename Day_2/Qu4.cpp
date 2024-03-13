// Q4. Write a class Address. Implement constructors, getters, setters, accept(), and display() methods.

#include <iostream>

using namespace std;

class Address
{
private:
    string building;
    string street;
    string city;
    int pin;

public:
    void address()
    {
        building = " ";
        street = " ";
        city = " ";
        pin = 0;
    }

    // Parameterized constructor

    void address(string building, string street, string city, int pin)
    {
        this->building = building;
        this->street = street;
        this->city = city;
        this->pin = pin;
    }

    // Accept the Data

    void accept()
    {
        cout << "Enter building: ";
        cin >> building;
        cout << "Enter street: ";
        cin >> street;
        cout << "Enter city: ";
        cin >> city;
        cout << "Enter pin: ";
        cin >> pin;
    }

    // Display the Data

    void display()
    {
        cout << "Building: " << building << endl;
        cout << "Street: " << street << endl;
        cout << "City: " << city << endl;
        cout << "Pin: " << pin << endl;
    }

    // Getters

    string get_Building()
    {
        return building;
    }

    string get_Street()
    {
        return street;
    }

    string get_City()
    {
        return city;
    }

    // Settters

    void set_Building(string building)
    {
        this->building = building;
    }

    void set_Street(string street)
    {
        this->street = street;
    }

    void set_City(string city)
    {
        this->city = city;
    }

    void set_Pin(int pin)
    {
        this->pin = pin;
    }
};

int main()
{

    Address a;
    int choice;

    do
    {

        cout << "Enter the Choice: " << endl;

        cout << "0. Accept" << endl;
        cout << "1. Display" << endl;

        cin >> choice;

        switch (choice)
        {

        case 0:
            a.accept();
            break;
        case 1:
            a.display();
            break;

        case 2:
            cout << "Exiting..." << endl;
            break;

        default:
            cout << "Invalid choice" << endl;
        }
    } while (choice != 0);

    return 0;
}

/*
    Q2. Write a menu driven program for Date in a CPP language using structure and also using class.
Date is having data members day, month, year. Implement the following functions.
void initDate();
void printDateOnConsole();
void acceptDateFromConsole();
bool isLeapYear();

*/


#include<iostream>

using namespace std;


class Date {
    public:
        int day;
        int month;
        int year;
      

void initDate() {
    day = 1;
    month = 1;
    year = 2000;
   cout << "Date: " << day << "/" << month << "/" << year << endl;
}

void printDateOnConsole() {
    cout << "Date: " << day << "/" << month << "/" << year << endl;
}


void acceptDateFromConsole() {

    cout << "Enter the day: ";
    cin >> day;
    cout << "Enter the month: ";
    cin>>month;
    cout << "Enter the year: ";
    cin >>year;
    
}

bool isLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                return true;
            }
            else {
                return false;
            }
        }
        else {
            return true;
        }
    }
    else {
        return false;
    }
}



};






int main() {


    Date d;


    int choice;

    do {

    cout << "1. Init Date" << endl;
    cout << "2. Print Date" << endl;
    cout << "3. Accept Date" << endl;
    cout << "4. Is Leap Year" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

   
    switch (choice) {
        case 1:
            d.initDate();
            break;
        case 2:
            d.printDateOnConsole();
            break;
        case 3:
            d.acceptDateFromConsole();
            break;
        case 4:

        int year;
        cout<<"Enter Year Details:"<<endl;
        cin>>year;

        if (d.isLeapYear(year)) {
                cout << "Leap Year" << endl;
            }
            else {
                cout << "Not a Leap Year" << endl;
            }
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
    }

    }while(choice!=0);

    return 0; 


}




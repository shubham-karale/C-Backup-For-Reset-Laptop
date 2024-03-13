#include<iostream>

using namespace std;



// Create NSpace Student
 namespace NStudent {

//    Create Student class
    class Student {
    public:
     string name;
     int roll;
     int marks;

    //  Create Student;

    Student() {
        roll = 0;
        name = "";
        marks = 0;
    }

    // Create Parameterised Constructor

    Student(int r, string n, float m) {
        roll = r;
        name = n;
        marks = m;
    }

    // Accept the Data

    void acceptData() {
        cout<<"Enter the Name of the Students"<<endl;
        cin>>name;
        cout<<"Enter the Roll number of the Students"<<endl;
        cin>>roll;
        cout<<"Enter the marks of the Students"<<endl;
        cin>>marks;
    }

    // Display the Data

    void display() {
        cout << "Roll: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }

 };
 }

//  Creating the Student Of Namspace

 using namespace NStudent;

int main() {



    Student s;

     int choice;

     do {

        cout << "1. Create Student" << endl;
        cout << "2. Display Student" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
     
    //  Switch case for choice

        switch(choice){

            // Accept Data on Pressing the 1

            case 1:            
             
             s.acceptData();

            break;

            // Display the data

            case 2:
                s.display();
                break;

            default:
               
               cout<<"Exiting the Programs"<<endl;
            

        }


     }while(choice != 0);





    return 0;

}
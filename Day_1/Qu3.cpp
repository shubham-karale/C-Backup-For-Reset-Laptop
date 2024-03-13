/*

Q3. Write a menu driven program for Student in CPP language. Create a class student with data
members roll no, name and marks. Implement the following functions
void initStudent();
void printStudentOnConsole();
void acceptStudentFromConsole();
  
*/

#include<iostream>

using namespace std;


class Student {
 public:
    int roll_number;
    string name;
    int marks;

    // init Student Data

 void initStudent() {
    
    roll_number = 0;
    name = "hello";
    marks = 25;

    cout << "Name " << name << "Roll Number : " << roll_number << "Marks" << marks << endl;
}
   
 }
 

//  Accept the Student Details from User

 void acceptStudentFromConsole(){
   
    cout<<"Enter the Student Name"<<endl;
    string name;
    cin>>name;
    cout<<"Enter the Roll Number "<<endl;

    int roll_number;
    cin>>roll_number;

    cout<<"Enter the marks of the Student"<<endl;
    int marks;
    cin>>marks;

 }


 //  Print the Student Details on Console

 void printStudentOnConsole() {

   cout << "Name " << name << "Roll Number : " << roll_number << "Marks" << marks << endl;
}
    
    
};


int main() {

   Student st;

    int choice;


    do {
        cout<<"1 : Init Student"<<endl;
        cout<<"2 : Enter Student Details"<<endl;
        cout<<"3 : Print Student"<<endl;
        cout<<"4 : Exit"<<endl;
        cout<<"Enter your choice"<<endl;
    


    cin>>choice;

    switch (choice)

    {
    case 1:

        cout<<"1 : Init Student"<<endl;
               st.initStudent();
          
        break;

        case 2:

        cout<<"2 : Enter Student Details"<<endl;
               st.acceptStudentFromConsole();
          
        break;

        case 3:
        
        cout<<"3 : Print Student"<<endl;
               st.printStudentOnConsole();
          
        break;
    
    default:
        cout<<"Invalid Details"<<endl;
        break;
    }

}while(choice!=0);


}





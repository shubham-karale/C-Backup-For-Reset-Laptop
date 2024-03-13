/*
  Q2. Write a menu driven program for Student management.
In main(), create Array of Objects and provide facility for accept, print, search and sort.
For student accept name, gender, rollNumber and marks of three subjects from user and print name,
rollNumber, gender and percentage.
Provide global functions void sortRecords(Student[] arr) and int searchRecords(Student[] arr) for
sorting and searching array.
Search function returns index of found Student, otherwise returns -1.


*/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
  string name;
  string gender;
  int rollNumber;
  int marks[3];

  // Parameterless Constructor
  Student()
  {
    name = "Shubham";
    gender = "Male";
    rollNumber = 45;
    marks[0] = 0;
  }

  // Parameterized Constructor
  Student(string n, string g, int r, int m1, int m2, int m3)
  {
    name = n;
    gender = g;
    rollNumber = r;
    marks[0] = m1;
    marks[1] = m2;
    marks[2] = m3;
  }

  //  Input Taking from the User
  void inputData()
  {
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Gender: ";
    cin >> gender;
    cout << "Enter Roll Number: ";
    cin >> rollNumber;
    cout << "Enter Marks: ";
    cin >> marks[0];
    cin >> marks[1];
    cin >> marks[2];
  }

  // Percentage Functions for displayData
  void percentage(int marks[])
  {
    int total = 0;
    for (int i = 0; i < 3; i++)
    {
      total += marks[i];
    }
    cout << "Percentage: " << (total / 3) << "%" << endl;
  }

  // getter for roll number

  int get_rollNumber()
  {
    return rollNumber;
  }

  //

  // Displaying the Data

  void displayData()
  {

    cout << "Enter Name: " << name << endl;
    cout << "Enter Gender: " << gender << endl;
    cout << "Enter Roll Number: " << rollNumber << endl;
    cout << "Enter Marks of Subject 1: " << marks[0] << endl;
    cout << "Enter Marks of Subject 2 : " << marks[1] << endl;
    cout << "Enter Mark Of Subject 3 : " << marks[2] << endl;
  }

  // void sortRecords(Student[] arr)  =  Sort the arrays by roll number

  void sortRecords(Student **arr[], int n)
  {
    int roll_1, roll_2;
    //   comapare two students roll number and sort them as per roll number
    for (int i = 0; i < n - 1; i++)
    {
      for (int j = 0; j < n - i - 1; j++)
      {

        roll_1 = arr[i].get_rollNumber();
        roll_2 = arr[j].get_rollNumber();
        if (roll_1 > roll_2)
        {
          Student temp = arr[i];
          arr[i] = arr[j];
          arr[j] = temp;
        }
      }
    }
  }

};

int main()
{

  // Create Array of Student Objects
  int n;
  cout << "Enter Number of Students: ";
  cin >> n;

  Student *st[n];

  for (int i = 0; i < n; i++)
  {
    st[i] = new Student();
    st[i]->inputData();
  }

  cout << sortRecords(st, n) <<endl;

  return 0;
}
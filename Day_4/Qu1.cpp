/*
 TODO :
*/

#include <iostream>

using namespace std;

// ! Date Class

class Date
{
public:
    int day;
    int month;
    int year;

    // Parameterless constructor
    Date()
    {
        day = 1;
        month = 1;
        year = 1970;
    }

    // Parameterized Constructor

    Date(int d, int m, int y)
    {
        day = d;
        month = m;
        year = y;
    }

    // getter for day
    int get_day()
    {
        return day;
    }

    // getter for day
    int get_month()
    {
        return month;
    }

    // getter for day
    int get_year()
    {
        return year;
    }

    // Setter for day
    void set_day(int d)
    {
        day = d;
    }

    // Setter for month
    void set_month(int m)
    {
        month = m;
    }

    // Setter for year
    void set_year(int y)
    {
        year = y;
    }

    // Accept the Input date entered by the user

    void acceptDate()
    {
        cout << "Enter the Day : " << endl;
        cin >> day;
        cout << "Enter the month : " << endl;
        cin >> month;
        cout << "Enter the year : " << endl;
        cin >> year;
    }

    // Display the Date
    void displayDate()
    {
        cout << "Date : " << day << "/" << month << "/" << year << endl;
    }
    //   Check if the year is leap year or not
    bool isLeapYear()
    {
        if (year % 4 == 0)
        {
            if (year % 100 == 0)
            {
                if (year % 400 == 0)
                {
                    return true;
                }
                return false;
            }
            return true;
        }
        return false;
    }
};

// + Class Data Class

class Employee
{
public:
    int id;
    float salary;
    string department;
    Date joiningDate;

    Date d;

    // Parameterless Constructor
    Employee()
    {
        id = 1;
        salary = 10000;
        department = "IT";
        joiningDate = Date(1, 1, 1970);
    }

    // Parameterized Constructor
    Employee(int i, float s, string d, Date j)
    {

        id = i;
        salary = s;
        department = d;
        joiningDate = j;
    }

    // getter for id
    int get_id()
    {
        return id;
    }

    // getter for salary

    int get_salary()
    {
        return salary;
    }

    // getter for department

    string get_department()
    {
        return department;
    }

    // getter for joiningDate of Date obj

    Date get_joiningDate()
    {
        return joiningDate;
    }

    // Setter for id

    void set_id(int l_id)
    {

        id = l_id;
    }

    // setter for salary

    void set_salary(float sal)
    {
        salary = sal;
    }

    // setter for Department

    void set_department(string deptName)
    {
        department = deptName;
    }

    // setter for Set Joining Date

    void set_joiningDate(Date d)
    {
        joiningDate = d;
    }

    // Accept the data of employee from user

    void acceptEmployee()
    {
        cout << "Enter the Employee ID : " << endl;
        cin >> id;
        cout << "Enter the Employee Salary : " << endl;
        cin >> salary;
        cout << "Enter the Employee Department : " << endl;
        cin >> department;
        cout << "Enter the Employee Joining Date : " << endl;
        joiningDate.acceptDate();
    }

    // Display the Employee Data

    void displayEmployee()
    {
        cout << "Employee ID : " << id << endl;
        cout << "Employee Salary : " << salary << endl;
        cout << "Employee Department : " << department << endl;
        cout << "Employee Joining Date : " << endl;
        joiningDate.displayDate();
    }
};

class Person : public Date
{
public:
    string name;
    string address;
    Date birth_date;
    // Parameterless Constructor
    Person()
    {
        name = "Abhishek Bhopale";
        address = "Hadpsar";
        birth_date = Date(1, 1, 1970);
    }

    // Parameterized Constructor
    Person(string n, string a, Date b)
    {
        name = n;
        address = a;
        birth_date = b;
    }

    // getter for name
    string get_name()
    {
        return name;
    }

    // getter for address
    string get_address()
    {
        return address;
    }
    // getter for birth_date -> Type will be Date
    Date get_birth_date()
    {
        return birth_date;
    }
    // Setter for name
    void set_name(string n)
    {
        name = n;
    }
    // setter for address
    void set_address(string a)
    {
        address = a;
    }
    // setter for birth_date
    void set_birth_date(Date b)
    {
        birth_date = b;
    }

    // * Accept the Input birth date entered by the user

    // TODO:

    void acceptDate()
    {
        cout << "Enter the  BirthDay : " << endl;
        cin >> day;
        cout << "Enter the Birthmonth : " << endl;
        cin >> month;
        cout << "Enter the Birthyear : " << endl;
        cin >> year;
    }

    // ! Display the Birth Date

    void display_birthDate()
    {

        cout << "Birth Date : " << day << "/" << month << "/" << year << endl;
    }
};

int main()
{
    cout << "Qu 1 " << endl;
    Date d1;
    Employee e;

    e.acceptEmployee();
    e.displayEmployee();

    return 0;
}
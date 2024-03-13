/*

Q1. Write a class for Time and provide the functionality
Time()
Time(int h,int m,int s)
getHour()
getMinute()
getSeconds()
printTime()
setHour()
setMinute()
setSeconds()
In main create array of objects of Time.
Allocate the memory for the array and the object dynamically.

*/

#include <iostream>

using namespace std;

// Create class for Time

class Time
{
private:
    int hour;
    int minute;
    int seconds;

    //  Parameterless Constructor

public:
    Time()
    {
        hour = 0;
        minute = 0;
        seconds = 0;
    }

    //  Parameterized Constructor

    Time(int h, int m, int s)
    {
        hour = h;
        minute = m;
        seconds = s;
        Time(hour,minute,seconds);
    }
    // Getters and Setters

    int getHour()
    {
        return hour;
    }
    int getMinute()
    {
        return minute;
    }
    int getSeconds()
    {
        return seconds;
    }

    void setHour(int h)
    {
        hour = h;
    }
    void setMinute(int m)
    {
        minute = m;
    }
    void setSeconds(int s)
    {
        seconds = s;
    }

    // Print Time
    void printTime()
    {
        cout << "Time is: " << hour << ":" << minute << ":" << seconds << endl;
    }
};

int main()
{

    cout << "Qu 1." << endl;
    Time t;

    int size;

    cout<<"Enter the Size of the dynamic Arrays"<<endl;
    cin>>size;

    Time *timeArr = new Time[size];

   

    // Create objects dynmaically

    for (int i = 0; i < size; i++)
    {
        int h, m, s;
        cout << "Enter the Hour: ";
        cin >> h;
        cout << "Enter the Minute: ";
        cin >> m;
        cout << "Enter the Seconds: ";
        cin >> s;

        timeArr[i].setHour(h);
        timeArr[i].setMinute(m);
        timeArr[i].setSeconds(s);
    }

    // Print the Time of dynamic Arrays
    for (int i = 0; i < 3; i++)
    {
        /* code */
        cout << "Time : " << i + 1 << endl;
        timeArr[i].printTime();
        cout << endl;
    }

    delete[] timeArr;

    return 0;
}
/*
 Q1. Write a menu driven program for Date in a C. Declare a structure Date having data members
day, month, year. Implement the following functions.
void initDate(struct Date* ptrDate);
void printDateOnConsole(struct Date* ptrDate);
void acceptDateFromConsole(struct Date* ptrDate);


*/


#include <stdio.h>

// Create Structure named date
struct date
{
    int day;
    int month;
    int year;
};

// Function to initialize the date = Pass the Pointer of the date
// ptrDate = &d1

void initDate(struct date* ptrDate)
{   
   ptrDate->day=1; //
   ptrDate->month=1;
   ptrDate->year =2000;

printf("Your date is  %d-%d-%d \n ",ptrDate->day,ptrDate->month,ptrDate->year);
   

};

// Function to print the date on the console

void printDateOnConsole(struct date* ptrDate )
{
    printf("Your date is  %d-%d-%d \n ",ptrDate->day,ptrDate->month,ptrDate->year);
};

// Function to accept the date from the console

void acceptDateFromConsole(struct date* ptrDate)
{
    printf("Enter the Day\n");
    scanf("%d",&ptrDate->day);
    printf("Enter the Month \n");
    scanf("%d",&ptrDate->month);
    printf("Enter the Year \n");
    scanf("%d",&ptrDate->year);

};





int main(){
     struct date d1;
    int check=1,choice=0;

    initDate(&d1);
     while (check==1)
     
    {
        printf("Enter 1 to  Accept Date \n");
        printf("Enter 2 Display Date \n");
        printf("Enter Other Num Key to  Exit");
        scanf("%d",&choice);
       

        switch (choice)
        {
        case 1:
            acceptDateFromConsole(&d1);
            break;
        case 2:
            printDateOnConsole(&d1);
            break;

        default:
            check=0;
            break;
        }
    }
    
}
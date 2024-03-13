// Online C++ compiler to run C++ program online
/*
A shop sells book or tapes. The Book class holds id, title, author, and price; whereas Tape class
holds id, title, artist, and price. There is 5% discount on tapes, while 10% discount on books.
Assuming that each user purchase 3 products (either book or tape), calculate final bill. The program
should be menu driven and should not cause memory leakage.
Hint -> Create class Product and inherit into Book and Tape. Also array should be created of
Product*
*/

/*
    * Problem Occured
    1) we can't create object of the abstract class

*/

#include <iostream>

using namespace std;

// Product class

class Product
{

private:
    int id;
    string title;
    double price;

public:
    void acceptData()
    {
        cout << "Enter the Id " << endl;
        cin >> id;
        cout << "Enter the Title " << endl;
        cin >> title;
        cout << "Enter the Price  " << endl;
        cin >> price;
    }
    void displayData()
    {
        cout << "The id of the product is " << id << endl;
        cout << "Title of the Product is  " << title << endl;
        cout << "Price of the Product is  " << price << endl;
        
    }

    double calculateTotal()
    {
        return price;
    }

    double getPrice()
    {
        return price;
    }
};

// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

class Books : public Product
{

    string author;

public:
    void acceptData()
    {
        Product::acceptData();
        cout << "Enter author: ";
        cin >> author;
    }

    void displayData()
    {
        Product::displayData();
        cout << "Author of the book is " << author << endl;
    }

    double calculateTotal()
    {
        double discount = 0.10;
        double total = 0;
        total += getPrice() - (discount * getPrice());
        cout << "Total Price after discount is " << total << endl;

        return total;
    }
};

// ---------------------------------------------------------------------------------------------------------------------------

class Tapes : public Product
{

    string artist;

public:
    void acceptData()
    {
        Product::acceptData();
        cout << "Enter artist: ";
        cin >> artist;
    }

    void displayData()
    {
        Product::displayData();
        cout << "Artist of the tape is " << artist << endl;
    }

    double calculateTotal()
    {

        double discount = 0.05;
        double total;
        total += getPrice() - (discount * getPrice());
        cout << "Total Price after discount is " << total << endl;
        return total;
    }
};

int menu()
{
    int choice;
    cout << "1. Book" << endl;
    cout << "2. Tape" << endl;
    cout << "3.Total Bill" << endl;
    cout << "0. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    return choice;
}

// double calculateDiscount(double percentage,int booksTotal){
//     return percentage * booksTotal;
// }

int main()
{
    int choice, count = 0;
    int size = 3;
    int finalBill = 0;

    int bookstotal = 0;
    int tapestotal = 0;

    double finalPrice;

    // Created by Dynamic Arrays
    Product *products[size];

    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
            //  Create the object of the Book and stored it in dynamic arrays for that we check the size of the array
        case 1:
            if (count < size)
            {
                products[count] = new Books;
                products[count]->acceptData();
                products[count]->displayData();
                products[count]->calculateTotal();
                bookstotal = products[count]->calculateTotal();
                count++;
            }
            else
            {
                cout << "Your Cart is full Please remove to the item to add new item" << endl;
            }

            break;

        case 2:
            if (count < size)
            {
                products[count] = new Tapes;
                products[count]->acceptData();
                products[count]->displayData();
                tapestotal = products[count]->calculateTotal();
                count++;
            }
            else
            {
                cout << "Your Cart is full Please remove to the item to add new item" << endl;
            }
            break;

        case 3:

            finalPrice = bookstotal + tapestotal;

            cout << finalPrice << endl;
            break;

        default:
            break;
        }
    }
}

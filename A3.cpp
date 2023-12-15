// Imagine A Publishing Company Which Does Marketing For Book And Audio
// Cassette Versions. Create A Class Publication That Stores The Title (A String)
// And Price (Type Float) Of Publications. From This Class Derive Two Classes:
// Book Which Adds A Page Count (Type Int) And Tape Which Add’s a Playing
// Time In Minutes (Type Float).
// Write A Program That Instantiates The Book And Tape Class, Allows User To
// Enter Data And Displays the Data Members. If An Exception Is Caught, Replace
// All The Data Member Values With Zero values.

#include <iostream>
using namespace std;

// create a class publication to take Book name and pricce 
class Publication
{
public:
    string Book_Tittle;
    float Price;
// fucntion to take inputs from user 
    void getName()
    {
        cout << "Enter The Book Name :";
        cin.ignore();
        getline(cin, Book_Tittle);
        cout << "Enter Book Price :";
        cin >> Price;
    }
// fucntion to display the data 
    void displayName()
    {
        cout << "Book Title: " << Book_Tittle << endl;
        cout << "Book Price: " << Price << ".Rs" << endl;
    }
};
// class book which inherit the publication class and add book page count 
class Book : public Publication
{
public:
    int pageCount;
// function to get page count from user 
    void getPagecount()
    {
        cout << "Enter Pages of Book:";
        cin >> pageCount;
    }
// function to display the data to user 
    void displayPageCount()
    {

        cout << "Book Page Count: " << pageCount << " Pages" << endl;
    }
};
// class tape which inherit the publication class and add book plying time 
class Tape : public Publication
{
public:
    Book b;
    float PlayingTime;
// function to get playing time from user 
    void getPlayingTime()
    {
        cout << "Enter Playing time of book:";
        cin >> PlayingTime;
    }
// function to display data 
    void display()
    {

        cout << "Playing Time is : " << PlayingTime << " min" << endl;
    }
};

int main()
{

    Tape t;
    Publication p;
    Book b;

    int choice = 0;

    do
    {
        cout << "-----------Welcome to XYZ Publication-------------------" << endl;
        cout << "1.Add Book Details" << endl;
        cout << "2.Display Book Details" << endl;
        cout << "3.Display Book Name " << endl;
        cout << "4.Display Book Price " << endl;
        cout << "5.Display Book Page Count " << endl;
        cout << "6.Display Book Playing Time" << endl;
        cout << "7.EXIT" << endl;
        cout << "Enter Your Choice:";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "--------------Add Book Deatails -----------------" << endl;
            p.getName();
            b.getPagecount();
            t.getPlayingTime();
            break;
        case 2:
            cout << "------------ Book Information---------------" << endl;
            p.displayName();
            b.displayPageCount();
            t.display();
            break;
        case 3:
            cout << "----------Book Title----------------" << endl;
            cout << "Book Title:" << p.Book_Tittle << endl;
            break;
        case 4:
            cout << "----------Book Price----------------" << endl;
            cout << "Book Price :" << p.Price << endl;
            break;
        case 5:
            cout << "----------Book Page Cont----------------" << endl;
            cout << "Book Page Count :" << b.pageCount << " Pages" << endl;
            break;
        case 6:
            cout << "----------Book Playing Time----------------" << endl;
            cout << "Book Playing Time :" << t.PlayingTime << " min" << endl;
            break;
        case 7:
            choice = 7;
            break;
        default:
            cout << "Invalid Number!";
        }

    } while (choice != 7);
}
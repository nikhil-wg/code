#include <iostream>
#include <string>

 using namespace std;
class publication
{
private:
    string title;
    float price;

public:
    void add()
    {
        cout << "\n Enter publication information: ";
        cout << "\n Enter title of publication: ";
        cin.ignore(); // to clear input buffer
        getline(cin, title);
        cout << "\n Enter the price of publication: ";
        cin >> price;
    }
    void display()
    {
        cout << "\n--------------------------------------------";
        cout << "\n Title of Publication : " << title;
        cout << "\n Publication Price : " << price;
    }
}; // Publication class ends
class book : public publication
{
private:
    int page_count;

public:
    void add_book()
    {
        try
        {
            add(); // call function of base class
            cout << "\n Enter page count of book: ";
            cin >> page_count;
            if (page_count <= 0)
                throw page_count;
        }
        catch (...)
        {
            cout << "\n Invalid page count!!! \n";
            page_count = 0;
        } // end of catch
    }     // end of add_book
    void display_book()
    {
        display(); // call function of base class
        cout << "\n Page Count : " << page_count;
        cout << "\n----------------------------";
    }
}; // book class ends
class tape : public publication
{
private:
    float play_time;

public:
    void add_tape()
    {
        try
        {
            add(); // call function of base class
            cout << "\n Enter play duration of tape: ";
            cin >> play_time;
            if (play_time <= 0)
                throw play_time;
        }
        catch (...)
        {
            cout << "\n Invalid play time... \n";
            play_time = 0;
        } // end of catch
    }     // end of add_tape
    void display_tape()
    {
        display(); // call function of base class
        cout << "\n play time: " << play_time << "min";
        cout << "\n------------------------------";
    }
}; // Tape class ends
int main()
{
    book b1[10];
    tape t1[10];
    int ch = 0, b_count = 0, t_count = 0;
    do
    {
        cout << "\n Publication Details: ";
        cout << "\n 1. Add book details: ";
        cout << "\n 2. Add tape details: ";
        cout << "\n 3. Display book details: ";
        cout << "\n 4. Display tape details: ";
        cout << "\n 5. Exit";
        cout << "\n Enter choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1: // Add info to book database
            b1[b_count].add_book();
            b_count++;
            break;
        case 2: // add info to tape database
            t1[t_count].add_tape();
            t_count++;
            break;
        case 3:
            cout << "\n Publication information system(Books)";
            for (int j = 0; j < b_count; j++)
            {
                b1[j].display_book();
            }
            break;
        case 4:
            cout << "\n Publication information system(Tapes)";
            for (int j = 0; j < t_count; j++)
            {
                t1[j].display_tape();
            }
            break;
        case 5:
            exit(0); // successful exit of program
        }
    } while (ch != 5); // end of while
    return 0;
}
// Develop A Program In C++ To Create A Database Of Student’s Information
// System Containing The following Information:
//  Name, Roll Number, Class, Division, Date Of Birth, Blood Group, Contact
// Address, Telephone Number, Driving License No.
// And Other. Construct The Database With suitable Member Functions. Make Use
// Of Constructor, Default Constructor, Copy Constructor, Destructor, Static
// Member Functions, Friend Class, This Pointer, Inline Code And Dynamic
// Memory allocation Operators-New And Delete As Well As Exception Handling.

#include <iostream>
#include <string>
using namespace std;

class Student
{

public:
    string name, Class, division, Dob, Address, bloodGroup;
    int roll, telephonNumber;

    // Friend Class 
    friend class show;

    void addData()
    {
        cout << "Enter Student Name :";
        cin >> name;
        cout << "Enter Roll Number:";
        cin >> roll;
        cout << "Enter Class (SE/TE/BE):";
        cin >> Class;
        cout << "Enter Division (A/B/C/D):";
        cin >> division;
        cout << "Enter Contact Number:";
        cin >> telephonNumber;
        cout << "Enter Date of Birth:";
        cin >> Dob;
        cout << "Enter Address:";
        cin >> Address;
        cout << "Enter BLood Group :";
        cin >> bloodGroup;
    }

    
};

class show
{
public:
    Student s;
    int choice ;
//  Static member funtions 
    static void displayData(Student &s)
    {
        cout << "Name :" << s.name<<endl;
        cout << "Roll No :" << s.roll<<endl;
        cout << "Class :" << s.Class<<endl;
        cout << "Division :" << s.division<<endl;
        cout << "Contact No :" << s.telephonNumber<<endl;
        cout << "Date of Birth :" << s.Dob<<endl;
        cout << "Blood Group :" << s.bloodGroup<<endl;
        cout << "Address  :" << s.Address<<endl;
    }
       
       void menu(){
        cout<<"--------------- Menu ------------------"<<endl;
        cout << "1.Add Information" << endl;
        cout << "3.Faculty wise " << endl;
        cout << "2.Display Information" << endl;
        cout << "4.EXIT" << endl;
            
       }

    show()
    // Default Constructor 
    {

        int choice = 0;
        do
        {
            menu();
            cout << "Your choice" << endl;
            cin >> choice;

       

        switch (choice)
        {
        case 1:
            s.addData();
            menu();
            break;
        case 2:
            displayData(s);
            menu();
            break;
        case 4:
             choice = 4;
             break;    

        }
         } while (choice != 4);
    }
};

int main(){
 Student s ;
 show d ;


    return 0;
}
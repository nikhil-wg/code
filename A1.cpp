// Implement a class Complex which represents the Complex Number data type.
// Implement the following operations:
// 1. A constructor (including a default constructor which creates the complex
// number 0+0i).
// 2. Overloaded operator+ to add two complex numbers.
// 3. Overloaded operator* to multiply two complex numbers.
// 4. Overloaded << and >> to print and read Complex Numbers.

#include <iostream>
using namespace std;

// create a class complex 
class Complex
{

// declare the varaibles 
public:
    int real, imag;
    // using default constructor initialize 
    Complex()
    {
        real = 0;
        imag = 0;
    }
    // overide the >> operator to take input from user 

    friend istream &operator>>(istream &in, Complex &c)
    {
        cout << "Enter the real part:";
        in >> c.real;
        cout << "Enter the imaginary part:";
        in >> c.imag;

        return in;
    }
//   overide the << operator to display the complex number 
    friend ostream &operator<<(ostream &os, Complex &c)
    {
        os << c.real << "+" << c.imag << "i";
        return os;
    }
// overide the + operator to sum the two complex numbers 
   Complex operator+(Complex bb)
    {
        Complex cc;
        cc.real = real + bb.real;
        cc.imag = imag + bb.imag;

        return cc;
    }
    // overide the * operator to multiply the complex number 
    Complex operator*(Complex bb)
    {
        Complex cc;
        cc.real = real * bb.real;
        cc.imag = imag * bb.imag;

        return cc;
    }
};

int main()
{
    Complex a, b, c;
    cout << "Default Constructor" << endl;
    cout << a << endl;
    cout << "Enter for First number:" << endl;
    cin >> a;
    cout << "Enter for second number:" << endl;
    cin >> b;

    cout << "First Number is :";
    cout << a << endl;

    cout << "Second Number is :";
    cout << b << endl;
    c = a + b;
    cout << "c1+c2:" << c << endl;
    c = a * b;
    cout << "C1*C2L" << c;
}
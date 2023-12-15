// Write a C++ program that creates an output file, writes information to
// it, closes the file and open again as an input file and read the information
// from the file.

#include <iostream>
// include <fstream> to use ofstream and ifstream class
#include <fstream>

using namespace std;

int main()
{
//   declaring the filename 
    const string filename = "demo.txt";
    // message that is written to the file 
    string message = "This information being written to the file ";

    //  writing to the file using ofstream constructor
    ofstream write(filename);
    if (!write.is_open())
    {
        cerr << "Error: could not open file " << filename << " For Writing" << endl;
        return 1;
    }
    write << message;
    write.close();

    // opening the file for reading this information
    string msg;
    ifstream read(filename);
    if (!read.is_open())
    {
        cerr << "Error:could not open the file " << filename << " for reading the infromation" << endl;
    }
    read >> msg;
    getline(read, msg);
    cout << msg;
}
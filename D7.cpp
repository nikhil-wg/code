// Write a program in C++ to use map associative container. The keys will be the
// names of states and the values will be the populations of the states. When the
// program runs, the user is prompted to type the name of a state. The program
// then looks in the map, using the state name as an index and returns the
// population of the state.

#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, float> States;
    string state;
    int population;

    States["Maharashtra"] = 130.80;
    States["UttarPradesh"] = 243.99;
    States["Bihar"] = 128.54;
    States["WestBengal"] = 104.29;
    States["Rajasthan"] = 80.24;

    cout << "Enter The State Name : ";
    cin >> state;

    if (States.count(state) == 1)
    {
        cout << state << " Population is " << States[state] << " millions";
    }
    else
    {
        cout << "OOps! Not Found";
    }

    return 0;
}
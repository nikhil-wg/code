#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

struct PersonRecord {
  string name;
  string dob;
  int phone_number;
};

vector<PersonRecord> records;

void InsertData() {
  PersonRecord record;
  cout << "Enter Name: ";
  cin >> record.name;
  cout << "Enter Date of Birth: ";
  cin >> record.dob;
  cout << "Enter Phone Number: ";
  cin >> record.phone_number;
  records.push_back(record);
}

void Display() {
  for (const PersonRecord& record : records) {
    cout << "Name: " << record.name << endl;
    cout << "DOB: " << record.dob << endl;
    cout << "Phone Number: " << record.phone_number << endl << endl;
  }
}

void Search() {
  string name;
  cout << "Enter Name to search: ";
  cin >> name;
  auto it = std::find_if(records.begin(), records.end(), [&name](const PersonRecord& record) { return record.name == name; });
  if (it != records.end()) {
    cout << "Record found!" << endl;
    cout << "Name: " << it->name << endl;
    cout << "DOB: " << it->dob << endl;
    cout << "Phone Number: " << it->dob << endl;
  } else {
    cout << "Record not found!" << endl;
  }
}

void Sort() {
  // Select sorting criteria (e.g., name, dob)
  int choice;
  cout << "Sort by: " << endl;
  cout << "1. Name (ascending)" << endl;
  // Add options for other sorting criteria
  cin >> choice;
  switch (choice) {
    case 1:
      std::sort(records.begin(), records.end(), [](const PersonRecord& a, const PersonRecord& b) { return a.name < b.name; });
      break;
    // Add cases for other sorting criteria with appropriate comparison functions
  }
  cout << "Records sorted!" << endl;
}

int main() {
  int choice = 0;
  do {
    cout << endl << "Menu: " << endl;
    cout << "1. Insert Data" << endl;
    cout << "2. Display Data" << endl;
    cout << "3. Search Data" << endl;
    cout << "4. Sort Data" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice) {
      case 1:
        InsertData();
        break;
      case 2:
        Display();
        break;
      case 3:
        Search();
        break;
      case 4:
        Sort();
        break;
      case 5:
        cout << "Exiting..." << endl;
        break;
      default:
        cout << "Invalid choice!" << endl;
    }
  } while (choice != 5);
  return 0;
}

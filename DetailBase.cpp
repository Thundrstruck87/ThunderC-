/* This program is a customer database (v1.0) to be used for automotive detailing. Program is still being worked on and updated.
*/

#include <iostream>
using namespace std;

// variables for int main() //
int option;
//-----------//



int main()
{
  cout << "Welcome to detailbase 1.0 \n";
  cout << "Please select an option. \n\n";

  cout << "1. Add New Customer \n";
  cout << "2. Add New Vehicle \n";
  cout << "3. Look Up Customer \n";
  cout << "4. Create A Detail Entry\n\n";

  cin >> option;
}

void NewCustomer()
{
  if(option == 1)
  {
    string FirstName;
    string LastName;
    string vehicle;
    string anothercustomer;
    int year;

    cout << "First Name: ";
    cin >> FirstName;
    cout << "Last Name: ";
    cin >> LastName;
    cout << "Vehicle (example: Dodge Charger RT): ";
    cin >> vehicle;
    cout << "Year: ";
    cin >> year;
    
    cout << "\n\n Thanks! " << FirstName << " " << LastName << " has been added!";
    cout << "\n\n Would you like to add another? (y/n): ";
    cin >> anothercustomer;

    if (anothercustomer == "y")
    NewCustomer();

    
  }
}
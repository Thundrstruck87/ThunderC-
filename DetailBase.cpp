/* This program is a customer database (v1.0) to be used for automotive detailing. Program is still being worked on and updated.
*/

#include <iostream>
using namespace std;

// variables //

int option;
string FirstName;
string LastName;
string Vehicle;
string anothercustomer;
string anothervehicle;
string anotherlookup;


// Function Declarations //
void NewCustomer();
void NewVehicle(); 
void LookUp(); 
int Year;

// --- Main Code --- //

int main()
{
  cout << "\nWelcome to detailbase 1.0 \n";
  cout << "Please select an option. \n\n";

  cout << "1. Add New Customer \n";
  cout << "2. Add New Vehicle \n";
  cout << "3. Look Up Customer \n";
  cout << "4. Create A Detail Entry\n\n";

  cin >> option;

  if(option == 1)
  {
    NewCustomer();
  }  
  else if(option == 2)
  {
    NewVehicle();
  }
  else if(option == 3)
  {
    LookUp();
  }
}

void NewCustomer()
{
  cout << "\nFirst Name: ";
  cin >> FirstName;
  cout << "Last Name: ";
  cin >> LastName;
  cout << "Vehicle (example: Dodge Charger RT): ";
  cin >> Vehicle;
  cout << "Year: ";
  cin >> Year;
    
  cout << "\n\n Thanks! " << FirstName << " " << LastName << " has been added!";
  cout << "\n\n Would you like to add another? (yes/no): ";
  cin >> anothercustomer;

  if(anothercustomer == "yes")
  {
    NewCustomer();
  }
  else if(anothercustomer == "no")
  {
    main();
  }
}

void NewVehicle()
{
 cout << "Who is this for? (first name) \n";
 cin >> FirstName;
 cout << "Last name: ";
 cin >> LastName;
 cout << "Vehicle (example: Dodge Charger RT): ";
 cin >> Vehicle;
 cout << "Year?: ";
 cin >> Year;
 cout << "Thanks! " << Vehicle << "for " << FirstName << LastName << "has been added!";
 cout << "\nWould you like to add another? ";
 cin >> anothervehicle;

 if(anothervehicle == "y")
 {
   NewVehicle();
 }
 else if(anothervehicle == "n")
 {
   main();
 }
}

void LookUp()
{
  cout << "What is the customers first name? ";
  cin >> FirstName;
  cout << "What is their last name? ";
  cin >> LastName;
  cout << "Thanks, let me pull up their info: ";
  cout << FirstName << LastName << Year << Vehicle;
  cout << "Would you like to pull up another? ";
  cin >> anotherlookup;
  if (anotherlookup == "y")
  {
    LookUp();
  }
  else if (anotherlookup == "n")
  {
    main();
  }
}
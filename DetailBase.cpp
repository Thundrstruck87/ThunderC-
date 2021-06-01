/* This program is a customer database (v1.0) to be used for automotive detailing. Program is still being worked on and updated.
*/

#include <iostream>
using namespace std;

// variables //

int option;
string FirstName;
string LastName;
string Vehicle;
float Price;
float Labor;
string DetailWork;
string anothercustomer;
string anothervehicle;
string anotherlookup;



// Function Declarations //
void NewCustomer();
void NewVehicle(); 
void LookUp(); 
int Year;
void NewEntry();

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
 cout << "\nWould you like to add another? (yes/no)";
 cin >> anothervehicle;

 if(anothervehicle == "yes")
 {
   NewVehicle();
 }
 else if(anothervehicle == "no")
 {
   main();
 }
 else
 {
   cout << "Sorry, please try again!";
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
  cout << "Would you like to pull up another? (yes/no)";
  cin >> anotherlookup;
  if (anotherlookup == "yes")
  {
    LookUp();
  }
  else if (anotherlookup == "no")
  {
    main();
  }
}

void NewEntry()
{
  cout << "You will be creating a detailing entry";
  cout << "\n\nWho is this for? (first name): ";
  cin >> FirstName;
  cout << "\n\nTheir last name please: ";
  cin >> LastName;
  cout << "\n\nWhich Vehicle is this for? ";
  cin >> Vehicle;
  cout << "What is the year? ";
  cin >> Year;
  cout << "\n\nWork performed: ";
  cin >> DetailWork;
  cout << "\nApprox price for job: ";
  cin >> Price;
  cout << "\nHours of work: ";
  cin >> Labor;
}
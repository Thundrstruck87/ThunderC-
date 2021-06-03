/* This program is a customer database (v1.0) to be used for automotive detailing. Program is still being worked on and updated.
*/

#include <iostream>
#include <string>
using namespace std;

// variables //
int option;
float Price;
float Labor;
string FirstName;
string LastName;
string Vehicle;
string DetailWork;
string anothercustomer;
string anothervehicle;
string anotherlookup;
string Year; //Not used
string tmpStrYear; // This replaces the int Year variable //


// Conversions //

// Function Declarations //
void NewCustomer();
void NewVehicle();
void LookUp();
void NewEntry();

// --- Main Code --- //

int main()
{
    system("clear");
    cout << "\nWelcome to detailbase 1.0";
    cout << "\nPlease select an option.\n";

    cout << "\n1. Add New Customer";
    cout << "\n2. Add New Vehicle";
    cout << "\n3. Look Up Customer";
    cout << "\n4. Create A Detail Entry";
    cout << "\n5. Exit\n\n";

    cin >> option;

    if (option == 1)
    {
      NewCustomer();
    }
    else if (option == 2)
    {
      NewVehicle();
    }
    else if (option == 3)
    {
      LookUp();
    }
    else if (option == 4)
      NewEntry();
    else if (option == 5)
    {
      exit(-1); //exits program
    }
}

void NewCustomer()
{
    cout << "\nFirst Name: ";
    cin >> FirstName;
    cout << "Last Name: ";
    cin >> LastName;
    cout << "Vehicle (example: Dodge Charger RT): ";
    cin.ignore();
    getline(cin, Vehicle);
    //cin >> Vehicle;
    cout << "Year: ";
    cin >> tmpStrYear;
    // Year = stoi(tmpStrYear);
    cout << "Thanks! " << Vehicle << " for " << FirstName << " " << LastName << " has been added!";
    cout << "\nWould you like to add another? (yes/no): ";
    cin >> anothercustomer;

    if (anothercustomer == "yes")
    {
        NewCustomer();
    }
    else if (anothercustomer == "no")
    {
        main();
    }
    else
    {
      cout << "Please enter yes or no to continue";
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

    if (anothervehicle == "yes")
    {
        NewVehicle();
    }
    else if (anothervehicle == "no")
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
    cout << "Their last name please: ";
    cin >> LastName;
    cout << "Which Vehicle is this for? ";
    cin >> Vehicle;
    cout << "What is the year? ";
    cin >> tmpStrYear;
    cout << "Work performed: 
    //cin >> DetailWork;
    cout << "Approx price for job: ";
    cin >> Price;
    cout << "Hours of work: ";
    cin >> Labor;
    cout << "The new detailing record has been added!";
}
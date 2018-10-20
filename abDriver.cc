#include <string>
#include <iostream>
#include "Person.h"
#include "Person.cc"
//#include "adressbook.h"

//assign person to number that is a string array
using namespace std;

void person();

int main() {
//	AddressBook myContactBook;
	string me;
  cout << "Whats your name?: ";
  cin >> me;
  cout << endl << len(me);
  person();
// Using Menu to perform all the operations on myContactBook
	
return 0;
}

void person()
{
  Person profile;
  //string Profile[5];
  string f, l, p, s, c, z;
  cout << "Add Contact: ";
  cout << "Firstname: ";
  cin >> f;
  cout << "Lastname: ";
  cin >> l;
  cout << "Phone: ";
  cin >> p;
  cout << "Street: ";
  cin >> s;
  cout << "City: ";
  cin >> c;
  cout << "Zip: ";
  cin >> z;
  profile.setFirstname(f);
  profile.setLastname(l);
  profile.setPhone(p);
  profile.setStreet(s);
  profile.setCity(c);
  profile.setZip(z);
  
}



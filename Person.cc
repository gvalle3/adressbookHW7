/*
person.h function defines
*/
#include "Person.h"
#include <iostream>
#include <cstdlib>

using namespace std;
/*
public: 
  // Methods getters & setters that work on the private variables
  void setFirstname(string); //string
  void setLastname(string); //string
  void setPhone(int); // int
  void setStreet(string); //string
  void setCity(string); //string
  void setZip(int); //int
  
  string getFirstname() const;
  string getLastname() const;
  int getPhone() const;
  string getStreet() const;
  string getCity() const;
  int getZip() const;
*/
//Set functions
void Person::setFirstname(string f)
{
  if ( f != "null")
    firstname = f;
  else {
    cout << "Invalid first name\n";
    exit(EXIT_FAILURE);
  }
}
void Person::setLastname(string l)
{
  if (l != "null")
    lastname = l;
  else {
    cout << "Invalid last name\n";
    exit(EXIT_FAILURE);
  }
}
void Person::setPhone(string p)
{
  if (p > 0)
    phone = p;
  else {
    cout << "Invalid phone\n";
    exit(EXIT_FAILURE);
  }
}
void Person::setStreet(string s)
{
  if (s != "null")
    street = s;
  else {
    cout << "Invalid street\n";
    exit(EXIT_FAILURE);
  }
}
void Person::setCity(string c)
{
  if (c != "null")
    city = c;
  else {
    cout << "Invalid city\n";
    exit(EXIT_FAILURE);
  }
}
void Person::setZip(string z)
{
  if (z > 0)
    zip = z;
  else {
    cout << "Invalid zip\n";
    exit(EXIT_FAILURE);
  }
}
//get functions
string Person::getFirstname() const
{
  return firstname;
}
string Person::getLastname() const
{
  return lastname;
}
string Person::getPhone() const
{
  return phone;
}
string Person::getStreet() const
{
  return street;
}
string Person::getCity() const
{
  return city;
}
string Person::getZip() const
{
  return zip
}
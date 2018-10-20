class Person {
private:
   string firstname;
   string lastname;
   string phone;
   string street;
	 string city;
   string zip;
public: 
// ADD: Methods getters & setters that work on the private variables
  void setFirstname(string); //string
  void setLastname(string); //string
  void setPhone(string); // int
  void setStreet(string); //string
  void setCity(string); //string
  void setZip(string); //int
  
  string getFirstname() const;
  string getLastname() const;
  string getPhone() const;
  string getStreet() const;
  string getCity() const;
  string getZip() const;
  

}


class AddressBook {

	private:
		// Use a Person Array
	public:
		int count(); //count all the people in the address book

		void addPerson(string firstname, string lastname, string phone, string street, string city, string zip); // add a new person to the address book
	
		void editPerson(string firstname, string lastname, string phone, string street, string city, string zip);

		bool removePerson(string firstname); // remove Person by matching firstName
		bool removePerson(string firstname, string lastname); // remove Person by matching first and last name

		void sortByLastName(); //sort alphabetically by last name and print
		
}

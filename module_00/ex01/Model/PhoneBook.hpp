//
// Created by Cristie Dell on 8/25/22.
//

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook {
private:
	Contact contact_list[8];
	int cur_index;
	int cur_capacity;

public:
	// Constructor/Destructor
	PhoneBook();
	~PhoneBook();

	// Getters
	int getCurrentIndex() const;
	int getCurrentCapacity() const;
	const Contact &getContact(int index) const;


	// Setters
	void addContact(const Contact &contact);
};


#endif //PHONEBOOK_HPP

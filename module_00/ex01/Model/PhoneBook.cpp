//
// Created by Cristie Dell on 8/25/22.
//

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	this->cur_index = 0;
	this->cur_capacity = 0;
}
PhoneBook::~PhoneBook() {}

int PhoneBook::getCurrentIndex() const {
	return this->cur_index;
}

int PhoneBook::getCurrentCapacity() const {
	return this->cur_capacity;
}

const Contact &PhoneBook::getContact(int index) const {
	return this->contact_list[index];
}

void PhoneBook::addContact(const Contact &contact) {
	if (this->cur_index >= 8)
		this->cur_index = 0;
	Contact& contact_ref = contact_list[this->cur_index];
	contact_ref.setFirstName(contact.getFirstName());
	contact_ref.setLastName(contact.getLastName());
	contact_ref.setNickname(contact.getNickName());
	contact_ref.setPhoneNumber(contact.getPhoneNumber());
	contact_ref.setSecret(contact.getSecret());
	this->cur_index++;
	if (cur_capacity < 8)
		cur_capacity++;
}

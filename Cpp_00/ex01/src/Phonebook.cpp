#include "../includes/Phonebook.hpp"

PhoneBook::PhoneBook() {
	this->contact_size = 0;
	this->oldest_contact = 0;
}

bool PhoneBook::empty() {
	return (contact_size == 0);
}

void PhoneBook::addContact(Contact contact) {

	if (contact_size < 8)
		contacts[contact_size++] = contact;

	else {
		if (oldest_contact == contact_size)
			oldest_contact = 0;
		contacts[oldest_contact++] = contact;
	}
}

int PhoneBook::getContactSize() {
	return (contact_size);
}

Contact PhoneBook::getContact(int index) {
	return (contacts[index]);
}

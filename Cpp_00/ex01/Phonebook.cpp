#include "phonebook.hpp"

bool PhoneBook::Empty() {
	return (ContactNum == 0);
}

void PhoneBook::AddContact(Contact contact) {
	if (ContactNum < 8)
		contacts[ContactNum++] = contact;
	else
		std::cout << "PhoneBook is full" << std::endl;
}

Contact PhoneBook::getContact(int index) {
	return (contacts[index]);
}


void	PhoneBook::SearchContact(void) {
	int index;
	std::string input;
	int n;

	if (Empty()) {
		std::cout << "PhoneBook is empty" << std::endl;
		return ;
	}

	std::cout << LINE << std::endl;
	std::cout << TABLE << std::endl;
	std::cout << LINE << std::endl;


}
#include "PhoneBook.hpp"

void	add(PhoneBook *phonebook)
{
	Contact	contact;

	contact.get_info();
	(*phonebook).AddContact(contact);
}

int main()
{
	PhoneBook	phonebook;
	std::string input;

	while (true)
	{
		std::cout << "Enter a string: ";
		std::getline(std::cin, input);
		if (input == "ADD\n")
			add(&phonebook);
		else if (input.empty())
			continue ;
		else if (input == "Exit\n" || input == "EXIT\n")
			exit(0);
		else if (input == "SEARCH\n")
			phonebook.SearchContact();
		else
			std::cout << "-- Invalid input --" << std::endl;
	}
}

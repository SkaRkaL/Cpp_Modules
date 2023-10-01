#include "includes/Phonebook.hpp"

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

	while (1)
	{
		std::cout << "Type ADD, SEARCH or EXIT: ";
		std::getline(std::cin, input);

		if (input[0] == '\0')
		{
			std::cout << CNTR_D;
			exit(1);
		}
		else if (input == "ADD" || input == "add")
			add(&phonebook);
		else if (input.empty())
			continue ;
		else if (input == "EXIT" || input == "exit" || std::cin.eof())
		{
			std::cout << "Thank you for using our awsome PhoneBook!" << std::endl;
			break;
		}
		else if (input == "SEARCH" || input == "search")
			phonebook.SearchContact();
		else
			std::cout << "-- Invalid input --" << std::endl;
	}
}

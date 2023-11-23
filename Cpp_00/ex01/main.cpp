#include "includes/Phonebook.hpp"

void	add(PhoneBook *phonebook)
{
	Contact	contact;

	contact.get_info();
	(*phonebook).addContact(contact);
}

std::string customize(std::string str)
{
	std::string space = "          ";

	if (str.length() < 10)
	{
		str.append(space, 0, 10 - str.length());
		return (str);
	}
	if (str.length() == 10)
		return (str);
	if (str.length() > 10)
	{
		str.resize(9);
		str.append(".");
	}
	return (str);
}

int main()
{
	PhoneBook	phonebook;
	std::string input;
	int index;

	while (1)
	{
		std::cout << "Type ADD, SEARCH or EXIT: ";

		std::getline(std::cin, input);

		if (std::cin.eof()) {
			
			std::cout << CNTR_D;
			puts("H");
			exit(1);
		}

		else if (input == "ADD" || input == "add")
			add(&phonebook);

		else if (input.empty())
			continue ;

		else if (input == "EXIT" || input == "exit" || std::cin.eof()) {

			std::cout << "Thank you for using our awsome PhoneBook!" << std::endl;
			break;
		}
		else if (input == "SEARCH" || input == "search") {

			if (phonebook.empty()) {
				std::cout << "PhoneBook is empty" << std::endl;
				continue;
			}

			std::cout << LINE << std::endl;
			std::cout << TABLE << std::endl;
			std::cout << LINE << std::endl;

			for (int i = 0; i < phonebook.getContactSize(); i++) {

				Contact contact = phonebook.getContact(i);
				std::cout << "|  ";
				std::cout << i + 1 << "  |";
				std::cout << customize(contact.getFirstname()) << "|";
				std::cout << customize(contact.getLastname()) << "|";
				std::cout << customize(contact.getNickname()) << "|" << std::endl;
				std::cout << LINE << std::endl;
			}
			
			std::cout << "Enter index: ";

			if (!(std::cin >> index)) {

				if (std::cin.eof())
					exit(0);
				std::cout << "Invalid input" << std::endl;
				std::cin.clear();
				std::cin.ignore(INT_MAX, '\n');
				continue ;
			}
			
			if (index < 1 || index > phonebook.getContactSize()) {

				if (index > phonebook.getContactSize() || index < 1)
					std::cout << "Index out of range" << std::endl;
				else
					std::cout << "Invalid index" << std::endl;
				std::cin.clear();
				std::cin.ignore(INT_MAX, '\n');
				continue ;
			}

			Contact contact = phonebook.getContact(index - 1);

			std::cout << "Index [" << index << "] as u order :" << std::endl;
			std::cout << "First name	: " << contact.getFirstname() << std::endl;
			std::cout << "Last name	: " << contact.getLastname() << std::endl;
			std::cout << "Nickname	: " << contact.getNickname() << std::endl;
			std::cout << "Phone number	: " << contact.getPhonenumber() << std::endl;
			std::cout << "Darkest_Secret  : " << contact.getDarkestsecret() << std::endl;

			std::cin.clear();
			std::cin.ignore(INT_MAX, '\n');
		}
		else
			std::cout << "-- Invalid input --" << std::endl;
	}
}

#include "../includes/contact.hpp"

std::string	Contact::getFirstname() {
	return (First_name);
}

std::string	Contact::getLastname() {
	return (Last_name);
}

std::string	Contact::getNickname() {
	return (Nick_name);
}

std::string	Contact::getDarkestsecret() {
	return (DarkestSecret);
}

std::string	Contact::getPhonenumber() {
	return (Phonenumber);
}

std::string	prompt(std::string str)
{
	std::string input;

	while (1) {
		std::cout << str;
		std::getline(std::cin, input);
		
		if (std::cin.eof())
			exit(0);

		if (!input.empty())
			return (input);
	}
}

void	Contact::get_info() {
	First_name = prompt("[ First_Name ] : ");
	Last_name = prompt("[ Last_Name ] : ");
	Nick_name = prompt("[ Nick_Name ] : ");
	Phonenumber = prompt("[ Phone_Number ] : ");
	DarkestSecret = prompt("[ Darkest_Secret ] : ");
}
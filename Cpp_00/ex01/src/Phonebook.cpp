#include "../includes/Phonebook.hpp"

bool PhoneBook::Empty()
{
	return (ContactNum == 0);
}

void PhoneBook::AddContact(Contact contact)
{
	if (ContactNum < 8)
		contacts[ContactNum++] = contact;
	else
		std::cout << "PhoneBook is full" << std::endl;
}

Contact PhoneBook::getContact(int index)
{
	return (contacts[index]);
}

std::string customize(std::string str)
{
	std::string space = "          ";

	if (str.length() < 12)
	{
		str.append(space, 0, 12 - str.length());
		return (str);
	}
	if (str.length() == 10)
		return (str);
	if (str.length() > 10)
	{
		str.resize(9);
		str.append("...");
	}
	return (str);
}

void	PhoneBook::SearchContact(void)
{
	int index;
	std::string input;
	int n;

	n = (ContactNum < 8) ? ContactNum : 8;
	if (Empty())
	{
		std::cout << "PhoneBook is empty" << std::endl;
		return ;
	}

	std::cout << LINE << std::endl;
	std::cout << TABLE << std::endl;
	std::cout << LINE << std::endl;

	for (int i = 0; i < n; i++)
	{
		std::cout << "|  ";
		std::cout << i + 1 << "  |";
		std::cout << customize(contacts[i].getFirstname()) << "|";
		std::cout << customize(contacts[i].getLastname()) << "|";
		std::cout << customize(contacts[i].getNickname()) << "|" << std::endl;
		std::cout << LINE << std::endl;
	}

	std::cout << "Enter index: ";

	if (!(std::cin >> index))
	{
		if (std::cin.eof())
			exit(0);
		std::cout << "Invalid input" << std::endl;
		std::cin.clear();
		std::cin.ignore(INT_MAX, '\n');
		return ;
	}

	if (index < 1 || index > 8 || index > ContactNum)
	{
		std::cout << "Invalid index\nIndex out of range" << std::endl;
		std::cin.clear();
		std::cin.ignore(INT_MAX, '\n');
		return ;
	}
	std::cout << "Index [" << index << "] as u order :" << std::endl;
	std::cout << "First name	: " << contacts[index - 1].getFirstname() << std::endl;
	std::cout << "Last name	: " << contacts[index - 1].getLastname() << std::endl;
	std::cout << "Nickname	: " << contacts[index - 1].getNickname() << std::endl;
	std::cout << "Phone number	: " << contacts[index - 1].getPhonenumber() << std::endl;
	std::cout << "Darkest_Secret  : " << contacts[index - 1].getDarkestsecret() << std::endl;

	std::cin.clear();
	std::cin.ignore(INT_MAX, '\n');
}
#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

# define LINE "- - - - - - - - - - - - - - - - - - - - - - -"
# define TABLE "| Index | First_name | Last_name | Nickname |"
# define TABLE2 "| Phone number | Darkest secret |"

class Contact {
	private :
		std::string First_name;
		std::string Last_name;
		std::string Nick_name;
		std::string DarkestSecret;
		std::string	Phonenumber;

	public :
		void get_info();
		std::string	getFirstname();
		std::string getLastname();
		std::string getNickname();
		std::string getDarkestsecret();
		std::string getPhonenumber();
};

#endif

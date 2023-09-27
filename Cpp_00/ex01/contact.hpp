#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <climits>

# define LINE "- - - - - - - - - - - - - - - - - - - - - - -"
# define TABLE "|  N  |   F_name   |   L_name   | Nick_name |"

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

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "contact.hpp"

# define CNTR_D "\x1b[31m Exit \033[0m\n"

class PhoneBook {
	private :
		Contact	contacts[8];
		int		ContactNum;

	public :
		PhoneBook(){
			ContactNum = 0;
		}
		Contact getContact(int index);
		void AddContact(Contact contact);
		void SearchContact();
		bool Empty();
};

#endif
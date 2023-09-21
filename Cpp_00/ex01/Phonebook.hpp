#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "contact.hpp"

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
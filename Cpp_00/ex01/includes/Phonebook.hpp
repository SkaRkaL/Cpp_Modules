#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "contact.hpp"

# define CNTR_D "\x1b[31m Exit \033[0m\n"


class PhoneBook {
	private :
		Contact	contacts[8];
		int		contact_size;
		int		oldest_contact;

	public :
		PhoneBook();
		int	getContactSize();
		Contact getContact(int index);
		void addContact(Contact contact);
		bool empty();
};

#endif
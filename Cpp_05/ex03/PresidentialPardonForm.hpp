#pragma once

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private: 
		std::string	_target;
		PresidentialPardonForm(void);
	public:
		PresidentialPardonForm(const std::string& target);
		PresidentialPardonForm(const PresidentialPardonForm& obj);
		~PresidentialPardonForm();
		PresidentialPardonForm& operator=(const PresidentialPardonForm& obj);

		void execute(Bureaucrat const & executor) const;
};
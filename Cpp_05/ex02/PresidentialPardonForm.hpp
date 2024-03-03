#pragma once

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
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
#pragma once

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private: 
		std::string	_target;
		ShrubberyCreationForm(void);
	public:
		ShrubberyCreationForm(const std::string& target);
		ShrubberyCreationForm(const ShrubberyCreationForm& obj);
		~ShrubberyCreationForm();
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& obj);

		void execute(Bureaucrat const & executor) const;
};
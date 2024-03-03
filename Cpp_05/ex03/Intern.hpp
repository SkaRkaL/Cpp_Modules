#pragma once

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class	Intern
{
	public:
		Intern(void);
		Intern(const Intern& obj);
		Intern&	operator= (const  Intern& obj);
		~Intern();

		Form*	makeForm(const std::string& nameForm, const std::string& target);
};
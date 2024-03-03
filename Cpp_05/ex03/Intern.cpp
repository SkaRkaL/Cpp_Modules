#include "Intern.hpp"

Intern::Intern(void)
{}

Intern::Intern(const Intern& obj)
{
	(void)obj;
}

Intern&	Intern::operator= (const Intern& obj)
{
	(void)obj;
	return *this;
}

Intern::~Intern()
{}

Form*	Intern::makeForm(const std::string& nameForm, const std::string& target)
{
	std::string namesForm[] = {
        "robotomy request",
        "presidential pardon",
        "shrubbery creation"
    };
    Form*    form[] = {
        new RobotomyRequestForm( target ),
        new PresidentialPardonForm( target ),
        new ShrubberyCreationForm( target )
    };
    for (int i = 0; i < 3; i++)
	{
		if (nameForm == namesForm[i])
		{
			std::cout << "Intern creates " << nameForm << std::endl;
			return form[i];
		}
	}
	std::cout << "Intern cannot create " << nameForm << "!!" << std::endl;
	return NULL;
}

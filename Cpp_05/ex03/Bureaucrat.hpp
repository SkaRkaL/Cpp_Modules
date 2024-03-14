#pragma once

#include <iostream>
#include <string>
#include "Form.hpp"

class	Form;

class Bureaucrat
{
	private:
		std::string const _name;
		int _grade;
	public:
		Bureaucrat(void);
		Bureaucrat(const std::string& name, int grade);
		Bureaucrat(const Bureaucrat& obj);
		Bureaucrat&	operator= (const Bureaucrat& obj);
		~Bureaucrat();

		std::string	getName(void) const;
		int			getGrade(void) const;

		void		increment(void);
		void		decrement(void);

		void		signForm(Form& obj);

		void		executeForm(Form const & form);

		// Nested classes that throw exceptions
		class	GradeTooLowException : public std::exception
		{
			public:
				const char *what() const throw();
		};

		class	GradeTooHighException : public std::exception
		{
			public:
				const char *what() const throw();
		};
};

std::ostream& operator<< (std::ostream& os, const Bureaucrat& obj);
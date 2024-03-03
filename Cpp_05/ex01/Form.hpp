#pragma once

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form
{
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_requiredToSigned;
		const int			_requiredToExecute;
	public:
		Form(void);
		Form(const std::string& name, int requiredToSigned);
		Form(const std::string& name, int requiredToSigned, int requiredToExecute);
		Form(const Form& obj);
		~Form();
		Form&	operator= (const Form& obj);

		std::string	getName(void) const;
		bool        getSigned(void) const;
		int         getGradeToSigned(void) const;
		int         getGradeToExecute(void) const;

		void		beSigned(const Bureaucrat& obj);

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

std::ostream& operator<< (std::ostream& os, const Form& obj);

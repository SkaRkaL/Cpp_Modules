#pragma once

#include <iostream>
#include <fstream>
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
		virtual ~Form();
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

		class GradeTooHighException : public std::exception
		{
		public:
			const char* what() const throw();
		};

		class NonSignedException : public std::exception
		{
		public:
			const char* what() const throw();
		};

		class	CannotOpenAFile : public std::exception
		{
			public:
				const char *what() const throw();
		};
		

		virtual	void execute(Bureaucrat const & executor) const = 0;
};

std::ostream& operator<< (std::ostream& os, const Form& obj);

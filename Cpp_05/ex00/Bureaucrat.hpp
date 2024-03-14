#pragma once

#include <iostream>
#include <string>
#include <exception>
#include <stdexcept>

class Bureaucrat {
	private:
		const std::string	_name;
		int					_grade;
	public:
		Bureaucrat ( std::string name, int grade );
		Bureaucrat ( const Bureaucrat& other );
		~Bureaucrat ( void );

		const Bureaucrat& operator= (const Bureaucrat& other);

		int getGrade( void ) const;
		std::string getName( void ) const;

		void increment( void );
		void decrement( void );

		class GradeTooHighException : public std::exception
		{
			public:
			const char* what( void ) const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
			const char* what( void ) const throw();
		};

};

std::ostream& operator << (std::ostream& out, const Bureaucrat& _bureaucrat);

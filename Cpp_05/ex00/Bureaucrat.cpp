#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( std::string name, int grade )
    : _name( name )
{
    std::cout << "Bureaucrat: constructor called\n";
	if (grade < 1){
		throw (GradeTooHighException());
	} else if (grade > 150){
		throw (GradeTooLowException());
	}
	_grade = grade;
}

Bureaucrat::Bureaucrat( const Bureaucrat& other )
    : _name( other.getName() ),
	_grade ( other.getGrade() )
{
    std::cout << "Bureaucrat: Copy Constructor Called\n";
}

Bureaucrat::~Bureaucrat( void )
{
    std::cout << "Bureaucrat: Default Destructor Called\n";
}

const Bureaucrat	&Bureaucrat::operator= ( const Bureaucrat& other )
{
	_grade = other.getGrade();
    return *this;
}

std::ostream	&operator << (std::ostream& out, const Bureaucrat& _bureaucrat)
{
	out << _bureaucrat.getName() << ", bureaucrat grade " << _bureaucrat.getGrade() << std::endl;

	return (out);
}

const char* Bureaucrat::GradeTooHighException::what( void ) const throw()
{
	return "GradeTooHighException\n";
}

const char* Bureaucrat::GradeTooLowException::what( void ) const throw() {
	return "GradeTooLowException\n";
}

int	Bureaucrat::getGrade( void ) const
{
    return ( _grade );
}

std::string Bureaucrat::getName( void ) const
{
	return ( _name );
}

void Bureaucrat::increment( void )
{
	if (_grade == 1)
		throw (GradeTooHighException());
	_grade--;
}

void Bureaucrat::decrement( void )
{
	if (_grade == 150)
		throw (GradeTooLowException());
	_grade++;
}

#include "Bureaucrat.hpp"

Bureaucrat& Bureaucrat::operator= (const Bureaucrat& obj)
{
	if (this != &obj)
		_grade = obj._grade;
	return (*this);
}

Bureaucrat::Bureaucrat(void) : _name("unknown"), _grade(75)
{}

Bureaucrat::Bureaucrat(const Bureaucrat& obj) : _name(obj._name), _grade(obj._grade)
{}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	_grade = grade;
}

Bureaucrat::~Bureaucrat()
{}

std::string	Bureaucrat::getName(void) const
{
	return _name;
}

int			Bureaucrat::getGrade(void) const
{
	return _grade;
}

void		Bureaucrat::incrementGrade(void)
{
 	if (_grade - 1 < 1)
		throw GradeTooHighException();
	_grade--;
}

void		Bureaucrat::decrementGrade(void)
{
	if (_grade + 1 > 150)
		throw GradeTooLowException();
	_grade++;
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade Too Low";
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade Too High";
}


std::ostream& operator<< (std::ostream& os, const Bureaucrat& obj)
{
	os << obj.getName() << ",  bureaucrat grade " << obj.getGrade();
	return os;
}

void	Bureaucrat::signForm(AForm& obj)
{
	try
	{
		obj.beSigned(*this);
		std::cout << this->getName() << " signed " << obj.getName() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << this->getName() << " couldn't sign " << obj.getName() << " because " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const & form)
{
	try
	{
		form.execute(*this);
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << this->getName() << " couldn't executed " << form.getName() << " because " << e.what() << std::endl;
	}
}
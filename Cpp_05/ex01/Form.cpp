#include "Form.hpp"

Form::Form(void)
	:	_name("unknown"),
		_isSigned(false),
		_requiredToSigned(75),
		_requiredToExecute(75)
{}

Form::Form(const std::string& name, int requiredToSigned)
	:	_name(name),
		_isSigned(false),
		_requiredToSigned(requiredToSigned),
		_requiredToExecute(75)
{
	if (requiredToSigned < 1)
		throw GradeTooHighException();
	else if (requiredToSigned > 150)
		throw GradeTooLowException();
}

Form::Form(const std::string& name, int requiredToSigned, int requiredToExecute)
	:	_name(name),
		_isSigned(false),
		_requiredToSigned(requiredToSigned),
		_requiredToExecute(requiredToExecute)
{
	if (requiredToSigned < 1)
		throw GradeTooHighException();
	else if (requiredToSigned > 150)
		throw GradeTooLowException();
}

Form::Form(const Form& obj)
	:	_name(obj._name),
		_isSigned(obj._isSigned),
		_requiredToSigned(obj._requiredToSigned),
		_requiredToExecute(obj._requiredToExecute)
{}

Form::~Form()
{}

Form&	Form::operator= (const Form& obj)
{
	if (this != &obj)
		_isSigned = obj._isSigned;
	return *this;
}

std::string	Form::getName(void) const
{
	return _name;
}

bool		Form::getSigned(void) const
{
	return _isSigned;
}

int			Form::getGradeToSigned(void) const
{
	return _requiredToSigned;
}

int			Form::getGradeToExecute(void) const
{
	return _requiredToExecute;
}

void		Form::beSigned(const Bureaucrat& obj)
{
	if (obj.getGrade() > _requiredToSigned)
		throw GradeTooLowException();
	_isSigned = true;
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return "GradeTooLowException";
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return "GradeTooHighException";
}

std::ostream& operator<< (std::ostream& out, const Form& obj)
{
	out << "------------- Form -------------" << std::endl;
	out << std::endl;
    out << "F_Name: [ " << obj.getName() << " ]" << std::endl
		<< "Grade to Sign: [ " << obj.getGradeToSigned() << " ]" << std::endl
		<< "Grade to Execute: [ " << obj.getGradeToExecute() << " ]" << std::endl
		<< "Is Signed? : [ ";
		if (obj.getSigned())
			out << "true";
		else
			out << "false";
	out << " ]" << std::endl;
    return out;
}
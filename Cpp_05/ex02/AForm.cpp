#include "AForm.hpp"

AForm::AForm(void)
	:	_name("unknown"),
		_isSigned(false),
		_requiredToSigned(75),
		_requiredToExecute(75)
{}

AForm::AForm(const std::string& name, int requiredToSigned)
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

AForm::AForm(const std::string& name, int requiredToSigned, int requiredToExecute)
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

AForm::AForm(const AForm& obj)
	:	_name(obj._name),
		_isSigned(obj._isSigned),
		_requiredToSigned(obj._requiredToSigned),
		_requiredToExecute(obj._requiredToExecute)
{}

AForm::~AForm()
{}

AForm&	AForm::operator= (const AForm& obj)
{
	if (this != &obj)
		_isSigned = obj._isSigned;
	return *this;
}

std::string	AForm::getName(void) const
{
	return _name;
}

bool		AForm::getSigned(void) const
{
	return _isSigned;
}

int			AForm::getGradeToSigned(void) const
{
	return _requiredToSigned;
}

int			AForm::getGradeToExecute(void) const
{
	return _requiredToExecute;
}

const char	*AForm::GradeTooLowException::what() const throw()
{
	return "Grade Too Low";
}

const char	*AForm::GradeTooHighException::what() const throw()
{
	return "Grade Too High";
}

const char	*AForm::NonSignedException::what() const throw()
{
	return "Still not signed!!";
}

const char	*AForm::CannotOpenAFile::what() const throw()
{
	return "can not open the file!!";
}

std::ostream& operator<< (std::ostream& os, const AForm& obj)
{
	os << "------------- AForm -------------" << std::endl;
    os << "AForm name: " << obj.getName() << std::endl
		<< "Grade to sign: " << obj.getGradeToSigned() << std::endl
		<< "Grade to execute: " << obj.getGradeToExecute() << std::endl
		<< "Is signed : ";
		if (obj.getSigned())
			os << "true";
		else
			os << "false";
    return os;
}

void		AForm::beSigned(const Bureaucrat& obj)
{
	if (obj.getGrade() > _requiredToSigned)
		throw GradeTooLowException();
	_isSigned = true;
}
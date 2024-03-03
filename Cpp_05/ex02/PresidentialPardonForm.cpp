#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
	:	AForm("PresidentialPardonForm", 25, 5),
		_target("unknown")
{}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
	:	AForm("PresidentialPardonForm", 25, 5),
		_target(target)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj)
	:	AForm("PresidentialPardonForm", 25, 5),
		_target(obj._target)
{}

PresidentialPardonForm::~PresidentialPardonForm()
{}

PresidentialPardonForm&	PresidentialPardonForm::operator= (const PresidentialPardonForm& obj)
{
	if (this != &obj)
		_target = obj._target;
	return *this;
}

void	PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
	if (executor.getGrade() > this->getGradeToExecute())
		throw GradeTooLowException();
	if (!this->getSigned())
		throw NonSignedException();
	std::cout << "info: " << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
} 
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)
	:	Form("RobotomyRequestForm", 72, 45),
		_target("unknown")
{
	srand(time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
	:	Form("RobotomyRequestForm", 72, 45),
		_target(target)
{
	srand(time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj)
	:	Form("RobotomyRequestForm", 72, 45),
		_target(obj._target)
{
	srand(time(NULL));
}

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm&	RobotomyRequestForm::operator= (const RobotomyRequestForm& obj)
{
	if (this != &obj)
		_target = obj._target;
	return *this;
}

void	RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
	if (executor.getGrade() > this->getGradeToExecute())
		throw GradeTooLowException();
	if (!this->getSigned())
		throw NonSignedException();
	std::cout << "-------------------------------------" << std::endl;
	int i = rand() % 2;
	if (i == 0)
		std::cout << "info: " << this->_target << " has been robotomized successfully." << std::endl;
	else
		std::cout << "info: " << this->_target << " robotic failure.." << std::endl;
} 
#pragma once

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private: 
		std::string	_target;
		RobotomyRequestForm(void);
	public:
		RobotomyRequestForm(const std::string& target);
		RobotomyRequestForm(const RobotomyRequestForm& obj);
		~RobotomyRequestForm();
		RobotomyRequestForm& operator=(const RobotomyRequestForm& obj);

		void execute(Bureaucrat const & executor) const;
};
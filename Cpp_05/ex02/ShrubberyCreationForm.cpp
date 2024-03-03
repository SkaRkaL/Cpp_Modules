#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) 
	:	AForm("ShrubberyCreationForm", 145, 137),
		_target("unknown")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) 
	:	AForm("ShrubberyCreationForm", 145, 137),
		_target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj) 
	:	AForm("ShrubberyCreationForm", 145, 137),
		_target(obj._target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator= (const ShrubberyCreationForm& obj)
{
	if (this != &obj)
		_target = obj._target;
	return *this;
}

void	ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
	if (executor.getGrade() > this->getGradeToExecute())
		throw GradeTooLowException();
	if (!this->getSigned())
		throw NonSignedException();
	std::ofstream	file(_target + "_shrubbery");
	if (!file.is_open())
		throw CannotOpenAFile();
	file << "                      ___" << std::endl;
	file << "                _,-'\"\"   \"\"\"\"`--." << std::endl;
	file << "             ,-'          __,,-- \\" << std::endl;
	file << "           ,\'    __,--\"\"\"\"dF      )" << std::endl;
	file << "          /   .-\"Hb_,--\"\"dF      /" << std::endl;
	file << "        ,\'       _Hb ___dF\"-._,-'" << std::endl;
	file << "      ,'      _,-\"\"\"\"   \"\"--..__" << std::endl;
	file << "     (     ,-'                  `." << std::endl;
	file << "      `._,'     _   _             ;" << std::endl;
	file << "       ,'     ,' `-'Hb-.___..._,-'" << std::endl;
	file << "       \\    ,'\"Hb.-'HH`-.dHF\"" << std::endl;
	file << "        `--\'   \"Hb  HH  dF\"" << std::endl;
	file << "                \"Hb HH dF" << std::endl;
	file << "                 \"HbHHdF" << std::endl;
	file << "                  |HHHF" << std::endl;
	file << "                  |HHH|" << std::endl;
	file << "                  |HHH|" << std::endl;
	file << "                  |HHH|" << std::endl;
	file << "                  |HHH|" << std::endl;
	file << "                  dHHHb" << std::endl;
	file << "                .dFd|bHb.               o" << std::endl;
	file << "      o       .dHFdH|HbTHb.          o /" << std::endl;
	file << "\\  Y  |  \\__,dHHFdHH|HHhoHHb.__Krogg  Y" << std::endl;
	file << "##########################################" << std::endl;
	file.close();
}
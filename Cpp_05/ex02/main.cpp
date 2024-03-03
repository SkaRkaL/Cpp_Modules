#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main( void )
{

    try {
        Bureaucrat bureaucrat("Sma9ma9", 5);
        ShrubberyCreationForm form1("Shrubbery");
        RobotomyRequestForm form2("Robotomy");
        PresidentialPardonForm form3("President");

        bureaucrat.signForm(form1);
        bureaucrat.executeForm(form1);
        std::cout << form1 << std::endl;
        bureaucrat.signForm(form2);
        bureaucrat.executeForm(form2);
        form2.execute(bureaucrat);
        bureaucrat.signForm(form3);
        bureaucrat.executeForm(form3);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main( void )
{
    {
        Bureaucrat bureaucrat("S m a 9 m a 9", 5);
        Intern  someRandomIntern;
        Form*   rrf;

        rrf = someRandomIntern.makeForm("robotomy", "London");
        
        if (rrf != NULL)
            bureaucrat.signForm(*rrf);
        delete rrf;
    }
    try {
        std::cout << "------------------------------------" << std::endl;
        Bureaucrat bureaucrat("S m a 9 m a 9", 5);
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
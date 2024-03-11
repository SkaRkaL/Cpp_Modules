#include "Bureaucrat.hpp"
#include "Form.hpp"

int main( void )
{

    try {
        Bureaucrat bureaucrat("Sma9ma9", 4);
        Form form("S K A R K A L", 3);

        bureaucrat.signForm(form);

        std::cout << form << std::endl;
    }

    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return EXIT_SUCCESS;
}
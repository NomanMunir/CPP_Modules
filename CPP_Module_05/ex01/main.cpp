#include "Bureaucrat.hpp"
#include "Form.hpp"

int main( void )
{
    Bureaucrat bureaucrat("Pikachu",11);
    Form form("the form", 10, 9);
    try {
        bureaucrat.signForm(form);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << form;
    std::cout << bureaucrat << std::endl;
    return 0;
}
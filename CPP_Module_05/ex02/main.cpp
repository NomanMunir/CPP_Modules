#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main( void )
{
    try {
        Bureaucrat bureaucrat("Pikachu", 1);
        ShrubberyCreationForm shrb = ShrubberyCreationForm("bus form");
        RobotomyRequestForm roboto = RobotomyRequestForm("robotio");
        RobotomyRequestForm roboto2 = RobotomyRequestForm("robotio");
        PresidentialPardonForm pres = PresidentialPardonForm("pres");

        bureaucrat.signForm(shrb);
        bureaucrat.executeForm(shrb);
        bureaucrat.signForm(roboto);
        bureaucrat.executeForm(roboto);

        bureaucrat.signForm(roboto2);
        bureaucrat.executeForm(roboto2);

        bureaucrat.signForm(pres);
        bureaucrat.executeForm(pres);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}

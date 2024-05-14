#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main( void )
{
    Intern someRandomIntern;
    AForm* rrf;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    Bureaucrat b("Nauman", 1);
    if (rrf)
    {
        b.signForm(*rrf);
        b.executeForm(*rrf);
    }
    if (rrf) delete rrf;
    return 0;
}

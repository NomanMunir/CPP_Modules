#include "Intern.hpp"

Intern::Intern() 
{

}
Intern::Intern(const Intern &other)
{
	(void)other;
}
Intern::~Intern() {}

Intern &Intern::operator=(const AForm &rhs)
{
	(void)rhs;
	return (*this);
}

AForm *Intern::makeForm(std::string form, std::string target)
{
	std::string formArray[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	AForm *formPtr[] = {new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target)};
	for (int i = 0; i < 3; i++)
	{
		if (formPtr[i] &&  formArray[i] == form)
		{
			std::cout << "Intern creates " << formArray[i] << std::endl;
			AForm *clone = formPtr[i]->clone();
			for (size_t i = 0; i < 3; i++) if (formPtr[i]) delete formPtr[i];
			return (clone);
		}
	}
	for (size_t i = 0; i < 3; i++) if (formPtr[i]) delete formPtr[i];
	std::cout << "Required form is not found" << std::endl;
	return (NULL);
}
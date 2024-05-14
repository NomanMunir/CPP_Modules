#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &name): AForm(name, 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other): AForm(other) {}
PresidentialPardonForm::~PresidentialPardonForm() {}
PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	(void) rhs;
	return (*this);
}

AForm * PresidentialPardonForm::clone()
{
	return (new PresidentialPardonForm(*this));
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!this->getIsSigned())
		throw NotSignedException();
	else if (executor.getGrade() > this->getExeGrade())
		throw GradeTooLowException();
	std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

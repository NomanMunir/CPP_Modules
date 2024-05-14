#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &name): AForm(name, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other): AForm(other) {}
RobotomyRequestForm::~RobotomyRequestForm() {}
RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	(void) rhs;
	return (*this);
}

AForm * RobotomyRequestForm::clone()
{
	return (new RobotomyRequestForm(*this));
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	static int i;
	if (!this->getIsSigned())
		throw NotSignedException();
	else if (executor.getGrade() > this->getExeGrade())
		throw GradeTooLowException();
	if (i % 2 == 0)
		 std::cout << "BZZZZZT! " << this->getName() << " has been robotomized!" << std::endl;
	else
		std::cout << "Robotomy failed! " << this->getName() << std::endl;
	i++;
}

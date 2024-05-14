#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	RobotomyRequestForm();
  public:
	RobotomyRequestForm(const std::string &name);
	RobotomyRequestForm(const RobotomyRequestForm &other);
	~RobotomyRequestForm();
	RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);
	AForm * clone();
	void execute(Bureaucrat const & executor) const;
};
#endif // !ROBOTOMYREQUESTFORM_HPP
#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	PresidentialPardonForm();
  public:
	PresidentialPardonForm(const std::string &name);
	PresidentialPardonForm(const PresidentialPardonForm &other);
	~PresidentialPardonForm();
	PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);
	AForm * clone();
	void execute(Bureaucrat const & executor) const;
};

#endif // !PRESIDENTIALPARDONFORM_HPP
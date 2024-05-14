#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	ShrubberyCreationForm();
  public:
	ShrubberyCreationForm(const std::string &name);
	ShrubberyCreationForm(const ShrubberyCreationForm &other);
	~ShrubberyCreationForm();
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);
	AForm * clone();
	void execute(Bureaucrat const & executor) const;
};

#endif // !SHRUBBERYCREATIONFORM_HPP
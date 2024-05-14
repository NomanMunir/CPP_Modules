#include "AForm.hpp"

AForm::AForm() : _name("unknown"), _isSigned(false), _signGrade(0), _exeGrade(0) {}

AForm::AForm(const std::string &name, int grade, int exeGrade) : _name(name), _isSigned(false), _signGrade(grade), _exeGrade(exeGrade) {}

AForm::AForm(const AForm &other): _name(other._name), _isSigned(other._isSigned), _signGrade(other._signGrade), _exeGrade(other._exeGrade) {}

AForm::~AForm() {}

AForm &AForm::operator=(const AForm &rhs)
{
	if (this != &rhs)
	{
		this->_isSigned = rhs._isSigned;
	}
	return (*this);
}

std::string AForm::getName() const
{
	return (this->_name);
}

bool AForm::getIsSigned() const
{
	return (this->_isSigned);
}

int AForm::getSignGrade() const
{
	return (this->_signGrade);
}

int AForm::getExeGrade() const
{
	return (this->_exeGrade);
}

void AForm::beSigned(Bureaucrat& bur)
{
	if (bur.getGrade() > this->_signGrade)
		throw GradeTooLowException();
	this->_isSigned = true;
}

std::ostream& operator<<( std::ostream& o, const AForm& rhs ) {
    o << "AForm Name: " << rhs.getName() << std::endl;
	o << "AForm Grade: " << rhs.getSignGrade() << std::endl;
	o << "AForm Signed: " << rhs.getIsSigned() << std::endl;
    return o;
}
#include "Form.hpp"

Form::Form(const std::string &name, int grade, int exeGrade) : _name(name), _isSigned(false), _signGrade(grade), _exeGrade(exeGrade) {}

Form::Form(const Form &other): _name(other._name), _isSigned(other._isSigned), _signGrade(other._signGrade), _exeGrade(other._exeGrade) {}

Form::~Form() {}

Form &Form::operator=(const Form &rhs)
{
	if (this != &rhs)
	{
		this->_isSigned = rhs._isSigned;
	}
	return (*this);
}

std::string Form::getName() const
{
	return (this->_name);
}

bool Form::getIsSigned() const
{
	return (this->_isSigned);
}

int Form::getSignGrade() const
{
	return (this->_signGrade);
}

int Form::getExeGrade() const
{
	return (this->_exeGrade);
}

void Form::beSigned(Bureaucrat& bur)
{
	if (bur.getGrade() > this->_signGrade)
		throw GradeTooLowException();
	this->_isSigned = true;
}

std::ostream& operator<<( std::ostream& o, const Form& rhs ) {
    o << "Form Name: " << rhs.getName() << std::endl;
	o << "Form Grade: " << rhs.getSignGrade() << std::endl;
	o << "Form ExeGrade: " << rhs.getExeGrade() << std::endl;
	o << "Form Signed: " << rhs.getIsSigned() << std::endl;
    return o;
}